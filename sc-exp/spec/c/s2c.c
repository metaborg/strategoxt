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
Symbol sym_OpDeclQ_2;
Symbol sym_OpDeclInj_1;
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
Symbol sym_OpQ_2;
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
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_CongQ_2;
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
Symbol sym_SDefT_4;
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
  sym_OpDeclQ_2 = ATmakeSymbol("OpDeclQ", 2, ATfalse);
  ATprotectSymbol(sym_OpDeclQ_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
ATerm term_r_43;
ATerm term_d_43;
ATerm term_v_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_o_38;
ATerm term_x_37;
ATerm term_u_37;
ATerm term_f_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_x_29;
ATerm term_m_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_u_25;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
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
ATerm term_p_19;
ATerm term_n_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_m_11;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_b_7;
void init_constant_terms (void)
{
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Id_1, term_q_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_9, (ATerm) ATempty);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Id_1, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_f_9, (ATerm) ATempty);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_TypeName_2, term_g_9, term_h_9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Id_1, term_j_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Id_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_c_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, term_x_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_f_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Id_1, term_s_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Id_1, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_18, (ATerm) ATempty);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_l_18, term_h_9);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Id_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_r_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_18, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_x_18, term_h_9);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_c_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_19, term_h_9);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Id_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_20, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_20, term_h_9);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Id_1, term_x_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Id_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_e_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_c_18);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Id_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_k_21, term_u_15);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, term_c_18);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Id_1, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_22, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_i_22, term_u_15);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_22, (ATerm) ATempty);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Id_1, term_s_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Id_1, term_z_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_f_23, (ATerm) ATempty);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Stat_1, term_h_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_s_19);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_20, term_c_18);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Return_1, term_c_18);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Id_1, term_i_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_c_18, term_h_9);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_g_9, term_p_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Id_1, term_h_28);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Id_1, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_9, (ATerm) ATempty);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Id_1, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_29);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_30, (ATerm) ATempty);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_31, (ATerm) ATempty);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Some_1, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_9, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Id_1, term_l_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_31, (ATerm) ATempty);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Id_1, term_q_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Id_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_CallT_3, term_y_31, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_SDefT_4, term_w_31, (ATerm)ATempty, (ATerm)ATempty, term_z_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Op_2, term_g_32, (ATerm) ATempty);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_d_17);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_17);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_f_39, term_z_27);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_t_39, term_z_27);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym__2, term_f_42, term_z_27);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym__2, term_i_42, term_z_27);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_z_27);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__3, term_m_41, term_n_41, (ATerm) ATempty);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm n_130 (ATerm), ATerm o_130 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm g_109 (ATerm));
ATerm LiftCompound_0 (ATerm);
ATerm listbu1_1 (ATerm, ATerm w_2 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm e_107 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm v_86 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm m_96 (ATerm));
ATerm FunCall_2 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm d_108 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_108 (ATerm));
ATerm TranslateStrat_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm k_120 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm g_123 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm o_134 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm c_123 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm));
ATerm assert_1 (ATerm, ATerm m_134 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_114 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_127 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm w_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_127 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_125 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_121 (ATerm), ATerm k_121 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm u_119 (ATerm), ATerm v_119 (ATerm));
ATerm crush_2 (ATerm, ATerm n_123 (ATerm), ATerm o_123 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_126 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_128 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_131 (ATerm));
ATerm map_1 (ATerm, ATerm t_113 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_131 (ATerm));
ATerm Program_1 (ATerm, ATerm e_94 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_114 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_130 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_106 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_131 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_131 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm h_128 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_128 (ATerm), ATerm e_128 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,w_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym__2))
    {
      l_5 = ATgetArgument(k_5, 0);
      w_5 = ATgetArgument(k_5, 1);
      {
        ATerm c_6 = NULL;
        ATerm d_6 = NULL,f_6 = NULL;
        ATerm e_6 = NULL;
        t = not_null(l_5);
        {
          ATerm z_6 = t;
          int a_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(a_7);
            }
          else
            {
              t = z_6;
              t = (ATerm) ATempty;
            }
          {
            e_6 = t;
            if(((d_6 != NULL) && (d_6 != e_6)))
              _fail(e_6);
            else
              d_6 = e_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(w_5));
          {
            t = conc_0(t);
            {
              f_6 = t;
              if(((c_6 != NULL) && (c_6 != f_6)))
                _fail(f_6);
              else
                c_6 = f_6;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_7, not_null(l_5), not_null(c_6));
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
ATerm Option_2 (ATerm t, ATerm n_130 (ATerm), ATerm o_130 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = Option_3(t, n_130, o_130, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm p_6 = NULL;
        p_6 = t;
        j_6 :
        if(!(match_string(p_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        t = term_k_7;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_l_7;
            return(t);
          }
          t = debug_1(t, u_0);
          {
            ATerm m_7;
            m_7 = t;
            {
              t = term_s_7;
              {
                ATerm v_0 (ATerm t)
                {
                  t = term_t_7;
                  return(t);
                }
                t = assert_1(t, v_0);
              }
            }
            t = m_7;
          }
        }
        return(t);
      }
      t = Option_2(t, s_0, t_0);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm q_6 = NULL;
              q_6 = t;
              k_6 :
              if(!(match_string(q_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              ATerm r_6 = NULL;
              r_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), term_c_8);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_d_8;
                    return(t);
                  }
                  t = assert_1(t, b_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(r_6));
              }
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              t = term_e_8;
              return(t);
            }
            t = ArgOption_3(t, x_0, y_0, z_0);
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm c_1 (ATerm t)
              {
                ATerm t_6 = NULL;
                t_6 = t;
                m_6 :
                if(!(match_string(t_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                ATerm w_6 = NULL;
                ATerm f_8;
                f_8 = t;
                {
                  ATerm u_6 = NULL;
                  ATerm v_6 = NULL;
                  v_6 = t;
                  if(((u_6 != NULL) && (u_6 != v_6)))
                    _fail(v_6);
                  else
                    u_6 = v_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(u_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = f_8;
                {
                  ATerm x_6 = NULL;
                  x_6 = t;
                  if(((w_6 != NULL) && (w_6 != x_6)))
                    _fail(x_6);
                  else
                    w_6 = x_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(w_6));
                }
                return(t);
              }
              ATerm e_1 (ATerm t)
              {
                t = term_n_8;
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
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__3))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      g_7 = ATgetArgument(d_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_7)), term_o_8, not_null(g_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm p_7 = NULL;
  n_7 = t;
  {
    ATerm q_7 = NULL;
    t = not_null(n_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            q_7 = t;
            if(((p_7 != NULL) && (p_7 != q_7)))
              _fail(q_7);
            else
              p_7 = q_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_b_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__3))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      y_7 = ATgetArgument(v_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_7)), term_h_9)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm g_8 = NULL;
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = (ATerm) ATempty;
    }
  {
    ATerm h_8 = NULL,j_8 = NULL,l_8 = NULL;
    ATerm k_9;
    k_9 = t;
    {
      ATerm i_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        i_8 = t;
        if(((h_8 != NULL) && (h_8 != i_8)))
          _fail(i_8);
        else
          h_8 = i_8;
      }
    }
    t = k_9;
    {
      ATerm k_8 = NULL;
      t = InitTermIds_0(t);
      {
        k_8 = t;
        if(((j_8 != NULL) && (j_8 != k_8)))
          _fail(k_8);
        else
          j_8 = k_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), (ATerm) ATinsert(ATempty, not_null(j_8)));
        {
          t = conc_0(t);
          {
            l_8 = t;
            if(((g_8 != NULL) && (g_8 != l_8)))
              _fail(l_8);
            else
              g_8 = l_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(g_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm l_9 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_109(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = l_9;
        t = _one(t, p_8);
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm LiftCompound_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  r_8 :
  if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
    {
      v_8 = ATgetFirst((ATermList) u_8);
      y_8 = (ATerm) ATgetNext((ATermList) u_8);
      s_8 :
      if(match_cons(v_8, sym_Compound_2))
        {
          w_8 = ATgetArgument(v_8, 0);
          x_8 = ATgetArgument(v_8, 1);
          t_8 :
          if(((ATgetType(w_8) == AT_LIST) && ATisEmpty(w_8)))
            {
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), not_null(y_8));
                t = conc_0(t);
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
ATerm listbu1_1 (ATerm t, ATerm w_2 (ATerm))
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        t = listbu1_1(t, w_2);
        return(t);
      }
      t = Cons_2(t, _id, f_1);
      t = try_1(t, w_2);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      t = w_2(t);
    }
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  ATerm t_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(q_10)), not_null(k_10));
    return(t);
  }
  ATerm u_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(q_10), not_null(r_10));
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), not_null(r_10));
    t = conc_0(t);
    return(t);
  }
  ATerm w_11 (ATerm t)
  {
    ATerm e_11 = NULL;
    ATerm f_11 = NULL;
    t = not_null(r_10);
    {
      t = listbu1_1(t, LiftCompound_0);
      {
        f_11 = t;
        if(((e_11 != NULL) && (e_11 != f_11)))
          _fail(f_11);
        else
          e_11 = f_11;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(q_10), not_null(e_11));
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    ATerm j_11 = NULL;
    ATerm k_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(t_10));
    {
      t = conc_0(t);
      {
        k_11 = t;
        if(((j_11 != NULL) && (j_11 != k_11)))
          _fail(k_11);
        else
          j_11 = k_11;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(j_11), not_null(u_10));
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    ATerm p_11 = NULL,r_11 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm q_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(t_10));
      {
        t = conc_0(t);
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
      }
    }
    t = z_10;
    {
      ATerm s_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(v_10));
      {
        t = conc_0(t);
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(p_11), not_null(r_11));
    }
    return(t);
  }
  p_10 = t;
  m_9 :
  if(match_cons(p_10, sym_IfElse_3))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      k_10 = ATgetArgument(p_10, 2);
      n_9 :
      if(match_cons(k_10, sym_Compound_2))
        {
          l_10 = ATgetArgument(k_10, 0);
          m_10 = ATgetArgument(k_10, 1);
          o_9 :
          if(((ATgetType(m_10) == AT_LIST) && ATisEmpty(m_10)))
            {
              p_9 :
              if(((ATgetType(l_10) == AT_LIST) && ATisEmpty(l_10)))
                {
                  q_9 :
                  if(match_cons(r_10, sym_Compound_2))
                    {
                      s_10 = ATgetArgument(r_10, 0);
                      v_10 = ATgetArgument(r_10, 1);
                      r_9 :
                      if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                        {
                          s_9 :
                          if(((ATgetType(s_10) == AT_LIST) && ATisEmpty(s_10)))
                            {
                              {
                                ATerm a_11 = t;
                                int b_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_11(t);
                                    ;
                                    LocalPopChoice(b_11);
                                  }
                                else
                                  {
                                    t = a_11;
                                    t = u_11(t);
                                  }
                              }
                            }
                          else
                            {
                              t = u_11(t);
                            }
                        }
                      else
                        {
                          t_9 :
                          t = u_11(t);
                        }
                    }
                  else
                    {
                      t = u_11(t);
                    }
                }
              else
                {
                  u_9 :
                  if(match_cons(r_10, sym_Compound_2))
                    {
                      s_10 = ATgetArgument(r_10, 0);
                      v_10 = ATgetArgument(r_10, 1);
                      v_9 :
                      if(((ATgetType(s_10) == AT_LIST) && ATisEmpty(s_10)))
                        {
                          w_9 :
                          if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                            {
                              t = t_11(t);
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
              x_9 :
              y_9 :
              if(match_cons(r_10, sym_Compound_2))
                {
                  s_10 = ATgetArgument(r_10, 0);
                  v_10 = ATgetArgument(r_10, 1);
                  z_9 :
                  if(((ATgetType(s_10) == AT_LIST) && ATisEmpty(s_10)))
                    {
                      a_10 :
                      if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                        {
                          t = t_11(t);
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
          b_10 :
          if(match_cons(r_10, sym_Compound_2))
            {
              s_10 = ATgetArgument(r_10, 0);
              v_10 = ATgetArgument(r_10, 1);
              c_10 :
              if(((ATgetType(s_10) == AT_LIST) && ATisEmpty(s_10)))
                {
                  d_10 :
                  if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                    {
                      t = t_11(t);
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
      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
        {
          q_10 = ATgetFirst((ATermList) p_10);
          r_10 = (ATerm) ATgetNext((ATermList) p_10);
          e_10 :
          if(match_cons(q_10, sym_Compound_2))
            {
              n_10 = ATgetArgument(q_10, 0);
              o_10 = ATgetArgument(q_10, 1);
              f_10 :
              if(((ATgetType(n_10) == AT_LIST) && ATisEmpty(n_10)))
                {
                  t = v_11(t);
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
          if(match_cons(p_10, sym_Compound_2))
            {
              q_10 = ATgetArgument(p_10, 0);
              r_10 = ATgetArgument(p_10, 1);
              g_10 :
              if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
                {
                  s_10 = ATgetFirst((ATermList) r_10);
                  v_10 = (ATerm) ATgetNext((ATermList) r_10);
                  h_10 :
                  if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                    {
                      i_10 :
                      if(match_cons(s_10, sym_Compound_2))
                        {
                          t_10 = ATgetArgument(s_10, 0);
                          u_10 = ATgetArgument(s_10, 1);
                          {
                            ATerm c_11 = t;
                            int d_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(d_11);
                              }
                            else
                              {
                                t = c_11;
                                {
                                  ATerm g_11 = t;
                                  int h_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_11(t);
                                      ;
                                      LocalPopChoice(h_11);
                                    }
                                  else
                                    {
                                      t = g_11;
                                      t = y_11(t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = w_11(t);
                        }
                    }
                  else
                    {
                      j_10 :
                      if(match_cons(s_10, sym_Compound_2))
                        {
                          t_10 = ATgetArgument(s_10, 0);
                          u_10 = ATgetArgument(s_10, 1);
                          {
                            ATerm i_11 = t;
                            int l_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(l_11);
                              }
                            else
                              {
                                t = i_11;
                                t = y_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = w_11(t);
                        }
                    }
                }
              else
                {
                  t = w_11(t);
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
ATerm repeat_1 (ATerm t, ATerm e_107 (ATerm))
{
  ATerm d_12 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = e_107(t);
      t = d_12(t);
      return(t);
    }
    t = try_1(t, g_1);
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  l_12 = t;
  {
    ATerm q_12 = NULL;
    ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
    t = not_null(l_12);
    {
      q_12 = t;
      {
        t = SSL_explode_term(not_null(q_12));
        {
          s_12 = t;
          h_12 :
          if(match_cons(s_12, sym__2))
            {
              t_12 = ATgetArgument(s_12, 0);
              u_12 = ATgetArgument(s_12, 1);
              i_12 :
              if(match_string(t_12, ""))
                {
                  j_12 :
                  if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                    {
                      v_12 = ATgetFirst((ATermList) u_12);
                      w_12 = (ATerm) ATgetNext((ATermList) u_12);
                      k_12 :
                      if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
                        {
                          x_12 = ATgetFirst((ATermList) w_12);
                          y_12 = (ATerm) ATgetNext((ATermList) w_12);
                          {
                            if(((n_12 != NULL) && (n_12 != v_12)))
                              _fail(v_12);
                            else
                              n_12 = v_12;
                            {
                              if(((p_12 != NULL) && (p_12 != x_12)))
                                _fail(x_12);
                              else
                                p_12 = x_12;
                              if(((o_12 != NULL) && (o_12 != y_12)))
                                _fail(y_12);
                              else
                                o_12 = y_12;
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
    t = not_null(p_12);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm i_13 = NULL;
  g_13 = t;
  {
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm h_1 (ATerm t)
      {
        t = term_m_11;
        return(t);
      }
      t = rewrite_1(t, h_1);
      {
        j_13 = t;
        e_13 :
        if(match_cons(j_13, sym_Defined_2))
          {
            k_13 = ATgetArgument(j_13, 0);
            l_13 = ATgetArgument(j_13, 1);
            f_13 :
            if(match_string(k_13, "h_0"))
              {
                if(((i_13 != NULL) && (i_13 != l_13)))
                  _fail(l_13);
                else
                  i_13 = l_13;
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
    t = not_null(i_13);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_BuildDefault_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      {
        ATerm x_13 = NULL,z_13 = NULL;
        ATerm y_13 = NULL;
        t = SSLgetAnnotations(not_null(t_13));
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
        {
          t = not_null(u_13);
          {
            ATerm b_14 = NULL;
            t = v_86(t);
            {
              z_13 = t;
              {
                ATerm c_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(z_13)), not_null(x_13));
                {
                  c_14 = t;
                  if(((b_14 != NULL) && (b_14 != c_14)))
                    _fail(c_14);
                  else
                    b_14 = c_14;
                }
                t = not_null(b_14);
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
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Real_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL,w_14 = NULL;
            ATerm v_14 = NULL;
            t = SSLgetAnnotations(not_null(q_14));
            {
              v_14 = t;
              if(((u_14 != NULL) && (u_14 != v_14)))
                _fail(v_14);
              else
                u_14 = v_14;
            }
            {
              t = not_null(r_14);
              {
                ATerm y_14 = NULL;
                t = v_2(t);
                {
                  w_14 = t;
                  {
                    ATerm z_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(w_14)), not_null(u_14));
                    {
                      z_14 = t;
                      if(((y_14 != NULL) && (y_14 != z_14)))
                        _fail(z_14);
                      else
                        y_14 = z_14;
                    }
                    t = not_null(y_14);
                  }
                }
              }
            }
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm c_15 = NULL,e_15 = NULL;
              ATerm d_15 = NULL;
              t = SSLgetAnnotations(not_null(q_14));
              {
                d_15 = t;
                if(((c_15 != NULL) && (c_15 != d_15)))
                  _fail(d_15);
                else
                  c_15 = d_15;
              }
              {
                t = not_null(r_14);
                {
                  ATerm g_15 = NULL;
                  t = v_2(t);
                  {
                    e_15 = t;
                    {
                      ATerm h_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(e_15)), not_null(c_15));
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
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Str_1))
    {
      a_16 = ATgetArgument(z_15, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL,f_16 = NULL;
            ATerm e_16 = NULL;
            t = SSLgetAnnotations(not_null(z_15));
            {
              e_16 = t;
              if(((d_16 != NULL) && (d_16 != e_16)))
                _fail(e_16);
              else
                d_16 = e_16;
            }
            {
              t = not_null(a_16);
              {
                ATerm h_16 = NULL;
                t = u_2(t);
                {
                  f_16 = t;
                  {
                    ATerm i_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_16)), not_null(d_16));
                    {
                      i_16 = t;
                      if(((h_16 != NULL) && (h_16 != i_16)))
                        _fail(i_16);
                      else
                        h_16 = i_16;
                    }
                    t = not_null(h_16);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm l_16 = NULL,n_16 = NULL;
              ATerm m_16 = NULL;
              t = SSLgetAnnotations(not_null(z_15));
              {
                m_16 = t;
                if(((l_16 != NULL) && (l_16 != m_16)))
                  _fail(m_16);
                else
                  l_16 = m_16;
              }
              {
                t = not_null(a_16);
                {
                  ATerm p_16 = NULL;
                  t = u_2(t);
                  {
                    n_16 = t;
                    {
                      ATerm q_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(n_16)), not_null(l_16));
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
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Int_1))
    {
      j_17 = ATgetArgument(i_17, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_17 = NULL,o_17 = NULL;
            ATerm n_17 = NULL;
            t = SSLgetAnnotations(not_null(i_17));
            {
              n_17 = t;
              if(((m_17 != NULL) && (m_17 != n_17)))
                _fail(n_17);
              else
                m_17 = n_17;
            }
            {
              t = not_null(j_17);
              {
                ATerm q_17 = NULL;
                t = t_2(t);
                {
                  o_17 = t;
                  {
                    ATerm r_17 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(o_17)), not_null(m_17));
                    {
                      r_17 = t;
                      if(((q_17 != NULL) && (q_17 != r_17)))
                        _fail(r_17);
                      else
                        q_17 = r_17;
                    }
                    t = not_null(q_17);
                  }
                }
              }
            }
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm u_17 = NULL,w_17 = NULL;
              ATerm v_17 = NULL;
              t = SSLgetAnnotations(not_null(i_17));
              {
                v_17 = t;
                if(((u_17 != NULL) && (u_17 != v_17)))
                  _fail(v_17);
                else
                  u_17 = v_17;
              }
              {
                t = not_null(j_17);
                {
                  ATerm y_17 = NULL;
                  t = t_2(t);
                  {
                    w_17 = t;
                    {
                      ATerm z_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(w_17)), not_null(u_17));
                      {
                        z_17 = t;
                        if(((y_17 != NULL) && (y_17 != z_17)))
                          _fail(z_17);
                        else
                          y_17 = z_17;
                      }
                      t = not_null(y_17);
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
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Anno_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = NULL,b_19 = NULL;
            ATerm a_19 = NULL;
            t = SSLgetAnnotations(not_null(t_18));
            {
              a_19 = t;
              if(((z_18 != NULL) && (z_18 != a_19)))
                _fail(a_19);
              else
                z_18 = a_19;
            }
            {
              t = not_null(u_18);
              {
                ATerm d_19 = NULL;
                t = r_2(t);
                {
                  b_19 = t;
                  {
                    t = not_null(v_18);
                    {
                      ATerm f_19 = NULL;
                      t = s_2(t);
                      {
                        d_19 = t;
                        {
                          ATerm g_19 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(b_19), not_null(d_19)), not_null(z_18));
                          {
                            g_19 = t;
                            if(((f_19 != NULL) && (f_19 != g_19)))
                              _fail(g_19);
                            else
                              f_19 = g_19;
                          }
                          t = not_null(f_19);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm k_19 = NULL,m_19 = NULL;
              ATerm l_19 = NULL;
              t = SSLgetAnnotations(not_null(t_18));
              {
                l_19 = t;
                if(((k_19 != NULL) && (k_19 != l_19)))
                  _fail(l_19);
                else
                  k_19 = l_19;
              }
              {
                t = not_null(u_18);
                {
                  ATerm o_19 = NULL;
                  t = r_2(t);
                  {
                    m_19 = t;
                    {
                      t = not_null(v_18);
                      {
                        ATerm q_19 = NULL;
                        t = s_2(t);
                        {
                          o_19 = t;
                          {
                            ATerm r_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(m_19), not_null(o_19)), not_null(k_19));
                            {
                              r_19 = t;
                              if(((q_19 != NULL) && (q_19 != r_19)))
                                _fail(r_19);
                              else
                                q_19 = r_19;
                            }
                            t = not_null(q_19);
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
  ATerm g_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm f_20 = NULL;
        f_20 = t;
        c_20 :
        if(!(match_string(f_20, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, i_1, Nil_0);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = g_12;
      {
        ATerm r_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              ATerm g_20 = NULL;
              g_20 = t;
              d_20 :
              if(!(match_string(g_20, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, l_1);
              return(t);
            }
            t = Op_2(t, j_1, k_1);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = r_12;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm a_13 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_20 = NULL;
                    h_20 = t;
                    e_20 :
                    if(!(match_string(h_20, "Nil")))
                      {
                        if(!(match_string(h_20, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_13;
                  }
                return(t);
              }
              t = Op_2(t, m_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Op_2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      {
        ATerm u_20 = NULL,w_20 = NULL;
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
        {
          t = not_null(p_20);
          {
            ATerm y_20 = NULL;
            t = e_86(t);
            {
              w_20 = t;
              {
                t = not_null(q_20);
                {
                  ATerm a_21 = NULL;
                  t = f_86(t);
                  {
                    y_20 = t;
                    {
                      ATerm b_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_20), not_null(y_20)), not_null(u_20));
                      {
                        b_21 = t;
                        if(((a_21 != NULL) && (a_21 != b_21)))
                          _fail(b_21);
                        else
                          a_21 = b_21;
                      }
                      t = not_null(a_21);
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
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym__2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      {
        ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
        ATerm w_21 = NULL;
        t = not_null(p_21);
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, n_1);
              t = proper_list_0(t);
              ;
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              {
                ATerm d_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    ;
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = d_13;
                    {
                      ATerm m_13 = t;
                      int n_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          ;
                          LocalPopChoice(n_13);
                        }
                      else
                        {
                          t = m_13;
                          {
                            ATerm o_13 = t;
                            int p_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                ;
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
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(r_13);
                                    }
                                  else
                                    {
                                      t = q_13;
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
            ATerm x_21 = NULL,z_21 = NULL;
            t = new_0(t);
            {
              w_21 = t;
              {
                if(((t_21 != NULL) && (t_21 != w_21)))
                  _fail(w_21);
                else
                  t_21 = w_21;
                {
                  ATerm y_21 = NULL;
                  y_21 = t;
                  if(((x_21 != NULL) && (x_21 != y_21)))
                    _fail(y_21);
                  else
                    x_21 = y_21;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(x_21));
                    {
                      ATerm a_22 = NULL,c_22 = NULL;
                      t = conc_strings_0(t);
                      {
                        z_21 = t;
                        {
                          if(((u_21 != NULL) && (u_21 != z_21)))
                            _fail(z_21);
                          else
                            u_21 = z_21;
                          {
                            ATerm w_13;
                            w_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), (ATerm) ATmakeAppl(sym_Defined_2, term_a_14, not_null(u_21)));
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_d_14;
                                  return(t);
                                }
                                t = assert_1(t, o_1);
                              }
                            }
                            t = w_13;
                            {
                              ATerm b_22 = NULL;
                              ATerm e_14 = t;
                              int f_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(f_14);
                                }
                              else
                                {
                                  t = e_14;
                                  t = (ATerm) ATempty;
                                }
                              {
                                b_22 = t;
                                if(((a_22 != NULL) && (a_22 != b_22)))
                                  _fail(b_22);
                                else
                                  a_22 = b_22;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(a_22)), (ATerm) ATmakeAppl(sym__3, not_null(t_21), not_null(u_21), not_null(q_21)));
                                {
                                  c_22 = t;
                                  {
                                    if(((v_21 != NULL) && (v_21 != c_22)))
                                      _fail(c_22);
                                    else
                                      v_21 = c_22;
                                    {
                                      ATerm g_14;
                                      g_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_14, not_null(v_21)));
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = term_m_11;
                                            return(t);
                                          }
                                          t = assert_1(t, p_1);
                                        }
                                      }
                                      t = g_14;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(u_21));
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
  ATerm r_22 = NULL;
  r_22 = t;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
        t = not_null(r_22);
        {
          ATerm q_1 (ATerm t)
          {
            t = term_d_14;
            return(t);
          }
          t = rewrite_1(t, q_1);
          {
            v_22 = t;
            m_22 :
            if(match_cons(v_22, sym_Defined_2))
              {
                w_22 = ATgetArgument(v_22, 0);
                x_22 = ATgetArgument(v_22, 1);
                n_22 :
                if(match_string(w_22, "e_0"))
                  {
                    if(((u_22 != NULL) && (u_22 != x_22)))
                      _fail(x_22);
                    else
                      u_22 = x_22;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(u_22));
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm a_23 = NULL;
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          t = not_null(r_22);
          {
            ATerm r_1 (ATerm t)
            {
              t = term_d_14;
              return(t);
            }
            t = rewrite_1(t, r_1);
            {
              b_23 = t;
              p_22 :
              if(match_cons(b_23, sym_Defined_2))
                {
                  c_23 = ATgetArgument(b_23, 0);
                  d_23 = ATgetArgument(b_23, 1);
                  q_22 :
                  if(match_string(c_23, "c_0"))
                    {
                      if(((a_23 != NULL) && (a_23 != d_23)))
                        _fail(d_23);
                      else
                        a_23 = d_23;
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
          t = not_null(a_23);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm k_23 = NULL,m_23 = NULL;
        ATerm m_14;
        m_14 = t;
        {
          ATerm l_23 = NULL;
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
        t = m_14;
        {
          ATerm n_23 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm n_14 = t;
              int o_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(o_14);
                }
              else
                {
                  t = n_14;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, s_1);
            {
              n_23 = t;
              if(((m_23 != NULL) && (m_23 != n_23)))
                _fail(n_23);
              else
                m_23 = n_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(m_23));
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym__2))
    {
      v_23 = ATgetArgument(u_23, 0);
      w_23 = ATgetArgument(u_23, 1);
      {
        ATerm z_23 = NULL;
        ATerm a_24 = NULL;
        t = new_0(t);
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_23)), term_h_9), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(w_23))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(v_23), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_23)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  j_24 = t;
  h_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      m_24 = ATgetArgument(j_24, 1);
      i_24 :
      if(match_cons(k_24, sym_Var_1))
        {
          l_24 = ATgetArgument(k_24, 0);
          {
            ATerm q_24 = NULL,s_24 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm r_24 = NULL;
              t = SSLgetAnnotations(not_null(k_24));
              {
                r_24 = t;
                if(((q_24 != NULL) && (q_24 != r_24)))
                  _fail(r_24);
                else
                  q_24 = r_24;
              }
            }
            t = x_14;
            {
              ATerm t_24 = NULL,v_24 = NULL;
              ATerm a_15;
              a_15 = t;
              {
                ATerm u_24 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_24));
                {
                  u_24 = t;
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                }
              }
              t = a_15;
              {
                t = SSLsetAnnotations(not_null(t_24), not_null(q_24));
                {
                  v_24 = t;
                  if(((s_24 != NULL) && (s_24 != v_24)))
                    _fail(v_24);
                  else
                    s_24 = v_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Match_2, not_null(s_24), not_null(m_24));
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  x_25 = t;
  v_25 :
  if(match_cons(x_25, sym_Anno_2))
    {
      y_25 = ATgetArgument(x_25, 0);
      w_25 = ATgetArgument(x_25, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_25)), not_null(y_25))));
    }
  else
    {
      if(match_cons(x_25, sym_Op_2))
        {
          y_25 = ATgetArgument(x_25, 0);
          w_25 = ATgetArgument(x_25, 1);
          {
            ATerm d_26 = NULL;
            ATerm e_26 = NULL,g_26 = NULL;
            ATerm f_26 = NULL;
            t = not_null(w_25);
            {
              t = length_0(t);
              {
                f_26 = t;
                if(((e_26 != NULL) && (e_26 != f_26)))
                  _fail(f_26);
                else
                  e_26 = f_26;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(e_26));
              {
                t = ConstructorName_0(t);
                {
                  g_26 = t;
                  if(((d_26 != NULL) && (d_26 != g_26)))
                    _fail(g_26);
                  else
                    d_26 = g_26;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(CheckATermList(not_null(w_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_26)))));
          }
        }
      else
        {
          if(match_cons(x_25, sym_BuildDefault_1))
            {
              y_25 = ATgetArgument(x_25, 0);
              t = not_null(y_25);
            }
          else
            {
              if(match_cons(x_25, sym_Var_1))
                {
                  y_25 = ATgetArgument(x_25, 0);
                  {
                    ATerm l_15 = t;
                    int m_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
                        t = SSLgetAnnotations(not_null(x_25));
                        {
                          k_26 = t;
                          l_25 :
                          if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
                            {
                              l_26 = ATgetFirst((ATermList) k_26);
                              m_26 = (ATerm) ATgetNext((ATermList) k_26);
                              m_25 :
                              if(match_string(l_26, "unbound"))
                                {
                                  n_25 :
                                  if(((ATgetType(m_26) == AT_LIST) && ATisEmpty(m_26)))
                                    {
                                      {
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
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_25))));
                        ;
                        LocalPopChoice(m_15);
                      }
                    else
                      {
                        t = l_15;
                        {
                          ATerm p_15 = t;
                          int q_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_26 = NULL;
                              t = SSLgetAnnotations(not_null(x_25));
                              {
                                p_26 = t;
                                o_25 :
                                if(((ATgetType(p_26) == AT_LIST) && ATisEmpty(p_26)))
                                  {
                                    {
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_25))));
                              ;
                              LocalPopChoice(q_15);
                            }
                          else
                            {
                              t = p_15;
                              {
                                ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
                                t = SSLgetAnnotations(not_null(x_25));
                                {
                                  s_26 = t;
                                  p_25 :
                                  if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
                                    {
                                      t_26 = ATgetFirst((ATermList) s_26);
                                      u_26 = (ATerm) ATgetNext((ATermList) s_26);
                                      q_25 :
                                      if(match_string(t_26, "bound"))
                                        {
                                          r_25 :
                                          if(((ATgetType(u_26) == AT_LIST) && ATisEmpty(u_26)))
                                            {
                                              {
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
                                t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_25));
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(x_25, sym_Str_1))
                    {
                      y_25 = ATgetArgument(x_25, 0);
                      {
                        ATerm w_26 = NULL;
                        ATerm x_26 = NULL;
                        t = not_null(y_25);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              x_26 = t;
                              if(((w_26 != NULL) && (w_26 != x_26)))
                                _fail(x_26);
                              else
                                w_26 = x_26;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_15), term_u_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_26))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(x_25, sym_Real_1))
                        {
                          y_25 = ATgetArgument(x_25, 0);
                          {
                            ATerm z_26 = NULL;
                            ATerm a_27 = NULL;
                            t = not_null(y_25);
                            {
                              t = real_to_string_0(t);
                              {
                                a_27 = t;
                                if(((z_26 != NULL) && (z_26 != a_27)))
                                  _fail(a_27);
                                else
                                  z_26 = a_27;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_26)))));
                          }
                        }
                      else
                        {
                          if(match_cons(x_25, sym_Int_1))
                            {
                              y_25 = ATgetArgument(x_25, 0);
                              {
                                ATerm c_27 = NULL;
                                ATerm d_27 = NULL;
                                t = not_null(y_25);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    d_27 = t;
                                    if(((c_27 != NULL) && (c_27 != d_27)))
                                      _fail(d_27);
                                    else
                                      c_27 = d_27;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_27)))));
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
ATerm Id_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Id_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(x_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(y_27);
          {
            ATerm f_28 = NULL;
            t = m_96(t);
            {
              d_28 = t;
              {
                ATerm g_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(d_28)), not_null(b_28));
                {
                  g_28 = t;
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                }
                t = not_null(f_28);
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
ATerm FunCall_2 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym_FunCall_2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      {
        ATerm x_28 = NULL,z_28 = NULL;
        ATerm y_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
        {
          t = not_null(s_28);
          {
            ATerm b_29 = NULL;
            t = q_99(t);
            {
              z_28 = t;
              {
                t = not_null(t_28);
                {
                  ATerm d_29 = NULL;
                  t = r_99(t);
                  {
                    b_29 = t;
                    {
                      ATerm e_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(z_28), not_null(b_29)), not_null(x_28));
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
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  y_29 :
  if(match_cons(i_30, sym_Op_2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      z_29 :
      if(match_string(j_30, "Cons"))
        {
          a_30 :
          if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
            {
              e_30 = ATgetFirst((ATermList) k_30);
              f_30 = (ATerm) ATgetNext((ATermList) k_30);
              b_30 :
              if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
                {
                  g_30 = ATgetFirst((ATermList) f_30);
                  h_30 = (ATerm) ATgetNext((ATermList) f_30);
                  c_30 :
                  if(((ATgetType(h_30) == AT_LIST) && ATisEmpty(h_30)))
                    {
                      {
                        ATerm n_30 = NULL;
                        ATerm a_31 = NULL;
                        t = not_null(g_30);
                        {
                          ATerm j_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
                              o_30 = t;
                              p_29 :
                              if(match_cons(o_30, sym_TypeCast_2))
                                {
                                  p_30 = ATgetArgument(o_30, 0);
                                  w_30 = ATgetArgument(o_30, 1);
                                  q_29 :
                                  if(match_cons(p_30, sym_TypeName_2))
                                    {
                                      q_30 = ATgetArgument(p_30, 0);
                                      v_30 = ATgetArgument(p_30, 1);
                                      r_29 :
                                      if(match_cons(q_30, sym_TypeSpec_3))
                                        {
                                          r_30 = ATgetArgument(q_30, 0);
                                          s_30 = ATgetArgument(q_30, 1);
                                          u_30 = ATgetArgument(q_30, 2);
                                          s_29 :
                                          if(((ATgetType(r_30) == AT_LIST) && ATisEmpty(r_30)))
                                            {
                                              t_29 :
                                              if(match_cons(s_30, sym_TypeId_1))
                                                {
                                                  t_30 = ATgetArgument(s_30, 0);
                                                  u_29 :
                                                  if(match_string(t_30, "ATerm"))
                                                    {
                                                      v_29 :
                                                      if(((ATgetType(u_30) == AT_LIST) && ATisEmpty(u_30)))
                                                        {
                                                          w_29 :
                                                          if(match_cons(v_30, sym_None_0))
                                                            {
                                                              t = not_null(w_30);
                                                              {
                                                                ATerm o_16 = t;
                                                                int r_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm t_1 (ATerm t)
                                                                    {
                                                                      ATerm y_30 = NULL;
                                                                      y_30 = t;
                                                                      n_29 :
                                                                      if(!(match_string(y_30, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, t_1);
                                                                    ;
                                                                    LocalPopChoice(r_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_16;
                                                                    {
                                                                      ATerm u_1 (ATerm t)
                                                                      {
                                                                        ATerm w_1 (ATerm t)
                                                                        {
                                                                          ATerm z_30 = NULL;
                                                                          z_30 = t;
                                                                          o_29 :
                                                                          if(!(match_string(z_30, "ATinsert")))
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
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = j_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, not_null(g_30)));
                            }
                          {
                            a_31 = t;
                            if(((n_30 != NULL) && (n_30 != a_31)))
                              _fail(a_31);
                            else
                              n_30 = a_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_30)), not_null(n_30))));
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
          if(match_string(j_30, "Nil"))
            {
              d_30 :
              if(((ATgetType(k_30) == AT_LIST) && ATisEmpty(k_30)))
                {
                  t = term_y_16;
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
ATerm bottomup_1 (ATerm t, ATerm d_108 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = bottomup_1(t, d_108);
    return(t);
  }
  t = _all(t, y_1);
  t = d_108(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
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
ATerm topdown_1 (ATerm t, ATerm c_108 (ATerm))
{
  t = c_108(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = topdown_1(t, c_108);
      return(t);
    }
    t = _all(t, b_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  ATerm m_56 (ATerm t)
  {
    ATerm n_50 = NULL,h_51 = NULL;
    ATerm b_17;
    b_17 = t;
    {
      ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
      t = not_null(p_37);
      {
        ATerm c_17 = t;
        if((PushChoice() == 0))
          {
            ATerm o_50 = NULL;
            o_50 = t;
            v_33 :
            if(!(match_string(o_50, "Nil")))
              {
                if(!(match_string(o_50, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), term_d_17);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
              p_50 = t;
              a_34 :
              if(match_cons(p_50, sym__2))
                {
                  q_50 = ATgetArgument(p_50, 0);
                  r_50 = ATgetArgument(p_50, 1);
                  {
                    ATerm y_50 = NULL,c_51 = NULL;
                    ATerm e_17;
                    e_17 = t;
                    {
                      ATerm z_50 = NULL,b_51 = NULL;
                      ATerm a_51 = NULL;
                      t = not_null(r_50);
                      {
                        t = int_to_string_0(t);
                        {
                          a_51 = t;
                          if(((z_50 != NULL) && (z_50 != a_51)))
                            _fail(a_51);
                          else
                            z_50 = a_51;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_50))), not_null(o_37))));
                        {
                          ATerm k_17 = t;
                          int l_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(l_17);
                            }
                          else
                            {
                              t = k_17;
                              t = MatchArg2_0(t);
                            }
                          {
                            b_51 = t;
                            if(((y_50 != NULL) && (y_50 != b_51)))
                              _fail(b_51);
                            else
                              y_50 = b_51;
                          }
                        }
                      }
                    }
                    t = e_17;
                    {
                      ATerm d_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_50), term_p_17);
                      {
                        t = add_0(t);
                        {
                          d_51 = t;
                          if(((c_51 != NULL) && (c_51 != d_51)))
                            _fail(d_51);
                          else
                            c_51 = d_51;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), not_null(c_51));
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
              e_51 = t;
              c_34 :
              if(match_cons(e_51, sym__2))
                {
                  f_51 = ATgetArgument(e_51, 0);
                  g_51 = ATgetArgument(e_51, 1);
                  if(((n_50 != NULL) && (n_50 != f_51)))
                    _fail(f_51);
                  else
                    n_50 = f_51;
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
    t = b_17;
    {
      ATerm i_51 = NULL,k_51 = NULL;
      ATerm j_51 = NULL;
      t = not_null(y_36);
      {
        t = length_0(t);
        {
          j_51 = t;
          if(((i_51 != NULL) && (i_51 != j_51)))
            _fail(j_51);
          else
            i_51 = j_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(i_51));
        {
          t = ConstructorName_0(t);
          {
            k_51 = t;
            if(((h_51 != NULL) && (h_51 != k_51)))
              _fail(k_51);
            else
              h_51 = k_51;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_51))), not_null(o_37))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
    }
    return(t);
  }
  ATerm n_56 (ATerm t)
  {
    ATerm n_51 = NULL;
    ATerm o_51 = NULL;
    t = not_null(p_37);
    {
      t = real_to_string_0(t);
      {
        o_51 = t;
        if(((n_51 != NULL) && (n_51 != o_51)))
          _fail(o_51);
        else
          n_51 = o_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_g_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_18, not_null(o_37)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(n_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
    return(t);
  }
  ATerm o_56 (ATerm t)
  {
    ATerm r_51 = NULL;
    ATerm s_51 = NULL;
    t = not_null(p_37);
    {
      t = int_to_string_0(t);
      {
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_o_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_y_18, not_null(o_37)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
    return(t);
  }
  ATerm p_56 (ATerm t)
  {
    ATerm v_51 = NULL;
    ATerm w_51 = NULL;
    t = not_null(p_37);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          w_51 = t;
          if(((v_51 != NULL) && (v_51 != w_51)))
            _fail(w_51);
          else
            v_51 = w_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_19, not_null(o_37)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_s_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_15), term_u_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_51)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
    return(t);
  }
  ATerm q_56 (ATerm t)
  {
    ATerm a_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      a_52 = t;
      i_34 :
      if(((ATgetType(a_52) == AT_LIST) && ATisEmpty(a_52)))
        {
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_s_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(o_37))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, not_null(o_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_o_8, not_null(o_37))));
    return(t);
  }
  ATerm r_56 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      e_52 = t;
      j_34 :
      if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
        {
          f_52 = ATgetFirst((ATermList) e_52);
          g_52 = (ATerm) ATgetNext((ATermList) e_52);
          k_34 :
          if(match_string(f_52, "bound"))
            {
              l_34 :
              if(((ATgetType(g_52) == AT_LIST) && ATisEmpty(g_52)))
                {
                  {
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(o_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, not_null(o_37)))))));
    return(t);
  }
  ATerm s_56 (ATerm t)
  {
    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      k_52 = t;
      m_34 :
      if(((ATgetType(k_52) == AT_LIST) && !(ATisEmpty(k_52))))
        {
          l_52 = ATgetFirst((ATermList) k_52);
          m_52 = (ATerm) ATgetNext((ATermList) k_52);
          n_34 :
          if(match_string(l_52, "unbound"))
            {
              o_34 :
              if(((ATgetType(m_52) == AT_LIST) && ATisEmpty(m_52)))
                {
                  {
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
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_o_8, not_null(o_37)));
    return(t);
  }
  ATerm t_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(y_36), not_null(o_37))), (ATerm) ATmakeAppl(sym_Match_2, not_null(p_37), not_null(o_37))));
    return(t);
  }
  ATerm u_56 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  ATerm v_56 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  ATerm w_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(r_37), term_c_18);
    return(t);
  }
  ATerm x_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), term_v_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_37)), term_o_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_37)), term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm y_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), term_v_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm z_56 (ATerm t)
  {
    ATerm l_53 = NULL,a_54 = NULL,c_54 = NULL;
    ATerm m_20;
    m_20 = t;
    {
      ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
      t = not_null(h_37);
      {
        ATerm r_20 = t;
        if((PushChoice() == 0))
          {
            ATerm m_53 = NULL;
            m_53 = t;
            p_34 :
            if(!(match_string(m_53, "Nil")))
              {
                if(!(match_string(m_53, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_20;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), term_d_17);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
              n_53 = t;
              t_34 :
              if(match_cons(n_53, sym__2))
                {
                  o_53 = ATgetArgument(n_53, 0);
                  q_53 = ATgetArgument(n_53, 1);
                  u_34 :
                  if(match_cons(o_53, sym_Var_1))
                    {
                      p_53 = ATgetArgument(o_53, 0);
                      {
                        ATerm t_53 = NULL,v_53 = NULL;
                        ATerm s_20;
                        s_20 = t;
                        {
                          ATerm u_53 = NULL;
                          t = not_null(q_53);
                          {
                            t = int_to_string_0(t);
                            {
                              u_53 = t;
                              if(((t_53 != NULL) && (t_53 != u_53)))
                                _fail(u_53);
                              else
                                t_53 = u_53;
                            }
                          }
                        }
                        t = s_20;
                        {
                          ATerm w_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), term_p_17);
                          {
                            t = add_0(t);
                            {
                              w_53 = t;
                              if(((v_53 != NULL) && (v_53 != w_53)))
                                _fail(w_53);
                              else
                                v_53 = w_53;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_53)), term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_53))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))))), not_null(v_53));
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
              x_53 = t;
              w_34 :
              if(match_cons(x_53, sym__2))
                {
                  y_53 = ATgetArgument(x_53, 0);
                  z_53 = ATgetArgument(x_53, 1);
                  if(((l_53 != NULL) && (l_53 != y_53)))
                    _fail(y_53);
                  else
                    l_53 = y_53;
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
    t = m_20;
    {
      ATerm t_20;
      t_20 = t;
      {
        ATerm b_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(f_37));
        {
          t = ConstructorName_0(t);
          {
            b_54 = t;
            if(((a_54 != NULL) && (a_54 != b_54)))
              _fail(b_54);
            else
              a_54 = b_54;
          }
        }
      }
      t = t_20;
      {
        ATerm d_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), (ATerm) ATinsert(ATempty, not_null(j_37)));
        {
          t = conc_0(t);
          {
            d_54 = t;
            if(((c_54 != NULL) && (c_54 != d_54)))
              _fail(d_54);
            else
              c_54 = d_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
      }
    }
    return(t);
  }
  ATerm a_57 (ATerm t)
  {
    ATerm k_54 = NULL;
    ATerm l_54 = NULL;
    t = not_null(h_37);
    {
      t = real_to_string_0(t);
      {
        l_54 = t;
        if(((k_54 != NULL) && (k_54 != l_54)))
          _fail(l_54);
        else
          k_54 = l_54;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm b_57 (ATerm t)
  {
    ATerm s_54 = NULL;
    ATerm t_54 = NULL;
    t = not_null(h_37);
    {
      t = int_to_string_0(t);
      {
        t_54 = t;
        if(((s_54 != NULL) && (s_54 != t_54)))
          _fail(t_54);
        else
          s_54 = t_54;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm c_57 (ATerm t)
  {
    ATerm a_55 = NULL;
    ATerm b_55 = NULL;
    t = not_null(h_37);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          b_55 = t;
          if(((a_55 != NULL) && (a_55 != b_55)))
            _fail(b_55);
          else
            a_55 = b_55;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_55)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm d_57 (ATerm t)
  {
    t = not_null(l_37);
    return(t);
  }
  ATerm e_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_37)), (ATerm) ATmakeAppl(sym_Case_3, not_null(o_37), not_null(l_37), not_null(m_37)));
    return(t);
  }
  ATerm f_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_37)));
    return(t);
  }
  ATerm g_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_s_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))));
    return(t);
  }
  ATerm h_57 (ATerm t)
  {
    t = not_null(o_37);
    {
      ATerm g_21 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_21;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_37)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_37))));
    return(t);
  }
  ATerm i_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_o_8, term_c_18));
    return(t);
  }
  ATerm j_57 (ATerm t)
  {
    ATerm p_55 = NULL;
    ATerm q_55 = NULL;
    t = not_null(r_37);
    {
      t = construct_term_caching_0(t);
      {
        q_55 = t;
        if(((p_55 != NULL) && (p_55 != q_55)))
          _fail(q_55);
        else
          p_55 = q_55;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, not_null(p_55)));
    return(t);
  }
  q_37 = t;
  d_35 :
  if(match_cons(q_37, sym_Let_2))
    {
      r_37 = ATgetArgument(q_37, 0);
      o_37 = ATgetArgument(q_37, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(r_37), (ATerm) ATinsert(ATempty, not_null(o_37)));
    }
  else
    {
      if(match_cons(q_37, sym_Where_1))
        {
          r_37 = ATgetArgument(q_37, 0);
          {
            ATerm v_37 = NULL;
            ATerm w_37 = NULL;
            t = new_0(t);
            {
              w_37 = t;
              if(((v_37 != NULL) && (v_37 != w_37)))
                _fail(w_37);
              else
                v_37 = w_37;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_h_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_37))))), not_null(r_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_o_8, term_c_18))));
          }
        }
      else
        {
          if(match_cons(q_37, sym_Test_1))
            {
              r_37 = ATgetArgument(q_37, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(r_37));
            }
          else
            {
              if(match_cons(q_37, sym_CallT_3))
                {
                  r_37 = ATgetArgument(q_37, 0);
                  o_37 = ATgetArgument(q_37, 1);
                  l_37 = ATgetArgument(q_37, 2);
                  e_35 :
                  if(match_cons(r_37, sym_SVar_1))
                    {
                      p_37 = ATgetArgument(r_37, 0);
                      {
                        ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
                        ATerm k_38 = NULL;
                        t = not_null(o_37);
                        {
                          ATerm l_38 = NULL;
                          ATerm e_2 (ATerm t)
                          {
                            ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
                            e_38 = t;
                            w_32 :
                            if(match_cons(e_38, sym_CallT_3))
                              {
                                f_38 = ATgetArgument(e_38, 0);
                                h_38 = ATgetArgument(e_38, 1);
                                i_38 = ATgetArgument(e_38, 2);
                                x_32 :
                                if(match_cons(f_38, sym_SVar_1))
                                  {
                                    g_38 = ATgetArgument(f_38, 0);
                                    y_32 :
                                    if(((ATgetType(h_38) == AT_LIST) && ATisEmpty(h_38)))
                                      {
                                        z_32 :
                                        if(((ATgetType(i_38) == AT_LIST) && ATisEmpty(i_38)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(g_38));
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
                          t = map_1(t, e_2);
                          {
                            k_38 = t;
                            {
                              if(((b_38 != NULL) && (b_38 != k_38)))
                                _fail(k_38);
                              else
                                b_38 = k_38;
                              {
                                t = not_null(l_37);
                                {
                                  ATerm m_38 = NULL;
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
                                    l_38 = t;
                                    {
                                      if(((c_38 != NULL) && (c_38 != l_38)))
                                        _fail(l_38);
                                      else
                                        c_38 = l_38;
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_18)), not_null(c_38)), not_null(b_38));
                                        {
                                          t = concat_0(t);
                                          {
                                            m_38 = t;
                                            if(((d_38 != NULL) && (d_38 != m_38)))
                                              _fail(m_38);
                                            else
                                              d_38 = m_38;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(d_38))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(q_37, sym_PrimT_3))
                    {
                      r_37 = ATgetArgument(q_37, 0);
                      o_37 = ATgetArgument(q_37, 1);
                      l_37 = ATgetArgument(q_37, 2);
                      {
                        ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
                        ATerm w_46 = NULL;
                        t = not_null(o_37);
                        {
                          ATerm x_46 = NULL;
                          ATerm h_2 (ATerm t)
                          {
                            ATerm t_38 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,n_43 = NULL;
                            t_38 = t;
                            e_33 :
                            if(match_cons(t_38, sym_CallT_3))
                              {
                                j_39 = ATgetArgument(t_38, 0);
                                l_39 = ATgetArgument(t_38, 1);
                                n_43 = ATgetArgument(t_38, 2);
                                f_33 :
                                if(match_cons(j_39, sym_SVar_1))
                                  {
                                    k_39 = ATgetArgument(j_39, 0);
                                    g_33 :
                                    if(((ATgetType(l_39) == AT_LIST) && ATisEmpty(l_39)))
                                      {
                                        h_33 :
                                        if(((ATgetType(n_43) == AT_LIST) && ATisEmpty(n_43)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39));
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
                          t = map_1(t, h_2);
                          {
                            w_46 = t;
                            {
                              if(((q_38 != NULL) && (q_38 != w_46)))
                                _fail(w_46);
                              else
                                q_38 = w_46;
                              {
                                t = not_null(l_37);
                                {
                                  ATerm q_48 = NULL;
                                  ATerm i_2 (ATerm t)
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      t = try_1(t, construct_term_0);
                                      return(t);
                                    }
                                    t = topdown_1(t, j_2);
                                    return(t);
                                  }
                                  t = map_1(t, i_2);
                                  {
                                    x_46 = t;
                                    {
                                      if(((r_38 != NULL) && (r_38 != x_46)))
                                        _fail(x_46);
                                      else
                                        r_38 = x_46;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), not_null(r_38));
                                        {
                                          t = conc_0(t);
                                          {
                                            q_48 = t;
                                            if(((s_38 != NULL) && (s_38 != q_48)))
                                              _fail(q_48);
                                            else
                                              s_38 = q_48;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_37)), not_null(s_38))));
                      }
                    }
                  else
                    {
                      if(match_cons(q_37, sym_Not_1))
                        {
                          r_37 = ATgetArgument(q_37, 0);
                          {
                            ATerm s_48 = NULL;
                            ATerm t_48 = NULL;
                            t = new_0(t);
                            {
                              t_48 = t;
                              if(((s_48 != NULL) && (s_48 != t_48)))
                                _fail(t_48);
                              else
                                s_48 = t_48;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_48)), term_h_9), term_h_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_l_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_22), term_d_22), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_48)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(q_37, sym_LGChoice_2))
                            {
                              r_37 = ATgetArgument(q_37, 0);
                              o_37 = ATgetArgument(q_37, 1);
                              {
                                ATerm w_48 = NULL;
                                ATerm x_48 = NULL;
                                t = new_0(t);
                                {
                                  x_48 = t;
                                  if(((w_48 != NULL) && (w_48 != x_48)))
                                    _fail(x_48);
                                  else
                                    w_48 = x_48;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_48)), term_h_9), term_h_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_48)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(q_37, sym_GChoice_2))
                                {
                                  r_37 = ATgetArgument(q_37, 0);
                                  o_37 = ATgetArgument(q_37, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(r_37), not_null(o_37));
                                }
                              else
                                {
                                  if(match_cons(q_37, sym_GuardedLChoice_3))
                                    {
                                      r_37 = ATgetArgument(q_37, 0);
                                      o_37 = ATgetArgument(q_37, 1);
                                      l_37 = ATgetArgument(q_37, 2);
                                      {
                                        ATerm d_49 = NULL,e_49 = NULL;
                                        ATerm f_49 = NULL;
                                        ATerm g_49 = NULL;
                                        t = new_0(t);
                                        {
                                          f_49 = t;
                                          {
                                            if(((d_49 != NULL) && (d_49 != f_49)))
                                              _fail(f_49);
                                            else
                                              d_49 = f_49;
                                            {
                                              t = new_0(t);
                                              {
                                                g_49 = t;
                                                if(((e_49 != NULL) && (e_49 != g_49)))
                                                  _fail(g_49);
                                                else
                                                  e_49 = g_49;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_o_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_49)), term_h_9), term_y_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_49)), term_h_9), term_h_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_l_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_49)))))), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_49)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(q_37, sym_LChoice_2))
                                        {
                                          r_37 = ATgetArgument(q_37, 0);
                                          o_37 = ATgetArgument(q_37, 1);
                                          {
                                            ATerm j_49 = NULL,k_49 = NULL;
                                            ATerm l_49 = NULL;
                                            ATerm m_49 = NULL;
                                            t = new_0(t);
                                            {
                                              l_49 = t;
                                              {
                                                if(((j_49 != NULL) && (j_49 != l_49)))
                                                  _fail(l_49);
                                                else
                                                  j_49 = l_49;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    m_49 = t;
                                                    if(((k_49 != NULL) && (k_49 != m_49)))
                                                      _fail(m_49);
                                                    else
                                                      k_49 = m_49;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_49)), term_h_9), term_y_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_49)), term_h_9), term_h_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_l_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_49)))))), term_i_23), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_c_18, term_o_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_49)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(q_37, sym_Choice_2))
                                            {
                                              r_37 = ATgetArgument(q_37, 0);
                                              o_37 = ATgetArgument(q_37, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_37), not_null(o_37));
                                            }
                                          else
                                            {
                                              if(match_cons(q_37, sym_Seq_2))
                                                {
                                                  r_37 = ATgetArgument(q_37, 0);
                                                  o_37 = ATgetArgument(q_37, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), not_null(r_37)));
                                                }
                                              else
                                                {
                                                  if(match_cons(q_37, sym_Scope_2))
                                                    {
                                                      r_37 = ATgetArgument(q_37, 0);
                                                      o_37 = ATgetArgument(q_37, 1);
                                                      {
                                                        ATerm v_49 = NULL;
                                                        ATerm j_23;
                                                        j_23 = t;
                                                        {
                                                          t = not_null(r_37);
                                                          {
                                                            ATerm k_2 (ATerm t)
                                                            {
                                                              ATerm t_49 = NULL;
                                                              t_49 = t;
                                                              {
                                                                ATerm o_23;
                                                                o_23 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), term_q_23);
                                                                  {
                                                                    ATerm l_2 (ATerm t)
                                                                    {
                                                                      t = term_r_23;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, l_2);
                                                                  }
                                                                }
                                                                t = o_23;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, k_2);
                                                          }
                                                        }
                                                        t = j_23;
                                                        {
                                                          ATerm y_49 = NULL;
                                                          t = not_null(r_37);
                                                          {
                                                            ATerm m_2 (ATerm t)
                                                            {
                                                              ATerm w_49 = NULL;
                                                              w_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_49)), term_h_9), term_s_23);
                                                              return(t);
                                                            }
                                                            t = map_1(t, m_2);
                                                            {
                                                              y_49 = t;
                                                              if(((v_49 != NULL) && (v_49 != y_49)))
                                                                _fail(y_49);
                                                              else
                                                                v_49 = y_49;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, not_null(v_49))), (ATerm) ATinsert(ATempty, not_null(o_37)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(q_37, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(q_37, sym_Id_0))
                                                            {
                                                              t = term_t_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(q_37, sym_Match_2))
                                                                {
                                                                  r_37 = ATgetArgument(q_37, 0);
                                                                  o_37 = ATgetArgument(q_37, 1);
                                                                  f_35 :
                                                                  if(match_cons(r_37, sym_Op_2))
                                                                    {
                                                                      p_37 = ATgetArgument(r_37, 0);
                                                                      y_36 = ATgetArgument(r_37, 1);
                                                                      g_35 :
                                                                      if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
                                                                        {
                                                                          u_36 = ATgetFirst((ATermList) y_36);
                                                                          v_36 = (ATerm) ATgetNext((ATermList) y_36);
                                                                          h_35 :
                                                                          if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
                                                                            {
                                                                              w_36 = ATgetFirst((ATermList) v_36);
                                                                              x_36 = (ATerm) ATgetNext((ATermList) v_36);
                                                                              i_35 :
                                                                              if(((ATgetType(x_36) == AT_LIST) && ATisEmpty(x_36)))
                                                                                {
                                                                                  j_35 :
                                                                                  if(match_string(p_37, "Cons"))
                                                                                    {
                                                                                      ATerm x_23 = t;
                                                                                      int y_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm h_50 = NULL;
                                                                                          ATerm i_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_36), (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_20, not_null(o_37))))))), (ATerm) ATmakeAppl(sym__2, not_null(u_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_20, not_null(o_37))))));
                                                                                          {
                                                                                            ATerm n_2 (ATerm t)
                                                                                            {
                                                                                              ATerm b_24 = t;
                                                                                              int c_24 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(c_24);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_24;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, n_2);
                                                                                            {
                                                                                              i_50 = t;
                                                                                              if(((h_50 != NULL) && (h_50 != i_50)))
                                                                                                _fail(i_50);
                                                                                              else
                                                                                                h_50 = i_50;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_v_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, not_null(o_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
                                                                                          ;
                                                                                          LocalPopChoice(y_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_23;
                                                                                          t = m_56(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = m_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  k_35 :
                                                                                  t = m_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              l_35 :
                                                                              t = m_56(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(y_36) == AT_LIST) && ATisEmpty(y_36)))
                                                                            {
                                                                              m_35 :
                                                                              if(match_string(p_37, "Nil"))
                                                                                {
                                                                                  ATerm d_24 = t;
                                                                                  int e_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_v_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, not_null(o_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_c_18))));
                                                                                      ;
                                                                                      LocalPopChoice(e_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_24;
                                                                                      t = m_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = m_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              n_35 :
                                                                              t = m_56(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(r_37, sym_Real_1))
                                                                        {
                                                                          p_37 = ATgetArgument(r_37, 0);
                                                                          t = n_56(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(r_37, sym_Int_1))
                                                                            {
                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                              t = o_56(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(r_37, sym_Str_1))
                                                                                {
                                                                                  p_37 = ATgetArgument(r_37, 0);
                                                                                  t = p_56(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(r_37, sym_Var_1))
                                                                                    {
                                                                                      p_37 = ATgetArgument(r_37, 0);
                                                                                      {
                                                                                        ATerm f_24 = t;
                                                                                        int g_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_56(t);
                                                                                            ;
                                                                                            LocalPopChoice(g_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_24;
                                                                                            {
                                                                                              ATerm n_24 = t;
                                                                                              int o_24 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = r_56(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(o_24);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_24;
                                                                                                  t = s_56(t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(r_37, sym_As_2))
                                                                                        {
                                                                                          p_37 = ATgetArgument(r_37, 0);
                                                                                          y_36 = ATgetArgument(r_37, 1);
                                                                                          t = t_56(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(r_37, sym_BuildDefault_1))
                                                                                            {
                                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                                              t = u_56(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(r_37, sym_Wld_0))
                                                                                                {
                                                                                                  t = v_56(t);
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
                                                                  if(match_cons(q_37, sym_Match_1))
                                                                    {
                                                                      r_37 = ATgetArgument(q_37, 0);
                                                                      t = w_56(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(q_37, sym_Case_3))
                                                                        {
                                                                          r_37 = ATgetArgument(q_37, 0);
                                                                          o_37 = ATgetArgument(q_37, 1);
                                                                          l_37 = ATgetArgument(q_37, 2);
                                                                          o_35 :
                                                                          if(match_cons(r_37, sym_Var_1))
                                                                            {
                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                              p_35 :
                                                                              if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
                                                                                {
                                                                                  n_37 = ATgetFirst((ATermList) o_37);
                                                                                  k_37 = (ATerm) ATgetNext((ATermList) o_37);
                                                                                  q_35 :
                                                                                  if(match_cons(n_37, sym_Alt_3))
                                                                                    {
                                                                                      g_37 = ATgetArgument(n_37, 0);
                                                                                      i_37 = ATgetArgument(n_37, 1);
                                                                                      j_37 = ATgetArgument(n_37, 2);
                                                                                      r_35 :
                                                                                      if(match_cons(g_37, sym_Fun_2))
                                                                                        {
                                                                                          h_37 = ATgetArgument(g_37, 0);
                                                                                          f_37 = ATgetArgument(g_37, 1);
                                                                                          s_35 :
                                                                                          if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
                                                                                            {
                                                                                              z_36 = ATgetFirst((ATermList) i_37);
                                                                                              b_37 = (ATerm) ATgetNext((ATermList) i_37);
                                                                                              t_35 :
                                                                                              if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
                                                                                                {
                                                                                                  c_37 = ATgetFirst((ATermList) b_37);
                                                                                                  e_37 = (ATerm) ATgetNext((ATermList) b_37);
                                                                                                  u_35 :
                                                                                                  if(((ATgetType(e_37) == AT_LIST) && ATisEmpty(e_37)))
                                                                                                    {
                                                                                                      v_35 :
                                                                                                      if(match_cons(c_37, sym_Var_1))
                                                                                                        {
                                                                                                          d_37 = ATgetArgument(c_37, 0);
                                                                                                          w_35 :
                                                                                                          if(match_cons(z_36, sym_Var_1))
                                                                                                            {
                                                                                                              a_37 = ATgetArgument(z_36, 0);
                                                                                                              x_35 :
                                                                                                              if(match_int(f_37, 2))
                                                                                                                {
                                                                                                                  y_35 :
                                                                                                                  if(match_string(h_37, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm p_24 = t;
                                                                                                                      int w_24 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = x_56(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(w_24);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_24;
                                                                                                                          t = z_56(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_56(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  z_35 :
                                                                                                                  t = z_56(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              a_36 :
                                                                                                              b_36 :
                                                                                                              t = z_56(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          c_36 :
                                                                                                          d_36 :
                                                                                                          e_36 :
                                                                                                          t = z_56(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      f_36 :
                                                                                                      g_36 :
                                                                                                      h_36 :
                                                                                                      i_36 :
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  j_36 :
                                                                                                  k_36 :
                                                                                                  l_36 :
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(i_37) == AT_LIST) && ATisEmpty(i_37)))
                                                                                                {
                                                                                                  m_36 :
                                                                                                  if(match_int(f_37, 0))
                                                                                                    {
                                                                                                      n_36 :
                                                                                                      if(match_string(h_37, "Nil"))
                                                                                                        {
                                                                                                          ATerm x_24 = t;
                                                                                                          int y_24 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = y_56(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(y_24);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = x_24;
                                                                                                              t = z_56(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = z_56(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      o_36 :
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  p_36 :
                                                                                                  q_36 :
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(g_37, sym_Real_1))
                                                                                            {
                                                                                              h_37 = ATgetArgument(g_37, 0);
                                                                                              t = a_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(g_37, sym_Int_1))
                                                                                                {
                                                                                                  h_37 = ATgetArgument(g_37, 0);
                                                                                                  t = b_57(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(g_37, sym_Str_1))
                                                                                                    {
                                                                                                      h_37 = ATgetArgument(g_37, 0);
                                                                                                      t = c_57(t);
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
                                                                                  if(((ATgetType(o_37) == AT_LIST) && ATisEmpty(o_37)))
                                                                                    {
                                                                                      t = d_57(t);
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
                                                                          if(match_cons(q_37, sym_Case_4))
                                                                            {
                                                                              r_37 = ATgetArgument(q_37, 0);
                                                                              o_37 = ATgetArgument(q_37, 1);
                                                                              l_37 = ATgetArgument(q_37, 2);
                                                                              m_37 = ATgetArgument(q_37, 3);
                                                                              t = e_57(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(q_37, sym_Continue_1))
                                                                                {
                                                                                  r_37 = ATgetArgument(q_37, 0);
                                                                                  t = f_57(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(q_37, sym_Assign_2))
                                                                                    {
                                                                                      r_37 = ATgetArgument(q_37, 0);
                                                                                      o_37 = ATgetArgument(q_37, 1);
                                                                                      r_36 :
                                                                                      if(match_cons(r_37, sym_Var_1))
                                                                                        {
                                                                                          p_37 = ATgetArgument(r_37, 0);
                                                                                          s_36 :
                                                                                          if(match_cons(o_37, sym_Var_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(o_37, 0);
                                                                                              {
                                                                                                ATerm z_24 = t;
                                                                                                int a_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = g_57(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(a_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = z_24;
                                                                                                    t = h_57(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_57(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(q_37, sym_Assign_1))
                                                                                        {
                                                                                          r_37 = ATgetArgument(q_37, 0);
                                                                                          t_36 :
                                                                                          if(match_cons(r_37, sym_Var_1))
                                                                                            {
                                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                                              t = i_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(q_37, sym_Build_1))
                                                                                            {
                                                                                              r_37 = ATgetArgument(q_37, 0);
                                                                                              t = j_57(t);
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
  ATerm d_59 = NULL;
  d_59 = t;
  t = SSL_real_to_string(not_null(d_59));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  j_59 = t;
  h_59 :
  if(match_cons(j_59, sym__2))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      i_59 :
      if(((ATgetType(k_59) == AT_LIST) && ATisEmpty(k_59)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_59));
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
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  v_59 = t;
  t_59 :
  if(match_cons(v_59, sym__2))
    {
      w_59 = ATgetArgument(v_59, 0);
      z_59 = ATgetArgument(v_59, 1);
      u_59 :
      if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
        {
          x_59 = ATgetFirst((ATermList) w_59);
          y_59 = (ATerm) ATgetNext((ATermList) w_59);
          {
            ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
            ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_59), not_null(z_59));
            {
              t = w_0(t);
              {
                h_60 = t;
                s_59 :
                if(match_cons(h_60, sym__2))
                  {
                    i_60 = ATgetArgument(h_60, 0);
                    j_60 = ATgetArgument(h_60, 1);
                    {
                      ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
                      if(((f_60 != NULL) && (f_60 != i_60)))
                        _fail(i_60);
                      else
                        f_60 = i_60;
                      {
                        if(((d_60 != NULL) && (d_60 != j_60)))
                          _fail(j_60);
                        else
                          d_60 = j_60;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_59), not_null(d_60));
                          {
                            t = a_1(t);
                            {
                              k_60 = t;
                              r_59 :
                              if(match_cons(k_60, sym__2))
                                {
                                  l_60 = ATgetArgument(k_60, 0);
                                  m_60 = ATgetArgument(k_60, 1);
                                  {
                                    if(((g_60 != NULL) && (g_60 != l_60)))
                                      _fail(l_60);
                                    else
                                      g_60 = l_60;
                                    if(((e_60 != NULL) && (e_60 != m_60)))
                                      _fail(m_60);
                                    else
                                      e_60 = m_60;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_60)), not_null(f_60)), not_null(e_60));
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
ATerm thread_map_1 (ATerm t, ATerm k_120 (ATerm))
{
  ATerm q_60 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, k_120, q_60);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = q_60(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm e_61 = NULL,f_61 = NULL;
  e_61 = t;
  d_61 :
  if(match_cons(e_61, sym_Var_1))
    {
      f_61 = ATgetArgument(e_61, 0);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_61 = NULL,k_61 = NULL;
            ATerm j_61 = NULL;
            t = SSLgetAnnotations(not_null(e_61));
            {
              j_61 = t;
              if(((i_61 != NULL) && (i_61 != j_61)))
                _fail(j_61);
              else
                i_61 = j_61;
            }
            {
              t = not_null(f_61);
              {
                ATerm m_61 = NULL;
                t = q_0(t);
                {
                  k_61 = t;
                  {
                    ATerm n_61 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_61)), not_null(i_61));
                    {
                      n_61 = t;
                      if(((m_61 != NULL) && (m_61 != n_61)))
                        _fail(n_61);
                      else
                        m_61 = n_61;
                    }
                    t = not_null(m_61);
                  }
                }
              }
            }
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm f_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_61 = NULL,s_61 = NULL;
                  ATerm r_61 = NULL;
                  t = SSLgetAnnotations(not_null(e_61));
                  {
                    r_61 = t;
                    if(((q_61 != NULL) && (q_61 != r_61)))
                      _fail(r_61);
                    else
                      q_61 = r_61;
                  }
                  {
                    t = not_null(f_61);
                    {
                      ATerm u_61 = NULL;
                      t = q_0(t);
                      {
                        s_61 = t;
                        {
                          ATerm v_61 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_61)), not_null(q_61));
                          {
                            v_61 = t;
                            if(((u_61 != NULL) && (u_61 != v_61)))
                              _fail(v_61);
                            else
                              u_61 = v_61;
                          }
                          t = not_null(u_61);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = f_25;
                  {
                    ATerm y_61 = NULL,a_62 = NULL;
                    ATerm z_61 = NULL;
                    t = SSLgetAnnotations(not_null(e_61));
                    {
                      z_61 = t;
                      if(((y_61 != NULL) && (y_61 != z_61)))
                        _fail(z_61);
                      else
                        y_61 = z_61;
                    }
                    {
                      t = not_null(f_61);
                      {
                        ATerm c_62 = NULL;
                        t = q_0(t);
                        {
                          a_62 = t;
                          {
                            ATerm d_62 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_62)), not_null(y_61));
                            {
                              d_62 = t;
                              if(((c_62 != NULL) && (c_62 != d_62)))
                                _fail(d_62);
                              else
                                c_62 = d_62;
                            }
                            t = not_null(c_62);
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
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  ATerm g_67 (ATerm t)
  {
    ATerm q_65 = NULL,i_66 = NULL,n_66 = NULL;
    ATerm h_25;
    h_25 = t;
    {
      ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
      t = not_null(d_65);
      {
        ATerm i_25 = t;
        if((PushChoice() == 0))
          {
            ATerm r_65 = NULL;
            r_65 = t;
            i_63 :
            if(!(match_string(r_65, "Nil")))
              {
                if(!(match_string(r_65, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_25;
          }
        {
          t = not_null(x_64);
          {
            ATerm o_2 (ATerm t)
            {
              t = Var_1(t, _id);
              return(t);
            }
            t = map_1(t, o_2);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_64), term_d_17);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
                  s_65 = t;
                  m_63 :
                  if(match_cons(s_65, sym__2))
                    {
                      t_65 = ATgetArgument(s_65, 0);
                      v_65 = ATgetArgument(s_65, 1);
                      n_63 :
                      if(match_cons(t_65, sym_Var_1))
                        {
                          u_65 = ATgetArgument(t_65, 0);
                          {
                            ATerm a_66 = NULL,c_66 = NULL;
                            ATerm j_25;
                            j_25 = t;
                            {
                              ATerm b_66 = NULL;
                              t = not_null(v_65);
                              {
                                t = int_to_string_0(t);
                                {
                                  b_66 = t;
                                  if(((a_66 != NULL) && (a_66 != b_66)))
                                    _fail(b_66);
                                  else
                                    a_66 = b_66;
                                }
                              }
                            }
                            t = j_25;
                            {
                              ATerm d_66 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_65), term_p_17);
                              {
                                t = add_0(t);
                                {
                                  d_66 = t;
                                  if(((c_66 != NULL) && (c_66 != d_66)))
                                    _fail(d_66);
                                  else
                                    c_66 = d_66;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_65)), term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_66))), term_c_18)))), not_null(c_66));
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
                t = thread_map_1(t, p_2);
                {
                  f_66 = t;
                  p_63 :
                  if(match_cons(f_66, sym__2))
                    {
                      g_66 = ATgetArgument(f_66, 0);
                      h_66 = ATgetArgument(f_66, 1);
                      if(((q_65 != NULL) && (q_65 != g_66)))
                        _fail(g_66);
                      else
                        q_65 = g_66;
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
    t = h_25;
    {
      ATerm k_25;
      k_25 = t;
      {
        ATerm j_66 = NULL,m_66 = NULL;
        ATerm k_66 = NULL;
        t = not_null(x_64);
        {
          t = length_0(t);
          {
            k_66 = t;
            if(((j_66 != NULL) && (j_66 != k_66)))
              _fail(k_66);
            else
              j_66 = k_66;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_65), not_null(j_66));
          {
            t = ConstructorName_0(t);
            {
              m_66 = t;
              if(((i_66 != NULL) && (i_66 != m_66)))
                _fail(m_66);
              else
                i_66 = m_66;
            }
          }
        }
      }
      t = k_25;
      {
        ATerm o_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_65), (ATerm) ATinsert(ATempty, not_null(e_65)));
        {
          t = conc_0(t);
          {
            o_66 = t;
            if(((n_66 != NULL) && (n_66 != o_66)))
              _fail(o_66);
            else
              n_66 = o_66;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_66))), term_c_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_66)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
      }
    }
    return(t);
  }
  ATerm h_67 (ATerm t)
  {
    ATerm s_66 = NULL;
    ATerm t_66 = NULL;
    t = not_null(d_65);
    {
      t = real_to_string_0(t);
      {
        t_66 = t;
        if(((s_66 != NULL) && (s_66 != t_66)))
          _fail(t_66);
        else
          s_66 = t_66;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_66))), term_c_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
    return(t);
  }
  ATerm i_67 (ATerm t)
  {
    ATerm x_66 = NULL;
    ATerm y_66 = NULL;
    t = not_null(d_65);
    {
      t = int_to_string_0(t);
      {
        y_66 = t;
        if(((x_66 != NULL) && (x_66 != y_66)))
          _fail(y_66);
        else
          x_66 = y_66;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_66))), term_c_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
    return(t);
  }
  ATerm j_67 (ATerm t)
  {
    ATerm c_67 = NULL;
    ATerm d_67 = NULL;
    t = not_null(d_65);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          d_67 = t;
          if(((c_67 != NULL) && (c_67 != d_67)))
            _fail(d_67);
          else
            c_67 = d_67;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_67)))), term_c_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
    return(t);
  }
  a_65 = t;
  w_63 :
  if(match_cons(a_65, sym_GuardedLChoice_3))
    {
      b_65 = ATgetArgument(a_65, 0);
      e_65 = ATgetArgument(a_65, 1);
      f_65 = ATgetArgument(a_65, 2);
      x_63 :
      if(match_cons(b_65, sym_Match_1))
        {
          c_65 = ATgetArgument(b_65, 0);
          y_63 :
          if(match_cons(c_65, sym_Op_2))
            {
              d_65 = ATgetArgument(c_65, 0);
              x_64 = ATgetArgument(c_65, 1);
              z_63 :
              if(((ATgetType(x_64) == AT_LIST) && !(ATisEmpty(x_64))))
                {
                  p_64 = ATgetFirst((ATermList) x_64);
                  r_64 = (ATerm) ATgetNext((ATermList) x_64);
                  a_64 :
                  if(((ATgetType(r_64) == AT_LIST) && !(ATisEmpty(r_64))))
                    {
                      u_64 = ATgetFirst((ATermList) r_64);
                      w_64 = (ATerm) ATgetNext((ATermList) r_64);
                      b_64 :
                      if(((ATgetType(w_64) == AT_LIST) && ATisEmpty(w_64)))
                        {
                          c_64 :
                          if(match_cons(u_64, sym_Var_1))
                            {
                              v_64 = ATgetArgument(u_64, 0);
                              d_64 :
                              if(match_cons(p_64, sym_Var_1))
                                {
                                  q_64 = ATgetArgument(p_64, 0);
                                  e_64 :
                                  if(match_string(d_65, "Cons"))
                                    {
                                      ATerm s_25 = t;
                                      int t_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, term_c_18)), term_v_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, term_c_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_65)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_64)), term_o_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, term_u_25)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_64)), term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATempty, term_u_25)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
                                          ;
                                          LocalPopChoice(t_25);
                                        }
                                      else
                                        {
                                          t = s_25;
                                          t = g_67(t);
                                        }
                                    }
                                  else
                                    {
                                      t = g_67(t);
                                    }
                                }
                              else
                                {
                                  f_64 :
                                  t = g_67(t);
                                }
                            }
                          else
                            {
                              g_64 :
                              h_64 :
                              t = g_67(t);
                            }
                        }
                      else
                        {
                          i_64 :
                          j_64 :
                          k_64 :
                          t = g_67(t);
                        }
                    }
                  else
                    {
                      l_64 :
                      m_64 :
                      t = g_67(t);
                    }
                }
              else
                {
                  if(((ATgetType(x_64) == AT_LIST) && ATisEmpty(x_64)))
                    {
                      n_64 :
                      if(match_string(d_65, "Nil"))
                        {
                          ATerm z_25 = t;
                          int a_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_18, (ATerm) ATinsert(ATempty, term_c_18)), term_v_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATempty, term_c_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
                              ;
                              LocalPopChoice(a_26);
                            }
                          else
                            {
                              t = z_25;
                              t = g_67(t);
                            }
                        }
                      else
                        {
                          t = g_67(t);
                        }
                    }
                  else
                    {
                      o_64 :
                      t = g_67(t);
                    }
                }
            }
          else
            {
              if(match_cons(c_65, sym_Real_1))
                {
                  d_65 = ATgetArgument(c_65, 0);
                  t = h_67(t);
                }
              else
                {
                  if(match_cons(c_65, sym_Int_1))
                    {
                      d_65 = ATgetArgument(c_65, 0);
                      t = i_67(t);
                    }
                  else
                    {
                      if(match_cons(c_65, sym_Str_1))
                        {
                          d_65 = ATgetArgument(c_65, 0);
                          t = j_67(t);
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
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  c_68 = t;
  b_68 :
  if(match_cons(c_68, sym__2))
    {
      d_68 = ATgetArgument(c_68, 0);
      e_68 = ATgetArgument(c_68, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_b_26), not_null(e_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  l_68 = t;
  j_68 :
  if(((ATgetType(l_68) == AT_LIST) && !(ATisEmpty(l_68))))
    {
      m_68 = ATgetFirst((ATermList) l_68);
      n_68 = (ATerm) ATgetNext((ATermList) l_68);
      k_68 :
      if(match_int(m_68, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_68)), term_h_26), term_c_26);
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
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  t_68 = t;
  r_68 :
  if(((ATgetType(t_68) == AT_LIST) && !(ATisEmpty(t_68))))
    {
      u_68 = ATgetFirst((ATermList) t_68);
      v_68 = (ATerm) ATgetNext((ATermList) t_68);
      s_68 :
      if(match_int(u_68, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_68)), term_c_26), term_c_26);
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  b_69 = t;
  z_68 :
  if(((ATgetType(b_69) == AT_LIST) && !(ATisEmpty(b_69))))
    {
      c_69 = ATgetFirst((ATermList) b_69);
      d_69 = (ATerm) ATgetNext((ATermList) b_69);
      a_69 :
      if(match_int(c_69, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_69)), term_i_26), term_c_26);
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
  ATerm j_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = j_26;
      {
        ATerm o_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = o_26;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm r_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm q_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, q_2);
      }
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = r_26;
      {
        ATerm y_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(b_27);
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
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  l_69 = t;
  k_69 :
  if(match_cons(l_69, sym__2))
    {
      m_69 = ATgetArgument(l_69, 0);
      n_69 = ATgetArgument(l_69, 1);
      {
        ATerm q_69 = NULL,s_69 = NULL;
        ATerm e_27;
        e_27 = t;
        {
          ATerm r_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_f_27), not_null(m_69));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  r_69 = t;
                  if(((q_69 != NULL) && (q_69 != r_69)))
                    _fail(r_69);
                  else
                    q_69 = r_69;
                }
              }
            }
          }
        }
        t = e_27;
        {
          ATerm t_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), not_null(m_69));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  t_69 = t;
                  if(((s_69 != NULL) && (s_69 != t_69)))
                    _fail(t_69);
                  else
                    s_69 = t_69;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_26), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(s_69))), term_j_27)))), not_null(n_69)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_69))), term_j_27)))));
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
  ATerm a_70 = NULL;
  a_70 = t;
  {
    ATerm d_70 = NULL,e_70 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm x_2 (ATerm t)
      {
        t = term_t_7;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        d_70 = t;
        y_69 :
        if(match_cons(d_70, sym_Defined_1))
          {
            e_70 = ATgetArgument(d_70, 0);
            z_69 :
            if(!(match_string(e_70, "o_0")))
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
    t = not_null(a_70);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm j_70 = NULL;
  j_70 = t;
  {
    ATerm m_70 = NULL,n_70 = NULL;
    t = not_null(j_70);
    {
      ATerm y_2 (ATerm t)
      {
        t = term_d_8;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        m_70 = t;
        h_70 :
        if(match_cons(m_70, sym_Defined_1))
          {
            n_70 = ATgetArgument(m_70, 0);
            i_70 :
            if(!(match_string(n_70, "r_0")))
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
    t = not_null(j_70);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  k_71 = t;
  i_71 :
  if(match_cons(k_71, sym_SDefT_4))
    {
      l_71 = ATgetArgument(k_71, 0);
      m_71 = ATgetArgument(k_71, 1);
      n_71 = ATgetArgument(k_71, 2);
      j_71 = ATgetArgument(k_71, 3);
      {
        ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,a_72 = NULL;
        ATerm k_27;
        k_27 = t;
        {
          ATerm w_71 = NULL;
          t = not_null(m_71);
          {
            ATerm x_71 = NULL;
            t = map_1(t, TranslateVarDec_0);
            {
              w_71 = t;
              {
                if(((s_71 != NULL) && (s_71 != w_71)))
                  _fail(w_71);
                else
                  s_71 = w_71;
                {
                  t = not_null(n_71);
                  {
                    ATerm y_71 = NULL;
                    t = map_1(t, TranslateVarDec_0);
                    {
                      x_71 = t;
                      {
                        if(((t_71 != NULL) && (t_71 != x_71)))
                          _fail(x_71);
                        else
                          t_71 = x_71;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), not_null(t_71));
                          {
                            ATerm z_71 = NULL;
                            t = conc_0(t);
                            {
                              y_71 = t;
                              {
                                if(((u_71 != NULL) && (u_71 != y_71)))
                                  _fail(y_71);
                                else
                                  u_71 = y_71;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_71), not_null(j_71));
                                  {
                                    ATerm l_27 = t;
                                    int m_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_2 (ATerm t)
                                        {
                                          ATerm n_27 = t;
                                          int o_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = TraceFun_0(t);
                                              ;
                                              LocalPopChoice(o_27);
                                            }
                                          else
                                            {
                                              t = n_27;
                                              t = TraceAllFuns_0(t);
                                            }
                                          return(t);
                                        }
                                        t = _2(t, z_2, _id);
                                        t = TracedBody_0(t);
                                        ;
                                        LocalPopChoice(m_27);
                                      }
                                    else
                                      {
                                        t = l_27;
                                        t = PlainBody_0(t);
                                      }
                                    {
                                      z_71 = t;
                                      if(((v_71 != NULL) && (v_71 != z_71)))
                                        _fail(z_71);
                                      else
                                        v_71 = z_71;
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
        t = k_27;
        {
          ATerm b_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_71), (ATerm) ATinsert(ATempty, term_q_27));
          {
            t = conc_0(t);
            {
              b_72 = t;
              if(((a_72 != NULL) && (a_72 != b_72)))
                _fail(b_72);
              else
                a_72 = b_72;
            }
          }
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_g_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_72)))), not_null(v_71));
        }
      }
    }
  else
    {
      if(match_cons(k_71, sym_SDef_3))
        {
          l_71 = ATgetArgument(k_71, 0);
          m_71 = ATgetArgument(k_71, 1);
          n_71 = ATgetArgument(k_71, 2);
          {
            ATerm f_72 = NULL,g_72 = NULL,j_72 = NULL;
            ATerm r_27;
            r_27 = t;
            {
              ATerm h_72 = NULL;
              t = not_null(m_71);
              {
                ATerm i_72 = NULL;
                t = map_1(t, TranslateVarDec_0);
                {
                  h_72 = t;
                  {
                    if(((f_72 != NULL) && (f_72 != h_72)))
                      _fail(h_72);
                    else
                      f_72 = h_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_71), not_null(n_71));
                      {
                        ATerm s_27 = t;
                        int t_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm u_27 = t;
                              int v_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = TraceFun_0(t);
                                  ;
                                  LocalPopChoice(v_27);
                                }
                              else
                                {
                                  t = u_27;
                                  t = TraceAllFuns_0(t);
                                }
                              return(t);
                            }
                            t = _2(t, a_3, _id);
                            t = TracedBody_0(t);
                            ;
                            LocalPopChoice(t_27);
                          }
                        else
                          {
                            t = s_27;
                            t = PlainBody_0(t);
                          }
                        {
                          i_72 = t;
                          if(((g_72 != NULL) && (g_72 != i_72)))
                            _fail(i_72);
                          else
                            g_72 = i_72;
                        }
                      }
                    }
                  }
                }
              }
            }
            t = r_27;
            {
              ATerm k_72 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_72), (ATerm) ATinsert(ATempty, term_q_27));
              {
                t = conc_0(t);
                {
                  k_72 = t;
                  if(((j_72 != NULL) && (j_72 != k_72)))
                    _fail(k_72);
                  else
                    j_72 = k_72;
                }
              }
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_g_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_72)))), not_null(g_72));
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym__2))
    {
      z_72 = ATgetArgument(y_72, 0);
      a_73 = ATgetArgument(y_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_73)), not_null(z_72)), (ATerm) ATinsert(ATempty, not_null(z_72)));
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
  ATerm f_73 = NULL;
  ATerm g_73 = NULL;
  g_73 = t;
  if(((f_73 != NULL) && (f_73 != g_73)))
    _fail(g_73);
  else
    f_73 = g_73;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_26, not_null(f_73));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm g_123 (ATerm))
{
  t = explode_string_0(t);
  {
    t = g_123(t);
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
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  p_73 :
  if(((ATgetType(r_73) == AT_LIST) && !(ATisEmpty(r_73))))
    {
      s_73 = ATgetFirst((ATermList) r_73);
      t_73 = (ATerm) ATgetNext((ATermList) r_73);
      t = not_null(s_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  x_73 :
  if(match_cons(y_73, sym__2))
    {
      z_73 = ATgetArgument(y_73, 0);
      a_74 = ATgetArgument(y_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), not_null(a_74));
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
ATerm rewrite_1 (ATerm t, ATerm o_134 (ATerm))
{
  ATerm g_74 = NULL;
  ATerm i_74 = NULL;
  g_74 = t;
  {
    ATerm j_74 = NULL;
    t = term_z_27;
    {
      t = o_134(t);
      {
        j_74 = t;
        if(((i_74 != NULL) && (i_74 != j_74)))
          _fail(j_74);
        else
          i_74 = j_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_74), not_null(g_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  q_74 :
  if(match_cons(r_74, sym__2))
    {
      s_74 = ATgetArgument(r_74, 0);
      t_74 = ATgetArgument(r_74, 1);
      {
        ATerm x_74 = NULL;
        ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
        t = not_null(r_74);
        {
          ATerm b_3 (ATerm t)
          {
            t = term_a_28;
            return(t);
          }
          t = rewrite_1(t, b_3);
          {
            y_74 = t;
            o_74 :
            if(match_cons(y_74, sym_Defined_2))
              {
                z_74 = ATgetArgument(y_74, 0);
                a_75 = ATgetArgument(y_74, 1);
                p_74 :
                if(match_string(z_74, "j_0"))
                  {
                    if(((x_74 != NULL) && (x_74 != a_75)))
                      _fail(a_75);
                    else
                      x_74 = a_75;
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
        t = not_null(x_74);
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
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  i_75 :
  if(match_cons(j_75, sym_OpDecl_2))
    {
      k_75 = ATgetArgument(j_75, 0);
      l_75 = ATgetArgument(j_75, 1);
      {
        ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL,u_75 = NULL;
        ATerm e_28;
        e_28 = t;
        {
          ATerm r_75 = NULL;
          t = not_null(l_75);
          {
            ATerm s_75 = NULL;
            t = Arity_0(t);
            {
              r_75 = t;
              {
                if(((p_75 != NULL) && (p_75 != r_75)))
                  _fail(r_75);
                else
                  p_75 = r_75;
                {
                  ATerm t_75 = NULL;
                  t = int_to_string_0(t);
                  {
                    s_75 = t;
                    {
                      if(((o_75 != NULL) && (o_75 != s_75)))
                        _fail(s_75);
                      else
                        o_75 = s_75;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_75), not_null(p_75));
                        {
                          t = ConstructorName_0(t);
                          {
                            t_75 = t;
                            if(((q_75 != NULL) && (q_75 != t_75)))
                              _fail(t_75);
                            else
                              q_75 = t_75;
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
        t = e_28;
        {
          ATerm v_75 = NULL;
          t = not_null(k_75);
          {
            t = double_quote_0(t);
            {
              v_75 = t;
              if(((u_75 != NULL) && (u_75 != v_75)))
                _fail(v_75);
              else
                u_75 = v_75;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_75)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_75)), term_o_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_75))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_75))))))));
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
  ATerm j_76 = NULL;
  ATerm s_76 = NULL;
  j_76 = t;
  {
    ATerm t_76 = NULL,v_76 = NULL;
    ATerm u_76 = NULL;
    t = not_null(j_76);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          u_76 = t;
          if(((t_76 != NULL) && (t_76 != u_76)))
            _fail(u_76);
          else
            t_76 = u_76;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_76), (ATerm) ATinsert(ATempty, term_m_28));
      {
        t = conc_0(t);
        {
          v_76 = t;
          if(((s_76 != NULL) && (s_76 != v_76)))
            _fail(v_76);
          else
            s_76 = v_76;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_b_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(s_76)));
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
  ATerm c_77 = NULL;
  c_77 = t;
  t = SSL_int_to_string(not_null(c_77));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  l_77 :
  if(((ATgetType(n_77) == AT_LIST) && !(ATisEmpty(n_77))))
    {
      o_77 = ATgetFirst((ATermList) n_77);
      p_77 = (ATerm) ATgetNext((ATermList) n_77);
      m_77 :
      if(match_int(o_77, 95))
        {
          ATerm r_77 = NULL;
          ATerm s_77 = NULL;
          t = not_null(p_77);
          {
            t = p_0(t);
            {
              s_77 = t;
              if(((r_77 != NULL) && (r_77 != s_77)))
                _fail(s_77);
              else
                r_77 = s_77;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_77)), term_p_28), term_p_28);
        }
      else
        {
          if(match_int(o_77, 45))
            {
              ATerm u_77 = NULL;
              ATerm v_77 = NULL;
              t = not_null(p_77);
              {
                t = p_0(t);
                {
                  v_77 = t;
                  if(((u_77 != NULL) && (u_77 != v_77)))
                    _fail(v_77);
                  else
                    u_77 = v_77;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_77)), term_p_28);
            }
          else
            {
              if(match_int(o_77, 39))
                {
                  ATerm x_77 = NULL;
                  ATerm f_78 = NULL;
                  t = not_null(p_77);
                  {
                    t = p_0(t);
                    {
                      f_78 = t;
                      if(((x_77 != NULL) && (x_77 != f_78)))
                        _fail(f_78);
                      else
                        x_77 = f_78;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_77)), term_p_28), term_u_28), term_p_28);
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
ATerm escape_1 (ATerm t, ATerm c_123 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm m_78 (ATerm t)
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_123(t, m_78);
          ;
          LocalPopChoice(w_28);
        }
      else
        {
          t = v_28;
          {
            ATerm a_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, m_78);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = a_29;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = m_78(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm))
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_119(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
        r_78 = t;
        q_78 :
        if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
          {
            s_78 = ATgetFirst((ATermList) r_78);
            t_78 = (ATerm) ATgetNext((ATermList) r_78);
            {
              ATerm w_78 = NULL,y_78 = NULL;
              ATerm h_29;
              h_29 = t;
              {
                ATerm x_78 = NULL;
                t = not_null(s_78);
                {
                  t = y_119(t);
                  {
                    x_78 = t;
                    if(((w_78 != NULL) && (w_78 != x_78)))
                      _fail(x_78);
                    else
                      w_78 = x_78;
                  }
                }
              }
              t = h_29;
              {
                ATerm z_78 = NULL;
                t = not_null(t_78);
                {
                  t = foldr_3(t, w_119, x_119, y_119);
                  {
                    z_78 = t;
                    if(((y_78 != NULL) && (y_78 != z_78)))
                      _fail(z_78);
                    else
                      y_78 = z_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_78), not_null(y_78));
                  t = x_119(t);
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
  ATerm c_3 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  h_79 = t;
  f_79 :
  if(match_cons(h_79, sym_FunType_2))
    {
      i_79 = ATgetArgument(h_79, 0);
      g_79 = ATgetArgument(h_79, 1);
      {
        t = not_null(i_79);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(h_79, sym_ConstType_1))
        {
          i_79 = ATgetArgument(h_79, 0);
          t = term_d_17;
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
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  t_79 :
  if(match_cons(u_79, sym_OpDecl_2))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      {
        ATerm z_79 = NULL,a_80 = NULL;
        ATerm b_80 = NULL;
        t = not_null(w_79);
        {
          ATerm c_80 = NULL,e_80 = NULL,g_80 = NULL;
          t = Arity_0(t);
          {
            b_80 = t;
            {
              if(((z_79 != NULL) && (z_79 != b_80)))
                _fail(b_80);
              else
                z_79 = b_80;
              {
                ATerm i_29;
                i_29 = t;
                {
                  ATerm d_80 = NULL;
                  t = not_null(v_79);
                  {
                    t = cify_0(t);
                    {
                      d_80 = t;
                      if(((c_80 != NULL) && (c_80 != d_80)))
                        _fail(d_80);
                      else
                        c_80 = d_80;
                    }
                  }
                }
                t = i_29;
                {
                  ATerm f_80 = NULL;
                  t = not_null(z_79);
                  {
                    t = int_to_string_0(t);
                    {
                      f_80 = t;
                      if(((e_80 != NULL) && (e_80 != f_80)))
                        _fail(f_80);
                      else
                        e_80 = f_80;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_80)), term_k_29), not_null(c_80)), term_j_29);
                    {
                      t = concat_strings_0(t);
                      {
                        g_80 = t;
                        {
                          if(((a_80 != NULL) && (a_80 != g_80)))
                            _fail(g_80);
                          else
                            a_80 = g_80;
                          {
                            ATerm l_29;
                            l_29 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_79), not_null(z_79)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_29, not_null(a_80)));
                              {
                                ATerm e_3 (ATerm t)
                                {
                                  t = term_a_28;
                                  return(t);
                                }
                                t = assert_1(t, e_3);
                              }
                            }
                            t = l_29;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_80)), term_h_9)));
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
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  u_80 = t;
  q_80 :
  if(match_cons(u_80, sym_Signature_1))
    {
      v_80 = ATgetArgument(u_80, 0);
      r_80 :
      if(((ATgetType(v_80) == AT_LIST) && !(ATisEmpty(v_80))))
        {
          w_80 = ATgetFirst((ATermList) v_80);
          y_80 = (ATerm) ATgetNext((ATermList) v_80);
          s_80 :
          if(match_cons(w_80, sym_Constructors_1))
            {
              x_80 = ATgetArgument(w_80, 0);
              t_80 :
              if(((ATgetType(y_80) == AT_LIST) && ATisEmpty(y_80)))
                {
                  {
                    ATerm a_81 = NULL,b_81 = NULL,w_81 = NULL;
                    ATerm x_30;
                    x_30 = t;
                    {
                      ATerm c_81 = NULL;
                      t = not_null(x_80);
                      {
                        ATerm v_81 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          c_81 = t;
                          {
                            if(((a_81 != NULL) && (a_81 != c_81)))
                              _fail(c_81);
                            else
                              a_81 = c_81;
                            {
                              t = not_null(x_80);
                              {
                                t = InitConstructors_0(t);
                                {
                                  v_81 = t;
                                  if(((b_81 != NULL) && (b_81 != v_81)))
                                    _fail(v_81);
                                  else
                                    b_81 = v_81;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = x_30;
                    {
                      ATerm x_81 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_81), (ATerm) ATinsert(ATempty, not_null(b_81)));
                      {
                        t = conc_0(t);
                        {
                          x_81 = t;
                          if(((w_81 != NULL) && (w_81 != x_81)))
                            _fail(x_81);
                          else
                            w_81 = x_81;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(w_81));
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
  ATerm g_82 = NULL,h_82 = NULL,n_82 = NULL;
  h_82 = t;
  f_82 :
  if(match_cons(h_82, sym_FunType_2))
    {
      n_82 = ATgetArgument(h_82, 0);
      g_82 = ATgetArgument(h_82, 1);
      {
        ATerm p_82 = NULL;
        ATerm r_82 = NULL;
        t = not_null(n_82);
        {
          t = map_1(t, TranslateType_0);
          {
            r_82 = t;
            if(((p_82 != NULL) && (p_82 != r_82)))
              _fail(r_82);
            else
              p_82 = r_82;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_g_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(p_82)));
      }
    }
  else
    {
      if(match_cons(h_82, sym_ConstType_1))
        {
          n_82 = ATgetArgument(h_82, 0);
          t = term_g_9;
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
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  m_83 = t;
  h_83 :
  if(match_cons(m_83, sym_VarDec_2))
    {
      n_83 = ATgetArgument(m_83, 0);
      o_83 = ATgetArgument(m_83, 1);
      k_83 :
      if(match_cons(o_83, sym_FunType_2))
        {
          p_83 = ATgetArgument(o_83, 0);
          l_83 = ATgetArgument(o_83, 1);
          {
            ATerm s_83 = NULL;
            ATerm t_83 = NULL;
            t = not_null(p_83);
            {
              t = map_1(t, TranslateType_0);
              {
                t_83 = t;
                if(((s_83 != NULL) && (s_83 != t_83)))
                  _fail(t_83);
                else
                  s_83 = t_83;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_g_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_83)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(s_83)))));
          }
        }
      else
        {
          if(match_cons(o_83, sym_ConstType_1))
            {
              p_83 = ATgetArgument(o_83, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_g_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_83)), term_h_9));
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
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_cons(f_84, sym_SDef_3))
    {
      g_84 = ATgetArgument(f_84, 0);
      h_84 = ATgetArgument(f_84, 1);
      i_84 = ATgetArgument(f_84, 2);
      {
        ATerm n_84 = NULL;
        ATerm o_84 = NULL;
        t = not_null(h_84);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            o_84 = t;
            {
              if(((n_84 != NULL) && (n_84 != o_84)))
                _fail(o_84);
              else
                n_84 = o_84;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_84), (ATerm) ATinsert(ATempty, term_g_9));
                t = conc_0(t);
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(n_84))))));
      }
    }
  else
    {
      if(match_cons(f_84, sym_SDefT_4))
        {
          g_84 = ATgetArgument(f_84, 0);
          h_84 = ATgetArgument(f_84, 1);
          i_84 = ATgetArgument(f_84, 2);
          j_84 = ATgetArgument(f_84, 3);
          {
            ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
            ATerm y_84 = NULL;
            t = not_null(h_84);
            {
              ATerm z_84 = NULL;
              t = map_1(t, TranslateVarDec_0);
              {
                y_84 = t;
                {
                  if(((v_84 != NULL) && (v_84 != y_84)))
                    _fail(y_84);
                  else
                    v_84 = y_84;
                  {
                    t = not_null(i_84);
                    {
                      ATerm a_85 = NULL;
                      t = map_1(t, TranslateVarDec_0);
                      {
                        z_84 = t;
                        {
                          if(((w_84 != NULL) && (w_84 != z_84)))
                            _fail(z_84);
                          else
                            w_84 = z_84;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_9)), not_null(w_84)), not_null(v_84));
                            {
                              t = concat_0(t);
                              {
                                a_85 = t;
                                if(((x_84 != NULL) && (x_84 != a_85)))
                                  _fail(a_85);
                                else
                                  x_84 = a_85;
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
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(x_84))))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL;
  t_85 = t;
  n_85 :
  if(match_cons(t_85, sym_Specification_1))
    {
      u_85 = ATgetArgument(t_85, 0);
      o_85 :
      if(((ATgetType(u_85) == AT_LIST) && !(ATisEmpty(u_85))))
        {
          v_85 = ATgetFirst((ATermList) u_85);
          x_85 = (ATerm) ATgetNext((ATermList) u_85);
          p_85 :
          if(match_cons(v_85, sym_Signature_1))
            {
              w_85 = ATgetArgument(v_85, 0);
              q_85 :
              if(((ATgetType(x_85) == AT_LIST) && !(ATisEmpty(x_85))))
                {
                  y_85 = ATgetFirst((ATermList) x_85);
                  a_86 = (ATerm) ATgetNext((ATermList) x_85);
                  r_85 :
                  if(match_cons(y_85, sym_Strategies_1))
                    {
                      z_85 = ATgetArgument(y_85, 0);
                      s_85 :
                      if(((ATgetType(a_86) == AT_LIST) && ATisEmpty(a_86)))
                        {
                          {
                            ATerm d_86 = NULL,g_86 = NULL,n_86 = NULL;
                            ATerm b_31;
                            b_31 = t;
                            {
                              ATerm h_86 = NULL;
                              t = not_null(z_85);
                              {
                                ATerm m_86 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  h_86 = t;
                                  {
                                    if(((d_86 != NULL) && (d_86 != h_86)))
                                      _fail(h_86);
                                    else
                                      d_86 = h_86;
                                    {
                                      t = term_m_8;
                                      {
                                        ATerm c_31 = t;
                                        int d_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm f_3 (ATerm t)
                                              {
                                                ATerm i_86 = NULL;
                                                ATerm j_86 = NULL,l_86 = NULL;
                                                ATerm k_86 = NULL;
                                                k_86 = t;
                                                if(((j_86 != NULL) && (j_86 != k_86)))
                                                  _fail(k_86);
                                                else
                                                  j_86 = k_86;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(j_86));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      l_86 = t;
                                                      if(((i_86 != NULL) && (i_86 != l_86)))
                                                        _fail(l_86);
                                                      else
                                                        i_86 = l_86;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(i_86));
                                                return(t);
                                              }
                                              t = map_1(t, f_3);
                                            }
                                            ;
                                            LocalPopChoice(d_31);
                                          }
                                        else
                                          {
                                            t = c_31;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          m_86 = t;
                                          if(((g_86 != NULL) && (g_86 != m_86)))
                                            _fail(m_86);
                                          else
                                            g_86 = m_86;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = b_31;
                            {
                              ATerm o_86 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(z_85)), term_a_32)), not_null(d_86)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_b_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_m_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_o_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_p_31), term_r_31, term_h_9))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_31), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_u_31))), term_j_27)))))))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(w_85))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_31, (ATerm) ATinsert(ATempty, term_k_31)))), not_null(g_86));
                              {
                                t = concat_0(t);
                                {
                                  o_86 = t;
                                  if(((n_86 != NULL) && (n_86 != o_86)))
                                    _fail(o_86);
                                  else
                                    n_86 = o_86;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(n_86));
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
ATerm downup2_2 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm))
{
  t = h_108(t);
  {
    ATerm g_3 (ATerm t)
    {
      t = downup2_2(t, h_108, i_108);
      return(t);
    }
    t = _all(t, g_3);
    t = i_108(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_134 (ATerm))
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym__2))
    {
      c_87 = ATgetArgument(b_87, 0);
      d_87 = ATgetArgument(b_87, 1);
      {
        ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
        ATerm b_32;
        b_32 = t;
        {
          ATerm j_87 = NULL;
          ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
          t = m_134(t);
          {
            j_87 = t;
            {
              if(((g_87 != NULL) && (g_87 != j_87)))
                _fail(j_87);
              else
                g_87 = j_87;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_87), not_null(c_87), not_null(d_87));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_32 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_87), term_e_32);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = c_32;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      k_87 = t;
                      z_86 :
                      if(((ATgetType(k_87) == AT_LIST) && !(ATisEmpty(k_87))))
                        {
                          l_87 = ATgetFirst((ATermList) k_87);
                          m_87 = (ATerm) ATgetNext((ATermList) k_87);
                          {
                            if(((h_87 != NULL) && (h_87 != l_87)))
                              _fail(l_87);
                            else
                              h_87 = l_87;
                            {
                              if(((i_87 != NULL) && (i_87 != m_87)))
                                _fail(m_87);
                              else
                                i_87 = m_87;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(g_87), term_e_32, (ATerm) ATinsert(CheckATermList(not_null(i_87)), (ATerm) ATinsert(CheckATermList(not_null(h_87)), not_null(c_87))));
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
        t = b_32;
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
  ATerm s_87 = NULL,t_87 = NULL;
  ATerm f_32;
  f_32 = t;
  {
    ATerm u_87 = NULL;
    ATerm v_87 = NULL;
    t = term_h_32;
    {
      u_87 = t;
      {
        if(((s_87 != NULL) && (s_87 != u_87)))
          _fail(u_87);
        else
          s_87 = u_87;
        {
          t = term_y_16;
          {
            v_87 = t;
            if(((t_87 != NULL) && (t_87 != v_87)))
              _fail(v_87);
            else
              t_87 = v_87;
          }
        }
      }
    }
  }
  t = f_32;
  {
    ATerm i_32;
    i_32 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), (ATerm) ATmakeAppl(sym_Defined_2, term_j_32, not_null(t_87)));
      {
        ATerm h_3 (ATerm t)
        {
          t = term_d_14;
          return(t);
        }
        t = assert_1(t, h_3);
      }
    }
    t = i_32;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSpec_0(t);
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm m_32 = t;
              int n_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateSig_0(t);
                  ;
                  LocalPopChoice(n_32);
                }
              else
                {
                  t = m_32;
                  {
                    ATerm o_32 = t;
                    int p_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateDef_0(t);
                        ;
                        LocalPopChoice(p_32);
                      }
                    else
                      {
                        t = o_32;
                        {
                          ATerm q_32 = t;
                          int r_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TranslateStratMatchGuard_0(t);
                              ;
                              LocalPopChoice(r_32);
                            }
                          else
                            {
                              t = q_32;
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
      t = repeat_1(t, k_3);
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      t = repeat_1(t, Csimplify_0);
      return(t);
    }
    t = downup2_2(t, i_3, j_3);
    {
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm a_88 = NULL;
          a_88 = t;
          z_87 :
          if(match_cons(a_88, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, m_3);
        return(t);
      }
      t = try_1(t, l_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_32;
  s_32 = t;
  {
    ATerm d_88 = NULL;
    ATerm e_88 = NULL;
    t = term_z_27;
    {
      t = whoami_0(t);
      {
        e_88 = t;
        if(((d_88 != NULL) && (d_88 != e_88)))
          _fail(e_88);
        else
          d_88 = e_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_32), not_null(d_88)), term_u_32));
      {
        t = printnl_0(t);
        {
          t = term_p_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_32;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym__2))
    {
      j_88 = ATgetArgument(i_88, 0);
      k_88 = ATgetArgument(i_88, 1);
      {
        ATerm a_33;
        a_33 = t;
        t = SSL_printnl(not_null(j_88), not_null(k_88));
        t = a_33;
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
  ATerm p_88 = NULL;
  p_88 = t;
  t = SSL_implode_string(not_null(p_88));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
        u_88 = t;
        t_88 :
        if(((ATgetType(u_88) == AT_LIST) && !(ATisEmpty(u_88))))
          {
            v_88 = ATgetFirst((ATermList) u_88);
            w_88 = (ATerm) ATgetNext((ATermList) u_88);
            {
              t = not_null(v_88);
              {
                ATerm n_3 (ATerm t)
                {
                  t = not_null(w_88);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_3);
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
  ATerm g_89 = NULL;
  ATerm i_89 = NULL;
  g_89 = t;
  {
    ATerm j_89 = NULL;
    ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
    t = not_null(g_89);
    {
      j_89 = t;
      {
        t = SSL_explode_term(not_null(j_89));
        {
          l_89 = t;
          e_89 :
          if(match_cons(l_89, sym__2))
            {
              m_89 = ATgetArgument(l_89, 0);
              n_89 = ATgetArgument(l_89, 1);
              f_89 :
              if(match_string(m_89, ""))
                {
                  if(((i_89 != NULL) && (i_89 != n_89)))
                    _fail(n_89);
                  else
                    i_89 = n_89;
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
      t = not_null(i_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_114 (ATerm))
{
  ATerm r_89 (ATerm t)
  {
    ATerm d_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_89);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = d_33;
        {
          t = Nil_0(t);
          t = j_114(t);
        }
      }
    return(t);
  }
  t = r_89(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym__2))
    {
      v_89 = ATgetArgument(u_89, 0);
      w_89 = ATgetArgument(u_89, 1);
      {
        t = not_null(v_89);
        {
          ATerm o_3 (ATerm t)
          {
            t = not_null(w_89);
            return(t);
          }
          t = at_end_1(t, o_3);
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
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_90 = NULL;
  b_90 = t;
  t = SSL_explode_string(not_null(b_90));
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
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_3);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            {
              ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
              k_90 = t;
              j_90 :
              if(match_cons(k_90, sym_Path_1))
                {
                  l_90 = ATgetArgument(k_90, 0);
                  t = not_null(l_90);
                }
              else
                {
                  if(match_cons(k_90, sym_Var_1))
                    {
                      l_90 = ATgetArgument(k_90, 0);
                      {
                        t = not_null(l_90);
                        {
                          ATerm p_33 = t;
                          int q_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(q_33);
                            }
                          else
                            {
                              t = p_33;
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = term_r_33;
                                  return(t);
                                }
                                t = debug_1(t, q_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_90, sym_Prefix_2))
                        {
                          l_90 = ATgetArgument(k_90, 0);
                          m_90 = ATgetArgument(k_90, 1);
                          {
                            ATerm r_90 = NULL,t_90 = NULL;
                            ATerm s_33;
                            s_33 = t;
                            {
                              ATerm s_90 = NULL;
                              t = not_null(l_90);
                              {
                                t = eval_config_0(t);
                                {
                                  s_90 = t;
                                  if(((r_90 != NULL) && (r_90 != s_90)))
                                    _fail(s_90);
                                  else
                                    r_90 = s_90;
                                }
                              }
                            }
                            t = s_33;
                            {
                              ATerm u_90 = NULL;
                              t = not_null(m_90);
                              {
                                t = eval_config_0(t);
                                {
                                  u_90 = t;
                                  if(((t_90 != NULL) && (t_90 != u_90)))
                                    _fail(u_90);
                                  else
                                    t_90 = u_90;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(t_90));
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
  ATerm c_91 = NULL;
  c_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_7, not_null(c_91));
    {
      t = table_get_0(t);
      {
        ATerm r_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_33;
            t_33 = t;
            {
              ATerm e_91 = NULL;
              ATerm f_91 = NULL;
              f_91 = t;
              if(((e_91 != NULL) && (e_91 != f_91)))
                _fail(f_91);
              else
                e_91 = f_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_7, not_null(c_91), not_null(e_91));
                t = table_put_0(t);
              }
            }
            t = t_33;
          }
          return(t);
        }
        t = try_1(t, r_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_127 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm u_33;
    u_33 = t;
    {
      ATerm j_91 = NULL;
      ATerm k_91 = NULL;
      t = term_w_33;
      {
        t = get_config_0(t);
        {
          k_91 = t;
          if(((j_91 != NULL) && (j_91 != k_91)))
            _fail(k_91);
          else
            j_91 = k_91;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_91), term_x_33);
        t = geq_0(t);
      }
    }
    t = u_33;
    t = a_127(t);
    return(t);
  }
  t = try_1(t, s_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  q_91 = t;
  o_91 :
  if(match_cons(q_91, sym__2))
    {
      r_91 = ATgetArgument(q_91, 0);
      s_91 = ATgetArgument(q_91, 1);
      p_91 :
      if(match_cons(s_91, sym_Stream_1))
        {
          t_91 = ATgetArgument(s_91, 0);
          {
            ATerm w_91 = NULL;
            t = SSL_fputc(not_null(r_91), not_null(t_91));
            {
              ATerm x_91 = NULL;
              x_91 = t;
              if(((w_91 != NULL) && (w_91 != x_91)))
                _fail(x_91);
              else
                w_91 = x_91;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_91));
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
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  e_92 = t;
  c_92 :
  if(match_cons(e_92, sym__2))
    {
      f_92 = ATgetArgument(e_92, 0);
      h_92 = ATgetArgument(e_92, 1);
      d_92 :
      if(match_cons(f_92, sym_Stream_1))
        {
          g_92 = ATgetArgument(f_92, 0);
          {
            ATerm k_92 = NULL;
            t = SSL_write_term_to_stream_text(not_null(g_92), not_null(h_92));
            {
              ATerm l_92 = NULL;
              l_92 = t;
              if(((k_92 != NULL) && (k_92 != l_92)))
                _fail(l_92);
              else
                k_92 = l_92;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_92));
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
  ATerm t_3 (ATerm t)
  {
    ATerm p_92 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm q_92 = NULL;
      q_92 = t;
      if(((p_92 != NULL) && (p_92 != q_92)))
        _fail(q_92);
      else
        p_92 = q_92;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_33, not_null(p_92));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, t_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL;
  w_92 = t;
  u_92 :
  if(match_cons(w_92, sym__2))
    {
      x_92 = ATgetArgument(w_92, 0);
      z_92 = ATgetArgument(w_92, 1);
      v_92 :
      if(match_cons(x_92, sym_Stream_1))
        {
          y_92 = ATgetArgument(x_92, 0);
          {
            ATerm c_93 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(y_92), not_null(z_92));
            {
              ATerm d_93 = NULL;
              d_93 = t;
              if(((c_93 != NULL) && (c_93 != d_93)))
                _fail(d_93);
              else
                c_93 = d_93;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_93));
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
ATerm WriteToFile_1 (ATerm t, ATerm w_125 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym__2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      {
        ATerm p_93 = NULL,r_93 = NULL;
        t = not_null(l_93);
        {
          ATerm q_93 = NULL;
          q_93 = t;
          if(((p_93 != NULL) && (p_93 != q_93)))
            _fail(q_93);
          else
            p_93 = q_93;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_93), term_z_33);
            {
              t = open_stream_0(t);
              {
                ATerm s_93 = NULL;
                s_93 = t;
                if(((r_93 != NULL) && (r_93 != s_93)))
                  _fail(s_93);
                else
                  r_93 = s_93;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_93), not_null(m_93));
                  {
                    t = w_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(m_93);
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
  ATerm a_94 = NULL;
  ATerm b_34;
  b_34 = t;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm d_34 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_3 (ATerm t)
          {
            ATerm b_94 = NULL,c_94 = NULL;
            b_94 = t;
            x_93 :
            if(match_cons(b_94, sym_Output_1))
              {
                c_94 = ATgetArgument(b_94, 0);
                if(((a_94 != NULL) && (a_94 != c_94)))
                  _fail(c_94);
                else
                  a_94 = c_94;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_3);
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = d_34;
          {
            ATerm d_94 = NULL;
            t = term_f_34;
            {
              d_94 = t;
              if(((a_94 != NULL) && (a_94 != d_94)))
                _fail(d_94);
              else
                a_94 = d_94;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_3, _id);
  }
  t = b_34;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        t = not_null(a_94);
        return(t);
      }
      t = split_2(t, x_3, _id);
      return(t);
    }
    t = _2(t, _id, w_3);
    {
      ATerm g_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_3 (ATerm t)
          {
            ATerm z_3 (ATerm t)
            {
              ATerm g_94 = NULL;
              g_94 = t;
              z_93 :
              if(!(match_cons(g_94, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_3);
            return(t);
          }
          t = _2(t, y_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(h_34);
        }
      else
        {
          t = g_34;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_127 (ATerm))
{
  ATerm m_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  ATerm q_34;
  q_34 = t;
  t = dtime_0(t);
  t = q_34;
  {
    t = w_127(t);
    {
      ATerm r_34;
      r_34 = t;
      {
        ATerm n_94 = NULL;
        t = dtime_0(t);
        {
          n_94 = t;
          if(((m_94 != NULL) && (m_94 != n_94)))
            _fail(n_94);
          else
            m_94 = n_94;
        }
      }
      t = r_34;
      {
        o_94 = t;
        l_94 :
        if(match_cons(o_94, sym__2))
          {
            p_94 = ATgetArgument(o_94, 0);
            q_94 = ATgetArgument(o_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_94))), not_null(q_94));
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
  ATerm y_94 = NULL,z_94 = NULL;
  ATerm f_95 (ATerm t)
  {
    t = SSL_fclose(not_null(z_94));
    return(t);
  }
  z_94 = t;
  x_94 :
  if(match_cons(z_94, sym_Stream_1))
    {
      y_94 = ATgetArgument(z_94, 0);
      {
        ATerm s_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_94));
            ;
            LocalPopChoice(v_34);
          }
        else
          {
            t = s_34;
            t = f_95(t);
          }
      }
    }
  else
    {
      t = f_95(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL;
  i_95 = t;
  h_95 :
  if(match_cons(i_95, sym_Stream_1))
    {
      j_95 = ATgetArgument(i_95, 0);
      t = SSL_read_term_from_stream(not_null(j_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_125 (ATerm))
{
  ATerm x_34;
  x_34 = t;
  {
    ATerm o_95 = NULL,q_95 = NULL;
    ATerm y_34;
    y_34 = t;
    {
      ATerm p_95 = NULL;
      t = i_125(t);
      {
        p_95 = t;
        if(((o_95 != NULL) && (o_95 != p_95)))
          _fail(p_95);
        else
          o_95 = p_95;
      }
    }
    t = y_34;
    {
      ATerm r_95 = NULL;
      r_95 = t;
      if(((q_95 != NULL) && (q_95 != r_95)))
        _fail(r_95);
      else
        q_95 = r_95;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_95)), not_null(o_95)));
        t = printnl_0(t);
      }
    }
  }
  t = x_34;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL;
  x_95 = t;
  w_95 :
  if(match_cons(x_95, sym__2))
    {
      y_95 = ATgetArgument(x_95, 0);
      z_95 = ATgetArgument(x_95, 1);
      {
        ATerm c_96 = NULL;
        t = SSL_fopen(not_null(y_95), not_null(z_95));
        {
          ATerm d_96 = NULL;
          d_96 = t;
          if(((c_96 != NULL) && (c_96 != d_96)))
            _fail(d_96);
          else
            c_96 = d_96;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_96));
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
  ATerm h_96 = NULL;
  h_96 = t;
  t = SSL_is_string(not_null(h_96));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  q_96 :
  if(match_cons(r_96, sym__2))
    {
      s_96 = ATgetArgument(r_96, 0);
      t_96 = ATgetArgument(r_96, 1);
      {
        ATerm x_96 = NULL,z_96 = NULL;
        ATerm y_96 = NULL;
        t = SSLgetAnnotations(not_null(r_96));
        {
          y_96 = t;
          if(((x_96 != NULL) && (x_96 != y_96)))
            _fail(y_96);
          else
            x_96 = y_96;
        }
        {
          t = not_null(s_96);
          {
            ATerm b_97 = NULL;
            t = i_83(t);
            {
              z_96 = t;
              {
                t = not_null(t_96);
                {
                  ATerm d_97 = NULL;
                  t = j_83(t);
                  {
                    b_97 = t;
                    {
                      ATerm e_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_96), not_null(b_97)), not_null(x_96));
                      {
                        e_97 = t;
                        if(((d_97 != NULL) && (d_97 != e_97)))
                          _fail(e_97);
                        else
                          d_97 = e_97;
                      }
                      t = not_null(d_97);
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
  ATerm l_97 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_97 = NULL;
    m_97 = t;
    if(((l_97 != NULL) && (l_97 != m_97)))
      _fail(m_97);
    else
      l_97 = m_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_97));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm p_97 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm q_97 = NULL;
    q_97 = t;
    if(((p_97 != NULL) && (p_97 != q_97)))
      _fail(q_97);
    else
      p_97 = q_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_97));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_97 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_97 = NULL;
    u_97 = t;
    if(((t_97 != NULL) && (t_97 != u_97)))
      _fail(u_97);
    else
      t_97 = u_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_97));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  z_97 :
  if(match_cons(a_98, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(a_98, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(a_98, sym_stdin_0))
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
  ATerm k_98 = NULL;
  ATerm m_98 = NULL,n_98 = NULL;
  k_98 = t;
  {
    ATerm o_98 = NULL;
    ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
    t = not_null(k_98);
    {
      o_98 = t;
      {
        t = SSL_explode_term(not_null(o_98));
        {
          q_98 = t;
          h_98 :
          if(match_cons(q_98, sym__2))
            {
              r_98 = ATgetArgument(q_98, 0);
              s_98 = ATgetArgument(q_98, 1);
              i_98 :
              if(match_string(r_98, ""))
                {
                  j_98 :
                  if(((ATgetType(s_98) == AT_LIST) && !(ATisEmpty(s_98))))
                    {
                      t_98 = ATgetFirst((ATermList) s_98);
                      u_98 = (ATerm) ATgetNext((ATermList) s_98);
                      {
                        if(((n_98 != NULL) && (n_98 != t_98)))
                          _fail(t_98);
                        else
                          n_98 = t_98;
                        if(((m_98 != NULL) && (m_98 != u_98)))
                          _fail(u_98);
                        else
                          m_98 = u_98;
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
    t = not_null(n_98);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
  c_99 = t;
  b_99 :
  if(match_cons(c_99, sym__2))
    {
      d_99 = ATgetArgument(c_99, 0);
      e_99 = ATgetArgument(c_99, 1);
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            {
              ATerm b_35 = t;
              int c_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm f_99 = NULL,g_99 = NULL;
                    f_99 = t;
                    a_99 :
                    if(match_cons(f_99, sym_Path_1))
                      {
                        g_99 = ATgetArgument(f_99, 0);
                        t = not_null(g_99);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, a_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_35);
                }
              else
                {
                  t = b_35;
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
  ATerm o_99 = NULL;
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_99 = NULL;
      ATerm n_99 = NULL;
      n_99 = t;
      if(((m_99 != NULL) && (m_99 != n_99)))
        _fail(n_99);
      else
        m_99 = n_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_99), term_u_37);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm b_4 (ATerm t)
        {
          t = term_x_37;
          return(t);
        }
        t = debug_1(t, b_4);
        _fail(t);
      }
    }
  {
    ATerm y_37;
    y_37 = t;
    {
      ATerm p_99 = NULL;
      t = read_from_stream_0(t);
      {
        p_99 = t;
        if(((o_99 != NULL) && (o_99 != p_99)))
          _fail(p_99);
        else
          o_99 = p_99;
      }
    }
    t = y_37;
    {
      t = fclose_0(t);
      t = not_null(o_99);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_121 (ATerm), ATerm k_121 (ATerm))
{
  ATerm w_99 = NULL,y_99 = NULL;
  ATerm z_37;
  z_37 = t;
  {
    ATerm x_99 = NULL;
    t = j_121(t);
    {
      x_99 = t;
      if(((w_99 != NULL) && (w_99 != x_99)))
        _fail(x_99);
      else
        w_99 = x_99;
    }
  }
  t = z_37;
  {
    ATerm z_99 = NULL;
    t = k_121(t);
    {
      z_99 = t;
      if(((y_99 != NULL) && (y_99 != z_99)))
        _fail(z_99);
      else
        y_99 = z_99;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_99), not_null(y_99));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_100 = NULL;
  ATerm a_38;
  a_38 = t;
  {
    ATerm j_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 (ATerm t)
        {
          ATerm g_100 = NULL,h_100 = NULL;
          g_100 = t;
          d_100 :
          if(match_cons(g_100, sym_Input_1))
            {
              h_100 = ATgetArgument(g_100, 0);
              if(((f_100 != NULL) && (f_100 != h_100)))
                _fail(h_100);
              else
                f_100 = h_100;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_4);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = j_38;
        {
          ATerm i_100 = NULL;
          t = term_o_38;
          {
            i_100 = t;
            if(((f_100 != NULL) && (f_100 != i_100)))
              _fail(i_100);
            else
              f_100 = i_100;
          }
        }
      }
  }
  t = a_38;
  {
    ATerm d_4 (ATerm t)
    {
      t = not_null(f_100);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm n_100 = NULL;
    n_100 = t;
    l_100 :
    if(!(match_string(n_100, "-k")))
      {
        if(!(match_string(n_100, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm p_38;
    p_38 = t;
    {
      ATerm o_100 = NULL;
      ATerm p_100 = NULL;
      t = string_to_int_0(t);
      {
        p_100 = t;
        if(((o_100 != NULL) && (o_100 != p_100)))
          _fail(p_100);
        else
          o_100 = p_100;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_38, not_null(o_100));
        t = set_config_0(t);
      }
    }
    t = p_38;
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_v_38;
    return(t);
  }
  t = ArgOption_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_100 = NULL;
  s_100 = t;
  t = SSL_string_to_int(not_null(s_100));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 (ATerm t)
      {
        ATerm a_101 = NULL;
        a_101 = t;
        v_100 :
        if(!(match_string(a_101, "-S")))
          {
            if(!(match_string(a_101, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_y_38;
        t = set_config_0(t);
        t = term_z_38;
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = term_a_39;
        return(t);
      }
      t = Option_3(t, h_4, i_4, j_4);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              ATerm b_101 = NULL;
              b_101 = t;
              w_100 :
              if(!(match_string(b_101, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_4 (ATerm t)
            {
              ATerm e_101 = NULL;
              ATerm d_39;
              d_39 = t;
              {
                ATerm c_101 = NULL;
                ATerm d_101 = NULL;
                t = string_to_int_0(t);
                {
                  d_101 = t;
                  if(((c_101 != NULL) && (c_101 != d_101)))
                    _fail(d_101);
                  else
                    c_101 = d_101;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_33, not_null(c_101));
                  t = set_config_0(t);
                }
              }
              t = d_39;
              {
                ATerm f_101 = NULL;
                f_101 = t;
                if(((e_101 != NULL) && (e_101 != f_101)))
                  _fail(f_101);
                else
                  e_101 = f_101;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_101));
              }
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              t = term_e_39;
              return(t);
            }
            t = ArgOption_3(t, k_4, l_4, m_4);
            ;
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm g_101 = NULL;
                g_101 = t;
                z_100 :
                if(!(match_string(g_101, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_g_39;
                t = set_config_0(t);
                t = term_h_39;
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_i_39;
                return(t);
              }
              t = Option_3(t, n_4, o_4, p_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm m_101 = NULL;
    m_101 = t;
    j_101 :
    if(!(match_string(m_101, "-o")))
      {
        if(!(match_string(m_101, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm p_101 = NULL;
    ATerm o_39;
    o_39 = t;
    {
      ATerm n_101 = NULL;
      ATerm o_101 = NULL;
      o_101 = t;
      if(((n_101 != NULL) && (n_101 != o_101)))
        _fail(o_101);
      else
        n_101 = o_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_39, not_null(n_101));
        t = set_config_0(t);
      }
    }
    t = o_39;
    {
      ATerm q_101 = NULL;
      q_101 = t;
      if(((p_101 != NULL) && (p_101 != q_101)))
        _fail(q_101);
      else
        p_101 = q_101;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_101));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_q_39;
    return(t);
  }
  t = ArgOption_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm u_101 = NULL;
          u_101 = t;
          t_101 :
          if(!(match_string(u_101, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_u_39;
          t = set_config_0(t);
          t = term_v_39;
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_w_39;
          return(t);
        }
        t = Option_3(t, t_4, u_4, v_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  a_102 = t;
  y_101 :
  if(match_string(a_102, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(a_102) == AT_LIST) && !(ATisEmpty(a_102))))
        {
          b_102 = ATgetFirst((ATermList) a_102);
          c_102 = (ATerm) ATgetNext((ATermList) a_102);
          z_101 :
          if(((ATgetType(c_102) == AT_LIST) && !(ATisEmpty(c_102))))
            {
              d_102 = ATgetFirst((ATermList) c_102);
              e_102 = (ATerm) ATgetNext((ATermList) c_102);
              {
                ATerm i_102 = NULL;
                ATerm x_39;
                x_39 = t;
                {
                  t = not_null(b_102);
                  t = k_0(t);
                }
                t = x_39;
                {
                  ATerm j_102 = NULL;
                  t = not_null(d_102);
                  {
                    t = m_0(t);
                    {
                      j_102 = t;
                      if(((i_102 != NULL) && (i_102 != j_102)))
                        _fail(j_102);
                      else
                        i_102 = j_102;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_102)), not_null(i_102));
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
  ATerm w_4 (ATerm t)
  {
    ATerm q_102 = NULL;
    q_102 = t;
    n_102 :
    if(!(match_string(q_102, "-i")))
      {
        if(!(match_string(q_102, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm t_102 = NULL;
    ATerm y_39;
    y_39 = t;
    {
      ATerm r_102 = NULL;
      ATerm s_102 = NULL;
      s_102 = t;
      if(((r_102 != NULL) && (r_102 != s_102)))
        _fail(s_102);
      else
        r_102 = s_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_39, not_null(r_102));
        t = set_config_0(t);
      }
    }
    t = y_39;
    {
      ATerm u_102 = NULL;
      u_102 = t;
      if(((t_102 != NULL) && (t_102 != u_102)))
        _fail(u_102);
      else
        t_102 = u_102;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_102));
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_a_40;
    return(t);
  }
  t = ArgOption_3(t, w_4, x_4, y_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm y_102 = NULL;
  t = report_run_time_0(t);
  {
    ATerm z_102 = NULL;
    t = term_z_27;
    {
      t = whoami_0(t);
      {
        z_102 = t;
        if(((y_102 != NULL) && (y_102 != z_102)))
          _fail(z_102);
        else
          y_102 = z_102;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATempty, term_f_40), not_null(y_102)));
      {
        t = printnl_0(t);
        {
          t = term_p_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_g_40;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_103 = NULL;
  c_103 = t;
  t = SSL_TicksToSeconds(not_null(c_103));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL;
  h_103 = t;
  g_103 :
  if(match_cons(h_103, sym__2))
    {
      i_103 = ATgetArgument(h_103, 0);
      j_103 = ATgetArgument(h_103, 1);
      {
        ATerm h_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_103), not_null(j_103));
            ;
            LocalPopChoice(i_40);
          }
        else
          {
            t = h_40;
            t = SSL_addr(not_null(i_103), not_null(j_103));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_119 (ATerm), ATerm v_119 (ATerm))
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_119(t);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      {
        ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
        q_103 = t;
        p_103 :
        if(((ATgetType(q_103) == AT_LIST) && !(ATisEmpty(q_103))))
          {
            r_103 = ATgetFirst((ATermList) q_103);
            s_103 = (ATerm) ATgetNext((ATermList) q_103);
            {
              ATerm v_103 = NULL;
              ATerm w_103 = NULL;
              t = not_null(s_103);
              {
                t = foldr_2(t, u_119, v_119);
                {
                  w_103 = t;
                  if(((v_103 != NULL) && (v_103 != w_103)))
                    _fail(w_103);
                  else
                    v_103 = w_103;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_103), not_null(v_103));
                t = v_119(t);
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
ATerm crush_2 (ATerm t, ATerm n_123 (ATerm), ATerm o_123 (ATerm))
{
  ATerm d_104 = NULL;
  ATerm f_104 = NULL;
  d_104 = t;
  {
    ATerm g_104 = NULL;
    ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
    t = not_null(d_104);
    {
      g_104 = t;
      {
        t = SSL_explode_term(not_null(g_104));
        {
          i_104 = t;
          c_104 :
          if(match_cons(i_104, sym__2))
            {
              j_104 = ATgetArgument(i_104, 0);
              k_104 = ATgetArgument(i_104, 1);
              if(((f_104 != NULL) && (f_104 != k_104)))
                _fail(k_104);
              else
                f_104 = k_104;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_104);
      t = foldr_2(t, n_123, o_123);
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
    ATerm z_4 (ATerm t)
    {
      t = term_d_17;
      return(t);
    }
    t = crush_2(t, z_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
  q_104 = t;
  p_104 :
  if(match_cons(q_104, sym__2))
    {
      r_104 = ATgetArgument(q_104, 0);
      s_104 = ATgetArgument(q_104, 1);
      {
        ATerm l_40;
        l_40 = t;
        {
          ATerm m_40 = t;
          int n_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_104), not_null(s_104));
              ;
              LocalPopChoice(n_40);
            }
          else
            {
              t = m_40;
              t = SSL_gtr(not_null(r_104), not_null(s_104));
            }
        }
        t = l_40;
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
  ATerm y_104 = NULL;
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL;
      z_104 = t;
      x_104 :
      if(match_cons(z_104, sym__2))
        {
          a_105 = ATgetArgument(z_104, 0);
          b_105 = ATgetArgument(z_104, 1);
          {
            if(((y_104 != NULL) && (y_104 != a_105)))
              _fail(a_105);
            else
              y_104 = a_105;
            if(((y_104 != NULL) && (y_104 != b_105)))
              _fail(b_105);
            else
              y_104 = b_105;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_126 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_40;
    q_40 = t;
    {
      ATerm e_105 = NULL;
      ATerm f_105 = NULL;
      t = term_w_33;
      {
        t = get_config_0(t);
        {
          f_105 = t;
          if(((e_105 != NULL) && (e_105 != f_105)))
            _fail(f_105);
          else
            e_105 = f_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_105), term_p_17);
        t = geq_0(t);
      }
    }
    t = q_40;
    t = z_126(t);
    return(t);
  }
  t = try_1(t, a_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm j_105 = NULL,l_105 = NULL;
    ATerm r_40;
    r_40 = t;
    {
      ATerm k_105 = NULL;
      t = run_time_0(t);
      {
        k_105 = t;
        if(((j_105 != NULL) && (j_105 != k_105)))
          _fail(k_105);
        else
          j_105 = k_105;
      }
    }
    t = r_40;
    {
      ATerm m_105 = NULL;
      t = term_z_27;
      {
        t = whoami_0(t);
        {
          m_105 = t;
          if(((l_105 != NULL) && (l_105 != m_105)))
            _fail(m_105);
          else
            l_105 = m_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_40), not_null(j_105)), term_s_40), not_null(l_105)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_d_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym_Version_0))
    {
      ATerm v_105 = NULL,x_105 = NULL;
      ATerm u_40;
      u_40 = t;
      {
        ATerm w_105 = NULL;
        t = SSLgetAnnotations(not_null(t_105));
        {
          w_105 = t;
          if(((v_105 != NULL) && (v_105 != w_105)))
            _fail(w_105);
          else
            v_105 = w_105;
        }
      }
      t = u_40;
      {
        ATerm y_105 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_105));
        {
          y_105 = t;
          if(((x_105 != NULL) && (x_105 != y_105)))
            _fail(y_105);
          else
            x_105 = y_105;
        }
        t = not_null(x_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_128 (ATerm))
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_40;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              {
                ATerm a_41 = t;
                int b_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(b_41);
                  }
                else
                  {
                    t = a_41;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  t = u_128(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_106 = NULL;
  d_106 = t;
  t = SSL_table_create(not_null(d_106));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_106 = NULL;
  j_106 = t;
  {
    ATerm c_41;
    c_41 = t;
    {
      t = term_d_41;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_41, term_e_41, not_null(j_106));
          t = table_put_0(t);
        }
      }
    }
    t = c_41;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_106 = NULL;
  n_106 = t;
  t = SSL_table_destroy(not_null(n_106));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_106 = NULL;
  r_106 = t;
  t = SSL_exit(not_null(r_106));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_113 (ATerm))
{
  ATerm u_106 (ATerm t)
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = Cons_2(t, t_113, u_106);
      }
    return(t);
  }
  t = u_106(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
  d_107 = t;
  a_107 :
  if(((ATgetType(d_107) == AT_LIST) && !(ATisEmpty(d_107))))
    {
      b_107 = ATgetFirst((ATermList) d_107);
      c_107 = (ATerm) ATgetNext((ATermList) d_107);
      {
        ATerm i_107 = NULL;
        t = not_null(c_107);
        {
          ATerm h_41;
          h_41 = t;
          {
            ATerm j_107 = NULL,l_107 = NULL,n_107 = NULL;
            ATerm i_41;
            i_41 = t;
            {
              ATerm k_107 = NULL;
              t = i_0(t);
              {
                k_107 = t;
                if(((j_107 != NULL) && (j_107 != k_107)))
                  _fail(k_107);
                else
                  j_107 = k_107;
              }
            }
            t = i_41;
            {
              ATerm m_107 = NULL;
              t = not_null(b_107);
              {
                t = g_0(t);
                {
                  m_107 = t;
                  if(((l_107 != NULL) && (l_107 != m_107)))
                    _fail(m_107);
                  else
                    l_107 = m_107;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_107)), not_null(l_107));
                {
                  n_107 = t;
                  if(((i_107 != NULL) && (i_107 != n_107)))
                    _fail(n_107);
                  else
                    i_107 = n_107;
                }
              }
            }
          }
          t = h_41;
          {
            ATerm d_5 (ATerm t)
            {
              t = not_null(i_107);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_107) == AT_LIST) && ATisEmpty(d_107)))
        {
          {
            t = term_z_27;
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
  ATerm e_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm y_107 = NULL,z_107 = NULL;
  y_107 = t;
  x_107 :
  if(match_cons(y_107, sym_Program_1))
    {
      z_107 = ATgetArgument(y_107, 0);
      {
        ATerm e_108 = NULL,g_108 = NULL;
        ATerm f_108 = NULL;
        t = SSLgetAnnotations(not_null(y_107));
        {
          f_108 = t;
          if(((e_108 != NULL) && (e_108 != f_108)))
            _fail(f_108);
          else
            e_108 = f_108;
        }
        {
          t = not_null(z_107);
          {
            ATerm k_108 = NULL;
            t = e_94(t);
            {
              g_108 = t;
              {
                ATerm l_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_108)), not_null(e_108));
                {
                  l_108 = t;
                  if(((k_108 != NULL) && (k_108 != l_108)))
                    _fail(l_108);
                  else
                    k_108 = l_108;
                }
                t = not_null(k_108);
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
  ATerm u_108 = NULL;
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_108 = NULL;
      t = term_g_40;
      {
        t = get_config_0(t);
        {
          v_108 = t;
          if(((u_108 != NULL) && (u_108 != v_108)))
            _fail(v_108);
          else
            u_108 = v_108;
        }
      }
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm f_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm w_108 = NULL;
            w_108 = t;
            if(((u_108 != NULL) && (u_108 != w_108)))
              _fail(w_108);
            else
              u_108 = w_108;
            return(t);
          }
          t = Program_1(t, g_5);
          return(t);
        }
        t = option_defined_1(t, f_5);
      }
    }
  {
    ATerm h_5 (ATerm t)
    {
      ATerm i_5 (ATerm t)
      {
        t = not_null(u_108);
        return(t);
      }
      t = short_description_1(t, i_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_5);
    {
      t = term_l_41;
      {
        t = echo_0(t);
        {
          t = term_o_41;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm x_108 = NULL;
                  ATerm y_108 = NULL;
                  y_108 = t;
                  if(((x_108 != NULL) && (x_108 != y_108)))
                    _fail(y_108);
                  else
                    x_108 = y_108;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_108)), term_p_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm z_108 = NULL;
                    ATerm a_109 = NULL;
                    ATerm o_5 (ATerm t)
                    {
                      t = not_null(u_108);
                      return(t);
                    }
                    t = long_description_1(t, o_5);
                    {
                      a_109 = t;
                      if(((z_108 != NULL) && (z_108 != a_109)))
                        _fail(a_109);
                      else
                        z_108 = a_109;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_108)), term_q_41);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_5);
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
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm m_109 = NULL,n_109 = NULL;
  m_109 = t;
  l_109 :
  if(match_cons(m_109, sym_Undefined_1))
    {
      n_109 = ATgetArgument(m_109, 0);
      {
        ATerm q_109 = NULL,s_109 = NULL;
        ATerm r_109 = NULL;
        t = SSLgetAnnotations(not_null(m_109));
        {
          r_109 = t;
          if(((q_109 != NULL) && (q_109 != r_109)))
            _fail(r_109);
          else
            q_109 = r_109;
        }
        {
          t = not_null(n_109);
          {
            ATerm u_109 = NULL;
            t = f_94(t);
            {
              s_109 = t;
              {
                ATerm v_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_109)), not_null(q_109));
                {
                  v_109 = t;
                  if(((u_109 != NULL) && (u_109 != v_109)))
                    _fail(v_109);
                  else
                    u_109 = v_109;
                }
                t = not_null(u_109);
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
ATerm fetch_1 (ATerm t, ATerm d_114 (ATerm))
{
  ATerm a_110 (ATerm t)
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_114, _id);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = Cons_2(t, _id, a_110);
      }
    return(t);
  }
  t = a_110(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_130 (ATerm))
{
  t = fetch_1(t, i_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  b_110 :
  if(((ATgetType(c_110) == AT_LIST) && ATisEmpty(c_110)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_110) == AT_LIST) && !(ATisEmpty(c_110))))
        {
          d_110 = ATgetFirst((ATermList) c_110);
          e_110 = (ATerm) ATgetNext((ATermList) c_110);
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
  ATerm v_41;
  v_41 = t;
  {
    ATerm h_110 = NULL;
    ATerm k_110 = NULL;
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        {
          ATerm i_110 = NULL;
          ATerm j_110 = NULL;
          j_110 = t;
          if(((i_110 != NULL) && (i_110 != j_110)))
            _fail(j_110);
          else
            i_110 = j_110;
          t = (ATerm) ATinsert(ATempty, not_null(i_110));
        }
      }
    {
      k_110 = t;
      if(((h_110 != NULL) && (h_110 != k_110)))
        _fail(k_110);
      else
        h_110 = k_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_34, not_null(h_110));
      t = printnl_0(t);
    }
  }
  t = v_41;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_g_40;
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
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_110 = NULL;
  r_110 = t;
  q_110 :
  if(match_cons(r_110, sym_Help_0))
    {
      ATerm t_110 = NULL,v_110 = NULL;
      ATerm a_42;
      a_42 = t;
      {
        ATerm u_110 = NULL;
        t = SSLgetAnnotations(not_null(r_110));
        {
          u_110 = t;
          if(((t_110 != NULL) && (t_110 != u_110)))
            _fail(u_110);
          else
            t_110 = u_110;
        }
      }
      t = a_42;
      {
        ATerm w_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_110));
        {
          w_110 = t;
          if(((v_110 != NULL) && (v_110 != w_110)))
            _fail(w_110);
          else
            v_110 = w_110;
        }
        t = not_null(v_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_106(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm c_111 = NULL;
        c_111 = t;
        a_111 :
        if(!(match_string(c_111, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = term_g_42;
        t = set_config_0(t);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_h_42;
        return(t);
      }
      t = Option_3(t, p_5, q_5, r_5);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm d_111 = NULL;
          d_111 = t;
          b_111 :
          if(!(match_string(d_111, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_g_42;
          {
            t = set_config_0(t);
            {
              t = term_j_42;
              t = set_config_0(t);
            }
          }
          t = term_k_42;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_l_42;
          return(t);
        }
        t = Option_3(t, s_5, t_5, u_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL;
  g_111 = t;
  f_111 :
  if(match_cons(g_111, sym__2))
    {
      h_111 = ATgetArgument(g_111, 0);
      i_111 = ATgetArgument(g_111, 1);
      t = SSL_table_get(not_null(h_111), not_null(i_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  p_111 = t;
  o_111 :
  if(match_cons(p_111, sym__3))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      s_111 = ATgetArgument(p_111, 2);
      {
        ATerm m_42;
        m_42 = t;
        {
          ATerm w_111 = NULL;
          ATerm x_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_111), not_null(r_111));
          {
            ATerm n_42 = t;
            int o_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_42);
              }
            else
              {
                t = n_42;
                t = (ATerm) ATempty;
              }
            {
              x_111 = t;
              if(((w_111 != NULL) && (w_111 != x_111)))
                _fail(x_111);
              else
                w_111 = x_111;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_111), not_null(r_111), (ATerm) ATinsert(CheckATermList(not_null(w_111)), not_null(s_111)));
            t = table_put_0(t);
          }
        }
        t = m_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_131 (ATerm))
{
  ATerm b_112 = NULL;
  ATerm c_112 = NULL;
  t = term_z_27;
  {
    t = n_131(t);
    {
      c_112 = t;
      if(((b_112 != NULL) && (b_112 != c_112)))
        _fail(c_112);
      else
        b_112 = c_112;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_41, term_n_41, not_null(b_112));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL;
  i_112 = t;
  h_112 :
  if(match_string(i_112, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(i_112) == AT_LIST) && !(ATisEmpty(i_112))))
        {
          j_112 = ATgetFirst((ATermList) i_112);
          k_112 = (ATerm) ATgetNext((ATermList) i_112);
          {
            ATerm n_112 = NULL;
            ATerm p_42;
            p_42 = t;
            {
              t = not_null(j_112);
              t = a_0(t);
            }
            t = p_42;
            {
              ATerm o_112 = NULL;
              t = term_z_27;
              {
                t = b_0(t);
                {
                  o_112 = t;
                  if(((n_112 != NULL) && (n_112 != o_112)))
                    _fail(o_112);
                  else
                    n_112 = o_112;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_112)), not_null(n_112));
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
  ATerm v_5 (ATerm t)
  {
    ATerm t_112 = NULL;
    t_112 = t;
    s_112 :
    if(!(match_string(t_112, "--help")))
      {
        if(!(match_string(t_112, "-h")))
          {
            if(!(match_string(t_112, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = term_q_42;
    {
      t = set_config_0(t);
      t = term_r_42;
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_s_42;
    return(t);
  }
  t = Option_3(t, v_5, x_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
  w_112 = t;
  v_112 :
  if(((ATgetType(w_112) == AT_LIST) && !(ATisEmpty(w_112))))
    {
      x_112 = ATgetFirst((ATermList) w_112);
      y_112 = (ATerm) ATgetNext((ATermList) w_112);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_112)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_112)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL;
  i_113 = t;
  h_113 :
  if(((ATgetType(i_113) == AT_LIST) && !(ATisEmpty(i_113))))
    {
      j_113 = ATgetFirst((ATermList) i_113);
      k_113 = (ATerm) ATgetNext((ATermList) i_113);
      {
        ATerm o_113 = NULL,q_113 = NULL;
        ATerm p_113 = NULL;
        t = SSLgetAnnotations(not_null(i_113));
        {
          p_113 = t;
          if(((o_113 != NULL) && (o_113 != p_113)))
            _fail(p_113);
          else
            o_113 = p_113;
        }
        {
          t = not_null(j_113);
          {
            ATerm v_113 = NULL;
            t = r_84(t);
            {
              q_113 = t;
              {
                t = not_null(k_113);
                {
                  ATerm x_113 = NULL;
                  t = s_84(t);
                  {
                    v_113 = t;
                    {
                      ATerm y_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_113)), not_null(q_113)), not_null(o_113));
                      {
                        y_113 = t;
                        if(((x_113 != NULL) && (x_113 != y_113)))
                          _fail(y_113);
                        else
                          x_113 = y_113;
                      }
                      t = not_null(x_113);
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
  ATerm m_114 = NULL;
  m_114 = t;
  l_114 :
  if(((ATgetType(m_114) == AT_LIST) && ATisEmpty(m_114)))
    {
      {
        ATerm o_114 = NULL,q_114 = NULL;
        ATerm t_42;
        t_42 = t;
        {
          ATerm p_114 = NULL;
          t = SSLgetAnnotations(not_null(m_114));
          {
            p_114 = t;
            if(((o_114 != NULL) && (o_114 != p_114)))
              _fail(p_114);
            else
              o_114 = p_114;
          }
        }
        t = t_42;
        {
          ATerm r_114 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_114));
          {
            r_114 = t;
            if(((q_114 != NULL) && (q_114 != r_114)))
              _fail(r_114);
            else
              q_114 = r_114;
          }
          t = not_null(q_114);
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
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym__2))
    {
      y_114 = ATgetArgument(x_114, 0);
      z_114 = ATgetArgument(x_114, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_7, not_null(y_114), not_null(z_114));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_131 (ATerm))
{
  ATerm u_42;
  u_42 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_v_42;
      t = l_131(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = u_42;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm h_115 = NULL;
      ATerm w_42;
      w_42 = t;
      {
        ATerm f_115 = NULL;
        ATerm g_115 = NULL;
        g_115 = t;
        if(((f_115 != NULL) && (f_115 != g_115)))
          _fail(g_115);
        else
          f_115 = g_115;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_40, not_null(f_115));
          t = set_config_0(t);
        }
      }
      t = w_42;
      {
        ATerm i_115 = NULL;
        i_115 = t;
        if(((h_115 != NULL) && (h_115 != i_115)))
          _fail(i_115);
        else
          h_115 = i_115;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_115));
      }
      return(t);
    }
    ATerm b_6 (ATerm t)
    {
      ATerm x_42 = t;
      int y_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_42 = t;
          int a_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_43);
            }
          else
            {
              t = z_42;
              {
                t = l_131(t);
                t = Cons_2(t, _id, b_6);
              }
            }
          ;
          LocalPopChoice(y_42);
        }
      else
        {
          t = x_42;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, b_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL;
  ATerm b_43;
  b_43 = t;
  {
    ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL;
    r_115 = t;
    n_115 :
    if(match_cons(r_115, sym__3))
      {
        s_115 = ATgetArgument(r_115, 0);
        t_115 = ATgetArgument(r_115, 1);
        u_115 = ATgetArgument(r_115, 2);
        {
          if(((o_115 != NULL) && (o_115 != s_115)))
            _fail(s_115);
          else
            o_115 = s_115;
          {
            if(((p_115 != NULL) && (p_115 != t_115)))
              _fail(t_115);
            else
              p_115 = t_115;
            {
              if(((q_115 != NULL) && (q_115 != u_115)))
                _fail(u_115);
              else
                q_115 = u_115;
              t = SSL_table_put(not_null(o_115), not_null(p_115), not_null(q_115));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_43;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_131 (ATerm))
{
  ATerm x_115 = NULL;
  ATerm c_43;
  c_43 = t;
  {
    t = term_d_43;
    t = table_put_0(t);
  }
  t = c_43;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_131(t);
          ;
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          {
            ATerm g_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(h_43);
              }
            else
              {
                t = g_43;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_43;
            k_43 = t;
            {
              ATerm l_43 = t;
              int m_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_43);
                }
              else
                {
                  t = l_43;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_43;
            {
              t = system_usage_0(t);
              {
                t = term_d_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            {
              ATerm o_43 = t;
              int p_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_43;
                  q_43 = t;
                  {
                    t = term_f_42;
                    t = get_config_0(t);
                  }
                  t = q_43;
                  {
                    t = system_about_0(t);
                    {
                      t = term_d_17;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(p_43);
                }
              else
                {
                  t = o_43;
                  {
                    ATerm i_6 (ATerm t)
                    {
                      ATerm l_6 (ATerm t)
                      {
                        ATerm y_115 = NULL;
                        y_115 = t;
                        if(((x_115 != NULL) && (x_115 != y_115)))
                          _fail(y_115);
                        else
                          x_115 = y_115;
                        return(t);
                      }
                      t = Undefined_1(t, l_6);
                      return(t);
                    }
                    t = option_defined_1(t, i_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_115)), term_r_43));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_p_17;
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
      t = try_1(t, h_6);
      {
        ATerm s_43;
        s_43 = t;
        {
          t = term_m_41;
          t = table_destroy_0(t);
        }
        t = s_43;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm))
{
  t = parse_options_1(t, w_128);
  {
    t = store_options_0(t);
    {
      t = y_128(t);
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_128);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            {
              ATerm v_43 = t;
              int w_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_128(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_43);
                }
              else
                {
                  t = v_43;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_128(t);
        ;
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_6, n_128, o_128, o_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm h_128 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm y_6 (ATerm t)
    {
      ATerm z_43;
      z_43 = t;
      {
        ATerm b_116 = NULL;
        ATerm c_116 = NULL;
        t = term_g_40;
        {
          t = get_config_0(t);
          {
            c_116 = t;
            if(((b_116 != NULL) && (b_116 != c_116)))
              _fail(c_116);
            else
              b_116 = c_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATempty, not_null(b_116)));
          t = printnl_0(t);
        }
      }
      t = z_43;
      return(t);
    }
    t = if_verbose2_1(t, y_6);
    return(t);
  }
  t = iowrap_4(t, f_128, g_128, h_128, s_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_128 (ATerm), ATerm e_128 (ATerm))
{
  t = iowrap_3(t, d_128, e_128, default_usage_0);
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
