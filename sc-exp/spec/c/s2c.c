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
ATerm term_f_43;
ATerm term_s_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_m_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_c_38;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_p_33;
ATerm term_i_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_y_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_c_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_m_29;
ATerm term_y_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
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
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
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
ATerm term_l_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_o_11;
ATerm term_j_9;
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
ATerm term_m_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_j_7;
ATerm term_i_7;
void init_constant_terms (void)
{
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_t_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Id_1, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Id_1, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_9, (ATerm) ATempty);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_9, term_j_9);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Id_1, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Id_1, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Id_1, term_o_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, term_v_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Id_1, term_d_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Id_1, term_l_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Id_1, term_s_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Id_1, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_18, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_18, term_j_9);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_18, (ATerm) ATempty);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_r_18, term_j_9);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_19, (ATerm) ATempty);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_h_19, term_j_9);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Id_1, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_19, (ATerm) ATempty);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_19, term_j_9);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Id_1, term_t_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_z_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_a_18);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Id_1, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_h_21, term_s_15);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, term_a_18);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Id_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_22, (ATerm) ATempty);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_f_22, term_s_15);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Id_1, term_k_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Id_1, term_s_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_22, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Stat_1, term_e_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_j_19);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, term_a_18);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Return_1, term_a_18);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Id_1, term_n_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_a_18, term_j_9);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, term_u_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Id_1, term_m_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Id_1, term_o_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_9, (ATerm) ATempty);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Stat_1, term_q_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Id_1, term_w_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_30, (ATerm) ATempty);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_30, (ATerm) ATempty);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Some_1, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_9, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_30, (ATerm)ATempty, (ATerm)ATempty, term_u_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Op_2, term_m_31, (ATerm) ATempty);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_b_17);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_17);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_w_38, term_j_27);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_j_27);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_c_41);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_j_27);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_x_41, term_j_27);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_m_40, term_j_27);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__3, term_b_41, term_c_41, (ATerm) ATempty);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm a_130 (ATerm), ATerm b_130 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm t_108 (ATerm));
ATerm LiftCompound_0 (ATerm);
ATerm listbu1_1 (ATerm, ATerm w_2 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm r_106 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm h_86 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm q_85 (ATerm), ATerm r_85 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm y_95 (ATerm));
ATerm FunCall_2 (ATerm, ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm q_107 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_107 (ATerm));
ATerm TranslateStrat_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm x_119 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm t_122 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_134 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm p_122 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm w_133 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_133 (ATerm));
ATerm scope_2 (ATerm, ATerm x_133 (ATerm), ATerm y_133 (ATerm));
ATerm assert_1 (ATerm, ATerm z_133 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_113 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_126 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm j_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_127 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_124 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_82 (ATerm), ATerm v_82 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_120 (ATerm), ATerm x_120 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_119 (ATerm), ATerm i_119 (ATerm));
ATerm crush_2 (ATerm, ATerm a_123 (ATerm), ATerm b_123 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_126 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_128 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_130 (ATerm));
ATerm map_1 (ATerm, ATerm g_113 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_130 (ATerm));
ATerm Program_1 (ATerm, ATerm q_93 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_93 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_113 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_129 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_105 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_130 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_130 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm u_127 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_127 (ATerm), ATerm r_127 (ATerm));
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
          ATerm b_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = b_7;
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
          t = (ATerm) ATmakeAppl(sym__3, term_i_7, not_null(l_5), not_null(c_6));
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
ATerm Option_2 (ATerm t, ATerm a_130 (ATerm), ATerm b_130 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  t = Option_3(t, a_130, b_130, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
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
        t = term_m_7;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_o_7;
            return(t);
          }
          t = debug_1(t, u_0);
          {
            ATerm r_7;
            r_7 = t;
            {
              t = term_z_7;
              {
                ATerm v_0 (ATerm t)
                {
                  t = term_a_8;
                  return(t);
                }
                t = assert_1(t, v_0);
              }
            }
            t = r_7;
          }
        }
        return(t);
      }
      t = Option_2(t, s_0, t_0);
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), term_e_8);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_f_8;
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
              t = term_m_8;
              return(t);
            }
            t = ArgOption_3(t, x_0, y_0, z_0);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
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
                ATerm n_8;
                n_8 = t;
                {
                  ATerm u_6 = NULL;
                  ATerm v_6 = NULL;
                  v_6 = t;
                  if(((u_6 != NULL) && (u_6 != v_6)))
                    _fail(v_6);
                  else
                    u_6 = v_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, not_null(u_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = n_8;
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
                t = term_q_8;
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
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_7)), term_z_8, not_null(g_7))));
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
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_7)));
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
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_7)), term_j_9)));
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = (ATerm) ATempty;
    }
  {
    ATerm h_8 = NULL,j_8 = NULL,l_8 = NULL;
    ATerm w_10;
    w_10 = t;
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
    t = w_10;
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
ATerm oncetd_1 (ATerm t, ATerm t_108 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_108(t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
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
  ATerm z_10 = t;
  int a_11 = stack_ptr;
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
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
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
    ATerm b_11;
    b_11 = t;
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
    t = b_11;
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
                                ATerm c_11 = t;
                                int d_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_11(t);
                                    ;
                                    LocalPopChoice(d_11);
                                  }
                                else
                                  {
                                    t = c_11;
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
                            ATerm g_11 = t;
                            int h_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(h_11);
                              }
                            else
                              {
                                t = g_11;
                                {
                                  ATerm i_11 = t;
                                  int l_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_11(t);
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
                            ATerm m_11 = t;
                            int n_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(n_11);
                              }
                            else
                              {
                                t = m_11;
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
ATerm repeat_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm d_12 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = r_106(t);
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
        t = term_o_11;
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
ATerm BuildDefault_1 (ATerm t, ATerm h_86 (ATerm))
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
            t = h_86(t);
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
        ATerm z_11 = t;
        int a_12 = stack_ptr;
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
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
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
        ATerm b_12 = t;
        int c_12 = stack_ptr;
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
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
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
        ATerm e_12 = t;
        int f_12 = stack_ptr;
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
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
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
        ATerm g_12 = t;
        int m_12 = stack_ptr;
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
            LocalPopChoice(m_12);
          }
        else
          {
            t = g_12;
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
  ATerm r_12 = t;
  int z_12 = stack_ptr;
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
      LocalPopChoice(z_12);
    }
  else
    {
      t = r_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
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
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm c_13 = t;
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
                    t = c_13;
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
ATerm Op_2 (ATerm t, ATerm q_85 (ATerm), ATerm r_85 (ATerm))
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
            t = q_85(t);
            {
              w_20 = t;
              {
                t = not_null(q_20);
                {
                  ATerm a_21 = NULL;
                  t = r_85(t);
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
          ATerm d_13 = t;
          int h_13 = stack_ptr;
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
                    t = Anno_2(t, Cache_0, Cache_0);
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
                          t = Int_1(t, _id);
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
                                t = Str_1(t, _id);
                                ;
                                LocalPopChoice(r_13);
                              }
                            else
                              {
                                t = q_13;
                                {
                                  ATerm v_13 = t;
                                  int w_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(w_13);
                                    }
                                  else
                                    {
                                      t = v_13;
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
                    t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(x_21));
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
                            ATerm d_14;
                            d_14 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), (ATerm) ATmakeAppl(sym_Defined_2, term_e_14, not_null(u_21)));
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_f_14;
                                  return(t);
                                }
                                t = assert_1(t, o_1);
                              }
                            }
                            t = d_14;
                            {
                              ATerm b_22 = NULL;
                              ATerm g_14 = t;
                              int h_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(h_14);
                                }
                              else
                                {
                                  t = g_14;
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
                                      ATerm i_14;
                                      i_14 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_14, not_null(v_21)));
                                        {
                                          ATerm p_1 (ATerm t)
                                          {
                                            t = term_o_11;
                                            return(t);
                                          }
                                          t = assert_1(t, p_1);
                                        }
                                      }
                                      t = i_14;
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
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
        t = not_null(r_22);
        {
          ATerm q_1 (ATerm t)
          {
            t = term_f_14;
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
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm a_23 = NULL;
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          t = not_null(r_22);
          {
            ATerm r_1 (ATerm t)
            {
              t = term_f_14;
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
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm k_23 = NULL,m_23 = NULL;
        ATerm o_14;
        o_14 = t;
        {
          ATerm l_23 = NULL;
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
        t = o_14;
        {
          ATerm n_23 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
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
              ATerm x_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = x_14;
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
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_23)), term_j_9), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(w_23))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(v_23), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_23)))));
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
  ATerm g_24 = NULL;
  g_24 = t;
  {
    ATerm j_24 = NULL,k_24 = NULL;
    t = not_null(g_24);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_b_15;
        return(t);
      }
      t = rewrite_1(t, t_1);
      {
        j_24 = t;
        e_24 :
        if(match_cons(j_24, sym_Defined_1))
          {
            k_24 = ATgetArgument(j_24, 0);
            f_24 :
            if(!(match_string(k_24, "l_0")))
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
    t = term_f_15;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      t_24 = ATgetArgument(q_24, 1);
      p_24 :
      if(match_cons(r_24, sym_Var_1))
        {
          s_24 = ATgetArgument(r_24, 0);
          {
            ATerm w_24 = NULL;
            t = not_null(s_24);
            {
              t = Initialized_0(t);
              {
                w_24 = t;
                n_24 :
                if(!(match_string(w_24, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_24)), not_null(t_24));
          }
        }
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
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  m_25 = t;
  k_25 :
  if(match_cons(m_25, sym_Anno_2))
    {
      n_25 = ATgetArgument(m_25, 0);
      l_25 = ATgetArgument(m_25, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(n_25))));
    }
  else
    {
      if(match_cons(m_25, sym_Op_2))
        {
          n_25 = ATgetArgument(m_25, 0);
          l_25 = ATgetArgument(m_25, 1);
          {
            ATerm s_25 = NULL;
            ATerm t_25 = NULL,v_25 = NULL;
            ATerm u_25 = NULL;
            t = not_null(l_25);
            {
              t = length_0(t);
              {
                u_25 = t;
                if(((t_25 != NULL) && (t_25 != u_25)))
                  _fail(u_25);
                else
                  t_25 = u_25;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_25), not_null(t_25));
              {
                t = ConstructorName_0(t);
                {
                  v_25 = t;
                  if(((s_25 != NULL) && (s_25 != v_25)))
                    _fail(v_25);
                  else
                    s_25 = v_25;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(l_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_25)))));
          }
        }
      else
        {
          if(match_cons(m_25, sym_BuildDefault_1))
            {
              n_25 = ATgetArgument(m_25, 0);
              t = not_null(n_25);
            }
          else
            {
              if(match_cons(m_25, sym_Var_1))
                {
                  n_25 = ATgetArgument(m_25, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_25))));
                }
              else
                {
                  if(match_cons(m_25, sym_Str_1))
                    {
                      n_25 = ATgetArgument(m_25, 0);
                      {
                        ATerm z_25 = NULL;
                        ATerm a_26 = NULL;
                        t = not_null(n_25);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              a_26 = t;
                              if(((z_25 != NULL) && (z_25 != a_26)))
                                _fail(a_26);
                              else
                                z_25 = a_26;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(z_25))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(m_25, sym_Real_1))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          {
                            ATerm c_26 = NULL;
                            ATerm d_26 = NULL;
                            t = not_null(n_25);
                            {
                              t = real_to_string_0(t);
                              {
                                d_26 = t;
                                if(((c_26 != NULL) && (c_26 != d_26)))
                                  _fail(d_26);
                                else
                                  c_26 = d_26;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(c_26)))));
                          }
                        }
                      else
                        {
                          if(match_cons(m_25, sym_Int_1))
                            {
                              n_25 = ATgetArgument(m_25, 0);
                              {
                                ATerm f_26 = NULL;
                                ATerm g_26 = NULL;
                                t = not_null(n_25);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    g_26 = t;
                                    if(((f_26 != NULL) && (f_26 != g_26)))
                                      _fail(g_26);
                                    else
                                      f_26 = g_26;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_26)))));
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
ATerm Id_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym_Id_1))
    {
      z_26 = ATgetArgument(y_26, 0);
      {
        ATerm c_27 = NULL,e_27 = NULL;
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(y_26));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
        {
          t = not_null(z_26);
          {
            ATerm g_27 = NULL;
            t = y_95(t);
            {
              e_27 = t;
              {
                ATerm h_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(e_27)), not_null(c_27));
                {
                  h_27 = t;
                  if(((g_27 != NULL) && (g_27 != h_27)))
                    _fail(h_27);
                  else
                    g_27 = h_27;
                }
                t = not_null(g_27);
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
ATerm FunCall_2 (ATerm t, ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_FunCall_2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      {
        ATerm y_27 = NULL,a_28 = NULL;
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(s_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
        {
          t = not_null(t_27);
          {
            ATerm c_28 = NULL;
            t = c_99(t);
            {
              a_28 = t;
              {
                t = not_null(u_27);
                {
                  ATerm e_28 = NULL;
                  t = d_99(t);
                  {
                    c_28 = t;
                    {
                      ATerm f_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(a_28), not_null(c_28)), not_null(y_27));
                      {
                        f_28 = t;
                        if(((e_28 != NULL) && (e_28 != f_28)))
                          _fail(f_28);
                        else
                          e_28 = f_28;
                      }
                      t = not_null(e_28);
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
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  z_28 :
  if(match_cons(j_29, sym_Op_2))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      a_29 :
      if(match_string(k_29, "Cons"))
        {
          b_29 :
          if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
            {
              f_29 = ATgetFirst((ATermList) l_29);
              g_29 = (ATerm) ATgetNext((ATermList) l_29);
              c_29 :
              if(((ATgetType(g_29) == AT_LIST) && !(ATisEmpty(g_29))))
                {
                  h_29 = ATgetFirst((ATermList) g_29);
                  i_29 = (ATerm) ATgetNext((ATermList) g_29);
                  d_29 :
                  if(((ATgetType(i_29) == AT_LIST) && ATisEmpty(i_29)))
                    {
                      {
                        ATerm o_29 = NULL;
                        ATerm b_30 = NULL;
                        t = not_null(h_29);
                        {
                          ATerm c_16 = t;
                          int g_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
                              p_29 = t;
                              q_28 :
                              if(match_cons(p_29, sym_TypeCast_2))
                                {
                                  q_29 = ATgetArgument(p_29, 0);
                                  x_29 = ATgetArgument(p_29, 1);
                                  r_28 :
                                  if(match_cons(q_29, sym_TypeName_2))
                                    {
                                      r_29 = ATgetArgument(q_29, 0);
                                      w_29 = ATgetArgument(q_29, 1);
                                      s_28 :
                                      if(match_cons(r_29, sym_TypeSpec_3))
                                        {
                                          s_29 = ATgetArgument(r_29, 0);
                                          t_29 = ATgetArgument(r_29, 1);
                                          v_29 = ATgetArgument(r_29, 2);
                                          t_28 :
                                          if(((ATgetType(s_29) == AT_LIST) && ATisEmpty(s_29)))
                                            {
                                              u_28 :
                                              if(match_cons(t_29, sym_TypeId_1))
                                                {
                                                  u_29 = ATgetArgument(t_29, 0);
                                                  v_28 :
                                                  if(match_string(u_29, "ATerm"))
                                                    {
                                                      w_28 :
                                                      if(((ATgetType(v_29) == AT_LIST) && ATisEmpty(v_29)))
                                                        {
                                                          x_28 :
                                                          if(match_cons(w_29, sym_None_0))
                                                            {
                                                              t = not_null(x_29);
                                                              {
                                                                ATerm j_16 = t;
                                                                int k_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm u_1 (ATerm t)
                                                                    {
                                                                      ATerm z_29 = NULL;
                                                                      z_29 = t;
                                                                      o_28 :
                                                                      if(!(match_string(z_29, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, u_1);
                                                                    ;
                                                                    LocalPopChoice(k_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_16;
                                                                    {
                                                                      ATerm v_1 (ATerm t)
                                                                      {
                                                                        ATerm x_1 (ATerm t)
                                                                        {
                                                                          ATerm a_30 = NULL;
                                                                          a_30 = t;
                                                                          p_28 :
                                                                          if(!(match_string(a_30, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, x_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm w_1 (ATerm t)
                                                                      {
                                                                        ATerm y_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, y_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, v_1, w_1);
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
                              LocalPopChoice(g_16);
                            }
                          else
                            {
                              t = c_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATempty, not_null(h_29)));
                            }
                          {
                            b_30 = t;
                            if(((o_29 != NULL) && (o_29 != b_30)))
                              _fail(b_30);
                            else
                              o_29 = b_30;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_29)), not_null(o_29))));
                      }
                    }
                  else
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
          if(match_string(k_29, "Nil"))
            {
              e_29 :
              if(((ATgetType(l_29) == AT_LIST) && ATisEmpty(l_29)))
                {
                  t = term_w_16;
                }
              else
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
ATerm bottomup_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    t = bottomup_1(t, q_107);
    return(t);
  }
  t = _all(t, z_1);
  t = q_107(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = bottomup_1(t, a_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_107 (ATerm))
{
  t = p_107(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1(t, p_107);
      return(t);
    }
    t = _all(t, c_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  ATerm i_54 (ATerm t)
  {
    ATerm v_48 = NULL,l_49 = NULL;
    ATerm z_16;
    z_16 = t;
    {
      ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
      t = not_null(h_36);
      {
        ATerm a_17 = t;
        if((PushChoice() == 0))
          {
            ATerm w_48 = NULL;
            w_48 = t;
            u_32 :
            if(!(match_string(w_48, "Nil")))
              {
                if(!(match_string(w_48, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_35), term_b_17);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
              x_48 = t;
              z_32 :
              if(match_cons(x_48, sym__2))
                {
                  y_48 = ATgetArgument(x_48, 0);
                  z_48 = ATgetArgument(x_48, 1);
                  {
                    ATerm c_49 = NULL,g_49 = NULL;
                    ATerm c_17;
                    c_17 = t;
                    {
                      ATerm d_49 = NULL,f_49 = NULL;
                      ATerm e_49 = NULL;
                      t = not_null(z_48);
                      {
                        t = int_to_string_0(t);
                        {
                          e_49 = t;
                          if(((d_49 != NULL) && (d_49 != e_49)))
                            _fail(e_49);
                          else
                            d_49 = e_49;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(d_49))), not_null(g_36))));
                        {
                          ATerm f_17 = t;
                          int g_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(g_17);
                            }
                          else
                            {
                              t = f_17;
                              t = MatchArg2_0(t);
                            }
                          {
                            f_49 = t;
                            if(((c_49 != NULL) && (c_49 != f_49)))
                              _fail(f_49);
                            else
                              c_49 = f_49;
                          }
                        }
                      }
                    }
                    t = c_17;
                    {
                      ATerm h_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_48), term_k_17);
                      {
                        t = add_0(t);
                        {
                          h_49 = t;
                          if(((g_49 != NULL) && (g_49 != h_49)))
                            _fail(h_49);
                          else
                            g_49 = h_49;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), not_null(g_49));
                    }
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
              i_49 = t;
              b_33 :
              if(match_cons(i_49, sym__2))
                {
                  j_49 = ATgetArgument(i_49, 0);
                  k_49 = ATgetArgument(i_49, 1);
                  if(((v_48 != NULL) && (v_48 != j_49)))
                    _fail(j_49);
                  else
                    v_48 = j_49;
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
    t = z_16;
    {
      ATerm m_49 = NULL,t_49 = NULL;
      ATerm s_49 = NULL;
      t = not_null(q_35);
      {
        t = length_0(t);
        {
          s_49 = t;
          if(((m_49 != NULL) && (m_49 != s_49)))
            _fail(s_49);
          else
            m_49 = s_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), not_null(m_49));
        {
          t = ConstructorName_0(t);
          {
            t_49 = t;
            if(((l_49 != NULL) && (l_49 != t_49)))
              _fail(t_49);
            else
              l_49 = t_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_49))), not_null(g_36))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
    }
    return(t);
  }
  ATerm j_54 (ATerm t)
  {
    ATerm w_49 = NULL;
    ATerm x_49 = NULL;
    t = not_null(h_36);
    {
      t = real_to_string_0(t);
      {
        x_49 = t;
        if(((w_49 != NULL) && (w_49 != x_49)))
          _fail(x_49);
        else
          w_49 = x_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(g_36))), term_e_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_18, not_null(g_36)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(w_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
    return(t);
  }
  ATerm k_54 (ATerm t)
  {
    ATerm a_50 = NULL;
    ATerm b_50 = NULL;
    t = not_null(h_36);
    {
      t = int_to_string_0(t);
      {
        b_50 = t;
        if(((a_50 != NULL) && (a_50 != b_50)))
          _fail(b_50);
        else
          a_50 = b_50;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(g_36))), term_m_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_18, not_null(g_36)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    ATerm e_50 = NULL;
    ATerm f_50 = NULL;
    t = not_null(h_36);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          f_50 = t;
          if(((e_50 != NULL) && (e_50 != f_50)))
            _fail(f_50);
          else
            e_50 = f_50;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_19, not_null(g_36)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(e_50)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), term_j_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), not_null(g_36))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, not_null(g_36)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), term_z_8, not_null(g_36))));
    return(t);
  }
  ATerm n_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(q_35), not_null(g_36))), (ATerm) ATmakeAppl(sym_Match_2, not_null(h_36), not_null(g_36))));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(j_36), term_a_18);
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), term_s_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_35)), term_z_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_35)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), term_s_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    ATerm l_51 = NULL,a_52 = NULL,c_52 = NULL;
    ATerm j_20;
    j_20 = t;
    {
      ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
      t = not_null(z_35);
      {
        ATerm k_20 = t;
        if((PushChoice() == 0))
          {
            ATerm m_51 = NULL;
            m_51 = t;
            h_33 :
            if(!(match_string(m_51, "Nil")))
              {
                if(!(match_string(m_51, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_20;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), term_b_17);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
              n_51 = t;
              l_33 :
              if(match_cons(n_51, sym__2))
                {
                  o_51 = ATgetArgument(n_51, 0);
                  q_51 = ATgetArgument(n_51, 1);
                  m_33 :
                  if(match_cons(o_51, sym_Var_1))
                    {
                      p_51 = ATgetArgument(o_51, 0);
                      {
                        ATerm t_51 = NULL,v_51 = NULL;
                        ATerm l_20;
                        l_20 = t;
                        {
                          ATerm u_51 = NULL;
                          t = not_null(q_51);
                          {
                            t = int_to_string_0(t);
                            {
                              u_51 = t;
                              if(((t_51 != NULL) && (t_51 != u_51)))
                                _fail(u_51);
                              else
                                t_51 = u_51;
                            }
                          }
                        }
                        t = l_20;
                        {
                          ATerm w_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), term_k_17);
                          {
                            t = add_0(t);
                            {
                              w_51 = t;
                              if(((v_51 != NULL) && (v_51 != w_51)))
                                _fail(w_51);
                              else
                                v_51 = w_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_51)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))))), not_null(v_51));
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
            t = thread_map_1(t, e_2);
            {
              x_51 = t;
              o_33 :
              if(match_cons(x_51, sym__2))
                {
                  y_51 = ATgetArgument(x_51, 0);
                  z_51 = ATgetArgument(x_51, 1);
                  if(((l_51 != NULL) && (l_51 != y_51)))
                    _fail(y_51);
                  else
                    l_51 = y_51;
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
    t = j_20;
    {
      ATerm m_20;
      m_20 = t;
      {
        ATerm b_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), not_null(x_35));
        {
          t = ConstructorName_0(t);
          {
            b_52 = t;
            if(((a_52 != NULL) && (a_52 != b_52)))
              _fail(b_52);
            else
              a_52 = b_52;
          }
        }
      }
      t = m_20;
      {
        ATerm d_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), (ATerm) ATinsert(ATempty, not_null(b_36)));
        {
          t = conc_0(t);
          {
            d_52 = t;
            if(((c_52 != NULL) && (c_52 != d_52)))
              _fail(d_52);
            else
              c_52 = d_52;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_52)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
      }
    }
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    ATerm k_52 = NULL;
    ATerm l_52 = NULL;
    t = not_null(z_35);
    {
      t = real_to_string_0(t);
      {
        l_52 = t;
        if(((k_52 != NULL) && (k_52 != l_52)))
          _fail(l_52);
        else
          k_52 = l_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
    return(t);
  }
  ATerm v_54 (ATerm t)
  {
    ATerm s_52 = NULL;
    ATerm t_52 = NULL;
    t = not_null(z_35);
    {
      t = int_to_string_0(t);
      {
        t_52 = t;
        if(((s_52 != NULL) && (s_52 != t_52)))
          _fail(t_52);
        else
          s_52 = t_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
    return(t);
  }
  ATerm w_54 (ATerm t)
  {
    ATerm a_53 = NULL;
    ATerm b_53 = NULL;
    t = not_null(z_35);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          b_53 = t;
          if(((a_53 != NULL) && (a_53 != b_53)))
            _fail(b_53);
          else
            a_53 = b_53;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_53)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_36)), not_null(c_36), not_null(d_36)))));
    return(t);
  }
  ATerm x_54 (ATerm t)
  {
    t = not_null(d_36);
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_36)), (ATerm) ATmakeAppl(sym_Case_3, not_null(g_36), not_null(d_36), not_null(e_36)));
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_36)));
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), term_j_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    t = not_null(g_36);
    {
      ATerm d_21 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_21;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_36)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_36))));
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), term_z_8, term_a_18));
    return(t);
  }
  ATerm d_55 (ATerm t)
  {
    ATerm p_53 = NULL;
    ATerm q_53 = NULL;
    t = not_null(j_36);
    {
      t = construct_term_caching_0(t);
      {
        q_53 = t;
        if(((p_53 != NULL) && (p_53 != q_53)))
          _fail(q_53);
        else
          p_53 = q_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, not_null(p_53)));
    return(t);
  }
  i_36 = t;
  v_33 :
  if(match_cons(i_36, sym_Let_2))
    {
      j_36 = ATgetArgument(i_36, 0);
      g_36 = ATgetArgument(i_36, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(j_36), (ATerm) ATinsert(ATempty, not_null(g_36)));
    }
  else
    {
      if(match_cons(i_36, sym_Where_1))
        {
          j_36 = ATgetArgument(i_36, 0);
          {
            ATerm n_36 = NULL;
            ATerm o_36 = NULL;
            t = new_0(t);
            {
              o_36 = t;
              if(((n_36 != NULL) && (n_36 != o_36)))
                _fail(o_36);
              else
                n_36 = o_36;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), term_j_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_36))))), not_null(j_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), term_z_8, term_a_18))));
          }
        }
      else
        {
          if(match_cons(i_36, sym_Test_1))
            {
              j_36 = ATgetArgument(i_36, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(j_36));
            }
          else
            {
              if(match_cons(i_36, sym_CallT_3))
                {
                  j_36 = ATgetArgument(i_36, 0);
                  g_36 = ATgetArgument(i_36, 1);
                  d_36 = ATgetArgument(i_36, 2);
                  w_33 :
                  if(match_cons(j_36, sym_SVar_1))
                    {
                      h_36 = ATgetArgument(j_36, 0);
                      {
                        ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
                        ATerm c_37 = NULL;
                        t = not_null(g_36);
                        {
                          ATerm d_37 = NULL;
                          ATerm f_2 (ATerm t)
                          {
                            ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
                            w_36 = t;
                            v_31 :
                            if(match_cons(w_36, sym_CallT_3))
                              {
                                x_36 = ATgetArgument(w_36, 0);
                                z_36 = ATgetArgument(w_36, 1);
                                a_37 = ATgetArgument(w_36, 2);
                                w_31 :
                                if(match_cons(x_36, sym_SVar_1))
                                  {
                                    y_36 = ATgetArgument(x_36, 0);
                                    x_31 :
                                    if(((ATgetType(z_36) == AT_LIST) && ATisEmpty(z_36)))
                                      {
                                        y_31 :
                                        if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(y_36));
                                          }
                                        else
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
                          t = map_1(t, f_2);
                          {
                            c_37 = t;
                            {
                              if(((t_36 != NULL) && (t_36 != c_37)))
                                _fail(c_37);
                              else
                                t_36 = c_37;
                              {
                                t = not_null(d_36);
                                {
                                  ATerm e_37 = NULL;
                                  ATerm g_2 (ATerm t)
                                  {
                                    ATerm h_2 (ATerm t)
                                    {
                                      t = try_1(t, construct_term_0);
                                      return(t);
                                    }
                                    t = topdown_1(t, h_2);
                                    return(t);
                                  }
                                  t = map_1(t, g_2);
                                  {
                                    d_37 = t;
                                    {
                                      if(((u_36 != NULL) && (u_36 != d_37)))
                                        _fail(d_37);
                                      else
                                        u_36 = d_37;
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_18)), not_null(u_36)), not_null(t_36));
                                        {
                                          t = concat_0(t);
                                          {
                                            e_37 = t;
                                            if(((v_36 != NULL) && (v_36 != e_37)))
                                              _fail(e_37);
                                            else
                                              v_36 = e_37;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_36)), not_null(v_36))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(i_36, sym_PrimT_3))
                    {
                      j_36 = ATgetArgument(i_36, 0);
                      g_36 = ATgetArgument(i_36, 1);
                      d_36 = ATgetArgument(i_36, 2);
                      {
                        ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
                        ATerm r_37 = NULL;
                        t = not_null(g_36);
                        {
                          ATerm s_37 = NULL;
                          ATerm i_2 (ATerm t)
                          {
                            ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
                            l_37 = t;
                            d_32 :
                            if(match_cons(l_37, sym_CallT_3))
                              {
                                m_37 = ATgetArgument(l_37, 0);
                                o_37 = ATgetArgument(l_37, 1);
                                p_37 = ATgetArgument(l_37, 2);
                                e_32 :
                                if(match_cons(m_37, sym_SVar_1))
                                  {
                                    n_37 = ATgetArgument(m_37, 0);
                                    f_32 :
                                    if(((ATgetType(o_37) == AT_LIST) && ATisEmpty(o_37)))
                                      {
                                        g_32 :
                                        if(((ATgetType(p_37) == AT_LIST) && ATisEmpty(p_37)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37));
                                          }
                                        else
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
                          t = map_1(t, i_2);
                          {
                            r_37 = t;
                            {
                              if(((i_37 != NULL) && (i_37 != r_37)))
                                _fail(r_37);
                              else
                                i_37 = r_37;
                              {
                                t = not_null(d_36);
                                {
                                  ATerm t_37 = NULL;
                                  ATerm j_2 (ATerm t)
                                  {
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = try_1(t, construct_term_0);
                                      return(t);
                                    }
                                    t = topdown_1(t, k_2);
                                    return(t);
                                  }
                                  t = map_1(t, j_2);
                                  {
                                    s_37 = t;
                                    {
                                      if(((j_37 != NULL) && (j_37 != s_37)))
                                        _fail(s_37);
                                      else
                                        j_37 = s_37;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), not_null(j_37));
                                        {
                                          t = conc_0(t);
                                          {
                                            t_37 = t;
                                            if(((k_37 != NULL) && (k_37 != t_37)))
                                              _fail(t_37);
                                            else
                                              k_37 = t_37;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_36)), not_null(k_37))));
                      }
                    }
                  else
                    {
                      if(match_cons(i_36, sym_Not_1))
                        {
                          j_36 = ATgetArgument(i_36, 0);
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
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_j_9), term_e_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_21), term_m_21), not_null(j_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_37)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(i_36, sym_LGChoice_2))
                            {
                              j_36 = ATgetArgument(i_36, 0);
                              g_36 = ATgetArgument(i_36, 1);
                              {
                                ATerm z_37 = NULL;
                                ATerm a_38 = NULL;
                                t = new_0(t);
                                {
                                  a_38 = t;
                                  if(((z_37 != NULL) && (z_37 != a_38)))
                                    _fail(a_38);
                                  else
                                    z_37 = a_38;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_37)), term_j_9), term_e_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_g_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_37)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(i_36, sym_GChoice_2))
                                {
                                  j_36 = ATgetArgument(i_36, 0);
                                  g_36 = ATgetArgument(i_36, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(j_36), not_null(g_36));
                                }
                              else
                                {
                                  if(match_cons(i_36, sym_GuardedLChoice_3))
                                    {
                                      j_36 = ATgetArgument(i_36, 0);
                                      g_36 = ATgetArgument(i_36, 1);
                                      d_36 = ATgetArgument(i_36, 2);
                                      {
                                        ATerm g_38 = NULL,h_38 = NULL;
                                        ATerm i_38 = NULL;
                                        ATerm j_38 = NULL;
                                        t = new_0(t);
                                        {
                                          i_38 = t;
                                          {
                                            if(((g_38 != NULL) && (g_38 != i_38)))
                                              _fail(i_38);
                                            else
                                              g_38 = i_38;
                                            {
                                              t = new_0(t);
                                              {
                                                j_38 = t;
                                                if(((h_38 != NULL) && (h_38 != j_38)))
                                                  _fail(j_38);
                                                else
                                                  h_38 = j_38;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_38)), term_j_9), term_o_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_38)), term_j_9), term_e_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_38)))))), not_null(j_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_38)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_36, sym_LChoice_2))
                                        {
                                          j_36 = ATgetArgument(i_36, 0);
                                          g_36 = ATgetArgument(i_36, 1);
                                          {
                                            ATerm m_38 = NULL,n_38 = NULL;
                                            ATerm o_38 = NULL;
                                            ATerm c_39 = NULL;
                                            t = new_0(t);
                                            {
                                              o_38 = t;
                                              {
                                                if(((m_38 != NULL) && (m_38 != o_38)))
                                                  _fail(o_38);
                                                else
                                                  m_38 = o_38;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    c_39 = t;
                                                    if(((n_38 != NULL) && (n_38 != c_39)))
                                                      _fail(c_39);
                                                    else
                                                      n_38 = c_39;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_38)), term_j_9), term_o_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_38)), term_j_9), term_e_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_38)))))), term_f_23), not_null(j_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_a_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_38)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_36, sym_Choice_2))
                                            {
                                              j_36 = ATgetArgument(i_36, 0);
                                              g_36 = ATgetArgument(i_36, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_36), not_null(g_36));
                                            }
                                          else
                                            {
                                              if(match_cons(i_36, sym_Seq_2))
                                                {
                                                  j_36 = ATgetArgument(i_36, 0);
                                                  g_36 = ATgetArgument(i_36, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), not_null(j_36)));
                                                }
                                              else
                                                {
                                                  if(match_cons(i_36, sym_Scope_2))
                                                    {
                                                      j_36 = ATgetArgument(i_36, 0);
                                                      g_36 = ATgetArgument(i_36, 1);
                                                      {
                                                        ATerm i_48 = NULL;
                                                        ATerm g_23;
                                                        g_23 = t;
                                                        {
                                                          t = not_null(j_36);
                                                          {
                                                            ATerm l_2 (ATerm t)
                                                            {
                                                              ATerm g_48 = NULL;
                                                              g_48 = t;
                                                              {
                                                                ATerm h_23;
                                                                h_23 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_48), term_j_23);
                                                                  {
                                                                    ATerm m_2 (ATerm t)
                                                                    {
                                                                      t = term_b_15;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, m_2);
                                                                  }
                                                                }
                                                                t = h_23;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, l_2);
                                                          }
                                                        }
                                                        t = g_23;
                                                        {
                                                          ATerm l_48 = NULL;
                                                          t = not_null(j_36);
                                                          {
                                                            ATerm n_2 (ATerm t)
                                                            {
                                                              ATerm j_48 = NULL;
                                                              j_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_48)), term_j_9), term_o_23);
                                                              return(t);
                                                            }
                                                            t = map_1(t, n_2);
                                                            {
                                                              l_48 = t;
                                                              if(((i_48 != NULL) && (i_48 != l_48)))
                                                                _fail(l_48);
                                                              else
                                                                i_48 = l_48;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, not_null(i_48))), (ATerm) ATinsert(ATempty, not_null(g_36)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_36, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_36, sym_Id_0))
                                                            {
                                                              t = term_n_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(i_36, sym_Match_2))
                                                                {
                                                                  j_36 = ATgetArgument(i_36, 0);
                                                                  g_36 = ATgetArgument(i_36, 1);
                                                                  x_33 :
                                                                  if(match_cons(j_36, sym_Op_2))
                                                                    {
                                                                      h_36 = ATgetArgument(j_36, 0);
                                                                      q_35 = ATgetArgument(j_36, 1);
                                                                      y_33 :
                                                                      if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
                                                                        {
                                                                          m_35 = ATgetFirst((ATermList) q_35);
                                                                          n_35 = (ATerm) ATgetNext((ATermList) q_35);
                                                                          z_33 :
                                                                          if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
                                                                            {
                                                                              o_35 = ATgetFirst((ATermList) n_35);
                                                                              p_35 = (ATerm) ATgetNext((ATermList) n_35);
                                                                              a_34 :
                                                                              if(((ATgetType(p_35) == AT_LIST) && ATisEmpty(p_35)))
                                                                                {
                                                                                  b_34 :
                                                                                  if(match_string(h_36, "Cons"))
                                                                                    {
                                                                                      ATerm p_23 = t;
                                                                                      int q_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm p_48 = NULL;
                                                                                          ATerm q_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(o_35), (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, not_null(g_36))))))), (ATerm) ATmakeAppl(sym__2, not_null(m_35), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, not_null(g_36))))));
                                                                                          {
                                                                                            ATerm o_2 (ATerm t)
                                                                                            {
                                                                                              ATerm r_23 = t;
                                                                                              int s_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(s_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = r_23;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, o_2);
                                                                                            {
                                                                                              q_48 = t;
                                                                                              if(((p_48 != NULL) && (p_48 != q_48)))
                                                                                                _fail(q_48);
                                                                                              else
                                                                                                p_48 = q_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(g_36))), term_s_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, not_null(g_36))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
                                                                                          ;
                                                                                          LocalPopChoice(q_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_23;
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
                                                                                  c_34 :
                                                                                  t = i_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              d_34 :
                                                                              t = i_54(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(q_35) == AT_LIST) && ATisEmpty(q_35)))
                                                                            {
                                                                              e_34 :
                                                                              if(match_string(h_36, "Nil"))
                                                                                {
                                                                                  ATerm x_23 = t;
                                                                                  int y_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(g_36))), term_s_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, not_null(g_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, term_a_18))));
                                                                                      ;
                                                                                      LocalPopChoice(y_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_23;
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
                                                                              f_34 :
                                                                              t = i_54(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_36, sym_Real_1))
                                                                        {
                                                                          h_36 = ATgetArgument(j_36, 0);
                                                                          t = j_54(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_36, sym_Int_1))
                                                                            {
                                                                              h_36 = ATgetArgument(j_36, 0);
                                                                              t = k_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_36, sym_Str_1))
                                                                                {
                                                                                  h_36 = ATgetArgument(j_36, 0);
                                                                                  t = l_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(j_36, sym_Var_1))
                                                                                    {
                                                                                      h_36 = ATgetArgument(j_36, 0);
                                                                                      t = m_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(j_36, sym_As_2))
                                                                                        {
                                                                                          h_36 = ATgetArgument(j_36, 0);
                                                                                          q_35 = ATgetArgument(j_36, 1);
                                                                                          t = n_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(j_36, sym_BuildDefault_1))
                                                                                            {
                                                                                              h_36 = ATgetArgument(j_36, 0);
                                                                                              t = o_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(j_36, sym_Wld_0))
                                                                                                {
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
                                                              else
                                                                {
                                                                  if(match_cons(i_36, sym_Match_1))
                                                                    {
                                                                      j_36 = ATgetArgument(i_36, 0);
                                                                      t = q_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(i_36, sym_Case_3))
                                                                        {
                                                                          j_36 = ATgetArgument(i_36, 0);
                                                                          g_36 = ATgetArgument(i_36, 1);
                                                                          d_36 = ATgetArgument(i_36, 2);
                                                                          g_34 :
                                                                          if(match_cons(j_36, sym_Var_1))
                                                                            {
                                                                              h_36 = ATgetArgument(j_36, 0);
                                                                              h_34 :
                                                                              if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
                                                                                {
                                                                                  f_36 = ATgetFirst((ATermList) g_36);
                                                                                  c_36 = (ATerm) ATgetNext((ATermList) g_36);
                                                                                  i_34 :
                                                                                  if(match_cons(f_36, sym_Alt_3))
                                                                                    {
                                                                                      y_35 = ATgetArgument(f_36, 0);
                                                                                      a_36 = ATgetArgument(f_36, 1);
                                                                                      b_36 = ATgetArgument(f_36, 2);
                                                                                      j_34 :
                                                                                      if(match_cons(y_35, sym_Fun_2))
                                                                                        {
                                                                                          z_35 = ATgetArgument(y_35, 0);
                                                                                          x_35 = ATgetArgument(y_35, 1);
                                                                                          k_34 :
                                                                                          if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
                                                                                            {
                                                                                              r_35 = ATgetFirst((ATermList) a_36);
                                                                                              t_35 = (ATerm) ATgetNext((ATermList) a_36);
                                                                                              l_34 :
                                                                                              if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
                                                                                                {
                                                                                                  u_35 = ATgetFirst((ATermList) t_35);
                                                                                                  w_35 = (ATerm) ATgetNext((ATermList) t_35);
                                                                                                  m_34 :
                                                                                                  if(((ATgetType(w_35) == AT_LIST) && ATisEmpty(w_35)))
                                                                                                    {
                                                                                                      n_34 :
                                                                                                      if(match_cons(u_35, sym_Var_1))
                                                                                                        {
                                                                                                          v_35 = ATgetArgument(u_35, 0);
                                                                                                          o_34 :
                                                                                                          if(match_cons(r_35, sym_Var_1))
                                                                                                            {
                                                                                                              s_35 = ATgetArgument(r_35, 0);
                                                                                                              p_34 :
                                                                                                              if(match_int(x_35, 2))
                                                                                                                {
                                                                                                                  q_34 :
                                                                                                                  if(match_string(z_35, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm b_24 = t;
                                                                                                                      int c_24 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = r_54(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(c_24);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_24;
                                                                                                                          t = t_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  r_34 :
                                                                                                                  t = t_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              s_34 :
                                                                                                              t_34 :
                                                                                                              t = t_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          u_34 :
                                                                                                          v_34 :
                                                                                                          w_34 :
                                                                                                          t = t_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      x_34 :
                                                                                                      y_34 :
                                                                                                      z_34 :
                                                                                                      a_35 :
                                                                                                      t = t_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  b_35 :
                                                                                                  c_35 :
                                                                                                  d_35 :
                                                                                                  t = t_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(a_36) == AT_LIST) && ATisEmpty(a_36)))
                                                                                                {
                                                                                                  e_35 :
                                                                                                  if(match_int(x_35, 0))
                                                                                                    {
                                                                                                      f_35 :
                                                                                                      if(match_string(z_35, "Nil"))
                                                                                                        {
                                                                                                          ATerm d_24 = t;
                                                                                                          int h_24 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = s_54(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(h_24);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_24;
                                                                                                              t = t_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = t_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      g_35 :
                                                                                                      t = t_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  h_35 :
                                                                                                  i_35 :
                                                                                                  t = t_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(y_35, sym_Real_1))
                                                                                            {
                                                                                              z_35 = ATgetArgument(y_35, 0);
                                                                                              t = u_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(y_35, sym_Int_1))
                                                                                                {
                                                                                                  z_35 = ATgetArgument(y_35, 0);
                                                                                                  t = v_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(y_35, sym_Str_1))
                                                                                                    {
                                                                                                      z_35 = ATgetArgument(y_35, 0);
                                                                                                      t = w_54(t);
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
                                                                                  if(((ATgetType(g_36) == AT_LIST) && ATisEmpty(g_36)))
                                                                                    {
                                                                                      t = x_54(t);
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
                                                                          if(match_cons(i_36, sym_Case_4))
                                                                            {
                                                                              j_36 = ATgetArgument(i_36, 0);
                                                                              g_36 = ATgetArgument(i_36, 1);
                                                                              d_36 = ATgetArgument(i_36, 2);
                                                                              e_36 = ATgetArgument(i_36, 3);
                                                                              t = y_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(i_36, sym_Continue_1))
                                                                                {
                                                                                  j_36 = ATgetArgument(i_36, 0);
                                                                                  t = z_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(i_36, sym_Assign_2))
                                                                                    {
                                                                                      j_36 = ATgetArgument(i_36, 0);
                                                                                      g_36 = ATgetArgument(i_36, 1);
                                                                                      j_35 :
                                                                                      if(match_cons(j_36, sym_Var_1))
                                                                                        {
                                                                                          h_36 = ATgetArgument(j_36, 0);
                                                                                          k_35 :
                                                                                          if(match_cons(g_36, sym_Var_1))
                                                                                            {
                                                                                              f_36 = ATgetArgument(g_36, 0);
                                                                                              {
                                                                                                ATerm i_24 = t;
                                                                                                int l_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = a_55(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(l_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_24;
                                                                                                    t = b_55(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_55(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(i_36, sym_Assign_1))
                                                                                        {
                                                                                          j_36 = ATgetArgument(i_36, 0);
                                                                                          l_35 :
                                                                                          if(match_cons(j_36, sym_Var_1))
                                                                                            {
                                                                                              h_36 = ATgetArgument(j_36, 0);
                                                                                              t = c_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(i_36, sym_Build_1))
                                                                                            {
                                                                                              j_36 = ATgetArgument(i_36, 0);
                                                                                              t = d_55(t);
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
  ATerm w_56 = NULL;
  w_56 = t;
  t = SSL_real_to_string(not_null(w_56));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  a_57 :
  if(match_cons(c_57, sym__2))
    {
      d_57 = ATgetArgument(c_57, 0);
      e_57 = ATgetArgument(c_57, 1);
      b_57 :
      if(((ATgetType(d_57) == AT_LIST) && ATisEmpty(d_57)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_57));
        }
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
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  t_57 = t;
  r_57 :
  if(match_cons(t_57, sym__2))
    {
      u_57 = ATgetArgument(t_57, 0);
      x_57 = ATgetArgument(t_57, 1);
      s_57 :
      if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
        {
          v_57 = ATgetFirst((ATermList) u_57);
          w_57 = (ATerm) ATgetNext((ATermList) u_57);
          {
            ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
            ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(x_57));
            {
              t = w_0(t);
              {
                f_58 = t;
                q_57 :
                if(match_cons(f_58, sym__2))
                  {
                    g_58 = ATgetArgument(f_58, 0);
                    h_58 = ATgetArgument(f_58, 1);
                    {
                      ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
                      if(((d_58 != NULL) && (d_58 != g_58)))
                        _fail(g_58);
                      else
                        d_58 = g_58;
                      {
                        if(((b_58 != NULL) && (b_58 != h_58)))
                          _fail(h_58);
                        else
                          b_58 = h_58;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_57), not_null(b_58));
                          {
                            t = a_1(t);
                            {
                              i_58 = t;
                              p_57 :
                              if(match_cons(i_58, sym__2))
                                {
                                  j_58 = ATgetArgument(i_58, 0);
                                  k_58 = ATgetArgument(i_58, 1);
                                  {
                                    if(((e_58 != NULL) && (e_58 != j_58)))
                                      _fail(j_58);
                                    else
                                      e_58 = j_58;
                                    if(((c_58 != NULL) && (c_58 != k_58)))
                                      _fail(k_58);
                                    else
                                      c_58 = k_58;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_58)), not_null(d_58)), not_null(c_58));
          }
        }
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
ATerm thread_map_1 (ATerm t, ATerm x_119 (ATerm))
{
  ATerm o_58 (ATerm t)
  {
    ATerm m_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, x_119, o_58);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = m_24;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = o_58(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm c_59 = NULL,d_59 = NULL;
  c_59 = t;
  b_59 :
  if(match_cons(c_59, sym_Var_1))
    {
      d_59 = ATgetArgument(c_59, 0);
      {
        ATerm v_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_59 = NULL,i_59 = NULL;
            ATerm h_59 = NULL;
            t = SSLgetAnnotations(not_null(c_59));
            {
              h_59 = t;
              if(((g_59 != NULL) && (g_59 != h_59)))
                _fail(h_59);
              else
                g_59 = h_59;
            }
            {
              t = not_null(d_59);
              {
                ATerm k_59 = NULL;
                t = q_0(t);
                {
                  i_59 = t;
                  {
                    ATerm l_59 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_59)), not_null(g_59));
                    {
                      l_59 = t;
                      if(((k_59 != NULL) && (k_59 != l_59)))
                        _fail(l_59);
                      else
                        k_59 = l_59;
                    }
                    t = not_null(k_59);
                  }
                }
              }
            }
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = v_24;
            {
              ATerm y_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_59 = NULL,q_59 = NULL;
                  ATerm p_59 = NULL;
                  t = SSLgetAnnotations(not_null(c_59));
                  {
                    p_59 = t;
                    if(((o_59 != NULL) && (o_59 != p_59)))
                      _fail(p_59);
                    else
                      o_59 = p_59;
                  }
                  {
                    t = not_null(d_59);
                    {
                      ATerm s_59 = NULL;
                      t = q_0(t);
                      {
                        q_59 = t;
                        {
                          ATerm t_59 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_59)), not_null(o_59));
                          {
                            t_59 = t;
                            if(((s_59 != NULL) && (s_59 != t_59)))
                              _fail(t_59);
                            else
                              s_59 = t_59;
                          }
                          t = not_null(s_59);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(z_24);
                }
              else
                {
                  t = y_24;
                  {
                    ATerm w_59 = NULL,y_59 = NULL;
                    ATerm x_59 = NULL;
                    t = SSLgetAnnotations(not_null(c_59));
                    {
                      x_59 = t;
                      if(((w_59 != NULL) && (w_59 != x_59)))
                        _fail(x_59);
                      else
                        w_59 = x_59;
                    }
                    {
                      t = not_null(d_59);
                      {
                        ATerm a_60 = NULL;
                        t = q_0(t);
                        {
                          y_59 = t;
                          {
                            ATerm b_60 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_59)), not_null(w_59));
                            {
                              b_60 = t;
                              if(((a_60 != NULL) && (a_60 != b_60)))
                                _fail(b_60);
                              else
                                a_60 = b_60;
                            }
                            t = not_null(a_60);
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
  ATerm m_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  ATerm a_65 (ATerm t)
  {
    ATerm k_63 = NULL,z_63 = NULL,d_64 = NULL;
    ATerm a_25;
    a_25 = t;
    {
      ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
      t = not_null(x_62);
      {
        ATerm b_25 = t;
        if((PushChoice() == 0))
          {
            ATerm l_63 = NULL;
            l_63 = t;
            u_60 :
            if(!(match_string(l_63, "Nil")))
              {
                if(!(match_string(l_63, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_25;
          }
        {
          t = not_null(t_62);
          {
            ATerm p_2 (ATerm t)
            {
              t = Var_1(t, _id);
              return(t);
            }
            t = map_1(t, p_2);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_62), term_b_17);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
                  m_63 = t;
                  y_60 :
                  if(match_cons(m_63, sym__2))
                    {
                      n_63 = ATgetArgument(m_63, 0);
                      p_63 = ATgetArgument(m_63, 1);
                      z_60 :
                      if(match_cons(n_63, sym_Var_1))
                        {
                          o_63 = ATgetArgument(n_63, 0);
                          {
                            ATerm s_63 = NULL,u_63 = NULL;
                            ATerm c_25;
                            c_25 = t;
                            {
                              ATerm t_63 = NULL;
                              t = not_null(p_63);
                              {
                                t = int_to_string_0(t);
                                {
                                  t_63 = t;
                                  if(((s_63 != NULL) && (s_63 != t_63)))
                                    _fail(t_63);
                                  else
                                    s_63 = t_63;
                                }
                              }
                            }
                            t = c_25;
                            {
                              ATerm v_63 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_63), term_k_17);
                              {
                                t = add_0(t);
                                {
                                  v_63 = t;
                                  if(((u_63 != NULL) && (u_63 != v_63)))
                                    _fail(v_63);
                                  else
                                    u_63 = v_63;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_63)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_63))), term_a_18)))), not_null(u_63));
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
                t = thread_map_1(t, q_2);
                {
                  w_63 = t;
                  b_61 :
                  if(match_cons(w_63, sym__2))
                    {
                      x_63 = ATgetArgument(w_63, 0);
                      y_63 = ATgetArgument(w_63, 1);
                      if(((k_63 != NULL) && (k_63 != x_63)))
                        _fail(x_63);
                      else
                        k_63 = x_63;
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
    t = a_25;
    {
      ATerm d_25;
      d_25 = t;
      {
        ATerm a_64 = NULL,c_64 = NULL;
        ATerm b_64 = NULL;
        t = not_null(t_62);
        {
          t = length_0(t);
          {
            b_64 = t;
            if(((a_64 != NULL) && (a_64 != b_64)))
              _fail(b_64);
            else
              a_64 = b_64;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_62), not_null(a_64));
          {
            t = ConstructorName_0(t);
            {
              c_64 = t;
              if(((z_63 != NULL) && (z_63 != c_64)))
                _fail(c_64);
              else
                z_63 = c_64;
            }
          }
        }
      }
      t = d_25;
      {
        ATerm g_64 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), (ATerm) ATinsert(ATempty, not_null(y_62)));
        {
          t = conc_0(t);
          {
            g_64 = t;
            if(((d_64 != NULL) && (d_64 != g_64)))
              _fail(g_64);
            else
              d_64 = g_64;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_63))), term_a_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_64)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
      }
    }
    return(t);
  }
  ATerm b_65 (ATerm t)
  {
    ATerm m_64 = NULL;
    ATerm n_64 = NULL;
    t = not_null(x_62);
    {
      t = real_to_string_0(t);
      {
        n_64 = t;
        if(((m_64 != NULL) && (m_64 != n_64)))
          _fail(n_64);
        else
          m_64 = n_64;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(m_64))), term_a_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_62))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
    return(t);
  }
  ATerm c_65 (ATerm t)
  {
    ATerm r_64 = NULL;
    ATerm s_64 = NULL;
    t = not_null(x_62);
    {
      t = int_to_string_0(t);
      {
        s_64 = t;
        if(((r_64 != NULL) && (r_64 != s_64)))
          _fail(s_64);
        else
          r_64 = s_64;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_64))), term_a_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_62))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
    return(t);
  }
  ATerm d_65 (ATerm t)
  {
    ATerm w_64 = NULL;
    ATerm x_64 = NULL;
    t = not_null(x_62);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          x_64 = t;
          if(((w_64 != NULL) && (w_64 != x_64)))
            _fail(x_64);
          else
            w_64 = x_64;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_64)))), term_a_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_62))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
    return(t);
  }
  u_62 = t;
  i_61 :
  if(match_cons(u_62, sym_GuardedLChoice_3))
    {
      v_62 = ATgetArgument(u_62, 0);
      y_62 = ATgetArgument(u_62, 1);
      z_62 = ATgetArgument(u_62, 2);
      j_61 :
      if(match_cons(v_62, sym_Match_1))
        {
          w_62 = ATgetArgument(v_62, 0);
          k_61 :
          if(match_cons(w_62, sym_Op_2))
            {
              x_62 = ATgetArgument(w_62, 0);
              t_62 = ATgetArgument(w_62, 1);
              l_61 :
              if(((ATgetType(t_62) == AT_LIST) && !(ATisEmpty(t_62))))
                {
                  m_62 = ATgetFirst((ATermList) t_62);
                  p_62 = (ATerm) ATgetNext((ATermList) t_62);
                  m_61 :
                  if(((ATgetType(p_62) == AT_LIST) && !(ATisEmpty(p_62))))
                    {
                      q_62 = ATgetFirst((ATermList) p_62);
                      s_62 = (ATerm) ATgetNext((ATermList) p_62);
                      n_61 :
                      if(((ATgetType(s_62) == AT_LIST) && ATisEmpty(s_62)))
                        {
                          o_61 :
                          if(match_cons(q_62, sym_Var_1))
                            {
                              r_62 = ATgetArgument(q_62, 0);
                              p_61 :
                              if(match_cons(m_62, sym_Var_1))
                                {
                                  o_62 = ATgetArgument(m_62, 0);
                                  q_61 :
                                  if(match_string(x_62, "Cons"))
                                    {
                                      ATerm e_25 = t;
                                      int f_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_a_18)), term_s_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, term_a_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_62)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_62)), term_z_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, term_g_25)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_62)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, term_g_25)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
                                          ;
                                          LocalPopChoice(f_25);
                                        }
                                      else
                                        {
                                          t = e_25;
                                          t = a_65(t);
                                        }
                                    }
                                  else
                                    {
                                      t = a_65(t);
                                    }
                                }
                              else
                                {
                                  r_61 :
                                  t = a_65(t);
                                }
                            }
                          else
                            {
                              s_61 :
                              z_61 :
                              t = a_65(t);
                            }
                        }
                      else
                        {
                          c_62 :
                          d_62 :
                          e_62 :
                          t = a_65(t);
                        }
                    }
                  else
                    {
                      f_62 :
                      g_62 :
                      t = a_65(t);
                    }
                }
              else
                {
                  if(((ATgetType(t_62) == AT_LIST) && ATisEmpty(t_62)))
                    {
                      h_62 :
                      if(match_string(x_62, "Nil"))
                        {
                          ATerm h_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_a_18)), term_s_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATempty, term_a_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_62))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_62))));
                              ;
                              LocalPopChoice(i_25);
                            }
                          else
                            {
                              t = h_25;
                              t = a_65(t);
                            }
                        }
                      else
                        {
                          t = a_65(t);
                        }
                    }
                  else
                    {
                      i_62 :
                      t = a_65(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_62, sym_Real_1))
                {
                  x_62 = ATgetArgument(w_62, 0);
                  t = b_65(t);
                }
              else
                {
                  if(match_cons(w_62, sym_Int_1))
                    {
                      x_62 = ATgetArgument(w_62, 0);
                      t = c_65(t);
                    }
                  else
                    {
                      if(match_cons(w_62, sym_Str_1))
                        {
                          x_62 = ATgetArgument(w_62, 0);
                          t = d_65(t);
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
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym__2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_j_25), not_null(v_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
  d_66 = t;
  b_66 :
  if(((ATgetType(d_66) == AT_LIST) && !(ATisEmpty(d_66))))
    {
      e_66 = ATgetFirst((ATermList) d_66);
      f_66 = (ATerm) ATgetNext((ATermList) d_66);
      c_66 :
      if(match_int(e_66, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_66)), term_p_25), term_o_25);
        }
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
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  j_66 :
  if(((ATgetType(l_66) == AT_LIST) && !(ATisEmpty(l_66))))
    {
      m_66 = ATgetFirst((ATermList) l_66);
      n_66 = (ATerm) ATgetNext((ATermList) l_66);
      k_66 :
      if(match_int(m_66, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_66)), term_o_25), term_o_25);
        }
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
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  r_66 :
  if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
    {
      u_66 = ATgetFirst((ATermList) t_66);
      v_66 = (ATerm) ATgetNext((ATermList) t_66);
      s_66 :
      if(match_int(u_66, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_66)), term_q_25), term_o_25);
        }
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
  ATerm r_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = r_25;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm b_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm x_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, x_2);
      }
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = b_26;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
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
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  i_67 :
  if(match_cons(j_67, sym__2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      {
        ATerm o_67 = NULL,q_67 = NULL;
        ATerm j_26;
        j_26 = t;
        {
          ATerm p_67 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_k_26), not_null(k_67));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  p_67 = t;
                  if(((o_67 != NULL) && (o_67 != p_67)))
                    _fail(p_67);
                  else
                    o_67 = p_67;
                }
              }
            }
          }
        }
        t = j_26;
        {
          ATerm r_67 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_l_26), not_null(k_67));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  r_67 = t;
                  if(((q_67 != NULL) && (q_67 != r_67)))
                    _fail(r_67);
                  else
                    q_67 = r_67;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_67))), term_o_26)))), not_null(l_67)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_26, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(o_67))), term_o_26)))));
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
  ATerm y_67 = NULL;
  y_67 = t;
  {
    ATerm b_68 = NULL,c_68 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        b_68 = t;
        w_67 :
        if(match_cons(b_68, sym_Defined_1))
          {
            c_68 = ATgetArgument(b_68, 0);
            x_67 :
            if(!(match_string(c_68, "o_0")))
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
    t = not_null(y_67);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  {
    ATerm k_68 = NULL,l_68 = NULL;
    t = not_null(h_68);
    {
      ATerm z_2 (ATerm t)
      {
        t = term_f_8;
        return(t);
      }
      t = rewrite_1(t, z_2);
      {
        k_68 = t;
        f_68 :
        if(match_cons(k_68, sym_Defined_1))
          {
            l_68 = ATgetArgument(k_68, 0);
            g_68 :
            if(!(match_string(l_68, "r_0")))
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
    t = not_null(h_68);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  z_68 = t;
  x_68 :
  if(match_cons(z_68, sym_SDefT_4))
    {
      a_69 = ATgetArgument(z_68, 0);
      b_69 = ATgetArgument(z_68, 1);
      c_69 = ATgetArgument(z_68, 2);
      y_68 = ATgetArgument(z_68, 3);
      {
        ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,p_69 = NULL;
        ATerm p_26;
        p_26 = t;
        {
          ATerm l_69 = NULL;
          t = not_null(b_69);
          {
            ATerm m_69 = NULL;
            t = map_1(t, TranslateVarDec_0);
            {
              l_69 = t;
              {
                if(((h_69 != NULL) && (h_69 != l_69)))
                  _fail(l_69);
                else
                  h_69 = l_69;
                {
                  t = not_null(c_69);
                  {
                    ATerm n_69 = NULL;
                    t = map_1(t, TranslateVarDec_0);
                    {
                      m_69 = t;
                      {
                        if(((i_69 != NULL) && (i_69 != m_69)))
                          _fail(m_69);
                        else
                          i_69 = m_69;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_69), not_null(i_69));
                          {
                            ATerm o_69 = NULL;
                            t = conc_0(t);
                            {
                              n_69 = t;
                              {
                                if(((j_69 != NULL) && (j_69 != n_69)))
                                  _fail(n_69);
                                else
                                  j_69 = n_69;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(y_68));
                                  {
                                    ATerm q_26 = t;
                                    int r_26 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm a_3 (ATerm t)
                                        {
                                          ATerm s_26 = t;
                                          int t_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = TraceFun_0(t);
                                              ;
                                              LocalPopChoice(t_26);
                                            }
                                          else
                                            {
                                              t = s_26;
                                              t = TraceAllFuns_0(t);
                                            }
                                          return(t);
                                        }
                                        t = _2(t, a_3, _id);
                                        t = TracedBody_0(t);
                                        ;
                                        LocalPopChoice(r_26);
                                      }
                                    else
                                      {
                                        t = q_26;
                                        t = PlainBody_0(t);
                                      }
                                    {
                                      o_69 = t;
                                      if(((k_69 != NULL) && (k_69 != o_69)))
                                        _fail(o_69);
                                      else
                                        k_69 = o_69;
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
        t = p_26;
        {
          ATerm q_69 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_69), (ATerm) ATinsert(ATempty, term_v_26));
          {
            t = conc_0(t);
            {
              q_69 = t;
              if(((p_69 != NULL) && (p_69 != q_69)))
                _fail(q_69);
              else
                p_69 = q_69;
            }
          }
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_i_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(p_69)))), not_null(k_69));
        }
      }
    }
  else
    {
      if(match_cons(z_68, sym_SDef_3))
        {
          a_69 = ATgetArgument(z_68, 0);
          b_69 = ATgetArgument(z_68, 1);
          c_69 = ATgetArgument(z_68, 2);
          {
            ATerm u_69 = NULL,v_69 = NULL,y_69 = NULL;
            ATerm w_26;
            w_26 = t;
            {
              ATerm w_69 = NULL;
              t = not_null(b_69);
              {
                ATerm x_69 = NULL;
                t = map_1(t, TranslateVarDec_0);
                {
                  w_69 = t;
                  {
                    if(((u_69 != NULL) && (u_69 != w_69)))
                      _fail(w_69);
                    else
                      u_69 = w_69;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(c_69));
                      {
                        ATerm a_27 = t;
                        int b_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm f_27 = t;
                              int i_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = TraceFun_0(t);
                                  ;
                                  LocalPopChoice(i_27);
                                }
                              else
                                {
                                  t = f_27;
                                  t = TraceAllFuns_0(t);
                                }
                              return(t);
                            }
                            t = _2(t, b_3, _id);
                            t = TracedBody_0(t);
                            ;
                            LocalPopChoice(b_27);
                          }
                        else
                          {
                            t = a_27;
                            t = PlainBody_0(t);
                          }
                        {
                          x_69 = t;
                          if(((v_69 != NULL) && (v_69 != x_69)))
                            _fail(x_69);
                          else
                            v_69 = x_69;
                        }
                      }
                    }
                  }
                }
              }
            }
            t = w_26;
            {
              ATerm z_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_69), (ATerm) ATinsert(ATempty, term_v_26));
              {
                t = conc_0(t);
                {
                  z_69 = t;
                  if(((y_69 != NULL) && (y_69 != z_69)))
                    _fail(z_69);
                  else
                    y_69 = z_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_i_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(y_69)))), not_null(v_69));
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
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym__2))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_70)), not_null(w_70)), (ATerm) ATinsert(ATempty, not_null(w_70)));
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
  ATerm c_71 = NULL;
  ATerm d_71 = NULL;
  d_71 = t;
  if(((c_71 != NULL) && (c_71 != d_71)))
    _fail(d_71);
  else
    c_71 = d_71;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_25, not_null(c_71));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm t_122 (ATerm))
{
  t = explode_string_0(t);
  {
    t = t_122(t);
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
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  g_71 :
  if(((ATgetType(h_71) == AT_LIST) && !(ATisEmpty(h_71))))
    {
      i_71 = ATgetFirst((ATermList) h_71);
      j_71 = (ATerm) ATgetNext((ATermList) h_71);
      t = not_null(i_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym__2))
    {
      p_71 = ATgetArgument(o_71, 0);
      q_71 = ATgetArgument(o_71, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_71), not_null(q_71));
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
ATerm rewrite_1 (ATerm t, ATerm b_134 (ATerm))
{
  ATerm w_71 = NULL;
  ATerm y_71 = NULL;
  w_71 = t;
  {
    ATerm z_71 = NULL;
    t = term_j_27;
    {
      t = b_134(t);
      {
        z_71 = t;
        if(((y_71 != NULL) && (y_71 != z_71)))
          _fail(z_71);
        else
          y_71 = z_71;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_71), not_null(w_71));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  h_72 :
  if(match_cons(i_72, sym__2))
    {
      j_72 = ATgetArgument(i_72, 0);
      k_72 = ATgetArgument(i_72, 1);
      {
        ATerm o_72 = NULL;
        ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
        t = not_null(i_72);
        {
          ATerm c_3 (ATerm t)
          {
            t = term_k_27;
            return(t);
          }
          t = rewrite_1(t, c_3);
          {
            p_72 = t;
            f_72 :
            if(match_cons(p_72, sym_Defined_2))
              {
                q_72 = ATgetArgument(p_72, 0);
                r_72 = ATgetArgument(p_72, 1);
                g_72 :
                if(match_string(q_72, "j_0"))
                  {
                    if(((o_72 != NULL) && (o_72 != r_72)))
                      _fail(r_72);
                    else
                      o_72 = r_72;
                  }
                else
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
        t = not_null(o_72);
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
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  g_73 :
  if(match_cons(h_73, sym_OpDecl_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      j_73 = ATgetArgument(h_73, 1);
      {
        ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,s_73 = NULL;
        ATerm l_27;
        l_27 = t;
        {
          ATerm p_73 = NULL;
          t = not_null(j_73);
          {
            ATerm q_73 = NULL;
            t = Arity_0(t);
            {
              p_73 = t;
              {
                if(((n_73 != NULL) && (n_73 != p_73)))
                  _fail(p_73);
                else
                  n_73 = p_73;
                {
                  ATerm r_73 = NULL;
                  t = int_to_string_0(t);
                  {
                    q_73 = t;
                    {
                      if(((m_73 != NULL) && (m_73 != q_73)))
                        _fail(q_73);
                      else
                        m_73 = q_73;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_73), not_null(n_73));
                        {
                          t = ConstructorName_0(t);
                          {
                            r_73 = t;
                            if(((o_73 != NULL) && (o_73 != r_73)))
                              _fail(r_73);
                            else
                              o_73 = r_73;
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
          ATerm t_73 = NULL;
          t = not_null(i_73);
          {
            t = double_quote_0(t);
            {
              t_73 = t;
              if(((s_73 != NULL) && (s_73 != t_73)))
                _fail(t_73);
              else
                s_73 = t_73;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_73)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_73)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_27), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(m_73))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(s_73))))))));
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
  ATerm c_74 = NULL;
  ATerm e_74 = NULL;
  c_74 = t;
  {
    ATerm f_74 = NULL,h_74 = NULL;
    ATerm g_74 = NULL;
    t = not_null(c_74);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          g_74 = t;
          if(((f_74 != NULL) && (f_74 != g_74)))
            _fail(g_74);
          else
            f_74 = g_74;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), (ATerm) ATinsert(ATempty, term_v_27));
      {
        t = conc_0(t);
        {
          h_74 = t;
          if(((e_74 != NULL) && (e_74 != h_74)))
            _fail(h_74);
          else
            e_74 = h_74;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_74)));
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
  ATerm m_74 = NULL;
  m_74 = t;
  t = SSL_int_to_string(not_null(m_74));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  v_74 :
  if(((ATgetType(x_74) == AT_LIST) && !(ATisEmpty(x_74))))
    {
      y_74 = ATgetFirst((ATermList) x_74);
      z_74 = (ATerm) ATgetNext((ATermList) x_74);
      w_74 :
      if(match_int(y_74, 95))
        {
          ATerm b_75 = NULL;
          ATerm c_75 = NULL;
          t = not_null(z_74);
          {
            t = p_0(t);
            {
              c_75 = t;
              if(((b_75 != NULL) && (b_75 != c_75)))
                _fail(c_75);
              else
                b_75 = c_75;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_75)), term_b_28), term_b_28);
        }
      else
        {
          if(match_int(y_74, 45))
            {
              ATerm e_75 = NULL;
              ATerm f_75 = NULL;
              t = not_null(z_74);
              {
                t = p_0(t);
                {
                  f_75 = t;
                  if(((e_75 != NULL) && (e_75 != f_75)))
                    _fail(f_75);
                  else
                    e_75 = f_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_75)), term_b_28);
            }
          else
            {
              if(match_int(y_74, 39))
                {
                  ATerm h_75 = NULL;
                  ATerm i_75 = NULL;
                  t = not_null(z_74);
                  {
                    t = p_0(t);
                    {
                      i_75 = t;
                      if(((h_75 != NULL) && (h_75 != i_75)))
                        _fail(i_75);
                      else
                        h_75 = i_75;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_75)), term_b_28), term_d_28), term_b_28);
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
ATerm escape_1 (ATerm t, ATerm p_122 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm u_75 (ATerm t)
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_122(t, u_75);
          ;
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, u_75);
                ;
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = u_75(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm))
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_119(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm i_76 = NULL,l_76 = NULL,m_76 = NULL;
        i_76 = t;
        h_76 :
        if(((ATgetType(i_76) == AT_LIST) && !(ATisEmpty(i_76))))
          {
            l_76 = ATgetFirst((ATermList) i_76);
            m_76 = (ATerm) ATgetNext((ATermList) i_76);
            {
              ATerm p_76 = NULL,r_76 = NULL;
              ATerm m_28;
              m_28 = t;
              {
                ATerm q_76 = NULL;
                t = not_null(l_76);
                {
                  t = l_119(t);
                  {
                    q_76 = t;
                    if(((p_76 != NULL) && (p_76 != q_76)))
                      _fail(q_76);
                    else
                      p_76 = q_76;
                  }
                }
              }
              t = m_28;
              {
                ATerm s_76 = NULL;
                t = not_null(m_76);
                {
                  t = foldr_3(t, j_119, k_119, l_119);
                  {
                    s_76 = t;
                    if(((r_76 != NULL) && (r_76 != s_76)))
                      _fail(s_76);
                    else
                      r_76 = s_76;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(r_76));
                  t = k_119(t);
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
  ATerm d_3 (ATerm t)
  {
    t = term_b_17;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_k_17;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  a_77 = t;
  y_76 :
  if(match_cons(a_77, sym_FunType_2))
    {
      b_77 = ATgetArgument(a_77, 0);
      z_76 = ATgetArgument(a_77, 1);
      {
        t = not_null(b_77);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(a_77, sym_ConstType_1))
        {
          b_77 = ATgetArgument(a_77, 0);
          t = term_b_17;
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
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  u_77 = t;
  t_77 :
  if(match_cons(u_77, sym_OpDecl_2))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      {
        ATerm z_77 = NULL,a_78 = NULL;
        ATerm b_78 = NULL;
        t = not_null(w_77);
        {
          ATerm c_78 = NULL,e_78 = NULL,g_78 = NULL;
          t = Arity_0(t);
          {
            b_78 = t;
            {
              if(((z_77 != NULL) && (z_77 != b_78)))
                _fail(b_78);
              else
                z_77 = b_78;
              {
                ATerm n_28;
                n_28 = t;
                {
                  ATerm d_78 = NULL;
                  t = not_null(v_77);
                  {
                    t = cify_0(t);
                    {
                      d_78 = t;
                      if(((c_78 != NULL) && (c_78 != d_78)))
                        _fail(d_78);
                      else
                        c_78 = d_78;
                    }
                  }
                }
                t = n_28;
                {
                  ATerm f_78 = NULL;
                  t = not_null(z_77);
                  {
                    t = int_to_string_0(t);
                    {
                      f_78 = t;
                      if(((e_78 != NULL) && (e_78 != f_78)))
                        _fail(f_78);
                      else
                        e_78 = f_78;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_78)), term_m_29), not_null(c_78)), term_y_28);
                    {
                      t = concat_strings_0(t);
                      {
                        g_78 = t;
                        {
                          if(((a_78 != NULL) && (a_78 != g_78)))
                            _fail(g_78);
                          else
                            a_78 = g_78;
                          {
                            ATerm n_29;
                            n_29 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_77), not_null(z_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_29, not_null(a_78)));
                              {
                                ATerm f_3 (ATerm t)
                                {
                                  t = term_k_27;
                                  return(t);
                                }
                                t = assert_1(t, f_3);
                              }
                            }
                            t = n_29;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_78)), term_j_9)));
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
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  u_78 = t;
  q_78 :
  if(match_cons(u_78, sym_Signature_1))
    {
      v_78 = ATgetArgument(u_78, 0);
      r_78 :
      if(((ATgetType(v_78) == AT_LIST) && !(ATisEmpty(v_78))))
        {
          w_78 = ATgetFirst((ATermList) v_78);
          y_78 = (ATerm) ATgetNext((ATermList) v_78);
          s_78 :
          if(match_cons(w_78, sym_Constructors_1))
            {
              x_78 = ATgetArgument(w_78, 0);
              t_78 :
              if(((ATgetType(y_78) == AT_LIST) && ATisEmpty(y_78)))
                {
                  {
                    ATerm a_79 = NULL,b_79 = NULL,e_79 = NULL;
                    ATerm f_30;
                    f_30 = t;
                    {
                      ATerm c_79 = NULL;
                      t = not_null(x_78);
                      {
                        ATerm d_79 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          c_79 = t;
                          {
                            if(((a_79 != NULL) && (a_79 != c_79)))
                              _fail(c_79);
                            else
                              a_79 = c_79;
                            {
                              t = not_null(x_78);
                              {
                                t = InitConstructors_0(t);
                                {
                                  d_79 = t;
                                  if(((b_79 != NULL) && (b_79 != d_79)))
                                    _fail(d_79);
                                  else
                                    b_79 = d_79;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = f_30;
                    {
                      ATerm f_79 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), (ATerm) ATinsert(ATempty, not_null(b_79)));
                      {
                        t = conc_0(t);
                        {
                          f_79 = t;
                          if(((e_79 != NULL) && (e_79 != f_79)))
                            _fail(f_79);
                          else
                            e_79 = f_79;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(e_79));
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
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  p_79 = t;
  n_79 :
  if(match_cons(p_79, sym_FunType_2))
    {
      q_79 = ATgetArgument(p_79, 0);
      o_79 = ATgetArgument(p_79, 1);
      {
        ATerm s_79 = NULL;
        ATerm t_79 = NULL;
        t = not_null(q_79);
        {
          t = map_1(t, TranslateType_0);
          {
            t_79 = t;
            if(((s_79 != NULL) && (s_79 != t_79)))
              _fail(t_79);
            else
              s_79 = t_79;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(s_79)));
      }
    }
  else
    {
      if(match_cons(p_79, sym_ConstType_1))
        {
          q_79 = ATgetArgument(p_79, 0);
          t = term_i_9;
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
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  d_80 = t;
  a_80 :
  if(match_cons(d_80, sym_VarDec_2))
    {
      e_80 = ATgetArgument(d_80, 0);
      f_80 = ATgetArgument(d_80, 1);
      b_80 :
      if(match_cons(f_80, sym_FunType_2))
        {
          g_80 = ATgetArgument(f_80, 0);
          c_80 = ATgetArgument(f_80, 1);
          {
            ATerm j_80 = NULL;
            ATerm k_80 = NULL;
            t = not_null(g_80);
            {
              t = map_1(t, TranslateType_0);
              {
                k_80 = t;
                if(((j_80 != NULL) && (j_80 != k_80)))
                  _fail(k_80);
                else
                  j_80 = k_80;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_80)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_80)))));
          }
        }
      else
        {
          if(match_cons(f_80, sym_ConstType_1))
            {
              g_80 = ATgetArgument(f_80, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_80)), term_j_9));
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
  ATerm o_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,d_82 = NULL;
  o_81 = t;
  n_81 :
  if(match_cons(o_81, sym_SDef_3))
    {
      z_81 = ATgetArgument(o_81, 0);
      a_82 = ATgetArgument(o_81, 1);
      b_82 = ATgetArgument(o_81, 2);
      {
        ATerm j_82 = NULL;
        ATerm k_82 = NULL;
        t = not_null(a_82);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            k_82 = t;
            {
              if(((j_82 != NULL) && (j_82 != k_82)))
                _fail(k_82);
              else
                j_82 = k_82;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), (ATerm) ATinsert(ATempty, term_i_9));
                t = conc_0(t);
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_81)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_82))))));
      }
    }
  else
    {
      if(match_cons(o_81, sym_SDefT_4))
        {
          z_81 = ATgetArgument(o_81, 0);
          a_82 = ATgetArgument(o_81, 1);
          b_82 = ATgetArgument(o_81, 2);
          d_82 = ATgetArgument(o_81, 3);
          {
            ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
            ATerm b_83 = NULL;
            t = not_null(a_82);
            {
              ATerm c_83 = NULL;
              t = map_1(t, TranslateVarDec_0);
              {
                b_83 = t;
                {
                  if(((y_82 != NULL) && (y_82 != b_83)))
                    _fail(b_83);
                  else
                    y_82 = b_83;
                  {
                    t = not_null(b_82);
                    {
                      ATerm d_83 = NULL;
                      t = map_1(t, TranslateVarDec_0);
                      {
                        c_83 = t;
                        {
                          if(((z_82 != NULL) && (z_82 != c_83)))
                            _fail(c_83);
                          else
                            z_82 = c_83;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_9)), not_null(z_82)), not_null(y_82));
                            {
                              t = concat_0(t);
                              {
                                d_83 = t;
                                if(((a_83 != NULL) && (a_83 != d_83)))
                                  _fail(d_83);
                                else
                                  a_83 = d_83;
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
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_81)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_83))))));
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
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,f_84 = NULL;
  w_83 = t;
  q_83 :
  if(match_cons(w_83, sym_Specification_1))
    {
      x_83 = ATgetArgument(w_83, 0);
      r_83 :
      if(((ATgetType(x_83) == AT_LIST) && !(ATisEmpty(x_83))))
        {
          y_83 = ATgetFirst((ATermList) x_83);
          a_84 = (ATerm) ATgetNext((ATermList) x_83);
          s_83 :
          if(match_cons(y_83, sym_Signature_1))
            {
              z_83 = ATgetArgument(y_83, 0);
              t_83 :
              if(((ATgetType(a_84) == AT_LIST) && !(ATisEmpty(a_84))))
                {
                  b_84 = ATgetFirst((ATermList) a_84);
                  f_84 = (ATerm) ATgetNext((ATermList) a_84);
                  u_83 :
                  if(match_cons(b_84, sym_Strategies_1))
                    {
                      c_84 = ATgetArgument(b_84, 0);
                      v_83 :
                      if(((ATgetType(f_84) == AT_LIST) && ATisEmpty(f_84)))
                        {
                          {
                            ATerm i_84 = NULL,j_84 = NULL,q_84 = NULL;
                            ATerm g_30;
                            g_30 = t;
                            {
                              ATerm k_84 = NULL;
                              t = not_null(c_84);
                              {
                                ATerm p_84 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  k_84 = t;
                                  {
                                    if(((i_84 != NULL) && (i_84 != k_84)))
                                      _fail(k_84);
                                    else
                                      i_84 = k_84;
                                    {
                                      t = term_o_8;
                                      {
                                        ATerm h_30 = t;
                                        int i_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm g_3 (ATerm t)
                                              {
                                                ATerm l_84 = NULL;
                                                ATerm m_84 = NULL,o_84 = NULL;
                                                ATerm n_84 = NULL;
                                                n_84 = t;
                                                if(((m_84 != NULL) && (m_84 != n_84)))
                                                  _fail(n_84);
                                                else
                                                  m_84 = n_84;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(m_84));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      o_84 = t;
                                                      if(((l_84 != NULL) && (l_84 != o_84)))
                                                        _fail(o_84);
                                                      else
                                                        l_84 = o_84;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(l_84));
                                                return(t);
                                              }
                                              t = map_1(t, g_3);
                                            }
                                            ;
                                            LocalPopChoice(i_30);
                                          }
                                        else
                                          {
                                            t = h_30;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          p_84 = t;
                                          if(((j_84 != NULL) && (j_84 != p_84)))
                                            _fail(p_84);
                                          else
                                            j_84 = p_84;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = g_30;
                            {
                              ATerm r_84 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(c_84)), term_v_30)), not_null(i_84)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_30), (ATerm) ATmakeAppl(sym_Signature_1, not_null(z_83))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_30, (ATerm) ATinsert(ATempty, term_p_30)))), not_null(j_84));
                              {
                                t = concat_0(t);
                                {
                                  r_84 = t;
                                  if(((q_84 != NULL) && (q_84 != r_84)))
                                    _fail(r_84);
                                  else
                                    q_84 = r_84;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(q_84));
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
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  z_84 :
  if(((ATgetType(a_85) == AT_LIST) && !(ATisEmpty(a_85))))
    {
      b_85 = ATgetFirst((ATermList) a_85);
      c_85 = (ATerm) ATgetNext((ATermList) a_85);
      t = not_null(c_85);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  h_85 :
  if(match_cons(i_85, sym__2))
    {
      j_85 = ATgetArgument(i_85, 0);
      k_85 = ATgetArgument(i_85, 1);
      {
        ATerm w_30;
        w_30 = t;
        {
          ATerm n_85 = NULL;
          ATerm o_85 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_85), not_null(k_85));
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
                t = (ATerm) ATempty;
              }
            {
              o_85 = t;
              if(((n_85 != NULL) && (n_85 != o_85)))
                _fail(o_85);
              else
                n_85 = o_85;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_85), not_null(k_85), not_null(n_85));
            t = table_put_0(t);
          }
        }
        t = w_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_133 (ATerm))
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  ATerm z_30;
  z_30 = t;
  {
    ATerm a_86 = NULL;
    ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
    t = w_133(t);
    {
      a_86 = t;
      {
        if(((z_85 != NULL) && (z_85 != a_86)))
          _fail(a_86);
        else
          z_85 = a_86;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_85), term_c_31);
              t = table_get_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_86 = t;
            w_85 :
            if(((ATgetType(b_86) == AT_LIST) && !(ATisEmpty(b_86))))
              {
                c_86 = ATgetFirst((ATermList) b_86);
                d_86 = (ATerm) ATgetNext((ATermList) b_86);
                {
                  if(((y_85 != NULL) && (y_85 != c_86)))
                    _fail(c_86);
                  else
                    y_85 = c_86;
                  {
                    if(((x_85 != NULL) && (x_85 != d_86)))
                      _fail(d_86);
                    else
                      x_85 = d_86;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_85), term_c_31, not_null(x_85));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_85);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm e_86 = NULL;
                              e_86 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_85), not_null(e_86));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, h_3);
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
  t = z_30;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_106(t);
      t = l_106(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        t = l_106(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_133 (ATerm))
{
  ATerm m_86 = NULL;
  ATerm f_31;
  f_31 = t;
  {
    ATerm n_86 = NULL;
    ATerm o_86 = NULL;
    t = v_133(t);
    {
      n_86 = t;
      {
        if(((m_86 != NULL) && (m_86 != n_86)))
          _fail(n_86);
        else
          m_86 = n_86;
        {
          ATerm p_86 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_86), term_c_31);
          {
            ATerm g_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_31);
              }
            else
              {
                t = g_31;
                t = (ATerm) ATempty;
              }
            {
              p_86 = t;
              if(((o_86 != NULL) && (o_86 != p_86)))
                _fail(p_86);
              else
                o_86 = p_86;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_86), term_c_31, (ATerm) ATinsert(CheckATermList(not_null(o_86)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_31;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_133 (ATerm), ATerm y_133 (ATerm))
{
  t = begin_scope_1(t, x_133);
  {
    ATerm i_3 (ATerm t)
    {
      t = end_scope_1(t, x_133);
      return(t);
    }
    t = restore_always_2(t, y_133, i_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_133 (ATerm))
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym__2))
    {
      y_86 = ATgetArgument(x_86, 0);
      z_86 = ATgetArgument(x_86, 1);
      {
        ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
        ATerm i_31;
        i_31 = t;
        {
          ATerm f_87 = NULL;
          ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
          t = z_133(t);
          {
            f_87 = t;
            {
              if(((c_87 != NULL) && (c_87 != f_87)))
                _fail(f_87);
              else
                c_87 = f_87;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_87), not_null(y_86), not_null(z_86));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_31 = t;
                    int k_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_87), term_c_31);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(k_31);
                      }
                    else
                      {
                        t = j_31;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_87 = t;
                      v_86 :
                      if(((ATgetType(g_87) == AT_LIST) && !(ATisEmpty(g_87))))
                        {
                          h_87 = ATgetFirst((ATermList) g_87);
                          i_87 = (ATerm) ATgetNext((ATermList) g_87);
                          {
                            if(((d_87 != NULL) && (d_87 != h_87)))
                              _fail(h_87);
                            else
                              d_87 = h_87;
                            {
                              if(((e_87 != NULL) && (e_87 != i_87)))
                                _fail(i_87);
                              else
                                e_87 = i_87;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_87), term_c_31, (ATerm) ATinsert(CheckATermList(not_null(e_87)), (ATerm) ATinsert(CheckATermList(not_null(d_87)), not_null(y_86))));
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
        t = i_31;
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
  ATerm o_87 = NULL,p_87 = NULL;
  ATerm l_31;
  l_31 = t;
  {
    ATerm q_87 = NULL;
    ATerm r_87 = NULL;
    t = term_n_31;
    {
      q_87 = t;
      {
        if(((o_87 != NULL) && (o_87 != q_87)))
          _fail(q_87);
        else
          o_87 = q_87;
        {
          t = term_w_16;
          {
            r_87 = t;
            if(((p_87 != NULL) && (p_87 != r_87)))
              _fail(r_87);
            else
              p_87 = r_87;
          }
        }
      }
    }
  }
  t = l_31;
  {
    ATerm o_31;
    o_31 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), (ATerm) ATmakeAppl(sym_Defined_2, term_p_31, not_null(p_87)));
      {
        ATerm j_3 (ATerm t)
        {
          t = term_f_14;
          return(t);
        }
        t = assert_1(t, j_3);
      }
    }
    t = o_31;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm x_87 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = term_b_15;
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              {
                ATerm s_31 = t;
                int t_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(t_31);
                  }
                else
                  {
                    t = s_31;
                    {
                      ATerm u_31 = t;
                      int z_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
                          LocalPopChoice(z_31);
                        }
                      else
                        {
                          t = u_31;
                          {
                            ATerm a_32 = t;
                            int b_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = TranslateStratMatchGuard_0(t);
                                ;
                                LocalPopChoice(b_32);
                              }
                            else
                              {
                                t = a_32;
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
        t = repeat_1(t, m_3);
        {
          t = _all(t, x_87);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, k_3, l_3);
      return(t);
    }
    t = x_87(t);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm w_87 = NULL;
          w_87 = t;
          v_87 :
          if(match_cons(w_87, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, o_3);
        return(t);
      }
      t = try_1(t, n_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm c_32;
  c_32 = t;
  {
    ATerm a_88 = NULL;
    ATerm b_88 = NULL;
    t = term_j_27;
    {
      t = whoami_0(t);
      {
        b_88 = t;
        if(((a_88 != NULL) && (a_88 != b_88)))
          _fail(b_88);
        else
          a_88 = b_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_32), not_null(a_88)), term_i_32));
      {
        t = printnl_0(t);
        {
          t = term_k_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_32;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  f_88 = t;
  e_88 :
  if(match_cons(f_88, sym__2))
    {
      g_88 = ATgetArgument(f_88, 0);
      h_88 = ATgetArgument(f_88, 1);
      {
        ATerm k_32;
        k_32 = t;
        t = SSL_printnl(not_null(g_88), not_null(h_88));
        t = k_32;
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
  ATerm m_88 = NULL;
  m_88 = t;
  t = SSL_implode_string(not_null(m_88));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
        r_88 = t;
        q_88 :
        if(((ATgetType(r_88) == AT_LIST) && !(ATisEmpty(r_88))))
          {
            s_88 = ATgetFirst((ATermList) r_88);
            t_88 = (ATerm) ATgetNext((ATermList) r_88);
            {
              t = not_null(s_88);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(t_88);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm d_89 = NULL;
  ATerm f_89 = NULL;
  d_89 = t;
  {
    ATerm g_89 = NULL;
    ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
    t = not_null(d_89);
    {
      g_89 = t;
      {
        t = SSL_explode_term(not_null(g_89));
        {
          i_89 = t;
          b_89 :
          if(match_cons(i_89, sym__2))
            {
              j_89 = ATgetArgument(i_89, 0);
              k_89 = ATgetArgument(i_89, 1);
              c_89 :
              if(match_string(j_89, ""))
                {
                  if(((f_89 != NULL) && (f_89 != k_89)))
                    _fail(k_89);
                  else
                    f_89 = k_89;
                }
              else
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
      t = not_null(f_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_113 (ATerm))
{
  ATerm o_89 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_89);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          t = Nil_0(t);
          t = w_113(t);
        }
      }
    return(t);
  }
  t = o_89(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
  r_89 = t;
  q_89 :
  if(match_cons(r_89, sym__2))
    {
      s_89 = ATgetArgument(r_89, 0);
      t_89 = ATgetArgument(r_89, 1);
      {
        t = not_null(s_89);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(t_89);
            return(t);
          }
          t = at_end_1(t, q_3);
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
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_89 = NULL;
  y_89 = t;
  t = SSL_explode_string(not_null(y_89));
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
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm t_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_3);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = t_32;
            {
              ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
              h_90 = t;
              g_90 :
              if(match_cons(h_90, sym_Path_1))
                {
                  i_90 = ATgetArgument(h_90, 0);
                  t = not_null(i_90);
                }
              else
                {
                  if(match_cons(h_90, sym_Var_1))
                    {
                      i_90 = ATgetArgument(h_90, 0);
                      {
                        t = not_null(i_90);
                        {
                          ATerm w_32 = t;
                          int x_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_32);
                            }
                          else
                            {
                              t = w_32;
                              {
                                ATerm s_3 (ATerm t)
                                {
                                  t = term_y_32;
                                  return(t);
                                }
                                t = debug_1(t, s_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_90, sym_Prefix_2))
                        {
                          i_90 = ATgetArgument(h_90, 0);
                          j_90 = ATgetArgument(h_90, 1);
                          {
                            ATerm o_90 = NULL,q_90 = NULL;
                            ATerm a_33;
                            a_33 = t;
                            {
                              ATerm p_90 = NULL;
                              t = not_null(i_90);
                              {
                                t = eval_config_0(t);
                                {
                                  p_90 = t;
                                  if(((o_90 != NULL) && (o_90 != p_90)))
                                    _fail(p_90);
                                  else
                                    o_90 = p_90;
                                }
                              }
                            }
                            t = a_33;
                            {
                              ATerm r_90 = NULL;
                              t = not_null(j_90);
                              {
                                t = eval_config_0(t);
                                {
                                  r_90 = t;
                                  if(((q_90 != NULL) && (q_90 != r_90)))
                                    _fail(r_90);
                                  else
                                    q_90 = r_90;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_90), not_null(q_90));
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
  ATerm z_90 = NULL;
  z_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_7, not_null(z_90));
    {
      t = table_get_0(t);
      {
        ATerm t_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_33;
            c_33 = t;
            {
              ATerm b_91 = NULL;
              ATerm c_91 = NULL;
              c_91 = t;
              if(((b_91 != NULL) && (b_91 != c_91)))
                _fail(c_91);
              else
                b_91 = c_91;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_7, not_null(z_90), not_null(b_91));
                t = table_put_0(t);
              }
            }
            t = c_33;
          }
          return(t);
        }
        t = try_1(t, t_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_126 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm d_33;
    d_33 = t;
    {
      ATerm g_91 = NULL;
      ATerm h_91 = NULL;
      t = term_e_33;
      {
        t = get_config_0(t);
        {
          h_91 = t;
          if(((g_91 != NULL) && (g_91 != h_91)))
            _fail(h_91);
          else
            g_91 = h_91;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_91), term_f_33);
        t = geq_0(t);
      }
    }
    t = d_33;
    t = n_126(t);
    return(t);
  }
  t = try_1(t, u_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL;
  n_91 = t;
  l_91 :
  if(match_cons(n_91, sym__2))
    {
      o_91 = ATgetArgument(n_91, 0);
      p_91 = ATgetArgument(n_91, 1);
      m_91 :
      if(match_cons(p_91, sym_Stream_1))
        {
          q_91 = ATgetArgument(p_91, 0);
          {
            ATerm t_91 = NULL;
            t = SSL_fputc(not_null(o_91), not_null(q_91));
            {
              ATerm u_91 = NULL;
              u_91 = t;
              if(((t_91 != NULL) && (t_91 != u_91)))
                _fail(u_91);
              else
                t_91 = u_91;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_91));
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
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  b_92 = t;
  z_91 :
  if(match_cons(b_92, sym__2))
    {
      c_92 = ATgetArgument(b_92, 0);
      e_92 = ATgetArgument(b_92, 1);
      a_92 :
      if(match_cons(c_92, sym_Stream_1))
        {
          d_92 = ATgetArgument(c_92, 0);
          {
            ATerm h_92 = NULL;
            t = SSL_write_term_to_stream_text(not_null(d_92), not_null(e_92));
            {
              ATerm i_92 = NULL;
              i_92 = t;
              if(((h_92 != NULL) && (h_92 != i_92)))
                _fail(i_92);
              else
                h_92 = i_92;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_92));
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
  ATerm v_3 (ATerm t)
  {
    ATerm m_92 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm n_92 = NULL;
      n_92 = t;
      if(((m_92 != NULL) && (m_92 != n_92)))
        _fail(n_92);
      else
        m_92 = n_92;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_33, not_null(m_92));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, v_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  t_92 = t;
  r_92 :
  if(match_cons(t_92, sym__2))
    {
      u_92 = ATgetArgument(t_92, 0);
      w_92 = ATgetArgument(t_92, 1);
      s_92 :
      if(match_cons(u_92, sym_Stream_1))
        {
          v_92 = ATgetArgument(u_92, 0);
          {
            ATerm z_92 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(v_92), not_null(w_92));
            {
              ATerm a_93 = NULL;
              a_93 = t;
              if(((z_92 != NULL) && (z_92 != a_93)))
                _fail(a_93);
              else
                z_92 = a_93;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_92));
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
ATerm WriteToFile_1 (ATerm t, ATerm j_125 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym__2))
    {
      i_93 = ATgetArgument(h_93, 0);
      j_93 = ATgetArgument(h_93, 1);
      {
        ATerm m_93 = NULL,o_93 = NULL;
        t = not_null(i_93);
        {
          ATerm n_93 = NULL;
          n_93 = t;
          if(((m_93 != NULL) && (m_93 != n_93)))
            _fail(n_93);
          else
            m_93 = n_93;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_93), term_i_33);
            {
              t = open_stream_0(t);
              {
                ATerm p_93 = NULL;
                p_93 = t;
                if(((o_93 != NULL) && (o_93 != p_93)))
                  _fail(p_93);
                else
                  o_93 = p_93;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_93), not_null(j_93));
                  {
                    t = j_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(j_93);
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
  ATerm z_93 = NULL;
  ATerm j_33;
  j_33 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm k_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm a_94 = NULL,b_94 = NULL;
            a_94 = t;
            w_93 :
            if(match_cons(a_94, sym_Output_1))
              {
                b_94 = ATgetArgument(a_94, 0);
                if(((z_93 != NULL) && (z_93 != b_94)))
                  _fail(b_94);
                else
                  z_93 = b_94;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_3);
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = k_33;
          {
            ATerm c_94 = NULL;
            t = term_p_33;
            {
              c_94 = t;
              if(((z_93 != NULL) && (z_93 != c_94)))
                _fail(c_94);
              else
                z_93 = c_94;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_3, _id);
  }
  t = j_33;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(z_93);
        return(t);
      }
      t = split_2(t, z_3, _id);
      return(t);
    }
    t = _2(t, _id, y_3);
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm d_94 = NULL;
              d_94 = t;
              y_93 :
              if(!(match_cons(d_94, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_4);
            return(t);
          }
          t = _2(t, a_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_127 (ATerm))
{
  ATerm j_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  ATerm s_33;
  s_33 = t;
  t = dtime_0(t);
  t = s_33;
  {
    t = j_127(t);
    {
      ATerm t_33;
      t_33 = t;
      {
        ATerm k_94 = NULL;
        t = dtime_0(t);
        {
          k_94 = t;
          if(((j_94 != NULL) && (j_94 != k_94)))
            _fail(k_94);
          else
            j_94 = k_94;
        }
      }
      t = t_33;
      {
        l_94 = t;
        i_94 :
        if(match_cons(l_94, sym__2))
          {
            m_94 = ATgetArgument(l_94, 0);
            n_94 = ATgetArgument(l_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_94))), not_null(n_94));
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
  ATerm v_94 = NULL,w_94 = NULL;
  ATerm c_95 (ATerm t)
  {
    t = SSL_fclose(not_null(w_94));
    return(t);
  }
  w_94 = t;
  u_94 :
  if(match_cons(w_94, sym_Stream_1))
    {
      v_94 = ATgetArgument(w_94, 0);
      {
        ATerm u_33 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_94));
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = u_33;
            t = c_95(t);
          }
      }
    }
  else
    {
      t = c_95(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL;
  f_95 = t;
  e_95 :
  if(match_cons(f_95, sym_Stream_1))
    {
      g_95 = ATgetArgument(f_95, 0);
      t = SSL_read_term_from_stream(not_null(g_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_124 (ATerm))
{
  ATerm l_36;
  l_36 = t;
  {
    ATerm l_95 = NULL,n_95 = NULL;
    ATerm m_36;
    m_36 = t;
    {
      ATerm m_95 = NULL;
      t = v_124(t);
      {
        m_95 = t;
        if(((l_95 != NULL) && (l_95 != m_95)))
          _fail(m_95);
        else
          l_95 = m_95;
      }
    }
    t = m_36;
    {
      ATerm o_95 = NULL;
      o_95 = t;
      if(((n_95 != NULL) && (n_95 != o_95)))
        _fail(o_95);
      else
        n_95 = o_95;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_95)), not_null(l_95)));
        t = printnl_0(t);
      }
    }
  }
  t = l_36;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym__2))
    {
      v_95 = ATgetArgument(u_95, 0);
      w_95 = ATgetArgument(u_95, 1);
      {
        ATerm a_96 = NULL;
        t = SSL_fopen(not_null(v_95), not_null(w_95));
        {
          ATerm b_96 = NULL;
          b_96 = t;
          if(((a_96 != NULL) && (a_96 != b_96)))
            _fail(b_96);
          else
            a_96 = b_96;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_96));
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
  ATerm f_96 = NULL;
  f_96 = t;
  t = SSL_is_string(not_null(f_96));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_82 (ATerm), ATerm v_82 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym__2))
    {
      p_96 = ATgetArgument(o_96, 0);
      q_96 = ATgetArgument(o_96, 1);
      {
        ATerm u_96 = NULL,w_96 = NULL;
        ATerm v_96 = NULL;
        t = SSLgetAnnotations(not_null(o_96));
        {
          v_96 = t;
          if(((u_96 != NULL) && (u_96 != v_96)))
            _fail(v_96);
          else
            u_96 = v_96;
        }
        {
          t = not_null(p_96);
          {
            ATerm y_96 = NULL;
            t = u_82(t);
            {
              w_96 = t;
              {
                t = not_null(q_96);
                {
                  ATerm a_97 = NULL;
                  t = v_82(t);
                  {
                    y_96 = t;
                    {
                      ATerm b_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_96), not_null(y_96)), not_null(u_96));
                      {
                        b_97 = t;
                        if(((a_97 != NULL) && (a_97 != b_97)))
                          _fail(b_97);
                        else
                          a_97 = b_97;
                      }
                      t = not_null(a_97);
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
  ATerm i_97 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_97 = NULL;
    j_97 = t;
    if(((i_97 != NULL) && (i_97 != j_97)))
      _fail(j_97);
    else
      i_97 = j_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_97));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm m_97 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_97 = NULL;
    n_97 = t;
    if(((m_97 != NULL) && (m_97 != n_97)))
      _fail(n_97);
    else
      m_97 = n_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_97));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm q_97 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_97 = NULL;
    r_97 = t;
    if(((q_97 != NULL) && (q_97 != r_97)))
      _fail(r_97);
    else
      q_97 = r_97;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_97));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm x_97 = NULL;
  x_97 = t;
  w_97 :
  if(match_cons(x_97, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(x_97, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(x_97, sym_stdin_0))
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
  ATerm h_98 = NULL;
  ATerm j_98 = NULL,k_98 = NULL;
  h_98 = t;
  {
    ATerm l_98 = NULL;
    ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
    t = not_null(h_98);
    {
      l_98 = t;
      {
        t = SSL_explode_term(not_null(l_98));
        {
          n_98 = t;
          e_98 :
          if(match_cons(n_98, sym__2))
            {
              o_98 = ATgetArgument(n_98, 0);
              p_98 = ATgetArgument(n_98, 1);
              f_98 :
              if(match_string(o_98, ""))
                {
                  g_98 :
                  if(((ATgetType(p_98) == AT_LIST) && !(ATisEmpty(p_98))))
                    {
                      q_98 = ATgetFirst((ATermList) p_98);
                      r_98 = (ATerm) ATgetNext((ATermList) p_98);
                      {
                        if(((k_98 != NULL) && (k_98 != q_98)))
                          _fail(q_98);
                        else
                          k_98 = q_98;
                        if(((j_98 != NULL) && (j_98 != r_98)))
                          _fail(r_98);
                        else
                          j_98 = r_98;
                      }
                    }
                  else
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
    t = not_null(k_98);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  z_98 = t;
  y_98 :
  if(match_cons(z_98, sym__2))
    {
      a_99 = ATgetArgument(z_98, 0);
      b_99 = ATgetArgument(z_98, 1);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm c_4 (ATerm t)
                  {
                    ATerm e_99 = NULL,f_99 = NULL;
                    e_99 = t;
                    x_98 :
                    if(match_cons(e_99, sym_Path_1))
                      {
                        f_99 = ATgetArgument(e_99, 0);
                        t = not_null(f_99);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, c_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(s_36);
                }
              else
                {
                  t = r_36;
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
  ATerm n_99 = NULL;
  ATerm b_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_99 = NULL;
      ATerm m_99 = NULL;
      m_99 = t;
      if(((l_99 != NULL) && (l_99 != m_99)))
        _fail(m_99);
      else
        l_99 = m_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_99), term_g_37);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = b_37;
      {
        ATerm d_4 (ATerm t)
        {
          t = term_h_37;
          return(t);
        }
        t = debug_1(t, d_4);
        _fail(t);
      }
    }
  {
    ATerm q_37;
    q_37 = t;
    {
      ATerm o_99 = NULL;
      t = read_from_stream_0(t);
      {
        o_99 = t;
        if(((n_99 != NULL) && (n_99 != o_99)))
          _fail(o_99);
        else
          n_99 = o_99;
      }
    }
    t = q_37;
    {
      t = fclose_0(t);
      t = not_null(n_99);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_120 (ATerm), ATerm x_120 (ATerm))
{
  ATerm t_99 = NULL,v_99 = NULL;
  ATerm u_37;
  u_37 = t;
  {
    ATerm u_99 = NULL;
    t = w_120(t);
    {
      u_99 = t;
      if(((t_99 != NULL) && (t_99 != u_99)))
        _fail(u_99);
      else
        t_99 = u_99;
    }
  }
  t = u_37;
  {
    ATerm w_99 = NULL;
    t = x_120(t);
    {
      w_99 = t;
      if(((v_99 != NULL) && (v_99 != w_99)))
        _fail(w_99);
      else
        v_99 = w_99;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_99), not_null(v_99));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_100 = NULL;
  ATerm x_37;
  x_37 = t;
  {
    ATerm y_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          ATerm d_100 = NULL,e_100 = NULL;
          d_100 = t;
          a_100 :
          if(match_cons(d_100, sym_Input_1))
            {
              e_100 = ATgetArgument(d_100, 0);
              if(((c_100 != NULL) && (c_100 != e_100)))
                _fail(e_100);
              else
                c_100 = e_100;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_4);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = y_37;
        {
          ATerm f_100 = NULL;
          t = term_c_38;
          {
            f_100 = t;
            if(((c_100 != NULL) && (c_100 != f_100)))
              _fail(f_100);
            else
              c_100 = f_100;
          }
        }
      }
  }
  t = x_37;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(c_100);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_100 = NULL;
    k_100 = t;
    i_100 :
    if(!(match_string(k_100, "-k")))
      {
        if(!(match_string(k_100, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm d_38;
    d_38 = t;
    {
      ATerm l_100 = NULL;
      ATerm m_100 = NULL;
      t = string_to_int_0(t);
      {
        m_100 = t;
        if(((l_100 != NULL) && (l_100 != m_100)))
          _fail(m_100);
        else
          l_100 = m_100;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_38, not_null(l_100));
        t = set_config_0(t);
      }
    }
    t = d_38;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_f_38;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_100 = NULL;
  p_100 = t;
  t = SSL_string_to_int(not_null(p_100));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm x_100 = NULL;
        x_100 = t;
        s_100 :
        if(!(match_string(x_100, "-S")))
          {
            if(!(match_string(x_100, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_p_38;
        t = set_config_0(t);
        t = term_q_38;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_r_38;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm y_100 = NULL;
              y_100 = t;
              t_100 :
              if(!(match_string(y_100, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm b_101 = NULL;
              ATerm u_38;
              u_38 = t;
              {
                ATerm z_100 = NULL;
                ATerm a_101 = NULL;
                t = string_to_int_0(t);
                {
                  a_101 = t;
                  if(((z_100 != NULL) && (z_100 != a_101)))
                    _fail(a_101);
                  else
                    z_100 = a_101;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_33, not_null(z_100));
                  t = set_config_0(t);
                }
              }
              t = u_38;
              {
                ATerm c_101 = NULL;
                c_101 = t;
                if(((b_101 != NULL) && (b_101 != c_101)))
                  _fail(c_101);
                else
                  b_101 = c_101;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_101));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_v_38;
              return(t);
            }
            t = ArgOption_3(t, m_4, n_4, o_4);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm d_101 = NULL;
                d_101 = t;
                w_100 :
                if(!(match_string(d_101, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_x_38;
                t = set_config_0(t);
                t = term_y_38;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_z_38;
                return(t);
              }
              t = Option_3(t, p_4, q_4, r_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm j_101 = NULL;
    j_101 = t;
    g_101 :
    if(!(match_string(j_101, "-o")))
      {
        if(!(match_string(j_101, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm m_101 = NULL;
    ATerm d_39;
    d_39 = t;
    {
      ATerm k_101 = NULL;
      ATerm l_101 = NULL;
      l_101 = t;
      if(((k_101 != NULL) && (k_101 != l_101)))
        _fail(l_101);
      else
        k_101 = l_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_39, not_null(k_101));
        t = set_config_0(t);
      }
    }
    t = d_39;
    {
      ATerm n_101 = NULL;
      n_101 = t;
      if(((m_101 != NULL) && (m_101 != n_101)))
        _fail(n_101);
      else
        m_101 = n_101;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_101));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_f_39;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm r_101 = NULL;
          r_101 = t;
          q_101 :
          if(!(match_string(r_101, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_j_39;
          t = set_config_0(t);
          t = term_k_39;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_l_39;
          return(t);
        }
        t = Option_3(t, v_4, w_4, x_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  x_101 = t;
  v_101 :
  if(match_string(x_101, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_101) == AT_LIST) && !(ATisEmpty(x_101))))
        {
          y_101 = ATgetFirst((ATermList) x_101);
          z_101 = (ATerm) ATgetNext((ATermList) x_101);
          w_101 :
          if(((ATgetType(z_101) == AT_LIST) && !(ATisEmpty(z_101))))
            {
              a_102 = ATgetFirst((ATermList) z_101);
              b_102 = (ATerm) ATgetNext((ATermList) z_101);
              {
                ATerm f_102 = NULL;
                ATerm m_39;
                m_39 = t;
                {
                  t = not_null(y_101);
                  t = k_0(t);
                }
                t = m_39;
                {
                  ATerm g_102 = NULL;
                  t = not_null(a_102);
                  {
                    t = m_0(t);
                    {
                      g_102 = t;
                      if(((f_102 != NULL) && (f_102 != g_102)))
                        _fail(g_102);
                      else
                        f_102 = g_102;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_102)), not_null(f_102));
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
  ATerm y_4 (ATerm t)
  {
    ATerm n_102 = NULL;
    n_102 = t;
    k_102 :
    if(!(match_string(n_102, "-i")))
      {
        if(!(match_string(n_102, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm q_102 = NULL;
    ATerm n_39;
    n_39 = t;
    {
      ATerm o_102 = NULL;
      ATerm p_102 = NULL;
      p_102 = t;
      if(((o_102 != NULL) && (o_102 != p_102)))
        _fail(p_102);
      else
        o_102 = p_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_39, not_null(o_102));
        t = set_config_0(t);
      }
    }
    t = n_39;
    {
      ATerm r_102 = NULL;
      r_102 = t;
      if(((q_102 != NULL) && (q_102 != r_102)))
        _fail(r_102);
      else
        q_102 = r_102;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_102));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_p_39;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm v_102 = NULL;
  t = report_run_time_0(t);
  {
    ATerm w_102 = NULL;
    t = term_j_27;
    {
      t = whoami_0(t);
      {
        w_102 = t;
        if(((v_102 != NULL) && (v_102 != w_102)))
          _fail(w_102);
        else
          v_102 = w_102;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATempty, term_u_39), not_null(v_102)));
      {
        t = printnl_0(t);
        {
          t = term_k_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_v_39;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_102 = NULL;
  z_102 = t;
  t = SSL_TicksToSeconds(not_null(z_102));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  e_103 = t;
  d_103 :
  if(match_cons(e_103, sym__2))
    {
      f_103 = ATgetArgument(e_103, 0);
      g_103 = ATgetArgument(e_103, 1);
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_103), not_null(g_103));
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            t = SSL_addr(not_null(f_103), not_null(g_103));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_119 (ATerm), ATerm i_119 (ATerm))
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_119(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL;
        n_103 = t;
        m_103 :
        if(((ATgetType(n_103) == AT_LIST) && !(ATisEmpty(n_103))))
          {
            o_103 = ATgetFirst((ATermList) n_103);
            p_103 = (ATerm) ATgetNext((ATermList) n_103);
            {
              ATerm s_103 = NULL;
              ATerm t_103 = NULL;
              t = not_null(p_103);
              {
                t = foldr_2(t, h_119, i_119);
                {
                  t_103 = t;
                  if(((s_103 != NULL) && (s_103 != t_103)))
                    _fail(t_103);
                  else
                    s_103 = t_103;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_103), not_null(s_103));
                t = i_119(t);
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
ATerm crush_2 (ATerm t, ATerm a_123 (ATerm), ATerm b_123 (ATerm))
{
  ATerm a_104 = NULL;
  ATerm c_104 = NULL;
  a_104 = t;
  {
    ATerm d_104 = NULL;
    ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
    t = not_null(a_104);
    {
      d_104 = t;
      {
        t = SSL_explode_term(not_null(d_104));
        {
          f_104 = t;
          z_103 :
          if(match_cons(f_104, sym__2))
            {
              g_104 = ATgetArgument(f_104, 0);
              h_104 = ATgetArgument(f_104, 1);
              if(((c_104 != NULL) && (c_104 != h_104)))
                _fail(h_104);
              else
                c_104 = h_104;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_104);
      t = foldr_2(t, a_123, b_123);
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
    ATerm b_5 (ATerm t)
    {
      t = term_b_17;
      return(t);
    }
    t = crush_2(t, b_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym__2))
    {
      o_104 = ATgetArgument(n_104, 0);
      p_104 = ATgetArgument(n_104, 1);
      {
        ATerm a_40;
        a_40 = t;
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_104), not_null(p_104));
              ;
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              t = SSL_gtr(not_null(o_104), not_null(p_104));
            }
        }
        t = a_40;
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
  ATerm v_104 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
      w_104 = t;
      u_104 :
      if(match_cons(w_104, sym__2))
        {
          x_104 = ATgetArgument(w_104, 0);
          y_104 = ATgetArgument(w_104, 1);
          {
            if(((v_104 != NULL) && (v_104 != x_104)))
              _fail(x_104);
            else
              v_104 = x_104;
            if(((v_104 != NULL) && (v_104 != y_104)))
              _fail(y_104);
            else
              v_104 = y_104;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_126 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm f_40;
    f_40 = t;
    {
      ATerm b_105 = NULL;
      ATerm c_105 = NULL;
      t = term_e_33;
      {
        t = get_config_0(t);
        {
          c_105 = t;
          if(((b_105 != NULL) && (b_105 != c_105)))
            _fail(c_105);
          else
            b_105 = c_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), term_k_17);
        t = geq_0(t);
      }
    }
    t = f_40;
    t = m_126(t);
    return(t);
  }
  t = try_1(t, c_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm g_105 = NULL,i_105 = NULL;
    ATerm g_40;
    g_40 = t;
    {
      ATerm h_105 = NULL;
      t = run_time_0(t);
      {
        h_105 = t;
        if(((g_105 != NULL) && (g_105 != h_105)))
          _fail(h_105);
        else
          g_105 = h_105;
      }
    }
    t = g_40;
    {
      ATerm j_105 = NULL;
      t = term_j_27;
      {
        t = whoami_0(t);
        {
          j_105 = t;
          if(((i_105 != NULL) && (i_105 != j_105)))
            _fail(j_105);
          else
            i_105 = j_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), not_null(g_105)), term_h_40), not_null(i_105)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_b_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_105 = NULL;
  q_105 = t;
  p_105 :
  if(match_cons(q_105, sym_Version_0))
    {
      ATerm s_105 = NULL,x_105 = NULL;
      ATerm j_40;
      j_40 = t;
      {
        ATerm w_105 = NULL;
        t = SSLgetAnnotations(not_null(q_105));
        {
          w_105 = t;
          if(((s_105 != NULL) && (s_105 != w_105)))
            _fail(w_105);
          else
            s_105 = w_105;
        }
      }
      t = j_40;
      {
        ATerm y_105 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_105));
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
ATerm need_help_1 (ATerm t, ATerm h_128 (ATerm))
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_40;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm n_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
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
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(q_40);
                  }
                else
                  {
                    t = p_40;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  t = h_128(t);
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
  ATerm h_106 = NULL;
  h_106 = t;
  {
    ATerm r_40;
    r_40 = t;
    {
      t = term_s_40;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_40, term_t_40, not_null(h_106));
          t = table_put_0(t);
        }
      }
    }
    t = r_40;
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
  ATerm t_106 = NULL;
  t_106 = t;
  t = SSL_exit(not_null(t_106));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_130 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_113 (ATerm))
{
  ATerm w_106 (ATerm t)
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = Cons_2(t, g_113, w_106);
      }
    return(t);
  }
  t = w_106(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  f_107 = t;
  c_107 :
  if(((ATgetType(f_107) == AT_LIST) && !(ATisEmpty(f_107))))
    {
      d_107 = ATgetFirst((ATermList) f_107);
      e_107 = (ATerm) ATgetNext((ATermList) f_107);
      {
        ATerm i_107 = NULL;
        t = not_null(e_107);
        {
          ATerm w_40;
          w_40 = t;
          {
            ATerm j_107 = NULL,l_107 = NULL,n_107 = NULL;
            ATerm x_40;
            x_40 = t;
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
            t = x_40;
            {
              ATerm m_107 = NULL;
              t = not_null(d_107);
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
          t = w_40;
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(i_107);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_107) == AT_LIST) && ATisEmpty(f_107)))
        {
          {
            t = term_j_27;
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
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_130 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_93 (ATerm))
{
  ATerm a_108 = NULL,b_108 = NULL;
  a_108 = t;
  z_107 :
  if(match_cons(a_108, sym_Program_1))
    {
      b_108 = ATgetArgument(a_108, 0);
      {
        ATerm e_108 = NULL,g_108 = NULL;
        ATerm f_108 = NULL;
        t = SSLgetAnnotations(not_null(a_108));
        {
          f_108 = t;
          if(((e_108 != NULL) && (e_108 != f_108)))
            _fail(f_108);
          else
            e_108 = f_108;
        }
        {
          t = not_null(b_108);
          {
            ATerm i_108 = NULL;
            t = q_93(t);
            {
              g_108 = t;
              {
                ATerm j_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_108)), not_null(e_108));
                {
                  j_108 = t;
                  if(((i_108 != NULL) && (i_108 != j_108)))
                    _fail(j_108);
                  else
                    i_108 = j_108;
                }
                t = not_null(i_108);
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
  ATerm s_108 = NULL;
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_108 = NULL;
      t = term_v_39;
      {
        t = get_config_0(t);
        {
          v_108 = t;
          if(((s_108 != NULL) && (s_108 != v_108)))
            _fail(v_108);
          else
            s_108 = v_108;
        }
      }
      ;
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm w_108 = NULL;
            w_108 = t;
            if(((s_108 != NULL) && (s_108 != w_108)))
              _fail(w_108);
            else
              s_108 = w_108;
            return(t);
          }
          t = Program_1(t, i_5);
          return(t);
        }
        t = option_defined_1(t, h_5);
      }
    }
  {
    ATerm m_5 (ATerm t)
    {
      ATerm n_5 (ATerm t)
      {
        t = not_null(s_108);
        return(t);
      }
      t = short_description_1(t, n_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_5);
    {
      t = term_a_41;
      {
        t = echo_0(t);
        {
          t = term_d_41;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm x_108 = NULL;
                  ATerm y_108 = NULL;
                  y_108 = t;
                  if(((x_108 != NULL) && (x_108 != y_108)))
                    _fail(y_108);
                  else
                    x_108 = y_108;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_108)), term_e_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm z_108 = NULL;
                    ATerm a_109 = NULL;
                    ATerm q_5 (ATerm t)
                    {
                      t = not_null(s_108);
                      return(t);
                    }
                    t = long_description_1(t, q_5);
                    {
                      a_109 = t;
                      if(((z_108 != NULL) && (z_108 != a_109)))
                        _fail(a_109);
                      else
                        z_108 = a_109;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_108)), term_f_41);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_5);
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
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_93 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym_Undefined_1))
    {
      l_109 = ATgetArgument(k_109, 0);
      {
        ATerm o_109 = NULL,q_109 = NULL;
        ATerm p_109 = NULL;
        t = SSLgetAnnotations(not_null(k_109));
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
        {
          t = not_null(l_109);
          {
            ATerm s_109 = NULL;
            t = r_93(t);
            {
              q_109 = t;
              {
                ATerm t_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_109)), not_null(o_109));
                {
                  t_109 = t;
                  if(((s_109 != NULL) && (s_109 != t_109)))
                    _fail(t_109);
                  else
                    s_109 = t_109;
                }
                t = not_null(s_109);
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
ATerm fetch_1 (ATerm t, ATerm q_113 (ATerm))
{
  ATerm y_109 (ATerm t)
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_113, _id);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = Cons_2(t, _id, y_109);
      }
    return(t);
  }
  t = y_109(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_129 (ATerm))
{
  t = fetch_1(t, v_129);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  a_110 = t;
  z_109 :
  if(((ATgetType(a_110) == AT_LIST) && ATisEmpty(a_110)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_110) == AT_LIST) && !(ATisEmpty(a_110))))
        {
          b_110 = ATgetFirst((ATermList) a_110);
          c_110 = (ATerm) ATgetNext((ATermList) a_110);
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
  ATerm k_41;
  k_41 = t;
  {
    ATerm f_110 = NULL;
    ATerm i_110 = NULL;
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        {
          ATerm g_110 = NULL;
          ATerm h_110 = NULL;
          h_110 = t;
          if(((g_110 != NULL) && (g_110 != h_110)))
            _fail(h_110);
          else
            g_110 = h_110;
          t = (ATerm) ATinsert(ATempty, not_null(g_110));
        }
      }
    {
      i_110 = t;
      if(((f_110 != NULL) && (f_110 != i_110)))
        _fail(i_110);
      else
        f_110 = i_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_33, not_null(f_110));
      t = printnl_0(t);
    }
  }
  t = k_41;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_v_39;
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
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_110 = NULL;
  p_110 = t;
  o_110 :
  if(match_cons(p_110, sym_Help_0))
    {
      ATerm r_110 = NULL,t_110 = NULL;
      ATerm p_41;
      p_41 = t;
      {
        ATerm s_110 = NULL;
        t = SSLgetAnnotations(not_null(p_110));
        {
          s_110 = t;
          if(((r_110 != NULL) && (r_110 != s_110)))
            _fail(s_110);
          else
            r_110 = s_110;
        }
      }
      t = p_41;
      {
        ATerm u_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_110));
        {
          u_110 = t;
          if(((t_110 != NULL) && (t_110 != u_110)))
            _fail(u_110);
          else
            t_110 = u_110;
        }
        t = not_null(t_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_105(t);
      ;
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 (ATerm t)
      {
        ATerm a_111 = NULL;
        a_111 = t;
        y_110 :
        if(!(match_string(a_111, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_v_41;
        t = set_config_0(t);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_w_41;
        return(t);
      }
      t = Option_3(t, r_5, s_5, t_5);
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm b_111 = NULL;
          b_111 = t;
          z_110 :
          if(!(match_string(b_111, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_v_41;
          {
            t = set_config_0(t);
            {
              t = term_y_41;
              t = set_config_0(t);
            }
          }
          t = term_z_41;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_a_42;
          return(t);
        }
        t = Option_3(t, u_5, v_5, x_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym__2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      t = SSL_table_get(not_null(f_111), not_null(g_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  n_111 = t;
  m_111 :
  if(match_cons(n_111, sym__3))
    {
      o_111 = ATgetArgument(n_111, 0);
      p_111 = ATgetArgument(n_111, 1);
      q_111 = ATgetArgument(n_111, 2);
      {
        ATerm b_42;
        b_42 = t;
        {
          ATerm u_111 = NULL;
          ATerm v_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_111), not_null(p_111));
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_42);
              }
            else
              {
                t = c_42;
                t = (ATerm) ATempty;
              }
            {
              v_111 = t;
              if(((u_111 != NULL) && (u_111 != v_111)))
                _fail(v_111);
              else
                u_111 = v_111;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_111), not_null(p_111), (ATerm) ATinsert(CheckATermList(not_null(u_111)), not_null(q_111)));
            t = table_put_0(t);
          }
        }
        t = b_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_131 (ATerm))
{
  ATerm z_111 = NULL;
  ATerm a_112 = NULL;
  t = term_j_27;
  {
    t = a_131(t);
    {
      a_112 = t;
      if(((z_111 != NULL) && (z_111 != a_112)))
        _fail(a_112);
      else
        z_111 = a_112;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_41, term_c_41, not_null(z_111));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
  g_112 = t;
  f_112 :
  if(match_string(g_112, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(g_112) == AT_LIST) && !(ATisEmpty(g_112))))
        {
          h_112 = ATgetFirst((ATermList) g_112);
          i_112 = (ATerm) ATgetNext((ATermList) g_112);
          {
            ATerm l_112 = NULL;
            ATerm e_42;
            e_42 = t;
            {
              t = not_null(h_112);
              t = a_0(t);
            }
            t = e_42;
            {
              ATerm m_112 = NULL;
              t = term_j_27;
              {
                t = b_0(t);
                {
                  m_112 = t;
                  if(((l_112 != NULL) && (l_112 != m_112)))
                    _fail(m_112);
                  else
                    l_112 = m_112;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_112)), not_null(l_112));
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
  ATerm y_5 (ATerm t)
  {
    ATerm r_112 = NULL;
    r_112 = t;
    q_112 :
    if(!(match_string(r_112, "--help")))
      {
        if(!(match_string(r_112, "-h")))
          {
            if(!(match_string(r_112, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_f_42;
    {
      t = set_config_0(t);
      t = term_g_42;
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_h_42;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL;
  u_112 = t;
  t_112 :
  if(((ATgetType(u_112) == AT_LIST) && !(ATisEmpty(u_112))))
    {
      v_112 = ATgetFirst((ATermList) u_112);
      w_112 = (ATerm) ATgetNext((ATermList) u_112);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_112)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_112)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  i_113 :
  if(((ATgetType(j_113) == AT_LIST) && !(ATisEmpty(j_113))))
    {
      k_113 = ATgetFirst((ATermList) j_113);
      l_113 = (ATerm) ATgetNext((ATermList) j_113);
      {
        ATerm p_113 = NULL,t_113 = NULL;
        ATerm s_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          s_113 = t;
          if(((p_113 != NULL) && (p_113 != s_113)))
            _fail(s_113);
          else
            p_113 = s_113;
        }
        {
          t = not_null(k_113);
          {
            ATerm v_113 = NULL;
            t = d_84(t);
            {
              t_113 = t;
              {
                t = not_null(l_113);
                {
                  ATerm z_113 = NULL;
                  t = e_84(t);
                  {
                    v_113 = t;
                    {
                      ATerm a_114 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_113)), not_null(t_113)), not_null(p_113));
                      {
                        a_114 = t;
                        if(((z_113 != NULL) && (z_113 != a_114)))
                          _fail(a_114);
                        else
                          z_113 = a_114;
                      }
                      t = not_null(z_113);
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
  ATerm k_114 = NULL;
  k_114 = t;
  j_114 :
  if(((ATgetType(k_114) == AT_LIST) && ATisEmpty(k_114)))
    {
      {
        ATerm m_114 = NULL,o_114 = NULL;
        ATerm i_42;
        i_42 = t;
        {
          ATerm n_114 = NULL;
          t = SSLgetAnnotations(not_null(k_114));
          {
            n_114 = t;
            if(((m_114 != NULL) && (m_114 != n_114)))
              _fail(n_114);
            else
              m_114 = n_114;
          }
        }
        t = i_42;
        {
          ATerm p_114 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_114));
          {
            p_114 = t;
            if(((o_114 != NULL) && (o_114 != p_114)))
              _fail(p_114);
            else
              o_114 = p_114;
          }
          t = not_null(o_114);
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
  ATerm v_114 = NULL,w_114 = NULL,x_114 = NULL;
  v_114 = t;
  u_114 :
  if(match_cons(v_114, sym__2))
    {
      w_114 = ATgetArgument(v_114, 0);
      x_114 = ATgetArgument(v_114, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_7, not_null(w_114), not_null(x_114));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_130 (ATerm))
{
  ATerm j_42;
  j_42 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_k_42;
      t = y_130(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = j_42;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm f_115 = NULL;
      ATerm l_42;
      l_42 = t;
      {
        ATerm d_115 = NULL;
        ATerm e_115 = NULL;
        e_115 = t;
        if(((d_115 != NULL) && (d_115 != e_115)))
          _fail(e_115);
        else
          d_115 = e_115;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_39, not_null(d_115));
          t = set_config_0(t);
        }
      }
      t = l_42;
      {
        ATerm g_115 = NULL;
        g_115 = t;
        if(((f_115 != NULL) && (f_115 != g_115)))
          _fail(g_115);
        else
          f_115 = g_115;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_115));
      }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm m_42 = t;
      int n_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_42 = t;
          int p_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_42);
            }
          else
            {
              t = o_42;
              {
                t = y_130(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          ;
          LocalPopChoice(n_42);
        }
      else
        {
          t = m_42;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_6, h_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
  ATerm q_42;
  q_42 = t;
  {
    ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL;
    p_115 = t;
    l_115 :
    if(match_cons(p_115, sym__3))
      {
        q_115 = ATgetArgument(p_115, 0);
        r_115 = ATgetArgument(p_115, 1);
        s_115 = ATgetArgument(p_115, 2);
        {
          if(((m_115 != NULL) && (m_115 != q_115)))
            _fail(q_115);
          else
            m_115 = q_115;
          {
            if(((n_115 != NULL) && (n_115 != r_115)))
              _fail(r_115);
            else
              n_115 = r_115;
            {
              if(((o_115 != NULL) && (o_115 != s_115)))
                _fail(s_115);
              else
                o_115 = s_115;
              t = SSL_table_put(not_null(m_115), not_null(n_115), not_null(o_115));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_42;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_130 (ATerm))
{
  ATerm v_115 = NULL;
  ATerm r_42;
  r_42 = t;
  {
    t = term_s_42;
    t = table_put_0(t);
  }
  t = r_42;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm t_42 = t;
      int u_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_130(t);
          ;
          LocalPopChoice(u_42);
        }
      else
        {
          t = t_42;
          {
            ATerm v_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(w_42);
              }
            else
              {
                t = v_42;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, i_6);
    {
      ATerm l_6 (ATerm t)
      {
        ATerm x_42 = t;
        int y_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_42;
            z_42 = t;
            {
              ATerm a_43 = t;
              int b_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_40;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(b_43);
                }
              else
                {
                  t = a_43;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_42;
            {
              t = system_usage_0(t);
              {
                t = term_b_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_42);
          }
        else
          {
            t = x_42;
            {
              ATerm c_43 = t;
              int d_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_43;
                  e_43 = t;
                  {
                    t = term_u_41;
                    t = get_config_0(t);
                  }
                  t = e_43;
                  {
                    t = system_about_0(t);
                    {
                      t = term_b_17;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(d_43);
                }
              else
                {
                  t = c_43;
                  {
                    ATerm n_6 (ATerm t)
                    {
                      ATerm o_6 (ATerm t)
                      {
                        ATerm w_115 = NULL;
                        w_115 = t;
                        if(((v_115 != NULL) && (v_115 != w_115)))
                          _fail(w_115);
                        else
                          v_115 = w_115;
                        return(t);
                      }
                      t = Undefined_1(t, o_6);
                      return(t);
                    }
                    t = option_defined_1(t, n_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_115)), term_f_43));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_k_17;
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
      t = try_1(t, l_6);
      {
        ATerm g_43;
        g_43 = t;
        {
          t = term_b_41;
          t = table_destroy_0(t);
        }
        t = g_43;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm))
{
  t = parse_options_1(t, j_128);
  {
    t = store_options_0(t);
    {
      t = l_128(t);
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_128);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            {
              ATerm j_43 = t;
              int k_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_128(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(k_43);
                }
              else
                {
                  t = j_43;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_127(t);
        ;
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_127);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, a_128, b_128, y_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm u_127 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      ATerm n_43;
      n_43 = t;
      {
        ATerm z_115 = NULL;
        ATerm a_116 = NULL;
        t = term_v_39;
        {
          t = get_config_0(t);
          {
            a_116 = t;
            if(((z_115 != NULL) && (z_115 != a_116)))
              _fail(a_116);
            else
              z_115 = a_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATempty, not_null(z_115)));
          t = printnl_0(t);
        }
      }
      t = n_43;
      return(t);
    }
    t = if_verbose2_1(t, a_7);
    return(t);
  }
  t = iowrap_4(t, s_127, t_127, u_127, z_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_127 (ATerm), ATerm r_127 (ATerm))
{
  t = iowrap_3(t, q_127, r_127, default_usage_0);
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
