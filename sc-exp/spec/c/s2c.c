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
ATerm term_j_40;
ATerm term_w_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_n_37;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_t_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_x_32;
ATerm term_q_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_q_31;
ATerm term_c_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_z_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
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
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
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
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_b_15;
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
ATerm term_j_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_n_10;
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
ATerm term_b_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_r_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_i_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Id_1, term_d_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_8, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Id_1, term_n_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_8, term_t_8);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Id_1, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Id_1, term_b_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Id_1, term_g_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, term_b_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Id_1, term_j_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Id_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_17, (ATerm) ATempty);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_17, term_t_8);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Id_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Id_1, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_18, (ATerm) ATempty);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_18, term_t_8);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_18, term_t_8);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_19, term_t_8);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Id_1, term_n_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_d_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_1, term_h_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_g_17);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_n_20, term_y_14);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Id_1, term_p_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_20, (ATerm) ATempty);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_v_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, term_g_17);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_21, term_y_14);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Id_1, term_s_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_w_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Id_1, term_c_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_18);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Return_1, term_g_17);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Id_1, term_p_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_17, term_t_8);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_8, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Id_1, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Id_1, term_i_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_8, (ATerm) ATempty);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_t_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_27, (ATerm) ATempty);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_8, term_t_8);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_27, (ATerm) ATempty);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Some_1, term_b_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_8, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Op_2, term_j_29, (ATerm) ATempty);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_h_16);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_16);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_y_24);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_y_24);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_f_38, term_g_38);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_y_24);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_y_24);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_y_24);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__3, term_f_38, term_g_38, (ATerm) ATempty);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm f_126 (ATerm), ATerm g_126 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_105 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm y_102 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm b_83 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm v_0 (ATerm), ATerm z_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm c_116 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm f_92 (ATerm));
ATerm FunCall_2 (ATerm, ATerm j_95 (ATerm), ATerm k_95 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm x_103 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_103 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm y_118 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm f_130 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm u_118 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm a_130 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_102 (ATerm), ATerm s_102 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_129 (ATerm));
ATerm scope_2 (ATerm, ATerm b_130 (ATerm), ATerm c_130 (ATerm));
ATerm assert_1 (ATerm, ATerm d_130 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_110 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_122 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm o_121 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_123 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_121 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_117 (ATerm), ATerm c_117 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_115 (ATerm), ATerm n_115 (ATerm));
ATerm crush_2 (ATerm, ATerm f_119 (ATerm), ATerm g_119 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_122 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_124 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_127 (ATerm));
ATerm map_1 (ATerm, ATerm n_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_127 (ATerm));
ATerm Program_1 (ATerm, ATerm x_89 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_89 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_109 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_126 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_102 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_127 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_127 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_127 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_123 (ATerm), ATerm w_123 (ATerm));
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
          ATerm k_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = k_6;
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
          t = (ATerm) ATmakeAppl(sym__3, term_n_6, not_null(k_5), not_null(b_6));
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
ATerm Option_2 (ATerm t, ATerm f_126 (ATerm), ATerm g_126 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_r_6;
    return(t);
  }
  t = Option_3(t, f_126, g_126, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
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
      ATerm s_0 (ATerm t)
      {
        t = term_z_6;
        {
          ATerm t_0 (ATerm t)
          {
            t = term_a_7;
            return(t);
          }
          t = debug_1(t, t_0);
          {
            ATerm g_7;
            g_7 = t;
            {
              t = term_j_7;
              {
                ATerm u_0 (ATerm t)
                {
                  t = term_k_7;
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
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm l_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
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
            ATerm x_0 (ATerm t)
            {
              ATerm q_6 = NULL;
              q_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), term_r_7);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_s_7;
                    return(t);
                  }
                  t = assert_1(t, a_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(q_6));
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
            LocalPopChoice(n_7);
          }
        else
          {
            t = l_7;
            {
              ATerm b_1 (ATerm t)
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
              ATerm c_1 (ATerm t)
              {
                ATerm v_6 = NULL;
                ATerm z_7;
                z_7 = t;
                {
                  ATerm t_6 = NULL;
                  ATerm u_6 = NULL;
                  u_6 = t;
                  if(((t_6 != NULL) && (t_6 != u_6)))
                    _fail(u_6);
                  else
                    t_6 = u_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(t_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = z_7;
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
              ATerm d_1 (ATerm t)
              {
                t = term_b_8;
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
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_7)), term_c_8, not_null(f_7))));
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
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_7)));
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
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_7)), term_t_8)));
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm g_8 = NULL,i_8 = NULL,k_8 = NULL;
    ATerm w_8;
    w_8 = t;
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
    t = w_8;
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
ATerm oncetd_1 (ATerm t, ATerm a_105 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_105(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
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
    ATerm i_10;
    i_10 = t;
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
    t = i_10;
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
                                ATerm j_10 = t;
                                int k_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_10(t);
                                    ;
                                    LocalPopChoice(k_10);
                                  }
                                else
                                  {
                                    t = j_10;
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
                            ATerm l_10 = t;
                            int m_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = c_11(t);
                                ;
                                LocalPopChoice(m_10);
                              }
                            else
                              {
                                t = l_10;
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
ATerm repeat_1 (ATerm t, ATerm y_102 (ATerm))
{
  ATerm h_11 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = y_102(t);
      t = h_11(t);
      return(t);
    }
    t = try_1(t, e_1);
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
      ATerm f_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = rewrite_1(t, f_1);
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
ATerm BuildDefault_1 (ATerm t, ATerm b_83 (ATerm))
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
            t = b_83(t);
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
        ATerm o_10 = t;
        int r_10 = stack_ptr;
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
            LocalPopChoice(r_10);
          }
        else
          {
            t = o_10;
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
        ATerm s_10 = t;
        int t_10 = stack_ptr;
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
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
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
        ATerm u_10 = t;
        int e_11 = stack_ptr;
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
            LocalPopChoice(e_11);
          }
        else
          {
            t = u_10;
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
        ATerm f_11 = t;
        int g_11 = stack_ptr;
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
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
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
      t = Op_2(t, g_1, Nil_0);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
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
            LocalPopChoice(q_11);
          }
        else
          {
            t = k_11;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm v_11 = t;
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
                    t = v_11;
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
ATerm Op_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
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
            t = m_82(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = n_82(t);
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
          ATerm d_12 = t;
          int e_12 = stack_ptr;
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
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              {
                ATerm f_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
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
                          t = Int_1(t, _id);
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
                                t = Str_1(t, _id);
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
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(t_12);
                                    }
                                  else
                                    {
                                      t = s_12;
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
                    t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(b_21));
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
                            ATerm v_12;
                            v_12 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, not_null(y_20)));
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_a_13;
                                  return(t);
                                }
                                t = assert_1(t, m_1);
                              }
                            }
                            t = v_12;
                            {
                              ATerm f_21 = NULL;
                              ATerm e_13 = t;
                              int h_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(h_13);
                                }
                              else
                                {
                                  t = e_13;
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
                                      ATerm i_13;
                                      i_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_13, not_null(z_20)));
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_n_10;
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
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
        t = not_null(v_21);
        {
          ATerm o_1 (ATerm t)
          {
            t = term_a_13;
            return(t);
          }
          t = rewrite_1(t, o_1);
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
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm e_22 = NULL;
          ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
          t = not_null(v_21);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_a_13;
              return(t);
            }
            t = rewrite_1(t, p_1);
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
        ATerm o_22 = NULL,q_22 = NULL;
        ATerm o_13;
        o_13 = t;
        {
          ATerm p_22 = NULL;
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
        }
        t = o_13;
        {
          ATerm r_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm q_1 (ATerm t)
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, q_1);
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
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Var_1))
    {
      j_23 = ATgetArgument(i_23, 0);
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_23 = NULL,o_23 = NULL;
            ATerm n_23 = NULL;
            t = SSLgetAnnotations(not_null(i_23));
            {
              n_23 = t;
              if(((m_23 != NULL) && (m_23 != n_23)))
                _fail(n_23);
              else
                m_23 = n_23;
            }
            {
              t = not_null(j_23);
              {
                ATerm q_23 = NULL;
                t = q_2(t);
                {
                  o_23 = t;
                  {
                    ATerm r_23 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_23)), not_null(m_23));
                    {
                      r_23 = t;
                      if(((q_23 != NULL) && (q_23 != r_23)))
                        _fail(r_23);
                      else
                        q_23 = r_23;
                    }
                    t = not_null(q_23);
                  }
                }
              }
            }
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm b_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_23 = NULL,w_23 = NULL;
                  ATerm v_23 = NULL;
                  t = SSLgetAnnotations(not_null(i_23));
                  {
                    v_23 = t;
                    if(((u_23 != NULL) && (u_23 != v_23)))
                      _fail(v_23);
                    else
                      u_23 = v_23;
                  }
                  {
                    t = not_null(j_23);
                    {
                      ATerm y_23 = NULL;
                      t = q_2(t);
                      {
                        w_23 = t;
                        {
                          ATerm z_23 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_23)), not_null(u_23));
                          {
                            z_23 = t;
                            if(((y_23 != NULL) && (y_23 != z_23)))
                              _fail(z_23);
                            else
                              y_23 = z_23;
                          }
                          t = not_null(y_23);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm c_24 = NULL,e_24 = NULL;
                    ATerm d_24 = NULL;
                    t = SSLgetAnnotations(not_null(i_23));
                    {
                      d_24 = t;
                      if(((c_24 != NULL) && (c_24 != d_24)))
                        _fail(d_24);
                      else
                        c_24 = d_24;
                    }
                    {
                      t = not_null(j_23);
                      {
                        ATerm g_24 = NULL;
                        t = q_2(t);
                        {
                          e_24 = t;
                          {
                            ATerm h_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_24)), not_null(c_24));
                            {
                              h_24 = t;
                              if(((g_24 != NULL) && (g_24 != h_24)))
                                _fail(h_24);
                              else
                                g_24 = h_24;
                            }
                            t = not_null(g_24);
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
ATerm real_to_string_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_real_to_string(not_null(v_24));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      a_25 :
      if(((ATgetType(c_25) == AT_LIST) && ATisEmpty(c_25)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_25));
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
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  n_25 = t;
  l_25 :
  if(match_cons(n_25, sym__2))
    {
      o_25 = ATgetArgument(n_25, 0);
      r_25 = ATgetArgument(n_25, 1);
      m_25 :
      if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
        {
          p_25 = ATgetFirst((ATermList) o_25);
          q_25 = (ATerm) ATgetNext((ATermList) o_25);
          {
            ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
            ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(r_25));
            {
              t = v_0(t);
              {
                z_25 = t;
                k_25 :
                if(match_cons(z_25, sym__2))
                  {
                    a_26 = ATgetArgument(z_25, 0);
                    b_26 = ATgetArgument(z_25, 1);
                    {
                      ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
                      if(((x_25 != NULL) && (x_25 != a_26)))
                        _fail(a_26);
                      else
                        x_25 = a_26;
                      {
                        if(((v_25 != NULL) && (v_25 != b_26)))
                          _fail(b_26);
                        else
                          v_25 = b_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(v_25));
                          {
                            t = z_0(t);
                            {
                              c_26 = t;
                              j_25 :
                              if(match_cons(c_26, sym__2))
                                {
                                  d_26 = ATgetArgument(c_26, 0);
                                  e_26 = ATgetArgument(c_26, 1);
                                  {
                                    if(((y_25 != NULL) && (y_25 != d_26)))
                                      _fail(d_26);
                                    else
                                      y_25 = d_26;
                                    if(((w_25 != NULL) && (w_25 != e_26)))
                                      _fail(e_26);
                                    else
                                      w_25 = e_26;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_25)), not_null(x_25)), not_null(w_25));
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
ATerm thread_map_1 (ATerm t, ATerm c_116 (ATerm))
{
  ATerm i_26 (ATerm t)
  {
    ATerm f_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, c_116, i_26);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = f_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = i_26(t);
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym__2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        t = new_0(t);
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_26)), term_t_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(o_26))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(n_26), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_26)))));
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
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm b_27 = NULL,c_27 = NULL;
    t = not_null(y_26);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_m_14;
        return(t);
      }
      t = rewrite_1(t, r_1);
      {
        b_27 = t;
        w_26 :
        if(match_cons(b_27, sym_Defined_1))
          {
            c_27 = ATgetArgument(b_27, 0);
            x_26 :
            if(!(match_string(c_27, "l_0")))
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
    t = term_n_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  i_27 = t;
  g_27 :
  if(match_cons(i_27, sym__2))
    {
      j_27 = ATgetArgument(i_27, 0);
      l_27 = ATgetArgument(i_27, 1);
      h_27 :
      if(match_cons(j_27, sym_Var_1))
        {
          k_27 = ATgetArgument(j_27, 0);
          {
            ATerm o_27 = NULL;
            t = not_null(k_27);
            {
              t = Initialized_0(t);
              {
                o_27 = t;
                f_27 :
                if(!(match_string(o_27, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_27)), not_null(l_27));
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  e_28 = t;
  c_28 :
  if(match_cons(e_28, sym_Anno_2))
    {
      f_28 = ATgetArgument(e_28, 0);
      d_28 = ATgetArgument(e_28, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_28)), not_null(f_28))));
    }
  else
    {
      if(match_cons(e_28, sym_Op_2))
        {
          f_28 = ATgetArgument(e_28, 0);
          d_28 = ATgetArgument(e_28, 1);
          {
            ATerm k_28 = NULL;
            ATerm l_28 = NULL,n_28 = NULL;
            ATerm m_28 = NULL;
            t = not_null(d_28);
            {
              t = length_0(t);
              {
                m_28 = t;
                if(((l_28 != NULL) && (l_28 != m_28)))
                  _fail(m_28);
                else
                  l_28 = m_28;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(l_28));
              {
                t = ConstructorName_0(t);
                {
                  n_28 = t;
                  if(((k_28 != NULL) && (k_28 != n_28)))
                    _fail(n_28);
                  else
                    k_28 = n_28;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(CheckATermList(not_null(d_28)), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_28)))));
          }
        }
      else
        {
          if(match_cons(e_28, sym_BuildDefault_1))
            {
              f_28 = ATgetArgument(e_28, 0);
              t = not_null(f_28);
            }
          else
            {
              if(match_cons(e_28, sym_Var_1))
                {
                  f_28 = ATgetArgument(e_28, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_28))));
                }
              else
                {
                  if(match_cons(e_28, sym_Str_1))
                    {
                      f_28 = ATgetArgument(e_28, 0);
                      {
                        ATerm r_28 = NULL;
                        ATerm s_28 = NULL;
                        t = not_null(f_28);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              s_28 = t;
                              if(((r_28 != NULL) && (r_28 != s_28)))
                                _fail(s_28);
                              else
                                r_28 = s_28;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_y_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(r_28))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(e_28, sym_Real_1))
                        {
                          f_28 = ATgetArgument(e_28, 0);
                          {
                            ATerm u_28 = NULL;
                            ATerm v_28 = NULL;
                            t = not_null(f_28);
                            {
                              t = real_to_string_0(t);
                              {
                                v_28 = t;
                                if(((u_28 != NULL) && (u_28 != v_28)))
                                  _fail(v_28);
                                else
                                  u_28 = v_28;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(u_28)))));
                          }
                        }
                      else
                        {
                          if(match_cons(e_28, sym_Int_1))
                            {
                              f_28 = ATgetArgument(e_28, 0);
                              {
                                ATerm x_28 = NULL;
                                ATerm y_28 = NULL;
                                t = not_null(f_28);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    y_28 = t;
                                    if(((x_28 != NULL) && (x_28 != y_28)))
                                      _fail(y_28);
                                    else
                                      x_28 = y_28;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_28)))));
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
ATerm Id_1 (ATerm t, ATerm f_92 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Id_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(q_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm y_29 = NULL;
            t = f_92(t);
            {
              w_29 = t;
              {
                ATerm z_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(w_29)), not_null(u_29));
                {
                  z_29 = t;
                  if(((y_29 != NULL) && (y_29 != z_29)))
                    _fail(z_29);
                  else
                    y_29 = z_29;
                }
                t = not_null(y_29);
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
ATerm FunCall_2 (ATerm t, ATerm j_95 (ATerm), ATerm k_95 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_FunCall_2))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      {
        ATerm q_30 = NULL,s_30 = NULL;
        ATerm r_30 = NULL;
        t = SSLgetAnnotations(not_null(k_30));
        {
          r_30 = t;
          if(((q_30 != NULL) && (q_30 != r_30)))
            _fail(r_30);
          else
            q_30 = r_30;
        }
        {
          t = not_null(l_30);
          {
            ATerm u_30 = NULL;
            t = j_95(t);
            {
              s_30 = t;
              {
                t = not_null(m_30);
                {
                  ATerm w_30 = NULL;
                  t = k_95(t);
                  {
                    u_30 = t;
                    {
                      ATerm x_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(s_30), not_null(u_30)), not_null(q_30));
                      {
                        x_30 = t;
                        if(((w_30 != NULL) && (w_30 != x_30)))
                          _fail(x_30);
                        else
                          w_30 = x_30;
                      }
                      t = not_null(w_30);
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
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  r_31 :
  if(match_cons(b_32, sym_Op_2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      s_31 :
      if(match_string(c_32, "Cons"))
        {
          t_31 :
          if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
            {
              x_31 = ATgetFirst((ATermList) d_32);
              y_31 = (ATerm) ATgetNext((ATermList) d_32);
              u_31 :
              if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
                {
                  z_31 = ATgetFirst((ATermList) y_31);
                  a_32 = (ATerm) ATgetNext((ATermList) y_31);
                  v_31 :
                  if(((ATgetType(a_32) == AT_LIST) && ATisEmpty(a_32)))
                    {
                      {
                        ATerm g_32 = NULL;
                        ATerm t_32 = NULL;
                        t = not_null(z_31);
                        {
                          ATerm n_15 = t;
                          int o_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
                              h_32 = t;
                              i_31 :
                              if(match_cons(h_32, sym_TypeCast_2))
                                {
                                  i_32 = ATgetArgument(h_32, 0);
                                  p_32 = ATgetArgument(h_32, 1);
                                  j_31 :
                                  if(match_cons(i_32, sym_TypeName_2))
                                    {
                                      j_32 = ATgetArgument(i_32, 0);
                                      o_32 = ATgetArgument(i_32, 1);
                                      k_31 :
                                      if(match_cons(j_32, sym_TypeSpec_3))
                                        {
                                          k_32 = ATgetArgument(j_32, 0);
                                          l_32 = ATgetArgument(j_32, 1);
                                          n_32 = ATgetArgument(j_32, 2);
                                          l_31 :
                                          if(((ATgetType(k_32) == AT_LIST) && ATisEmpty(k_32)))
                                            {
                                              m_31 :
                                              if(match_cons(l_32, sym_TypeId_1))
                                                {
                                                  m_32 = ATgetArgument(l_32, 0);
                                                  n_31 :
                                                  if(match_string(m_32, "ATerm"))
                                                    {
                                                      o_31 :
                                                      if(((ATgetType(n_32) == AT_LIST) && ATisEmpty(n_32)))
                                                        {
                                                          p_31 :
                                                          if(match_cons(o_32, sym_None_0))
                                                            {
                                                              t = not_null(p_32);
                                                              {
                                                                ATerm s_15 = t;
                                                                int v_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_1 (ATerm t)
                                                                    {
                                                                      ATerm r_32 = NULL;
                                                                      r_32 = t;
                                                                      g_31 :
                                                                      if(!(match_string(r_32, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, s_1);
                                                                    ;
                                                                    LocalPopChoice(v_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_15;
                                                                    {
                                                                      ATerm t_1 (ATerm t)
                                                                      {
                                                                        ATerm v_1 (ATerm t)
                                                                        {
                                                                          ATerm s_32 = NULL;
                                                                          s_32 = t;
                                                                          h_31 :
                                                                          if(!(match_string(s_32, "ATinsert")))
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
                              LocalPopChoice(o_15);
                            }
                          else
                            {
                              t = n_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATempty, not_null(z_31)));
                            }
                          {
                            t_32 = t;
                            if(((g_32 != NULL) && (g_32 != t_32)))
                              _fail(t_32);
                            else
                              g_32 = t_32;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_31)), not_null(g_32))));
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
          if(match_string(c_32, "Nil"))
            {
              w_31 :
              if(((ATgetType(d_32) == AT_LIST) && ATisEmpty(d_32)))
                {
                  t = term_c_16;
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
ATerm bottomup_1 (ATerm t, ATerm x_103 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = bottomup_1(t, x_103);
    return(t);
  }
  t = _all(t, x_1);
  t = x_103(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
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
ATerm topdown_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = w_103(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = topdown_1(t, w_103);
      return(t);
    }
    t = _all(t, a_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  ATerm l_54 (ATerm t)
  {
    ATerm e_49 = NULL,u_49 = NULL;
    ATerm f_16;
    f_16 = t;
    {
      ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
      t = not_null(h_46);
      {
        ATerm g_16 = t;
        if((PushChoice() == 0))
          {
            ATerm f_49 = NULL;
            f_49 = t;
            c_35 :
            if(!(match_string(f_49, "Nil")))
              {
                if(!(match_string(f_49, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), term_h_16);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
              g_49 = t;
              h_35 :
              if(match_cons(g_49, sym__2))
                {
                  h_49 = ATgetArgument(g_49, 0);
                  i_49 = ATgetArgument(g_49, 1);
                  {
                    ATerm l_49 = NULL,p_49 = NULL;
                    ATerm i_16;
                    i_16 = t;
                    {
                      ATerm m_49 = NULL,o_49 = NULL;
                      ATerm n_49 = NULL;
                      t = not_null(i_49);
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
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_49), (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(m_49))), not_null(g_46))));
                        {
                          ATerm o_16 = t;
                          int p_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(p_16);
                            }
                          else
                            {
                              t = o_16;
                              t = MatchArg2_0(t);
                            }
                          {
                            o_49 = t;
                            if(((l_49 != NULL) && (l_49 != o_49)))
                              _fail(o_49);
                            else
                              l_49 = o_49;
                          }
                        }
                      }
                    }
                    t = i_16;
                    {
                      ATerm q_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_49), term_t_16);
                      {
                        t = add_0(t);
                        {
                          q_49 = t;
                          if(((p_49 != NULL) && (p_49 != q_49)))
                            _fail(q_49);
                          else
                            p_49 = q_49;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_49), not_null(p_49));
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
              r_49 = t;
              j_35 :
              if(match_cons(r_49, sym__2))
                {
                  s_49 = ATgetArgument(r_49, 0);
                  t_49 = ATgetArgument(r_49, 1);
                  if(((e_49 != NULL) && (e_49 != s_49)))
                    _fail(s_49);
                  else
                    e_49 = s_49;
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
    t = f_16;
    {
      ATerm v_49 = NULL,x_49 = NULL;
      ATerm w_49 = NULL;
      t = not_null(q_45);
      {
        t = length_0(t);
        {
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_46), not_null(v_49));
        {
          t = ConstructorName_0(t);
          {
            x_49 = t;
            if(((u_49 != NULL) && (u_49 != x_49)))
              _fail(x_49);
            else
              u_49 = x_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_49))), not_null(g_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
    }
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    ATerm a_50 = NULL;
    ATerm b_50 = NULL;
    t = not_null(h_46);
    {
      t = real_to_string_0(t);
      {
        b_50 = t;
        if(((a_50 != NULL) && (a_50 != b_50)))
          _fail(b_50);
        else
          a_50 = b_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, not_null(g_46))), term_k_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_17, not_null(g_46)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(a_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    ATerm e_50 = NULL;
    ATerm f_50 = NULL;
    t = not_null(h_46);
    {
      t = int_to_string_0(t);
      {
        f_50 = t;
        if(((e_50 != NULL) && (e_50 != f_50)))
          _fail(f_50);
        else
          e_50 = f_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, not_null(g_46))), term_s_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_18, not_null(g_46)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(e_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    ATerm i_50 = NULL;
    ATerm j_50 = NULL;
    t = not_null(h_46);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          j_50 = t;
          if(((i_50 != NULL) && (i_50 != j_50)))
            _fail(j_50);
          else
            i_50 = j_50;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_18, not_null(g_46)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), term_y_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(i_50)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), term_t_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), not_null(g_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, not_null(g_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), term_c_8, not_null(g_46))));
    return(t);
  }
  ATerm v_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(q_45), not_null(g_46))), (ATerm) ATmakeAppl(sym_Match_2, not_null(h_46), not_null(g_46))));
    return(t);
  }
  ATerm w_54 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  ATerm x_54 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(j_46), term_g_17);
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), term_y_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_45)), term_c_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_45)), term_c_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), term_y_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    ATerm k_51 = NULL,z_51 = NULL,b_52 = NULL;
    ATerm p_19;
    p_19 = t;
    {
      ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
      t = not_null(z_45);
      {
        ATerm q_19 = t;
        if((PushChoice() == 0))
          {
            ATerm l_51 = NULL;
            l_51 = t;
            p_35 :
            if(!(match_string(l_51, "Nil")))
              {
                if(!(match_string(l_51, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), term_h_16);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
              m_51 = t;
              t_35 :
              if(match_cons(m_51, sym__2))
                {
                  n_51 = ATgetArgument(m_51, 0);
                  p_51 = ATgetArgument(m_51, 1);
                  u_35 :
                  if(match_cons(n_51, sym_Var_1))
                    {
                      o_51 = ATgetArgument(n_51, 0);
                      {
                        ATerm s_51 = NULL,u_51 = NULL;
                        ATerm v_19;
                        v_19 = t;
                        {
                          ATerm t_51 = NULL;
                          t = not_null(p_51);
                          {
                            t = int_to_string_0(t);
                            {
                              t_51 = t;
                              if(((s_51 != NULL) && (s_51 != t_51)))
                                _fail(t_51);
                              else
                                s_51 = t_51;
                            }
                          }
                        }
                        t = v_19;
                        {
                          ATerm v_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_51), term_t_16);
                          {
                            t = add_0(t);
                            {
                              v_51 = t;
                              if(((u_51 != NULL) && (u_51 != v_51)))
                                _fail(v_51);
                              else
                                u_51 = v_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_51)), term_c_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))))), not_null(u_51));
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
              w_51 = t;
              w_35 :
              if(match_cons(w_51, sym__2))
                {
                  x_51 = ATgetArgument(w_51, 0);
                  y_51 = ATgetArgument(w_51, 1);
                  if(((k_51 != NULL) && (k_51 != x_51)))
                    _fail(x_51);
                  else
                    k_51 = x_51;
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
    t = p_19;
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm a_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(x_45));
        {
          t = ConstructorName_0(t);
          {
            a_52 = t;
            if(((z_51 != NULL) && (z_51 != a_52)))
              _fail(a_52);
            else
              z_51 = a_52;
          }
        }
      }
      t = w_19;
      {
        ATerm c_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_51), (ATerm) ATinsert(ATempty, not_null(b_46)));
        {
          t = conc_0(t);
          {
            c_52 = t;
            if(((b_52 != NULL) && (b_52 != c_52)))
              _fail(c_52);
            else
              b_52 = c_52;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_52)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
      }
    }
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    ATerm j_52 = NULL;
    ATerm k_52 = NULL;
    t = not_null(z_45);
    {
      t = real_to_string_0(t);
      {
        k_52 = t;
        if(((j_52 != NULL) && (j_52 != k_52)))
          _fail(k_52);
        else
          j_52 = k_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(j_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
    return(t);
  }
  ATerm d_55 (ATerm t)
  {
    ATerm r_52 = NULL;
    ATerm s_52 = NULL;
    t = not_null(z_45);
    {
      t = int_to_string_0(t);
      {
        s_52 = t;
        if(((r_52 != NULL) && (r_52 != s_52)))
          _fail(s_52);
        else
          r_52 = s_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
    return(t);
  }
  ATerm e_55 (ATerm t)
  {
    ATerm d_53 = NULL;
    ATerm e_53 = NULL;
    t = not_null(z_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          e_53 = t;
          if(((d_53 != NULL) && (d_53 != e_53)))
            _fail(e_53);
          else
            d_53 = e_53;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(d_53)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(c_46), not_null(d_46)))));
    return(t);
  }
  ATerm f_55 (ATerm t)
  {
    t = not_null(d_46);
    return(t);
  }
  ATerm g_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_46)), (ATerm) ATmakeAppl(sym_Case_3, not_null(g_46), not_null(d_46), not_null(e_46)));
    return(t);
  }
  ATerm h_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_46)));
    return(t);
  }
  ATerm i_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), term_t_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46)))));
    return(t);
  }
  ATerm j_55 (ATerm t)
  {
    t = not_null(g_46);
    {
      ATerm j_20 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_20;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_46)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46))));
    return(t);
  }
  ATerm k_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), term_c_8, term_g_17));
    return(t);
  }
  ATerm l_55 (ATerm t)
  {
    ATerm s_53 = NULL;
    ATerm t_53 = NULL;
    t = not_null(j_46);
    {
      t = construct_term_caching_0(t);
      {
        t_53 = t;
        if(((s_53 != NULL) && (s_53 != t_53)))
          _fail(t_53);
        else
          s_53 = t_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, not_null(s_53)));
    return(t);
  }
  i_46 = t;
  d_36 :
  if(match_cons(i_46, sym_Let_2))
    {
      j_46 = ATgetArgument(i_46, 0);
      g_46 = ATgetArgument(i_46, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(j_46), (ATerm) ATinsert(ATempty, not_null(g_46)));
    }
  else
    {
      if(match_cons(i_46, sym_Where_1))
        {
          j_46 = ATgetArgument(i_46, 0);
          {
            ATerm n_46 = NULL;
            ATerm o_46 = NULL;
            t = new_0(t);
            {
              o_46 = t;
              if(((n_46 != NULL) && (n_46 != o_46)))
                _fail(o_46);
              else
                n_46 = o_46;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_46)), term_t_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_46))))), not_null(j_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_46)), term_c_8, term_g_17))));
          }
        }
      else
        {
          if(match_cons(i_46, sym_Test_1))
            {
              j_46 = ATgetArgument(i_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(j_46));
            }
          else
            {
              if(match_cons(i_46, sym_Call_2))
                {
                  j_46 = ATgetArgument(i_46, 0);
                  g_46 = ATgetArgument(i_46, 1);
                  e_36 :
                  if(match_cons(j_46, sym_SVar_1))
                    {
                      h_46 = ATgetArgument(j_46, 0);
                      {
                        ATerm x_46 = NULL;
                        ATerm d_47 = NULL;
                        t = not_null(g_46);
                        {
                          ATerm d_2 (ATerm t)
                          {
                            ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
                            y_46 = t;
                            n_34 :
                            if(match_cons(y_46, sym_Call_2))
                              {
                                z_46 = ATgetArgument(y_46, 0);
                                b_47 = ATgetArgument(y_46, 1);
                                o_34 :
                                if(match_cons(z_46, sym_SVar_1))
                                  {
                                    a_47 = ATgetArgument(z_46, 0);
                                    p_34 :
                                    if(((ATgetType(b_47) == AT_LIST) && ATisEmpty(b_47)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(a_47));
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
                            d_47 = t;
                            if(((x_46 != NULL) && (x_46 != d_47)))
                              _fail(d_47);
                            else
                              x_46 = d_47;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_46)), (ATerm) ATinsert(CheckATermList(not_null(x_46)), term_g_17))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(i_46, sym_Prim_2))
                    {
                      j_46 = ATgetArgument(i_46, 0);
                      g_46 = ATgetArgument(i_46, 1);
                      {
                        ATerm g_47 = NULL;
                        ATerm h_47 = NULL;
                        t = not_null(g_46);
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
                            h_47 = t;
                            if(((g_47 != NULL) && (g_47 != h_47)))
                              _fail(h_47);
                            else
                              g_47 = h_47;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_46)), not_null(g_47))));
                      }
                    }
                  else
                    {
                      if(match_cons(i_46, sym_Not_1))
                        {
                          j_46 = ATgetArgument(i_46, 0);
                          {
                            ATerm j_47 = NULL;
                            ATerm p_47 = NULL;
                            t = new_0(t);
                            {
                              p_47 = t;
                              if(((j_47 != NULL) && (j_47 != p_47)))
                                _fail(p_47);
                              else
                                j_47 = p_47;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_47)), term_t_8), term_k_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_21), term_w_20), not_null(j_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_47)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(i_46, sym_LGChoice_2))
                            {
                              j_46 = ATgetArgument(i_46, 0);
                              g_46 = ATgetArgument(i_46, 1);
                              {
                                ATerm s_47 = NULL;
                                ATerm t_47 = NULL;
                                t = new_0(t);
                                {
                                  t_47 = t;
                                  if(((s_47 != NULL) && (s_47 != t_47)))
                                    _fail(t_47);
                                  else
                                    s_47 = t_47;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_47)), term_t_8), term_k_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_47)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(i_46, sym_GChoice_2))
                                {
                                  j_46 = ATgetArgument(i_46, 0);
                                  g_46 = ATgetArgument(i_46, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(j_46), not_null(g_46));
                                }
                              else
                                {
                                  if(match_cons(i_46, sym_GuardedLChoice_3))
                                    {
                                      j_46 = ATgetArgument(i_46, 0);
                                      g_46 = ATgetArgument(i_46, 1);
                                      d_46 = ATgetArgument(i_46, 2);
                                      {
                                        ATerm z_47 = NULL,a_48 = NULL;
                                        ATerm b_48 = NULL;
                                        ATerm c_48 = NULL;
                                        t = new_0(t);
                                        {
                                          b_48 = t;
                                          {
                                            if(((z_47 != NULL) && (z_47 != b_48)))
                                              _fail(b_48);
                                            else
                                              z_47 = b_48;
                                            {
                                              t = new_0(t);
                                              {
                                                c_48 = t;
                                                if(((a_48 != NULL) && (a_48 != c_48)))
                                                  _fail(c_48);
                                                else
                                                  a_48 = c_48;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_48)), term_t_8), term_x_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_47)), term_t_8), term_k_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_48)))))), not_null(j_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_46, sym_LChoice_2))
                                        {
                                          j_46 = ATgetArgument(i_46, 0);
                                          g_46 = ATgetArgument(i_46, 1);
                                          {
                                            ATerm f_48 = NULL,g_48 = NULL;
                                            ATerm h_48 = NULL;
                                            ATerm i_48 = NULL;
                                            t = new_0(t);
                                            {
                                              h_48 = t;
                                              {
                                                if(((f_48 != NULL) && (f_48 != h_48)))
                                                  _fail(h_48);
                                                else
                                                  f_48 = h_48;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    i_48 = t;
                                                    if(((g_48 != NULL) && (g_48 != i_48)))
                                                      _fail(i_48);
                                                    else
                                                      g_48 = i_48;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_48)), term_t_8), term_x_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_48)), term_t_8), term_k_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_48)))))), term_l_22), not_null(j_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_17, term_c_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_48)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_46, sym_Choice_2))
                                            {
                                              j_46 = ATgetArgument(i_46, 0);
                                              g_46 = ATgetArgument(i_46, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_46), not_null(g_46));
                                            }
                                          else
                                            {
                                              if(match_cons(i_46, sym_Seq_2))
                                                {
                                                  j_46 = ATgetArgument(i_46, 0);
                                                  g_46 = ATgetArgument(i_46, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), not_null(j_46)));
                                                }
                                              else
                                                {
                                                  if(match_cons(i_46, sym_Scope_2))
                                                    {
                                                      j_46 = ATgetArgument(i_46, 0);
                                                      g_46 = ATgetArgument(i_46, 1);
                                                      {
                                                        ATerm r_48 = NULL;
                                                        ATerm m_22;
                                                        m_22 = t;
                                                        {
                                                          t = not_null(j_46);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm p_48 = NULL;
                                                              p_48 = t;
                                                              {
                                                                ATerm n_22;
                                                                n_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), term_t_22);
                                                                  {
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      t = term_m_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, h_2);
                                                                  }
                                                                }
                                                                t = n_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                          }
                                                        }
                                                        t = m_22;
                                                        {
                                                          ATerm u_48 = NULL;
                                                          t = not_null(j_46);
                                                          {
                                                            ATerm i_2 (ATerm t)
                                                            {
                                                              ATerm s_48 = NULL;
                                                              s_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_48)), term_t_8), term_u_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, i_2);
                                                            {
                                                              u_48 = t;
                                                              if(((r_48 != NULL) && (r_48 != u_48)))
                                                                _fail(u_48);
                                                              else
                                                                r_48 = u_48;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, not_null(r_48))), (ATerm) ATinsert(ATempty, not_null(g_46)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_46, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_46, sym_Id_0))
                                                            {
                                                              t = term_w_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(i_46, sym_Match_2))
                                                                {
                                                                  j_46 = ATgetArgument(i_46, 0);
                                                                  g_46 = ATgetArgument(i_46, 1);
                                                                  f_36 :
                                                                  if(match_cons(j_46, sym_Op_2))
                                                                    {
                                                                      h_46 = ATgetArgument(j_46, 0);
                                                                      q_45 = ATgetArgument(j_46, 1);
                                                                      g_36 :
                                                                      if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
                                                                        {
                                                                          m_45 = ATgetFirst((ATermList) q_45);
                                                                          n_45 = (ATerm) ATgetNext((ATermList) q_45);
                                                                          h_36 :
                                                                          if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
                                                                            {
                                                                              o_45 = ATgetFirst((ATermList) n_45);
                                                                              p_45 = (ATerm) ATgetNext((ATermList) n_45);
                                                                              i_36 :
                                                                              if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
                                                                                {
                                                                                  j_36 :
                                                                                  if(match_string(h_46, "Cons"))
                                                                                    {
                                                                                      ATerm v_22 = t;
                                                                                      int w_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm y_48 = NULL;
                                                                                          ATerm z_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(o_45), (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_19, not_null(g_46))))))), (ATerm) ATmakeAppl(sym__2, not_null(m_45), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_19, not_null(g_46))))));
                                                                                          {
                                                                                            ATerm j_2 (ATerm t)
                                                                                            {
                                                                                              ATerm x_22 = t;
                                                                                              int y_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(y_22);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = x_22;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, j_2);
                                                                                            {
                                                                                              z_48 = t;
                                                                                              if(((y_48 != NULL) && (y_48 != z_48)))
                                                                                                _fail(z_48);
                                                                                              else
                                                                                                y_48 = z_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, not_null(g_46))), term_y_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, not_null(g_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(y_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
                                                                                          ;
                                                                                          LocalPopChoice(w_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_22;
                                                                                          t = l_54(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  k_36 :
                                                                                  t = l_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              l_36 :
                                                                              t = l_54(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(q_45) == AT_LIST) && ATisEmpty(q_45)))
                                                                            {
                                                                              m_36 :
                                                                              if(match_string(h_46, "Nil"))
                                                                                {
                                                                                  ATerm z_22 = t;
                                                                                  int a_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_17, (ATerm) ATinsert(ATempty, not_null(g_46))), term_y_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, not_null(g_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATempty, term_g_17))));
                                                                                      ;
                                                                                      LocalPopChoice(a_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_22;
                                                                                      t = l_54(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = l_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              n_36 :
                                                                              t = l_54(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_46, sym_Real_1))
                                                                        {
                                                                          h_46 = ATgetArgument(j_46, 0);
                                                                          t = m_54(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_46, sym_Int_1))
                                                                            {
                                                                              h_46 = ATgetArgument(j_46, 0);
                                                                              t = s_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_46, sym_Str_1))
                                                                                {
                                                                                  h_46 = ATgetArgument(j_46, 0);
                                                                                  t = t_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(j_46, sym_Var_1))
                                                                                    {
                                                                                      h_46 = ATgetArgument(j_46, 0);
                                                                                      t = u_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(j_46, sym_As_2))
                                                                                        {
                                                                                          h_46 = ATgetArgument(j_46, 0);
                                                                                          q_45 = ATgetArgument(j_46, 1);
                                                                                          t = v_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(j_46, sym_BuildDefault_1))
                                                                                            {
                                                                                              h_46 = ATgetArgument(j_46, 0);
                                                                                              t = w_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(j_46, sym_Wld_0))
                                                                                                {
                                                                                                  t = x_54(t);
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
                                                                  if(match_cons(i_46, sym_Match_1))
                                                                    {
                                                                      j_46 = ATgetArgument(i_46, 0);
                                                                      t = y_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(i_46, sym_Case_3))
                                                                        {
                                                                          j_46 = ATgetArgument(i_46, 0);
                                                                          g_46 = ATgetArgument(i_46, 1);
                                                                          d_46 = ATgetArgument(i_46, 2);
                                                                          o_36 :
                                                                          if(match_cons(j_46, sym_Var_1))
                                                                            {
                                                                              h_46 = ATgetArgument(j_46, 0);
                                                                              p_36 :
                                                                              if(((ATgetType(g_46) == AT_LIST) && !(ATisEmpty(g_46))))
                                                                                {
                                                                                  f_46 = ATgetFirst((ATermList) g_46);
                                                                                  c_46 = (ATerm) ATgetNext((ATermList) g_46);
                                                                                  q_36 :
                                                                                  if(match_cons(f_46, sym_Alt_3))
                                                                                    {
                                                                                      y_45 = ATgetArgument(f_46, 0);
                                                                                      a_46 = ATgetArgument(f_46, 1);
                                                                                      b_46 = ATgetArgument(f_46, 2);
                                                                                      r_36 :
                                                                                      if(match_cons(y_45, sym_Fun_2))
                                                                                        {
                                                                                          z_45 = ATgetArgument(y_45, 0);
                                                                                          x_45 = ATgetArgument(y_45, 1);
                                                                                          s_36 :
                                                                                          if(((ATgetType(a_46) == AT_LIST) && !(ATisEmpty(a_46))))
                                                                                            {
                                                                                              r_45 = ATgetFirst((ATermList) a_46);
                                                                                              t_45 = (ATerm) ATgetNext((ATermList) a_46);
                                                                                              t_36 :
                                                                                              if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
                                                                                                {
                                                                                                  u_45 = ATgetFirst((ATermList) t_45);
                                                                                                  w_45 = (ATerm) ATgetNext((ATermList) t_45);
                                                                                                  u_36 :
                                                                                                  if(((ATgetType(w_45) == AT_LIST) && ATisEmpty(w_45)))
                                                                                                    {
                                                                                                      v_36 :
                                                                                                      if(match_cons(u_45, sym_Var_1))
                                                                                                        {
                                                                                                          v_45 = ATgetArgument(u_45, 0);
                                                                                                          w_36 :
                                                                                                          if(match_cons(r_45, sym_Var_1))
                                                                                                            {
                                                                                                              s_45 = ATgetArgument(r_45, 0);
                                                                                                              x_36 :
                                                                                                              if(match_int(x_45, 2))
                                                                                                                {
                                                                                                                  y_36 :
                                                                                                                  if(match_string(z_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm b_23 = t;
                                                                                                                      int c_23 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = z_54(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(c_23);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                          t = b_55(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_55(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  z_36 :
                                                                                                                  t = b_55(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              a_37 :
                                                                                                              b_37 :
                                                                                                              t = b_55(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          c_37 :
                                                                                                          d_37 :
                                                                                                          e_37 :
                                                                                                          t = b_55(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      f_37 :
                                                                                                      g_37 :
                                                                                                      h_37 :
                                                                                                      i_37 :
                                                                                                      t = b_55(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  j_37 :
                                                                                                  k_37 :
                                                                                                  y_37 :
                                                                                                  t = b_55(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(a_46) == AT_LIST) && ATisEmpty(a_46)))
                                                                                                {
                                                                                                  z_37 :
                                                                                                  if(match_int(x_45, 0))
                                                                                                    {
                                                                                                      a_38 :
                                                                                                      if(match_string(z_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm d_23 = t;
                                                                                                          int e_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = a_55(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(e_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_23;
                                                                                                              t = b_55(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = b_55(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      g_45 :
                                                                                                      t = b_55(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  h_45 :
                                                                                                  i_45 :
                                                                                                  t = b_55(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(y_45, sym_Real_1))
                                                                                            {
                                                                                              z_45 = ATgetArgument(y_45, 0);
                                                                                              t = c_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(y_45, sym_Int_1))
                                                                                                {
                                                                                                  z_45 = ATgetArgument(y_45, 0);
                                                                                                  t = d_55(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(y_45, sym_Str_1))
                                                                                                    {
                                                                                                      z_45 = ATgetArgument(y_45, 0);
                                                                                                      t = e_55(t);
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
                                                                                  if(((ATgetType(g_46) == AT_LIST) && ATisEmpty(g_46)))
                                                                                    {
                                                                                      t = f_55(t);
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
                                                                          if(match_cons(i_46, sym_Case_4))
                                                                            {
                                                                              j_46 = ATgetArgument(i_46, 0);
                                                                              g_46 = ATgetArgument(i_46, 1);
                                                                              d_46 = ATgetArgument(i_46, 2);
                                                                              e_46 = ATgetArgument(i_46, 3);
                                                                              t = g_55(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(i_46, sym_Continue_1))
                                                                                {
                                                                                  j_46 = ATgetArgument(i_46, 0);
                                                                                  t = h_55(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(i_46, sym_Assign_2))
                                                                                    {
                                                                                      j_46 = ATgetArgument(i_46, 0);
                                                                                      g_46 = ATgetArgument(i_46, 1);
                                                                                      j_45 :
                                                                                      if(match_cons(j_46, sym_Var_1))
                                                                                        {
                                                                                          h_46 = ATgetArgument(j_46, 0);
                                                                                          k_45 :
                                                                                          if(match_cons(g_46, sym_Var_1))
                                                                                            {
                                                                                              f_46 = ATgetArgument(g_46, 0);
                                                                                              {
                                                                                                ATerm f_23 = t;
                                                                                                int g_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = i_55(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(g_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_23;
                                                                                                    t = j_55(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = j_55(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(i_46, sym_Assign_1))
                                                                                        {
                                                                                          j_46 = ATgetArgument(i_46, 0);
                                                                                          l_45 :
                                                                                          if(match_cons(j_46, sym_Var_1))
                                                                                            {
                                                                                              h_46 = ATgetArgument(j_46, 0);
                                                                                              t = k_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(i_46, sym_Build_1))
                                                                                            {
                                                                                              j_46 = ATgetArgument(i_46, 0);
                                                                                              t = l_55(t);
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym__2))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), not_null(y_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  f_57 = t;
  d_57 :
  if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
    {
      g_57 = ATgetFirst((ATermList) f_57);
      h_57 = (ATerm) ATgetNext((ATermList) f_57);
      e_57 :
      if(match_int(g_57, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_57)), term_p_23), term_l_23);
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
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  l_57 :
  if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
    {
      o_57 = ATgetFirst((ATermList) n_57);
      p_57 = (ATerm) ATgetNext((ATermList) n_57);
      m_57 :
      if(match_int(o_57, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_57)), term_l_23), term_l_23);
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
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  t_57 :
  if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
    {
      w_57 = ATgetFirst((ATermList) v_57);
      x_57 = (ATerm) ATgetNext((ATermList) v_57);
      u_57 :
      if(match_int(w_57, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_57)), term_s_23), term_l_23);
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
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = t_23;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm f_24 = t;
  int i_24 = stack_ptr;
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
      LocalPopChoice(i_24);
    }
  else
    {
      t = f_24;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
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
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym__2))
    {
      g_58 = ATgetArgument(f_58, 0);
      h_58 = ATgetArgument(f_58, 1);
      {
        ATerm k_58 = NULL,m_58 = NULL;
        ATerm l_24;
        l_24 = t;
        {
          ATerm l_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_24), not_null(g_58));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  l_58 = t;
                  if(((k_58 != NULL) && (k_58 != l_58)))
                    _fail(l_58);
                  else
                    k_58 = l_58;
                }
              }
            }
          }
        }
        t = l_24;
        {
          ATerm n_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_n_24), not_null(g_58));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  n_58 = t;
                  if(((m_58 != NULL) && (m_58 != n_58)))
                    _fail(n_58);
                  else
                    m_58 = n_58;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(m_58))), term_q_24)))), not_null(h_58)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(k_58))), term_q_24)))));
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
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm d_59 = NULL,g_59 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm l_2 (ATerm t)
      {
        t = term_k_7;
        return(t);
      }
      t = rewrite_1(t, l_2);
      {
        d_59 = t;
        s_58 :
        if(match_cons(d_59, sym_Defined_1))
          {
            g_59 = ATgetArgument(d_59, 0);
            t_58 :
            if(!(match_string(g_59, "o_0")))
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
ATerm TraceFun_0 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  {
    ATerm s_59 = NULL,t_59 = NULL;
    t = not_null(l_59);
    {
      ATerm m_2 (ATerm t)
      {
        t = term_s_7;
        return(t);
      }
      t = rewrite_1(t, m_2);
      {
        s_59 = t;
        j_59 :
        if(match_cons(s_59, sym_Defined_1))
          {
            t_59 = ATgetArgument(s_59, 0);
            k_59 :
            if(!(match_string(t_59, "r_0")))
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
    t = not_null(l_59);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym_SDef_3))
    {
      a_60 = ATgetArgument(z_59, 0);
      b_60 = ATgetArgument(z_59, 1);
      c_60 = ATgetArgument(z_59, 2);
      {
        ATerm g_60 = NULL,h_60 = NULL;
        ATerm i_60 = NULL;
        t = not_null(b_60);
        {
          ATerm j_60 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            i_60 = t;
            {
              if(((g_60 != NULL) && (g_60 != i_60)))
                _fail(i_60);
              else
                g_60 = i_60;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(c_60));
                {
                  ATerm r_24 = t;
                  int s_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm t_24 = t;
                        int u_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            ;
                            LocalPopChoice(u_24);
                          }
                        else
                          {
                            t = t_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, n_2, _id);
                      t = TracedBody_0(t);
                      ;
                      LocalPopChoice(s_24);
                    }
                  else
                    {
                      t = r_24;
                      t = PlainBody_0(t);
                    }
                  {
                    j_60 = t;
                    if(((h_60 != NULL) && (h_60 != j_60)))
                      _fail(j_60);
                    else
                      h_60 = j_60;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_s_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_60)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(g_60)), term_x_24)))), not_null(h_60));
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
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym__2))
    {
      q_60 = ATgetArgument(p_60, 0);
      r_60 = ATgetArgument(p_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_60)), not_null(q_60)), (ATerm) ATinsert(ATempty, not_null(q_60)));
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
  ATerm w_60 = NULL;
  ATerm x_60 = NULL;
  x_60 = t;
  if(((w_60 != NULL) && (w_60 != x_60)))
    _fail(x_60);
  else
    w_60 = x_60;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(w_60));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_118 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_118(t);
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
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  b_61 = t;
  a_61 :
  if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
    {
      c_61 = ATgetFirst((ATermList) b_61);
      d_61 = (ATerm) ATgetNext((ATermList) b_61);
      t = not_null(c_61);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  h_61 :
  if(match_cons(k_61, sym__2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_61), not_null(m_61));
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
ATerm rewrite_1 (ATerm t, ATerm f_130 (ATerm))
{
  ATerm u_61 = NULL;
  ATerm w_61 = NULL;
  u_61 = t;
  {
    ATerm x_61 = NULL;
    t = term_y_24;
    {
      t = f_130(t);
      {
        x_61 = t;
        if(((w_61 != NULL) && (w_61 != x_61)))
          _fail(x_61);
        else
          w_61 = x_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_61), not_null(u_61));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  e_62 :
  if(match_cons(f_62, sym__2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      {
        ATerm l_62 = NULL;
        ATerm m_62 = NULL,n_62 = NULL,q_62 = NULL;
        t = not_null(f_62);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_e_25;
            return(t);
          }
          t = rewrite_1(t, o_2);
          {
            m_62 = t;
            c_62 :
            if(match_cons(m_62, sym_Defined_2))
              {
                n_62 = ATgetArgument(m_62, 0);
                q_62 = ATgetArgument(m_62, 1);
                d_62 :
                if(match_string(n_62, "j_0"))
                  {
                    if(((l_62 != NULL) && (l_62 != q_62)))
                      _fail(q_62);
                    else
                      l_62 = q_62;
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
        t = not_null(l_62);
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
  ATerm a_63 = NULL,c_63 = NULL,d_63 = NULL;
  a_63 = t;
  z_62 :
  if(match_cons(a_63, sym_OpDecl_2))
    {
      c_63 = ATgetArgument(a_63, 0);
      d_63 = ATgetArgument(a_63, 1);
      {
        ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,m_63 = NULL;
        ATerm f_25;
        f_25 = t;
        {
          ATerm j_63 = NULL;
          t = not_null(d_63);
          {
            ATerm k_63 = NULL;
            t = Arity_0(t);
            {
              j_63 = t;
              {
                if(((h_63 != NULL) && (h_63 != j_63)))
                  _fail(j_63);
                else
                  h_63 = j_63;
                {
                  ATerm l_63 = NULL;
                  t = int_to_string_0(t);
                  {
                    k_63 = t;
                    {
                      if(((g_63 != NULL) && (g_63 != k_63)))
                        _fail(k_63);
                      else
                        g_63 = k_63;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_63), not_null(h_63));
                        {
                          t = ConstructorName_0(t);
                          {
                            l_63 = t;
                            if(((i_63 != NULL) && (i_63 != l_63)))
                              _fail(l_63);
                            else
                              i_63 = l_63;
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
        t = f_25;
        {
          ATerm n_63 = NULL;
          t = not_null(c_63);
          {
            t = double_quote_0(t);
            {
              n_63 = t;
              if(((m_63 != NULL) && (m_63 != n_63)))
                _fail(n_63);
              else
                m_63 = n_63;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_63)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_63)), term_c_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_25), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(g_63))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(m_63))))))));
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
  ATerm w_63 = NULL;
  ATerm y_63 = NULL;
  w_63 = t;
  {
    ATerm z_63 = NULL,b_64 = NULL;
    ATerm a_64 = NULL;
    t = not_null(w_63);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          a_64 = t;
          if(((z_63 != NULL) && (z_63 != a_64)))
            _fail(a_64);
          else
            z_63 = a_64;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), (ATerm) ATinsert(ATempty, term_u_25));
      {
        t = conc_0(t);
        {
          b_64 = t;
          if(((y_63 != NULL) && (y_63 != b_64)))
            _fail(b_64);
          else
            y_63 = b_64;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(y_63)));
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
  ATerm m_64 = NULL;
  m_64 = t;
  t = SSL_int_to_string(not_null(m_64));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  v_64 :
  if(((ATgetType(x_64) == AT_LIST) && !(ATisEmpty(x_64))))
    {
      y_64 = ATgetFirst((ATermList) x_64);
      z_64 = (ATerm) ATgetNext((ATermList) x_64);
      w_64 :
      if(match_int(y_64, 95))
        {
          ATerm b_65 = NULL;
          ATerm c_65 = NULL;
          t = not_null(z_64);
          {
            t = p_0(t);
            {
              c_65 = t;
              if(((b_65 != NULL) && (b_65 != c_65)))
                _fail(c_65);
              else
                b_65 = c_65;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_65)), term_h_26), term_h_26);
        }
      else
        {
          if(match_int(y_64, 45))
            {
              ATerm e_65 = NULL;
              ATerm f_65 = NULL;
              t = not_null(z_64);
              {
                t = p_0(t);
                {
                  f_65 = t;
                  if(((e_65 != NULL) && (e_65 != f_65)))
                    _fail(f_65);
                  else
                    e_65 = f_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_65)), term_h_26);
            }
          else
            {
              if(match_int(y_64, 39))
                {
                  ATerm h_65 = NULL;
                  ATerm i_65 = NULL;
                  t = not_null(z_64);
                  {
                    t = p_0(t);
                    {
                      i_65 = t;
                      if(((h_65 != NULL) && (h_65 != i_65)))
                        _fail(i_65);
                      else
                        h_65 = i_65;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_65)), term_h_26), term_j_26), term_h_26);
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
ATerm escape_1 (ATerm t, ATerm u_118 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_65 (ATerm t)
    {
      ATerm k_26 = t;
      int p_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_118(t, p_65);
          ;
          LocalPopChoice(p_26);
        }
      else
        {
          t = k_26;
          {
            ATerm q_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, p_65);
                ;
                LocalPopChoice(t_26);
              }
            else
              {
                t = q_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = p_65(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm))
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_115(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
        u_65 = t;
        t_65 :
        if(((ATgetType(u_65) == AT_LIST) && !(ATisEmpty(u_65))))
          {
            v_65 = ATgetFirst((ATermList) u_65);
            w_65 = (ATerm) ATgetNext((ATermList) u_65);
            {
              ATerm z_65 = NULL,b_66 = NULL;
              ATerm z_26;
              z_26 = t;
              {
                ATerm a_66 = NULL;
                t = not_null(v_65);
                {
                  t = q_115(t);
                  {
                    a_66 = t;
                    if(((z_65 != NULL) && (z_65 != a_66)))
                      _fail(a_66);
                    else
                      z_65 = a_66;
                  }
                }
              }
              t = z_26;
              {
                ATerm c_66 = NULL;
                t = not_null(w_65);
                {
                  t = foldr_3(t, o_115, p_115, q_115);
                  {
                    c_66 = t;
                    if(((b_66 != NULL) && (b_66 != c_66)))
                      _fail(c_66);
                    else
                      b_66 = c_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_65), not_null(b_66));
                  t = p_115(t);
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
    t = term_h_16;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = foldr_3(t, p_2, add_0, w_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  k_66 = t;
  i_66 :
  if(match_cons(k_66, sym_FunType_2))
    {
      l_66 = ATgetArgument(k_66, 0);
      j_66 = ATgetArgument(k_66, 1);
      {
        t = not_null(l_66);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(k_66, sym_ConstType_1))
        {
          l_66 = ATgetArgument(k_66, 0);
          t = term_h_16;
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
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  w_66 :
  if(match_cons(x_66, sym_OpDecl_2))
    {
      y_66 = ATgetArgument(x_66, 0);
      z_66 = ATgetArgument(x_66, 1);
      {
        ATerm c_67 = NULL,d_67 = NULL;
        ATerm e_67 = NULL;
        t = not_null(z_66);
        {
          ATerm f_67 = NULL,h_67 = NULL,j_67 = NULL;
          t = Arity_0(t);
          {
            e_67 = t;
            {
              if(((c_67 != NULL) && (c_67 != e_67)))
                _fail(e_67);
              else
                c_67 = e_67;
              {
                ATerm a_27;
                a_27 = t;
                {
                  ATerm g_67 = NULL;
                  t = not_null(y_66);
                  {
                    t = cify_0(t);
                    {
                      g_67 = t;
                      if(((f_67 != NULL) && (f_67 != g_67)))
                        _fail(g_67);
                      else
                        f_67 = g_67;
                    }
                  }
                }
                t = a_27;
                {
                  ATerm i_67 = NULL;
                  t = not_null(c_67);
                  {
                    t = int_to_string_0(t);
                    {
                      i_67 = t;
                      if(((h_67 != NULL) && (h_67 != i_67)))
                        _fail(i_67);
                      else
                        h_67 = i_67;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_67)), term_e_27), not_null(f_67)), term_d_27);
                    {
                      t = concat_strings_0(t);
                      {
                        j_67 = t;
                        {
                          if(((d_67 != NULL) && (d_67 != j_67)))
                            _fail(j_67);
                          else
                            d_67 = j_67;
                          {
                            ATerm m_27;
                            m_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_66), not_null(c_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_27, not_null(d_67)));
                              {
                                ATerm x_2 (ATerm t)
                                {
                                  t = term_e_25;
                                  return(t);
                                }
                                t = assert_1(t, x_2);
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_67)), term_t_8)));
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
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  g_68 = t;
  c_68 :
  if(match_cons(g_68, sym_Signature_1))
    {
      h_68 = ATgetArgument(g_68, 0);
      d_68 :
      if(((ATgetType(h_68) == AT_LIST) && !(ATisEmpty(h_68))))
        {
          i_68 = ATgetFirst((ATermList) h_68);
          k_68 = (ATerm) ATgetNext((ATermList) h_68);
          e_68 :
          if(match_cons(i_68, sym_Constructors_1))
            {
              j_68 = ATgetArgument(i_68, 0);
              f_68 :
              if(((ATgetType(k_68) == AT_LIST) && ATisEmpty(k_68)))
                {
                  {
                    ATerm m_68 = NULL,n_68 = NULL,q_68 = NULL;
                    ATerm s_27;
                    s_27 = t;
                    {
                      ATerm o_68 = NULL;
                      t = not_null(j_68);
                      {
                        ATerm p_68 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          o_68 = t;
                          {
                            if(((m_68 != NULL) && (m_68 != o_68)))
                              _fail(o_68);
                            else
                              m_68 = o_68;
                            {
                              t = not_null(j_68);
                              {
                                t = InitConstructors_0(t);
                                {
                                  p_68 = t;
                                  if(((n_68 != NULL) && (n_68 != p_68)))
                                    _fail(p_68);
                                  else
                                    n_68 = p_68;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = s_27;
                    {
                      ATerm r_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_68), (ATerm) ATinsert(ATempty, not_null(n_68)));
                      {
                        t = conc_0(t);
                        {
                          r_68 = t;
                          if(((q_68 != NULL) && (q_68 != r_68)))
                            _fail(r_68);
                          else
                            q_68 = r_68;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(q_68));
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
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  b_69 = t;
  z_68 :
  if(match_cons(b_69, sym_FunType_2))
    {
      c_69 = ATgetArgument(b_69, 0);
      a_69 = ATgetArgument(b_69, 1);
      {
        ATerm e_69 = NULL;
        ATerm f_69 = NULL;
        t = not_null(c_69);
        {
          t = map_1(t, TranslateType_0);
          {
            f_69 = t;
            if(((e_69 != NULL) && (e_69 != f_69)))
              _fail(f_69);
            else
              e_69 = f_69;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_8, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(e_69)));
      }
    }
  else
    {
      if(match_cons(b_69, sym_ConstType_1))
        {
          c_69 = ATgetArgument(b_69, 0);
          t = term_s_8;
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
            ATerm d_70 = NULL;
            t = not_null(t_69);
            {
              t = map_1(t, TranslateType_0);
              {
                d_70 = t;
                if(((w_69 != NULL) && (w_69 != d_70)))
                  _fail(d_70);
                else
                  w_69 = d_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(w_69)))));
          }
        }
      else
        {
          if(match_cons(s_69, sym_ConstType_1))
            {
              t_69 = ATgetArgument(s_69, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_69)), term_t_8));
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
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  m_70 = t;
  l_70 :
  if(match_cons(m_70, sym_SDef_3))
    {
      n_70 = ATgetArgument(m_70, 0);
      o_70 = ATgetArgument(m_70, 1);
      p_70 = ATgetArgument(m_70, 2);
      {
        ATerm t_70 = NULL;
        ATerm u_70 = NULL;
        t = not_null(o_70);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            u_70 = t;
            if(((t_70 != NULL) && (t_70 != u_70)))
              _fail(u_70);
            else
              t_70 = u_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_70)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(t_70)), term_t_27))))));
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
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  j_71 = t;
  d_71 :
  if(match_cons(j_71, sym_Specification_1))
    {
      k_71 = ATgetArgument(j_71, 0);
      e_71 :
      if(((ATgetType(k_71) == AT_LIST) && !(ATisEmpty(k_71))))
        {
          l_71 = ATgetFirst((ATermList) k_71);
          n_71 = (ATerm) ATgetNext((ATermList) k_71);
          f_71 :
          if(match_cons(l_71, sym_Signature_1))
            {
              m_71 = ATgetArgument(l_71, 0);
              g_71 :
              if(((ATgetType(n_71) == AT_LIST) && !(ATisEmpty(n_71))))
                {
                  o_71 = ATgetFirst((ATermList) n_71);
                  q_71 = (ATerm) ATgetNext((ATermList) n_71);
                  h_71 :
                  if(match_cons(o_71, sym_Strategies_1))
                    {
                      p_71 = ATgetArgument(o_71, 0);
                      i_71 :
                      if(((ATgetType(q_71) == AT_LIST) && ATisEmpty(q_71)))
                        {
                          {
                            ATerm t_71 = NULL,u_71 = NULL,b_72 = NULL;
                            ATerm u_27;
                            u_27 = t;
                            {
                              ATerm v_71 = NULL;
                              t = not_null(p_71);
                              {
                                ATerm a_72 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  v_71 = t;
                                  {
                                    if(((t_71 != NULL) && (t_71 != v_71)))
                                      _fail(v_71);
                                    else
                                      t_71 = v_71;
                                    {
                                      t = term_a_8;
                                      {
                                        ATerm v_27 = t;
                                        int w_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm y_2 (ATerm t)
                                              {
                                                ATerm w_71 = NULL;
                                                ATerm x_71 = NULL,z_71 = NULL;
                                                ATerm y_71 = NULL;
                                                y_71 = t;
                                                if(((x_71 != NULL) && (x_71 != y_71)))
                                                  _fail(y_71);
                                                else
                                                  x_71 = y_71;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(x_71));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      z_71 = t;
                                                      if(((w_71 != NULL) && (w_71 != z_71)))
                                                        _fail(z_71);
                                                      else
                                                        w_71 = z_71;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(w_71));
                                                return(t);
                                              }
                                              t = map_1(t, y_2);
                                            }
                                            ;
                                            LocalPopChoice(w_27);
                                          }
                                        else
                                          {
                                            t = v_27;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          a_72 = t;
                                          if(((u_71 != NULL) && (u_71 != a_72)))
                                            _fail(a_72);
                                          else
                                            u_71 = a_72;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = u_27;
                            {
                              ATerm c_72 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_71)), not_null(t_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_71))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_28, (ATerm) ATinsert(ATempty, term_h_28)))), not_null(u_71));
                              {
                                t = concat_0(t);
                                {
                                  c_72 = t;
                                  if(((b_72 != NULL) && (b_72 != c_72)))
                                    _fail(c_72);
                                  else
                                    b_72 = c_72;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(b_72));
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
  ATerm l_72 = NULL,m_72 = NULL,s_72 = NULL;
  l_72 = t;
  k_72 :
  if(((ATgetType(l_72) == AT_LIST) && !(ATisEmpty(l_72))))
    {
      m_72 = ATgetFirst((ATermList) l_72);
      s_72 = (ATerm) ATgetNext((ATermList) l_72);
      t = not_null(s_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,j_73 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym__2))
    {
      z_72 = ATgetArgument(y_72, 0);
      j_73 = ATgetArgument(y_72, 1);
      {
        ATerm j_28;
        j_28 = t;
        {
          ATerm m_73 = NULL;
          ATerm p_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(j_73));
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
                t = (ATerm) ATempty;
              }
            {
              p_73 = t;
              if(((m_73 != NULL) && (m_73 != p_73)))
                _fail(p_73);
              else
                m_73 = p_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_72), not_null(j_73), not_null(m_73));
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
ATerm end_scope_1 (ATerm t, ATerm a_130 (ATerm))
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  ATerm q_28;
  q_28 = t;
  {
    ATerm z_73 = NULL;
    ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
    t = a_130(t);
    {
      z_73 = t;
      {
        if(((y_73 != NULL) && (y_73 != z_73)))
          _fail(z_73);
        else
          y_73 = z_73;
        {
          ATerm t_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), term_z_28);
              t = table_get_0(t);
              ;
              LocalPopChoice(w_28);
            }
          else
            {
              t = t_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            a_74 = t;
            v_73 :
            if(((ATgetType(a_74) == AT_LIST) && !(ATisEmpty(a_74))))
              {
                b_74 = ATgetFirst((ATermList) a_74);
                c_74 = (ATerm) ATgetNext((ATermList) a_74);
                {
                  if(((x_73 != NULL) && (x_73 != b_74)))
                    _fail(b_74);
                  else
                    x_73 = b_74;
                  {
                    if(((w_73 != NULL) && (w_73 != c_74)))
                      _fail(c_74);
                    else
                      w_73 = c_74;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_73), term_z_28, not_null(w_73));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_73);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm d_74 = NULL;
                              d_74 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), not_null(d_74));
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
  t = q_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_102 (ATerm), ATerm s_102 (ATerm))
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_102(t);
      t = s_102(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        t = s_102(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_129 (ATerm))
{
  ATerm k_74 = NULL;
  ATerm c_29;
  c_29 = t;
  {
    ATerm l_74 = NULL;
    ATerm m_74 = NULL;
    t = z_129(t);
    {
      l_74 = t;
      {
        if(((k_74 != NULL) && (k_74 != l_74)))
          _fail(l_74);
        else
          k_74 = l_74;
        {
          ATerm n_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_74), term_z_28);
          {
            ATerm d_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_29);
              }
            else
              {
                t = d_29;
                t = (ATerm) ATempty;
              }
            {
              n_74 = t;
              if(((m_74 != NULL) && (m_74 != n_74)))
                _fail(n_74);
              else
                m_74 = n_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_74), term_z_28, (ATerm) ATinsert(CheckATermList(not_null(m_74)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm b_130 (ATerm), ATerm c_130 (ATerm))
{
  t = begin_scope_1(t, b_130);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, b_130);
      return(t);
    }
    t = restore_always_2(t, c_130, a_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_130 (ATerm))
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  b_75 :
  if(match_cons(c_75, sym__2))
    {
      d_75 = ATgetArgument(c_75, 0);
      e_75 = ATgetArgument(c_75, 1);
      {
        ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
        ATerm f_29;
        f_29 = t;
        {
          ATerm k_75 = NULL;
          ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
          t = d_130(t);
          {
            k_75 = t;
            {
              if(((h_75 != NULL) && (h_75 != k_75)))
                _fail(k_75);
              else
                h_75 = k_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_75), not_null(d_75), not_null(e_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_29 = t;
                    int h_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_75), term_z_28);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_29);
                      }
                    else
                      {
                        t = g_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_75 = t;
                      a_75 :
                      if(((ATgetType(l_75) == AT_LIST) && !(ATisEmpty(l_75))))
                        {
                          m_75 = ATgetFirst((ATermList) l_75);
                          n_75 = (ATerm) ATgetNext((ATermList) l_75);
                          {
                            if(((i_75 != NULL) && (i_75 != m_75)))
                              _fail(m_75);
                            else
                              i_75 = m_75;
                            {
                              if(((j_75 != NULL) && (j_75 != n_75)))
                                _fail(n_75);
                              else
                                j_75 = n_75;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_75), term_z_28, (ATerm) ATinsert(CheckATermList(not_null(j_75)), (ATerm) ATinsert(CheckATermList(not_null(i_75)), not_null(d_75))));
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
        t = f_29;
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
  ATerm t_75 = NULL,u_75 = NULL;
  ATerm i_29;
  i_29 = t;
  {
    ATerm v_75 = NULL;
    ATerm w_75 = NULL;
    t = term_k_29;
    {
      v_75 = t;
      {
        if(((t_75 != NULL) && (t_75 != v_75)))
          _fail(v_75);
        else
          t_75 = v_75;
        {
          t = term_c_16;
          {
            w_75 = t;
            if(((u_75 != NULL) && (u_75 != w_75)))
              _fail(w_75);
            else
              u_75 = w_75;
          }
        }
      }
    }
  }
  t = i_29;
  {
    ATerm l_29;
    l_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_75), (ATerm) ATmakeAppl(sym_Defined_2, term_m_29, not_null(u_75)));
      {
        ATerm b_3 (ATerm t)
        {
          t = term_a_13;
          return(t);
        }
        t = assert_1(t, b_3);
      }
    }
    t = l_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm c_76 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = term_m_14;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              {
                ATerm s_29 = t;
                int t_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(t_29);
                  }
                else
                  {
                    t = s_29;
                    {
                      ATerm x_29 = t;
                      int a_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
                          LocalPopChoice(a_30);
                        }
                      else
                        {
                          t = x_29;
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
          t = _all(t, c_76);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, c_3, d_3);
      return(t);
    }
    t = c_76(t);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm b_76 = NULL;
          b_76 = t;
          a_76 :
          if(match_cons(b_76, sym_InitCachedTerms_0))
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
  ATerm b_30;
  b_30 = t;
  {
    ATerm f_76 = NULL;
    ATerm g_76 = NULL;
    t = term_y_24;
    {
      t = whoami_0(t);
      {
        g_76 = t;
        if(((f_76 != NULL) && (f_76 != g_76)))
          _fail(g_76);
        else
          f_76 = g_76;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), not_null(f_76)), term_d_30));
      {
        t = printnl_0(t);
        {
          t = term_t_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
  k_76 = t;
  j_76 :
  if(match_cons(k_76, sym__2))
    {
      l_76 = ATgetArgument(k_76, 0);
      m_76 = ATgetArgument(k_76, 1);
      {
        ATerm f_30;
        f_30 = t;
        t = SSL_printnl(not_null(l_76), not_null(m_76));
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
  ATerm r_76 = NULL;
  r_76 = t;
  t = SSL_implode_string(not_null(r_76));
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
        ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
        w_76 = t;
        v_76 :
        if(((ATgetType(w_76) == AT_LIST) && !(ATisEmpty(w_76))))
          {
            x_76 = ATgetFirst((ATermList) w_76);
            y_76 = (ATerm) ATgetNext((ATermList) w_76);
            {
              t = not_null(x_76);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(y_76);
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
  ATerm i_77 = NULL;
  ATerm k_77 = NULL;
  i_77 = t;
  {
    ATerm l_77 = NULL;
    ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
    t = not_null(i_77);
    {
      l_77 = t;
      {
        t = SSL_explode_term(not_null(l_77));
        {
          n_77 = t;
          g_77 :
          if(match_cons(n_77, sym__2))
            {
              o_77 = ATgetArgument(n_77, 0);
              p_77 = ATgetArgument(n_77, 1);
              h_77 :
              if(match_string(o_77, ""))
                {
                  if(((k_77 != NULL) && (k_77 != p_77)))
                    _fail(p_77);
                  else
                    k_77 = p_77;
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
      t = not_null(k_77);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm g_78 (ATerm t)
  {
    ATerm i_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_78);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = i_30;
        {
          t = Nil_0(t);
          t = c_110(t);
        }
      }
    return(t);
  }
  t = g_78(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  i_78 :
  if(match_cons(j_78, sym__2))
    {
      k_78 = ATgetArgument(j_78, 0);
      l_78 = ATgetArgument(j_78, 1);
      {
        t = not_null(k_78);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(l_78);
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
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_79 = NULL;
  a_79 = t;
  t = SSL_explode_string(not_null(a_79));
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
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
              v_79 = t;
              s_79 :
              if(match_cons(v_79, sym_Path_1))
                {
                  w_79 = ATgetArgument(v_79, 0);
                  t = not_null(w_79);
                }
              else
                {
                  if(match_cons(v_79, sym_Var_1))
                    {
                      w_79 = ATgetArgument(v_79, 0);
                      {
                        t = not_null(w_79);
                        {
                          ATerm a_31 = t;
                          int b_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(b_31);
                            }
                          else
                            {
                              t = a_31;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_c_31;
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
                      if(match_cons(v_79, sym_Prefix_2))
                        {
                          w_79 = ATgetArgument(v_79, 0);
                          x_79 = ATgetArgument(v_79, 1);
                          {
                            ATerm c_80 = NULL,e_80 = NULL;
                            ATerm d_31;
                            d_31 = t;
                            {
                              ATerm d_80 = NULL;
                              t = not_null(w_79);
                              {
                                t = eval_config_0(t);
                                {
                                  d_80 = t;
                                  if(((c_80 != NULL) && (c_80 != d_80)))
                                    _fail(d_80);
                                  else
                                    c_80 = d_80;
                                }
                              }
                            }
                            t = d_31;
                            {
                              ATerm f_80 = NULL;
                              t = not_null(x_79);
                              {
                                t = eval_config_0(t);
                                {
                                  f_80 = t;
                                  if(((e_80 != NULL) && (e_80 != f_80)))
                                    _fail(f_80);
                                  else
                                    e_80 = f_80;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(e_80));
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
  ATerm n_80 = NULL;
  n_80 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(n_80));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_31;
            e_31 = t;
            {
              ATerm p_80 = NULL;
              ATerm q_80 = NULL;
              q_80 = t;
              if(((p_80 != NULL) && (p_80 != q_80)))
                _fail(q_80);
              else
                p_80 = q_80;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_6, not_null(n_80), not_null(p_80));
                t = table_put_0(t);
              }
            }
            t = e_31;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_122 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm f_31;
    f_31 = t;
    {
      ATerm u_80 = NULL;
      ATerm v_80 = NULL;
      t = term_q_31;
      {
        t = get_config_0(t);
        {
          v_80 = t;
          if(((u_80 != NULL) && (u_80 != v_80)))
            _fail(v_80);
          else
            u_80 = v_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_80), term_e_32);
        t = geq_0(t);
      }
    }
    t = f_31;
    t = s_122(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm b_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
  b_81 = t;
  z_80 :
  if(match_cons(b_81, sym__2))
    {
      e_81 = ATgetArgument(b_81, 0);
      f_81 = ATgetArgument(b_81, 1);
      a_81 :
      if(match_cons(f_81, sym_Stream_1))
        {
          g_81 = ATgetArgument(f_81, 0);
          {
            ATerm j_81 = NULL;
            t = SSL_fputc(not_null(e_81), not_null(g_81));
            {
              ATerm k_81 = NULL;
              k_81 = t;
              if(((j_81 != NULL) && (j_81 != k_81)))
                _fail(k_81);
              else
                j_81 = k_81;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_81));
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
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  r_81 = t;
  p_81 :
  if(match_cons(r_81, sym__2))
    {
      s_81 = ATgetArgument(r_81, 0);
      u_81 = ATgetArgument(r_81, 1);
      q_81 :
      if(match_cons(s_81, sym_Stream_1))
        {
          t_81 = ATgetArgument(s_81, 0);
          {
            ATerm x_81 = NULL;
            t = SSL_write_term_to_stream_text(not_null(t_81), not_null(u_81));
            {
              ATerm y_81 = NULL;
              y_81 = t;
              if(((x_81 != NULL) && (x_81 != y_81)))
                _fail(y_81);
              else
                x_81 = y_81;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_81));
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
    ATerm c_82 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm d_82 = NULL;
      d_82 = t;
      if(((c_82 != NULL) && (c_82 != d_82)))
        _fail(d_82);
      else
        c_82 = d_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(c_82));
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
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,o_82 = NULL;
  j_82 = t;
  h_82 :
  if(match_cons(j_82, sym__2))
    {
      k_82 = ATgetArgument(j_82, 0);
      o_82 = ATgetArgument(j_82, 1);
      i_82 :
      if(match_cons(k_82, sym_Stream_1))
        {
          l_82 = ATgetArgument(k_82, 0);
          {
            ATerm r_82 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(l_82), not_null(o_82));
            {
              ATerm s_82 = NULL;
              s_82 = t;
              if(((r_82 != NULL) && (r_82 != s_82)))
                _fail(s_82);
              else
                r_82 = s_82;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_82));
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
ATerm WriteToFile_1 (ATerm t, ATerm o_121 (ATerm))
{
  ATerm z_82 = NULL,a_83 = NULL,c_83 = NULL;
  z_82 = t;
  y_82 :
  if(match_cons(z_82, sym__2))
    {
      a_83 = ATgetArgument(z_82, 0);
      c_83 = ATgetArgument(z_82, 1);
      {
        ATerm f_83 = NULL,h_83 = NULL;
        t = not_null(a_83);
        {
          ATerm g_83 = NULL;
          g_83 = t;
          if(((f_83 != NULL) && (f_83 != g_83)))
            _fail(g_83);
          else
            f_83 = g_83;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_83), term_q_32);
            {
              t = open_stream_0(t);
              {
                ATerm i_83 = NULL;
                i_83 = t;
                if(((h_83 != NULL) && (h_83 != i_83)))
                  _fail(i_83);
                else
                  h_83 = i_83;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_83), not_null(c_83));
                  {
                    t = o_121(t);
                    {
                      t = fclose_0(t);
                      t = not_null(c_83);
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
  ATerm q_83 = NULL;
  ATerm u_32;
  u_32 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm r_83 = NULL,s_83 = NULL;
            r_83 = t;
            n_83 :
            if(match_cons(r_83, sym_Output_1))
              {
                s_83 = ATgetArgument(r_83, 0);
                if(((q_83 != NULL) && (q_83 != s_83)))
                  _fail(s_83);
                else
                  q_83 = s_83;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm t_83 = NULL;
            t = term_x_32;
            {
              t_83 = t;
              if(((q_83 != NULL) && (q_83 != t_83)))
                _fail(t_83);
              else
                q_83 = t_83;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = u_32;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(q_83);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm y_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm u_83 = NULL;
              u_83 = t;
              p_83 :
              if(!(match_cons(u_83, sym_Binary_0)))
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
          LocalPopChoice(z_32);
        }
      else
        {
          t = y_32;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_123 (ATerm))
{
  ATerm a_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
  ATerm a_33;
  a_33 = t;
  t = dtime_0(t);
  t = a_33;
  {
    t = o_123(t);
    {
      ATerm b_33;
      b_33 = t;
      {
        ATerm b_84 = NULL;
        t = dtime_0(t);
        {
          b_84 = t;
          if(((a_84 != NULL) && (a_84 != b_84)))
            _fail(b_84);
          else
            a_84 = b_84;
        }
      }
      t = b_33;
      {
        c_84 = t;
        z_83 :
        if(match_cons(c_84, sym__2))
          {
            d_84 = ATgetArgument(c_84, 0);
            e_84 = ATgetArgument(c_84, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_84)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_84))), not_null(e_84));
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
  ATerm m_84 = NULL,n_84 = NULL;
  ATerm t_84 (ATerm t)
  {
    t = SSL_fclose(not_null(n_84));
    return(t);
  }
  n_84 = t;
  l_84 :
  if(match_cons(n_84, sym_Stream_1))
    {
      m_84 = ATgetArgument(n_84, 0);
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(m_84));
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            t = t_84(t);
          }
      }
    }
  else
    {
      t = t_84(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  w_84 = t;
  v_84 :
  if(match_cons(w_84, sym_Stream_1))
    {
      x_84 = ATgetArgument(w_84, 0);
      t = SSL_read_term_from_stream(not_null(x_84));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_121 (ATerm))
{
  ATerm e_33;
  e_33 = t;
  {
    ATerm c_85 = NULL,e_85 = NULL;
    ATerm f_33;
    f_33 = t;
    {
      ATerm d_85 = NULL;
      t = a_121(t);
      {
        d_85 = t;
        if(((c_85 != NULL) && (c_85 != d_85)))
          _fail(d_85);
        else
          c_85 = d_85;
      }
    }
    t = f_33;
    {
      ATerm f_85 = NULL;
      f_85 = t;
      if(((e_85 != NULL) && (e_85 != f_85)))
        _fail(f_85);
      else
        e_85 = f_85;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_85)), not_null(c_85)));
        t = printnl_0(t);
      }
    }
  }
  t = e_33;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
  l_85 = t;
  k_85 :
  if(match_cons(l_85, sym__2))
    {
      m_85 = ATgetArgument(l_85, 0);
      n_85 = ATgetArgument(l_85, 1);
      {
        ATerm q_85 = NULL;
        t = SSL_fopen(not_null(m_85), not_null(n_85));
        {
          ATerm r_85 = NULL;
          r_85 = t;
          if(((q_85 != NULL) && (q_85 != r_85)))
            _fail(r_85);
          else
            q_85 = r_85;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_85));
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
  ATerm v_85 = NULL;
  v_85 = t;
  t = SSL_is_string(not_null(v_85));
  return(t);
}
ATerm _2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
  e_86 = t;
  d_86 :
  if(match_cons(e_86, sym__2))
    {
      f_86 = ATgetArgument(e_86, 0);
      g_86 = ATgetArgument(e_86, 1);
      {
        ATerm k_86 = NULL,m_86 = NULL;
        ATerm l_86 = NULL;
        t = SSLgetAnnotations(not_null(e_86));
        {
          l_86 = t;
          if(((k_86 != NULL) && (k_86 != l_86)))
            _fail(l_86);
          else
            k_86 = l_86;
        }
        {
          t = not_null(f_86);
          {
            ATerm o_86 = NULL;
            t = t_79(t);
            {
              m_86 = t;
              {
                t = not_null(g_86);
                {
                  ATerm q_86 = NULL;
                  t = u_79(t);
                  {
                    o_86 = t;
                    {
                      ATerm r_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_86), not_null(o_86)), not_null(k_86));
                      {
                        r_86 = t;
                        if(((q_86 != NULL) && (q_86 != r_86)))
                          _fail(r_86);
                        else
                          q_86 = r_86;
                      }
                      t = not_null(q_86);
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
  ATerm y_86 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_86 = NULL;
    z_86 = t;
    if(((y_86 != NULL) && (y_86 != z_86)))
      _fail(z_86);
    else
      y_86 = z_86;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_86));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_87 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_87 = NULL;
    d_87 = t;
    if(((c_87 != NULL) && (c_87 != d_87)))
      _fail(d_87);
    else
      c_87 = d_87;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_87));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_87 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_87 = NULL;
    h_87 = t;
    if(((g_87 != NULL) && (g_87 != h_87)))
      _fail(h_87);
    else
      g_87 = h_87;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_87));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_87 = NULL;
  n_87 = t;
  m_87 :
  if(match_cons(n_87, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_87, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_87, sym_stdin_0))
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
  ATerm x_87 = NULL;
  ATerm z_87 = NULL,a_88 = NULL;
  x_87 = t;
  {
    ATerm b_88 = NULL;
    ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL;
    t = not_null(x_87);
    {
      b_88 = t;
      {
        t = SSL_explode_term(not_null(b_88));
        {
          d_88 = t;
          u_87 :
          if(match_cons(d_88, sym__2))
            {
              e_88 = ATgetArgument(d_88, 0);
              f_88 = ATgetArgument(d_88, 1);
              v_87 :
              if(match_string(e_88, ""))
                {
                  w_87 :
                  if(((ATgetType(f_88) == AT_LIST) && !(ATisEmpty(f_88))))
                    {
                      g_88 = ATgetFirst((ATermList) f_88);
                      h_88 = (ATerm) ATgetNext((ATermList) f_88);
                      {
                        if(((a_88 != NULL) && (a_88 != g_88)))
                          _fail(g_88);
                        else
                          a_88 = g_88;
                        if(((z_87 != NULL) && (z_87 != h_88)))
                          _fail(h_88);
                        else
                          z_87 = h_88;
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
    t = not_null(a_88);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  p_88 = t;
  o_88 :
  if(match_cons(p_88, sym__2))
    {
      q_88 = ATgetArgument(p_88, 0);
      r_88 = ATgetArgument(p_88, 1);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm i_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm s_88 = NULL,t_88 = NULL;
                    s_88 = t;
                    n_88 :
                    if(match_cons(s_88, sym_Path_1))
                      {
                        t_88 = ATgetArgument(s_88, 0);
                        t = not_null(t_88);
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
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = i_33;
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
  ATerm b_89 = NULL;
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_88 = NULL;
      ATerm a_89 = NULL;
      a_89 = t;
      if(((z_88 != NULL) && (z_88 != a_89)))
        _fail(a_89);
      else
        z_88 = a_89;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_88), term_m_33);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm v_3 (ATerm t)
        {
          t = term_n_33;
          return(t);
        }
        t = debug_1(t, v_3);
        _fail(t);
      }
    }
  {
    ATerm o_33;
    o_33 = t;
    {
      ATerm c_89 = NULL;
      t = read_from_stream_0(t);
      {
        c_89 = t;
        if(((b_89 != NULL) && (b_89 != c_89)))
          _fail(c_89);
        else
          b_89 = c_89;
      }
    }
    t = o_33;
    {
      t = fclose_0(t);
      t = not_null(b_89);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_117 (ATerm), ATerm c_117 (ATerm))
{
  ATerm h_89 = NULL,j_89 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm i_89 = NULL;
    t = b_117(t);
    {
      i_89 = t;
      if(((h_89 != NULL) && (h_89 != i_89)))
        _fail(i_89);
      else
        h_89 = i_89;
    }
  }
  t = p_33;
  {
    ATerm k_89 = NULL;
    t = c_117(t);
    {
      k_89 = t;
      if(((j_89 != NULL) && (j_89 != k_89)))
        _fail(k_89);
      else
        j_89 = k_89;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_89), not_null(j_89));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_89 = NULL;
  ATerm q_33;
  q_33 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm r_89 = NULL,s_89 = NULL;
          r_89 = t;
          o_89 :
          if(match_cons(r_89, sym_Input_1))
            {
              s_89 = ATgetArgument(r_89, 0);
              if(((q_89 != NULL) && (q_89 != s_89)))
                _fail(s_89);
              else
                q_89 = s_89;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm t_89 = NULL;
          t = term_t_33;
          {
            t_89 = t;
            if(((q_89 != NULL) && (q_89 != t_89)))
              _fail(t_89);
            else
              q_89 = t_89;
          }
        }
      }
  }
  t = q_33;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(q_89);
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
    ATerm a_90 = NULL;
    a_90 = t;
    w_89 :
    if(!(match_string(a_90, "-k")))
      {
        if(!(match_string(a_90, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm u_33;
    u_33 = t;
    {
      ATerm b_90 = NULL;
      ATerm c_90 = NULL;
      t = string_to_int_0(t);
      {
        c_90 = t;
        if(((b_90 != NULL) && (b_90 != c_90)))
          _fail(c_90);
        else
          b_90 = c_90;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_33, not_null(b_90));
        t = set_config_0(t);
      }
    }
    t = u_33;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_w_33;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_90 = NULL;
  f_90 = t;
  t = SSL_string_to_int(not_null(f_90));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm n_90 = NULL;
        n_90 = t;
        i_90 :
        if(!(match_string(n_90, "-S")))
          {
            if(!(match_string(n_90, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_z_33;
        t = set_config_0(t);
        t = term_a_34;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_b_34;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm o_90 = NULL;
              o_90 = t;
              j_90 :
              if(!(match_string(o_90, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm r_90 = NULL;
              ATerm e_34;
              e_34 = t;
              {
                ATerm p_90 = NULL;
                ATerm q_90 = NULL;
                t = string_to_int_0(t);
                {
                  q_90 = t;
                  if(((p_90 != NULL) && (p_90 != q_90)))
                    _fail(q_90);
                  else
                    p_90 = q_90;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_31, not_null(p_90));
                  t = set_config_0(t);
                }
              }
              t = e_34;
              {
                ATerm s_90 = NULL;
                s_90 = t;
                if(((r_90 != NULL) && (r_90 != s_90)))
                  _fail(s_90);
                else
                  r_90 = s_90;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_90));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_f_34;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm t_90 = NULL;
                t_90 = t;
                m_90 :
                if(!(match_string(t_90, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_h_34;
                t = set_config_0(t);
                t = term_i_34;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_j_34;
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
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm z_90 = NULL;
    z_90 = t;
    w_90 :
    if(!(match_string(z_90, "-o")))
      {
        if(!(match_string(z_90, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm c_91 = NULL;
    ATerm m_34;
    m_34 = t;
    {
      ATerm a_91 = NULL;
      ATerm b_91 = NULL;
      b_91 = t;
      if(((a_91 != NULL) && (a_91 != b_91)))
        _fail(b_91);
      else
        a_91 = b_91;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_34, not_null(a_91));
        t = set_config_0(t);
      }
    }
    t = m_34;
    {
      ATerm d_91 = NULL;
      d_91 = t;
      if(((c_91 != NULL) && (c_91 != d_91)))
        _fail(d_91);
      else
        c_91 = d_91;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_91));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_r_34;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm h_91 = NULL;
          h_91 = t;
          g_91 :
          if(!(match_string(h_91, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_v_34;
          t = set_config_0(t);
          t = term_w_34;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_x_34;
          return(t);
        }
        t = Option_3(t, n_4, o_4, p_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
  n_91 = t;
  l_91 :
  if(match_string(n_91, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(n_91) == AT_LIST) && !(ATisEmpty(n_91))))
        {
          o_91 = ATgetFirst((ATermList) n_91);
          p_91 = (ATerm) ATgetNext((ATermList) n_91);
          m_91 :
          if(((ATgetType(p_91) == AT_LIST) && !(ATisEmpty(p_91))))
            {
              q_91 = ATgetFirst((ATermList) p_91);
              r_91 = (ATerm) ATgetNext((ATermList) p_91);
              {
                ATerm v_91 = NULL;
                ATerm y_34;
                y_34 = t;
                {
                  t = not_null(o_91);
                  t = k_0(t);
                }
                t = y_34;
                {
                  ATerm w_91 = NULL;
                  t = not_null(q_91);
                  {
                    t = m_0(t);
                    {
                      w_91 = t;
                      if(((v_91 != NULL) && (v_91 != w_91)))
                        _fail(w_91);
                      else
                        v_91 = w_91;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_91)), not_null(v_91));
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
    ATerm d_92 = NULL;
    d_92 = t;
    a_92 :
    if(!(match_string(d_92, "-i")))
      {
        if(!(match_string(d_92, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm h_92 = NULL;
    ATerm z_34;
    z_34 = t;
    {
      ATerm e_92 = NULL;
      ATerm g_92 = NULL;
      g_92 = t;
      if(((e_92 != NULL) && (e_92 != g_92)))
        _fail(g_92);
      else
        e_92 = g_92;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_35, not_null(e_92));
        t = set_config_0(t);
      }
    }
    t = z_34;
    {
      ATerm i_92 = NULL;
      i_92 = t;
      if(((h_92 != NULL) && (h_92 != i_92)))
        _fail(i_92);
      else
        h_92 = i_92;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_92));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_b_35;
    return(t);
  }
  t = ArgOption_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_92 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_92 = NULL;
    t = term_y_24;
    {
      t = whoami_0(t);
      {
        n_92 = t;
        if(((m_92 != NULL) && (m_92 != n_92)))
          _fail(n_92);
        else
          m_92 = n_92;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, term_i_35), not_null(m_92)));
      {
        t = printnl_0(t);
        {
          t = term_t_16;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_35;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_92 = NULL;
  q_92 = t;
  t = SSL_TicksToSeconds(not_null(q_92));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
  v_92 = t;
  u_92 :
  if(match_cons(v_92, sym__2))
    {
      w_92 = ATgetArgument(v_92, 0);
      x_92 = ATgetArgument(v_92, 1);
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_92), not_null(x_92));
            ;
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = SSL_addr(not_null(w_92), not_null(x_92));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_115 (ATerm), ATerm n_115 (ATerm))
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_115(t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
        e_93 = t;
        d_93 :
        if(((ATgetType(e_93) == AT_LIST) && !(ATisEmpty(e_93))))
          {
            f_93 = ATgetFirst((ATermList) e_93);
            g_93 = (ATerm) ATgetNext((ATermList) e_93);
            {
              ATerm j_93 = NULL;
              ATerm k_93 = NULL;
              t = not_null(g_93);
              {
                t = foldr_2(t, m_115, n_115);
                {
                  k_93 = t;
                  if(((j_93 != NULL) && (j_93 != k_93)))
                    _fail(k_93);
                  else
                    j_93 = k_93;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_93), not_null(j_93));
                t = n_115(t);
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
ATerm crush_2 (ATerm t, ATerm f_119 (ATerm), ATerm g_119 (ATerm))
{
  ATerm r_93 = NULL;
  ATerm t_93 = NULL;
  r_93 = t;
  {
    ATerm u_93 = NULL;
    ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL;
    t = not_null(r_93);
    {
      u_93 = t;
      {
        t = SSL_explode_term(not_null(u_93));
        {
          w_93 = t;
          q_93 :
          if(match_cons(w_93, sym__2))
            {
              x_93 = ATgetArgument(w_93, 0);
              y_93 = ATgetArgument(w_93, 1);
              if(((t_93 != NULL) && (t_93 != y_93)))
                _fail(y_93);
              else
                t_93 = y_93;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_93);
      t = foldr_2(t, f_119, g_119);
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
      t = term_h_16;
      return(t);
    }
    t = crush_2(t, t_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL;
  e_94 = t;
  d_94 :
  if(match_cons(e_94, sym__2))
    {
      f_94 = ATgetArgument(e_94, 0);
      g_94 = ATgetArgument(e_94, 1);
      {
        ATerm q_35;
        q_35 = t;
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_94), not_null(g_94));
              ;
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
              t = SSL_gtr(not_null(f_94), not_null(g_94));
            }
        }
        t = q_35;
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
  ATerm m_94 = NULL;
  ATerm v_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
      n_94 = t;
      l_94 :
      if(match_cons(n_94, sym__2))
        {
          o_94 = ATgetArgument(n_94, 0);
          p_94 = ATgetArgument(n_94, 1);
          {
            if(((m_94 != NULL) && (m_94 != o_94)))
              _fail(o_94);
            else
              m_94 = o_94;
            if(((m_94 != NULL) && (m_94 != p_94)))
              _fail(p_94);
            else
              m_94 = p_94;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = v_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_122 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm y_35;
    y_35 = t;
    {
      ATerm s_94 = NULL;
      ATerm t_94 = NULL;
      t = term_q_31;
      {
        t = get_config_0(t);
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_94), term_t_16);
        t = geq_0(t);
      }
    }
    t = y_35;
    t = r_122(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm x_94 = NULL,z_94 = NULL;
    ATerm z_35;
    z_35 = t;
    {
      ATerm y_94 = NULL;
      t = run_time_0(t);
      {
        y_94 = t;
        if(((x_94 != NULL) && (x_94 != y_94)))
          _fail(y_94);
        else
          x_94 = y_94;
      }
    }
    t = z_35;
    {
      ATerm a_95 = NULL;
      t = term_y_24;
      {
        t = whoami_0(t);
        {
          a_95 = t;
          if(((z_94 != NULL) && (z_94 != a_95)))
            _fail(a_95);
          else
            z_94 = a_95;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_36), not_null(x_94)), term_a_36), not_null(z_94)));
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
    t = term_h_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_95 = NULL;
  h_95 = t;
  g_95 :
  if(match_cons(h_95, sym_Version_0))
    {
      ATerm l_95 = NULL,n_95 = NULL;
      ATerm c_36;
      c_36 = t;
      {
        ATerm m_95 = NULL;
        t = SSLgetAnnotations(not_null(h_95));
        {
          m_95 = t;
          if(((l_95 != NULL) && (l_95 != m_95)))
            _fail(m_95);
          else
            l_95 = m_95;
        }
      }
      t = c_36;
      {
        ATerm o_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_95));
        {
          o_95 = t;
          if(((n_95 != NULL) && (n_95 != o_95)))
            _fail(o_95);
          else
            n_95 = o_95;
        }
        t = not_null(n_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_124 (ATerm))
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_37;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
              {
                ATerm q_37 = t;
                int r_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_37);
                  }
                else
                  {
                    t = q_37;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, w_4);
      }
    }
  t = m_124(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  t = SSL_table_create(not_null(t_95));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_95 = NULL;
  x_95 = t;
  {
    ATerm s_37;
    s_37 = t;
    {
      t = term_t_37;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_37, term_u_37, not_null(x_95));
          t = table_put_0(t);
        }
      }
    }
    t = s_37;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_96 = NULL;
  b_96 = t;
  t = SSL_table_destroy(not_null(b_96));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_96 = NULL;
  f_96 = t;
  t = SSL_exit(not_null(f_96));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_127 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_109 (ATerm))
{
  ATerm i_96 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = Cons_2(t, n_109, i_96);
      }
    return(t);
  }
  t = i_96(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  r_96 = t;
  o_96 :
  if(((ATgetType(r_96) == AT_LIST) && !(ATisEmpty(r_96))))
    {
      p_96 = ATgetFirst((ATermList) r_96);
      q_96 = (ATerm) ATgetNext((ATermList) r_96);
      {
        ATerm u_96 = NULL;
        t = not_null(q_96);
        {
          ATerm x_37;
          x_37 = t;
          {
            ATerm v_96 = NULL,x_96 = NULL,z_96 = NULL;
            ATerm b_38;
            b_38 = t;
            {
              ATerm w_96 = NULL;
              t = i_0(t);
              {
                w_96 = t;
                if(((v_96 != NULL) && (v_96 != w_96)))
                  _fail(w_96);
                else
                  v_96 = w_96;
              }
            }
            t = b_38;
            {
              ATerm y_96 = NULL;
              t = not_null(p_96);
              {
                t = g_0(t);
                {
                  y_96 = t;
                  if(((x_96 != NULL) && (x_96 != y_96)))
                    _fail(y_96);
                  else
                    x_96 = y_96;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_96)), not_null(x_96));
                {
                  z_96 = t;
                  if(((u_96 != NULL) && (u_96 != z_96)))
                    _fail(z_96);
                  else
                    u_96 = z_96;
                }
              }
            }
          }
          t = x_37;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(u_96);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_96) == AT_LIST) && ATisEmpty(r_96)))
        {
          {
            t = term_y_24;
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
ATerm short_description_1 (ATerm t, ATerm a_127 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm k_97 = NULL,l_97 = NULL;
  k_97 = t;
  j_97 :
  if(match_cons(k_97, sym_Program_1))
    {
      l_97 = ATgetArgument(k_97, 0);
      {
        ATerm o_97 = NULL,q_97 = NULL;
        ATerm p_97 = NULL;
        t = SSLgetAnnotations(not_null(k_97));
        {
          p_97 = t;
          if(((o_97 != NULL) && (o_97 != p_97)))
            _fail(p_97);
          else
            o_97 = p_97;
        }
        {
          t = not_null(l_97);
          {
            ATerm s_97 = NULL;
            t = x_89(t);
            {
              q_97 = t;
              {
                ATerm t_97 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_97)), not_null(o_97));
                {
                  t_97 = t;
                  if(((s_97 != NULL) && (s_97 != t_97)))
                    _fail(t_97);
                  else
                    s_97 = t_97;
                }
                t = not_null(s_97);
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
  ATerm c_98 = NULL;
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_98 = NULL;
      t = term_k_35;
      {
        t = get_config_0(t);
        {
          d_98 = t;
          if(((c_98 != NULL) && (c_98 != d_98)))
            _fail(d_98);
          else
            c_98 = d_98;
        }
      }
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm e_98 = NULL;
            e_98 = t;
            if(((c_98 != NULL) && (c_98 != e_98)))
              _fail(e_98);
            else
              c_98 = e_98;
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
        t = not_null(c_98);
        return(t);
      }
      t = short_description_1(t, c_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = term_e_38;
      {
        t = echo_0(t);
        {
          t = term_h_38;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm f_98 = NULL;
                  ATerm g_98 = NULL;
                  g_98 = t;
                  if(((f_98 != NULL) && (f_98 != g_98)))
                    _fail(g_98);
                  else
                    f_98 = g_98;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_98)), term_i_38);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm h_98 = NULL;
                    ATerm i_98 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(c_98);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      i_98 = t;
                      if(((h_98 != NULL) && (h_98 != i_98)))
                        _fail(i_98);
                      else
                        h_98 = i_98;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_98)), term_j_38);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm s_98 = NULL,t_98 = NULL;
  s_98 = t;
  r_98 :
  if(match_cons(s_98, sym_Undefined_1))
    {
      t_98 = ATgetArgument(s_98, 0);
      {
        ATerm w_98 = NULL,y_98 = NULL;
        ATerm x_98 = NULL;
        t = SSLgetAnnotations(not_null(s_98));
        {
          x_98 = t;
          if(((w_98 != NULL) && (w_98 != x_98)))
            _fail(x_98);
          else
            w_98 = x_98;
        }
        {
          t = not_null(t_98);
          {
            ATerm a_99 = NULL;
            t = y_89(t);
            {
              y_98 = t;
              {
                ATerm b_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_98)), not_null(w_98));
                {
                  b_99 = t;
                  if(((a_99 != NULL) && (a_99 != b_99)))
                    _fail(b_99);
                  else
                    a_99 = b_99;
                }
                t = not_null(a_99);
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
ATerm fetch_1 (ATerm t, ATerm w_109 (ATerm))
{
  ATerm g_99 (ATerm t)
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_109, _id);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = Cons_2(t, _id, g_99);
      }
    return(t);
  }
  t = g_99(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_126 (ATerm))
{
  t = fetch_1(t, a_126);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
  i_99 = t;
  h_99 :
  if(((ATgetType(i_99) == AT_LIST) && ATisEmpty(i_99)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_99) == AT_LIST) && !(ATisEmpty(i_99))))
        {
          j_99 = ATgetFirst((ATermList) i_99);
          k_99 = (ATerm) ATgetNext((ATermList) i_99);
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
  ATerm o_38;
  o_38 = t;
  {
    ATerm n_99 = NULL;
    ATerm q_99 = NULL;
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        {
          ATerm o_99 = NULL;
          ATerm p_99 = NULL;
          p_99 = t;
          if(((o_99 != NULL) && (o_99 != p_99)))
            _fail(p_99);
          else
            o_99 = p_99;
          t = (ATerm) ATinsert(ATempty, not_null(o_99));
        }
      }
    {
      q_99 = t;
      if(((n_99 != NULL) && (n_99 != q_99)))
        _fail(q_99);
      else
        n_99 = q_99;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_32, not_null(n_99));
      t = printnl_0(t);
    }
  }
  t = o_38;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_k_35;
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
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_99 = NULL;
  x_99 = t;
  w_99 :
  if(match_cons(x_99, sym_Help_0))
    {
      ATerm z_99 = NULL,b_100 = NULL;
      ATerm t_38;
      t_38 = t;
      {
        ATerm a_100 = NULL;
        t = SSLgetAnnotations(not_null(x_99));
        {
          a_100 = t;
          if(((z_99 != NULL) && (z_99 != a_100)))
            _fail(a_100);
          else
            z_99 = a_100;
        }
      }
      t = t_38;
      {
        ATerm c_100 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_99));
        {
          c_100 = t;
          if(((b_100 != NULL) && (b_100 != c_100)))
            _fail(c_100);
          else
            b_100 = c_100;
        }
        t = not_null(b_100);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_102(t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm i_100 = NULL;
        i_100 = t;
        g_100 :
        if(!(match_string(i_100, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_z_38;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_a_39;
        return(t);
      }
      t = Option_3(t, g_5, h_5, l_5);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm j_100 = NULL;
          j_100 = t;
          h_100 :
          if(!(match_string(j_100, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_z_38;
          {
            t = set_config_0(t);
            {
              t = term_c_39;
              t = set_config_0(t);
            }
          }
          t = term_d_39;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_e_39;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
  m_100 = t;
  l_100 :
  if(match_cons(m_100, sym__2))
    {
      n_100 = ATgetArgument(m_100, 0);
      o_100 = ATgetArgument(m_100, 1);
      t = SSL_table_get(not_null(n_100), not_null(o_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL;
  v_100 = t;
  u_100 :
  if(match_cons(v_100, sym__3))
    {
      w_100 = ATgetArgument(v_100, 0);
      x_100 = ATgetArgument(v_100, 1);
      y_100 = ATgetArgument(v_100, 2);
      {
        ATerm f_39;
        f_39 = t;
        {
          ATerm c_101 = NULL;
          ATerm d_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_100), not_null(x_100));
          {
            ATerm g_39 = t;
            int h_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_39);
              }
            else
              {
                t = g_39;
                t = (ATerm) ATempty;
              }
            {
              d_101 = t;
              if(((c_101 != NULL) && (c_101 != d_101)))
                _fail(d_101);
              else
                c_101 = d_101;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_100), not_null(x_100), (ATerm) ATinsert(CheckATermList(not_null(c_101)), not_null(y_100)));
            t = table_put_0(t);
          }
        }
        t = f_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_127 (ATerm))
{
  ATerm h_101 = NULL;
  ATerm i_101 = NULL;
  t = term_y_24;
  {
    t = f_127(t);
    {
      i_101 = t;
      if(((h_101 != NULL) && (h_101 != i_101)))
        _fail(i_101);
      else
        h_101 = i_101;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_38, term_g_38, not_null(h_101));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL;
  o_101 = t;
  n_101 :
  if(match_string(o_101, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_101) == AT_LIST) && !(ATisEmpty(o_101))))
        {
          p_101 = ATgetFirst((ATermList) o_101);
          q_101 = (ATerm) ATgetNext((ATermList) o_101);
          {
            ATerm t_101 = NULL;
            ATerm i_39;
            i_39 = t;
            {
              t = not_null(p_101);
              t = a_0(t);
            }
            t = i_39;
            {
              ATerm u_101 = NULL;
              t = term_y_24;
              {
                t = b_0(t);
                {
                  u_101 = t;
                  if(((t_101 != NULL) && (t_101 != u_101)))
                    _fail(u_101);
                  else
                    t_101 = u_101;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_101)), not_null(t_101));
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
    ATerm z_101 = NULL;
    z_101 = t;
    y_101 :
    if(!(match_string(z_101, "--help")))
      {
        if(!(match_string(z_101, "-h")))
          {
            if(!(match_string(z_101, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_j_39;
    {
      t = set_config_0(t);
      t = term_k_39;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_l_39;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(((ATgetType(f_102) == AT_LIST) && !(ATisEmpty(f_102))))
    {
      g_102 = ATgetFirst((ATermList) f_102);
      h_102 = (ATerm) ATgetNext((ATermList) f_102);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_102)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_102)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL;
  t_102 = t;
  q_102 :
  if(((ATgetType(t_102) == AT_LIST) && !(ATisEmpty(t_102))))
    {
      u_102 = ATgetFirst((ATermList) t_102);
      v_102 = (ATerm) ATgetNext((ATermList) t_102);
      {
        ATerm b_103 = NULL,d_103 = NULL;
        ATerm c_103 = NULL;
        t = SSLgetAnnotations(not_null(t_102));
        {
          c_103 = t;
          if(((b_103 != NULL) && (b_103 != c_103)))
            _fail(c_103);
          else
            b_103 = c_103;
        }
        {
          t = not_null(u_102);
          {
            ATerm f_103 = NULL;
            t = c_81(t);
            {
              d_103 = t;
              {
                t = not_null(v_102);
                {
                  ATerm h_103 = NULL;
                  t = d_81(t);
                  {
                    f_103 = t;
                    {
                      ATerm i_103 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_103)), not_null(d_103)), not_null(b_103));
                      {
                        i_103 = t;
                        if(((h_103 != NULL) && (h_103 != i_103)))
                          _fail(i_103);
                        else
                          h_103 = i_103;
                      }
                      t = not_null(h_103);
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
  ATerm s_103 = NULL;
  s_103 = t;
  r_103 :
  if(((ATgetType(s_103) == AT_LIST) && ATisEmpty(s_103)))
    {
      {
        ATerm u_103 = NULL,y_103 = NULL;
        ATerm m_39;
        m_39 = t;
        {
          ATerm v_103 = NULL;
          t = SSLgetAnnotations(not_null(s_103));
          {
            v_103 = t;
            if(((u_103 != NULL) && (u_103 != v_103)))
              _fail(v_103);
            else
              u_103 = v_103;
          }
        }
        t = m_39;
        {
          ATerm z_103 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_103));
          {
            z_103 = t;
            if(((y_103 != NULL) && (y_103 != z_103)))
              _fail(z_103);
            else
              y_103 = z_103;
          }
          t = not_null(y_103);
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
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
  f_104 = t;
  e_104 :
  if(match_cons(f_104, sym__2))
    {
      g_104 = ATgetArgument(f_104, 0);
      h_104 = ATgetArgument(f_104, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_6, not_null(g_104), not_null(h_104));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_127 (ATerm))
{
  ATerm n_39;
  n_39 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = term_o_39;
      t = d_127(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = n_39;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm p_104 = NULL;
      ATerm p_39;
      p_39 = t;
      {
        ATerm n_104 = NULL;
        ATerm o_104 = NULL;
        o_104 = t;
        if(((n_104 != NULL) && (n_104 != o_104)))
          _fail(o_104);
        else
          n_104 = o_104;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_35, not_null(n_104));
          t = set_config_0(t);
        }
      }
      t = p_39;
      {
        ATerm q_104 = NULL;
        q_104 = t;
        if(((p_104 != NULL) && (p_104 != q_104)))
          _fail(q_104);
        else
          p_104 = q_104;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_104));
      }
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      ATerm q_39 = t;
      int r_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_39 = t;
          int t_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_39);
            }
          else
            {
              t = s_39;
              {
                t = d_127(t);
                t = Cons_2(t, _id, u_5);
              }
            }
          ;
          LocalPopChoice(r_39);
        }
      else
        {
          t = q_39;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_5, u_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
  ATerm u_39;
  u_39 = t;
  {
    ATerm z_104 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
    z_104 = t;
    v_104 :
    if(match_cons(z_104, sym__3))
      {
        c_105 = ATgetArgument(z_104, 0);
        d_105 = ATgetArgument(z_104, 1);
        e_105 = ATgetArgument(z_104, 2);
        {
          if(((w_104 != NULL) && (w_104 != c_105)))
            _fail(c_105);
          else
            w_104 = c_105;
          {
            if(((x_104 != NULL) && (x_104 != d_105)))
              _fail(d_105);
            else
              x_104 = d_105;
            {
              if(((y_104 != NULL) && (y_104 != e_105)))
                _fail(e_105);
              else
                y_104 = e_105;
              t = SSL_table_put(not_null(w_104), not_null(x_104), not_null(y_104));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_39;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_127 (ATerm))
{
  ATerm h_105 = NULL;
  ATerm v_39;
  v_39 = t;
  {
    t = term_w_39;
    t = table_put_0(t);
  }
  t = v_39;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm x_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_127(t);
          ;
          LocalPopChoice(y_39);
        }
      else
        {
          t = x_39;
          {
            ATerm z_39 = t;
            int a_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(a_40);
              }
            else
              {
                t = z_39;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, w_5);
    {
      ATerm x_5 (ATerm t)
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_40;
            d_40 = t;
            {
              ATerm e_40 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_37;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_40);
                }
              else
                {
                  t = e_40;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_40;
            {
              t = system_usage_0(t);
              {
                t = term_h_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_40);
          }
        else
          {
            t = b_40;
            {
              ATerm g_40 = t;
              int h_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_40;
                  i_40 = t;
                  {
                    t = term_y_38;
                    t = get_config_0(t);
                  }
                  t = i_40;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_16;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(h_40);
                }
              else
                {
                  t = g_40;
                  {
                    ATerm y_5 (ATerm t)
                    {
                      ATerm z_5 (ATerm t)
                      {
                        ATerm i_105 = NULL;
                        i_105 = t;
                        if(((h_105 != NULL) && (h_105 != i_105)))
                          _fail(i_105);
                        else
                          h_105 = i_105;
                        return(t);
                      }
                      t = Undefined_1(t, z_5);
                      return(t);
                    }
                    t = option_defined_1(t, y_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_105)), term_j_40));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_t_16;
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
      t = try_1(t, x_5);
      {
        ATerm k_40;
        k_40 = t;
        {
          t = term_f_38;
          t = table_destroy_0(t);
        }
        t = k_40;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm))
{
  t = parse_options_1(t, o_124);
  {
    t = store_options_0(t);
    {
      t = q_124(t);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_124);
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            {
              ATerm n_40 = t;
              int o_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_124(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(o_40);
                }
              else
                {
                  t = n_40;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_124(t);
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_124);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_6, f_124, g_124, f_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm r_40;
      r_40 = t;
      {
        ATerm l_105 = NULL;
        ATerm m_105 = NULL;
        t = term_k_35;
        {
          t = get_config_0(t);
          {
            m_105 = t;
            if(((l_105 != NULL) && (l_105 != m_105)))
              _fail(m_105);
            else
              l_105 = m_105;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATinsert(ATempty, not_null(l_105)));
          t = printnl_0(t);
        }
      }
      t = r_40;
      return(t);
    }
    t = if_verbose2_1(t, h_6);
    return(t);
  }
  t = iowrap_4(t, x_123, y_123, z_123, g_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_123 (ATerm), ATerm w_123 (ATerm))
{
  t = iowrap_3(t, v_123, w_123, default_usage_0);
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
