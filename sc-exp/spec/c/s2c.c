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
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_BuildDefault_1;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_CallNoArgs_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
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
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Script_1 = ATmakeSymbol("Script", 1, ATfalse);
  ATprotectSymbol(sym_Script_1);
  sym_Command_1 = ATmakeSymbol("Command", 1, ATfalse);
  ATprotectSymbol(sym_Command_1);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Star_0 = ATmakeSymbol("Star", 0, ATfalse);
  ATprotectSymbol(sym_Star_0);
  sym_StarStar_0 = ATmakeSymbol("StarStar", 0, ATfalse);
  ATprotectSymbol(sym_StarStar_0);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
ATerm term_q_41;
ATerm term_d_41;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_x_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_h_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_n_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_c_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_u_17;
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
ATerm term_b_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_a_15;
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
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_r_10;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_y_6;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_k_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Id_1, term_l_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_8, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Id_1, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_8, (ATerm) ATempty);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_8, term_v_8);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
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
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, term_x_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_p_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_17, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_l_17, term_v_8);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_17, (ATerm) ATempty);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_17, term_v_8);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_18, (ATerm) ATempty);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_g_18, term_v_8);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_14);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Id_1, term_t_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_19, (ATerm) ATempty);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_19, term_v_8);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_d_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_x_16);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_1, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_20, term_u_14);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, term_x_16);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Id_1, term_v_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_h_21, term_u_14);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_21, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_18);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, term_x_16);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Return_1, term_x_16);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Id_1, term_p_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_16, term_v_8);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_8, term_v_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Id_1, term_a_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Id_1, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_27, (ATerm) ATempty);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_8, term_v_8);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_29, (ATerm) ATempty);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Some_1, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_r_8, term_l_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Op_2, term_e_30, (ATerm) ATempty);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_d_16);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_16);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_w_36, term_x_25);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_x_25);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_n_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_x_25);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_x_25);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_x_38, term_x_25);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__3, term_m_39, term_n_39, (ATerm) ATempty);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm k_127 (ATerm), ATerm l_127 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm f_106 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm d_104 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm f_84 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm k_93 (ATerm));
ATerm FunCall_2 (ATerm, ATerm o_96 (ATerm), ATerm p_96 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm c_105 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_105 (ATerm));
ATerm TranslateStrat_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm h_117 (ATerm));
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm TranslateStratMatchGuard_0 (ATerm);
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
ATerm string_as_chars_1 (ATerm, ATerm d_120 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm k_131 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm z_119 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm f_131 (ATerm));
ATerm restore_always_2 (ATerm, ATerm w_103 (ATerm), ATerm x_103 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_131 (ATerm));
ATerm scope_2 (ATerm, ATerm g_131 (ATerm), ATerm h_131 (ATerm));
ATerm assert_1 (ATerm, ATerm i_131 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_111 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_123 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm t_122 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_124 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_122 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_118 (ATerm), ATerm h_118 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_116 (ATerm), ATerm s_116 (ATerm));
ATerm crush_2 (ATerm, ATerm k_120 (ATerm), ATerm l_120 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_123 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_125 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_128 (ATerm));
ATerm map_1 (ATerm, ATerm s_110 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_128 (ATerm));
ATerm Program_1 (ATerm, ATerm c_91 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_91 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_111 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_127 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_103 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_128 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_128 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_128 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_125 (ATerm), ATerm b_125 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,v_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      v_5 = ATgetArgument(j_5, 1);
      {
        ATerm b_6 = NULL;
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = not_null(k_5);
        {
          ATerm n_6 = t;
          int r_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(r_6);
            }
          else
            {
              t = n_6;
              t = (ATerm) ATempty;
            }
          {
            d_6 = t;
            if(((c_6 != NULL) && (c_6 != d_6)))
              _fail(d_6);
            else
              c_6 = d_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(v_5));
          {
            t = conc_0(t);
            {
              e_6 = t;
              if(((b_6 != NULL) && (b_6 != e_6)))
                _fail(e_6);
              else
                b_6 = e_6;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_6, not_null(k_5), not_null(b_6));
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
ATerm Option_2 (ATerm t, ATerm k_127 (ATerm), ATerm l_127 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_y_6;
    return(t);
  }
  t = Option_3(t, k_127, l_127, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm o_6 = NULL;
        o_6 = t;
        i_6 :
        if(!(match_string(o_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        t = term_g_7;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_h_7;
            return(t);
          }
          t = debug_1(t, u_0);
          {
            ATerm i_7;
            i_7 = t;
            {
              t = term_l_7;
              {
                ATerm v_0 (ATerm t)
                {
                  t = term_n_7;
                  return(t);
                }
                t = assert_1(t, v_0);
              }
            }
            t = i_7;
          }
        }
        return(t);
      }
      t = Option_2(t, s_0, t_0);
      ;
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm p_6 = NULL;
              p_6 = t;
              j_6 :
              if(!(match_string(p_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              ATerm q_6 = NULL;
              q_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_y_7);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_z_7;
                    return(t);
                  }
                  t = assert_1(t, b_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(q_6));
              }
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              t = term_a_8;
              return(t);
            }
            t = ArgOption_3(t, x_0, y_0, z_0);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm c_1 (ATerm t)
              {
                ATerm s_6 = NULL;
                s_6 = t;
                l_6 :
                if(!(match_string(s_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                ATerm v_6 = NULL;
                ATerm b_8;
                b_8 = t;
                {
                  ATerm t_6 = NULL;
                  ATerm u_6 = NULL;
                  u_6 = t;
                  if(((t_6 != NULL) && (t_6 != u_6)))
                    _fail(u_6);
                  else
                    t_6 = u_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, not_null(t_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = b_8;
                {
                  ATerm w_6 = NULL;
                  w_6 = t;
                  if(((v_6 != NULL) && (v_6 != w_6)))
                    _fail(w_6);
                  else
                    v_6 = w_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(v_6));
                }
                return(t);
              }
              ATerm e_1 (ATerm t)
              {
                t = term_d_8;
                return(t);
              }
              t = ArgOption_3(t, c_1, d_1, e_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_7)), term_e_8, not_null(f_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm p_7 = NULL;
    t = not_null(m_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            p_7 = t;
            if(((o_7 != NULL) && (o_7 != p_7)))
              _fail(p_7);
            else
              o_7 = p_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_r_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_p_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym__3))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      x_7 = ATgetArgument(u_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_7)), term_v_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm f_8 = NULL;
  ATerm w_8 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = w_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm g_8 = NULL,i_8 = NULL,k_8 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm h_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        h_8 = t;
        if(((g_8 != NULL) && (g_8 != h_8)))
          _fail(h_8);
        else
          g_8 = h_8;
      }
    }
    t = h_10;
    {
      ATerm j_8 = NULL;
      t = InitTermIds_0(t);
      {
        j_8 = t;
        if(((i_8 != NULL) && (i_8 != j_8)))
          _fail(j_8);
        else
          i_8 = j_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), (ATerm) ATinsert(ATempty, not_null(i_8)));
        {
          t = conc_0(t);
          {
            k_8 = t;
            if(((f_8 != NULL) && (f_8 != k_8)))
              _fail(k_8);
            else
              f_8 = k_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(f_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm f_106 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_106(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = _one(t, o_8);
      }
    return(t);
  }
  t = o_8(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  ATerm z_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(a_10)), not_null(u_9));
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(a_10), not_null(b_10));
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(b_10));
    t = conc_0(t);
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    ATerm p_10 = NULL;
    ATerm q_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(d_10));
    {
      t = conc_0(t);
      {
        q_10 = t;
        if(((p_10 != NULL) && (p_10 != q_10)))
          _fail(q_10);
        else
          p_10 = q_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(p_10), not_null(e_10));
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm v_10 = NULL,x_10 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm w_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(d_10));
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
    }
    t = k_10;
    {
      ATerm y_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(f_10));
      {
        t = conc_0(t);
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(v_10), not_null(x_10));
    }
    return(t);
  }
  z_9 = t;
  x_8 :
  if(match_cons(z_9, sym_IfElse_3))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      u_9 = ATgetArgument(z_9, 2);
      y_8 :
      if(match_cons(u_9, sym_Compound_2))
        {
          v_9 = ATgetArgument(u_9, 0);
          w_9 = ATgetArgument(u_9, 1);
          z_8 :
          if(((ATgetType(w_9) == AT_LIST) && ATisEmpty(w_9)))
            {
              a_9 :
              if(((ATgetType(v_9) == AT_LIST) && ATisEmpty(v_9)))
                {
                  b_9 :
                  if(match_cons(b_10, sym_Compound_2))
                    {
                      c_10 = ATgetArgument(b_10, 0);
                      f_10 = ATgetArgument(b_10, 1);
                      c_9 :
                      if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
                        {
                          d_9 :
                          if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                            {
                              {
                                ATerm l_10 = t;
                                int m_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_10(t);
                                    ;
                                    LocalPopChoice(m_10);
                                  }
                                else
                                  {
                                    t = l_10;
                                    t = a_11(t);
                                  }
                              }
                            }
                          else
                            {
                              t = a_11(t);
                            }
                        }
                      else
                        {
                          e_9 :
                          t = a_11(t);
                        }
                    }
                  else
                    {
                      t = a_11(t);
                    }
                }
              else
                {
                  f_9 :
                  if(match_cons(b_10, sym_Compound_2))
                    {
                      c_10 = ATgetArgument(b_10, 0);
                      f_10 = ATgetArgument(b_10, 1);
                      g_9 :
                      if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                        {
                          h_9 :
                          if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
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
                      _fail(t);
                    }
                }
            }
          else
            {
              i_9 :
              j_9 :
              if(match_cons(b_10, sym_Compound_2))
                {
                  c_10 = ATgetArgument(b_10, 0);
                  f_10 = ATgetArgument(b_10, 1);
                  k_9 :
                  if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                    {
                      l_9 :
                      if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
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
                  _fail(t);
                }
            }
        }
      else
        {
          m_9 :
          if(match_cons(b_10, sym_Compound_2))
            {
              c_10 = ATgetArgument(b_10, 0);
              f_10 = ATgetArgument(b_10, 1);
              n_9 :
              if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                {
                  o_9 :
                  if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
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
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
        {
          a_10 = ATgetFirst((ATermList) z_9);
          b_10 = (ATerm) ATgetNext((ATermList) z_9);
          p_9 :
          if(match_cons(a_10, sym_Compound_2))
            {
              x_9 = ATgetArgument(a_10, 0);
              y_9 = ATgetArgument(a_10, 1);
              q_9 :
              if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                {
                  t = b_11(t);
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
          if(match_cons(z_9, sym_Compound_2))
            {
              a_10 = ATgetArgument(z_9, 0);
              b_10 = ATgetArgument(z_9, 1);
              r_9 :
              if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
                {
                  c_10 = ATgetFirst((ATermList) b_10);
                  f_10 = (ATerm) ATgetNext((ATermList) b_10);
                  s_9 :
                  if(match_cons(c_10, sym_Compound_2))
                    {
                      d_10 = ATgetArgument(c_10, 0);
                      e_10 = ATgetArgument(c_10, 1);
                      t_9 :
                      if(((ATgetType(f_10) == AT_LIST) && ATisEmpty(f_10)))
                        {
                          {
                            ATerm n_10 = t;
                            int o_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = c_11(t);
                                ;
                                LocalPopChoice(o_10);
                              }
                            else
                              {
                                t = n_10;
                                t = d_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = d_11(t);
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
ATerm repeat_1 (ATerm t, ATerm d_104 (ATerm))
{
  ATerm h_11 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = d_104(t);
      t = h_11(t);
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  p_11 = t;
  {
    ATerm u_11 = NULL;
    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
    t = not_null(p_11);
    {
      u_11 = t;
      {
        t = SSL_explode_term(not_null(u_11));
        {
          w_11 = t;
          l_11 :
          if(match_cons(w_11, sym__2))
            {
              x_11 = ATgetArgument(w_11, 0);
              y_11 = ATgetArgument(w_11, 1);
              m_11 :
              if(match_string(x_11, ""))
                {
                  n_11 :
                  if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
                    {
                      z_11 = ATgetFirst((ATermList) y_11);
                      a_12 = (ATerm) ATgetNext((ATermList) y_11);
                      o_11 :
                      if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
                        {
                          b_12 = ATgetFirst((ATermList) a_12);
                          c_12 = (ATerm) ATgetNext((ATermList) a_12);
                          {
                            if(((r_11 != NULL) && (r_11 != z_11)))
                              _fail(z_11);
                            else
                              r_11 = z_11;
                            {
                              if(((t_11 != NULL) && (t_11 != b_12)))
                                _fail(b_12);
                              else
                                t_11 = b_12;
                              if(((s_11 != NULL) && (s_11 != c_12)))
                                _fail(c_12);
                              else
                                s_11 = c_12;
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
    t = not_null(t_11);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm m_12 = NULL;
  k_12 = t;
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm g_1 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = rewrite_1(t, g_1);
      {
        n_12 = t;
        i_12 :
        if(match_cons(n_12, sym_Defined_2))
          {
            o_12 = ATgetArgument(n_12, 0);
            p_12 = ATgetArgument(n_12, 1);
            j_12 :
            if(match_string(o_12, "h_0"))
              {
                if(((m_12 != NULL) && (m_12 != p_12)))
                  _fail(p_12);
                else
                  m_12 = p_12;
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
    t = not_null(m_12);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm f_84 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_BuildDefault_1))
    {
      y_12 = ATgetArgument(x_12, 0);
      {
        ATerm b_13 = NULL,d_13 = NULL;
        ATerm c_13 = NULL;
        t = SSLgetAnnotations(not_null(x_12));
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
        {
          t = not_null(y_12);
          {
            ATerm f_13 = NULL;
            t = f_84(t);
            {
              d_13 = t;
              {
                ATerm g_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(d_13)), not_null(b_13));
                {
                  g_13 = t;
                  if(((f_13 != NULL) && (f_13 != g_13)))
                    _fail(g_13);
                  else
                    f_13 = g_13;
                }
                t = not_null(f_13);
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
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Real_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = NULL,a_14 = NULL;
            ATerm z_13 = NULL;
            t = SSLgetAnnotations(not_null(u_13));
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
            {
              t = not_null(v_13);
              {
                ATerm c_14 = NULL;
                t = v_2(t);
                {
                  a_14 = t;
                  {
                    ATerm d_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(a_14)), not_null(y_13));
                    {
                      d_14 = t;
                      if(((c_14 != NULL) && (c_14 != d_14)))
                        _fail(d_14);
                      else
                        c_14 = d_14;
                    }
                    t = not_null(c_14);
                  }
                }
              }
            }
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            {
              ATerm g_14 = NULL,i_14 = NULL;
              ATerm h_14 = NULL;
              t = SSLgetAnnotations(not_null(u_13));
              {
                h_14 = t;
                if(((g_14 != NULL) && (g_14 != h_14)))
                  _fail(h_14);
                else
                  g_14 = h_14;
              }
              {
                t = not_null(v_13);
                {
                  ATerm k_14 = NULL;
                  t = v_2(t);
                  {
                    i_14 = t;
                    {
                      ATerm l_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(i_14)), not_null(g_14));
                      {
                        l_14 = t;
                        if(((k_14 != NULL) && (k_14 != l_14)))
                          _fail(l_14);
                        else
                          k_14 = l_14;
                      }
                      t = not_null(k_14);
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
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_Str_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        ATerm u_10 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15 = NULL,j_15 = NULL;
            ATerm i_15 = NULL;
            t = SSLgetAnnotations(not_null(d_15));
            {
              i_15 = t;
              if(((h_15 != NULL) && (h_15 != i_15)))
                _fail(i_15);
              else
                h_15 = i_15;
            }
            {
              t = not_null(e_15);
              {
                ATerm l_15 = NULL;
                t = u_2(t);
                {
                  j_15 = t;
                  {
                    ATerm m_15 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(j_15)), not_null(h_15));
                    {
                      m_15 = t;
                      if(((l_15 != NULL) && (l_15 != m_15)))
                        _fail(m_15);
                      else
                        l_15 = m_15;
                    }
                    t = not_null(l_15);
                  }
                }
              }
            }
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = u_10;
            {
              ATerm p_15 = NULL,r_15 = NULL;
              ATerm q_15 = NULL;
              t = SSLgetAnnotations(not_null(d_15));
              {
                q_15 = t;
                if(((p_15 != NULL) && (p_15 != q_15)))
                  _fail(q_15);
                else
                  p_15 = q_15;
              }
              {
                t = not_null(e_15);
                {
                  ATerm t_15 = NULL;
                  t = u_2(t);
                  {
                    r_15 = t;
                    {
                      ATerm u_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(r_15)), not_null(p_15));
                      {
                        u_15 = t;
                        if(((t_15 != NULL) && (t_15 != u_15)))
                          _fail(u_15);
                        else
                          t_15 = u_15;
                      }
                      t = not_null(t_15);
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
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym_Int_1))
    {
      n_16 = ATgetArgument(m_16, 0);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL,s_16 = NULL;
            ATerm r_16 = NULL;
            t = SSLgetAnnotations(not_null(m_16));
            {
              r_16 = t;
              if(((q_16 != NULL) && (q_16 != r_16)))
                _fail(r_16);
              else
                q_16 = r_16;
            }
            {
              t = not_null(n_16);
              {
                ATerm u_16 = NULL;
                t = t_2(t);
                {
                  s_16 = t;
                  {
                    ATerm v_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(s_16)), not_null(q_16));
                    {
                      v_16 = t;
                      if(((u_16 != NULL) && (u_16 != v_16)))
                        _fail(v_16);
                      else
                        u_16 = v_16;
                    }
                    t = not_null(u_16);
                  }
                }
              }
            }
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm y_16 = NULL,a_17 = NULL;
              ATerm z_16 = NULL;
              t = SSLgetAnnotations(not_null(m_16));
              {
                z_16 = t;
                if(((y_16 != NULL) && (y_16 != z_16)))
                  _fail(z_16);
                else
                  y_16 = z_16;
              }
              {
                t = not_null(n_16);
                {
                  ATerm c_17 = NULL;
                  t = t_2(t);
                  {
                    a_17 = t;
                    {
                      ATerm d_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_17)), not_null(y_16));
                      {
                        d_17 = t;
                        if(((c_17 != NULL) && (c_17 != d_17)))
                          _fail(d_17);
                        else
                          c_17 = d_17;
                      }
                      t = not_null(c_17);
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_Anno_2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18 = NULL,f_18 = NULL;
            ATerm e_18 = NULL;
            t = SSLgetAnnotations(not_null(x_17));
            {
              e_18 = t;
              if(((d_18 != NULL) && (d_18 != e_18)))
                _fail(e_18);
              else
                d_18 = e_18;
            }
            {
              t = not_null(y_17);
              {
                ATerm h_18 = NULL;
                t = r_2(t);
                {
                  f_18 = t;
                  {
                    t = not_null(z_17);
                    {
                      ATerm j_18 = NULL;
                      t = s_2(t);
                      {
                        h_18 = t;
                        {
                          ATerm k_18 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(f_18), not_null(h_18)), not_null(d_18));
                          {
                            k_18 = t;
                            if(((j_18 != NULL) && (j_18 != k_18)))
                              _fail(k_18);
                            else
                              j_18 = k_18;
                          }
                          t = not_null(j_18);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm o_18 = NULL,q_18 = NULL;
              ATerm p_18 = NULL;
              t = SSLgetAnnotations(not_null(x_17));
              {
                p_18 = t;
                if(((o_18 != NULL) && (o_18 != p_18)))
                  _fail(p_18);
                else
                  o_18 = p_18;
              }
              {
                t = not_null(y_17);
                {
                  ATerm s_18 = NULL;
                  t = r_2(t);
                  {
                    q_18 = t;
                    {
                      t = not_null(z_17);
                      {
                        ATerm u_18 = NULL;
                        t = s_2(t);
                        {
                          s_18 = t;
                          {
                            ATerm v_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(q_18), not_null(s_18)), not_null(o_18));
                            {
                              v_18 = t;
                              if(((u_18 != NULL) && (u_18 != v_18)))
                                _fail(v_18);
                              else
                                u_18 = v_18;
                            }
                            t = not_null(u_18);
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
  ATerm k_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm j_19 = NULL;
        j_19 = t;
        g_19 :
        if(!(match_string(j_19, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, h_1, Nil_0);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = k_11;
      {
        ATerm v_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm k_19 = NULL;
              k_19 = t;
              h_19 :
              if(!(match_string(k_19, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, k_1);
              return(t);
            }
            t = Op_2(t, i_1, j_1);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = v_11;
            {
              ATerm l_1 (ATerm t)
              {
                ATerm e_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_19 = NULL;
                    l_19 = t;
                    i_19 :
                    if(!(match_string(l_19, "Nil")))
                      {
                        if(!(match_string(l_19, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_12;
                  }
                return(t);
              }
              t = Op_2(t, l_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_Op_2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(t_19);
          {
            ATerm c_20 = NULL;
            t = q_83(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = r_83(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_20), not_null(c_20)), not_null(y_19));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
        ATerm a_21 = NULL;
        t = not_null(t_20);
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, m_1);
              t = proper_list_0(t);
              ;
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              {
                ATerm h_12 = t;
                int l_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    ;
                    LocalPopChoice(l_12);
                  }
                else
                  {
                    t = h_12;
                    {
                      ATerm q_12 = t;
                      int r_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          ;
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
                                t = Str_1(t, _id);
                                ;
                                LocalPopChoice(t_12);
                              }
                            else
                              {
                                t = s_12;
                                {
                                  ATerm u_12 = t;
                                  int v_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(v_12);
                                    }
                                  else
                                    {
                                      t = u_12;
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
            ATerm b_21 = NULL,d_21 = NULL;
            t = new_0(t);
            {
              a_21 = t;
              {
                if(((x_20 != NULL) && (x_20 != a_21)))
                  _fail(a_21);
                else
                  x_20 = a_21;
                {
                  ATerm c_21 = NULL;
                  c_21 = t;
                  if(((b_21 != NULL) && (b_21 != c_21)))
                    _fail(c_21);
                  else
                    b_21 = c_21;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(b_21));
                    {
                      ATerm e_21 = NULL,g_21 = NULL;
                      t = conc_strings_0(t);
                      {
                        d_21 = t;
                        {
                          if(((y_20 != NULL) && (y_20 != d_21)))
                            _fail(d_21);
                          else
                            y_20 = d_21;
                          {
                            ATerm a_13;
                            a_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, not_null(y_20)));
                              {
                                ATerm n_1 (ATerm t)
                                {
                                  t = term_h_13;
                                  return(t);
                                }
                                t = assert_1(t, n_1);
                              }
                            }
                            t = a_13;
                            {
                              ATerm f_21 = NULL;
                              ATerm i_13 = t;
                              int j_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(j_13);
                                }
                              else
                                {
                                  t = i_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                f_21 = t;
                                if(((e_21 != NULL) && (e_21 != f_21)))
                                  _fail(f_21);
                                else
                                  e_21 = f_21;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(e_21)), (ATerm) ATmakeAppl(sym__3, not_null(x_20), not_null(y_20), not_null(u_20)));
                                {
                                  g_21 = t;
                                  {
                                    if(((z_20 != NULL) && (z_20 != g_21)))
                                      _fail(g_21);
                                    else
                                      z_20 = g_21;
                                    {
                                      ATerm k_13;
                                      k_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_13, not_null(z_20)));
                                        {
                                          ATerm o_1 (ATerm t)
                                          {
                                            t = term_r_10;
                                            return(t);
                                          }
                                          t = assert_1(t, o_1);
                                        }
                                      }
                                      t = k_13;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_20));
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
  ATerm v_21 = NULL;
  v_21 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
        t = not_null(v_21);
        {
          ATerm p_1 (ATerm t)
          {
            t = term_h_13;
            return(t);
          }
          t = rewrite_1(t, p_1);
          {
            z_21 = t;
            q_21 :
            if(match_cons(z_21, sym_Defined_2))
              {
                a_22 = ATgetArgument(z_21, 0);
                b_22 = ATgetArgument(z_21, 1);
                r_21 :
                if(match_string(a_22, "e_0"))
                  {
                    if(((y_21 != NULL) && (y_21 != b_22)))
                      _fail(b_22);
                    else
                      y_21 = b_22;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_21));
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm e_22 = NULL;
          ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
          t = not_null(v_21);
          {
            ATerm q_1 (ATerm t)
            {
              t = term_h_13;
              return(t);
            }
            t = rewrite_1(t, q_1);
            {
              f_22 = t;
              t_21 :
              if(match_cons(f_22, sym_Defined_2))
                {
                  g_22 = ATgetArgument(f_22, 0);
                  h_22 = ATgetArgument(f_22, 1);
                  u_21 :
                  if(match_string(g_22, "c_0"))
                    {
                      if(((e_22 != NULL) && (e_22 != h_22)))
                        _fail(h_22);
                      else
                        e_22 = h_22;
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
          t = not_null(e_22);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm o_22 = NULL,q_22 = NULL;
        ATerm q_13;
        q_13 = t;
        {
          ATerm p_22 = NULL;
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        t = q_13;
        {
          ATerm r_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm r_1 (ATerm t)
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, r_1);
            {
              r_22 = t;
              if(((q_22 != NULL) && (q_22 != r_22)))
                _fail(r_22);
              else
                q_22 = r_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(q_22));
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL;
        ATerm e_23 = NULL;
        t = new_0(t);
        {
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_23)), term_v_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(a_23))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(z_22), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_23)))));
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
  ATerm k_23 = NULL;
  k_23 = t;
  {
    ATerm n_23 = NULL,o_23 = NULL;
    t = not_null(k_23);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_b_14;
        return(t);
      }
      t = rewrite_1(t, s_1);
      {
        n_23 = t;
        i_23 :
        if(match_cons(n_23, sym_Defined_1))
          {
            o_23 = ATgetArgument(n_23, 0);
            j_23 :
            if(!(match_string(o_23, "l_0")))
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
    t = term_e_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  u_23 = t;
  s_23 :
  if(match_cons(u_23, sym__2))
    {
      v_23 = ATgetArgument(u_23, 0);
      x_23 = ATgetArgument(u_23, 1);
      t_23 :
      if(match_cons(v_23, sym_Var_1))
        {
          w_23 = ATgetArgument(v_23, 0);
          {
            ATerm a_24 = NULL;
            t = not_null(w_23);
            {
              t = Initialized_0(t);
              {
                a_24 = t;
                r_23 :
                if(!(match_string(a_24, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_23)), not_null(x_23));
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
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_Anno_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), not_null(r_24))));
    }
  else
    {
      if(match_cons(q_24, sym_Op_2))
        {
          r_24 = ATgetArgument(q_24, 0);
          p_24 = ATgetArgument(q_24, 1);
          {
            ATerm w_24 = NULL;
            ATerm x_24 = NULL,z_24 = NULL;
            ATerm y_24 = NULL;
            t = not_null(p_24);
            {
              t = length_0(t);
              {
                y_24 = t;
                if(((x_24 != NULL) && (x_24 != y_24)))
                  _fail(y_24);
                else
                  x_24 = y_24;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), not_null(x_24));
              {
                t = ConstructorName_0(t);
                {
                  z_24 = t;
                  if(((w_24 != NULL) && (w_24 != z_24)))
                    _fail(z_24);
                  else
                    w_24 = z_24;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(CheckATermList(not_null(p_24)), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_24)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_BuildDefault_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              t = not_null(r_24);
            }
          else
            {
              if(match_cons(q_24, sym_Var_1))
                {
                  r_24 = ATgetArgument(q_24, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_24))));
                }
              else
                {
                  if(match_cons(q_24, sym_Str_1))
                    {
                      r_24 = ATgetArgument(q_24, 0);
                      {
                        ATerm d_25 = NULL;
                        ATerm e_25 = NULL;
                        t = not_null(r_24);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              e_25 = t;
                              if(((d_25 != NULL) && (d_25 != e_25)))
                                _fail(e_25);
                              else
                                d_25 = e_25;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), term_u_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(d_25))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(q_24, sym_Real_1))
                        {
                          r_24 = ATgetArgument(q_24, 0);
                          {
                            ATerm g_25 = NULL;
                            ATerm h_25 = NULL;
                            t = not_null(r_24);
                            {
                              t = real_to_string_0(t);
                              {
                                h_25 = t;
                                if(((g_25 != NULL) && (g_25 != h_25)))
                                  _fail(h_25);
                                else
                                  g_25 = h_25;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(g_25)))));
                          }
                        }
                      else
                        {
                          if(match_cons(q_24, sym_Int_1))
                            {
                              r_24 = ATgetArgument(q_24, 0);
                              {
                                ATerm j_25 = NULL;
                                ATerm k_25 = NULL;
                                t = not_null(r_24);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    k_25 = t;
                                    if(((j_25 != NULL) && (j_25 != k_25)))
                                      _fail(k_25);
                                    else
                                      j_25 = k_25;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(j_25)))));
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
ATerm Id_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_Id_1))
    {
      d_26 = ATgetArgument(c_26, 0);
      {
        ATerm g_26 = NULL,i_26 = NULL;
        ATerm h_26 = NULL;
        t = SSLgetAnnotations(not_null(c_26));
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
        {
          t = not_null(d_26);
          {
            ATerm k_26 = NULL;
            t = k_93(t);
            {
              i_26 = t;
              {
                ATerm l_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(i_26)), not_null(g_26));
                {
                  l_26 = t;
                  if(((k_26 != NULL) && (k_26 != l_26)))
                    _fail(l_26);
                  else
                    k_26 = l_26;
                }
                t = not_null(k_26);
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
ATerm FunCall_2 (ATerm t, ATerm o_96 (ATerm), ATerm p_96 (ATerm))
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_FunCall_2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      {
        ATerm c_27 = NULL,e_27 = NULL;
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(w_26));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
        {
          t = not_null(x_26);
          {
            ATerm g_27 = NULL;
            t = o_96(t);
            {
              e_27 = t;
              {
                t = not_null(y_26);
                {
                  ATerm i_27 = NULL;
                  t = p_96(t);
                  {
                    g_27 = t;
                    {
                      ATerm j_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(e_27), not_null(g_27)), not_null(c_27));
                      {
                        j_27 = t;
                        if(((i_27 != NULL) && (i_27 != j_27)))
                          _fail(j_27);
                        else
                          i_27 = j_27;
                      }
                      t = not_null(i_27);
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
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  d_28 :
  if(match_cons(n_28, sym_Op_2))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      e_28 :
      if(match_string(o_28, "Cons"))
        {
          f_28 :
          if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
            {
              j_28 = ATgetFirst((ATermList) p_28);
              k_28 = (ATerm) ATgetNext((ATermList) p_28);
              g_28 :
              if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
                {
                  l_28 = ATgetFirst((ATermList) k_28);
                  m_28 = (ATerm) ATgetNext((ATermList) k_28);
                  h_28 :
                  if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
                    {
                      {
                        ATerm s_28 = NULL;
                        ATerm f_29 = NULL;
                        t = not_null(l_28);
                        {
                          ATerm b_15 = t;
                          int f_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
                              t_28 = t;
                              u_27 :
                              if(match_cons(t_28, sym_TypeCast_2))
                                {
                                  u_28 = ATgetArgument(t_28, 0);
                                  b_29 = ATgetArgument(t_28, 1);
                                  v_27 :
                                  if(match_cons(u_28, sym_TypeName_2))
                                    {
                                      v_28 = ATgetArgument(u_28, 0);
                                      a_29 = ATgetArgument(u_28, 1);
                                      w_27 :
                                      if(match_cons(v_28, sym_TypeSpec_3))
                                        {
                                          w_28 = ATgetArgument(v_28, 0);
                                          x_28 = ATgetArgument(v_28, 1);
                                          z_28 = ATgetArgument(v_28, 2);
                                          x_27 :
                                          if(((ATgetType(w_28) == AT_LIST) && ATisEmpty(w_28)))
                                            {
                                              y_27 :
                                              if(match_cons(x_28, sym_TypeId_1))
                                                {
                                                  y_28 = ATgetArgument(x_28, 0);
                                                  z_27 :
                                                  if(match_string(y_28, "ATerm"))
                                                    {
                                                      a_28 :
                                                      if(((ATgetType(z_28) == AT_LIST) && ATisEmpty(z_28)))
                                                        {
                                                          b_28 :
                                                          if(match_cons(a_29, sym_None_0))
                                                            {
                                                              t = not_null(b_29);
                                                              {
                                                                ATerm g_15 = t;
                                                                int k_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm t_1 (ATerm t)
                                                                    {
                                                                      ATerm d_29 = NULL;
                                                                      d_29 = t;
                                                                      s_27 :
                                                                      if(!(match_string(d_29, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, t_1);
                                                                    ;
                                                                    LocalPopChoice(k_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = g_15;
                                                                    {
                                                                      ATerm u_1 (ATerm t)
                                                                      {
                                                                        ATerm w_1 (ATerm t)
                                                                        {
                                                                          ATerm e_29 = NULL;
                                                                          e_29 = t;
                                                                          t_27 :
                                                                          if(!(match_string(e_29, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, w_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm v_1 (ATerm t)
                                                                      {
                                                                        ATerm x_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, x_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, u_1, v_1);
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
                              LocalPopChoice(f_15);
                            }
                          else
                            {
                              t = b_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATempty, not_null(l_28)));
                            }
                          {
                            f_29 = t;
                            if(((s_28 != NULL) && (s_28 != f_29)))
                              _fail(f_29);
                            else
                              s_28 = f_29;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_28)), not_null(s_28))));
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
          if(match_string(o_28, "Nil"))
            {
              i_28 :
              if(((ATgetType(p_28) == AT_LIST) && ATisEmpty(p_28)))
                {
                  t = term_y_15;
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
ATerm bottomup_1 (ATerm t, ATerm c_105 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = bottomup_1(t, c_105);
    return(t);
  }
  t = _all(t, y_1);
  t = c_105(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, a_2);
    return(t);
  }
  t = bottomup_1(t, z_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm b_105 (ATerm))
{
  t = b_105(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = topdown_1(t, b_105);
      return(t);
    }
    t = _all(t, b_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  ATerm p_51 (ATerm t)
  {
    ATerm o_37 = NULL,s_46 = NULL;
    ATerm b_16;
    b_16 = t;
    {
      ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
      t = not_null(b_35);
      {
        ATerm c_16 = t;
        if((PushChoice() == 0))
          {
            ATerm p_37 = NULL;
            p_37 = t;
            o_31 :
            if(!(match_string(p_37, "Nil")))
              {
                if(!(match_string(p_37, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_34), term_d_16);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
              q_37 = t;
              t_31 :
              if(match_cons(q_37, sym__2))
                {
                  r_37 = ATgetArgument(q_37, 0);
                  s_37 = ATgetArgument(q_37, 1);
                  {
                    ATerm i_38 = NULL,n_46 = NULL;
                    ATerm e_16;
                    e_16 = t;
                    {
                      ATerm k_46 = NULL,m_46 = NULL;
                      ATerm l_46 = NULL;
                      t = not_null(s_37);
                      {
                        t = int_to_string_0(t);
                        {
                          l_46 = t;
                          if(((k_46 != NULL) && (k_46 != l_46)))
                            _fail(l_46);
                          else
                            k_46 = l_46;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(k_46))), not_null(a_35))));
                        {
                          ATerm h_16 = t;
                          int i_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(i_16);
                            }
                          else
                            {
                              t = h_16;
                              t = MatchArg2_0(t);
                            }
                          {
                            m_46 = t;
                            if(((i_38 != NULL) && (i_38 != m_46)))
                              _fail(m_46);
                            else
                              i_38 = m_46;
                          }
                        }
                      }
                    }
                    t = e_16;
                    {
                      ATerm o_46 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_37), term_j_16);
                      {
                        t = add_0(t);
                        {
                          o_46 = t;
                          if(((n_46 != NULL) && (n_46 != o_46)))
                            _fail(o_46);
                          else
                            n_46 = o_46;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(n_46));
                    }
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
              p_46 = t;
              v_31 :
              if(match_cons(p_46, sym__2))
                {
                  q_46 = ATgetArgument(p_46, 0);
                  r_46 = ATgetArgument(p_46, 1);
                  if(((o_37 != NULL) && (o_37 != q_46)))
                    _fail(q_46);
                  else
                    o_37 = q_46;
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
    t = b_16;
    {
      ATerm t_46 = NULL,v_46 = NULL;
      ATerm u_46 = NULL;
      t = not_null(k_34);
      {
        t = length_0(t);
        {
          u_46 = t;
          if(((t_46 != NULL) && (t_46 != u_46)))
            _fail(u_46);
          else
            t_46 = u_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(t_46));
        {
          t = ConstructorName_0(t);
          {
            v_46 = t;
            if(((s_46 != NULL) && (s_46 != v_46)))
              _fail(v_46);
            else
              s_46 = v_46;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_46))), not_null(a_35))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
    }
    return(t);
  }
  ATerm q_51 (ATerm t)
  {
    ATerm y_46 = NULL;
    ATerm z_46 = NULL;
    t = not_null(b_35);
    {
      t = real_to_string_0(t);
      {
        z_46 = t;
        if(((y_46 != NULL) && (y_46 != z_46)))
          _fail(z_46);
        else
          y_46 = z_46;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, not_null(a_35))), term_g_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_17, not_null(a_35)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(y_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
    return(t);
  }
  ATerm r_51 (ATerm t)
  {
    ATerm c_47 = NULL;
    ATerm d_47 = NULL;
    t = not_null(b_35);
    {
      t = int_to_string_0(t);
      {
        d_47 = t;
        if(((c_47 != NULL) && (c_47 != d_47)))
          _fail(d_47);
        else
          c_47 = d_47;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, not_null(a_35))), term_o_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_17, not_null(a_35)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
    return(t);
  }
  ATerm s_51 (ATerm t)
  {
    ATerm g_47 = NULL;
    ATerm h_47 = NULL;
    t = not_null(b_35);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_18, not_null(a_35)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), term_u_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(g_47)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
    return(t);
  }
  ATerm t_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), term_l_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), not_null(a_35))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, not_null(a_35)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), term_e_8, not_null(a_35))));
    return(t);
  }
  ATerm u_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(k_34), not_null(a_35))), (ATerm) ATmakeAppl(sym_Match_2, not_null(b_35), not_null(a_35))));
    return(t);
  }
  ATerm v_51 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  ATerm w_51 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  ATerm x_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(d_35), term_x_16);
    return(t);
  }
  ATerm y_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_34)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_34)), term_e_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_34)), term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
    return(t);
  }
  ATerm z_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), term_r_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_34)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
    return(t);
  }
  ATerm a_52 (ATerm t)
  {
    ATerm n_48 = NULL,h_49 = NULL,j_49 = NULL;
    ATerm f_19;
    f_19 = t;
    {
      ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
      t = not_null(t_34);
      {
        ATerm m_19 = t;
        if((PushChoice() == 0))
          {
            ATerm t_48 = NULL;
            t_48 = t;
            b_32 :
            if(!(match_string(t_48, "Nil")))
              {
                if(!(match_string(t_48, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), term_d_16);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
              u_48 = t;
              f_32 :
              if(match_cons(u_48, sym__2))
                {
                  v_48 = ATgetArgument(u_48, 0);
                  x_48 = ATgetArgument(u_48, 1);
                  g_32 :
                  if(match_cons(v_48, sym_Var_1))
                    {
                      w_48 = ATgetArgument(v_48, 0);
                      {
                        ATerm a_49 = NULL,c_49 = NULL;
                        ATerm n_19;
                        n_19 = t;
                        {
                          ATerm b_49 = NULL;
                          t = not_null(x_48);
                          {
                            t = int_to_string_0(t);
                            {
                              b_49 = t;
                              if(((a_49 != NULL) && (a_49 != b_49)))
                                _fail(b_49);
                              else
                                a_49 = b_49;
                            }
                          }
                        }
                        t = n_19;
                        {
                          ATerm d_49 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_48), term_j_16);
                          {
                            t = add_0(t);
                            {
                              d_49 = t;
                              if(((c_49 != NULL) && (c_49 != d_49)))
                                _fail(d_49);
                              else
                                c_49 = d_49;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_48)), term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_49))), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))))), not_null(c_49));
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
            t = thread_map_1(t, d_2);
            {
              e_49 = t;
              i_32 :
              if(match_cons(e_49, sym__2))
                {
                  f_49 = ATgetArgument(e_49, 0);
                  g_49 = ATgetArgument(e_49, 1);
                  if(((n_48 != NULL) && (n_48 != f_49)))
                    _fail(f_49);
                  else
                    n_48 = f_49;
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
    t = f_19;
    {
      ATerm o_19;
      o_19 = t;
      {
        ATerm i_49 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_34), not_null(r_34));
        {
          t = ConstructorName_0(t);
          {
            i_49 = t;
            if(((h_49 != NULL) && (h_49 != i_49)))
              _fail(i_49);
            else
              h_49 = i_49;
          }
        }
      }
      t = o_19;
      {
        ATerm k_49 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), (ATerm) ATinsert(ATempty, not_null(v_34)));
        {
          t = conc_0(t);
          {
            k_49 = t;
            if(((j_49 != NULL) && (j_49 != k_49)))
              _fail(k_49);
            else
              j_49 = k_49;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_49))), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_49)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
      }
    }
    return(t);
  }
  ATerm b_52 (ATerm t)
  {
    ATerm r_49 = NULL;
    ATerm s_49 = NULL;
    t = not_null(t_34);
    {
      t = real_to_string_0(t);
      {
        s_49 = t;
        if(((r_49 != NULL) && (r_49 != s_49)))
          _fail(s_49);
        else
          r_49 = s_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(r_49))), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_34))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
    return(t);
  }
  ATerm c_52 (ATerm t)
  {
    ATerm z_49 = NULL;
    ATerm a_50 = NULL;
    t = not_null(t_34);
    {
      t = int_to_string_0(t);
      {
        a_50 = t;
        if(((z_49 != NULL) && (z_49 != a_50)))
          _fail(a_50);
        else
          z_49 = a_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_49))), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_34))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
    return(t);
  }
  ATerm d_52 (ATerm t)
  {
    ATerm h_50 = NULL;
    ATerm i_50 = NULL;
    t = not_null(t_34);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(h_50)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_35)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_34))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_35)), not_null(w_34), not_null(x_34)))));
    return(t);
  }
  ATerm e_52 (ATerm t)
  {
    t = not_null(x_34);
    return(t);
  }
  ATerm f_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_35)), (ATerm) ATmakeAppl(sym_Case_3, not_null(a_35), not_null(x_34), not_null(y_34)));
    return(t);
  }
  ATerm g_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_35)));
    return(t);
  }
  ATerm h_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), term_l_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_34)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_34)))));
    return(t);
  }
  ATerm i_52 (ATerm t)
  {
    t = not_null(a_35);
    {
      ATerm d_20 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_20;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_35)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_35))));
    return(t);
  }
  ATerm j_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), term_e_8, term_x_16));
    return(t);
  }
  ATerm k_52 (ATerm t)
  {
    ATerm w_50 = NULL;
    ATerm x_50 = NULL;
    t = not_null(d_35);
    {
      t = construct_term_caching_0(t);
      {
        x_50 = t;
        if(((w_50 != NULL) && (w_50 != x_50)))
          _fail(x_50);
        else
          w_50 = x_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, not_null(w_50)));
    return(t);
  }
  c_35 = t;
  p_32 :
  if(match_cons(c_35, sym_Let_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      a_35 = ATgetArgument(c_35, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(d_35), (ATerm) ATinsert(ATempty, not_null(a_35)));
    }
  else
    {
      if(match_cons(c_35, sym_Where_1))
        {
          d_35 = ATgetArgument(c_35, 0);
          {
            ATerm h_35 = NULL;
            ATerm i_35 = NULL;
            t = new_0(t);
            {
              i_35 = t;
              if(((h_35 != NULL) && (h_35 != i_35)))
                _fail(i_35);
              else
                h_35 = i_35;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_35)), term_v_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_35))))), not_null(d_35)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_35)), term_e_8, term_x_16))));
          }
        }
      else
        {
          if(match_cons(c_35, sym_Test_1))
            {
              d_35 = ATgetArgument(c_35, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_35));
            }
          else
            {
              if(match_cons(c_35, sym_Call_2))
                {
                  d_35 = ATgetArgument(c_35, 0);
                  a_35 = ATgetArgument(c_35, 1);
                  q_32 :
                  if(match_cons(d_35, sym_SVar_1))
                    {
                      b_35 = ATgetArgument(d_35, 0);
                      {
                        ATerm m_35 = NULL;
                        ATerm s_35 = NULL;
                        t = not_null(a_35);
                        {
                          ATerm e_2 (ATerm t)
                          {
                            ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
                            n_35 = t;
                            z_30 :
                            if(match_cons(n_35, sym_Call_2))
                              {
                                o_35 = ATgetArgument(n_35, 0);
                                q_35 = ATgetArgument(n_35, 1);
                                a_31 :
                                if(match_cons(o_35, sym_SVar_1))
                                  {
                                    p_35 = ATgetArgument(o_35, 0);
                                    b_31 :
                                    if(((ATgetType(q_35) == AT_LIST) && ATisEmpty(q_35)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(p_35));
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
                          t = map_1(t, e_2);
                          {
                            s_35 = t;
                            if(((m_35 != NULL) && (m_35 != s_35)))
                              _fail(s_35);
                            else
                              m_35 = s_35;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_35)), (ATerm) ATinsert(CheckATermList(not_null(m_35)), term_x_16))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(c_35, sym_Prim_2))
                    {
                      d_35 = ATgetArgument(c_35, 0);
                      a_35 = ATgetArgument(c_35, 1);
                      {
                        ATerm v_35 = NULL;
                        ATerm w_35 = NULL;
                        t = not_null(a_35);
                        {
                          ATerm f_2 (ATerm t)
                          {
                            ATerm g_2 (ATerm t)
                            {
                              t = try_1(t, construct_term_0);
                              return(t);
                            }
                            t = topdown_1(t, g_2);
                            return(t);
                          }
                          t = map_1(t, f_2);
                          {
                            w_35 = t;
                            if(((v_35 != NULL) && (v_35 != w_35)))
                              _fail(w_35);
                            else
                              v_35 = w_35;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_35)), not_null(v_35))));
                      }
                    }
                  else
                    {
                      if(match_cons(c_35, sym_Not_1))
                        {
                          d_35 = ATgetArgument(c_35, 0);
                          {
                            ATerm y_35 = NULL;
                            ATerm z_35 = NULL;
                            t = new_0(t);
                            {
                              z_35 = t;
                              if(((y_35 != NULL) && (y_35 != z_35)))
                                _fail(z_35);
                              else
                                y_35 = z_35;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_35)), term_v_8), term_g_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_20), term_o_20), not_null(d_35))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_35)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(c_35, sym_LGChoice_2))
                            {
                              d_35 = ATgetArgument(c_35, 0);
                              a_35 = ATgetArgument(c_35, 1);
                              {
                                ATerm c_36 = NULL;
                                ATerm d_36 = NULL;
                                t = new_0(t);
                                {
                                  d_36 = t;
                                  if(((c_36 != NULL) && (c_36 != d_36)))
                                    _fail(d_36);
                                  else
                                    c_36 = d_36;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_36)), term_v_8), term_g_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(d_35))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_35)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_36)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(c_35, sym_GChoice_2))
                                {
                                  d_35 = ATgetArgument(c_35, 0);
                                  a_35 = ATgetArgument(c_35, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(d_35), not_null(a_35));
                                }
                              else
                                {
                                  if(match_cons(c_35, sym_GuardedLChoice_3))
                                    {
                                      d_35 = ATgetArgument(c_35, 0);
                                      a_35 = ATgetArgument(c_35, 1);
                                      x_34 = ATgetArgument(c_35, 2);
                                      {
                                        ATerm j_36 = NULL,k_36 = NULL;
                                        ATerm l_36 = NULL;
                                        ATerm m_36 = NULL;
                                        t = new_0(t);
                                        {
                                          l_36 = t;
                                          {
                                            if(((j_36 != NULL) && (j_36 != l_36)))
                                              _fail(l_36);
                                            else
                                              j_36 = l_36;
                                            {
                                              t = new_0(t);
                                              {
                                                m_36 = t;
                                                if(((k_36 != NULL) && (k_36 != m_36)))
                                                  _fail(m_36);
                                                else
                                                  k_36 = m_36;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_36)), term_v_8), term_o_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_36)), term_v_8), term_g_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_35)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_36)))))), not_null(d_35))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_34)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_36)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(c_35, sym_LChoice_2))
                                        {
                                          d_35 = ATgetArgument(c_35, 0);
                                          a_35 = ATgetArgument(c_35, 1);
                                          {
                                            ATerm p_36 = NULL,q_36 = NULL;
                                            ATerm r_36 = NULL;
                                            ATerm s_36 = NULL;
                                            t = new_0(t);
                                            {
                                              r_36 = t;
                                              {
                                                if(((p_36 != NULL) && (p_36 != r_36)))
                                                  _fail(r_36);
                                                else
                                                  p_36 = r_36;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    s_36 = t;
                                                    if(((q_36 != NULL) && (q_36 != s_36)))
                                                      _fail(s_36);
                                                    else
                                                      q_36 = s_36;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_36)), term_v_8), term_o_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_36)), term_v_8), term_g_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_36)))))), term_d_22), not_null(d_35))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_35)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_x_16, term_e_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_36)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(c_35, sym_Choice_2))
                                            {
                                              d_35 = ATgetArgument(c_35, 0);
                                              a_35 = ATgetArgument(c_35, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_35), not_null(a_35));
                                            }
                                          else
                                            {
                                              if(match_cons(c_35, sym_Seq_2))
                                                {
                                                  d_35 = ATgetArgument(c_35, 0);
                                                  a_35 = ATgetArgument(c_35, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_35)), not_null(d_35)));
                                                }
                                              else
                                                {
                                                  if(match_cons(c_35, sym_Scope_2))
                                                    {
                                                      d_35 = ATgetArgument(c_35, 0);
                                                      a_35 = ATgetArgument(c_35, 1);
                                                      {
                                                        ATerm b_37 = NULL;
                                                        ATerm i_22;
                                                        i_22 = t;
                                                        {
                                                          t = not_null(d_35);
                                                          {
                                                            ATerm h_2 (ATerm t)
                                                            {
                                                              ATerm z_36 = NULL;
                                                              z_36 = t;
                                                              {
                                                                ATerm j_22;
                                                                j_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_36), term_l_22);
                                                                  {
                                                                    ATerm i_2 (ATerm t)
                                                                    {
                                                                      t = term_b_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, i_2);
                                                                  }
                                                                }
                                                                t = j_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, h_2);
                                                          }
                                                        }
                                                        t = i_22;
                                                        {
                                                          ATerm e_37 = NULL;
                                                          t = not_null(d_35);
                                                          {
                                                            ATerm j_2 (ATerm t)
                                                            {
                                                              ATerm c_37 = NULL;
                                                              c_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_37)), term_v_8), term_m_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, j_2);
                                                            {
                                                              e_37 = t;
                                                              if(((b_37 != NULL) && (b_37 != e_37)))
                                                                _fail(e_37);
                                                              else
                                                                b_37 = e_37;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, not_null(b_37))), (ATerm) ATinsert(ATempty, not_null(a_35)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(c_35, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(c_35, sym_Id_0))
                                                            {
                                                              t = term_m_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(c_35, sym_Match_2))
                                                                {
                                                                  d_35 = ATgetArgument(c_35, 0);
                                                                  a_35 = ATgetArgument(c_35, 1);
                                                                  r_32 :
                                                                  if(match_cons(d_35, sym_Op_2))
                                                                    {
                                                                      b_35 = ATgetArgument(d_35, 0);
                                                                      k_34 = ATgetArgument(d_35, 1);
                                                                      s_32 :
                                                                      if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
                                                                        {
                                                                          g_34 = ATgetFirst((ATermList) k_34);
                                                                          h_34 = (ATerm) ATgetNext((ATermList) k_34);
                                                                          t_32 :
                                                                          if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
                                                                            {
                                                                              i_34 = ATgetFirst((ATermList) h_34);
                                                                              j_34 = (ATerm) ATgetNext((ATermList) h_34);
                                                                              u_32 :
                                                                              if(((ATgetType(j_34) == AT_LIST) && ATisEmpty(j_34)))
                                                                                {
                                                                                  v_32 :
                                                                                  if(match_string(b_35, "Cons"))
                                                                                    {
                                                                                      ATerm n_22 = t;
                                                                                      int s_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_37 = NULL;
                                                                                          ATerm j_37 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_34), (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, not_null(a_35))))))), (ATerm) ATmakeAppl(sym__2, not_null(g_34), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, not_null(a_35))))));
                                                                                          {
                                                                                            ATerm k_2 (ATerm t)
                                                                                            {
                                                                                              ATerm t_22 = t;
                                                                                              int u_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(u_22);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_22;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, k_2);
                                                                                            {
                                                                                              j_37 = t;
                                                                                              if(((i_37 != NULL) && (i_37 != j_37)))
                                                                                                _fail(j_37);
                                                                                              else
                                                                                                i_37 = j_37;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, not_null(a_35))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, not_null(a_35))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(i_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
                                                                                          ;
                                                                                          LocalPopChoice(s_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_22;
                                                                                          t = p_51(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_51(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  w_32 :
                                                                                  t = p_51(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              x_32 :
                                                                              t = p_51(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(k_34) == AT_LIST) && ATisEmpty(k_34)))
                                                                            {
                                                                              y_32 :
                                                                              if(match_string(b_35, "Nil"))
                                                                                {
                                                                                  ATerm v_22 = t;
                                                                                  int w_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, not_null(a_35))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, not_null(a_35))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, term_x_16))));
                                                                                      ;
                                                                                      LocalPopChoice(w_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_22;
                                                                                      t = p_51(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_51(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              z_32 :
                                                                              t = p_51(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(d_35, sym_Real_1))
                                                                        {
                                                                          b_35 = ATgetArgument(d_35, 0);
                                                                          t = q_51(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(d_35, sym_Int_1))
                                                                            {
                                                                              b_35 = ATgetArgument(d_35, 0);
                                                                              t = r_51(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(d_35, sym_Str_1))
                                                                                {
                                                                                  b_35 = ATgetArgument(d_35, 0);
                                                                                  t = s_51(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(d_35, sym_Var_1))
                                                                                    {
                                                                                      b_35 = ATgetArgument(d_35, 0);
                                                                                      t = t_51(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(d_35, sym_As_2))
                                                                                        {
                                                                                          b_35 = ATgetArgument(d_35, 0);
                                                                                          k_34 = ATgetArgument(d_35, 1);
                                                                                          t = u_51(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(d_35, sym_BuildDefault_1))
                                                                                            {
                                                                                              b_35 = ATgetArgument(d_35, 0);
                                                                                              t = v_51(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(d_35, sym_Wld_0))
                                                                                                {
                                                                                                  t = w_51(t);
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
                                                                  if(match_cons(c_35, sym_Match_1))
                                                                    {
                                                                      d_35 = ATgetArgument(c_35, 0);
                                                                      t = x_51(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(c_35, sym_Case_3))
                                                                        {
                                                                          d_35 = ATgetArgument(c_35, 0);
                                                                          a_35 = ATgetArgument(c_35, 1);
                                                                          x_34 = ATgetArgument(c_35, 2);
                                                                          a_33 :
                                                                          if(match_cons(d_35, sym_Var_1))
                                                                            {
                                                                              b_35 = ATgetArgument(d_35, 0);
                                                                              b_33 :
                                                                              if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
                                                                                {
                                                                                  z_34 = ATgetFirst((ATermList) a_35);
                                                                                  w_34 = (ATerm) ATgetNext((ATermList) a_35);
                                                                                  c_33 :
                                                                                  if(match_cons(z_34, sym_Alt_3))
                                                                                    {
                                                                                      s_34 = ATgetArgument(z_34, 0);
                                                                                      u_34 = ATgetArgument(z_34, 1);
                                                                                      v_34 = ATgetArgument(z_34, 2);
                                                                                      d_33 :
                                                                                      if(match_cons(s_34, sym_Fun_2))
                                                                                        {
                                                                                          t_34 = ATgetArgument(s_34, 0);
                                                                                          r_34 = ATgetArgument(s_34, 1);
                                                                                          e_33 :
                                                                                          if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
                                                                                            {
                                                                                              l_34 = ATgetFirst((ATermList) u_34);
                                                                                              n_34 = (ATerm) ATgetNext((ATermList) u_34);
                                                                                              f_33 :
                                                                                              if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
                                                                                                {
                                                                                                  o_34 = ATgetFirst((ATermList) n_34);
                                                                                                  q_34 = (ATerm) ATgetNext((ATermList) n_34);
                                                                                                  g_33 :
                                                                                                  if(((ATgetType(q_34) == AT_LIST) && ATisEmpty(q_34)))
                                                                                                    {
                                                                                                      h_33 :
                                                                                                      if(match_cons(o_34, sym_Var_1))
                                                                                                        {
                                                                                                          p_34 = ATgetArgument(o_34, 0);
                                                                                                          i_33 :
                                                                                                          if(match_cons(l_34, sym_Var_1))
                                                                                                            {
                                                                                                              m_34 = ATgetArgument(l_34, 0);
                                                                                                              j_33 :
                                                                                                              if(match_int(r_34, 2))
                                                                                                                {
                                                                                                                  k_33 :
                                                                                                                  if(match_string(t_34, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm b_23 = t;
                                                                                                                      int c_23 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = y_51(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(c_23);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                          t = a_52(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_52(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  l_33 :
                                                                                                                  t = a_52(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              m_33 :
                                                                                                              n_33 :
                                                                                                              t = a_52(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          o_33 :
                                                                                                          p_33 :
                                                                                                          q_33 :
                                                                                                          t = a_52(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      r_33 :
                                                                                                      s_33 :
                                                                                                      t_33 :
                                                                                                      u_33 :
                                                                                                      t = a_52(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  v_33 :
                                                                                                  w_33 :
                                                                                                  x_33 :
                                                                                                  t = a_52(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(u_34) == AT_LIST) && ATisEmpty(u_34)))
                                                                                                {
                                                                                                  y_33 :
                                                                                                  if(match_int(r_34, 0))
                                                                                                    {
                                                                                                      z_33 :
                                                                                                      if(match_string(t_34, "Nil"))
                                                                                                        {
                                                                                                          ATerm f_23 = t;
                                                                                                          int g_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = z_51(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(g_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_23;
                                                                                                              t = a_52(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = a_52(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      a_34 :
                                                                                                      t = a_52(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  b_34 :
                                                                                                  c_34 :
                                                                                                  t = a_52(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(s_34, sym_Real_1))
                                                                                            {
                                                                                              t_34 = ATgetArgument(s_34, 0);
                                                                                              t = b_52(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(s_34, sym_Int_1))
                                                                                                {
                                                                                                  t_34 = ATgetArgument(s_34, 0);
                                                                                                  t = c_52(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(s_34, sym_Str_1))
                                                                                                    {
                                                                                                      t_34 = ATgetArgument(s_34, 0);
                                                                                                      t = d_52(t);
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
                                                                                  if(((ATgetType(a_35) == AT_LIST) && ATisEmpty(a_35)))
                                                                                    {
                                                                                      t = e_52(t);
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
                                                                          if(match_cons(c_35, sym_Case_4))
                                                                            {
                                                                              d_35 = ATgetArgument(c_35, 0);
                                                                              a_35 = ATgetArgument(c_35, 1);
                                                                              x_34 = ATgetArgument(c_35, 2);
                                                                              y_34 = ATgetArgument(c_35, 3);
                                                                              t = f_52(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(c_35, sym_Continue_1))
                                                                                {
                                                                                  d_35 = ATgetArgument(c_35, 0);
                                                                                  t = g_52(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(c_35, sym_Assign_2))
                                                                                    {
                                                                                      d_35 = ATgetArgument(c_35, 0);
                                                                                      a_35 = ATgetArgument(c_35, 1);
                                                                                      d_34 :
                                                                                      if(match_cons(d_35, sym_Var_1))
                                                                                        {
                                                                                          b_35 = ATgetArgument(d_35, 0);
                                                                                          e_34 :
                                                                                          if(match_cons(a_35, sym_Var_1))
                                                                                            {
                                                                                              z_34 = ATgetArgument(a_35, 0);
                                                                                              {
                                                                                                ATerm h_23 = t;
                                                                                                int l_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = h_52(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(l_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_23;
                                                                                                    t = i_52(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_52(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(c_35, sym_Assign_1))
                                                                                        {
                                                                                          d_35 = ATgetArgument(c_35, 0);
                                                                                          f_34 :
                                                                                          if(match_cons(d_35, sym_Var_1))
                                                                                            {
                                                                                              b_35 = ATgetArgument(d_35, 0);
                                                                                              t = j_52(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(c_35, sym_Build_1))
                                                                                            {
                                                                                              d_35 = ATgetArgument(c_35, 0);
                                                                                              t = k_52(t);
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
ATerm real_to_string_0 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  t = SSL_real_to_string(not_null(u_53));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,g_54 = NULL;
  a_54 = t;
  y_53 :
  if(match_cons(a_54, sym__2))
    {
      b_54 = ATgetArgument(a_54, 0);
      g_54 = ATgetArgument(a_54, 1);
      z_53 :
      if(((ATgetType(b_54) == AT_LIST) && ATisEmpty(b_54)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_54));
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
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  q_54 = t;
  o_54 :
  if(match_cons(q_54, sym__2))
    {
      r_54 = ATgetArgument(q_54, 0);
      u_54 = ATgetArgument(q_54, 1);
      p_54 :
      if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
        {
          s_54 = ATgetFirst((ATermList) r_54);
          t_54 = (ATerm) ATgetNext((ATermList) r_54);
          {
            ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
            ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_54), not_null(u_54));
            {
              t = w_0(t);
              {
                c_55 = t;
                n_54 :
                if(match_cons(c_55, sym__2))
                  {
                    d_55 = ATgetArgument(c_55, 0);
                    e_55 = ATgetArgument(c_55, 1);
                    {
                      ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
                      if(((a_55 != NULL) && (a_55 != d_55)))
                        _fail(d_55);
                      else
                        a_55 = d_55;
                      {
                        if(((y_54 != NULL) && (y_54 != e_55)))
                          _fail(e_55);
                        else
                          y_54 = e_55;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_54), not_null(y_54));
                          {
                            t = a_1(t);
                            {
                              f_55 = t;
                              m_54 :
                              if(match_cons(f_55, sym__2))
                                {
                                  g_55 = ATgetArgument(f_55, 0);
                                  h_55 = ATgetArgument(f_55, 1);
                                  {
                                    if(((b_55 != NULL) && (b_55 != g_55)))
                                      _fail(g_55);
                                    else
                                      b_55 = g_55;
                                    if(((z_54 != NULL) && (z_54 != h_55)))
                                      _fail(h_55);
                                    else
                                      z_54 = h_55;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_55)), not_null(a_55)), not_null(z_54));
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
ATerm thread_map_1 (ATerm t, ATerm h_117 (ATerm))
{
  ATerm l_55 (ATerm t)
  {
    ATerm m_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, h_117, l_55);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = m_23;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = l_55(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm e_56 = NULL,f_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym_Var_1))
    {
      f_56 = ATgetArgument(e_56, 0);
      {
        ATerm q_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_56 = NULL,k_56 = NULL;
            ATerm j_56 = NULL;
            t = SSLgetAnnotations(not_null(e_56));
            {
              j_56 = t;
              if(((i_56 != NULL) && (i_56 != j_56)))
                _fail(j_56);
              else
                i_56 = j_56;
            }
            {
              t = not_null(f_56);
              {
                ATerm m_56 = NULL;
                t = q_0(t);
                {
                  k_56 = t;
                  {
                    ATerm n_56 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_56)), not_null(i_56));
                    {
                      n_56 = t;
                      if(((m_56 != NULL) && (m_56 != n_56)))
                        _fail(n_56);
                      else
                        m_56 = n_56;
                    }
                    t = not_null(m_56);
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = q_23;
            {
              ATerm z_23 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_56 = NULL,s_56 = NULL;
                  ATerm r_56 = NULL;
                  t = SSLgetAnnotations(not_null(e_56));
                  {
                    r_56 = t;
                    if(((q_56 != NULL) && (q_56 != r_56)))
                      _fail(r_56);
                    else
                      q_56 = r_56;
                  }
                  {
                    t = not_null(f_56);
                    {
                      ATerm u_56 = NULL;
                      t = q_0(t);
                      {
                        s_56 = t;
                        {
                          ATerm v_56 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_56)), not_null(q_56));
                          {
                            v_56 = t;
                            if(((u_56 != NULL) && (u_56 != v_56)))
                              _fail(v_56);
                            else
                              u_56 = v_56;
                          }
                          t = not_null(u_56);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = z_23;
                  {
                    ATerm y_56 = NULL,a_57 = NULL;
                    ATerm z_56 = NULL;
                    t = SSLgetAnnotations(not_null(e_56));
                    {
                      z_56 = t;
                      if(((y_56 != NULL) && (y_56 != z_56)))
                        _fail(z_56);
                      else
                        y_56 = z_56;
                    }
                    {
                      t = not_null(f_56);
                      {
                        ATerm c_57 = NULL;
                        t = q_0(t);
                        {
                          a_57 = t;
                          {
                            ATerm d_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_57)), not_null(y_56));
                            {
                              d_57 = t;
                              if(((c_57 != NULL) && (c_57 != d_57)))
                                _fail(d_57);
                              else
                                c_57 = d_57;
                            }
                            t = not_null(c_57);
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
ATerm TranslateStratMatchGuard_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  ATerm y_61 (ATerm t)
  {
    ATerm a_60 = NULL,b_61 = NULL,f_61 = NULL;
    ATerm c_24;
    c_24 = t;
    {
      ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
      t = not_null(n_59);
      {
        ATerm d_24 = t;
        if((PushChoice() == 0))
          {
            ATerm h_60 = NULL;
            h_60 = t;
            w_57 :
            if(!(match_string(h_60, "Nil")))
              {
                if(!(match_string(h_60, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_24;
          }
        {
          t = not_null(j_59);
          {
            ATerm l_2 (ATerm t)
            {
              t = Var_1(t, _id);
              return(t);
            }
            t = map_1(t, l_2);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_59), term_d_16);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
                  k_60 = t;
                  a_58 :
                  if(match_cons(k_60, sym__2))
                    {
                      l_60 = ATgetArgument(k_60, 0);
                      n_60 = ATgetArgument(k_60, 1);
                      b_58 :
                      if(match_cons(l_60, sym_Var_1))
                        {
                          m_60 = ATgetArgument(l_60, 0);
                          {
                            ATerm q_60 = NULL,w_60 = NULL;
                            ATerm e_24;
                            e_24 = t;
                            {
                              ATerm u_60 = NULL;
                              t = not_null(n_60);
                              {
                                t = int_to_string_0(t);
                                {
                                  u_60 = t;
                                  if(((q_60 != NULL) && (q_60 != u_60)))
                                    _fail(u_60);
                                  else
                                    q_60 = u_60;
                                }
                              }
                            }
                            t = e_24;
                            {
                              ATerm x_60 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_60), term_j_16);
                              {
                                t = add_0(t);
                                {
                                  x_60 = t;
                                  if(((w_60 != NULL) && (w_60 != x_60)))
                                    _fail(x_60);
                                  else
                                    w_60 = x_60;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_60)), term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(q_60))), term_x_16)))), not_null(w_60));
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
                t = thread_map_1(t, m_2);
                {
                  y_60 = t;
                  d_58 :
                  if(match_cons(y_60, sym__2))
                    {
                      z_60 = ATgetArgument(y_60, 0);
                      a_61 = ATgetArgument(y_60, 1);
                      if(((a_60 != NULL) && (a_60 != z_60)))
                        _fail(z_60);
                      else
                        a_60 = z_60;
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
    t = c_24;
    {
      ATerm f_24;
      f_24 = t;
      {
        ATerm c_61 = NULL,e_61 = NULL;
        ATerm d_61 = NULL;
        t = not_null(j_59);
        {
          t = length_0(t);
          {
            d_61 = t;
            if(((c_61 != NULL) && (c_61 != d_61)))
              _fail(d_61);
            else
              c_61 = d_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_59), not_null(c_61));
          {
            t = ConstructorName_0(t);
            {
              e_61 = t;
              if(((b_61 != NULL) && (b_61 != e_61)))
                _fail(e_61);
              else
                b_61 = e_61;
            }
          }
        }
      }
      t = f_24;
      {
        ATerm g_61 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), (ATerm) ATinsert(ATempty, not_null(o_59)));
        {
          t = conc_0(t);
          {
            g_61 = t;
            if(((f_61 != NULL) && (f_61 != g_61)))
              _fail(g_61);
            else
              f_61 = g_61;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_61))), term_x_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(f_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
      }
    }
    return(t);
  }
  ATerm z_61 (ATerm t)
  {
    ATerm k_61 = NULL;
    ATerm l_61 = NULL;
    t = not_null(n_59);
    {
      t = real_to_string_0(t);
      {
        l_61 = t;
        if(((k_61 != NULL) && (k_61 != l_61)))
          _fail(l_61);
        else
          k_61 = l_61;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_61))), term_x_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_59))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
    return(t);
  }
  ATerm a_62 (ATerm t)
  {
    ATerm p_61 = NULL;
    ATerm q_61 = NULL;
    t = not_null(n_59);
    {
      t = int_to_string_0(t);
      {
        q_61 = t;
        if(((p_61 != NULL) && (p_61 != q_61)))
          _fail(q_61);
        else
          p_61 = q_61;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(p_61))), term_x_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_59))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
    return(t);
  }
  ATerm b_62 (ATerm t)
  {
    ATerm u_61 = NULL;
    ATerm v_61 = NULL;
    t = not_null(n_59);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          v_61 = t;
          if(((u_61 != NULL) && (u_61 != v_61)))
            _fail(v_61);
          else
            u_61 = v_61;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_61)))), term_x_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_59))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
    return(t);
  }
  k_59 = t;
  k_58 :
  if(match_cons(k_59, sym_GuardedLChoice_3))
    {
      l_59 = ATgetArgument(k_59, 0);
      o_59 = ATgetArgument(k_59, 1);
      p_59 = ATgetArgument(k_59, 2);
      l_58 :
      if(match_cons(l_59, sym_Match_1))
        {
          m_59 = ATgetArgument(l_59, 0);
          m_58 :
          if(match_cons(m_59, sym_Op_2))
            {
              n_59 = ATgetArgument(m_59, 0);
              j_59 = ATgetArgument(m_59, 1);
              n_58 :
              if(((ATgetType(j_59) == AT_LIST) && !(ATisEmpty(j_59))))
                {
                  d_59 = ATgetFirst((ATermList) j_59);
                  f_59 = (ATerm) ATgetNext((ATermList) j_59);
                  o_58 :
                  if(((ATgetType(f_59) == AT_LIST) && !(ATisEmpty(f_59))))
                    {
                      g_59 = ATgetFirst((ATermList) f_59);
                      i_59 = (ATerm) ATgetNext((ATermList) f_59);
                      p_58 :
                      if(((ATgetType(i_59) == AT_LIST) && ATisEmpty(i_59)))
                        {
                          q_58 :
                          if(match_cons(g_59, sym_Var_1))
                            {
                              h_59 = ATgetArgument(g_59, 0);
                              r_58 :
                              if(match_cons(d_59, sym_Var_1))
                                {
                                  e_59 = ATgetArgument(d_59, 0);
                                  s_58 :
                                  if(match_string(n_59, "Cons"))
                                    {
                                      ATerm g_24 = t;
                                      int h_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_x_16)), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, term_x_16)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_59)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_59)), term_e_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, term_i_24)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_59)), term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, term_i_24)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
                                          ;
                                          LocalPopChoice(h_24);
                                        }
                                      else
                                        {
                                          t = g_24;
                                          t = y_61(t);
                                        }
                                    }
                                  else
                                    {
                                      t = y_61(t);
                                    }
                                }
                              else
                                {
                                  t_58 :
                                  t = y_61(t);
                                }
                            }
                          else
                            {
                              u_58 :
                              v_58 :
                              t = y_61(t);
                            }
                        }
                      else
                        {
                          w_58 :
                          x_58 :
                          y_58 :
                          t = y_61(t);
                        }
                    }
                  else
                    {
                      z_58 :
                      a_59 :
                      t = y_61(t);
                    }
                }
              else
                {
                  if(((ATgetType(j_59) == AT_LIST) && ATisEmpty(j_59)))
                    {
                      b_59 :
                      if(match_string(n_59, "Nil"))
                        {
                          ATerm j_24 = t;
                          int k_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_x_16)), term_r_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, term_x_16))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(o_59))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_59))));
                              ;
                              LocalPopChoice(k_24);
                            }
                          else
                            {
                              t = j_24;
                              t = y_61(t);
                            }
                        }
                      else
                        {
                          t = y_61(t);
                        }
                    }
                  else
                    {
                      c_59 :
                      t = y_61(t);
                    }
                }
            }
          else
            {
              if(match_cons(m_59, sym_Real_1))
                {
                  n_59 = ATgetArgument(m_59, 0);
                  t = z_61(t);
                }
              else
                {
                  if(match_cons(m_59, sym_Int_1))
                    {
                      n_59 = ATgetArgument(m_59, 0);
                      t = a_62(t);
                    }
                  else
                    {
                      if(match_cons(m_59, sym_Str_1))
                        {
                          n_59 = ATgetArgument(m_59, 0);
                          t = b_62(t);
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
      _fail(t);
    }
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,u_62 = NULL;
  q_62 = t;
  p_62 :
  if(match_cons(q_62, sym__2))
    {
      r_62 = ATgetArgument(q_62, 0);
      u_62 = ATgetArgument(q_62, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_l_24), not_null(u_62)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  z_62 :
  if(((ATgetType(b_63) == AT_LIST) && !(ATisEmpty(b_63))))
    {
      c_63 = ATgetFirst((ATermList) b_63);
      d_63 = (ATerm) ATgetNext((ATermList) b_63);
      a_63 :
      if(match_int(c_63, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_63)), term_n_24), term_m_24);
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  h_63 :
  if(((ATgetType(j_63) == AT_LIST) && !(ATisEmpty(j_63))))
    {
      k_63 = ATgetFirst((ATermList) j_63);
      l_63 = (ATerm) ATgetNext((ATermList) j_63);
      i_63 :
      if(match_int(k_63, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_63)), term_m_24), term_m_24);
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
  ATerm r_63 = NULL,u_63 = NULL,v_63 = NULL;
  r_63 = t;
  p_63 :
  if(((ATgetType(r_63) == AT_LIST) && !(ATisEmpty(r_63))))
    {
      u_63 = ATgetFirst((ATermList) r_63);
      v_63 = (ATerm) ATgetNext((ATermList) r_63);
      q_63 :
      if(match_int(u_63, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_63)), term_s_24), term_m_24);
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm v_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = v_24;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, n_2);
      }
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm f_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = f_25;
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
  ATerm e_64 = NULL,g_64 = NULL,h_64 = NULL;
  e_64 = t;
  d_64 :
  if(match_cons(e_64, sym__2))
    {
      g_64 = ATgetArgument(e_64, 0);
      h_64 = ATgetArgument(e_64, 1);
      {
        ATerm k_64 = NULL,m_64 = NULL;
        ATerm l_25;
        l_25 = t;
        {
          ATerm l_64 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_25), not_null(g_64));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  l_64 = t;
                  if(((k_64 != NULL) && (k_64 != l_64)))
                    _fail(l_64);
                  else
                    k_64 = l_64;
                }
              }
            }
          }
        }
        t = l_25;
        {
          ATerm n_64 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_n_25), not_null(g_64));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  n_64 = t;
                  if(((m_64 != NULL) && (m_64 != n_64)))
                    _fail(n_64);
                  else
                    m_64 = n_64;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_16), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(m_64))), term_q_25)))), not_null(h_64)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_16), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(k_64))), term_q_25)))));
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
  ATerm u_64 = NULL;
  u_64 = t;
  {
    ATerm x_64 = NULL,y_64 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_n_7;
        return(t);
      }
      t = rewrite_1(t, o_2);
      {
        x_64 = t;
        s_64 :
        if(match_cons(x_64, sym_Defined_1))
          {
            y_64 = ATgetArgument(x_64, 0);
            t_64 :
            if(!(match_string(y_64, "o_0")))
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
    t = not_null(u_64);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm d_65 = NULL;
  d_65 = t;
  {
    ATerm g_65 = NULL,h_65 = NULL;
    t = not_null(d_65);
    {
      ATerm p_2 (ATerm t)
      {
        t = term_z_7;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        g_65 = t;
        b_65 :
        if(match_cons(g_65, sym_Defined_1))
          {
            h_65 = ATgetArgument(g_65, 0);
            c_65 :
            if(!(match_string(h_65, "r_0")))
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
    t = not_null(d_65);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym_SDef_3))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      w_65 = ATgetArgument(t_65, 2);
      {
        ATerm a_66 = NULL,b_66 = NULL;
        ATerm c_66 = NULL;
        t = not_null(v_65);
        {
          ATerm d_66 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            c_66 = t;
            {
              if(((a_66 != NULL) && (a_66 != c_66)))
                _fail(c_66);
              else
                a_66 = c_66;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_65), not_null(w_65));
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_2 (ATerm t)
                      {
                        ATerm t_25 = t;
                        int u_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            ;
                            LocalPopChoice(u_25);
                          }
                        else
                          {
                            t = t_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, q_2, _id);
                      t = TracedBody_0(t);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = PlainBody_0(t);
                    }
                  {
                    d_66 = t;
                    if(((b_66 != NULL) && (b_66 != d_66)))
                      _fail(d_66);
                    else
                      b_66 = d_66;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_65)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(a_66)), term_w_25)))), not_null(b_66));
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
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_cons(j_66, sym__2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_66)), not_null(k_66)), (ATerm) ATinsert(ATempty, not_null(k_66)));
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
  ATerm q_66 = NULL;
  ATerm r_66 = NULL;
  r_66 = t;
  if(((q_66 != NULL) && (q_66 != r_66)))
    _fail(r_66);
  else
    q_66 = r_66;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_24, not_null(q_66));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm d_120 (ATerm))
{
  t = explode_string_0(t);
  {
    t = d_120(t);
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
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  v_66 = t;
  u_66 :
  if(((ATgetType(v_66) == AT_LIST) && !(ATisEmpty(v_66))))
    {
      w_66 = ATgetFirst((ATermList) v_66);
      x_66 = (ATerm) ATgetNext((ATermList) v_66);
      t = not_null(w_66);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  c_67 = t;
  b_67 :
  if(match_cons(c_67, sym__2))
    {
      d_67 = ATgetArgument(c_67, 0);
      e_67 = ATgetArgument(c_67, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_67), not_null(e_67));
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
ATerm rewrite_1 (ATerm t, ATerm k_131 (ATerm))
{
  ATerm k_67 = NULL;
  ATerm m_67 = NULL;
  k_67 = t;
  {
    ATerm n_67 = NULL;
    t = term_x_25;
    {
      t = k_131(t);
      {
        n_67 = t;
        if(((m_67 != NULL) && (m_67 != n_67)))
          _fail(n_67);
        else
          m_67 = n_67;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_67), not_null(k_67));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
  v_67 = t;
  u_67 :
  if(match_cons(v_67, sym__2))
    {
      w_67 = ATgetArgument(v_67, 0);
      x_67 = ATgetArgument(v_67, 1);
      {
        ATerm b_68 = NULL;
        ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
        t = not_null(v_67);
        {
          ATerm w_2 (ATerm t)
          {
            t = term_y_25;
            return(t);
          }
          t = rewrite_1(t, w_2);
          {
            c_68 = t;
            s_67 :
            if(match_cons(c_68, sym_Defined_2))
              {
                d_68 = ATgetArgument(c_68, 0);
                e_68 = ATgetArgument(c_68, 1);
                t_67 :
                if(match_string(d_68, "j_0"))
                  {
                    if(((b_68 != NULL) && (b_68 != e_68)))
                      _fail(e_68);
                    else
                      b_68 = e_68;
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
        t = not_null(b_68);
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
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym_OpDecl_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      {
        ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,h_69 = NULL;
        ATerm z_25;
        z_25 = t;
        {
          ATerm e_69 = NULL;
          t = not_null(p_68);
          {
            ATerm f_69 = NULL;
            t = Arity_0(t);
            {
              e_69 = t;
              {
                if(((c_69 != NULL) && (c_69 != e_69)))
                  _fail(e_69);
                else
                  c_69 = e_69;
                {
                  ATerm g_69 = NULL;
                  t = int_to_string_0(t);
                  {
                    f_69 = t;
                    {
                      if(((b_69 != NULL) && (b_69 != f_69)))
                        _fail(f_69);
                      else
                        b_69 = f_69;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_68), not_null(c_69));
                        {
                          t = ConstructorName_0(t);
                          {
                            g_69 = t;
                            if(((d_69 != NULL) && (d_69 != g_69)))
                              _fail(g_69);
                            else
                              d_69 = g_69;
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
        t = z_25;
        {
          ATerm i_69 = NULL;
          t = not_null(o_68);
          {
            t = double_quote_0(t);
            {
              i_69 = t;
              if(((h_69 != NULL) && (h_69 != i_69)))
                _fail(i_69);
              else
                h_69 = i_69;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_69)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_69)), term_e_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(b_69))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(h_69))))))));
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
  ATerm r_69 = NULL;
  ATerm t_69 = NULL;
  r_69 = t;
  {
    ATerm u_69 = NULL,w_69 = NULL;
    ATerm v_69 = NULL;
    t = not_null(r_69);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          v_69 = t;
          if(((u_69 != NULL) && (u_69 != v_69)))
            _fail(v_69);
          else
            u_69 = v_69;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_69), (ATerm) ATinsert(ATempty, term_n_26));
      {
        t = conc_0(t);
        {
          w_69 = t;
          if(((t_69 != NULL) && (t_69 != w_69)))
            _fail(w_69);
          else
            t_69 = w_69;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_p_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_69)));
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
  ATerm b_70 = NULL;
  b_70 = t;
  t = SSL_int_to_string(not_null(b_70));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  k_70 :
  if(((ATgetType(n_70) == AT_LIST) && !(ATisEmpty(n_70))))
    {
      o_70 = ATgetFirst((ATermList) n_70);
      p_70 = (ATerm) ATgetNext((ATermList) n_70);
      m_70 :
      if(match_int(o_70, 95))
        {
          ATerm r_70 = NULL;
          ATerm s_70 = NULL;
          t = not_null(p_70);
          {
            t = p_0(t);
            {
              s_70 = t;
              if(((r_70 != NULL) && (r_70 != s_70)))
                _fail(s_70);
              else
                r_70 = s_70;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_70)), term_q_26), term_q_26);
        }
      else
        {
          if(match_int(o_70, 45))
            {
              ATerm u_70 = NULL;
              ATerm v_70 = NULL;
              t = not_null(p_70);
              {
                t = p_0(t);
                {
                  v_70 = t;
                  if(((u_70 != NULL) && (u_70 != v_70)))
                    _fail(v_70);
                  else
                    u_70 = v_70;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_70)), term_q_26);
            }
          else
            {
              if(match_int(o_70, 39))
                {
                  ATerm x_70 = NULL;
                  ATerm y_70 = NULL;
                  t = not_null(p_70);
                  {
                    t = p_0(t);
                    {
                      y_70 = t;
                      if(((x_70 != NULL) && (x_70 != y_70)))
                        _fail(y_70);
                      else
                        x_70 = y_70;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_70)), term_q_26), term_r_26), term_q_26);
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
ATerm escape_1 (ATerm t, ATerm z_119 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm m_71 (ATerm t)
    {
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_119(t, m_71);
          ;
          LocalPopChoice(t_26);
        }
      else
        {
          t = s_26;
          {
            ATerm u_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, m_71);
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = u_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = m_71(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm))
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_116(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
        r_71 = t;
        q_71 :
        if(((ATgetType(r_71) == AT_LIST) && !(ATisEmpty(r_71))))
          {
            s_71 = ATgetFirst((ATermList) r_71);
            t_71 = (ATerm) ATgetNext((ATermList) r_71);
            {
              ATerm w_71 = NULL,y_71 = NULL;
              ATerm f_27;
              f_27 = t;
              {
                ATerm x_71 = NULL;
                t = not_null(s_71);
                {
                  t = v_116(t);
                  {
                    x_71 = t;
                    if(((w_71 != NULL) && (w_71 != x_71)))
                      _fail(x_71);
                    else
                      w_71 = x_71;
                  }
                }
              }
              t = f_27;
              {
                ATerm z_71 = NULL;
                t = not_null(t_71);
                {
                  t = foldr_3(t, t_116, u_116, v_116);
                  {
                    z_71 = t;
                    if(((y_71 != NULL) && (y_71 != z_71)))
                      _fail(z_71);
                    else
                      y_71 = z_71;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_71), not_null(y_71));
                  t = u_116(t);
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
  ATerm x_2 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  t = foldr_3(t, x_2, add_0, y_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  h_72 = t;
  f_72 :
  if(match_cons(h_72, sym_FunType_2))
    {
      i_72 = ATgetArgument(h_72, 0);
      g_72 = ATgetArgument(h_72, 1);
      {
        t = not_null(i_72);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(h_72, sym_ConstType_1))
        {
          i_72 = ATgetArgument(h_72, 0);
          t = term_d_16;
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
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  u_72 = t;
  t_72 :
  if(match_cons(u_72, sym_OpDecl_2))
    {
      v_72 = ATgetArgument(u_72, 0);
      w_72 = ATgetArgument(u_72, 1);
      {
        ATerm z_72 = NULL,a_73 = NULL;
        ATerm b_73 = NULL;
        t = not_null(w_72);
        {
          ATerm c_73 = NULL,e_73 = NULL,g_73 = NULL;
          t = Arity_0(t);
          {
            b_73 = t;
            {
              if(((z_72 != NULL) && (z_72 != b_73)))
                _fail(b_73);
              else
                z_72 = b_73;
              {
                ATerm h_27;
                h_27 = t;
                {
                  ATerm d_73 = NULL;
                  t = not_null(v_72);
                  {
                    t = cify_0(t);
                    {
                      d_73 = t;
                      if(((c_73 != NULL) && (c_73 != d_73)))
                        _fail(d_73);
                      else
                        c_73 = d_73;
                    }
                  }
                }
                t = h_27;
                {
                  ATerm f_73 = NULL;
                  t = not_null(z_72);
                  {
                    t = int_to_string_0(t);
                    {
                      f_73 = t;
                      if(((e_73 != NULL) && (e_73 != f_73)))
                        _fail(f_73);
                      else
                        e_73 = f_73;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_73)), term_l_27), not_null(c_73)), term_k_27);
                    {
                      t = concat_strings_0(t);
                      {
                        g_73 = t;
                        {
                          if(((a_73 != NULL) && (a_73 != g_73)))
                            _fail(g_73);
                          else
                            a_73 = g_73;
                          {
                            ATerm m_27;
                            m_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_72), not_null(z_72)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_27, not_null(a_73)));
                              {
                                ATerm z_2 (ATerm t)
                                {
                                  t = term_y_25;
                                  return(t);
                                }
                                t = assert_1(t, z_2);
                              }
                            }
                            t = m_27;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_73)), term_v_8)));
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
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  z_73 = t;
  q_73 :
  if(match_cons(z_73, sym_Signature_1))
    {
      a_74 = ATgetArgument(z_73, 0);
      w_73 :
      if(((ATgetType(a_74) == AT_LIST) && !(ATisEmpty(a_74))))
        {
          b_74 = ATgetFirst((ATermList) a_74);
          d_74 = (ATerm) ATgetNext((ATermList) a_74);
          x_73 :
          if(match_cons(b_74, sym_Constructors_1))
            {
              c_74 = ATgetArgument(b_74, 0);
              y_73 :
              if(((ATgetType(d_74) == AT_LIST) && ATisEmpty(d_74)))
                {
                  {
                    ATerm o_74 = NULL,p_74 = NULL,u_74 = NULL;
                    ATerm r_27;
                    r_27 = t;
                    {
                      ATerm q_74 = NULL;
                      t = not_null(c_74);
                      {
                        ATerm t_74 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          q_74 = t;
                          {
                            if(((o_74 != NULL) && (o_74 != q_74)))
                              _fail(q_74);
                            else
                              o_74 = q_74;
                            {
                              t = not_null(c_74);
                              {
                                t = InitConstructors_0(t);
                                {
                                  t_74 = t;
                                  if(((p_74 != NULL) && (p_74 != t_74)))
                                    _fail(t_74);
                                  else
                                    p_74 = t_74;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = r_27;
                    {
                      ATerm v_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_74), (ATerm) ATinsert(ATempty, not_null(p_74)));
                      {
                        t = conc_0(t);
                        {
                          v_74 = t;
                          if(((u_74 != NULL) && (u_74 != v_74)))
                            _fail(v_74);
                          else
                            u_74 = v_74;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(u_74));
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
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  f_75 = t;
  d_75 :
  if(match_cons(f_75, sym_FunType_2))
    {
      g_75 = ATgetArgument(f_75, 0);
      e_75 = ATgetArgument(f_75, 1);
      {
        ATerm i_75 = NULL;
        ATerm j_75 = NULL;
        t = not_null(g_75);
        {
          t = map_1(t, TranslateType_0);
          {
            j_75 = t;
            if(((i_75 != NULL) && (i_75 != j_75)))
              _fail(j_75);
            else
              i_75 = j_75;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_8, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(i_75)));
      }
    }
  else
    {
      if(match_cons(f_75, sym_ConstType_1))
        {
          g_75 = ATgetArgument(f_75, 0);
          t = term_u_8;
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
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  a_76 = t;
  q_75 :
  if(match_cons(a_76, sym_VarDec_2))
    {
      b_76 = ATgetArgument(a_76, 0);
      c_76 = ATgetArgument(a_76, 1);
      r_75 :
      if(match_cons(c_76, sym_FunType_2))
        {
          d_76 = ATgetArgument(c_76, 0);
          z_75 = ATgetArgument(c_76, 1);
          {
            ATerm g_76 = NULL;
            ATerm h_76 = NULL;
            t = not_null(d_76);
            {
              t = map_1(t, TranslateType_0);
              {
                h_76 = t;
                if(((g_76 != NULL) && (g_76 != h_76)))
                  _fail(h_76);
                else
                  g_76 = h_76;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_76)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(g_76)))));
          }
        }
      else
        {
          if(match_cons(c_76, sym_ConstType_1))
            {
              d_76 = ATgetArgument(c_76, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_76)), term_v_8));
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
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  p_76 = t;
  o_76 :
  if(match_cons(p_76, sym_SDef_3))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      s_76 = ATgetArgument(p_76, 2);
      {
        ATerm w_76 = NULL;
        ATerm x_76 = NULL;
        t = not_null(r_76);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            x_76 = t;
            if(((w_76 != NULL) && (w_76 != x_76)))
              _fail(x_76);
            else
              w_76 = x_76;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_76)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(w_76)), term_c_28))))));
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
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  m_77 = t;
  g_77 :
  if(match_cons(m_77, sym_Specification_1))
    {
      n_77 = ATgetArgument(m_77, 0);
      h_77 :
      if(((ATgetType(n_77) == AT_LIST) && !(ATisEmpty(n_77))))
        {
          o_77 = ATgetFirst((ATermList) n_77);
          q_77 = (ATerm) ATgetNext((ATermList) n_77);
          i_77 :
          if(match_cons(o_77, sym_Signature_1))
            {
              p_77 = ATgetArgument(o_77, 0);
              j_77 :
              if(((ATgetType(q_77) == AT_LIST) && !(ATisEmpty(q_77))))
                {
                  r_77 = ATgetFirst((ATermList) q_77);
                  t_77 = (ATerm) ATgetNext((ATermList) q_77);
                  k_77 :
                  if(match_cons(r_77, sym_Strategies_1))
                    {
                      s_77 = ATgetArgument(r_77, 0);
                      l_77 :
                      if(((ATgetType(t_77) == AT_LIST) && ATisEmpty(t_77)))
                        {
                          {
                            ATerm w_77 = NULL,x_77 = NULL,e_78 = NULL;
                            ATerm q_28;
                            q_28 = t;
                            {
                              ATerm y_77 = NULL;
                              t = not_null(s_77);
                              {
                                ATerm d_78 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  y_77 = t;
                                  {
                                    if(((w_77 != NULL) && (w_77 != y_77)))
                                      _fail(y_77);
                                    else
                                      w_77 = y_77;
                                    {
                                      t = term_c_8;
                                      {
                                        ATerm r_28 = t;
                                        int c_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm a_3 (ATerm t)
                                              {
                                                ATerm z_77 = NULL;
                                                ATerm a_78 = NULL,c_78 = NULL;
                                                ATerm b_78 = NULL;
                                                b_78 = t;
                                                if(((a_78 != NULL) && (a_78 != b_78)))
                                                  _fail(b_78);
                                                else
                                                  a_78 = b_78;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_g_29, not_null(a_78));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      c_78 = t;
                                                      if(((z_77 != NULL) && (z_77 != c_78)))
                                                        _fail(c_78);
                                                      else
                                                        z_77 = c_78;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(z_77));
                                                return(t);
                                              }
                                              t = map_1(t, a_3);
                                            }
                                            ;
                                            LocalPopChoice(c_29);
                                          }
                                        else
                                          {
                                            t = r_28;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          d_78 = t;
                                          if(((x_77 != NULL) && (x_77 != d_78)))
                                            _fail(d_78);
                                          else
                                            x_77 = d_78;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = q_28;
                            {
                              ATerm f_78 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_77)), not_null(w_77)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_29), (ATerm) ATmakeAppl(sym_Signature_1, not_null(p_77))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_29, (ATerm) ATinsert(ATempty, term_m_29)))), not_null(x_77));
                              {
                                t = concat_0(t);
                                {
                                  f_78 = t;
                                  if(((e_78 != NULL) && (e_78 != f_78)))
                                    _fail(f_78);
                                  else
                                    e_78 = f_78;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(e_78));
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
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  n_78 :
  if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
    {
      p_78 = ATgetFirst((ATermList) o_78);
      q_78 = (ATerm) ATgetNext((ATermList) o_78);
      t = not_null(q_78);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_78 = NULL,k_79 = NULL,l_79 = NULL;
  w_78 = t;
  v_78 :
  if(match_cons(w_78, sym__2))
    {
      k_79 = ATgetArgument(w_78, 0);
      l_79 = ATgetArgument(w_78, 1);
      {
        ATerm o_29;
        o_29 = t;
        {
          ATerm o_79 = NULL;
          ATerm p_79 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_79), not_null(l_79));
          {
            ATerm p_29 = t;
            int q_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(q_29);
              }
            else
              {
                t = p_29;
                t = (ATerm) ATempty;
              }
            {
              p_79 = t;
              if(((o_79 != NULL) && (o_79 != p_79)))
                _fail(p_79);
              else
                o_79 = p_79;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_79), not_null(l_79), not_null(o_79));
            t = table_put_0(t);
          }
        }
        t = o_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_131 (ATerm))
{
  ATerm h_80 = NULL,k_80 = NULL,l_80 = NULL;
  ATerm r_29;
  r_29 = t;
  {
    ATerm m_80 = NULL;
    ATerm n_80 = NULL,o_80 = NULL,w_80 = NULL;
    t = f_131(t);
    {
      m_80 = t;
      {
        if(((l_80 != NULL) && (l_80 != m_80)))
          _fail(m_80);
        else
          l_80 = m_80;
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_80), term_u_29);
              t = table_get_0(t);
              ;
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_80 = t;
            g_80 :
            if(((ATgetType(n_80) == AT_LIST) && !(ATisEmpty(n_80))))
              {
                o_80 = ATgetFirst((ATermList) n_80);
                w_80 = (ATerm) ATgetNext((ATermList) n_80);
                {
                  if(((k_80 != NULL) && (k_80 != o_80)))
                    _fail(o_80);
                  else
                    k_80 = o_80;
                  {
                    if(((h_80 != NULL) && (h_80 != w_80)))
                      _fail(w_80);
                    else
                      h_80 = w_80;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_80), term_u_29, not_null(h_80));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_80);
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm z_80 = NULL;
                              z_80 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_80), not_null(z_80));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, b_3);
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
  t = r_29;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm w_103 (ATerm), ATerm x_103 (ATerm))
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_103(t);
      t = x_103(t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        t = x_103(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_131 (ATerm))
{
  ATerm g_81 = NULL;
  ATerm x_29;
  x_29 = t;
  {
    ATerm h_81 = NULL;
    ATerm i_81 = NULL;
    t = e_131(t);
    {
      h_81 = t;
      {
        if(((g_81 != NULL) && (g_81 != h_81)))
          _fail(h_81);
        else
          g_81 = h_81;
        {
          ATerm j_81 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_81), term_u_29);
          {
            ATerm y_29 = t;
            int z_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_29);
              }
            else
              {
                t = y_29;
                t = (ATerm) ATempty;
              }
            {
              j_81 = t;
              if(((i_81 != NULL) && (i_81 != j_81)))
                _fail(j_81);
              else
                i_81 = j_81;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_81), term_u_29, (ATerm) ATinsert(CheckATermList(not_null(i_81)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm g_131 (ATerm), ATerm h_131 (ATerm))
{
  t = begin_scope_1(t, g_131);
  {
    ATerm c_3 (ATerm t)
    {
      t = end_scope_1(t, g_131);
      return(t);
    }
    t = restore_always_2(t, h_131, c_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_131 (ATerm))
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  q_81 :
  if(match_cons(r_81, sym__2))
    {
      s_81 = ATgetArgument(r_81, 0);
      t_81 = ATgetArgument(r_81, 1);
      {
        ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
        ATerm a_30;
        a_30 = t;
        {
          ATerm z_81 = NULL;
          ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
          t = i_131(t);
          {
            z_81 = t;
            {
              if(((w_81 != NULL) && (w_81 != z_81)))
                _fail(z_81);
              else
                w_81 = z_81;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_81), not_null(s_81), not_null(t_81));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_30 = t;
                    int c_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_81), term_u_29);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(c_30);
                      }
                    else
                      {
                        t = b_30;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_82 = t;
                      p_81 :
                      if(((ATgetType(a_82) == AT_LIST) && !(ATisEmpty(a_82))))
                        {
                          b_82 = ATgetFirst((ATermList) a_82);
                          c_82 = (ATerm) ATgetNext((ATermList) a_82);
                          {
                            if(((x_81 != NULL) && (x_81 != b_82)))
                              _fail(b_82);
                            else
                              x_81 = b_82;
                            {
                              if(((y_81 != NULL) && (y_81 != c_82)))
                                _fail(c_82);
                              else
                                y_81 = c_82;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_81), term_u_29, (ATerm) ATinsert(CheckATermList(not_null(y_81)), (ATerm) ATinsert(CheckATermList(not_null(x_81)), not_null(s_81))));
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
        t = a_30;
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
  ATerm k_82 = NULL,l_82 = NULL;
  ATerm d_30;
  d_30 = t;
  {
    ATerm m_82 = NULL;
    ATerm n_82 = NULL;
    t = term_f_30;
    {
      m_82 = t;
      {
        if(((k_82 != NULL) && (k_82 != m_82)))
          _fail(m_82);
        else
          k_82 = m_82;
        {
          t = term_y_15;
          {
            n_82 = t;
            if(((l_82 != NULL) && (l_82 != n_82)))
              _fail(n_82);
            else
              l_82 = n_82;
          }
        }
      }
    }
  }
  t = d_30;
  {
    ATerm g_30;
    g_30 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), (ATerm) ATmakeAppl(sym_Defined_2, term_h_30, not_null(l_82)));
      {
        ATerm d_3 (ATerm t)
        {
          t = term_h_13;
          return(t);
        }
        t = assert_1(t, d_3);
      }
    }
    t = g_30;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm t_82 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        t = term_b_14;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              {
                ATerm k_30 = t;
                int l_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(l_30);
                  }
                else
                  {
                    t = k_30;
                    {
                      ATerm m_30 = t;
                      int n_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
                          LocalPopChoice(n_30);
                        }
                      else
                        {
                          t = m_30;
                          {
                            ATerm o_30 = t;
                            int p_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = TranslateStratMatchGuard_0(t);
                                ;
                                LocalPopChoice(p_30);
                              }
                            else
                              {
                                t = o_30;
                                t = TranslateStrat_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, g_3);
        {
          t = _all(t, t_82);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, e_3, f_3);
      return(t);
    }
    t = t_82(t);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          ATerm s_82 = NULL;
          s_82 = t;
          r_82 :
          if(match_cons(s_82, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, i_3);
        return(t);
      }
      t = try_1(t, h_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_30;
  q_30 = t;
  {
    ATerm w_82 = NULL;
    ATerm x_82 = NULL;
    t = term_x_25;
    {
      t = whoami_0(t);
      {
        x_82 = t;
        if(((w_82 != NULL) && (w_82 != x_82)))
          _fail(x_82);
        else
          w_82 = x_82;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_30), not_null(w_82)), term_s_30));
      {
        t = printnl_0(t);
        {
          t = term_j_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  b_83 = t;
  a_83 :
  if(match_cons(b_83, sym__2))
    {
      c_83 = ATgetArgument(b_83, 0);
      d_83 = ATgetArgument(b_83, 1);
      {
        ATerm u_30;
        u_30 = t;
        t = SSL_printnl(not_null(c_83), not_null(d_83));
        t = u_30;
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
  ATerm i_83 = NULL;
  i_83 = t;
  t = SSL_implode_string(not_null(i_83));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL;
        n_83 = t;
        m_83 :
        if(((ATgetType(n_83) == AT_LIST) && !(ATisEmpty(n_83))))
          {
            o_83 = ATgetFirst((ATermList) n_83);
            p_83 = (ATerm) ATgetNext((ATermList) n_83);
            {
              t = not_null(o_83);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(p_83);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm b_84 = NULL;
  ATerm d_84 = NULL;
  b_84 = t;
  {
    ATerm e_84 = NULL;
    ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
    t = not_null(b_84);
    {
      e_84 = t;
      {
        t = SSL_explode_term(not_null(e_84));
        {
          h_84 = t;
          z_83 :
          if(match_cons(h_84, sym__2))
            {
              i_84 = ATgetArgument(h_84, 0);
              j_84 = ATgetArgument(h_84, 1);
              a_84 :
              if(match_string(i_84, ""))
                {
                  if(((d_84 != NULL) && (d_84 != j_84)))
                    _fail(j_84);
                  else
                    d_84 = j_84;
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
      t = not_null(d_84);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_111 (ATerm))
{
  ATerm n_84 (ATerm t)
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_84);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          t = Nil_0(t);
          t = h_111(t);
        }
      }
    return(t);
  }
  t = n_84(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym__2))
    {
      r_84 = ATgetArgument(q_84, 0);
      s_84 = ATgetArgument(q_84, 1);
      {
        t = not_null(r_84);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(s_84);
            return(t);
          }
          t = at_end_1(t, k_3);
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
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  t = SSL_explode_string(not_null(x_84));
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
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_3);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
              g_85 = t;
              f_85 :
              if(match_cons(g_85, sym_Path_1))
                {
                  h_85 = ATgetArgument(g_85, 0);
                  t = not_null(h_85);
                }
              else
                {
                  if(match_cons(g_85, sym_Var_1))
                    {
                      h_85 = ATgetArgument(g_85, 0);
                      {
                        t = not_null(h_85);
                        {
                          ATerm i_31 = t;
                          int j_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_31);
                            }
                          else
                            {
                              t = i_31;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_k_31;
                                  return(t);
                                }
                                t = debug_1(t, m_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_85, sym_Prefix_2))
                        {
                          h_85 = ATgetArgument(g_85, 0);
                          i_85 = ATgetArgument(g_85, 1);
                          {
                            ATerm n_85 = NULL,p_85 = NULL;
                            ATerm l_31;
                            l_31 = t;
                            {
                              ATerm o_85 = NULL;
                              t = not_null(h_85);
                              {
                                t = eval_config_0(t);
                                {
                                  o_85 = t;
                                  if(((n_85 != NULL) && (n_85 != o_85)))
                                    _fail(o_85);
                                  else
                                    n_85 = o_85;
                                }
                              }
                            }
                            t = l_31;
                            {
                              ATerm q_85 = NULL;
                              t = not_null(i_85);
                              {
                                t = eval_config_0(t);
                                {
                                  q_85 = t;
                                  if(((p_85 != NULL) && (p_85 != q_85)))
                                    _fail(q_85);
                                  else
                                    p_85 = q_85;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_85), not_null(p_85));
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
  ATerm y_85 = NULL;
  y_85 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(y_85));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_31;
            m_31 = t;
            {
              ATerm a_86 = NULL;
              ATerm b_86 = NULL;
              b_86 = t;
              if(((a_86 != NULL) && (a_86 != b_86)))
                _fail(b_86);
              else
                a_86 = b_86;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_6, not_null(y_85), not_null(a_86));
                t = table_put_0(t);
              }
            }
            t = m_31;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_123 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm n_31;
    n_31 = t;
    {
      ATerm f_86 = NULL;
      ATerm g_86 = NULL;
      t = term_p_31;
      {
        t = get_config_0(t);
        {
          g_86 = t;
          if(((f_86 != NULL) && (f_86 != g_86)))
            _fail(g_86);
          else
            f_86 = g_86;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_86), term_q_31);
        t = geq_0(t);
      }
    }
    t = n_31;
    t = x_123(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL;
  m_86 = t;
  k_86 :
  if(match_cons(m_86, sym__2))
    {
      n_86 = ATgetArgument(m_86, 0);
      o_86 = ATgetArgument(m_86, 1);
      l_86 :
      if(match_cons(o_86, sym_Stream_1))
        {
          p_86 = ATgetArgument(o_86, 0);
          {
            ATerm s_86 = NULL;
            t = SSL_fputc(not_null(n_86), not_null(p_86));
            {
              ATerm t_86 = NULL;
              t_86 = t;
              if(((s_86 != NULL) && (s_86 != t_86)))
                _fail(t_86);
              else
                s_86 = t_86;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_86));
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
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL;
  a_87 = t;
  y_86 :
  if(match_cons(a_87, sym__2))
    {
      b_87 = ATgetArgument(a_87, 0);
      d_87 = ATgetArgument(a_87, 1);
      z_86 :
      if(match_cons(b_87, sym_Stream_1))
        {
          c_87 = ATgetArgument(b_87, 0);
          {
            ATerm g_87 = NULL;
            t = SSL_write_term_to_stream_text(not_null(c_87), not_null(d_87));
            {
              ATerm h_87 = NULL;
              h_87 = t;
              if(((g_87 != NULL) && (g_87 != h_87)))
                _fail(h_87);
              else
                g_87 = h_87;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_87));
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
  ATerm p_3 (ATerm t)
  {
    ATerm l_87 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm m_87 = NULL;
      m_87 = t;
      if(((l_87 != NULL) && (l_87 != m_87)))
        _fail(m_87);
      else
        l_87 = m_87;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_31, not_null(l_87));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL;
  s_87 = t;
  q_87 :
  if(match_cons(s_87, sym__2))
    {
      t_87 = ATgetArgument(s_87, 0);
      v_87 = ATgetArgument(s_87, 1);
      r_87 :
      if(match_cons(t_87, sym_Stream_1))
        {
          u_87 = ATgetArgument(t_87, 0);
          {
            ATerm y_87 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(u_87), not_null(v_87));
            {
              ATerm z_87 = NULL;
              z_87 = t;
              if(((y_87 != NULL) && (y_87 != z_87)))
                _fail(z_87);
              else
                y_87 = z_87;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_87));
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
ATerm WriteToFile_1 (ATerm t, ATerm t_122 (ATerm))
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL;
  g_88 = t;
  f_88 :
  if(match_cons(g_88, sym__2))
    {
      h_88 = ATgetArgument(g_88, 0);
      i_88 = ATgetArgument(g_88, 1);
      {
        ATerm l_88 = NULL,n_88 = NULL;
        t = not_null(h_88);
        {
          ATerm m_88 = NULL;
          m_88 = t;
          if(((l_88 != NULL) && (l_88 != m_88)))
            _fail(m_88);
          else
            l_88 = m_88;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_88), term_s_31);
            {
              t = open_stream_0(t);
              {
                ATerm o_88 = NULL;
                o_88 = t;
                if(((n_88 != NULL) && (n_88 != o_88)))
                  _fail(o_88);
                else
                  n_88 = o_88;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_88), not_null(i_88));
                  {
                    t = t_122(t);
                    {
                      t = fclose_0(t);
                      t = not_null(i_88);
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
  ATerm w_88 = NULL;
  ATerm u_31;
  u_31 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm x_88 = NULL,y_88 = NULL;
            x_88 = t;
            t_88 :
            if(match_cons(x_88, sym_Output_1))
              {
                y_88 = ATgetArgument(x_88, 0);
                if(((w_88 != NULL) && (w_88 != y_88)))
                  _fail(y_88);
                else
                  w_88 = y_88;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          ;
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          {
            ATerm z_88 = NULL;
            t = term_y_31;
            {
              z_88 = t;
              if(((w_88 != NULL) && (w_88 != z_88)))
                _fail(z_88);
              else
                w_88 = z_88;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = u_31;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(w_88);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm a_89 = NULL;
              a_89 = t;
              v_88 :
              if(!(match_cons(a_89, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_124 (ATerm))
{
  ATerm g_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
  ATerm c_32;
  c_32 = t;
  t = dtime_0(t);
  t = c_32;
  {
    t = t_124(t);
    {
      ATerm d_32;
      d_32 = t;
      {
        ATerm h_89 = NULL;
        t = dtime_0(t);
        {
          h_89 = t;
          if(((g_89 != NULL) && (g_89 != h_89)))
            _fail(h_89);
          else
            g_89 = h_89;
        }
      }
      t = d_32;
      {
        i_89 = t;
        f_89 :
        if(match_cons(i_89, sym__2))
          {
            j_89 = ATgetArgument(i_89, 0);
            k_89 = ATgetArgument(i_89, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_89)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_89))), not_null(k_89));
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
  ATerm s_89 = NULL,t_89 = NULL;
  ATerm z_89 (ATerm t)
  {
    t = SSL_fclose(not_null(t_89));
    return(t);
  }
  t_89 = t;
  r_89 :
  if(match_cons(t_89, sym_Stream_1))
    {
      s_89 = ATgetArgument(t_89, 0);
      {
        ATerm e_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(s_89));
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = e_32;
            t = z_89(t);
          }
      }
    }
  else
    {
      t = z_89(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL;
  c_90 = t;
  b_90 :
  if(match_cons(c_90, sym_Stream_1))
    {
      d_90 = ATgetArgument(c_90, 0);
      t = SSL_read_term_from_stream(not_null(d_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_122 (ATerm))
{
  ATerm j_32;
  j_32 = t;
  {
    ATerm i_90 = NULL,k_90 = NULL;
    ATerm k_32;
    k_32 = t;
    {
      ATerm j_90 = NULL;
      t = f_122(t);
      {
        j_90 = t;
        if(((i_90 != NULL) && (i_90 != j_90)))
          _fail(j_90);
        else
          i_90 = j_90;
      }
    }
    t = k_32;
    {
      ATerm l_90 = NULL;
      l_90 = t;
      if(((k_90 != NULL) && (k_90 != l_90)))
        _fail(l_90);
      else
        k_90 = l_90;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_90)), not_null(i_90)));
        t = printnl_0(t);
      }
    }
  }
  t = j_32;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  q_90 :
  if(match_cons(r_90, sym__2))
    {
      s_90 = ATgetArgument(r_90, 0);
      t_90 = ATgetArgument(r_90, 1);
      {
        ATerm w_90 = NULL;
        t = SSL_fopen(not_null(s_90), not_null(t_90));
        {
          ATerm x_90 = NULL;
          x_90 = t;
          if(((w_90 != NULL) && (w_90 != x_90)))
            _fail(x_90);
          else
            w_90 = x_90;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_90));
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
  ATerm b_91 = NULL;
  b_91 = t;
  t = SSL_is_string(not_null(b_91));
  return(t);
}
ATerm _2 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
  m_91 = t;
  l_91 :
  if(match_cons(m_91, sym__2))
    {
      n_91 = ATgetArgument(m_91, 0);
      o_91 = ATgetArgument(m_91, 1);
      {
        ATerm s_91 = NULL,u_91 = NULL;
        ATerm t_91 = NULL;
        t = SSLgetAnnotations(not_null(m_91));
        {
          t_91 = t;
          if(((s_91 != NULL) && (s_91 != t_91)))
            _fail(t_91);
          else
            s_91 = t_91;
        }
        {
          t = not_null(n_91);
          {
            ATerm w_91 = NULL;
            t = x_80(t);
            {
              u_91 = t;
              {
                t = not_null(o_91);
                {
                  ATerm y_91 = NULL;
                  t = y_80(t);
                  {
                    w_91 = t;
                    {
                      ATerm z_91 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_91), not_null(w_91)), not_null(s_91));
                      {
                        z_91 = t;
                        if(((y_91 != NULL) && (y_91 != z_91)))
                          _fail(z_91);
                        else
                          y_91 = z_91;
                      }
                      t = not_null(y_91);
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
  ATerm g_92 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_92 = NULL;
    h_92 = t;
    if(((g_92 != NULL) && (g_92 != h_92)))
      _fail(h_92);
    else
      g_92 = h_92;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_92));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_92 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_92 = NULL;
    l_92 = t;
    if(((k_92 != NULL) && (k_92 != l_92)))
      _fail(l_92);
    else
      k_92 = l_92;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_92));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_92 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_92 = NULL;
    p_92 = t;
    if(((o_92 != NULL) && (o_92 != p_92)))
      _fail(p_92);
    else
      o_92 = p_92;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_92));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_92 = NULL;
  v_92 = t;
  u_92 :
  if(match_cons(v_92, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_92, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_92, sym_stdin_0))
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
  ATerm f_93 = NULL;
  ATerm h_93 = NULL,i_93 = NULL;
  f_93 = t;
  {
    ATerm j_93 = NULL;
    ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL;
    t = not_null(f_93);
    {
      j_93 = t;
      {
        t = SSL_explode_term(not_null(j_93));
        {
          m_93 = t;
          c_93 :
          if(match_cons(m_93, sym__2))
            {
              n_93 = ATgetArgument(m_93, 0);
              o_93 = ATgetArgument(m_93, 1);
              d_93 :
              if(match_string(n_93, ""))
                {
                  e_93 :
                  if(((ATgetType(o_93) == AT_LIST) && !(ATisEmpty(o_93))))
                    {
                      p_93 = ATgetFirst((ATermList) o_93);
                      q_93 = (ATerm) ATgetNext((ATermList) o_93);
                      {
                        if(((i_93 != NULL) && (i_93 != p_93)))
                          _fail(p_93);
                        else
                          i_93 = p_93;
                        if(((h_93 != NULL) && (h_93 != q_93)))
                          _fail(q_93);
                        else
                          h_93 = q_93;
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
    t = not_null(i_93);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  x_93 :
  if(match_cons(y_93, sym__2))
    {
      z_93 = ATgetArgument(y_93, 0);
      a_94 = ATgetArgument(y_93, 1);
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            {
              ATerm n_32 = t;
              int o_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm b_94 = NULL,c_94 = NULL;
                    b_94 = t;
                    w_93 :
                    if(match_cons(b_94, sym_Path_1))
                      {
                        c_94 = ATgetArgument(b_94, 0);
                        t = not_null(c_94);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(o_32);
                }
              else
                {
                  t = n_32;
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
  ATerm k_94 = NULL;
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_94 = NULL;
      ATerm j_94 = NULL;
      j_94 = t;
      if(((i_94 != NULL) && (i_94 != j_94)))
        _fail(j_94);
      else
        i_94 = j_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), term_g_35);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      {
        ATerm x_3 (ATerm t)
        {
          t = term_j_35;
          return(t);
        }
        t = debug_1(t, x_3);
        _fail(t);
      }
    }
  {
    ATerm k_35;
    k_35 = t;
    {
      ATerm l_94 = NULL;
      t = read_from_stream_0(t);
      {
        l_94 = t;
        if(((k_94 != NULL) && (k_94 != l_94)))
          _fail(l_94);
        else
          k_94 = l_94;
      }
    }
    t = k_35;
    {
      t = fclose_0(t);
      t = not_null(k_94);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_118 (ATerm), ATerm h_118 (ATerm))
{
  ATerm q_94 = NULL,s_94 = NULL;
  ATerm l_35;
  l_35 = t;
  {
    ATerm r_94 = NULL;
    t = g_118(t);
    {
      r_94 = t;
      if(((q_94 != NULL) && (q_94 != r_94)))
        _fail(r_94);
      else
        q_94 = r_94;
    }
  }
  t = l_35;
  {
    ATerm t_94 = NULL;
    t = h_118(t);
    {
      t_94 = t;
      if(((s_94 != NULL) && (s_94 != t_94)))
        _fail(t_94);
      else
        s_94 = t_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_94), not_null(s_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_94 = NULL;
  ATerm r_35;
  r_35 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm a_95 = NULL,b_95 = NULL;
          a_95 = t;
          x_94 :
          if(match_cons(a_95, sym_Input_1))
            {
              b_95 = ATgetArgument(a_95, 0);
              if(((z_94 != NULL) && (z_94 != b_95)))
                _fail(b_95);
              else
                z_94 = b_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm c_95 = NULL;
          t = term_x_35;
          {
            c_95 = t;
            if(((z_94 != NULL) && (z_94 != c_95)))
              _fail(c_95);
            else
              z_94 = c_95;
          }
        }
      }
  }
  t = r_35;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(z_94);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm h_95 = NULL;
    h_95 = t;
    f_95 :
    if(!(match_string(h_95, "-k")))
      {
        if(!(match_string(h_95, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm a_36;
    a_36 = t;
    {
      ATerm i_95 = NULL;
      ATerm j_95 = NULL;
      t = string_to_int_0(t);
      {
        j_95 = t;
        if(((i_95 != NULL) && (i_95 != j_95)))
          _fail(j_95);
        else
          i_95 = j_95;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, not_null(i_95));
        t = set_config_0(t);
      }
    }
    t = a_36;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_e_36;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  t = SSL_string_to_int(not_null(m_95));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm u_95 = NULL;
        u_95 = t;
        p_95 :
        if(!(match_string(u_95, "-S")))
          {
            if(!(match_string(u_95, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_h_36;
        t = set_config_0(t);
        t = term_i_36;
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_n_36;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        ATerm o_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm v_95 = NULL;
              v_95 = t;
              q_95 :
              if(!(match_string(v_95, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm y_95 = NULL;
              ATerm u_36;
              u_36 = t;
              {
                ATerm w_95 = NULL;
                ATerm x_95 = NULL;
                t = string_to_int_0(t);
                {
                  x_95 = t;
                  if(((w_95 != NULL) && (w_95 != x_95)))
                    _fail(x_95);
                  else
                    w_95 = x_95;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(w_95));
                  t = set_config_0(t);
                }
              }
              t = u_36;
              {
                ATerm z_95 = NULL;
                z_95 = t;
                if(((y_95 != NULL) && (y_95 != z_95)))
                  _fail(z_95);
                else
                  y_95 = z_95;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_95));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_v_36;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            ;
            LocalPopChoice(t_36);
          }
        else
          {
            t = o_36;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm a_96 = NULL;
                a_96 = t;
                t_95 :
                if(!(match_string(a_96, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_x_36;
                t = set_config_0(t);
                t = term_y_36;
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = term_a_37;
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
  ATerm d_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = d_37;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm g_96 = NULL;
    g_96 = t;
    d_96 :
    if(!(match_string(g_96, "-o")))
      {
        if(!(match_string(g_96, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm j_96 = NULL;
    ATerm g_37;
    g_37 = t;
    {
      ATerm h_96 = NULL;
      ATerm i_96 = NULL;
      i_96 = t;
      if(((h_96 != NULL) && (h_96 != i_96)))
        _fail(i_96);
      else
        h_96 = i_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_37, not_null(h_96));
        t = set_config_0(t);
      }
    }
    t = g_37;
    {
      ATerm k_96 = NULL;
      k_96 = t;
      if(((j_96 != NULL) && (j_96 != k_96)))
        _fail(k_96);
      else
        j_96 = k_96;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_96));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_k_37;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm q_96 = NULL;
          q_96 = t;
          n_96 :
          if(!(match_string(q_96, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_t_37;
          t = set_config_0(t);
          t = term_u_37;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_v_37;
          return(t);
        }
        t = Option_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
  w_96 = t;
  u_96 :
  if(match_string(w_96, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(w_96) == AT_LIST) && !(ATisEmpty(w_96))))
        {
          x_96 = ATgetFirst((ATermList) w_96);
          y_96 = (ATerm) ATgetNext((ATermList) w_96);
          v_96 :
          if(((ATgetType(y_96) == AT_LIST) && !(ATisEmpty(y_96))))
            {
              z_96 = ATgetFirst((ATermList) y_96);
              a_97 = (ATerm) ATgetNext((ATermList) y_96);
              {
                ATerm e_97 = NULL;
                ATerm w_37;
                w_37 = t;
                {
                  t = not_null(x_96);
                  t = k_0(t);
                }
                t = w_37;
                {
                  ATerm f_97 = NULL;
                  t = not_null(z_96);
                  {
                    t = m_0(t);
                    {
                      f_97 = t;
                      if(((e_97 != NULL) && (e_97 != f_97)))
                        _fail(f_97);
                      else
                        e_97 = f_97;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_97)), not_null(e_97));
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
    ATerm m_97 = NULL;
    m_97 = t;
    j_97 :
    if(!(match_string(m_97, "-i")))
      {
        if(!(match_string(m_97, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm p_97 = NULL;
    ATerm x_37;
    x_37 = t;
    {
      ATerm n_97 = NULL;
      ATerm o_97 = NULL;
      o_97 = t;
      if(((n_97 != NULL) && (n_97 != o_97)))
        _fail(o_97);
      else
        n_97 = o_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_37, not_null(n_97));
        t = set_config_0(t);
      }
    }
    t = x_37;
    {
      ATerm q_97 = NULL;
      q_97 = t;
      if(((p_97 != NULL) && (p_97 != q_97)))
        _fail(q_97);
      else
        p_97 = q_97;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_97));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_z_37;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm u_97 = NULL;
  t = report_run_time_0(t);
  {
    ATerm v_97 = NULL;
    t = term_x_25;
    {
      t = whoami_0(t);
      {
        v_97 = t;
        if(((u_97 != NULL) && (u_97 != v_97)))
          _fail(v_97);
        else
          u_97 = v_97;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATempty, term_e_38), not_null(u_97)));
      {
        t = printnl_0(t);
        {
          t = term_j_16;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_38;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_97 = NULL;
  y_97 = t;
  t = SSL_TicksToSeconds(not_null(y_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
  d_98 = t;
  c_98 :
  if(match_cons(d_98, sym__2))
    {
      e_98 = ATgetArgument(d_98, 0);
      f_98 = ATgetArgument(d_98, 1);
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_98), not_null(f_98));
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = SSL_addr(not_null(e_98), not_null(f_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_116 (ATerm), ATerm s_116 (ATerm))
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_116(t);
      ;
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
      {
        ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
        m_98 = t;
        l_98 :
        if(((ATgetType(m_98) == AT_LIST) && !(ATisEmpty(m_98))))
          {
            n_98 = ATgetFirst((ATermList) m_98);
            o_98 = (ATerm) ATgetNext((ATermList) m_98);
            {
              ATerm r_98 = NULL;
              ATerm s_98 = NULL;
              t = not_null(o_98);
              {
                t = foldr_2(t, r_116, s_116);
                {
                  s_98 = t;
                  if(((r_98 != NULL) && (r_98 != s_98)))
                    _fail(s_98);
                  else
                    r_98 = s_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_98), not_null(r_98));
                t = s_116(t);
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
ATerm crush_2 (ATerm t, ATerm k_120 (ATerm), ATerm l_120 (ATerm))
{
  ATerm z_98 = NULL;
  ATerm b_99 = NULL;
  z_98 = t;
  {
    ATerm c_99 = NULL;
    ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
    t = not_null(z_98);
    {
      c_99 = t;
      {
        t = SSL_explode_term(not_null(c_99));
        {
          e_99 = t;
          y_98 :
          if(match_cons(e_99, sym__2))
            {
              f_99 = ATgetArgument(e_99, 0);
              g_99 = ATgetArgument(e_99, 1);
              if(((b_99 != NULL) && (b_99 != g_99)))
                _fail(g_99);
              else
                b_99 = g_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_99);
      t = foldr_2(t, k_120, l_120);
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
      t = term_d_16;
      return(t);
    }
    t = crush_2(t, v_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL,o_99 = NULL;
  m_99 = t;
  l_99 :
  if(match_cons(m_99, sym__2))
    {
      n_99 = ATgetArgument(m_99, 0);
      o_99 = ATgetArgument(m_99, 1);
      {
        ATerm l_38;
        l_38 = t;
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_99), not_null(o_99));
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = m_38;
              t = SSL_gtr(not_null(n_99), not_null(o_99));
            }
        }
        t = l_38;
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
  ATerm u_99 = NULL;
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
      v_99 = t;
      t_99 :
      if(match_cons(v_99, sym__2))
        {
          w_99 = ATgetArgument(v_99, 0);
          x_99 = ATgetArgument(v_99, 1);
          {
            if(((u_99 != NULL) && (u_99 != w_99)))
              _fail(w_99);
            else
              u_99 = w_99;
            if(((u_99 != NULL) && (u_99 != x_99)))
              _fail(x_99);
            else
              u_99 = x_99;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_38);
    }
  else
    {
      t = o_38;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_123 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm q_38;
    q_38 = t;
    {
      ATerm a_100 = NULL;
      ATerm b_100 = NULL;
      t = term_p_31;
      {
        t = get_config_0(t);
        {
          b_100 = t;
          if(((a_100 != NULL) && (a_100 != b_100)))
            _fail(b_100);
          else
            a_100 = b_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), term_j_16);
        t = geq_0(t);
      }
    }
    t = q_38;
    t = w_123(t);
    return(t);
  }
  t = try_1(t, w_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm f_100 = NULL,h_100 = NULL;
    ATerm r_38;
    r_38 = t;
    {
      ATerm g_100 = NULL;
      t = run_time_0(t);
      {
        g_100 = t;
        if(((f_100 != NULL) && (f_100 != g_100)))
          _fail(g_100);
        else
          f_100 = g_100;
      }
    }
    t = r_38;
    {
      ATerm i_100 = NULL;
      t = term_x_25;
      {
        t = whoami_0(t);
        {
          i_100 = t;
          if(((h_100 != NULL) && (h_100 != i_100)))
            _fail(i_100);
          else
            h_100 = i_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_38), not_null(f_100)), term_s_38), not_null(h_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_d_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_100 = NULL;
  p_100 = t;
  o_100 :
  if(match_cons(p_100, sym_Version_0))
    {
      ATerm r_100 = NULL,t_100 = NULL;
      ATerm u_38;
      u_38 = t;
      {
        ATerm s_100 = NULL;
        t = SSLgetAnnotations(not_null(p_100));
        {
          s_100 = t;
          if(((r_100 != NULL) && (r_100 != s_100)))
            _fail(s_100);
          else
            r_100 = s_100;
        }
      }
      t = u_38;
      {
        ATerm u_100 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_100));
        {
          u_100 = t;
          if(((t_100 != NULL) && (t_100 != u_100)))
            _fail(u_100);
          else
            t_100 = u_100;
        }
        t = not_null(t_100);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_125 (ATerm))
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_38;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm y_4 (ATerm t)
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(z_38);
            }
          else
            {
              t = y_38;
              {
                ATerm a_39 = t;
                int b_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(b_39);
                  }
                else
                  {
                    t = a_39;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, y_4);
      }
    }
  t = r_125(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_100 = NULL;
  z_100 = t;
  t = SSL_table_create(not_null(z_100));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_101 = NULL;
  d_101 = t;
  {
    ATerm c_39;
    c_39 = t;
    {
      t = term_d_39;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_39, term_e_39, not_null(d_101));
          t = table_put_0(t);
        }
      }
    }
    t = c_39;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_101 = NULL;
  h_101 = t;
  t = SSL_table_destroy(not_null(h_101));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_101 = NULL;
  l_101 = t;
  t = SSL_exit(not_null(l_101));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_128 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_110 (ATerm))
{
  ATerm o_101 (ATerm t)
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = Cons_2(t, s_110, o_101);
      }
    return(t);
  }
  t = o_101(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
  x_101 = t;
  u_101 :
  if(((ATgetType(x_101) == AT_LIST) && !(ATisEmpty(x_101))))
    {
      v_101 = ATgetFirst((ATermList) x_101);
      w_101 = (ATerm) ATgetNext((ATermList) x_101);
      {
        ATerm a_102 = NULL;
        t = not_null(w_101);
        {
          ATerm h_39;
          h_39 = t;
          {
            ATerm b_102 = NULL,d_102 = NULL,f_102 = NULL;
            ATerm i_39;
            i_39 = t;
            {
              ATerm c_102 = NULL;
              t = i_0(t);
              {
                c_102 = t;
                if(((b_102 != NULL) && (b_102 != c_102)))
                  _fail(c_102);
                else
                  b_102 = c_102;
              }
            }
            t = i_39;
            {
              ATerm e_102 = NULL;
              t = not_null(v_101);
              {
                t = g_0(t);
                {
                  e_102 = t;
                  if(((d_102 != NULL) && (d_102 != e_102)))
                    _fail(e_102);
                  else
                    d_102 = e_102;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_102)), not_null(d_102));
                {
                  f_102 = t;
                  if(((a_102 != NULL) && (a_102 != f_102)))
                    _fail(f_102);
                  else
                    a_102 = f_102;
                }
              }
            }
          }
          t = h_39;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(a_102);
              return(t);
            }
            t = reverse_acc_2(t, g_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_101) == AT_LIST) && ATisEmpty(x_101)))
        {
          {
            t = term_x_25;
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
ATerm short_description_1 (ATerm t, ATerm f_128 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm q_102 = NULL,r_102 = NULL;
  q_102 = t;
  p_102 :
  if(match_cons(q_102, sym_Program_1))
    {
      r_102 = ATgetArgument(q_102, 0);
      {
        ATerm u_102 = NULL,w_102 = NULL;
        ATerm v_102 = NULL;
        t = SSLgetAnnotations(not_null(q_102));
        {
          v_102 = t;
          if(((u_102 != NULL) && (u_102 != v_102)))
            _fail(v_102);
          else
            u_102 = v_102;
        }
        {
          t = not_null(r_102);
          {
            ATerm y_102 = NULL;
            t = c_91(t);
            {
              w_102 = t;
              {
                ATerm z_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_102)), not_null(u_102));
                {
                  z_102 = t;
                  if(((y_102 != NULL) && (y_102 != z_102)))
                    _fail(z_102);
                  else
                    y_102 = z_102;
                }
                t = not_null(y_102);
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
  ATerm l_103 = NULL;
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_103 = NULL;
      t = term_f_38;
      {
        t = get_config_0(t);
        {
          m_103 = t;
          if(((l_103 != NULL) && (l_103 != m_103)))
            _fail(m_103);
          else
            l_103 = m_103;
        }
      }
      ;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm n_103 = NULL;
            n_103 = t;
            if(((l_103 != NULL) && (l_103 != n_103)))
              _fail(n_103);
            else
              l_103 = n_103;
            return(t);
          }
          t = Program_1(t, c_5);
          return(t);
        }
        t = option_defined_1(t, b_5);
      }
    }
  {
    ATerm d_5 (ATerm t)
    {
      ATerm e_5 (ATerm t)
      {
        t = not_null(l_103);
        return(t);
      }
      t = short_description_1(t, e_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, d_5);
    {
      t = term_l_39;
      {
        t = echo_0(t);
        {
          t = term_o_39;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm o_103 = NULL;
                  ATerm p_103 = NULL;
                  p_103 = t;
                  if(((o_103 != NULL) && (o_103 != p_103)))
                    _fail(p_103);
                  else
                    o_103 = p_103;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_103)), term_p_39);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm q_103 = NULL;
                    ATerm r_103 = NULL;
                    ATerm h_5 (ATerm t)
                    {
                      t = not_null(l_103);
                      return(t);
                    }
                    t = long_description_1(t, h_5);
                    {
                      r_103 = t;
                      if(((q_103 != NULL) && (q_103 != r_103)))
                        _fail(r_103);
                      else
                        q_103 = r_103;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_103)), term_q_39);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_5);
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
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_91 (ATerm))
{
  ATerm f_104 = NULL,g_104 = NULL;
  f_104 = t;
  c_104 :
  if(match_cons(f_104, sym_Undefined_1))
    {
      g_104 = ATgetArgument(f_104, 0);
      {
        ATerm j_104 = NULL,l_104 = NULL;
        ATerm k_104 = NULL;
        t = SSLgetAnnotations(not_null(f_104));
        {
          k_104 = t;
          if(((j_104 != NULL) && (j_104 != k_104)))
            _fail(k_104);
          else
            j_104 = k_104;
        }
        {
          t = not_null(g_104);
          {
            ATerm n_104 = NULL;
            t = d_91(t);
            {
              l_104 = t;
              {
                ATerm o_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_104)), not_null(j_104));
                {
                  o_104 = t;
                  if(((n_104 != NULL) && (n_104 != o_104)))
                    _fail(o_104);
                  else
                    n_104 = o_104;
                }
                t = not_null(n_104);
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
ATerm fetch_1 (ATerm t, ATerm b_111 (ATerm))
{
  ATerm t_104 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_111, _id);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = Cons_2(t, _id, t_104);
      }
    return(t);
  }
  t = t_104(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_127 (ATerm))
{
  t = fetch_1(t, f_127);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  u_104 :
  if(((ATgetType(v_104) == AT_LIST) && ATisEmpty(v_104)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_104) == AT_LIST) && !(ATisEmpty(v_104))))
        {
          w_104 = ATgetFirst((ATermList) v_104);
          x_104 = (ATerm) ATgetNext((ATermList) v_104);
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
  ATerm v_39;
  v_39 = t;
  {
    ATerm a_105 = NULL;
    ATerm f_105 = NULL;
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        {
          ATerm d_105 = NULL;
          ATerm e_105 = NULL;
          e_105 = t;
          if(((d_105 != NULL) && (d_105 != e_105)))
            _fail(e_105);
          else
            d_105 = e_105;
          t = (ATerm) ATinsert(ATempty, not_null(d_105));
        }
      }
    {
      f_105 = t;
      if(((a_105 != NULL) && (a_105 != f_105)))
        _fail(f_105);
      else
        a_105 = f_105;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_31, not_null(a_105));
      t = printnl_0(t);
    }
  }
  t = v_39;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_38;
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
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_105 = NULL;
  m_105 = t;
  l_105 :
  if(match_cons(m_105, sym_Help_0))
    {
      ATerm o_105 = NULL,q_105 = NULL;
      ATerm a_40;
      a_40 = t;
      {
        ATerm p_105 = NULL;
        t = SSLgetAnnotations(not_null(m_105));
        {
          p_105 = t;
          if(((o_105 != NULL) && (o_105 != p_105)))
            _fail(p_105);
          else
            o_105 = p_105;
        }
      }
      t = a_40;
      {
        ATerm r_105 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_105));
        {
          r_105 = t;
          if(((q_105 != NULL) && (q_105 != r_105)))
            _fail(r_105);
          else
            q_105 = r_105;
        }
        t = not_null(q_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_103 (ATerm))
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_103(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm x_105 = NULL;
        x_105 = t;
        v_105 :
        if(!(match_string(x_105, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_g_40;
        t = set_config_0(t);
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_h_40;
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm y_105 = NULL;
          y_105 = t;
          w_105 :
          if(!(match_string(y_105, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_g_40;
          {
            t = set_config_0(t);
            {
              t = term_j_40;
              t = set_config_0(t);
            }
          }
          t = term_k_40;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_l_40;
          return(t);
        }
        t = Option_3(t, o_5, p_5, q_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL;
  b_106 = t;
  a_106 :
  if(match_cons(b_106, sym__2))
    {
      c_106 = ATgetArgument(b_106, 0);
      d_106 = ATgetArgument(b_106, 1);
      t = SSL_table_get(not_null(c_106), not_null(d_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
  m_106 = t;
  l_106 :
  if(match_cons(m_106, sym__3))
    {
      n_106 = ATgetArgument(m_106, 0);
      o_106 = ATgetArgument(m_106, 1);
      p_106 = ATgetArgument(m_106, 2);
      {
        ATerm m_40;
        m_40 = t;
        {
          ATerm t_106 = NULL;
          ATerm u_106 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_106), not_null(o_106));
          {
            ATerm n_40 = t;
            int o_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_40);
              }
            else
              {
                t = n_40;
                t = (ATerm) ATempty;
              }
            {
              u_106 = t;
              if(((t_106 != NULL) && (t_106 != u_106)))
                _fail(u_106);
              else
                t_106 = u_106;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_106), not_null(o_106), (ATerm) ATinsert(CheckATermList(not_null(t_106)), not_null(p_106)));
            t = table_put_0(t);
          }
        }
        t = m_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_128 (ATerm))
{
  ATerm y_106 = NULL;
  ATerm z_106 = NULL;
  t = term_x_25;
  {
    t = k_128(t);
    {
      z_106 = t;
      if(((y_106 != NULL) && (y_106 != z_106)))
        _fail(z_106);
      else
        y_106 = z_106;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_n_39, not_null(y_106));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
  f_107 = t;
  e_107 :
  if(match_string(f_107, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_107) == AT_LIST) && !(ATisEmpty(f_107))))
        {
          g_107 = ATgetFirst((ATermList) f_107);
          h_107 = (ATerm) ATgetNext((ATermList) f_107);
          {
            ATerm k_107 = NULL;
            ATerm p_40;
            p_40 = t;
            {
              t = not_null(g_107);
              t = a_0(t);
            }
            t = p_40;
            {
              ATerm l_107 = NULL;
              t = term_x_25;
              {
                t = b_0(t);
                {
                  l_107 = t;
                  if(((k_107 != NULL) && (k_107 != l_107)))
                    _fail(l_107);
                  else
                    k_107 = l_107;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_107)), not_null(k_107));
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
  ATerm r_5 (ATerm t)
  {
    ATerm q_107 = NULL;
    q_107 = t;
    p_107 :
    if(!(match_string(q_107, "--help")))
      {
        if(!(match_string(q_107, "-h")))
          {
            if(!(match_string(q_107, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_q_40;
    {
      t = set_config_0(t);
      t = term_r_40;
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_s_40;
    return(t);
  }
  t = Option_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL;
  t_107 = t;
  s_107 :
  if(((ATgetType(t_107) == AT_LIST) && !(ATisEmpty(t_107))))
    {
      u_107 = ATgetFirst((ATermList) t_107);
      v_107 = (ATerm) ATgetNext((ATermList) t_107);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_107)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_107)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  f_108 = t;
  e_108 :
  if(((ATgetType(f_108) == AT_LIST) && !(ATisEmpty(f_108))))
    {
      g_108 = ATgetFirst((ATermList) f_108);
      h_108 = (ATerm) ATgetNext((ATermList) f_108);
      {
        ATerm l_108 = NULL,n_108 = NULL;
        ATerm m_108 = NULL;
        t = SSLgetAnnotations(not_null(f_108));
        {
          m_108 = t;
          if(((l_108 != NULL) && (l_108 != m_108)))
            _fail(m_108);
          else
            l_108 = m_108;
        }
        {
          t = not_null(g_108);
          {
            ATerm p_108 = NULL;
            t = g_82(t);
            {
              n_108 = t;
              {
                t = not_null(h_108);
                {
                  ATerm r_108 = NULL;
                  t = h_82(t);
                  {
                    p_108 = t;
                    {
                      ATerm s_108 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_108)), not_null(n_108)), not_null(l_108));
                      {
                        s_108 = t;
                        if(((r_108 != NULL) && (r_108 != s_108)))
                          _fail(s_108);
                        else
                          r_108 = s_108;
                      }
                      t = not_null(r_108);
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
  ATerm c_109 = NULL;
  c_109 = t;
  b_109 :
  if(((ATgetType(c_109) == AT_LIST) && ATisEmpty(c_109)))
    {
      {
        ATerm e_109 = NULL,g_109 = NULL;
        ATerm t_40;
        t_40 = t;
        {
          ATerm f_109 = NULL;
          t = SSLgetAnnotations(not_null(c_109));
          {
            f_109 = t;
            if(((e_109 != NULL) && (e_109 != f_109)))
              _fail(f_109);
            else
              e_109 = f_109;
          }
        }
        t = t_40;
        {
          ATerm h_109 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_109));
          {
            h_109 = t;
            if(((g_109 != NULL) && (g_109 != h_109)))
              _fail(h_109);
            else
              g_109 = h_109;
          }
          t = not_null(g_109);
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
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  m_109 :
  if(match_cons(n_109, sym__2))
    {
      o_109 = ATgetArgument(n_109, 0);
      p_109 = ATgetArgument(n_109, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_6, not_null(o_109), not_null(p_109));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_128 (ATerm))
{
  ATerm u_40;
  u_40 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_v_40;
      t = i_128(t);
      return(t);
    }
    t = try_1(t, u_5);
  }
  t = u_40;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_109 = NULL;
      ATerm w_40;
      w_40 = t;
      {
        ATerm v_109 = NULL;
        ATerm w_109 = NULL;
        w_109 = t;
        if(((v_109 != NULL) && (v_109 != w_109)))
          _fail(w_109);
        else
          v_109 = w_109;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_38, not_null(v_109));
          t = set_config_0(t);
        }
      }
      t = w_40;
      {
        ATerm y_109 = NULL;
        y_109 = t;
        if(((x_109 != NULL) && (x_109 != y_109)))
          _fail(y_109);
        else
          x_109 = y_109;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_109));
      }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      ATerm x_40 = t;
      int y_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              {
                t = i_128(t);
                t = Cons_2(t, _id, x_5);
              }
            }
          ;
          LocalPopChoice(y_40);
        }
      else
        {
          t = x_40;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_5, x_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
  ATerm b_41;
  b_41 = t;
  {
    ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL;
    h_110 = t;
    d_110 :
    if(match_cons(h_110, sym__3))
      {
        i_110 = ATgetArgument(h_110, 0);
        j_110 = ATgetArgument(h_110, 1);
        k_110 = ATgetArgument(h_110, 2);
        {
          if(((e_110 != NULL) && (e_110 != i_110)))
            _fail(i_110);
          else
            e_110 = i_110;
          {
            if(((f_110 != NULL) && (f_110 != j_110)))
              _fail(j_110);
            else
              f_110 = j_110;
            {
              if(((g_110 != NULL) && (g_110 != k_110)))
                _fail(k_110);
              else
                g_110 = k_110;
              t = SSL_table_put(not_null(e_110), not_null(f_110), not_null(g_110));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_41;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_128 (ATerm))
{
  ATerm n_110 = NULL;
  ATerm c_41;
  c_41 = t;
  {
    t = term_d_41;
    t = table_put_0(t);
  }
  t = c_41;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm e_41 = t;
      int f_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_128(t);
          ;
          LocalPopChoice(f_41);
        }
      else
        {
          t = e_41;
          {
            ATerm g_41 = t;
            int h_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(h_41);
              }
            else
              {
                t = g_41;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, y_5);
    {
      ATerm z_5 (ATerm t)
      {
        ATerm i_41 = t;
        int j_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41;
            k_41 = t;
            {
              ATerm l_41 = t;
              int m_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_38;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_41);
                }
              else
                {
                  t = l_41;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_41;
            {
              t = system_usage_0(t);
              {
                t = term_d_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_41);
          }
        else
          {
            t = i_41;
            {
              ATerm n_41 = t;
              int o_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_41;
                  p_41 = t;
                  {
                    t = term_f_40;
                    t = get_config_0(t);
                  }
                  t = p_41;
                  {
                    t = system_about_0(t);
                    {
                      t = term_d_16;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(o_41);
                }
              else
                {
                  t = n_41;
                  {
                    ATerm a_6 (ATerm t)
                    {
                      ATerm f_6 (ATerm t)
                      {
                        ATerm o_110 = NULL;
                        o_110 = t;
                        if(((n_110 != NULL) && (n_110 != o_110)))
                          _fail(o_110);
                        else
                          n_110 = o_110;
                        return(t);
                      }
                      t = Undefined_1(t, f_6);
                      return(t);
                    }
                    t = option_defined_1(t, a_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_110)), term_q_41));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_j_16;
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
      t = try_1(t, z_5);
      {
        ATerm r_41;
        r_41 = t;
        {
          t = term_m_39;
          t = table_destroy_0(t);
        }
        t = r_41;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm w_125 (ATerm))
{
  t = parse_options_1(t, t_125);
  {
    t = store_options_0(t);
    {
      t = v_125(t);
      {
        ATerm s_41 = t;
        int t_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_125);
            ;
            LocalPopChoice(t_41);
          }
        else
          {
            t = s_41;
            {
              ATerm u_41 = t;
              int v_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_125(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(v_41);
                }
              else
                {
                  t = u_41;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_125(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_125);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, g_6, k_125, l_125, h_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      ATerm y_41;
      y_41 = t;
      {
        ATerm u_110 = NULL;
        ATerm v_110 = NULL;
        t = term_f_38;
        {
          t = get_config_0(t);
          {
            v_110 = t;
            if(((u_110 != NULL) && (u_110 != v_110)))
              _fail(v_110);
            else
              u_110 = v_110;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATempty, not_null(u_110)));
          t = printnl_0(t);
        }
      }
      t = y_41;
      return(t);
    }
    t = if_verbose2_1(t, m_6);
    return(t);
  }
  t = iowrap_4(t, c_125, d_125, e_125, k_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_125 (ATerm), ATerm b_125 (ATerm))
{
  t = iowrap_3(t, a_125, b_125, default_usage_0);
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
