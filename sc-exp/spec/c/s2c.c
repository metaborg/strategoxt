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
ATerm term_d_44;
ATerm term_q_43;
ATerm term_h_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_j_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_c_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_g_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_i_32;
ATerm term_b_32;
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
ATerm term_x_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_x_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_j_23;
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
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_m_20;
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
ATerm term_k_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_n_11;
ATerm term_i_9;
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
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
void init_constant_terms (void)
{
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_s_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Id_1, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_9, (ATerm) ATempty);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Id_1, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_9, (ATerm) ATempty);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_TypeName_2, term_h_9, term_i_9);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Id_1, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Id_1, term_k_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Id_1, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_1, term_b_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Id_1, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Id_1, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, term_y_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_g_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Id_1, term_t_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Id_1, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Id_1, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_18, (ATerm) ATempty);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_18, term_i_9);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_q_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_18, (ATerm) ATempty);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_y_18, term_i_9);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Id_1, term_e_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_19, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_19, term_i_9);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Id_1, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_20, term_i_9);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_z_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Id_1, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Id_1, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_18);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_21, term_v_15);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Id_1, term_r_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, term_d_18);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Id_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_22, term_v_15);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_22, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Id_1, term_t_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Id_1, term_e_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_23, (ATerm) ATempty);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_19);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, term_d_18);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Return_1, term_d_18);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Id_1, term_j_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_18, term_i_9);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_h_9, term_q_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Id_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Id_1, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_9, (ATerm) ATempty);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Id_1, term_o_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_30, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_31, (ATerm) ATempty);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Some_1, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_9, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Id_1, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_31, (ATerm) ATempty);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Id_1, term_r_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Id_1, term_t_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_CallT_3, term_z_31, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_SDefT_4, term_x_31, (ATerm)ATempty, (ATerm)ATempty, term_a_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Op_2, term_s_32, (ATerm) ATempty);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_e_17);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_17);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__2, term_u_39, term_a_28);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_a_28);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_z_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_r_42, term_a_28);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_a_28);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_a_28);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__3, term_y_41, term_z_41, (ATerm) ATempty);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm o_130 (ATerm), ATerm p_130 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm h_109 (ATerm));
ATerm LiftCompound_0 (ATerm);
ATerm listbu1_1 (ATerm, ATerm w_2 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm f_107 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm e_108 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_108 (ATerm));
ATerm TranslateStrat_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm l_120 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm h_123 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_134 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm d_123 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm k_134 (ATerm));
ATerm restore_always_2 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_134 (ATerm));
ATerm scope_2 (ATerm, ATerm l_134 (ATerm), ATerm m_134 (ATerm));
ATerm assert_1 (ATerm, ATerm n_134 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_114 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_127 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_127 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_125 (ATerm));
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
ATerm split_2 (ATerm, ATerm k_121 (ATerm), ATerm l_121 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_119 (ATerm), ATerm w_119 (ATerm));
ATerm crush_2 (ATerm, ATerm o_123 (ATerm), ATerm p_123 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_127 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_128 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_131 (ATerm));
ATerm map_1 (ATerm, ATerm u_113 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_131 (ATerm));
ATerm Program_1 (ATerm, ATerm e_94 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_114 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_130 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_106 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_131 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_131 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm i_128 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_128 (ATerm), ATerm f_128 (ATerm));
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
          ATerm a_7 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
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
          t = (ATerm) ATmakeAppl(sym__3, term_h_7, not_null(l_5), not_null(c_6));
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
ATerm Option_2 (ATerm t, ATerm o_130 (ATerm), ATerm p_130 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  t = Option_3(t, o_130, p_130, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
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
        t = term_l_7;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_m_7;
            return(t);
          }
          t = debug_1(t, u_0);
          {
            ATerm o_7;
            o_7 = t;
            {
              t = term_t_7;
              {
                ATerm v_0 (ATerm t)
                {
                  t = term_z_7;
                  return(t);
                }
                t = assert_1(t, v_0);
              }
            }
            t = o_7;
          }
        }
        return(t);
      }
      t = Option_2(t, s_0, t_0);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), term_d_8);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_e_8;
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
              t = term_f_8;
              return(t);
            }
            t = ArgOption_3(t, x_0, y_0, z_0);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
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
                ATerm m_8;
                m_8 = t;
                {
                  ATerm u_6 = NULL;
                  ATerm v_6 = NULL;
                  v_6 = t;
                  if(((u_6 != NULL) && (u_6 != v_6)))
                    _fail(v_6);
                  else
                    u_6 = v_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATempty, not_null(u_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = m_8;
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
                t = term_o_8;
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
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_7)), term_q_8, not_null(g_7))));
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
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_c_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_7)));
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
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_7)), term_i_9)));
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = (ATerm) ATempty;
    }
  {
    ATerm h_8 = NULL,j_8 = NULL,l_8 = NULL;
    ATerm l_9;
    l_9 = t;
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
    t = l_9;
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
ATerm oncetd_1 (ATerm t, ATerm h_109 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_109(t);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
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
  ATerm y_10 = t;
  int z_10 = stack_ptr;
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
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
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
    ATerm a_11;
    a_11 = t;
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
    t = a_11;
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
                                ATerm b_11 = t;
                                int c_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_11(t);
                                    ;
                                    LocalPopChoice(c_11);
                                  }
                                else
                                  {
                                    t = b_11;
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
                            ATerm d_11 = t;
                            int g_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(g_11);
                              }
                            else
                              {
                                t = d_11;
                                {
                                  ATerm h_11 = t;
                                  int i_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_11(t);
                                      ;
                                      LocalPopChoice(i_11);
                                    }
                                  else
                                    {
                                      t = h_11;
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
                            ATerm l_11 = t;
                            int m_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(m_11);
                              }
                            else
                              {
                                t = l_11;
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
ATerm repeat_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm d_12 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = f_107(t);
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
        t = term_n_11;
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
        ATerm o_11 = t;
        int z_11 = stack_ptr;
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
            LocalPopChoice(z_11);
          }
        else
          {
            t = o_11;
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
        ATerm a_12 = t;
        int b_12 = stack_ptr;
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
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
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
        ATerm c_12 = t;
        int e_12 = stack_ptr;
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
            LocalPopChoice(e_12);
          }
        else
          {
            t = c_12;
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
        ATerm f_12 = t;
        int g_12 = stack_ptr;
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
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
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
  ATerm m_12 = t;
  int r_12 = stack_ptr;
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
      LocalPopChoice(r_12);
    }
  else
    {
      t = m_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
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
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm b_13 = t;
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
                    t = b_13;
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
          ATerm c_13 = t;
          int d_13 = stack_ptr;
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
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm h_13 = t;
                int m_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    ;
                    LocalPopChoice(m_13);
                  }
                else
                  {
                    t = h_13;
                    {
                      ATerm n_13 = t;
                      int o_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          ;
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
                                t = Str_1(t, _id);
                                ;
                                LocalPopChoice(q_13);
                              }
                            else
                              {
                                t = p_13;
                                {
                                  ATerm r_13 = t;
                                  int v_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(v_13);
                                    }
                                  else
                                    {
                                      t = r_13;
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
                    t = (ATerm) ATmakeAppl(sym__2, term_w_13, not_null(x_21));
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
                            ATerm a_14;
                            a_14 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), (ATerm) ATmakeAppl(sym_Defined_2, term_d_14, not_null(u_21)));
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_e_14;
                                  return(t);
                                }
                                t = assert_1(t, o_1);
                              }
                            }
                            t = a_14;
                            {
                              ATerm b_22 = NULL;
                              ATerm f_14 = t;
                              int g_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(g_14);
                                }
                              else
                                {
                                  t = f_14;
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
                                      ATerm h_14;
                                      h_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_14, not_null(v_21)));
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = term_n_11;
                                            return(t);
                                          }
                                          t = assert_1(t, p_1);
                                        }
                                      }
                                      t = h_14;
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
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
        t = not_null(r_22);
        {
          ATerm q_1 (ATerm t)
          {
            t = term_e_14;
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
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm a_23 = NULL;
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          t = not_null(r_22);
          {
            ATerm r_1 (ATerm t)
            {
              t = term_e_14;
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
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm k_23 = NULL,m_23 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm l_23 = NULL;
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
        t = n_14;
        {
          ATerm n_23 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm o_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = o_14;
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
              ATerm t_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = t_14;
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
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_23)), term_i_9), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(w_23))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(v_23), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_23)))));
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
            ATerm a_15;
            a_15 = t;
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
            t = a_15;
            {
              ATerm t_24 = NULL,v_24 = NULL;
              ATerm b_15;
              b_15 = t;
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
              t = b_15;
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
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_25)), not_null(y_25))));
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
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(w_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(d_26)))));
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
                    ATerm m_15 = t;
                    int n_15 = stack_ptr;
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
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_25))));
                        ;
                        LocalPopChoice(n_15);
                      }
                    else
                      {
                        t = m_15;
                        {
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
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
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_25))));
                              ;
                              LocalPopChoice(r_15);
                            }
                          else
                            {
                              t = q_15;
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
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_15), term_v_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_26))))))));
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
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_26)))));
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
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_27)))));
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
                          ATerm k_16 = t;
                          int o_16 = stack_ptr;
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
                                                                ATerm r_16 = t;
                                                                int s_16 = stack_ptr;
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
                                                                    LocalPopChoice(s_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_16;
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
                              LocalPopChoice(o_16);
                            }
                          else
                            {
                              t = k_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, not_null(g_30)));
                            }
                          {
                            a_31 = t;
                            if(((n_30 != NULL) && (n_30 != a_31)))
                              _fail(a_31);
                            else
                              n_30 = a_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_30)), not_null(n_30))));
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
                  t = term_z_16;
                }
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
ATerm bottomup_1 (ATerm t, ATerm e_108 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = bottomup_1(t, e_108);
    return(t);
  }
  t = _all(t, y_1);
  t = e_108(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
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
ATerm topdown_1 (ATerm t, ATerm d_108 (ATerm))
{
  t = d_108(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = topdown_1(t, d_108);
      return(t);
    }
    t = _all(t, b_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  ATerm n_56 (ATerm t)
  {
    ATerm n_50 = NULL,i_51 = NULL;
    ATerm c_17;
    c_17 = t;
    {
      ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
      t = not_null(p_37);
      {
        ATerm d_17 = t;
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
            t = d_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), term_e_17);
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
                    ATerm z_50 = NULL,d_51 = NULL;
                    ATerm f_17;
                    f_17 = t;
                    {
                      ATerm a_51 = NULL,c_51 = NULL;
                      ATerm b_51 = NULL;
                      t = not_null(r_50);
                      {
                        t = int_to_string_0(t);
                        {
                          b_51 = t;
                          if(((a_51 != NULL) && (a_51 != b_51)))
                            _fail(b_51);
                          else
                            a_51 = b_51;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_51))), not_null(o_37))));
                        {
                          ATerm l_17 = t;
                          int p_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(p_17);
                            }
                          else
                            {
                              t = l_17;
                              t = MatchArg2_0(t);
                            }
                          {
                            c_51 = t;
                            if(((z_50 != NULL) && (z_50 != c_51)))
                              _fail(c_51);
                            else
                              z_50 = c_51;
                          }
                        }
                      }
                    }
                    t = f_17;
                    {
                      ATerm e_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_50), term_s_17);
                      {
                        t = add_0(t);
                        {
                          e_51 = t;
                          if(((d_51 != NULL) && (d_51 != e_51)))
                            _fail(e_51);
                          else
                            d_51 = e_51;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_50), not_null(d_51));
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
              f_51 = t;
              c_34 :
              if(match_cons(f_51, sym__2))
                {
                  g_51 = ATgetArgument(f_51, 0);
                  h_51 = ATgetArgument(f_51, 1);
                  if(((n_50 != NULL) && (n_50 != g_51)))
                    _fail(g_51);
                  else
                    n_50 = g_51;
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
    t = c_17;
    {
      ATerm j_51 = NULL,l_51 = NULL;
      ATerm k_51 = NULL;
      t = not_null(y_36);
      {
        t = length_0(t);
        {
          k_51 = t;
          if(((j_51 != NULL) && (j_51 != k_51)))
            _fail(k_51);
          else
            j_51 = k_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(j_51));
        {
          t = ConstructorName_0(t);
          {
            l_51 = t;
            if(((i_51 != NULL) && (i_51 != l_51)))
              _fail(l_51);
            else
              i_51 = l_51;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_51))), not_null(o_37))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
    }
    return(t);
  }
  ATerm o_56 (ATerm t)
  {
    ATerm o_51 = NULL;
    ATerm p_51 = NULL;
    t = not_null(p_37);
    {
      t = real_to_string_0(t);
      {
        p_51 = t;
        if(((o_51 != NULL) && (o_51 != p_51)))
          _fail(p_51);
        else
          o_51 = p_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_h_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_18, not_null(o_37)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(o_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm p_56 (ATerm t)
  {
    ATerm s_51 = NULL;
    ATerm t_51 = NULL;
    t = not_null(p_37);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_p_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, not_null(o_37)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm q_56 (ATerm t)
  {
    ATerm w_51 = NULL;
    ATerm x_51 = NULL;
    t = not_null(p_37);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          x_51 = t;
          if(((w_51 != NULL) && (w_51 != x_51)))
            _fail(x_51);
          else
            w_51 = x_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_19, not_null(o_37)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_15), term_v_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_51)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm r_56 (ATerm t)
  {
    ATerm b_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      b_52 = t;
      i_34 :
      if(((ATgetType(b_52) == AT_LIST) && ATisEmpty(b_52)))
        {
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_t_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(o_37))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, not_null(o_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_q_8, not_null(o_37))));
    return(t);
  }
  ATerm s_56 (ATerm t)
  {
    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      f_52 = t;
      j_34 :
      if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
        {
          g_52 = ATgetFirst((ATermList) f_52);
          h_52 = (ATerm) ATgetNext((ATermList) f_52);
          k_34 :
          if(match_string(g_52, "bound"))
            {
              l_34 :
              if(((ATgetType(h_52) == AT_LIST) && ATisEmpty(h_52)))
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(o_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, not_null(o_37)))))));
    return(t);
  }
  ATerm t_56 (ATerm t)
  {
    ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
    t = SSLgetAnnotations(not_null(r_37));
    {
      l_52 = t;
      m_34 :
      if(((ATgetType(l_52) == AT_LIST) && !(ATisEmpty(l_52))))
        {
          m_52 = ATgetFirst((ATermList) l_52);
          n_52 = (ATerm) ATgetNext((ATermList) l_52);
          n_34 :
          if(match_string(m_52, "unbound"))
            {
              o_34 :
              if(((ATgetType(n_52) == AT_LIST) && ATisEmpty(n_52)))
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
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_q_8, not_null(o_37)));
    return(t);
  }
  ATerm u_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(y_36), not_null(o_37))), (ATerm) ATmakeAppl(sym_Match_2, not_null(p_37), not_null(o_37))));
    return(t);
  }
  ATerm v_56 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm w_56 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm x_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(r_37), term_d_18);
    return(t);
  }
  ATerm y_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_37)), term_q_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_37)), term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm z_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), term_w_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm a_57 (ATerm t)
  {
    ATerm m_53 = NULL,b_54 = NULL,d_54 = NULL;
    ATerm r_20;
    r_20 = t;
    {
      ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
      t = not_null(h_37);
      {
        ATerm s_20 = t;
        if((PushChoice() == 0))
          {
            ATerm n_53 = NULL;
            n_53 = t;
            p_34 :
            if(!(match_string(n_53, "Nil")))
              {
                if(!(match_string(n_53, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_20;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), term_e_17);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
              o_53 = t;
              t_34 :
              if(match_cons(o_53, sym__2))
                {
                  p_53 = ATgetArgument(o_53, 0);
                  r_53 = ATgetArgument(o_53, 1);
                  u_34 :
                  if(match_cons(p_53, sym_Var_1))
                    {
                      q_53 = ATgetArgument(p_53, 0);
                      {
                        ATerm u_53 = NULL,w_53 = NULL;
                        ATerm t_20;
                        t_20 = t;
                        {
                          ATerm v_53 = NULL;
                          t = not_null(r_53);
                          {
                            t = int_to_string_0(t);
                            {
                              v_53 = t;
                              if(((u_53 != NULL) && (u_53 != v_53)))
                                _fail(v_53);
                              else
                                u_53 = v_53;
                            }
                          }
                        }
                        t = t_20;
                        {
                          ATerm x_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), term_s_17);
                          {
                            t = add_0(t);
                            {
                              x_53 = t;
                              if(((w_53 != NULL) && (w_53 != x_53)))
                                _fail(x_53);
                              else
                                w_53 = x_53;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_53)), term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_53))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))))), not_null(w_53));
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
              y_53 = t;
              w_34 :
              if(match_cons(y_53, sym__2))
                {
                  z_53 = ATgetArgument(y_53, 0);
                  a_54 = ATgetArgument(y_53, 1);
                  if(((m_53 != NULL) && (m_53 != z_53)))
                    _fail(z_53);
                  else
                    m_53 = z_53;
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
    t = r_20;
    {
      ATerm x_20;
      x_20 = t;
      {
        ATerm c_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(f_37));
        {
          t = ConstructorName_0(t);
          {
            c_54 = t;
            if(((b_54 != NULL) && (b_54 != c_54)))
              _fail(c_54);
            else
              b_54 = c_54;
          }
        }
      }
      t = x_20;
      {
        ATerm e_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_53), (ATerm) ATinsert(ATempty, not_null(j_37)));
        {
          t = conc_0(t);
          {
            e_54 = t;
            if(((d_54 != NULL) && (d_54 != e_54)))
              _fail(e_54);
            else
              d_54 = e_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
      }
    }
    return(t);
  }
  ATerm b_57 (ATerm t)
  {
    ATerm l_54 = NULL;
    ATerm m_54 = NULL;
    t = not_null(h_37);
    {
      t = real_to_string_0(t);
      {
        m_54 = t;
        if(((l_54 != NULL) && (l_54 != m_54)))
          _fail(m_54);
        else
          l_54 = m_54;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(l_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm c_57 (ATerm t)
  {
    ATerm t_54 = NULL;
    ATerm u_54 = NULL;
    t = not_null(h_37);
    {
      t = int_to_string_0(t);
      {
        u_54 = t;
        if(((t_54 != NULL) && (t_54 != u_54)))
          _fail(u_54);
        else
          t_54 = u_54;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm d_57 (ATerm t)
  {
    ATerm b_55 = NULL;
    ATerm c_55 = NULL;
    t = not_null(h_37);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          c_55 = t;
          if(((b_55 != NULL) && (b_55 != c_55)))
            _fail(c_55);
          else
            b_55 = c_55;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(b_55)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_37)), not_null(k_37), not_null(l_37)))));
    return(t);
  }
  ATerm e_57 (ATerm t)
  {
    t = not_null(l_37);
    return(t);
  }
  ATerm f_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_37)), (ATerm) ATmakeAppl(sym_Case_3, not_null(o_37), not_null(l_37), not_null(m_37)));
    return(t);
  }
  ATerm g_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_37)));
    return(t);
  }
  ATerm h_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_t_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))));
    return(t);
  }
  ATerm i_57 (ATerm t)
  {
    t = not_null(o_37);
    {
      ATerm h_21 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_21;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_37)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_37))));
    return(t);
  }
  ATerm j_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), term_q_8, term_d_18));
    return(t);
  }
  ATerm k_57 (ATerm t)
  {
    ATerm q_55 = NULL;
    ATerm r_55 = NULL;
    t = not_null(r_37);
    {
      t = construct_term_caching_0(t);
      {
        r_55 = t;
        if(((q_55 != NULL) && (q_55 != r_55)))
          _fail(r_55);
        else
          q_55 = r_55;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, not_null(q_55)));
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
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_i_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_37))))), not_null(r_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_q_8, term_d_18))));
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
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_18)), not_null(c_38)), not_null(b_38));
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(d_38))));
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_37)), not_null(s_38))));
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
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_48)), term_i_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), term_e_22), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_48)))))))));
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
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_48)), term_i_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_48)))))))));
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
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_49)), term_i_9), term_z_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_49)), term_i_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_49)))))), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_49)))))))));
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
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_49)), term_i_9), term_z_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_49)), term_i_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_49)))))), term_j_23), not_null(r_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_q_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_49)))))))));
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
                                                        ATerm o_23;
                                                        o_23 = t;
                                                        {
                                                          t = not_null(r_37);
                                                          {
                                                            ATerm k_2 (ATerm t)
                                                            {
                                                              ATerm t_49 = NULL;
                                                              t_49 = t;
                                                              {
                                                                ATerm p_23;
                                                                p_23 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), term_r_23);
                                                                  {
                                                                    ATerm l_2 (ATerm t)
                                                                    {
                                                                      t = term_s_23;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, l_2);
                                                                  }
                                                                }
                                                                t = p_23;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, k_2);
                                                          }
                                                        }
                                                        t = o_23;
                                                        {
                                                          ATerm y_49 = NULL;
                                                          t = not_null(r_37);
                                                          {
                                                            ATerm m_2 (ATerm t)
                                                            {
                                                              ATerm w_49 = NULL;
                                                              w_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_49)), term_i_9), term_x_23);
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
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, not_null(v_49))), (ATerm) ATinsert(ATempty, not_null(o_37)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(q_37, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(q_37, sym_Id_0))
                                                            {
                                                              t = term_u_19;
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
                                                                                      ATerm y_23 = t;
                                                                                      int b_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm h_50 = NULL;
                                                                                          ATerm i_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_36), (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, not_null(o_37))))))), (ATerm) ATmakeAppl(sym__2, not_null(u_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, not_null(o_37))))));
                                                                                          {
                                                                                            ATerm n_2 (ATerm t)
                                                                                            {
                                                                                              ATerm c_24 = t;
                                                                                              int d_24 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(d_24);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_24;
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
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, not_null(o_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
                                                                                          ;
                                                                                          LocalPopChoice(b_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_23;
                                                                                          t = n_56(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  k_35 :
                                                                                  t = n_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              l_35 :
                                                                              t = n_56(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(y_36) == AT_LIST) && ATisEmpty(y_36)))
                                                                            {
                                                                              m_35 :
                                                                              if(match_string(p_37, "Nil"))
                                                                                {
                                                                                  ATerm e_24 = t;
                                                                                  int f_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, not_null(o_37))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, not_null(o_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, term_d_18))));
                                                                                      ;
                                                                                      LocalPopChoice(f_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_24;
                                                                                      t = n_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = n_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              n_35 :
                                                                              t = n_56(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(r_37, sym_Real_1))
                                                                        {
                                                                          p_37 = ATgetArgument(r_37, 0);
                                                                          t = o_56(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(r_37, sym_Int_1))
                                                                            {
                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                              t = p_56(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(r_37, sym_Str_1))
                                                                                {
                                                                                  p_37 = ATgetArgument(r_37, 0);
                                                                                  t = q_56(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(r_37, sym_Var_1))
                                                                                    {
                                                                                      p_37 = ATgetArgument(r_37, 0);
                                                                                      {
                                                                                        ATerm g_24 = t;
                                                                                        int n_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = r_56(t);
                                                                                            ;
                                                                                            LocalPopChoice(n_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = g_24;
                                                                                            {
                                                                                              ATerm o_24 = t;
                                                                                              int p_24 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = s_56(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(p_24);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = o_24;
                                                                                                  t = t_56(t);
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
                                                                                          t = u_56(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(r_37, sym_BuildDefault_1))
                                                                                            {
                                                                                              p_37 = ATgetArgument(r_37, 0);
                                                                                              t = v_56(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(r_37, sym_Wld_0))
                                                                                                {
                                                                                                  t = w_56(t);
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
                                                                      t = x_56(t);
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
                                                                                                                      ATerm w_24 = t;
                                                                                                                      int x_24 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = y_56(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(x_24);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = w_24;
                                                                                                                          t = a_57(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_57(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  z_35 :
                                                                                                                  t = a_57(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              a_36 :
                                                                                                              b_36 :
                                                                                                              t = a_57(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          c_36 :
                                                                                                          d_36 :
                                                                                                          e_36 :
                                                                                                          t = a_57(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      f_36 :
                                                                                                      g_36 :
                                                                                                      h_36 :
                                                                                                      i_36 :
                                                                                                      t = a_57(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  j_36 :
                                                                                                  k_36 :
                                                                                                  l_36 :
                                                                                                  t = a_57(t);
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
                                                                                                          ATerm y_24 = t;
                                                                                                          int z_24 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = z_56(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(z_24);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_24;
                                                                                                              t = a_57(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = a_57(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      o_36 :
                                                                                                      t = a_57(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  p_36 :
                                                                                                  q_36 :
                                                                                                  t = a_57(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(g_37, sym_Real_1))
                                                                                            {
                                                                                              h_37 = ATgetArgument(g_37, 0);
                                                                                              t = b_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(g_37, sym_Int_1))
                                                                                                {
                                                                                                  h_37 = ATgetArgument(g_37, 0);
                                                                                                  t = c_57(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(g_37, sym_Str_1))
                                                                                                    {
                                                                                                      h_37 = ATgetArgument(g_37, 0);
                                                                                                      t = d_57(t);
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
                                                                                      t = e_57(t);
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
                                                                              t = f_57(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(q_37, sym_Continue_1))
                                                                                {
                                                                                  r_37 = ATgetArgument(q_37, 0);
                                                                                  t = g_57(t);
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
                                                                                                ATerm a_25 = t;
                                                                                                int b_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = h_57(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(b_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_25;
                                                                                                    t = i_57(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_57(t);
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
                                                                                              t = j_57(t);
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
                                                                                              t = k_57(t);
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
  ATerm e_59 = NULL;
  e_59 = t;
  t = SSL_real_to_string(not_null(e_59));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  i_59 :
  if(match_cons(k_59, sym__2))
    {
      l_59 = ATgetArgument(k_59, 0);
      m_59 = ATgetArgument(k_59, 1);
      j_59 :
      if(((ATgetType(l_59) == AT_LIST) && ATisEmpty(l_59)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_59));
        }
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
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  w_59 = t;
  u_59 :
  if(match_cons(w_59, sym__2))
    {
      x_59 = ATgetArgument(w_59, 0);
      a_60 = ATgetArgument(w_59, 1);
      v_59 :
      if(((ATgetType(x_59) == AT_LIST) && !(ATisEmpty(x_59))))
        {
          y_59 = ATgetFirst((ATermList) x_59);
          z_59 = (ATerm) ATgetNext((ATermList) x_59);
          {
            ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
            ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_59), not_null(a_60));
            {
              t = w_0(t);
              {
                i_60 = t;
                t_59 :
                if(match_cons(i_60, sym__2))
                  {
                    j_60 = ATgetArgument(i_60, 0);
                    k_60 = ATgetArgument(i_60, 1);
                    {
                      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
                      if(((g_60 != NULL) && (g_60 != j_60)))
                        _fail(j_60);
                      else
                        g_60 = j_60;
                      {
                        if(((e_60 != NULL) && (e_60 != k_60)))
                          _fail(k_60);
                        else
                          e_60 = k_60;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_59), not_null(e_60));
                          {
                            t = a_1(t);
                            {
                              l_60 = t;
                              s_59 :
                              if(match_cons(l_60, sym__2))
                                {
                                  m_60 = ATgetArgument(l_60, 0);
                                  n_60 = ATgetArgument(l_60, 1);
                                  {
                                    if(((h_60 != NULL) && (h_60 != m_60)))
                                      _fail(m_60);
                                    else
                                      h_60 = m_60;
                                    if(((f_60 != NULL) && (f_60 != n_60)))
                                      _fail(n_60);
                                    else
                                      f_60 = n_60;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_60)), not_null(g_60)), not_null(f_60));
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
ATerm thread_map_1 (ATerm t, ATerm l_120 (ATerm))
{
  ATerm r_60 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, l_120, r_60);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = r_60(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_61 = NULL,g_61 = NULL;
  f_61 = t;
  e_61 :
  if(match_cons(f_61, sym_Var_1))
    {
      g_61 = ATgetArgument(f_61, 0);
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_61 = NULL,l_61 = NULL;
            ATerm k_61 = NULL;
            t = SSLgetAnnotations(not_null(f_61));
            {
              k_61 = t;
              if(((j_61 != NULL) && (j_61 != k_61)))
                _fail(k_61);
              else
                j_61 = k_61;
            }
            {
              t = not_null(g_61);
              {
                ATerm n_61 = NULL;
                t = q_0(t);
                {
                  l_61 = t;
                  {
                    ATerm o_61 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_61)), not_null(j_61));
                    {
                      o_61 = t;
                      if(((n_61 != NULL) && (n_61 != o_61)))
                        _fail(o_61);
                      else
                        n_61 = o_61;
                    }
                    t = not_null(n_61);
                  }
                }
              }
            }
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_61 = NULL,t_61 = NULL;
                  ATerm s_61 = NULL;
                  t = SSLgetAnnotations(not_null(f_61));
                  {
                    s_61 = t;
                    if(((r_61 != NULL) && (r_61 != s_61)))
                      _fail(s_61);
                    else
                      r_61 = s_61;
                  }
                  {
                    t = not_null(g_61);
                    {
                      ATerm v_61 = NULL;
                      t = q_0(t);
                      {
                        t_61 = t;
                        {
                          ATerm w_61 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_61)), not_null(r_61));
                          {
                            w_61 = t;
                            if(((v_61 != NULL) && (v_61 != w_61)))
                              _fail(w_61);
                            else
                              v_61 = w_61;
                          }
                          t = not_null(v_61);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  {
                    ATerm z_61 = NULL,b_62 = NULL;
                    ATerm a_62 = NULL;
                    t = SSLgetAnnotations(not_null(f_61));
                    {
                      a_62 = t;
                      if(((z_61 != NULL) && (z_61 != a_62)))
                        _fail(a_62);
                      else
                        z_61 = a_62;
                    }
                    {
                      t = not_null(g_61);
                      {
                        ATerm d_62 = NULL;
                        t = q_0(t);
                        {
                          b_62 = t;
                          {
                            ATerm e_62 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_62)), not_null(z_61));
                            {
                              e_62 = t;
                              if(((d_62 != NULL) && (d_62 != e_62)))
                                _fail(e_62);
                              else
                                d_62 = e_62;
                            }
                            t = not_null(d_62);
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
  ATerm q_64 = NULL,r_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  ATerm h_67 (ATerm t)
  {
    ATerm r_65 = NULL,j_66 = NULL,o_66 = NULL;
    ATerm i_25;
    i_25 = t;
    {
      ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
      t = not_null(e_65);
      {
        ATerm j_25 = t;
        if((PushChoice() == 0))
          {
            ATerm s_65 = NULL;
            s_65 = t;
            j_63 :
            if(!(match_string(s_65, "Nil")))
              {
                if(!(match_string(s_65, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_25;
          }
        {
          t = not_null(a_65);
          {
            ATerm o_2 (ATerm t)
            {
              t = Var_1(t, _id);
              return(t);
            }
            t = map_1(t, o_2);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_65), term_e_17);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
                  t_65 = t;
                  n_63 :
                  if(match_cons(t_65, sym__2))
                    {
                      u_65 = ATgetArgument(t_65, 0);
                      w_65 = ATgetArgument(t_65, 1);
                      o_63 :
                      if(match_cons(u_65, sym_Var_1))
                        {
                          v_65 = ATgetArgument(u_65, 0);
                          {
                            ATerm b_66 = NULL,d_66 = NULL;
                            ATerm k_25;
                            k_25 = t;
                            {
                              ATerm c_66 = NULL;
                              t = not_null(w_65);
                              {
                                t = int_to_string_0(t);
                                {
                                  c_66 = t;
                                  if(((b_66 != NULL) && (b_66 != c_66)))
                                    _fail(c_66);
                                  else
                                    b_66 = c_66;
                                }
                              }
                            }
                            t = k_25;
                            {
                              ATerm f_66 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_65), term_s_17);
                              {
                                t = add_0(t);
                                {
                                  f_66 = t;
                                  if(((d_66 != NULL) && (d_66 != f_66)))
                                    _fail(f_66);
                                  else
                                    d_66 = f_66;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_65)), term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(b_66))), term_d_18)))), not_null(d_66));
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
                  g_66 = t;
                  q_63 :
                  if(match_cons(g_66, sym__2))
                    {
                      h_66 = ATgetArgument(g_66, 0);
                      i_66 = ATgetArgument(g_66, 1);
                      if(((r_65 != NULL) && (r_65 != h_66)))
                        _fail(h_66);
                      else
                        r_65 = h_66;
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
    t = i_25;
    {
      ATerm s_25;
      s_25 = t;
      {
        ATerm k_66 = NULL,n_66 = NULL;
        ATerm m_66 = NULL;
        t = not_null(a_65);
        {
          t = length_0(t);
          {
            m_66 = t;
            if(((k_66 != NULL) && (k_66 != m_66)))
              _fail(m_66);
            else
              k_66 = m_66;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_65), not_null(k_66));
          {
            t = ConstructorName_0(t);
            {
              n_66 = t;
              if(((j_66 != NULL) && (j_66 != n_66)))
                _fail(n_66);
              else
                j_66 = n_66;
            }
          }
        }
      }
      t = s_25;
      {
        ATerm p_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), (ATerm) ATinsert(ATempty, not_null(f_65)));
        {
          t = conc_0(t);
          {
            p_66 = t;
            if(((o_66 != NULL) && (o_66 != p_66)))
              _fail(p_66);
            else
              o_66 = p_66;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_66))), term_d_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_66)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
      }
    }
    return(t);
  }
  ATerm i_67 (ATerm t)
  {
    ATerm t_66 = NULL;
    ATerm u_66 = NULL;
    t = not_null(e_65);
    {
      t = real_to_string_0(t);
      {
        u_66 = t;
        if(((t_66 != NULL) && (t_66 != u_66)))
          _fail(u_66);
        else
          t_66 = u_66;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(t_66))), term_d_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
    return(t);
  }
  ATerm j_67 (ATerm t)
  {
    ATerm y_66 = NULL;
    ATerm z_66 = NULL;
    t = not_null(e_65);
    {
      t = int_to_string_0(t);
      {
        z_66 = t;
        if(((y_66 != NULL) && (y_66 != z_66)))
          _fail(z_66);
        else
          y_66 = z_66;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_66))), term_d_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
    return(t);
  }
  ATerm k_67 (ATerm t)
  {
    ATerm d_67 = NULL;
    ATerm e_67 = NULL;
    t = not_null(e_65);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          e_67 = t;
          if(((d_67 != NULL) && (d_67 != e_67)))
            _fail(e_67);
          else
            d_67 = e_67;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(d_67)))), term_d_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
    return(t);
  }
  b_65 = t;
  x_63 :
  if(match_cons(b_65, sym_GuardedLChoice_3))
    {
      c_65 = ATgetArgument(b_65, 0);
      f_65 = ATgetArgument(b_65, 1);
      g_65 = ATgetArgument(b_65, 2);
      y_63 :
      if(match_cons(c_65, sym_Match_1))
        {
          d_65 = ATgetArgument(c_65, 0);
          z_63 :
          if(match_cons(d_65, sym_Op_2))
            {
              e_65 = ATgetArgument(d_65, 0);
              a_65 = ATgetArgument(d_65, 1);
              a_64 :
              if(((ATgetType(a_65) == AT_LIST) && !(ATisEmpty(a_65))))
                {
                  q_64 = ATgetFirst((ATermList) a_65);
                  u_64 = (ATerm) ATgetNext((ATermList) a_65);
                  b_64 :
                  if(((ATgetType(u_64) == AT_LIST) && !(ATisEmpty(u_64))))
                    {
                      v_64 = ATgetFirst((ATermList) u_64);
                      x_64 = (ATerm) ATgetNext((ATermList) u_64);
                      c_64 :
                      if(((ATgetType(x_64) == AT_LIST) && ATisEmpty(x_64)))
                        {
                          d_64 :
                          if(match_cons(v_64, sym_Var_1))
                            {
                              w_64 = ATgetArgument(v_64, 0);
                              e_64 :
                              if(match_cons(q_64, sym_Var_1))
                                {
                                  r_64 = ATgetArgument(q_64, 0);
                                  f_64 :
                                  if(match_string(e_65, "Cons"))
                                    {
                                      ATerm t_25 = t;
                                      int u_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_d_18)), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, term_d_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_65)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_64)), term_q_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, term_z_25)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_64)), term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, term_z_25)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
                                          ;
                                          LocalPopChoice(u_25);
                                        }
                                      else
                                        {
                                          t = t_25;
                                          t = h_67(t);
                                        }
                                    }
                                  else
                                    {
                                      t = h_67(t);
                                    }
                                }
                              else
                                {
                                  g_64 :
                                  t = h_67(t);
                                }
                            }
                          else
                            {
                              h_64 :
                              i_64 :
                              t = h_67(t);
                            }
                        }
                      else
                        {
                          j_64 :
                          k_64 :
                          l_64 :
                          t = h_67(t);
                        }
                    }
                  else
                    {
                      m_64 :
                      n_64 :
                      t = h_67(t);
                    }
                }
              else
                {
                  if(((ATgetType(a_65) == AT_LIST) && ATisEmpty(a_65)))
                    {
                      o_64 :
                      if(match_string(e_65, "Nil"))
                        {
                          ATerm a_26 = t;
                          int b_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, term_d_18)), term_w_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, term_d_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_65))));
                              ;
                              LocalPopChoice(b_26);
                            }
                          else
                            {
                              t = a_26;
                              t = h_67(t);
                            }
                        }
                      else
                        {
                          t = h_67(t);
                        }
                    }
                  else
                    {
                      p_64 :
                      t = h_67(t);
                    }
                }
            }
          else
            {
              if(match_cons(d_65, sym_Real_1))
                {
                  e_65 = ATgetArgument(d_65, 0);
                  t = i_67(t);
                }
              else
                {
                  if(match_cons(d_65, sym_Int_1))
                    {
                      e_65 = ATgetArgument(d_65, 0);
                      t = j_67(t);
                    }
                  else
                    {
                      if(match_cons(d_65, sym_Str_1))
                        {
                          e_65 = ATgetArgument(d_65, 0);
                          t = k_67(t);
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
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
  d_68 = t;
  c_68 :
  if(match_cons(d_68, sym__2))
    {
      e_68 = ATgetArgument(d_68, 0);
      f_68 = ATgetArgument(d_68, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_c_26), not_null(f_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  k_68 :
  if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
    {
      n_68 = ATgetFirst((ATermList) m_68);
      o_68 = (ATerm) ATgetNext((ATermList) m_68);
      l_68 :
      if(match_int(n_68, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_68)), term_i_26), term_h_26);
        }
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
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  u_68 = t;
  s_68 :
  if(((ATgetType(u_68) == AT_LIST) && !(ATisEmpty(u_68))))
    {
      v_68 = ATgetFirst((ATermList) u_68);
      w_68 = (ATerm) ATgetNext((ATermList) u_68);
      t_68 :
      if(match_int(v_68, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_68)), term_h_26), term_h_26);
        }
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
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
  c_69 = t;
  a_69 :
  if(((ATgetType(c_69) == AT_LIST) && !(ATisEmpty(c_69))))
    {
      d_69 = ATgetFirst((ATermList) c_69);
      e_69 = (ATerm) ATgetNext((ATermList) c_69);
      b_69 :
      if(match_int(d_69, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_69)), term_j_26), term_h_26);
        }
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
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm v_26 = t;
  int y_26 = stack_ptr;
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
      LocalPopChoice(y_26);
    }
  else
    {
      t = v_26;
      {
        ATerm b_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = b_27;
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  l_69 :
  if(match_cons(m_69, sym__2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      {
        ATerm r_69 = NULL,t_69 = NULL;
        ATerm f_27;
        f_27 = t;
        {
          ATerm s_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), not_null(n_69));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  s_69 = t;
                  if(((r_69 != NULL) && (r_69 != s_69)))
                    _fail(s_69);
                  else
                    r_69 = s_69;
                }
              }
            }
          }
        }
        t = f_27;
        {
          ATerm u_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_h_27), not_null(n_69));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  u_69 = t;
                  if(((t_69 != NULL) && (t_69 != u_69)))
                    _fail(u_69);
                  else
                    t_69 = u_69;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_26), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(t_69))), term_k_27)))), not_null(o_69)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(r_69))), term_k_27)))));
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
  ATerm b_70 = NULL;
  b_70 = t;
  {
    ATerm e_70 = NULL,f_70 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm x_2 (ATerm t)
      {
        t = term_z_7;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        e_70 = t;
        z_69 :
        if(match_cons(e_70, sym_Defined_1))
          {
            f_70 = ATgetArgument(e_70, 0);
            a_70 :
            if(!(match_string(f_70, "o_0")))
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
    t = not_null(b_70);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm k_70 = NULL;
  k_70 = t;
  {
    ATerm n_70 = NULL,o_70 = NULL;
    t = not_null(k_70);
    {
      ATerm y_2 (ATerm t)
      {
        t = term_e_8;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        n_70 = t;
        i_70 :
        if(match_cons(n_70, sym_Defined_1))
          {
            o_70 = ATgetArgument(n_70, 0);
            j_70 :
            if(!(match_string(o_70, "r_0")))
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
    t = not_null(k_70);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  l_71 = t;
  j_71 :
  if(match_cons(l_71, sym_SDefT_4))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      o_71 = ATgetArgument(l_71, 2);
      k_71 = ATgetArgument(l_71, 3);
      {
        ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,b_72 = NULL;
        ATerm l_27;
        l_27 = t;
        {
          ATerm x_71 = NULL;
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
                  t = not_null(o_71);
                  {
                    ATerm z_71 = NULL;
                    t = map_1(t, TranslateVarDec_0);
                    {
                      y_71 = t;
                      {
                        if(((u_71 != NULL) && (u_71 != y_71)))
                          _fail(y_71);
                        else
                          u_71 = y_71;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_71), not_null(u_71));
                          {
                            ATerm a_72 = NULL;
                            t = conc_0(t);
                            {
                              z_71 = t;
                              {
                                if(((v_71 != NULL) && (v_71 != z_71)))
                                  _fail(z_71);
                                else
                                  v_71 = z_71;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(k_71));
                                  {
                                    ATerm m_27 = t;
                                    int n_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_2 (ATerm t)
                                        {
                                          ATerm o_27 = t;
                                          int p_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = TraceFun_0(t);
                                              ;
                                              LocalPopChoice(p_27);
                                            }
                                          else
                                            {
                                              t = o_27;
                                              t = TraceAllFuns_0(t);
                                            }
                                          return(t);
                                        }
                                        t = _2(t, z_2, _id);
                                        t = TracedBody_0(t);
                                        ;
                                        LocalPopChoice(n_27);
                                      }
                                    else
                                      {
                                        t = m_27;
                                        t = PlainBody_0(t);
                                      }
                                    {
                                      a_72 = t;
                                      if(((w_71 != NULL) && (w_71 != a_72)))
                                        _fail(a_72);
                                      else
                                        w_71 = a_72;
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
        t = l_27;
        {
          ATerm c_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_71), (ATerm) ATinsert(ATempty, term_r_27));
          {
            t = conc_0(t);
            {
              c_72 = t;
              if(((b_72 != NULL) && (b_72 != c_72)))
                _fail(c_72);
              else
                b_72 = c_72;
            }
          }
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_h_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(b_72)))), not_null(w_71));
        }
      }
    }
  else
    {
      if(match_cons(l_71, sym_SDef_3))
        {
          m_71 = ATgetArgument(l_71, 0);
          n_71 = ATgetArgument(l_71, 1);
          o_71 = ATgetArgument(l_71, 2);
          {
            ATerm g_72 = NULL,h_72 = NULL,k_72 = NULL;
            ATerm s_27;
            s_27 = t;
            {
              ATerm i_72 = NULL;
              t = not_null(n_71);
              {
                ATerm j_72 = NULL;
                t = map_1(t, TranslateVarDec_0);
                {
                  i_72 = t;
                  {
                    if(((g_72 != NULL) && (g_72 != i_72)))
                      _fail(i_72);
                    else
                      g_72 = i_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(o_71));
                      {
                        ATerm t_27 = t;
                        int u_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm v_27 = t;
                              int z_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = TraceFun_0(t);
                                  ;
                                  LocalPopChoice(z_27);
                                }
                              else
                                {
                                  t = v_27;
                                  t = TraceAllFuns_0(t);
                                }
                              return(t);
                            }
                            t = _2(t, a_3, _id);
                            t = TracedBody_0(t);
                            ;
                            LocalPopChoice(u_27);
                          }
                        else
                          {
                            t = t_27;
                            t = PlainBody_0(t);
                          }
                        {
                          j_72 = t;
                          if(((h_72 != NULL) && (h_72 != j_72)))
                            _fail(j_72);
                          else
                            h_72 = j_72;
                        }
                      }
                    }
                  }
                }
              }
            }
            t = s_27;
            {
              ATerm l_72 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_72), (ATerm) ATinsert(ATempty, term_r_27));
              {
                t = conc_0(t);
                {
                  l_72 = t;
                  if(((k_72 != NULL) && (k_72 != l_72)))
                    _fail(l_72);
                  else
                    k_72 = l_72;
                }
              }
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_h_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(k_72)))), not_null(h_72));
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
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL;
  z_72 = t;
  y_72 :
  if(match_cons(z_72, sym__2))
    {
      a_73 = ATgetArgument(z_72, 0);
      b_73 = ATgetArgument(z_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_73)), not_null(a_73)), (ATerm) ATinsert(ATempty, not_null(a_73)));
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
  ATerm g_73 = NULL;
  ATerm n_73 = NULL;
  n_73 = t;
  if(((g_73 != NULL) && (g_73 != n_73)))
    _fail(n_73);
  else
    g_73 = n_73;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(g_73));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm h_123 (ATerm))
{
  t = explode_string_0(t);
  {
    t = h_123(t);
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
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(((ATgetType(s_73) == AT_LIST) && !(ATisEmpty(s_73))))
    {
      t_73 = ATgetFirst((ATermList) s_73);
      u_73 = (ATerm) ATgetNext((ATermList) s_73);
      t = not_null(t_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
  z_73 = t;
  y_73 :
  if(match_cons(z_73, sym__2))
    {
      a_74 = ATgetArgument(z_73, 0);
      b_74 = ATgetArgument(z_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), not_null(b_74));
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
ATerm rewrite_1 (ATerm t, ATerm p_134 (ATerm))
{
  ATerm h_74 = NULL;
  ATerm j_74 = NULL;
  h_74 = t;
  {
    ATerm k_74 = NULL;
    t = term_a_28;
    {
      t = p_134(t);
      {
        k_74 = t;
        if(((j_74 != NULL) && (j_74 != k_74)))
          _fail(k_74);
        else
          j_74 = k_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_74), not_null(h_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  r_74 :
  if(match_cons(s_74, sym__2))
    {
      t_74 = ATgetArgument(s_74, 0);
      u_74 = ATgetArgument(s_74, 1);
      {
        ATerm y_74 = NULL;
        ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
        t = not_null(s_74);
        {
          ATerm b_3 (ATerm t)
          {
            t = term_e_28;
            return(t);
          }
          t = rewrite_1(t, b_3);
          {
            z_74 = t;
            p_74 :
            if(match_cons(z_74, sym_Defined_2))
              {
                a_75 = ATgetArgument(z_74, 0);
                b_75 = ATgetArgument(z_74, 1);
                q_74 :
                if(match_string(a_75, "j_0"))
                  {
                    if(((y_74 != NULL) && (y_74 != b_75)))
                      _fail(b_75);
                    else
                      y_74 = b_75;
                  }
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
        t = not_null(y_74);
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
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  k_75 = t;
  j_75 :
  if(match_cons(k_75, sym_OpDecl_2))
    {
      l_75 = ATgetArgument(k_75, 0);
      m_75 = ATgetArgument(k_75, 1);
      {
        ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,v_75 = NULL;
        ATerm h_28;
        h_28 = t;
        {
          ATerm s_75 = NULL;
          t = not_null(m_75);
          {
            ATerm t_75 = NULL;
            t = Arity_0(t);
            {
              s_75 = t;
              {
                if(((q_75 != NULL) && (q_75 != s_75)))
                  _fail(s_75);
                else
                  q_75 = s_75;
                {
                  ATerm u_75 = NULL;
                  t = int_to_string_0(t);
                  {
                    t_75 = t;
                    {
                      if(((p_75 != NULL) && (p_75 != t_75)))
                        _fail(t_75);
                      else
                        p_75 = t_75;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_75), not_null(q_75));
                        {
                          t = ConstructorName_0(t);
                          {
                            u_75 = t;
                            if(((r_75 != NULL) && (r_75 != u_75)))
                              _fail(u_75);
                            else
                              r_75 = u_75;
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
        t = h_28;
        {
          ATerm w_75 = NULL;
          t = not_null(l_75);
          {
            t = double_quote_0(t);
            {
              w_75 = t;
              if(((v_75 != NULL) && (v_75 != w_75)))
                _fail(w_75);
              else
                v_75 = w_75;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_75)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_75)), term_q_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_28), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(p_75))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_75))))))));
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
  ATerm t_76 = NULL;
  ATerm v_76 = NULL;
  t_76 = t;
  {
    ATerm w_76 = NULL,a_77 = NULL;
    ATerm z_76 = NULL;
    t = not_null(t_76);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          z_76 = t;
          if(((w_76 != NULL) && (w_76 != z_76)))
            _fail(z_76);
          else
            w_76 = z_76;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_76), (ATerm) ATinsert(ATempty, term_n_28));
      {
        t = conc_0(t);
        {
          a_77 = t;
          if(((v_76 != NULL) && (v_76 != a_77)))
            _fail(a_77);
          else
            v_76 = a_77;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_c_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_76)));
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
  ATerm f_77 = NULL;
  f_77 = t;
  t = SSL_int_to_string(not_null(f_77));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
  q_77 = t;
  o_77 :
  if(((ATgetType(q_77) == AT_LIST) && !(ATisEmpty(q_77))))
    {
      r_77 = ATgetFirst((ATermList) q_77);
      s_77 = (ATerm) ATgetNext((ATermList) q_77);
      p_77 :
      if(match_int(r_77, 95))
        {
          ATerm u_77 = NULL;
          ATerm v_77 = NULL;
          t = not_null(s_77);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_77)), term_u_28), term_u_28);
        }
      else
        {
          if(match_int(r_77, 45))
            {
              ATerm x_77 = NULL;
              ATerm f_78 = NULL;
              t = not_null(s_77);
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
              t = (ATerm) ATinsert(CheckATermList(not_null(x_77)), term_u_28);
            }
          else
            {
              if(match_int(r_77, 39))
                {
                  ATerm h_78 = NULL;
                  ATerm i_78 = NULL;
                  t = not_null(s_77);
                  {
                    t = p_0(t);
                    {
                      i_78 = t;
                      if(((h_78 != NULL) && (h_78 != i_78)))
                        _fail(i_78);
                      else
                        h_78 = i_78;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_78)), term_u_28), term_v_28), term_u_28);
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
ATerm escape_1 (ATerm t, ATerm d_123 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_78 (ATerm t)
    {
      ATerm w_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_123(t, p_78);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = w_28;
          {
            ATerm c_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, p_78);
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = c_29;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = p_78(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm))
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_119(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
        u_78 = t;
        t_78 :
        if(((ATgetType(u_78) == AT_LIST) && !(ATisEmpty(u_78))))
          {
            v_78 = ATgetFirst((ATermList) u_78);
            w_78 = (ATerm) ATgetNext((ATermList) u_78);
            {
              ATerm z_78 = NULL,b_79 = NULL;
              ATerm i_29;
              i_29 = t;
              {
                ATerm a_79 = NULL;
                t = not_null(v_78);
                {
                  t = z_119(t);
                  {
                    a_79 = t;
                    if(((z_78 != NULL) && (z_78 != a_79)))
                      _fail(a_79);
                    else
                      z_78 = a_79;
                  }
                }
              }
              t = i_29;
              {
                ATerm c_79 = NULL;
                t = not_null(w_78);
                {
                  t = foldr_3(t, x_119, y_119, z_119);
                  {
                    c_79 = t;
                    if(((b_79 != NULL) && (b_79 != c_79)))
                      _fail(c_79);
                    else
                      b_79 = c_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_78), not_null(b_79));
                  t = y_119(t);
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
    t = term_e_17;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  k_79 = t;
  i_79 :
  if(match_cons(k_79, sym_FunType_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      j_79 = ATgetArgument(k_79, 1);
      {
        t = not_null(l_79);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(k_79, sym_ConstType_1))
        {
          l_79 = ATgetArgument(k_79, 0);
          t = term_e_17;
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
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym_OpDecl_2))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      {
        ATerm c_80 = NULL,d_80 = NULL;
        ATerm e_80 = NULL;
        t = not_null(z_79);
        {
          ATerm f_80 = NULL,h_80 = NULL,j_80 = NULL;
          t = Arity_0(t);
          {
            e_80 = t;
            {
              if(((c_80 != NULL) && (c_80 != e_80)))
                _fail(e_80);
              else
                c_80 = e_80;
              {
                ATerm j_29;
                j_29 = t;
                {
                  ATerm g_80 = NULL;
                  t = not_null(y_79);
                  {
                    t = cify_0(t);
                    {
                      g_80 = t;
                      if(((f_80 != NULL) && (f_80 != g_80)))
                        _fail(g_80);
                      else
                        f_80 = g_80;
                    }
                  }
                }
                t = j_29;
                {
                  ATerm i_80 = NULL;
                  t = not_null(c_80);
                  {
                    t = int_to_string_0(t);
                    {
                      i_80 = t;
                      if(((h_80 != NULL) && (h_80 != i_80)))
                        _fail(i_80);
                      else
                        h_80 = i_80;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_80)), term_l_29), not_null(f_80)), term_k_29);
                    {
                      t = concat_strings_0(t);
                      {
                        j_80 = t;
                        {
                          if(((d_80 != NULL) && (d_80 != j_80)))
                            _fail(j_80);
                          else
                            d_80 = j_80;
                          {
                            ATerm m_29;
                            m_29 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_79), not_null(c_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_29, not_null(d_80)));
                              {
                                ATerm e_3 (ATerm t)
                                {
                                  t = term_e_28;
                                  return(t);
                                }
                                t = assert_1(t, e_3);
                              }
                            }
                            t = m_29;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_80)), term_i_9)));
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
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  x_80 = t;
  t_80 :
  if(match_cons(x_80, sym_Signature_1))
    {
      y_80 = ATgetArgument(x_80, 0);
      u_80 :
      if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
        {
          z_80 = ATgetFirst((ATermList) y_80);
          b_81 = (ATerm) ATgetNext((ATermList) y_80);
          v_80 :
          if(match_cons(z_80, sym_Constructors_1))
            {
              a_81 = ATgetArgument(z_80, 0);
              w_80 :
              if(((ATgetType(b_81) == AT_LIST) && ATisEmpty(b_81)))
                {
                  {
                    ATerm v_81 = NULL,w_81 = NULL,z_81 = NULL;
                    ATerm b_31;
                    b_31 = t;
                    {
                      ATerm x_81 = NULL;
                      t = not_null(a_81);
                      {
                        ATerm y_81 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          x_81 = t;
                          {
                            if(((v_81 != NULL) && (v_81 != x_81)))
                              _fail(x_81);
                            else
                              v_81 = x_81;
                            {
                              t = not_null(a_81);
                              {
                                t = InitConstructors_0(t);
                                {
                                  y_81 = t;
                                  if(((w_81 != NULL) && (w_81 != y_81)))
                                    _fail(y_81);
                                  else
                                    w_81 = y_81;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = b_31;
                    {
                      ATerm a_82 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_81), (ATerm) ATinsert(ATempty, not_null(w_81)));
                      {
                        t = conc_0(t);
                        {
                          a_82 = t;
                          if(((z_81 != NULL) && (z_81 != a_82)))
                            _fail(a_82);
                          else
                            z_81 = a_82;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(z_81));
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
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  x_82 = t;
  v_82 :
  if(match_cons(x_82, sym_FunType_2))
    {
      y_82 = ATgetArgument(x_82, 0);
      w_82 = ATgetArgument(x_82, 1);
      {
        ATerm h_83 = NULL;
        ATerm k_83 = NULL;
        t = not_null(y_82);
        {
          t = map_1(t, TranslateType_0);
          {
            k_83 = t;
            if(((h_83 != NULL) && (h_83 != k_83)))
              _fail(k_83);
            else
              h_83 = k_83;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_h_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(h_83)));
      }
    }
  else
    {
      if(match_cons(x_82, sym_ConstType_1))
        {
          y_82 = ATgetArgument(x_82, 0);
          t = term_h_9;
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
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  u_83 = t;
  r_83 :
  if(match_cons(u_83, sym_VarDec_2))
    {
      v_83 = ATgetArgument(u_83, 0);
      w_83 = ATgetArgument(u_83, 1);
      s_83 :
      if(match_cons(w_83, sym_FunType_2))
        {
          x_83 = ATgetArgument(w_83, 0);
          t_83 = ATgetArgument(w_83, 1);
          {
            ATerm a_84 = NULL;
            ATerm b_84 = NULL;
            t = not_null(x_83);
            {
              t = map_1(t, TranslateType_0);
              {
                b_84 = t;
                if(((a_84 != NULL) && (a_84 != b_84)))
                  _fail(b_84);
                else
                  a_84 = b_84;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_h_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_83)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_84)))));
          }
        }
      else
        {
          if(match_cons(w_83, sym_ConstType_1))
            {
              x_83 = ATgetArgument(w_83, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_h_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_83)), term_i_9));
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
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,t_84 = NULL;
  n_84 = t;
  m_84 :
  if(match_cons(n_84, sym_SDef_3))
    {
      o_84 = ATgetArgument(n_84, 0);
      p_84 = ATgetArgument(n_84, 1);
      q_84 = ATgetArgument(n_84, 2);
      {
        ATerm x_84 = NULL;
        ATerm y_84 = NULL;
        t = not_null(p_84);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            y_84 = t;
            {
              if(((x_84 != NULL) && (x_84 != y_84)))
                _fail(y_84);
              else
                x_84 = y_84;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_84), (ATerm) ATinsert(ATempty, term_h_9));
                t = conc_0(t);
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(x_84))))));
      }
    }
  else
    {
      if(match_cons(n_84, sym_SDefT_4))
        {
          o_84 = ATgetArgument(n_84, 0);
          p_84 = ATgetArgument(n_84, 1);
          q_84 = ATgetArgument(n_84, 2);
          t_84 = ATgetArgument(n_84, 3);
          {
            ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
            ATerm g_85 = NULL;
            t = not_null(p_84);
            {
              ATerm h_85 = NULL;
              t = map_1(t, TranslateVarDec_0);
              {
                g_85 = t;
                {
                  if(((d_85 != NULL) && (d_85 != g_85)))
                    _fail(g_85);
                  else
                    d_85 = g_85;
                  {
                    t = not_null(q_84);
                    {
                      ATerm i_85 = NULL;
                      t = map_1(t, TranslateVarDec_0);
                      {
                        h_85 = t;
                        {
                          if(((e_85 != NULL) && (e_85 != h_85)))
                            _fail(h_85);
                          else
                            e_85 = h_85;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_9)), not_null(e_85)), not_null(d_85));
                            {
                              t = concat_0(t);
                              {
                                i_85 = t;
                                if(((f_85 != NULL) && (f_85 != i_85)))
                                  _fail(i_85);
                                else
                                  f_85 = i_85;
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
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(f_85))))));
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
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL;
  b_86 = t;
  v_85 :
  if(match_cons(b_86, sym_Specification_1))
    {
      c_86 = ATgetArgument(b_86, 0);
      w_85 :
      if(((ATgetType(c_86) == AT_LIST) && !(ATisEmpty(c_86))))
        {
          d_86 = ATgetFirst((ATermList) c_86);
          h_86 = (ATerm) ATgetNext((ATermList) c_86);
          x_85 :
          if(match_cons(d_86, sym_Signature_1))
            {
              g_86 = ATgetArgument(d_86, 0);
              y_85 :
              if(((ATgetType(h_86) == AT_LIST) && !(ATisEmpty(h_86))))
                {
                  i_86 = ATgetFirst((ATermList) h_86);
                  k_86 = (ATerm) ATgetNext((ATermList) h_86);
                  z_85 :
                  if(match_cons(i_86, sym_Strategies_1))
                    {
                      j_86 = ATgetArgument(i_86, 0);
                      a_86 :
                      if(((ATgetType(k_86) == AT_LIST) && ATisEmpty(k_86)))
                        {
                          {
                            ATerm n_86 = NULL,o_86 = NULL,w_86 = NULL;
                            ATerm c_31;
                            c_31 = t;
                            {
                              ATerm p_86 = NULL;
                              t = not_null(j_86);
                              {
                                ATerm u_86 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  p_86 = t;
                                  {
                                    if(((n_86 != NULL) && (n_86 != p_86)))
                                      _fail(p_86);
                                    else
                                      n_86 = p_86;
                                    {
                                      t = term_n_8;
                                      {
                                        ATerm d_31 = t;
                                        int e_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm f_3 (ATerm t)
                                              {
                                                ATerm q_86 = NULL;
                                                ATerm r_86 = NULL,t_86 = NULL;
                                                ATerm s_86 = NULL;
                                                s_86 = t;
                                                if(((r_86 != NULL) && (r_86 != s_86)))
                                                  _fail(s_86);
                                                else
                                                  r_86 = s_86;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_f_31, not_null(r_86));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      t_86 = t;
                                                      if(((q_86 != NULL) && (q_86 != t_86)))
                                                        _fail(t_86);
                                                      else
                                                        q_86 = t_86;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(q_86));
                                                return(t);
                                              }
                                              t = map_1(t, f_3);
                                            }
                                            ;
                                            LocalPopChoice(e_31);
                                          }
                                        else
                                          {
                                            t = d_31;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          u_86 = t;
                                          if(((o_86 != NULL) && (o_86 != u_86)))
                                            _fail(u_86);
                                          else
                                            o_86 = u_86;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = c_31;
                            {
                              ATerm x_86 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(j_86)), term_b_32)), not_null(n_86)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_n_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_q_31), term_s_31, term_i_9))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_31), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_v_31))), term_k_27)))))))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(g_86))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_31, (ATerm) ATinsert(ATempty, term_l_31)))), not_null(o_86));
                              {
                                t = concat_0(t);
                                {
                                  x_86 = t;
                                  if(((w_86 != NULL) && (w_86 != x_86)))
                                    _fail(x_86);
                                  else
                                    w_86 = x_86;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(w_86));
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
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
  g_87 = t;
  f_87 :
  if(((ATgetType(g_87) == AT_LIST) && !(ATisEmpty(g_87))))
    {
      h_87 = ATgetFirst((ATermList) g_87);
      i_87 = (ATerm) ATgetNext((ATermList) g_87);
      t = not_null(i_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym__2))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      {
        ATerm c_32;
        c_32 = t;
        {
          ATerm t_87 = NULL;
          ATerm u_87 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_87), not_null(q_87));
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = (ATerm) ATempty;
              }
            {
              u_87 = t;
              if(((t_87 != NULL) && (t_87 != u_87)))
                _fail(u_87);
              else
                t_87 = u_87;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_87), not_null(q_87), not_null(t_87));
            t = table_put_0(t);
          }
        }
        t = c_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_134 (ATerm))
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  ATerm f_32;
  f_32 = t;
  {
    ATerm e_88 = NULL;
    ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
    t = k_134(t);
    {
      e_88 = t;
      {
        if(((d_88 != NULL) && (d_88 != e_88)))
          _fail(e_88);
        else
          d_88 = e_88;
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), term_i_32);
              t = table_get_0(t);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_88 = t;
            a_88 :
            if(((ATgetType(f_88) == AT_LIST) && !(ATisEmpty(f_88))))
              {
                g_88 = ATgetFirst((ATermList) f_88);
                h_88 = (ATerm) ATgetNext((ATermList) f_88);
                {
                  if(((c_88 != NULL) && (c_88 != g_88)))
                    _fail(g_88);
                  else
                    c_88 = g_88;
                  {
                    if(((b_88 != NULL) && (b_88 != h_88)))
                      _fail(h_88);
                    else
                      b_88 = h_88;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_88), term_i_32, not_null(b_88));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_88);
                          {
                            ATerm g_3 (ATerm t)
                            {
                              ATerm i_88 = NULL;
                              i_88 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), not_null(i_88));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_3);
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
  t = f_32;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm))
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_106(t);
      t = z_106(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        t = z_106(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_134 (ATerm))
{
  ATerm p_88 = NULL;
  ATerm l_32;
  l_32 = t;
  {
    ATerm q_88 = NULL;
    ATerm r_88 = NULL;
    t = j_134(t);
    {
      q_88 = t;
      {
        if(((p_88 != NULL) && (p_88 != q_88)))
          _fail(q_88);
        else
          p_88 = q_88;
        {
          ATerm s_88 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_88), term_i_32);
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
                t = (ATerm) ATempty;
              }
            {
              s_88 = t;
              if(((r_88 != NULL) && (r_88 != s_88)))
                _fail(s_88);
              else
                r_88 = s_88;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_88), term_i_32, (ATerm) ATinsert(CheckATermList(not_null(r_88)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_32;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_134 (ATerm), ATerm m_134 (ATerm))
{
  t = begin_scope_1(t, l_134);
  {
    ATerm h_3 (ATerm t)
    {
      t = end_scope_1(t, l_134);
      return(t);
    }
    t = restore_always_2(t, m_134, h_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_134 (ATerm))
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL;
  a_89 = t;
  z_88 :
  if(match_cons(a_89, sym__2))
    {
      b_89 = ATgetArgument(a_89, 0);
      c_89 = ATgetArgument(a_89, 1);
      {
        ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
        ATerm o_32;
        o_32 = t;
        {
          ATerm i_89 = NULL;
          ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
          t = n_134(t);
          {
            i_89 = t;
            {
              if(((f_89 != NULL) && (f_89 != i_89)))
                _fail(i_89);
              else
                f_89 = i_89;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_89), not_null(b_89), not_null(c_89));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_89), term_i_32);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = p_32;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_89 = t;
                      y_88 :
                      if(((ATgetType(j_89) == AT_LIST) && !(ATisEmpty(j_89))))
                        {
                          k_89 = ATgetFirst((ATermList) j_89);
                          l_89 = (ATerm) ATgetNext((ATermList) j_89);
                          {
                            if(((g_89 != NULL) && (g_89 != k_89)))
                              _fail(k_89);
                            else
                              g_89 = k_89;
                            {
                              if(((h_89 != NULL) && (h_89 != l_89)))
                                _fail(l_89);
                              else
                                h_89 = l_89;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_89), term_i_32, (ATerm) ATinsert(CheckATermList(not_null(h_89)), (ATerm) ATinsert(CheckATermList(not_null(g_89)), not_null(b_89))));
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
        t = o_32;
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
  ATerm r_89 = NULL,s_89 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    ATerm t_89 = NULL;
    ATerm u_89 = NULL;
    t = term_t_32;
    {
      t_89 = t;
      {
        if(((r_89 != NULL) && (r_89 != t_89)))
          _fail(t_89);
        else
          r_89 = t_89;
        {
          t = term_z_16;
          {
            u_89 = t;
            if(((s_89 != NULL) && (s_89 != u_89)))
              _fail(u_89);
            else
              s_89 = u_89;
          }
        }
      }
    }
  }
  t = r_32;
  {
    ATerm u_32;
    u_32 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_89), (ATerm) ATmakeAppl(sym_Defined_2, term_v_32, not_null(s_89)));
      {
        ATerm i_3 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = assert_1(t, i_3);
      }
    }
    t = u_32;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm a_90 (ATerm t)
    {
      ATerm j_3 (ATerm t)
      {
        t = term_s_23;
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        ATerm l_3 (ATerm t)
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              {
                ATerm c_33 = t;
                int d_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(d_33);
                  }
                else
                  {
                    t = c_33;
                    {
                      ATerm i_33 = t;
                      int j_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
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
                                t = TranslateStratMatchGuard_0(t);
                                ;
                                LocalPopChoice(l_33);
                              }
                            else
                              {
                                t = k_33;
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
        t = repeat_1(t, l_3);
        {
          t = _all(t, a_90);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, j_3, k_3);
      return(t);
    }
    t = a_90(t);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm n_3 (ATerm t)
        {
          ATerm z_89 = NULL;
          z_89 = t;
          y_89 :
          if(match_cons(z_89, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, n_3);
        return(t);
      }
      t = try_1(t, m_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_33;
  m_33 = t;
  {
    ATerm d_90 = NULL;
    ATerm e_90 = NULL;
    t = term_a_28;
    {
      t = whoami_0(t);
      {
        e_90 = t;
        if(((d_90 != NULL) && (d_90 != e_90)))
          _fail(e_90);
        else
          d_90 = e_90;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_33), not_null(d_90)), term_o_33));
      {
        t = printnl_0(t);
        {
          t = term_s_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_33;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
  i_90 = t;
  h_90 :
  if(match_cons(i_90, sym__2))
    {
      j_90 = ATgetArgument(i_90, 0);
      k_90 = ATgetArgument(i_90, 1);
      {
        ATerm q_33;
        q_33 = t;
        t = SSL_printnl(not_null(j_90), not_null(k_90));
        t = q_33;
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
  ATerm p_90 = NULL;
  p_90 = t;
  t = SSL_implode_string(not_null(p_90));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
        u_90 = t;
        t_90 :
        if(((ATgetType(u_90) == AT_LIST) && !(ATisEmpty(u_90))))
          {
            v_90 = ATgetFirst((ATermList) u_90);
            w_90 = (ATerm) ATgetNext((ATermList) u_90);
            {
              t = not_null(v_90);
              {
                ATerm o_3 (ATerm t)
                {
                  t = not_null(w_90);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm g_91 = NULL;
  ATerm i_91 = NULL;
  g_91 = t;
  {
    ATerm j_91 = NULL;
    ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
    t = not_null(g_91);
    {
      j_91 = t;
      {
        t = SSL_explode_term(not_null(j_91));
        {
          l_91 = t;
          e_91 :
          if(match_cons(l_91, sym__2))
            {
              m_91 = ATgetArgument(l_91, 0);
              n_91 = ATgetArgument(l_91, 1);
              f_91 :
              if(match_string(m_91, ""))
                {
                  if(((i_91 != NULL) && (i_91 != n_91)))
                    _fail(n_91);
                  else
                    i_91 = n_91;
                }
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
      t = not_null(i_91);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_114 (ATerm))
{
  ATerm r_91 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_91);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        {
          t = Nil_0(t);
          t = k_114(t);
        }
      }
    return(t);
  }
  t = r_91(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
  u_91 = t;
  t_91 :
  if(match_cons(u_91, sym__2))
    {
      v_91 = ATgetArgument(u_91, 0);
      w_91 = ATgetArgument(u_91, 1);
      {
        t = not_null(v_91);
        {
          ATerm p_3 (ATerm t)
          {
            t = not_null(w_91);
            return(t);
          }
          t = at_end_1(t, p_3);
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
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_92 = NULL;
  b_92 = t;
  t = SSL_explode_string(not_null(b_92));
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
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm b_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_3);
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = b_34;
            {
              ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
              k_92 = t;
              j_92 :
              if(match_cons(k_92, sym_Path_1))
                {
                  l_92 = ATgetArgument(k_92, 0);
                  t = not_null(l_92);
                }
              else
                {
                  if(match_cons(k_92, sym_Var_1))
                    {
                      l_92 = ATgetArgument(k_92, 0);
                      {
                        t = not_null(l_92);
                        {
                          ATerm e_34 = t;
                          int f_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_34);
                            }
                          else
                            {
                              t = e_34;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = term_g_34;
                                  return(t);
                                }
                                t = debug_1(t, r_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_92, sym_Prefix_2))
                        {
                          l_92 = ATgetArgument(k_92, 0);
                          m_92 = ATgetArgument(k_92, 1);
                          {
                            ATerm r_92 = NULL,t_92 = NULL;
                            ATerm h_34;
                            h_34 = t;
                            {
                              ATerm s_92 = NULL;
                              t = not_null(l_92);
                              {
                                t = eval_config_0(t);
                                {
                                  s_92 = t;
                                  if(((r_92 != NULL) && (r_92 != s_92)))
                                    _fail(s_92);
                                  else
                                    r_92 = s_92;
                                }
                              }
                            }
                            t = h_34;
                            {
                              ATerm u_92 = NULL;
                              t = not_null(m_92);
                              {
                                t = eval_config_0(t);
                                {
                                  u_92 = t;
                                  if(((t_92 != NULL) && (t_92 != u_92)))
                                    _fail(u_92);
                                  else
                                    t_92 = u_92;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_92), not_null(t_92));
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
  ATerm c_93 = NULL;
  c_93 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(c_93));
    {
      t = table_get_0(t);
      {
        ATerm s_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_34;
            q_34 = t;
            {
              ATerm e_93 = NULL;
              ATerm f_93 = NULL;
              f_93 = t;
              if(((e_93 != NULL) && (e_93 != f_93)))
                _fail(f_93);
              else
                e_93 = f_93;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_7, not_null(c_93), not_null(e_93));
                t = table_put_0(t);
              }
            }
            t = q_34;
          }
          return(t);
        }
        t = try_1(t, s_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_127 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm r_34;
    r_34 = t;
    {
      ATerm j_93 = NULL;
      ATerm k_93 = NULL;
      t = term_s_34;
      {
        t = get_config_0(t);
        {
          k_93 = t;
          if(((j_93 != NULL) && (j_93 != k_93)))
            _fail(k_93);
          else
            j_93 = k_93;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_93), term_v_34);
        t = geq_0(t);
      }
    }
    t = r_34;
    t = b_127(t);
    return(t);
  }
  t = try_1(t, t_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  q_93 = t;
  o_93 :
  if(match_cons(q_93, sym__2))
    {
      r_93 = ATgetArgument(q_93, 0);
      s_93 = ATgetArgument(q_93, 1);
      p_93 :
      if(match_cons(s_93, sym_Stream_1))
        {
          t_93 = ATgetArgument(s_93, 0);
          {
            ATerm w_93 = NULL;
            t = SSL_fputc(not_null(r_93), not_null(t_93));
            {
              ATerm x_93 = NULL;
              x_93 = t;
              if(((w_93 != NULL) && (w_93 != x_93)))
                _fail(x_93);
              else
                w_93 = x_93;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_93));
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
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL;
  g_94 = t;
  c_94 :
  if(match_cons(g_94, sym__2))
    {
      h_94 = ATgetArgument(g_94, 0);
      j_94 = ATgetArgument(g_94, 1);
      d_94 :
      if(match_cons(h_94, sym_Stream_1))
        {
          i_94 = ATgetArgument(h_94, 0);
          {
            ATerm m_94 = NULL;
            t = SSL_write_term_to_stream_text(not_null(i_94), not_null(j_94));
            {
              ATerm n_94 = NULL;
              n_94 = t;
              if(((m_94 != NULL) && (m_94 != n_94)))
                _fail(n_94);
              else
                m_94 = n_94;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_94));
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
  ATerm u_3 (ATerm t)
  {
    ATerm r_94 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm s_94 = NULL;
      s_94 = t;
      if(((r_94 != NULL) && (r_94 != s_94)))
        _fail(s_94);
      else
        r_94 = s_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(r_94));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, u_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL;
  y_94 = t;
  w_94 :
  if(match_cons(y_94, sym__2))
    {
      z_94 = ATgetArgument(y_94, 0);
      b_95 = ATgetArgument(y_94, 1);
      x_94 :
      if(match_cons(z_94, sym_Stream_1))
        {
          a_95 = ATgetArgument(z_94, 0);
          {
            ATerm e_95 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(a_95), not_null(b_95));
            {
              ATerm f_95 = NULL;
              f_95 = t;
              if(((e_95 != NULL) && (e_95 != f_95)))
                _fail(f_95);
              else
                e_95 = f_95;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_95));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_125 (ATerm))
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym__2))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      {
        ATerm r_95 = NULL,t_95 = NULL;
        t = not_null(n_95);
        {
          ATerm s_95 = NULL;
          s_95 = t;
          if(((r_95 != NULL) && (r_95 != s_95)))
            _fail(s_95);
          else
            r_95 = s_95;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_95), term_y_34);
            {
              t = open_stream_0(t);
              {
                ATerm u_95 = NULL;
                u_95 = t;
                if(((t_95 != NULL) && (t_95 != u_95)))
                  _fail(u_95);
                else
                  t_95 = u_95;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_95), not_null(o_95));
                  {
                    t = x_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(o_95);
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
  ATerm c_96 = NULL;
  ATerm z_34;
  z_34 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm d_96 = NULL,e_96 = NULL;
            d_96 = t;
            z_95 :
            if(match_cons(d_96, sym_Output_1))
              {
                e_96 = ATgetArgument(d_96, 0);
                if(((c_96 != NULL) && (c_96 != e_96)))
                  _fail(e_96);
                else
                  c_96 = e_96;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_3);
          ;
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm f_96 = NULL;
            t = term_c_35;
            {
              f_96 = t;
              if(((c_96 != NULL) && (c_96 != f_96)))
                _fail(f_96);
              else
                c_96 = f_96;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_3, _id);
  }
  t = z_34;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm y_3 (ATerm t)
      {
        t = not_null(c_96);
        return(t);
      }
      t = split_2(t, y_3, _id);
      return(t);
    }
    t = _2(t, _id, x_3);
    {
      ATerm s_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            ATerm a_4 (ATerm t)
            {
              ATerm g_96 = NULL;
              g_96 = t;
              b_96 :
              if(!(match_cons(g_96, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_4);
            return(t);
          }
          t = _2(t, z_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_37);
        }
      else
        {
          t = s_37;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_127 (ATerm))
{
  ATerm n_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL;
  ATerm u_37;
  u_37 = t;
  t = dtime_0(t);
  t = u_37;
  {
    t = x_127(t);
    {
      ATerm x_37;
      x_37 = t;
      {
        ATerm o_96 = NULL;
        t = dtime_0(t);
        {
          o_96 = t;
          if(((n_96 != NULL) && (n_96 != o_96)))
            _fail(o_96);
          else
            n_96 = o_96;
        }
      }
      t = x_37;
      {
        p_96 = t;
        l_96 :
        if(match_cons(p_96, sym__2))
          {
            q_96 = ATgetArgument(p_96, 0);
            r_96 = ATgetArgument(p_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_96))), not_null(r_96));
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
  ATerm z_96 = NULL,a_97 = NULL;
  ATerm g_97 (ATerm t)
  {
    t = SSL_fclose(not_null(a_97));
    return(t);
  }
  a_97 = t;
  y_96 :
  if(match_cons(a_97, sym_Stream_1))
    {
      z_96 = ATgetArgument(a_97, 0);
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(z_96));
            ;
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            t = g_97(t);
          }
      }
    }
  else
    {
      t = g_97(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL;
  j_97 = t;
  i_97 :
  if(match_cons(j_97, sym_Stream_1))
    {
      k_97 = ATgetArgument(j_97, 0);
      t = SSL_read_term_from_stream(not_null(k_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_125 (ATerm))
{
  ATerm a_38;
  a_38 = t;
  {
    ATerm p_97 = NULL,r_97 = NULL;
    ATerm j_38;
    j_38 = t;
    {
      ATerm q_97 = NULL;
      t = j_125(t);
      {
        q_97 = t;
        if(((p_97 != NULL) && (p_97 != q_97)))
          _fail(q_97);
        else
          p_97 = q_97;
      }
    }
    t = j_38;
    {
      ATerm s_97 = NULL;
      s_97 = t;
      if(((r_97 != NULL) && (r_97 != s_97)))
        _fail(s_97);
      else
        r_97 = s_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_97)), not_null(p_97)));
        t = printnl_0(t);
      }
    }
  }
  t = a_38;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
  y_97 = t;
  x_97 :
  if(match_cons(y_97, sym__2))
    {
      z_97 = ATgetArgument(y_97, 0);
      a_98 = ATgetArgument(y_97, 1);
      {
        ATerm d_98 = NULL;
        t = SSL_fopen(not_null(z_97), not_null(a_98));
        {
          ATerm e_98 = NULL;
          e_98 = t;
          if(((d_98 != NULL) && (d_98 != e_98)))
            _fail(e_98);
          else
            d_98 = e_98;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_98));
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
  ATerm i_98 = NULL;
  i_98 = t;
  t = SSL_is_string(not_null(i_98));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
  r_98 = t;
  q_98 :
  if(match_cons(r_98, sym__2))
    {
      s_98 = ATgetArgument(r_98, 0);
      t_98 = ATgetArgument(r_98, 1);
      {
        ATerm x_98 = NULL,z_98 = NULL;
        ATerm y_98 = NULL;
        t = SSLgetAnnotations(not_null(r_98));
        {
          y_98 = t;
          if(((x_98 != NULL) && (x_98 != y_98)))
            _fail(y_98);
          else
            x_98 = y_98;
        }
        {
          t = not_null(s_98);
          {
            ATerm b_99 = NULL;
            t = i_83(t);
            {
              z_98 = t;
              {
                t = not_null(t_98);
                {
                  ATerm d_99 = NULL;
                  t = j_83(t);
                  {
                    b_99 = t;
                    {
                      ATerm e_99 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_98), not_null(b_99)), not_null(x_98));
                      {
                        e_99 = t;
                        if(((d_99 != NULL) && (d_99 != e_99)))
                          _fail(e_99);
                        else
                          d_99 = e_99;
                      }
                      t = not_null(d_99);
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
  ATerm l_99 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_99 = NULL;
    m_99 = t;
    if(((l_99 != NULL) && (l_99 != m_99)))
      _fail(m_99);
    else
      l_99 = m_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_99));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm p_99 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm s_99 = NULL;
    s_99 = t;
    if(((p_99 != NULL) && (p_99 != s_99)))
      _fail(s_99);
    else
      p_99 = s_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_99));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm v_99 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm w_99 = NULL;
    w_99 = t;
    if(((v_99 != NULL) && (v_99 != w_99)))
      _fail(w_99);
    else
      v_99 = w_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_99));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  b_100 :
  if(match_cons(c_100, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(c_100, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(c_100, sym_stdin_0))
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
  ATerm m_100 = NULL;
  ATerm o_100 = NULL,p_100 = NULL;
  m_100 = t;
  {
    ATerm q_100 = NULL;
    ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL;
    t = not_null(m_100);
    {
      q_100 = t;
      {
        t = SSL_explode_term(not_null(q_100));
        {
          s_100 = t;
          j_100 :
          if(match_cons(s_100, sym__2))
            {
              t_100 = ATgetArgument(s_100, 0);
              u_100 = ATgetArgument(s_100, 1);
              k_100 :
              if(match_string(t_100, ""))
                {
                  l_100 :
                  if(((ATgetType(u_100) == AT_LIST) && !(ATisEmpty(u_100))))
                    {
                      v_100 = ATgetFirst((ATermList) u_100);
                      w_100 = (ATerm) ATgetNext((ATermList) u_100);
                      {
                        if(((p_100 != NULL) && (p_100 != v_100)))
                          _fail(v_100);
                        else
                          p_100 = v_100;
                        if(((o_100 != NULL) && (o_100 != w_100)))
                          _fail(w_100);
                        else
                          o_100 = w_100;
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
    t = not_null(p_100);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
  e_101 = t;
  d_101 :
  if(match_cons(e_101, sym__2))
    {
      f_101 = ATgetArgument(e_101, 0);
      g_101 = ATgetArgument(e_101, 1);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm p_38 = t;
              int u_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm h_101 = NULL,i_101 = NULL;
                    h_101 = t;
                    c_101 :
                    if(match_cons(h_101, sym_Path_1))
                      {
                        i_101 = ATgetArgument(h_101, 0);
                        t = not_null(i_101);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, b_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(u_38);
                }
              else
                {
                  t = p_38;
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
  ATerm q_101 = NULL;
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_101 = NULL;
      ATerm p_101 = NULL;
      p_101 = t;
      if(((o_101 != NULL) && (o_101 != p_101)))
        _fail(p_101);
      else
        o_101 = p_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_101), term_x_38);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm c_4 (ATerm t)
        {
          t = term_y_38;
          return(t);
        }
        t = debug_1(t, c_4);
        _fail(t);
      }
    }
  {
    ATerm z_38;
    z_38 = t;
    {
      ATerm r_101 = NULL;
      t = read_from_stream_0(t);
      {
        r_101 = t;
        if(((q_101 != NULL) && (q_101 != r_101)))
          _fail(r_101);
        else
          q_101 = r_101;
      }
    }
    t = z_38;
    {
      t = fclose_0(t);
      t = not_null(q_101);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_121 (ATerm), ATerm l_121 (ATerm))
{
  ATerm w_101 = NULL,y_101 = NULL;
  ATerm a_39;
  a_39 = t;
  {
    ATerm x_101 = NULL;
    t = k_121(t);
    {
      x_101 = t;
      if(((w_101 != NULL) && (w_101 != x_101)))
        _fail(x_101);
      else
        w_101 = x_101;
    }
  }
  t = a_39;
  {
    ATerm z_101 = NULL;
    t = l_121(t);
    {
      z_101 = t;
      if(((y_101 != NULL) && (y_101 != z_101)))
        _fail(z_101);
      else
        y_101 = z_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(y_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_102 = NULL;
  ATerm b_39;
  b_39 = t;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_4 (ATerm t)
        {
          ATerm g_102 = NULL,h_102 = NULL;
          g_102 = t;
          d_102 :
          if(match_cons(g_102, sym_Input_1))
            {
              h_102 = ATgetArgument(g_102, 0);
              if(((f_102 != NULL) && (f_102 != h_102)))
                _fail(h_102);
              else
                f_102 = h_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_4);
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm i_102 = NULL;
          t = term_e_39;
          {
            i_102 = t;
            if(((f_102 != NULL) && (f_102 != i_102)))
              _fail(i_102);
            else
              f_102 = i_102;
          }
        }
      }
  }
  t = b_39;
  {
    ATerm e_4 (ATerm t)
    {
      t = not_null(f_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm n_102 = NULL;
    n_102 = t;
    l_102 :
    if(!(match_string(n_102, "-k")))
      {
        if(!(match_string(n_102, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    ATerm f_39;
    f_39 = t;
    {
      ATerm o_102 = NULL;
      ATerm p_102 = NULL;
      t = string_to_int_0(t);
      {
        p_102 = t;
        if(((o_102 != NULL) && (o_102 != p_102)))
          _fail(p_102);
        else
          o_102 = p_102;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_39, not_null(o_102));
        t = set_config_0(t);
      }
    }
    t = f_39;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_h_39;
    return(t);
  }
  t = ArgOption_3(t, f_4, g_4, h_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_102 = NULL;
  s_102 = t;
  t = SSL_string_to_int(not_null(s_102));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        ATerm a_103 = NULL;
        a_103 = t;
        v_102 :
        if(!(match_string(a_103, "-S")))
          {
            if(!(match_string(a_103, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = term_n_39;
        t = set_config_0(t);
        t = term_o_39;
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_p_39;
        return(t);
      }
      t = Option_3(t, i_4, j_4, k_4);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = i_39;
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 (ATerm t)
            {
              ATerm b_103 = NULL;
              b_103 = t;
              w_102 :
              if(!(match_string(b_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              ATerm e_103 = NULL;
              ATerm s_39;
              s_39 = t;
              {
                ATerm c_103 = NULL;
                ATerm d_103 = NULL;
                t = string_to_int_0(t);
                {
                  d_103 = t;
                  if(((c_103 != NULL) && (c_103 != d_103)))
                    _fail(d_103);
                  else
                    c_103 = d_103;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_34, not_null(c_103));
                  t = set_config_0(t);
                }
              }
              t = s_39;
              {
                ATerm f_103 = NULL;
                f_103 = t;
                if(((e_103 != NULL) && (e_103 != f_103)))
                  _fail(f_103);
                else
                  e_103 = f_103;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_103));
              }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_t_39;
              return(t);
            }
            t = ArgOption_3(t, l_4, m_4, n_4);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm g_103 = NULL;
                g_103 = t;
                z_102 :
                if(!(match_string(g_103, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_v_39;
                t = set_config_0(t);
                t = term_w_39;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_x_39;
                return(t);
              }
              t = Option_3(t, o_4, p_4, q_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm m_103 = NULL;
    m_103 = t;
    j_103 :
    if(!(match_string(m_103, "-o")))
      {
        if(!(match_string(m_103, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm p_103 = NULL;
    ATerm a_40;
    a_40 = t;
    {
      ATerm n_103 = NULL;
      ATerm o_103 = NULL;
      o_103 = t;
      if(((n_103 != NULL) && (n_103 != o_103)))
        _fail(o_103);
      else
        n_103 = o_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_40, not_null(n_103));
        t = set_config_0(t);
      }
    }
    t = a_40;
    {
      ATerm q_103 = NULL;
      q_103 = t;
      if(((p_103 != NULL) && (p_103 != q_103)))
        _fail(q_103);
      else
        p_103 = q_103;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_103));
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_c_40;
    return(t);
  }
  t = ArgOption_3(t, r_4, s_4, t_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm u_103 = NULL;
          u_103 = t;
          t_103 :
          if(!(match_string(u_103, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_g_40;
          t = set_config_0(t);
          t = term_h_40;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_i_40;
          return(t);
        }
        t = Option_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
  a_104 = t;
  y_103 :
  if(match_string(a_104, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(a_104) == AT_LIST) && !(ATisEmpty(a_104))))
        {
          b_104 = ATgetFirst((ATermList) a_104);
          c_104 = (ATerm) ATgetNext((ATermList) a_104);
          z_103 :
          if(((ATgetType(c_104) == AT_LIST) && !(ATisEmpty(c_104))))
            {
              d_104 = ATgetFirst((ATermList) c_104);
              e_104 = (ATerm) ATgetNext((ATermList) c_104);
              {
                ATerm i_104 = NULL;
                ATerm j_40;
                j_40 = t;
                {
                  t = not_null(b_104);
                  t = k_0(t);
                }
                t = j_40;
                {
                  ATerm j_104 = NULL;
                  t = not_null(d_104);
                  {
                    t = m_0(t);
                    {
                      j_104 = t;
                      if(((i_104 != NULL) && (i_104 != j_104)))
                        _fail(j_104);
                      else
                        i_104 = j_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_104)), not_null(i_104));
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
  ATerm x_4 (ATerm t)
  {
    ATerm q_104 = NULL;
    q_104 = t;
    n_104 :
    if(!(match_string(q_104, "-i")))
      {
        if(!(match_string(q_104, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm t_104 = NULL;
    ATerm k_40;
    k_40 = t;
    {
      ATerm r_104 = NULL;
      ATerm s_104 = NULL;
      s_104 = t;
      if(((r_104 != NULL) && (r_104 != s_104)))
        _fail(s_104);
      else
        r_104 = s_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_40, not_null(r_104));
        t = set_config_0(t);
      }
    }
    t = k_40;
    {
      ATerm u_104 = NULL;
      u_104 = t;
      if(((t_104 != NULL) && (t_104 != u_104)))
        _fail(u_104);
      else
        t_104 = u_104;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_104));
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_m_40;
    return(t);
  }
  t = ArgOption_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm p_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = p_40;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm y_104 = NULL;
  t = report_run_time_0(t);
  {
    ATerm z_104 = NULL;
    t = term_a_28;
    {
      t = whoami_0(t);
      {
        z_104 = t;
        if(((y_104 != NULL) && (y_104 != z_104)))
          _fail(z_104);
        else
          y_104 = z_104;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, term_r_40), not_null(y_104)));
      {
        t = printnl_0(t);
        {
          t = term_s_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_s_40;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_105 = NULL;
  c_105 = t;
  t = SSL_TicksToSeconds(not_null(c_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
  h_105 = t;
  g_105 :
  if(match_cons(h_105, sym__2))
    {
      i_105 = ATgetArgument(h_105, 0);
      j_105 = ATgetArgument(h_105, 1);
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_105), not_null(j_105));
            ;
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            t = SSL_addr(not_null(i_105), not_null(j_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_119 (ATerm), ATerm w_119 (ATerm))
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_119(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
        q_105 = t;
        p_105 :
        if(((ATgetType(q_105) == AT_LIST) && !(ATisEmpty(q_105))))
          {
            r_105 = ATgetFirst((ATermList) q_105);
            s_105 = (ATerm) ATgetNext((ATermList) q_105);
            {
              ATerm v_105 = NULL;
              ATerm w_105 = NULL;
              t = not_null(s_105);
              {
                t = foldr_2(t, v_119, w_119);
                {
                  w_105 = t;
                  if(((v_105 != NULL) && (v_105 != w_105)))
                    _fail(w_105);
                  else
                    v_105 = w_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_105), not_null(v_105));
                t = w_119(t);
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
ATerm crush_2 (ATerm t, ATerm o_123 (ATerm), ATerm p_123 (ATerm))
{
  ATerm d_106 = NULL;
  ATerm f_106 = NULL;
  d_106 = t;
  {
    ATerm g_106 = NULL;
    ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
    t = not_null(d_106);
    {
      g_106 = t;
      {
        t = SSL_explode_term(not_null(g_106));
        {
          l_106 = t;
          c_106 :
          if(match_cons(l_106, sym__2))
            {
              m_106 = ATgetArgument(l_106, 0);
              n_106 = ATgetArgument(l_106, 1);
              if(((f_106 != NULL) && (f_106 != n_106)))
                _fail(n_106);
              else
                f_106 = n_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_106);
      t = foldr_2(t, o_123, p_123);
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
    ATerm a_5 (ATerm t)
    {
      t = term_e_17;
      return(t);
    }
    t = crush_2(t, a_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL;
  t_106 = t;
  s_106 :
  if(match_cons(t_106, sym__2))
    {
      u_106 = ATgetArgument(t_106, 0);
      v_106 = ATgetArgument(t_106, 1);
      {
        ATerm x_40;
        x_40 = t;
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_106), not_null(v_106));
              ;
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              t = SSL_gtr(not_null(u_106), not_null(v_106));
            }
        }
        t = x_40;
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
  ATerm d_107 = NULL;
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_107 = NULL,h_107 = NULL,i_107 = NULL;
      e_107 = t;
      c_107 :
      if(match_cons(e_107, sym__2))
        {
          h_107 = ATgetArgument(e_107, 0);
          i_107 = ATgetArgument(e_107, 1);
          {
            if(((d_107 != NULL) && (d_107 != h_107)))
              _fail(h_107);
            else
              d_107 = h_107;
            if(((d_107 != NULL) && (d_107 != i_107)))
              _fail(i_107);
            else
              d_107 = i_107;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_127 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_41;
    c_41 = t;
    {
      ATerm l_107 = NULL;
      ATerm m_107 = NULL;
      t = term_s_34;
      {
        t = get_config_0(t);
        {
          m_107 = t;
          if(((l_107 != NULL) && (l_107 != m_107)))
            _fail(m_107);
          else
            l_107 = m_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_107), term_s_17);
        t = geq_0(t);
      }
    }
    t = c_41;
    t = a_127(t);
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm q_107 = NULL,s_107 = NULL;
    ATerm d_41;
    d_41 = t;
    {
      ATerm r_107 = NULL;
      t = run_time_0(t);
      {
        r_107 = t;
        if(((q_107 != NULL) && (q_107 != r_107)))
          _fail(r_107);
        else
          q_107 = r_107;
      }
    }
    t = d_41;
    {
      ATerm t_107 = NULL;
      t = term_a_28;
      {
        t = whoami_0(t);
        {
          t_107 = t;
          if(((s_107 != NULL) && (s_107 != t_107)))
            _fail(t_107);
          else
            s_107 = t_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_41), not_null(q_107)), term_e_41), not_null(s_107)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_e_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  z_107 :
  if(match_cons(a_108, sym_Version_0))
    {
      ATerm c_108 = NULL,g_108 = NULL;
      ATerm g_41;
      g_41 = t;
      {
        ATerm f_108 = NULL;
        t = SSLgetAnnotations(not_null(a_108));
        {
          f_108 = t;
          if(((c_108 != NULL) && (c_108 != f_108)))
            _fail(f_108);
          else
            c_108 = f_108;
        }
      }
      t = g_41;
      {
        ATerm h_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_108));
        {
          h_108 = t;
          if(((g_108 != NULL) && (g_108 != h_108)))
            _fail(h_108);
          else
            g_108 = h_108;
        }
        t = not_null(g_108);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_128 (ATerm))
{
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_41;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_41);
    }
  else
    {
      t = h_41;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              {
                ATerm m_41 = t;
                int n_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(n_41);
                  }
                else
                  {
                    t = m_41;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, d_5);
      }
    }
  t = v_128(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_108 = NULL;
  m_108 = t;
  t = SSL_table_create(not_null(m_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_108 = NULL;
  q_108 = t;
  {
    ATerm o_41;
    o_41 = t;
    {
      t = term_p_41;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_41, term_q_41, not_null(q_108));
          t = table_put_0(t);
        }
      }
    }
    t = o_41;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_108 = NULL;
  u_108 = t;
  t = SSL_table_destroy(not_null(u_108));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_108 = NULL;
  y_108 = t;
  t = SSL_exit(not_null(y_108));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_113 (ATerm))
{
  ATerm b_109 (ATerm t)
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = Cons_2(t, u_113, b_109);
      }
    return(t);
  }
  t = b_109(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  m_109 = t;
  j_109 :
  if(((ATgetType(m_109) == AT_LIST) && !(ATisEmpty(m_109))))
    {
      k_109 = ATgetFirst((ATermList) m_109);
      l_109 = (ATerm) ATgetNext((ATermList) m_109);
      {
        ATerm p_109 = NULL;
        t = not_null(l_109);
        {
          ATerm t_41;
          t_41 = t;
          {
            ATerm q_109 = NULL,s_109 = NULL,u_109 = NULL;
            ATerm u_41;
            u_41 = t;
            {
              ATerm r_109 = NULL;
              t = i_0(t);
              {
                r_109 = t;
                if(((q_109 != NULL) && (q_109 != r_109)))
                  _fail(r_109);
                else
                  q_109 = r_109;
              }
            }
            t = u_41;
            {
              ATerm t_109 = NULL;
              t = not_null(k_109);
              {
                t = g_0(t);
                {
                  t_109 = t;
                  if(((s_109 != NULL) && (s_109 != t_109)))
                    _fail(t_109);
                  else
                    s_109 = t_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_109)), not_null(s_109));
                {
                  u_109 = t;
                  if(((p_109 != NULL) && (p_109 != u_109)))
                    _fail(u_109);
                  else
                    p_109 = u_109;
                }
              }
            }
          }
          t = t_41;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(p_109);
              return(t);
            }
            t = reverse_acc_2(t, g_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_109) == AT_LIST) && ATisEmpty(m_109)))
        {
          {
            t = term_a_28;
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm f_110 = NULL,g_110 = NULL;
  f_110 = t;
  e_110 :
  if(match_cons(f_110, sym_Program_1))
    {
      g_110 = ATgetArgument(f_110, 0);
      {
        ATerm j_110 = NULL,l_110 = NULL;
        ATerm k_110 = NULL;
        t = SSLgetAnnotations(not_null(f_110));
        {
          k_110 = t;
          if(((j_110 != NULL) && (j_110 != k_110)))
            _fail(k_110);
          else
            j_110 = k_110;
        }
        {
          t = not_null(g_110);
          {
            ATerm n_110 = NULL;
            t = e_94(t);
            {
              l_110 = t;
              {
                ATerm o_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_110)), not_null(j_110));
                {
                  o_110 = t;
                  if(((n_110 != NULL) && (n_110 != o_110)))
                    _fail(o_110);
                  else
                    n_110 = o_110;
                }
                t = not_null(n_110);
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
  ATerm x_110 = NULL;
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_110 = NULL;
      t = term_s_40;
      {
        t = get_config_0(t);
        {
          y_110 = t;
          if(((x_110 != NULL) && (x_110 != y_110)))
            _fail(y_110);
          else
            x_110 = y_110;
        }
      }
      ;
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm z_110 = NULL;
            z_110 = t;
            if(((x_110 != NULL) && (x_110 != z_110)))
              _fail(z_110);
            else
              x_110 = z_110;
            return(t);
          }
          t = Program_1(t, h_5);
          return(t);
        }
        t = option_defined_1(t, g_5);
      }
    }
  {
    ATerm i_5 (ATerm t)
    {
      ATerm m_5 (ATerm t)
      {
        t = not_null(x_110);
        return(t);
      }
      t = short_description_1(t, m_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    {
      t = term_x_41;
      {
        t = echo_0(t);
        {
          t = term_a_42;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm a_111 = NULL;
                  ATerm b_111 = NULL;
                  b_111 = t;
                  if(((a_111 != NULL) && (a_111 != b_111)))
                    _fail(b_111);
                  else
                    a_111 = b_111;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_111)), term_b_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm c_111 = NULL;
                    ATerm d_111 = NULL;
                    ATerm p_5 (ATerm t)
                    {
                      t = not_null(x_110);
                      return(t);
                    }
                    t = long_description_1(t, p_5);
                    {
                      d_111 = t;
                      if(((c_111 != NULL) && (c_111 != d_111)))
                        _fail(d_111);
                      else
                        c_111 = d_111;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_111)), term_c_42);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_5);
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
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm n_111 = NULL,o_111 = NULL;
  n_111 = t;
  m_111 :
  if(match_cons(n_111, sym_Undefined_1))
    {
      o_111 = ATgetArgument(n_111, 0);
      {
        ATerm r_111 = NULL,t_111 = NULL;
        ATerm s_111 = NULL;
        t = SSLgetAnnotations(not_null(n_111));
        {
          s_111 = t;
          if(((r_111 != NULL) && (r_111 != s_111)))
            _fail(s_111);
          else
            r_111 = s_111;
        }
        {
          t = not_null(o_111);
          {
            ATerm v_111 = NULL;
            t = f_94(t);
            {
              t_111 = t;
              {
                ATerm w_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_111)), not_null(r_111));
                {
                  w_111 = t;
                  if(((v_111 != NULL) && (v_111 != w_111)))
                    _fail(w_111);
                  else
                    v_111 = w_111;
                }
                t = not_null(v_111);
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
ATerm fetch_1 (ATerm t, ATerm e_114 (ATerm))
{
  ATerm b_112 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_114, _id);
        ;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = Cons_2(t, _id, b_112);
      }
    return(t);
  }
  t = b_112(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_130 (ATerm))
{
  t = fetch_1(t, j_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL;
  d_112 = t;
  c_112 :
  if(((ATgetType(d_112) == AT_LIST) && ATisEmpty(d_112)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_112) == AT_LIST) && !(ATisEmpty(d_112))))
        {
          e_112 = ATgetFirst((ATermList) d_112);
          f_112 = (ATerm) ATgetNext((ATermList) d_112);
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
  ATerm h_42;
  h_42 = t;
  {
    ATerm i_112 = NULL;
    ATerm l_112 = NULL;
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        {
          ATerm j_112 = NULL;
          ATerm k_112 = NULL;
          k_112 = t;
          if(((j_112 != NULL) && (j_112 != k_112)))
            _fail(k_112);
          else
            j_112 = k_112;
          t = (ATerm) ATinsert(ATempty, not_null(j_112));
        }
      }
    {
      l_112 = t;
      if(((i_112 != NULL) && (i_112 != l_112)))
        _fail(l_112);
      else
        i_112 = l_112;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(i_112));
      t = printnl_0(t);
    }
  }
  t = h_42;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_s_40;
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
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(l_42);
    }
  else
    {
      t = k_42;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_112 = NULL;
  s_112 = t;
  r_112 :
  if(match_cons(s_112, sym_Help_0))
    {
      ATerm u_112 = NULL,w_112 = NULL;
      ATerm m_42;
      m_42 = t;
      {
        ATerm v_112 = NULL;
        t = SSLgetAnnotations(not_null(s_112));
        {
          v_112 = t;
          if(((u_112 != NULL) && (u_112 != v_112)))
            _fail(v_112);
          else
            u_112 = v_112;
        }
      }
      t = m_42;
      {
        ATerm x_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_112));
        {
          x_112 = t;
          if(((w_112 != NULL) && (w_112 != x_112)))
            _fail(x_112);
          else
            w_112 = x_112;
        }
        t = not_null(w_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_106(t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 (ATerm t)
      {
        ATerm d_113 = NULL;
        d_113 = t;
        b_113 :
        if(!(match_string(d_113, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_s_42;
        t = set_config_0(t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_t_42;
        return(t);
      }
      t = Option_3(t, q_5, r_5, s_5);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm e_113 = NULL;
          e_113 = t;
          c_113 :
          if(!(match_string(e_113, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_s_42;
          {
            t = set_config_0(t);
            {
              t = term_v_42;
              t = set_config_0(t);
            }
          }
          t = term_w_42;
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_x_42;
          return(t);
        }
        t = Option_3(t, t_5, u_5, v_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL;
  h_113 = t;
  g_113 :
  if(match_cons(h_113, sym__2))
    {
      i_113 = ATgetArgument(h_113, 0);
      j_113 = ATgetArgument(h_113, 1);
      t = SSL_table_get(not_null(i_113), not_null(j_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,t_113 = NULL,w_113 = NULL;
  q_113 = t;
  p_113 :
  if(match_cons(q_113, sym__3))
    {
      r_113 = ATgetArgument(q_113, 0);
      t_113 = ATgetArgument(q_113, 1);
      w_113 = ATgetArgument(q_113, 2);
      {
        ATerm y_42;
        y_42 = t;
        {
          ATerm a_114 = NULL;
          ATerm b_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_113), not_null(t_113));
          {
            ATerm z_42 = t;
            int a_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_43);
              }
            else
              {
                t = z_42;
                t = (ATerm) ATempty;
              }
            {
              b_114 = t;
              if(((a_114 != NULL) && (a_114 != b_114)))
                _fail(b_114);
              else
                a_114 = b_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_113), not_null(t_113), (ATerm) ATinsert(CheckATermList(not_null(a_114)), not_null(w_113)));
            t = table_put_0(t);
          }
        }
        t = y_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_131 (ATerm))
{
  ATerm h_114 = NULL;
  ATerm i_114 = NULL;
  t = term_a_28;
  {
    t = o_131(t);
    {
      i_114 = t;
      if(((h_114 != NULL) && (h_114 != i_114)))
        _fail(i_114);
      else
        h_114 = i_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_41, term_z_41, not_null(h_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL;
  q_114 = t;
  p_114 :
  if(match_string(q_114, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_114) == AT_LIST) && !(ATisEmpty(q_114))))
        {
          r_114 = ATgetFirst((ATermList) q_114);
          s_114 = (ATerm) ATgetNext((ATermList) q_114);
          {
            ATerm v_114 = NULL;
            ATerm b_43;
            b_43 = t;
            {
              t = not_null(r_114);
              t = a_0(t);
            }
            t = b_43;
            {
              ATerm w_114 = NULL;
              t = term_a_28;
              {
                t = b_0(t);
                {
                  w_114 = t;
                  if(((v_114 != NULL) && (v_114 != w_114)))
                    _fail(w_114);
                  else
                    v_114 = w_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_114)), not_null(v_114));
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
  ATerm x_5 (ATerm t)
  {
    ATerm b_115 = NULL;
    b_115 = t;
    a_115 :
    if(!(match_string(b_115, "--help")))
      {
        if(!(match_string(b_115, "-h")))
          {
            if(!(match_string(b_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_c_43;
    {
      t = set_config_0(t);
      t = term_d_43;
    }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_e_43;
    return(t);
  }
  t = Option_3(t, x_5, y_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  e_115 = t;
  d_115 :
  if(((ATgetType(e_115) == AT_LIST) && !(ATisEmpty(e_115))))
    {
      f_115 = ATgetFirst((ATermList) e_115);
      g_115 = (ATerm) ATgetNext((ATermList) e_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL;
  q_115 = t;
  p_115 :
  if(((ATgetType(q_115) == AT_LIST) && !(ATisEmpty(q_115))))
    {
      r_115 = ATgetFirst((ATermList) q_115);
      s_115 = (ATerm) ATgetNext((ATermList) q_115);
      {
        ATerm w_115 = NULL,y_115 = NULL;
        ATerm x_115 = NULL;
        t = SSLgetAnnotations(not_null(q_115));
        {
          x_115 = t;
          if(((w_115 != NULL) && (w_115 != x_115)))
            _fail(x_115);
          else
            w_115 = x_115;
        }
        {
          t = not_null(r_115);
          {
            ATerm a_116 = NULL;
            t = r_84(t);
            {
              y_115 = t;
              {
                t = not_null(s_115);
                {
                  ATerm c_116 = NULL;
                  t = s_84(t);
                  {
                    a_116 = t;
                    {
                      ATerm d_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_116)), not_null(y_115)), not_null(w_115));
                      {
                        d_116 = t;
                        if(((c_116 != NULL) && (c_116 != d_116)))
                          _fail(d_116);
                        else
                          c_116 = d_116;
                      }
                      t = not_null(c_116);
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
  ATerm n_116 = NULL;
  n_116 = t;
  m_116 :
  if(((ATgetType(n_116) == AT_LIST) && ATisEmpty(n_116)))
    {
      {
        ATerm p_116 = NULL,r_116 = NULL;
        ATerm f_43;
        f_43 = t;
        {
          ATerm q_116 = NULL;
          t = SSLgetAnnotations(not_null(n_116));
          {
            q_116 = t;
            if(((p_116 != NULL) && (p_116 != q_116)))
              _fail(q_116);
            else
              p_116 = q_116;
          }
        }
        t = f_43;
        {
          ATerm s_116 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_116));
          {
            s_116 = t;
            if(((r_116 != NULL) && (r_116 != s_116)))
              _fail(s_116);
            else
              r_116 = s_116;
          }
          t = not_null(r_116);
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
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL;
  y_116 = t;
  x_116 :
  if(match_cons(y_116, sym__2))
    {
      z_116 = ATgetArgument(y_116, 0);
      a_117 = ATgetArgument(y_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_7, not_null(z_116), not_null(a_117));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_131 (ATerm))
{
  ATerm g_43;
  g_43 = t;
  {
    ATerm a_6 (ATerm t)
    {
      t = term_h_43;
      t = m_131(t);
      return(t);
    }
    t = try_1(t, a_6);
  }
  t = g_43;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm i_117 = NULL;
      ATerm i_43;
      i_43 = t;
      {
        ATerm g_117 = NULL;
        ATerm h_117 = NULL;
        h_117 = t;
        if(((g_117 != NULL) && (g_117 != h_117)))
          _fail(h_117);
        else
          g_117 = h_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_40, not_null(g_117));
          t = set_config_0(t);
        }
      }
      t = i_43;
      {
        ATerm j_117 = NULL;
        j_117 = t;
        if(((i_117 != NULL) && (i_117 != j_117)))
          _fail(j_117);
        else
          i_117 = j_117;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_117));
      }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm j_43 = t;
      int k_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_43 = t;
          int m_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(m_43);
            }
          else
            {
              t = l_43;
              {
                t = m_131(t);
                t = Cons_2(t, _id, g_6);
              }
            }
          ;
          LocalPopChoice(k_43);
        }
      else
        {
          t = j_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, g_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
  ATerm o_43;
  o_43 = t;
  {
    ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL;
    s_117 = t;
    o_117 :
    if(match_cons(s_117, sym__3))
      {
        t_117 = ATgetArgument(s_117, 0);
        u_117 = ATgetArgument(s_117, 1);
        v_117 = ATgetArgument(s_117, 2);
        {
          if(((p_117 != NULL) && (p_117 != t_117)))
            _fail(t_117);
          else
            p_117 = t_117;
          {
            if(((q_117 != NULL) && (q_117 != u_117)))
              _fail(u_117);
            else
              q_117 = u_117;
            {
              if(((r_117 != NULL) && (r_117 != v_117)))
                _fail(v_117);
              else
                r_117 = v_117;
              t = SSL_table_put(not_null(p_117), not_null(q_117), not_null(r_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_43;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_131 (ATerm))
{
  ATerm y_117 = NULL;
  ATerm p_43;
  p_43 = t;
  {
    t = term_q_43;
    t = table_put_0(t);
  }
  t = p_43;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm r_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_131(t);
          ;
          LocalPopChoice(s_43);
        }
      else
        {
          t = r_43;
          {
            ATerm t_43 = t;
            int u_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(u_43);
              }
            else
              {
                t = t_43;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, h_6);
    {
      ATerm i_6 (ATerm t)
      {
        ATerm v_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_43;
            x_43 = t;
            {
              ATerm y_43 = t;
              int z_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_41;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(z_43);
                }
              else
                {
                  t = y_43;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = x_43;
            {
              t = system_usage_0(t);
              {
                t = term_e_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(w_43);
          }
        else
          {
            t = v_43;
            {
              ATerm a_44 = t;
              int b_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_44;
                  c_44 = t;
                  {
                    t = term_r_42;
                    t = get_config_0(t);
                  }
                  t = c_44;
                  {
                    t = system_about_0(t);
                    {
                      t = term_e_17;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(b_44);
                }
              else
                {
                  t = a_44;
                  {
                    ATerm l_6 (ATerm t)
                    {
                      ATerm n_6 (ATerm t)
                      {
                        ATerm z_117 = NULL;
                        z_117 = t;
                        if(((y_117 != NULL) && (y_117 != z_117)))
                          _fail(z_117);
                        else
                          y_117 = z_117;
                        return(t);
                      }
                      t = Undefined_1(t, n_6);
                      return(t);
                    }
                    t = option_defined_1(t, l_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_117)), term_d_44));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_s_17;
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
      t = try_1(t, i_6);
      {
        ATerm e_44;
        e_44 = t;
        {
          t = term_y_41;
          t = table_destroy_0(t);
        }
        t = e_44;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm))
{
  t = parse_options_1(t, x_128);
  {
    t = store_options_0(t);
    {
      t = z_128(t);
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_128);
            ;
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            {
              ATerm h_44 = t;
              int i_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_129(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_44);
                }
              else
                {
                  t = h_44;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_128(t);
        ;
        LocalPopChoice(k_44);
      }
    else
      {
        t = j_44;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_6, o_128, p_128, s_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_128 (ATerm), ATerm h_128 (ATerm), ATerm i_128 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      ATerm l_44;
      l_44 = t;
      {
        ATerm c_118 = NULL;
        ATerm d_118 = NULL;
        t = term_s_40;
        {
          t = get_config_0(t);
          {
            d_118 = t;
            if(((c_118 != NULL) && (c_118 != d_118)))
              _fail(d_118);
            else
              c_118 = d_118;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATempty, not_null(c_118)));
          t = printnl_0(t);
        }
      }
      t = l_44;
      return(t);
    }
    t = if_verbose2_1(t, z_6);
    return(t);
  }
  t = iowrap_4(t, g_128, h_128, i_128, y_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_128 (ATerm), ATerm f_128 (ATerm))
{
  t = iowrap_3(t, e_128, f_128, default_usage_0);
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
