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
ATerm term_w_46;
ATerm term_j_46;
ATerm term_b_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_d_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_b_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_f_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_u_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_u_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_c_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_n_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_c_13;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_f_8;
ATerm term_e_8;
void init_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Id_1, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Id_1, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_9, (ATerm) ATempty);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_9, term_a_10);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_18);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_1, term_d_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_IntConst_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Id_1, term_m_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Id_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Id_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Id_1, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, term_p_22);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Id_1, term_o_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Id_1, term_t_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_24, (ATerm) ATempty);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Equal_2, term_e_24, term_l_20);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Id_1, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Id_1, term_y_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, term_r_23);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_25);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Id_1, term_c_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Equal_2, term_e_25, term_l_20);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_25, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Id_1, term_j_25);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_25);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_26, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Id_1, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_28, (ATerm) ATempty);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_28, term_a_10);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Id_1, term_u_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Id_1, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Id_1, term_a_29);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Id_1, term_c_29);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Id_1, term_j_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Id_1, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Id_1, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Id_1, term_s_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_30, (ATerm) ATempty);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_30, term_a_10);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Id_1, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Id_1, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_31, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_31, term_a_10);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Id_1, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_31, term_a_10);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Id_1, term_q_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Id_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Id_1, term_u_31);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_28, term_r_23);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Return_1, term_r_23);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Id_1, term_m_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_r_23, term_a_10);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, term_t_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Id_1, term_d_34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Id_1, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Stat_1, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Id_1, term_j_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_35, (ATerm) ATempty);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_35, (ATerm) ATempty);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Some_1, term_k_35);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_9, term_l_35);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_38);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_38, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_SDefT_4, term_t_38, (ATerm)ATempty, (ATerm)ATempty, term_w_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Op_2, term_r_39, (ATerm) ATempty);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_y_40, term_h_30);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_30);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__2, term_o_42, term_a_34);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_a_34);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_t_44);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym__2, term_l_45, term_a_34);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym__2, term_o_45, term_a_34);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_a_34);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__3, term_s_44, term_t_44, (ATerm) ATempty);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0_0 (ATerm);
ATerm Option_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm DeclareTermId_0_0 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_108 (ATerm), ATerm);
ATerm LiftCompound_0_0 (ATerm);
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_106 (ATerm), ATerm);
ATerm Snd_0_0 (ATerm);
ATerm CachedTerms_0_0 (ATerm);
ATerm BuildDefault_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm Real_1_0 (ATerm v_2 (ATerm), ATerm);
ATerm Str_1_0 (ATerm u_2 (ATerm), ATerm);
ATerm Int_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm r_2 (ATerm), ATerm s_2 (ATerm), ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm Initialized_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm construct_term_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm real_to_string_0_0 (ATerm);
ATerm Nil_T_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm z_119 (ATerm), ATerm);
ATerm Var_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm PlainBody_0_0 (ATerm);
ATerm Escape_linefeed_0_0 (ATerm);
ATerm Escape_backslash_0_0 (ATerm);
ATerm Escape_double_quote_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm TraceAllFuns_0_0 (ATerm);
ATerm TraceFun_0_0 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm v_122 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm d_134 (ATerm), ATerm);
ATerm ConstructorName_0_0 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm r_122 (ATerm, ATerm (ATerm)), ATerm);
ATerm cify_0_0 (ATerm);
ATerm foldr_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm Arity_0_0 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_133 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_133 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm);
ATerm assert_1_0 (ATerm b_134 (ATerm), ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_113 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_126 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_125 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_127 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm x_124 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm _2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm);
ATerm crush_2_0 (ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_126 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm y_130 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm x_130 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_113 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_129 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_131 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm z_130 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm);
ATerm s2c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,w_5 = NULL;
  ATerm g_6 (ATerm t)
  {
    ATerm x_5 = NULL,y_5 = NULL,c_6 = NULL;
    t = not_null(l_5);
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    t = not_null(w_5);
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    t = not_null(k_5);
    {
      ATerm d_6 = NULL,f_6 = NULL;
      ATerm i_6 (ATerm t)
      {
        t = not_null(f_6);
        if(((c_6 != NULL) && (c_6 != t)))
          _fail(t);
        else
          c_6 = t;
        t = not_null(f_6);
        return(t);
      }
      ATerm e_6 = NULL;
      ATerm h_6 (ATerm t)
      {
        t = not_null(e_6);
        if(((d_6 != NULL) && (d_6 != t)))
          _fail(t);
        else
          d_6 = t;
        t = not_null(e_6);
        return(t);
      }
      t = not_null(x_5);
      {
        ATerm u_7 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = u_7;
            t = (ATerm) ATempty;
          }
        if(((e_6 != NULL) && (e_6 != t)))
          _fail(t);
        else
          e_6 = t;
        t = h_6(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(y_5));
      t = conc_0_0(t);
      if(((f_6 != NULL) && (f_6 != t)))
        _fail(t);
      else
        f_6 = t;
      t = i_6(t);
      t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(x_5), not_null(c_6));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = not_null(k_5);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      t = g_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Option_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = term_f_8;
    return(t);
  }
  t = Option_3_0(c_130, d_130, m_0, t);
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        ATerm p_6 = NULL;
        if(((p_6 != NULL) && (p_6 != t)))
          _fail(t);
        else
          p_6 = t;
        t = not_null(p_6);
        if(match_string(t, "--trace-all   trace all strategies"))
          {
            t = not_null(p_6);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        t = term_s_8;
        {
          ATerm u_0 (ATerm t)
          {
            t = term_t_8;
            return(t);
          }
          t = debug_1_0(u_0, t);
          {
            ATerm c_9;
            c_9 = t;
            t = term_f_9;
            {
              ATerm v_0 (ATerm t)
              {
                t = term_g_9;
                return(t);
              }
              t = assert_1_0(v_0, t);
            }
            t = c_9;
          }
        }
        return(t);
      }
      t = Option_2_0(s_0, t_0, t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm q_6 = NULL;
              if(((q_6 != NULL) && (q_6 != t)))
                _fail(t);
              else
                q_6 = t;
              t = not_null(q_6);
              if(match_string(t, "-t"))
                {
                  t = not_null(q_6);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              ATerm r_6 = NULL;
              ATerm y_6 (ATerm t)
              {
                ATerm s_6 = NULL;
                t = not_null(r_6);
                if(((s_6 != NULL) && (s_6 != t)))
                  _fail(t);
                else
                  s_6 = t;
                t = not_null(r_6);
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), term_k_9);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_l_9;
                    return(t);
                  }
                  t = assert_1_0(b_1, t);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(s_6));
                return(t);
              }
              if(((r_6 != NULL) && (r_6 != t)))
                _fail(t);
              else
                r_6 = t;
              t = y_6(t);
              return(t);
            }
            ATerm z_0 (ATerm t)
            {
              t = term_m_9;
              return(t);
            }
            t = ArgOption_3_0(x_0, y_0, z_0, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm c_1 (ATerm t)
              {
                ATerm t_6 = NULL;
                if(((t_6 != NULL) && (t_6 != t)))
                  _fail(t);
                else
                  t_6 = t;
                t = not_null(t_6);
                if(match_string(t, "--C-include"))
                  {
                    t = not_null(t_6);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                ATerm w_6 = NULL;
                ATerm n_9;
                n_9 = t;
                {
                  ATerm u_6 = NULL;
                  ATerm v_6 = NULL;
                  ATerm z_6 (ATerm t)
                  {
                    t = not_null(v_6);
                    if(((u_6 != NULL) && (u_6 != t)))
                      _fail(t);
                    else
                      u_6 = t;
                    t = not_null(v_6);
                    return(t);
                  }
                  if(((v_6 != NULL) && (v_6 != t)))
                    _fail(t);
                  else
                    v_6 = t;
                  t = z_6(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_o_9, (ATerm) ATinsert(ATempty, not_null(u_6)));
                  t = post_extend_config_0_0(t);
                }
                t = n_9;
                {
                  ATerm x_6 = NULL;
                  ATerm a_7 (ATerm t)
                  {
                    t = not_null(x_6);
                    if(((w_6 != NULL) && (w_6 != t)))
                      _fail(t);
                    else
                      w_6 = t;
                    t = not_null(x_6);
                    return(t);
                  }
                  if(((x_6 != NULL) && (x_6 != t)))
                    _fail(t);
                  else
                    x_6 = t;
                  t = a_7(t);
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(w_6));
                }
                return(t);
              }
              ATerm e_1 (ATerm t)
              {
                t = term_p_9;
                return(t);
              }
              t = ArgOption_3_0(c_1, d_1, e_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  ATerm k_7 (ATerm t)
  {
    ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
    t = not_null(e_7);
    if(((h_7 != NULL) && (h_7 != t)))
      _fail(t);
    else
      h_7 = t;
    t = not_null(f_7);
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    t = not_null(g_7);
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_7)), term_q_9, not_null(i_7))));
    return(t);
  }
  if(((d_7 != NULL) && (d_7 != t)))
    _fail(t);
  else
    d_7 = t;
  t = not_null(d_7);
  if(match_cons(t, sym__3))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
      g_7 = ATgetArgument(t, 2);
      t = k_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm r_7 (ATerm t)
  {
    ATerm o_7 = NULL,p_7 = NULL;
    t = not_null(n_7);
    if(((o_7 != NULL) && (o_7 != t)))
      _fail(t);
    else
      o_7 = t;
    t = not_null(n_7);
    {
      ATerm q_7 = NULL;
      ATerm s_7 (ATerm t)
      {
        t = not_null(q_7);
        if(((p_7 != NULL) && (p_7 != t)))
          _fail(t);
        else
          p_7 = t;
        t = not_null(q_7);
        return(t);
      }
      t = not_null(o_7);
      t = map_1_0(InitTermId_0_0, t);
      t = concat_0_0(t);
      t = reverse_0_0(t);
      if(((q_7 != NULL) && (q_7 != t)))
        _fail(t);
      else
        q_7 = t;
      t = s_7(t);
      t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_u_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_7)));
    }
    return(t);
  }
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
  t = r_7(t);
  return(t);
}
ATerm DeclareTermId_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  ATerm c_8 (ATerm t)
  {
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
    t = not_null(w_7);
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    t = not_null(x_7);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = not_null(y_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_8)), term_a_10)));
    return(t);
  }
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = not_null(v_7);
  if(match_cons(t, sym__3))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
      y_7 = ATgetArgument(t, 2);
      t = c_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm g_8 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      t = (ATerm) ATempty;
    }
  {
    ATerm h_8 = NULL,j_8 = NULL,l_8 = NULL;
    ATerm o_8 (ATerm t)
    {
      t = not_null(l_8);
      if(((g_8 != NULL) && (g_8 != t)))
        _fail(t);
      else
        g_8 = t;
      t = not_null(l_8);
      return(t);
    }
    ATerm d_10;
    d_10 = t;
    {
      ATerm i_8 = NULL;
      ATerm m_8 (ATerm t)
      {
        t = not_null(i_8);
        if(((h_8 != NULL) && (h_8 != t)))
          _fail(t);
        else
          h_8 = t;
        t = not_null(i_8);
        return(t);
      }
      t = map_1_0(DeclareTermId_0_0, t);
      if(((i_8 != NULL) && (i_8 != t)))
        _fail(t);
      else
        i_8 = t;
      t = m_8(t);
    }
    t = d_10;
    {
      ATerm k_8 = NULL;
      ATerm n_8 (ATerm t)
      {
        t = not_null(k_8);
        if(((j_8 != NULL) && (j_8 != t)))
          _fail(t);
        else
          j_8 = t;
        t = not_null(k_8);
        return(t);
      }
      t = InitTermIds_0_0(t);
      if(((k_8 != NULL) && (k_8 != t)))
        _fail(t);
      else
        k_8 = t;
      t = n_8(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), (ATerm) ATinsert(ATempty, not_null(j_8)));
      t = conc_0_0(t);
      if(((l_8 != NULL) && (l_8 != t)))
        _fail(t);
      else
        l_8 = t;
      t = o_8(t);
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(g_8));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_108(t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = SRTS_one(p_8, t);
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm LiftCompound_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  ATerm b_9 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL;
    t = not_null(x_8);
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = not_null(y_8);
    if(((a_9 != NULL) && (a_9 != t)))
      _fail(t);
    else
      a_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(a_9));
    t = conc_0_0(t);
    return(t);
  }
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = not_null(u_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_8 = ATgetFirst((ATermList) t);
      y_8 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(v_8);
      if(match_cons(t, sym_Compound_2))
        {
          w_8 = ATgetArgument(t, 0);
          x_8 = ATgetArgument(t, 1);
          t = not_null(w_8);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_9(t);
            }
          else
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
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        t = listbu1_1_0(w_2, t);
        return(t);
      }
      t = Cons_2_0(_id, f_1, t);
      t = try_1_0(w_2, t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = w_2(t);
    }
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  ATerm t_11 (ATerm t)
  {
    ATerm w_10 = NULL,x_10 = NULL;
    t = not_null(q_10);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    t = not_null(k_10);
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(w_10)), not_null(x_10));
    return(t);
  }
  ATerm u_11 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL;
    t = not_null(q_10);
    if(((y_10 != NULL) && (y_10 != t)))
      _fail(t);
    else
      y_10 = t;
    t = not_null(r_10);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(y_10), not_null(z_10));
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL;
    t = not_null(o_10);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = not_null(r_10);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(b_11));
    t = conc_0_0(t);
    return(t);
  }
  ATerm w_11 (ATerm t)
  {
    ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
    t = not_null(q_10);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = not_null(r_10);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = not_null(p_10);
    {
      ATerm f_11 = NULL;
      ATerm z_11 (ATerm t)
      {
        t = not_null(f_11);
        if(((e_11 != NULL) && (e_11 != t)))
          _fail(t);
        else
          e_11 = t;
        t = not_null(f_11);
        return(t);
      }
      t = not_null(d_11);
      t = listbu1_1_0(LiftCompound_0_0, t);
      if(((f_11 != NULL) && (f_11 != t)))
        _fail(t);
      else
        f_11 = t;
      t = z_11(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(c_11), not_null(e_11));
    }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
    t = not_null(q_10);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    t = not_null(t_10);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    t = not_null(u_10);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = not_null(p_10);
    {
      ATerm k_11 = NULL;
      ATerm a_12 (ATerm t)
      {
        t = not_null(k_11);
        if(((j_11 != NULL) && (j_11 != t)))
          _fail(t);
        else
          j_11 = t;
        t = not_null(k_11);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(h_11));
      t = conc_0_0(t);
      if(((k_11 != NULL) && (k_11 != t)))
        _fail(t);
      else
        k_11 = t;
      t = a_12(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(j_11), not_null(i_11));
    }
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL;
    t = not_null(q_10);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(t_10);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = not_null(u_10);
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    t = not_null(v_10);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = not_null(p_10);
    {
      ATerm i_10;
      i_10 = t;
      {
        ATerm q_11 = NULL;
        ATerm b_12 (ATerm t)
        {
          t = not_null(q_11);
          if(((p_11 != NULL) && (p_11 != t)))
            _fail(t);
          else
            p_11 = t;
          t = not_null(q_11);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(m_11));
        t = conc_0_0(t);
        if(((q_11 != NULL) && (q_11 != t)))
          _fail(t);
        else
          q_11 = t;
        t = b_12(t);
      }
      t = i_10;
      {
        ATerm s_11 = NULL;
        ATerm c_12 (ATerm t)
        {
          t = not_null(s_11);
          if(((r_11 != NULL) && (r_11 != t)))
            _fail(t);
          else
            r_11 = t;
          t = not_null(s_11);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), not_null(o_11));
        t = conc_0_0(t);
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = c_12(t);
        t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(p_11), not_null(r_11));
      }
    }
    return(t);
  }
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = not_null(p_10);
  if(match_cons(t, sym_IfElse_3))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      k_10 = ATgetArgument(t, 2);
      t = not_null(k_10);
      if(match_cons(t, sym_Compound_2))
        {
          l_10 = ATgetArgument(t, 0);
          m_10 = ATgetArgument(t, 1);
          t = not_null(m_10);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(l_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(r_10);
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_10 = ATgetArgument(t, 0);
                      v_10 = ATgetArgument(t, 1);
                      t = not_null(v_10);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(s_10);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              ATerm j_10 = t;
                              int e_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_11(t);
                                  ;
                                  LocalPopChoice(e_12);
                                }
                              else
                                {
                                  t = j_10;
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
                          t = not_null(s_10);
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
                  t = not_null(r_10);
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_10 = ATgetArgument(t, 0);
                      v_10 = ATgetArgument(t, 1);
                      t = not_null(s_10);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(v_10);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
              t = not_null(r_10);
              if(match_cons(t, sym_Compound_2))
                {
                  s_10 = ATgetArgument(t, 0);
                  v_10 = ATgetArgument(t, 1);
                  t = not_null(s_10);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(v_10);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
          t = not_null(r_10);
          if(match_cons(t, sym_Compound_2))
            {
              s_10 = ATgetArgument(t, 0);
              v_10 = ATgetArgument(t, 1);
              t = not_null(s_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(v_10);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_10 = ATgetFirst((ATermList) t);
          r_10 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(q_10);
          if(match_cons(t, sym_Compound_2))
            {
              n_10 = ATgetArgument(t, 0);
              o_10 = ATgetArgument(t, 1);
              t = not_null(n_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
          if(match_cons(t, sym_Compound_2))
            {
              q_10 = ATgetArgument(t, 0);
              r_10 = ATgetArgument(t, 1);
              t = not_null(r_10);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_10 = ATgetFirst((ATermList) t);
                  v_10 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(v_10);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(s_10);
                      if(match_cons(t, sym_Compound_2))
                        {
                          t_10 = ATgetArgument(t, 0);
                          u_10 = ATgetArgument(t, 1);
                          {
                            ATerm f_12 = t;
                            int g_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(g_12);
                              }
                            else
                              {
                                t = f_12;
                                {
                                  ATerm h_12 = t;
                                  int i_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_11(t);
                                      ;
                                      LocalPopChoice(i_12);
                                    }
                                  else
                                    {
                                      t = h_12;
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
                      t = not_null(s_10);
                      if(match_cons(t, sym_Compound_2))
                        {
                          t_10 = ATgetArgument(t, 0);
                          u_10 = ATgetArgument(t, 1);
                          {
                            ATerm j_12 = t;
                            int k_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_11(t);
                                ;
                                LocalPopChoice(k_12);
                              }
                            else
                              {
                                t = j_12;
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
ATerm repeat_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = t_106(t);
      t = d_12(t);
      return(t);
    }
    t = try_1_0(g_1, t);
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm z_12 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
    t = not_null(l_12);
    if(((m_12 != NULL) && (m_12 != t)))
      _fail(t);
    else
      m_12 = t;
    t = not_null(l_12);
    {
      ATerm q_12 = NULL;
      ATerm a_13 (ATerm t)
      {
        ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
        ATerm b_13 (ATerm t)
        {
          t = not_null(v_12);
          if(((n_12 != NULL) && (n_12 != t)))
            _fail(t);
          else
            n_12 = t;
          t = not_null(x_12);
          if(((p_12 != NULL) && (p_12 != t)))
            _fail(t);
          else
            p_12 = t;
          t = not_null(y_12);
          if(((o_12 != NULL) && (o_12 != t)))
            _fail(t);
          else
            o_12 = t;
          t = not_null(s_12);
          return(t);
        }
        t = not_null(q_12);
        if(((r_12 != NULL) && (r_12 != t)))
          _fail(t);
        else
          r_12 = t;
        t = not_null(q_12);
        t = SSL_explode_term(not_null(r_12));
        if(((s_12 != NULL) && (s_12 != t)))
          _fail(t);
        else
          s_12 = t;
        t = not_null(s_12);
        if(match_cons(t, sym__2))
          {
            t_12 = ATgetArgument(t, 0);
            u_12 = ATgetArgument(t, 1);
            t = not_null(t_12);
            if(match_string(t, ""))
              {
                t = not_null(u_12);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_12 = ATgetFirst((ATermList) t);
                    w_12 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(w_12);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        x_12 = ATgetFirst((ATermList) t);
                        y_12 = (ATerm) ATgetNext((ATermList) t);
                        t = b_13(t);
                      }
                    else
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
      t = not_null(m_12);
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      t = a_13(t);
      t = not_null(p_12);
    }
    return(t);
  }
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = z_12(t);
  return(t);
}
ATerm CachedTerms_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm m_13 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL;
    t = not_null(g_13);
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    t = not_null(g_13);
    {
      ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
      ATerm n_13 (ATerm t)
      {
        t = not_null(l_13);
        if(((i_13 != NULL) && (i_13 != t)))
          _fail(t);
        else
          i_13 = t;
        t = not_null(j_13);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = rewrite_1_0(h_1, t);
        if(((j_13 != NULL) && (j_13 != t)))
          _fail(t);
        else
          j_13 = t;
        t = not_null(j_13);
        if(match_cons(t, sym_Defined_2))
          {
            k_13 = ATgetArgument(t, 0);
            l_13 = ATgetArgument(t, 1);
            t = not_null(k_13);
            if(match_string(t, "h_0"))
              {
                t = n_13(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(i_13);
    }
    return(t);
  }
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = m_13(t);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  ATerm d_14 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL;
    ATerm f_14 (ATerm t)
    {
      ATerm a_14 = NULL,b_14 = NULL;
      t = not_null(z_13);
      if(((a_14 != NULL) && (a_14 != t)))
        _fail(t);
      else
        a_14 = t;
      t = not_null(z_13);
      {
        ATerm c_14 = NULL;
        ATerm g_14 (ATerm t)
        {
          t = not_null(c_14);
          if(((b_14 != NULL) && (b_14 != t)))
            _fail(t);
          else
            b_14 = t;
          t = not_null(c_14);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(a_14)), not_null(x_13));
        if(((c_14 != NULL) && (c_14 != t)))
          _fail(t);
        else
          c_14 = t;
        t = g_14(t);
        t = not_null(b_14);
      }
      return(t);
    }
    t = not_null(t_13);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = not_null(u_13);
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = not_null(t_13);
    {
      ATerm y_13 = NULL;
      ATerm e_14 (ATerm t)
      {
        t = not_null(y_13);
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = not_null(y_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_13));
      if(((y_13 != NULL) && (y_13 != t)))
        _fail(t);
      else
        y_13 = t;
      t = e_14(t);
      t = not_null(w_13);
      t = j_86(t);
      if(((z_13 != NULL) && (z_13 != t)))
        _fail(t);
      else
        z_13 = t;
      t = f_14(t);
    }
    return(t);
  }
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  t = not_null(t_13);
  if(match_cons(t, sym_BuildDefault_1))
    {
      u_13 = ATgetArgument(t, 0);
      t = d_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Real_1_0 (ATerm v_2 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  ATerm i_15 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL;
    ATerm l_15 (ATerm t)
    {
      ATerm x_14 = NULL,y_14 = NULL;
      t = not_null(w_14);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = not_null(w_14);
      {
        ATerm z_14 = NULL;
        ATerm m_15 (ATerm t)
        {
          t = not_null(z_14);
          if(((y_14 != NULL) && (y_14 != t)))
            _fail(t);
          else
            y_14 = t;
          t = not_null(z_14);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(x_14)), not_null(u_14));
        if(((z_14 != NULL) && (z_14 != t)))
          _fail(t);
        else
          z_14 = t;
        t = m_15(t);
        t = not_null(y_14);
      }
      return(t);
    }
    t = not_null(q_14);
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = not_null(r_14);
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
    t = not_null(q_14);
    {
      ATerm v_14 = NULL;
      ATerm k_15 (ATerm t)
      {
        t = not_null(v_14);
        if(((u_14 != NULL) && (u_14 != t)))
          _fail(t);
        else
          u_14 = t;
        t = not_null(v_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_14));
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = k_15(t);
      t = not_null(t_14);
      t = v_2(t);
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = l_15(t);
    }
    return(t);
  }
  ATerm j_15 (ATerm t)
  {
    ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,e_15 = NULL;
    ATerm o_15 (ATerm t)
    {
      ATerm f_15 = NULL,g_15 = NULL;
      t = not_null(e_15);
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      t = not_null(e_15);
      {
        ATerm h_15 = NULL;
        ATerm p_15 (ATerm t)
        {
          t = not_null(h_15);
          if(((g_15 != NULL) && (g_15 != t)))
            _fail(t);
          else
            g_15 = t;
          t = not_null(h_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(f_15)), not_null(c_15));
        if(((h_15 != NULL) && (h_15 != t)))
          _fail(t);
        else
          h_15 = t;
        t = p_15(t);
        t = not_null(g_15);
      }
      return(t);
    }
    t = not_null(q_14);
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = not_null(r_14);
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = not_null(q_14);
    {
      ATerm d_15 = NULL;
      ATerm n_15 (ATerm t)
      {
        t = not_null(d_15);
        if(((c_15 != NULL) && (c_15 != t)))
          _fail(t);
        else
          c_15 = t;
        t = not_null(d_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_15));
      if(((d_15 != NULL) && (d_15 != t)))
        _fail(t);
      else
        d_15 = t;
      t = n_15(t);
      t = not_null(b_15);
      t = v_2(t);
      if(((e_15 != NULL) && (e_15 != t)))
        _fail(t);
      else
        e_15 = t;
      t = o_15(t);
    }
    return(t);
  }
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = not_null(q_14);
  if(match_cons(t, sym_Real_1))
    {
      r_14 = ATgetArgument(t, 0);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_15(t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = j_15(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1_0 (ATerm u_2 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  ATerm r_16 (ATerm t)
  {
    ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,f_16 = NULL;
    ATerm u_16 (ATerm t)
    {
      ATerm g_16 = NULL,h_16 = NULL;
      t = not_null(f_16);
      if(((g_16 != NULL) && (g_16 != t)))
        _fail(t);
      else
        g_16 = t;
      t = not_null(f_16);
      {
        ATerm i_16 = NULL;
        ATerm v_16 (ATerm t)
        {
          t = not_null(i_16);
          if(((h_16 != NULL) && (h_16 != t)))
            _fail(t);
          else
            h_16 = t;
          t = not_null(i_16);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_16)), not_null(d_16));
        if(((i_16 != NULL) && (i_16 != t)))
          _fail(t);
        else
          i_16 = t;
        t = v_16(t);
        t = not_null(h_16);
      }
      return(t);
    }
    t = not_null(z_15);
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    t = not_null(a_16);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = not_null(z_15);
    {
      ATerm e_16 = NULL;
      ATerm t_16 (ATerm t)
      {
        t = not_null(e_16);
        if(((d_16 != NULL) && (d_16 != t)))
          _fail(t);
        else
          d_16 = t;
        t = not_null(e_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(b_16));
      if(((e_16 != NULL) && (e_16 != t)))
        _fail(t);
      else
        e_16 = t;
      t = t_16(t);
      t = not_null(c_16);
      t = u_2(t);
      if(((f_16 != NULL) && (f_16 != t)))
        _fail(t);
      else
        f_16 = t;
      t = u_16(t);
    }
    return(t);
  }
  ATerm s_16 (ATerm t)
  {
    ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,n_16 = NULL;
    ATerm x_16 (ATerm t)
    {
      ATerm o_16 = NULL,p_16 = NULL;
      t = not_null(n_16);
      if(((o_16 != NULL) && (o_16 != t)))
        _fail(t);
      else
        o_16 = t;
      t = not_null(n_16);
      {
        ATerm q_16 = NULL;
        ATerm y_16 (ATerm t)
        {
          t = not_null(q_16);
          if(((p_16 != NULL) && (p_16 != t)))
            _fail(t);
          else
            p_16 = t;
          t = not_null(q_16);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(o_16)), not_null(l_16));
        if(((q_16 != NULL) && (q_16 != t)))
          _fail(t);
        else
          q_16 = t;
        t = y_16(t);
        t = not_null(p_16);
      }
      return(t);
    }
    t = not_null(z_15);
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = not_null(a_16);
    if(((k_16 != NULL) && (k_16 != t)))
      _fail(t);
    else
      k_16 = t;
    t = not_null(z_15);
    {
      ATerm m_16 = NULL;
      ATerm w_16 (ATerm t)
      {
        t = not_null(m_16);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = not_null(m_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_16));
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = w_16(t);
      t = not_null(k_16);
      t = u_2(t);
      if(((n_16 != NULL) && (n_16 != t)))
        _fail(t);
      else
        n_16 = t;
      t = x_16(t);
    }
    return(t);
  }
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = not_null(z_15);
  if(match_cons(t, sym_Str_1))
    {
      a_16 = ATgetArgument(t, 0);
      {
        ATerm f_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_16(t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = f_13;
            t = s_16(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  ATerm a_18 (ATerm t)
  {
    ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,o_17 = NULL;
    ATerm d_18 (ATerm t)
    {
      ATerm p_17 = NULL,q_17 = NULL;
      t = not_null(o_17);
      if(((p_17 != NULL) && (p_17 != t)))
        _fail(t);
      else
        p_17 = t;
      t = not_null(o_17);
      {
        ATerm r_17 = NULL;
        ATerm e_18 (ATerm t)
        {
          t = not_null(r_17);
          if(((q_17 != NULL) && (q_17 != t)))
            _fail(t);
          else
            q_17 = t;
          t = not_null(r_17);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_17)), not_null(m_17));
        if(((r_17 != NULL) && (r_17 != t)))
          _fail(t);
        else
          r_17 = t;
        t = e_18(t);
        t = not_null(q_17);
      }
      return(t);
    }
    t = not_null(i_17);
    if(((k_17 != NULL) && (k_17 != t)))
      _fail(t);
    else
      k_17 = t;
    t = not_null(j_17);
    if(((l_17 != NULL) && (l_17 != t)))
      _fail(t);
    else
      l_17 = t;
    t = not_null(i_17);
    {
      ATerm n_17 = NULL;
      ATerm c_18 (ATerm t)
      {
        t = not_null(n_17);
        if(((m_17 != NULL) && (m_17 != t)))
          _fail(t);
        else
          m_17 = t;
        t = not_null(n_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_17));
      if(((n_17 != NULL) && (n_17 != t)))
        _fail(t);
      else
        n_17 = t;
      t = c_18(t);
      t = not_null(l_17);
      t = t_2(t);
      if(((o_17 != NULL) && (o_17 != t)))
        _fail(t);
      else
        o_17 = t;
      t = d_18(t);
    }
    return(t);
  }
  ATerm b_18 (ATerm t)
  {
    ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,w_17 = NULL;
    ATerm g_18 (ATerm t)
    {
      ATerm x_17 = NULL,y_17 = NULL;
      t = not_null(w_17);
      if(((x_17 != NULL) && (x_17 != t)))
        _fail(t);
      else
        x_17 = t;
      t = not_null(w_17);
      {
        ATerm z_17 = NULL;
        ATerm h_18 (ATerm t)
        {
          t = not_null(z_17);
          if(((y_17 != NULL) && (y_17 != t)))
            _fail(t);
          else
            y_17 = t;
          t = not_null(z_17);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(x_17)), not_null(u_17));
        if(((z_17 != NULL) && (z_17 != t)))
          _fail(t);
        else
          z_17 = t;
        t = h_18(t);
        t = not_null(y_17);
      }
      return(t);
    }
    t = not_null(i_17);
    if(((s_17 != NULL) && (s_17 != t)))
      _fail(t);
    else
      s_17 = t;
    t = not_null(j_17);
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    t = not_null(i_17);
    {
      ATerm v_17 = NULL;
      ATerm f_18 (ATerm t)
      {
        t = not_null(v_17);
        if(((u_17 != NULL) && (u_17 != t)))
          _fail(t);
        else
          u_17 = t;
        t = not_null(v_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_17));
      if(((v_17 != NULL) && (v_17 != t)))
        _fail(t);
      else
        v_17 = t;
      t = f_18(t);
      t = not_null(t_17);
      t = t_2(t);
      if(((w_17 != NULL) && (w_17 != t)))
        _fail(t);
      else
        w_17 = t;
      t = g_18(t);
    }
    return(t);
  }
  if(((i_17 != NULL) && (i_17 != t)))
    _fail(t);
  else
    i_17 = t;
  t = not_null(i_17);
  if(match_cons(t, sym_Int_1))
    {
      j_17 = ATgetArgument(t, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_18(t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = b_18(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Anno_2_0 (ATerm r_2 (ATerm), ATerm s_2 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  ATerm s_19 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,b_19 = NULL;
    ATerm v_19 (ATerm t)
    {
      ATerm c_19 = NULL,d_19 = NULL;
      ATerm w_19 (ATerm t)
      {
        ATerm e_19 = NULL,f_19 = NULL;
        t = not_null(d_19);
        if(((e_19 != NULL) && (e_19 != t)))
          _fail(t);
        else
          e_19 = t;
        t = not_null(d_19);
        {
          ATerm g_19 = NULL;
          ATerm x_19 (ATerm t)
          {
            t = not_null(g_19);
            if(((f_19 != NULL) && (f_19 != t)))
              _fail(t);
            else
              f_19 = t;
            t = not_null(g_19);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(c_19), not_null(e_19)), not_null(z_18));
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = x_19(t);
          t = not_null(f_19);
        }
        return(t);
      }
      t = not_null(b_19);
      if(((c_19 != NULL) && (c_19 != t)))
        _fail(t);
      else
        c_19 = t;
      t = not_null(y_18);
      t = s_2(t);
      if(((d_19 != NULL) && (d_19 != t)))
        _fail(t);
      else
        d_19 = t;
      t = w_19(t);
      return(t);
    }
    t = not_null(t_18);
    if(((w_18 != NULL) && (w_18 != t)))
      _fail(t);
    else
      w_18 = t;
    t = not_null(u_18);
    if(((x_18 != NULL) && (x_18 != t)))
      _fail(t);
    else
      x_18 = t;
    t = not_null(v_18);
    if(((y_18 != NULL) && (y_18 != t)))
      _fail(t);
    else
      y_18 = t;
    t = not_null(t_18);
    {
      ATerm a_19 = NULL;
      ATerm u_19 (ATerm t)
      {
        t = not_null(a_19);
        if(((z_18 != NULL) && (z_18 != t)))
          _fail(t);
        else
          z_18 = t;
        t = not_null(a_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_18));
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      t = u_19(t);
      t = not_null(x_18);
      t = r_2(t);
      if(((b_19 != NULL) && (b_19 != t)))
        _fail(t);
      else
        b_19 = t;
      t = v_19(t);
    }
    return(t);
  }
  ATerm t_19 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL;
    ATerm z_19 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL;
      ATerm a_20 (ATerm t)
      {
        ATerm p_19 = NULL,q_19 = NULL;
        t = not_null(o_19);
        if(((p_19 != NULL) && (p_19 != t)))
          _fail(t);
        else
          p_19 = t;
        t = not_null(o_19);
        {
          ATerm r_19 = NULL;
          ATerm b_20 (ATerm t)
          {
            t = not_null(r_19);
            if(((q_19 != NULL) && (q_19 != t)))
              _fail(t);
            else
              q_19 = t;
            t = not_null(r_19);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(n_19), not_null(p_19)), not_null(k_19));
          if(((r_19 != NULL) && (r_19 != t)))
            _fail(t);
          else
            r_19 = t;
          t = b_20(t);
          t = not_null(q_19);
        }
        return(t);
      }
      t = not_null(m_19);
      if(((n_19 != NULL) && (n_19 != t)))
        _fail(t);
      else
        n_19 = t;
      t = not_null(j_19);
      t = s_2(t);
      if(((o_19 != NULL) && (o_19 != t)))
        _fail(t);
      else
        o_19 = t;
      t = a_20(t);
      return(t);
    }
    t = not_null(t_18);
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    t = not_null(u_18);
    if(((i_19 != NULL) && (i_19 != t)))
      _fail(t);
    else
      i_19 = t;
    t = not_null(v_18);
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    t = not_null(t_18);
    {
      ATerm l_19 = NULL;
      ATerm y_19 (ATerm t)
      {
        t = not_null(l_19);
        if(((k_19 != NULL) && (k_19 != t)))
          _fail(t);
        else
          k_19 = t;
        t = not_null(l_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_19));
      if(((l_19 != NULL) && (l_19 != t)))
        _fail(t);
      else
        l_19 = t;
      t = y_19(t);
      t = not_null(i_19);
      t = r_2(t);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = z_19(t);
    }
    return(t);
  }
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  t = not_null(t_18);
  if(match_cons(t, sym_Anno_2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_19(t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            t = t_19(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm f_20 = NULL;
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        t = not_null(f_20);
        if(match_string(t, "Nil"))
          {
            t = not_null(f_20);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2_0(i_1, Nil_0_0, t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              ATerm g_20 = NULL;
              if(((g_20 != NULL) && (g_20 != t)))
                _fail(t);
              else
                g_20 = t;
              t = not_null(g_20);
              if(match_string(t, "Cons"))
                {
                  t = not_null(g_20);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = Cons_2_0(proper_list_0_0, Nil_0_0, t);
                return(t);
              }
              t = Cons_2_0(_id, l_1, t);
              return(t);
            }
            t = Op_2_0(j_1, k_1, t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm l_14 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_20 = NULL;
                    if(((h_20 != NULL) && (h_20 != t)))
                      _fail(t);
                    else
                      h_20 = t;
                    t = not_null(h_20);
                    if(match_string(t, "Nil"))
                      {
                        t = not_null(h_20);
                      }
                    else
                      {
                        if(match_string(t, "Cons"))
                          {
                            t = not_null(h_20);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_14;
                  }
                return(t);
              }
              t = Op_2_0(m_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  ATerm c_21 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,w_20 = NULL;
    ATerm e_21 (ATerm t)
    {
      ATerm x_20 = NULL,y_20 = NULL;
      ATerm f_21 (ATerm t)
      {
        ATerm z_20 = NULL,a_21 = NULL;
        t = not_null(y_20);
        if(((z_20 != NULL) && (z_20 != t)))
          _fail(t);
        else
          z_20 = t;
        t = not_null(y_20);
        {
          ATerm b_21 = NULL;
          ATerm g_21 (ATerm t)
          {
            t = not_null(b_21);
            if(((a_21 != NULL) && (a_21 != t)))
              _fail(t);
            else
              a_21 = t;
            t = not_null(b_21);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(x_20), not_null(z_20)), not_null(u_20));
          if(((b_21 != NULL) && (b_21 != t)))
            _fail(t);
          else
            b_21 = t;
          t = g_21(t);
          t = not_null(a_21);
        }
        return(t);
      }
      t = not_null(w_20);
      if(((x_20 != NULL) && (x_20 != t)))
        _fail(t);
      else
        x_20 = t;
      t = not_null(t_20);
      t = t_85(t);
      if(((y_20 != NULL) && (y_20 != t)))
        _fail(t);
      else
        y_20 = t;
      t = f_21(t);
      return(t);
    }
    t = not_null(o_20);
    if(((r_20 != NULL) && (r_20 != t)))
      _fail(t);
    else
      r_20 = t;
    t = not_null(p_20);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(q_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(o_20);
    {
      ATerm v_20 = NULL;
      ATerm d_21 (ATerm t)
      {
        t = not_null(v_20);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        t = not_null(v_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_20));
      if(((v_20 != NULL) && (v_20 != t)))
        _fail(t);
      else
        v_20 = t;
      t = d_21(t);
      t = not_null(s_20);
      t = s_85(t);
      if(((w_20 != NULL) && (w_20 != t)))
        _fail(t);
      else
        w_20 = t;
      t = e_21(t);
    }
    return(t);
  }
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = not_null(o_20);
  if(match_cons(t, sym_Op_2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      t = c_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CacheConstant_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  ATerm d_22 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
    t = not_null(p_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(q_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(o_21);
    {
      ATerm w_21 = NULL;
      ATerm e_22 (ATerm t)
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm g_22 (ATerm t)
        {
          ATerm a_22 = NULL,c_22 = NULL;
          ATerm i_22 (ATerm t)
          {
            t = not_null(c_22);
            if(((v_21 != NULL) && (v_21 != t)))
              _fail(t);
            else
              v_21 = t;
            t = not_null(c_22);
            {
              ATerm m_14;
              m_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_14, not_null(v_21)));
              {
                ATerm n_1 (ATerm t)
                {
                  t = term_c_13;
                  return(t);
                }
                t = assert_1_0(n_1, t);
              }
              t = m_14;
            }
            return(t);
          }
          t = not_null(z_21);
          if(((u_21 != NULL) && (u_21 != t)))
            _fail(t);
          else
            u_21 = t;
          t = not_null(z_21);
          {
            ATerm o_14;
            o_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), (ATerm) ATmakeAppl(sym_Defined_2, term_p_14, not_null(u_21)));
            {
              ATerm o_1 (ATerm t)
              {
                t = term_q_15;
                return(t);
              }
              t = assert_1_0(o_1, t);
            }
            t = o_14;
            {
              ATerm b_22 = NULL;
              ATerm h_22 (ATerm t)
              {
                t = not_null(b_22);
                if(((a_22 != NULL) && (a_22 != t)))
                  _fail(t);
                else
                  a_22 = t;
                t = not_null(b_22);
                return(t);
              }
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CachedTerms_0_0(t);
                  ;
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  t = (ATerm) ATempty;
                }
              if(((b_22 != NULL) && (b_22 != t)))
                _fail(t);
              else
                b_22 = t;
              t = h_22(t);
              t = (ATerm) ATinsert(CheckATermList(not_null(a_22)), (ATerm) ATmakeAppl(sym__3, not_null(t_21), not_null(u_21), not_null(s_21)));
              if(((c_22 != NULL) && (c_22 != t)))
                _fail(t);
              else
                c_22 = t;
              t = i_22(t);
            }
          }
          return(t);
        }
        t = not_null(w_21);
        if(((t_21 != NULL) && (t_21 != t)))
          _fail(t);
        else
          t_21 = t;
        t = not_null(w_21);
        {
          ATerm y_21 = NULL;
          ATerm f_22 (ATerm t)
          {
            t = not_null(y_21);
            if(((x_21 != NULL) && (x_21 != t)))
              _fail(t);
            else
              x_21 = t;
            t = not_null(y_21);
            return(t);
          }
          if(((y_21 != NULL) && (y_21 != t)))
            _fail(t);
          else
            y_21 = t;
          t = f_22(t);
          t = (ATerm) ATmakeAppl(sym__2, term_t_15, not_null(x_21));
          t = conc_strings_0_0(t);
          if(((z_21 != NULL) && (z_21 != t)))
            _fail(t);
          else
            z_21 = t;
          t = g_22(t);
        }
        return(t);
      }
      t = not_null(r_21);
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = map_1_0(Cache_0_0, t);
              return(t);
            }
            t = Op_2_0(_id, p_1, t);
            t = proper_list_0_0(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Anno_2_0(Cache_0_0, Cache_0_0, t);
                  ;
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm y_15 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Int_1_0(_id, t);
                        ;
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm a_17 = t;
                          int b_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(_id, t);
                              ;
                              LocalPopChoice(b_17);
                            }
                          else
                            {
                              t = a_17;
                              {
                                ATerm c_17 = t;
                                int d_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(d_17);
                                  }
                                else
                                  {
                                    t = c_17;
                                    t = BuildDefault_1_0(_id, t);
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
        t = new_0_0(t);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = e_22(t);
      }
      t = (ATerm) ATmakeAppl(sym_Id_1, not_null(u_21));
    }
    return(t);
  }
  if(((o_21 != NULL) && (o_21 != t)))
    _fail(t);
  else
    o_21 = t;
  t = not_null(o_21);
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      t = d_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  ATerm e_23 (ATerm t)
  {
    ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
    t = not_null(r_22);
    if(((s_22 != NULL) && (s_22 != t)))
      _fail(t);
    else
      s_22 = t;
    t = not_null(r_22);
    if(((t_22 != NULL) && (t_22 != t)))
      _fail(t);
    else
      t_22 = t;
    t = not_null(r_22);
    {
      ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
      ATerm g_23 (ATerm t)
      {
        t = not_null(x_22);
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = not_null(v_22);
        return(t);
      }
      t = not_null(s_22);
      {
        ATerm q_1 (ATerm t)
        {
          t = term_q_15;
          return(t);
        }
        t = rewrite_1_0(q_1, t);
        if(((v_22 != NULL) && (v_22 != t)))
          _fail(t);
        else
          v_22 = t;
        t = not_null(v_22);
        if(match_cons(t, sym_Defined_2))
          {
            w_22 = ATgetArgument(t, 0);
            x_22 = ATgetArgument(t, 1);
            t = not_null(w_22);
            if(match_string(t, "e_0"))
              {
                t = g_23(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Id_1, not_null(u_22));
    }
    return(t);
  }
  ATerm f_23 (ATerm t)
  {
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    t = not_null(r_22);
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = not_null(r_22);
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = not_null(r_22);
    {
      ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
      ATerm h_23 (ATerm t)
      {
        t = not_null(d_23);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = not_null(b_23);
        return(t);
      }
      t = not_null(y_22);
      {
        ATerm r_1 (ATerm t)
        {
          t = term_q_15;
          return(t);
        }
        t = rewrite_1_0(r_1, t);
        if(((b_23 != NULL) && (b_23 != t)))
          _fail(t);
        else
          b_23 = t;
        t = not_null(b_23);
        if(match_cons(t, sym_Defined_2))
          {
            c_23 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
            t = not_null(c_23);
            if(match_string(t, "c_0"))
              {
                t = h_23(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(a_23);
    }
    return(t);
  }
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_23(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = f_23(t);
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm k_23 = NULL,m_23 = NULL;
        ATerm i_18;
        i_18 = t;
        {
          ATerm l_23 = NULL;
          ATerm p_23 (ATerm t)
          {
            t = not_null(l_23);
            if(((k_23 != NULL) && (k_23 != t)))
              _fail(t);
            else
              k_23 = t;
            t = not_null(l_23);
            return(t);
          }
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = p_23(t);
        }
        t = i_18;
        {
          ATerm n_23 = NULL;
          ATerm q_23 (ATerm t)
          {
            t = not_null(n_23);
            if(((m_23 != NULL) && (m_23 != t)))
              _fail(t);
            else
              m_23 = t;
            t = not_null(n_23);
            return(t);
          }
          t = SRTS_all(construct_term_caching_0_0, t);
          {
            ATerm s_1 (ATerm t)
            {
              ATerm j_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0_0(t);
                  ;
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = j_18;
                  t = ConstructTerm_0_0(t);
                }
              return(t);
            }
            t = try_1_0(s_1, t);
            if(((n_23 != NULL) && (n_23 != t)))
              _fail(t);
            else
              n_23 = t;
            t = q_23(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(m_23));
          {
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CacheConstant_0_0(t);
                ;
                LocalPopChoice(m_18);
              }
            else
              {
                t = l_18;
                t = Snd_0_0(t);
              }
          }
        }
      }
    }
  return(t);
}
ATerm MatchArg2_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  ATerm b_24 (ATerm t)
  {
    ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
    t = not_null(v_23);
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    t = not_null(w_23);
    if(((y_23 != NULL) && (y_23 != t)))
      _fail(t);
    else
      y_23 = t;
    t = not_null(u_23);
    {
      ATerm a_24 = NULL;
      ATerm c_24 (ATerm t)
      {
        t = not_null(a_24);
        if(((z_23 != NULL) && (z_23 != t)))
          _fail(t);
        else
          z_23 = t;
        t = not_null(a_24);
        return(t);
      }
      t = new_0_0(t);
      if(((a_24 != NULL) && (a_24 != t)))
        _fail(t);
      else
        a_24 = t;
      t = c_24(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_23)), term_a_10), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(y_23))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(x_23), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_23)))));
    }
    return(t);
  }
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = not_null(u_23);
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
      t = b_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Initialized_0_0 (ATerm t)
{
  ATerm g_24 = NULL;
  ATerm l_24 (ATerm t)
  {
    ATerm h_24 = NULL,i_24 = NULL;
    t = not_null(g_24);
    if(((i_24 != NULL) && (i_24 != t)))
      _fail(t);
    else
      i_24 = t;
    t = not_null(g_24);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(g_24);
    {
      ATerm j_24 = NULL,k_24 = NULL;
      t = not_null(i_24);
      {
        ATerm t_1 (ATerm t)
        {
          t = term_n_18;
          return(t);
        }
        t = rewrite_1_0(t_1, t);
        if(((j_24 != NULL) && (j_24 != t)))
          _fail(t);
        else
          j_24 = t;
        t = not_null(j_24);
        if(match_cons(t, sym_Defined_1))
          {
            k_24 = ATgetArgument(t, 0);
            t = not_null(k_24);
            if(match_string(t, "l_0"))
              {
                t = not_null(j_24);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = term_o_18;
    }
    return(t);
  }
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = l_24(t);
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  ATerm x_24 (ATerm t)
  {
    ATerm u_24 = NULL,v_24 = NULL;
    t = not_null(s_24);
    if(((v_24 != NULL) && (v_24 != t)))
      _fail(t);
    else
      v_24 = t;
    t = not_null(t_24);
    if(((u_24 != NULL) && (u_24 != t)))
      _fail(t);
    else
      u_24 = t;
    t = not_null(q_24);
    {
      ATerm w_24 = NULL;
      t = not_null(v_24);
      t = Initialized_0_0(t);
      if(((w_24 != NULL) && (w_24 != t)))
        _fail(t);
      else
        w_24 = t;
      t = not_null(w_24);
      if(match_string(t, "NULL"))
        {
          t = not_null(w_24);
        }
      else
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_24)), not_null(u_24));
    }
    return(t);
  }
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = not_null(q_24);
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      t = not_null(r_24);
      if(match_cons(t, sym_Var_1))
        {
          s_24 = ATgetArgument(t, 0);
          t = x_24(t);
        }
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  ATerm h_26 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL;
    t = not_null(n_25);
    if(((o_25 != NULL) && (o_25 != t)))
      _fail(t);
    else
      o_25 = t;
    t = not_null(l_25);
    if(((p_25 != NULL) && (p_25 != t)))
      _fail(t);
    else
      p_25 = t;
    t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), not_null(o_25))));
    return(t);
  }
  ATerm i_26 (ATerm t)
  {
    ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
    t = not_null(n_25);
    if(((q_25 != NULL) && (q_25 != t)))
      _fail(t);
    else
      q_25 = t;
    t = not_null(l_25);
    if(((r_25 != NULL) && (r_25 != t)))
      _fail(t);
    else
      r_25 = t;
    t = not_null(m_25);
    {
      ATerm t_25 = NULL,v_25 = NULL;
      ATerm p_26 (ATerm t)
      {
        t = not_null(v_25);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = not_null(v_25);
        return(t);
      }
      ATerm u_25 = NULL;
      ATerm o_26 (ATerm t)
      {
        t = not_null(u_25);
        if(((t_25 != NULL) && (t_25 != t)))
          _fail(t);
        else
          t_25 = t;
        t = not_null(u_25);
        return(t);
      }
      t = not_null(r_25);
      t = length_0_0(t);
      if(((u_25 != NULL) && (u_25 != t)))
        _fail(t);
      else
        u_25 = t;
      t = o_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(t_25));
      t = ConstructorName_0_0(t);
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = p_26(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(CheckATermList(not_null(r_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_25)))));
    }
    return(t);
  }
  ATerm j_26 (ATerm t)
  {
    ATerm w_25 = NULL;
    t = not_null(n_25);
    if(((w_25 != NULL) && (w_25 != t)))
      _fail(t);
    else
      w_25 = t;
    t = not_null(w_25);
    return(t);
  }
  ATerm k_26 (ATerm t)
  {
    ATerm x_25 = NULL;
    t = not_null(n_25);
    if(((x_25 != NULL) && (x_25 != t)))
      _fail(t);
    else
      x_25 = t;
    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_25))));
    return(t);
  }
  ATerm l_26 (ATerm t)
  {
    ATerm y_25 = NULL,z_25 = NULL;
    t = not_null(n_25);
    if(((y_25 != NULL) && (y_25 != t)))
      _fail(t);
    else
      y_25 = t;
    t = not_null(m_25);
    {
      ATerm a_26 = NULL;
      ATerm q_26 (ATerm t)
      {
        t = not_null(a_26);
        if(((z_25 != NULL) && (z_25 != t)))
          _fail(t);
        else
          z_25 = t;
        t = not_null(a_26);
        return(t);
      }
      t = not_null(y_25);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((a_26 != NULL) && (a_26 != t)))
        _fail(t);
      else
        a_26 = t;
      t = q_26(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_l_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(z_25))))))));
    }
    return(t);
  }
  ATerm m_26 (ATerm t)
  {
    ATerm b_26 = NULL,c_26 = NULL;
    t = not_null(n_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(m_25);
    {
      ATerm d_26 = NULL;
      ATerm r_26 (ATerm t)
      {
        t = not_null(d_26);
        if(((c_26 != NULL) && (c_26 != t)))
          _fail(t);
        else
          c_26 = t;
        t = not_null(d_26);
        return(t);
      }
      t = not_null(b_26);
      t = real_to_string_0_0(t);
      if(((d_26 != NULL) && (d_26 != t)))
        _fail(t);
      else
        d_26 = t;
      t = r_26(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(c_26)))));
    }
    return(t);
  }
  ATerm n_26 (ATerm t)
  {
    ATerm e_26 = NULL,f_26 = NULL;
    t = not_null(n_25);
    if(((e_26 != NULL) && (e_26 != t)))
      _fail(t);
    else
      e_26 = t;
    t = not_null(m_25);
    {
      ATerm g_26 = NULL;
      ATerm s_26 (ATerm t)
      {
        t = not_null(g_26);
        if(((f_26 != NULL) && (f_26 != t)))
          _fail(t);
        else
          f_26 = t;
        t = not_null(g_26);
        return(t);
      }
      t = not_null(e_26);
      t = int_to_string_0_0(t);
      if(((g_26 != NULL) && (g_26 != t)))
        _fail(t);
      else
        g_26 = t;
      t = s_26(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_26)))));
    }
    return(t);
  }
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = not_null(m_25);
  if(match_cons(t, sym_Anno_2))
    {
      n_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
      t = h_26(t);
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          n_25 = ATgetArgument(t, 0);
          l_25 = ATgetArgument(t, 1);
          t = i_26(t);
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              n_25 = ATgetArgument(t, 0);
              t = j_26(t);
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  n_25 = ATgetArgument(t, 0);
                  t = k_26(t);
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      n_25 = ATgetArgument(t, 0);
                      t = l_26(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          n_25 = ATgetArgument(t, 0);
                          t = m_26(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_Int_1))
                            {
                              n_25 = ATgetArgument(t, 0);
                              t = n_26(t);
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
ATerm Id_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  ATerm i_27 (ATerm t)
  {
    ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL;
    ATerm k_27 (ATerm t)
    {
      ATerm f_27 = NULL,g_27 = NULL;
      t = not_null(e_27);
      if(((f_27 != NULL) && (f_27 != t)))
        _fail(t);
      else
        f_27 = t;
      t = not_null(e_27);
      {
        ATerm h_27 = NULL;
        ATerm l_27 (ATerm t)
        {
          t = not_null(h_27);
          if(((g_27 != NULL) && (g_27 != t)))
            _fail(t);
          else
            g_27 = t;
          t = not_null(h_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(f_27)), not_null(c_27));
        if(((h_27 != NULL) && (h_27 != t)))
          _fail(t);
        else
          h_27 = t;
        t = l_27(t);
        t = not_null(g_27);
      }
      return(t);
    }
    t = not_null(y_26);
    if(((a_27 != NULL) && (a_27 != t)))
      _fail(t);
    else
      a_27 = t;
    t = not_null(z_26);
    if(((b_27 != NULL) && (b_27 != t)))
      _fail(t);
    else
      b_27 = t;
    t = not_null(y_26);
    {
      ATerm d_27 = NULL;
      ATerm j_27 (ATerm t)
      {
        t = not_null(d_27);
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = not_null(d_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_27));
      if(((d_27 != NULL) && (d_27 != t)))
        _fail(t);
      else
        d_27 = t;
      t = j_27(t);
      t = not_null(b_27);
      t = a_96(t);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = k_27(t);
    }
    return(t);
  }
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  t = not_null(y_26);
  if(match_cons(t, sym_Id_1))
    {
      z_26 = ATgetArgument(t, 0);
      t = i_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FunCall_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  ATerm g_28 (ATerm t)
  {
    ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL;
    ATerm i_28 (ATerm t)
    {
      ATerm b_28 = NULL,c_28 = NULL;
      ATerm j_28 (ATerm t)
      {
        ATerm d_28 = NULL,e_28 = NULL;
        t = not_null(c_28);
        if(((d_28 != NULL) && (d_28 != t)))
          _fail(t);
        else
          d_28 = t;
        t = not_null(c_28);
        {
          ATerm f_28 = NULL;
          ATerm k_28 (ATerm t)
          {
            t = not_null(f_28);
            if(((e_28 != NULL) && (e_28 != t)))
              _fail(t);
            else
              e_28 = t;
            t = not_null(f_28);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(b_28), not_null(d_28)), not_null(y_27));
          if(((f_28 != NULL) && (f_28 != t)))
            _fail(t);
          else
            f_28 = t;
          t = k_28(t);
          t = not_null(e_28);
        }
        return(t);
      }
      t = not_null(a_28);
      if(((b_28 != NULL) && (b_28 != t)))
        _fail(t);
      else
        b_28 = t;
      t = not_null(x_27);
      t = f_99(t);
      if(((c_28 != NULL) && (c_28 != t)))
        _fail(t);
      else
        c_28 = t;
      t = j_28(t);
      return(t);
    }
    t = not_null(s_27);
    if(((v_27 != NULL) && (v_27 != t)))
      _fail(t);
    else
      v_27 = t;
    t = not_null(t_27);
    if(((w_27 != NULL) && (w_27 != t)))
      _fail(t);
    else
      w_27 = t;
    t = not_null(u_27);
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = not_null(s_27);
    {
      ATerm z_27 = NULL;
      ATerm h_28 (ATerm t)
      {
        t = not_null(z_27);
        if(((y_27 != NULL) && (y_27 != t)))
          _fail(t);
        else
          y_27 = t;
        t = not_null(z_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_27));
      if(((z_27 != NULL) && (z_27 != t)))
        _fail(t);
      else
        z_27 = t;
      t = h_28(t);
      t = not_null(w_27);
      t = e_99(t);
      if(((a_28 != NULL) && (a_28 != t)))
        _fail(t);
      else
        a_28 = t;
      t = i_28(t);
    }
    return(t);
  }
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  t = not_null(s_27);
  if(match_cons(t, sym_FunCall_2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
      t = g_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  ATerm c_30 (ATerm t)
  {
    ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
    t = not_null(f_29);
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
    t = not_null(h_29);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(j_29);
    {
      ATerm b_30 = NULL;
      ATerm f_30 (ATerm t)
      {
        t = not_null(b_30);
        if(((o_29 != NULL) && (o_29 != t)))
          _fail(t);
        else
          o_29 = t;
        t = not_null(b_30);
        return(t);
      }
      t = not_null(n_29);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
            ATerm e_30 (ATerm t)
            {
              ATerm y_29 = NULL;
              t = not_null(x_29);
              if(((y_29 != NULL) && (y_29 != t)))
                _fail(t);
              else
                y_29 = t;
              t = not_null(y_29);
              {
                ATerm n_21 = t;
                int j_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm z_29 = NULL;
                      if(((z_29 != NULL) && (z_29 != t)))
                        _fail(t);
                      else
                        z_29 = t;
                      t = not_null(z_29);
                      if(match_string(t, "ATempty"))
                        {
                          t = not_null(z_29);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Id_1_0(u_1, t);
                    ;
                    LocalPopChoice(j_22);
                  }
                else
                  {
                    t = n_21;
                    {
                      ATerm v_1 (ATerm t)
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm a_30 = NULL;
                          if(((a_30 != NULL) && (a_30 != t)))
                            _fail(t);
                          else
                            a_30 = t;
                          t = not_null(a_30);
                          if(match_string(t, "ATinsert"))
                            {
                              t = not_null(a_30);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = Id_1_0(x_1, t);
                        return(t);
                      }
                      ATerm w_1 (ATerm t)
                      {
                        ATerm y_1 (ATerm t)
                        {
                          t = Cons_2_0(_id, Nil_0_0, t);
                          return(t);
                        }
                        t = Cons_2_0(_id, y_1, t);
                        return(t);
                      }
                      t = FunCall_2_0(v_1, w_1, t);
                    }
                  }
              }
              return(t);
            }
            if(((p_29 != NULL) && (p_29 != t)))
              _fail(t);
            else
              p_29 = t;
            t = not_null(p_29);
            if(match_cons(t, sym_TypeCast_2))
              {
                q_29 = ATgetArgument(t, 0);
                x_29 = ATgetArgument(t, 1);
                t = not_null(q_29);
                if(match_cons(t, sym_TypeName_2))
                  {
                    r_29 = ATgetArgument(t, 0);
                    w_29 = ATgetArgument(t, 1);
                    t = not_null(r_29);
                    if(match_cons(t, sym_TypeSpec_3))
                      {
                        s_29 = ATgetArgument(t, 0);
                        t_29 = ATgetArgument(t, 1);
                        v_29 = ATgetArgument(t, 2);
                        t = not_null(s_29);
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = not_null(t_29);
                            if(match_cons(t, sym_TypeId_1))
                              {
                                u_29 = ATgetArgument(t, 0);
                                t = not_null(u_29);
                                if(match_string(t, "ATerm"))
                                  {
                                    t = not_null(v_29);
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = not_null(w_29);
                                        if(match_cons(t, sym_None_0))
                                          {
                                            t = e_30(t);
                                          }
                                        else
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
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, not_null(n_29)));
          }
        if(((b_30 != NULL) && (b_30 != t)))
          _fail(t);
        else
          b_30 = t;
        t = f_30(t);
      }
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_29)), not_null(o_29))));
    }
    return(t);
  }
  ATerm d_30 (ATerm t)
  {
    t = term_q_22;
    return(t);
  }
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = not_null(j_29);
  if(match_cons(t, sym_Op_2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
      t = not_null(k_29);
      if(match_string(t, "Cons"))
        {
          t = not_null(l_29);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_29 = ATgetFirst((ATermList) t);
              g_29 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(g_29);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_29 = ATgetFirst((ATermList) t);
                  i_29 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(i_29);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = c_30(t);
                    }
                  else
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
          if(match_string(t, "Nil"))
            {
              t = not_null(l_29);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_30(t);
                }
              else
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
ATerm bottomup_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = bottomup_1_0(s_107, t);
    return(t);
  }
  t = SRTS_all(z_1, t);
  t = s_107(t);
  return(t);
}
ATerm construct_term_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0_0(t);
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = ConstructTerm_0_0(t);
        }
      return(t);
    }
    t = try_1_0(b_2, t);
    return(t);
  }
  t = bottomup_1_0(a_2, t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  t = r_107(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1_0(r_107, t);
      return(t);
    }
    t = SRTS_all(c_2, t);
  }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  ATerm r_53 (ATerm t)
  {
    ATerm k_36 = NULL,l_36 = NULL;
    t = not_null(j_36);
    if(((k_36 != NULL) && (k_36 != t)))
      _fail(t);
    else
      k_36 = t;
    t = not_null(g_36);
    if(((l_36 != NULL) && (l_36 != t)))
      _fail(t);
    else
      l_36 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(k_36), (ATerm) ATinsert(ATempty, not_null(l_36)));
    return(t);
  }
  ATerm s_53 (ATerm t)
  {
    ATerm m_36 = NULL,n_36 = NULL;
    t = not_null(j_36);
    if(((m_36 != NULL) && (m_36 != t)))
      _fail(t);
    else
      m_36 = t;
    t = not_null(i_36);
    {
      ATerm o_36 = NULL;
      ATerm e_55 (ATerm t)
      {
        t = not_null(o_36);
        if(((n_36 != NULL) && (n_36 != t)))
          _fail(t);
        else
          n_36 = t;
        t = not_null(o_36);
        return(t);
      }
      t = new_0_0(t);
      if(((o_36 != NULL) && (o_36 != t)))
        _fail(t);
      else
        o_36 = t;
      t = e_55(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), term_a_10))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_36))))), not_null(m_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), term_q_9, term_r_23))));
    }
    return(t);
  }
  ATerm t_53 (ATerm t)
  {
    ATerm p_36 = NULL;
    t = not_null(j_36);
    if(((p_36 != NULL) && (p_36 != t)))
      _fail(t);
    else
      p_36 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_36));
    return(t);
  }
  ATerm u_53 (ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
    t = not_null(h_36);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = not_null(g_36);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = not_null(d_36);
    if(((s_36 != NULL) && (s_36 != t)))
      _fail(t);
    else
      s_36 = t;
    t = not_null(i_36);
    {
      ATerm c_37 = NULL;
      ATerm g_55 (ATerm t)
      {
        ATerm d_37 = NULL;
        ATerm h_55 (ATerm t)
        {
          ATerm e_37 = NULL;
          ATerm i_55 (ATerm t)
          {
            t = not_null(e_37);
            if(((v_36 != NULL) && (v_36 != t)))
              _fail(t);
            else
              v_36 = t;
            t = not_null(e_37);
            return(t);
          }
          t = not_null(d_37);
          if(((u_36 != NULL) && (u_36 != t)))
            _fail(t);
          else
            u_36 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_23)), not_null(u_36)), not_null(t_36));
          t = concat_0_0(t);
          if(((e_37 != NULL) && (e_37 != t)))
            _fail(t);
          else
            e_37 = t;
          t = i_55(t);
          return(t);
        }
        t = not_null(c_37);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = not_null(s_36);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              t = try_1_0(construct_term_0_0, t);
              return(t);
            }
            t = topdown_1_0(e_2, t);
            return(t);
          }
          t = map_1_0(d_2, t);
          if(((d_37 != NULL) && (d_37 != t)))
            _fail(t);
          else
            d_37 = t;
          t = h_55(t);
        }
        return(t);
      }
      t = not_null(r_36);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
          ATerm f_55 (ATerm t)
          {
            ATerm b_37 = NULL;
            t = not_null(y_36);
            if(((b_37 != NULL) && (b_37 != t)))
              _fail(t);
            else
              b_37 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(b_37));
            return(t);
          }
          if(((w_36 != NULL) && (w_36 != t)))
            _fail(t);
          else
            w_36 = t;
          t = not_null(w_36);
          if(match_cons(t, sym_CallT_3))
            {
              x_36 = ATgetArgument(t, 0);
              z_36 = ATgetArgument(t, 1);
              a_37 = ATgetArgument(t, 2);
              t = not_null(x_36);
              if(match_cons(t, sym_SVar_1))
                {
                  y_36 = ATgetArgument(t, 0);
                  t = not_null(z_36);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(a_37);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_55(t);
                        }
                      else
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
        t = map_1_0(f_2, t);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = g_55(t);
      }
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_36)), not_null(v_36))));
    }
    return(t);
  }
  ATerm v_53 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
    t = not_null(j_36);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = not_null(g_36);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = not_null(d_36);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    t = not_null(i_36);
    {
      ATerm r_37 = NULL;
      ATerm k_55 (ATerm t)
      {
        ATerm s_37 = NULL;
        ATerm l_55 (ATerm t)
        {
          ATerm t_37 = NULL;
          ATerm m_55 (ATerm t)
          {
            t = not_null(t_37);
            if(((k_37 != NULL) && (k_37 != t)))
              _fail(t);
            else
              k_37 = t;
            t = not_null(t_37);
            return(t);
          }
          t = not_null(s_37);
          if(((j_37 != NULL) && (j_37 != t)))
            _fail(t);
          else
            j_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), not_null(j_37));
          t = conc_0_0(t);
          if(((t_37 != NULL) && (t_37 != t)))
            _fail(t);
          else
            t_37 = t;
          t = m_55(t);
          return(t);
        }
        t = not_null(r_37);
        if(((i_37 != NULL) && (i_37 != t)))
          _fail(t);
        else
          i_37 = t;
        t = not_null(h_37);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              t = try_1_0(construct_term_0_0, t);
              return(t);
            }
            t = topdown_1_0(h_2, t);
            return(t);
          }
          t = map_1_0(g_2, t);
          if(((s_37 != NULL) && (s_37 != t)))
            _fail(t);
          else
            s_37 = t;
          t = l_55(t);
        }
        return(t);
      }
      t = not_null(g_37);
      {
        ATerm i_2 (ATerm t)
        {
          ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
          ATerm j_55 (ATerm t)
          {
            ATerm q_37 = NULL;
            t = not_null(n_37);
            if(((q_37 != NULL) && (q_37 != t)))
              _fail(t);
            else
              q_37 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(q_37));
            return(t);
          }
          if(((l_37 != NULL) && (l_37 != t)))
            _fail(t);
          else
            l_37 = t;
          t = not_null(l_37);
          if(match_cons(t, sym_CallT_3))
            {
              m_37 = ATgetArgument(t, 0);
              o_37 = ATgetArgument(t, 1);
              p_37 = ATgetArgument(t, 2);
              t = not_null(m_37);
              if(match_cons(t, sym_SVar_1))
                {
                  n_37 = ATgetArgument(t, 0);
                  t = not_null(o_37);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(p_37);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = j_55(t);
                        }
                      else
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
        t = map_1_0(i_2, t);
        if(((r_37 != NULL) && (r_37 != t)))
          _fail(t);
        else
          r_37 = t;
        t = k_55(t);
      }
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_37)), not_null(k_37))));
    }
    return(t);
  }
  ATerm w_53 (ATerm t)
  {
    ATerm u_37 = NULL,v_37 = NULL;
    t = not_null(j_36);
    if(((u_37 != NULL) && (u_37 != t)))
      _fail(t);
    else
      u_37 = t;
    t = not_null(i_36);
    {
      ATerm w_37 = NULL;
      ATerm n_55 (ATerm t)
      {
        t = not_null(w_37);
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
        t = not_null(w_37);
        return(t);
      }
      t = new_0_0(t);
      if(((w_37 != NULL) && (w_37 != t)))
        _fail(t);
      else
        w_37 = t;
      t = n_55(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_37)), term_a_10), term_s_23)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), term_p_24), not_null(u_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_37)))))))));
    }
    return(t);
  }
  ATerm x_53 (ATerm t)
  {
    ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
    t = not_null(j_36);
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    t = not_null(g_36);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = not_null(i_36);
    {
      ATerm a_38 = NULL;
      ATerm o_55 (ATerm t)
      {
        t = not_null(a_38);
        if(((z_37 != NULL) && (z_37 != t)))
          _fail(t);
        else
          z_37 = t;
        t = not_null(a_38);
        return(t);
      }
      t = new_0_0(t);
      if(((a_38 != NULL) && (a_38 != t)))
        _fail(t);
      else
        a_38 = t;
      t = o_55(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_37)), term_a_10), term_s_23)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_37)))))))));
    }
    return(t);
  }
  ATerm y_53 (ATerm t)
  {
    ATerm b_38 = NULL,c_38 = NULL;
    t = not_null(j_36);
    if(((b_38 != NULL) && (b_38 != t)))
      _fail(t);
    else
      b_38 = t;
    t = not_null(g_36);
    if(((c_38 != NULL) && (c_38 != t)))
      _fail(t);
    else
      c_38 = t;
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(b_38), not_null(c_38));
    return(t);
  }
  ATerm z_53 (ATerm t)
  {
    ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
    t = not_null(j_36);
    if(((d_38 != NULL) && (d_38 != t)))
      _fail(t);
    else
      d_38 = t;
    t = not_null(g_36);
    if(((e_38 != NULL) && (e_38 != t)))
      _fail(t);
    else
      e_38 = t;
    t = not_null(d_36);
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    t = not_null(i_36);
    {
      ATerm i_38 = NULL;
      ATerm p_55 (ATerm t)
      {
        ATerm j_38 = NULL;
        ATerm q_55 (ATerm t)
        {
          t = not_null(j_38);
          if(((h_38 != NULL) && (h_38 != t)))
            _fail(t);
          else
            h_38 = t;
          t = not_null(j_38);
          return(t);
        }
        t = not_null(i_38);
        if(((g_38 != NULL) && (g_38 != t)))
          _fail(t);
        else
          g_38 = t;
        t = not_null(i_38);
        t = new_0_0(t);
        if(((j_38 != NULL) && (j_38 != t)))
          _fail(t);
        else
          j_38 = t;
        t = q_55(t);
        return(t);
      }
      t = new_0_0(t);
      if(((i_38 != NULL) && (i_38 != t)))
        _fail(t);
      else
        i_38 = t;
      t = p_55(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_38)), term_a_10), term_t_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_38)), term_a_10), term_s_23)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_38)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_38)))))), not_null(d_38))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_38)))))))));
    }
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
    t = not_null(j_36);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    t = not_null(g_36);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = not_null(i_36);
    {
      ATerm o_38 = NULL;
      ATerm r_55 (ATerm t)
      {
        ATerm p_38 = NULL;
        ATerm s_55 (ATerm t)
        {
          t = not_null(p_38);
          if(((n_38 != NULL) && (n_38 != t)))
            _fail(t);
          else
            n_38 = t;
          t = not_null(p_38);
          return(t);
        }
        t = not_null(o_38);
        if(((m_38 != NULL) && (m_38 != t)))
          _fail(t);
        else
          m_38 = t;
        t = not_null(o_38);
        t = new_0_0(t);
        if(((p_38 != NULL) && (p_38 != t)))
          _fail(t);
        else
          p_38 = t;
        t = s_55(t);
        return(t);
      }
      t = new_0_0(t);
      if(((o_38 != NULL) && (o_38 != t)))
        _fail(t);
      else
        o_38 = t;
      t = r_55(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_38)), term_a_10), term_t_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_38)), term_a_10), term_s_23)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_38)))))), term_n_27), not_null(k_38))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_38)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_38)))))))));
    }
    return(t);
  }
  ATerm b_54 (ATerm t)
  {
    ATerm q_38 = NULL,e_39 = NULL;
    t = not_null(j_36);
    if(((q_38 != NULL) && (q_38 != t)))
      _fail(t);
    else
      q_38 = t;
    t = not_null(g_36);
    if(((e_39 != NULL) && (e_39 != t)))
      _fail(t);
    else
      e_39 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_38), not_null(e_39));
    return(t);
  }
  ATerm c_54 (ATerm t)
  {
    ATerm f_39 = NULL,g_39 = NULL;
    t = not_null(j_36);
    if(((f_39 != NULL) && (f_39 != t)))
      _fail(t);
    else
      f_39 = t;
    t = not_null(g_36);
    if(((g_39 != NULL) && (g_39 != t)))
      _fail(t);
    else
      g_39 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), not_null(f_39)));
    return(t);
  }
  ATerm d_54 (ATerm t)
  {
    ATerm e_48 = NULL,f_48 = NULL,i_48 = NULL;
    t = not_null(j_36);
    if(((e_48 != NULL) && (e_48 != t)))
      _fail(t);
    else
      e_48 = t;
    t = not_null(g_36);
    if(((f_48 != NULL) && (f_48 != t)))
      _fail(t);
    else
      f_48 = t;
    t = not_null(i_36);
    {
      ATerm o_27;
      o_27 = t;
      t = not_null(e_48);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm g_48 = NULL;
          ATerm t_55 (ATerm t)
          {
            ATerm h_48 = NULL;
            t = not_null(g_48);
            if(((h_48 != NULL) && (h_48 != t)))
              _fail(t);
            else
              h_48 = t;
            t = not_null(g_48);
            {
              ATerm p_27;
              p_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_48), term_r_27);
              {
                ATerm k_2 (ATerm t)
                {
                  t = term_n_18;
                  return(t);
                }
                t = assert_1_0(k_2, t);
              }
              t = p_27;
            }
            return(t);
          }
          if(((g_48 != NULL) && (g_48 != t)))
            _fail(t);
          else
            g_48 = t;
          t = t_55(t);
          return(t);
        }
        t = map_1_0(j_2, t);
      }
      t = o_27;
      {
        ATerm l_48 = NULL;
        ATerm v_55 (ATerm t)
        {
          t = not_null(l_48);
          if(((i_48 != NULL) && (i_48 != t)))
            _fail(t);
          else
            i_48 = t;
          t = not_null(l_48);
          return(t);
        }
        t = not_null(e_48);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm j_48 = NULL;
            ATerm u_55 (ATerm t)
            {
              ATerm k_48 = NULL;
              t = not_null(j_48);
              if(((k_48 != NULL) && (k_48 != t)))
                _fail(t);
              else
                k_48 = t;
              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_48)), term_a_10), term_m_28);
              return(t);
            }
            if(((j_48 != NULL) && (j_48 != t)))
              _fail(t);
            else
              j_48 = t;
            t = u_55(t);
            return(t);
          }
          t = map_1_0(l_2, t);
          if(((l_48 != NULL) && (l_48 != t)))
            _fail(t);
          else
            l_48 = t;
          t = v_55(t);
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, not_null(i_48))), (ATerm) ATinsert(ATempty, not_null(f_48)));
      }
    }
    return(t);
  }
  ATerm e_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23)));
    return(t);
  }
  ATerm f_54 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  ATerm g_54 (ATerm t)
  {
    ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
    t = not_null(m_35);
    if(((m_48 != NULL) && (m_48 != t)))
      _fail(t);
    else
      m_48 = t;
    t = not_null(o_35);
    if(((n_48 != NULL) && (n_48 != t)))
      _fail(t);
    else
      n_48 = t;
    t = not_null(g_36);
    if(((o_48 != NULL) && (o_48 != t)))
      _fail(t);
    else
      o_48 = t;
    t = not_null(i_36);
    {
      ATerm q_48 = NULL;
      ATerm a_56 (ATerm t)
      {
        t = not_null(q_48);
        if(((p_48 != NULL) && (p_48 != t)))
          _fail(t);
        else
          p_48 = t;
        t = not_null(q_48);
        return(t);
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(n_48), (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_28, not_null(o_48))))))), (ATerm) ATmakeAppl(sym__2, not_null(m_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_28, not_null(o_48))))));
      {
        ATerm m_2 (ATerm t)
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchArg1_0_0(t);
              ;
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
              t = MatchArg2_0_0(t);
            }
          return(t);
        }
        t = map_1_0(m_2, t);
        if(((q_48 != NULL) && (q_48 != t)))
          _fail(t);
        else
          q_48 = t;
        t = a_56(t);
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, not_null(o_48))), term_b_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, not_null(o_48))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
    }
    return(t);
  }
  ATerm h_54 (ATerm t)
  {
    ATerm r_48 = NULL;
    t = not_null(g_36);
    if(((r_48 != NULL) && (r_48 != t)))
      _fail(t);
    else
      r_48 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, not_null(r_48))), term_b_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, not_null(r_48))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
    return(t);
  }
  ATerm i_54 (ATerm t)
  {
    ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,l_49 = NULL;
    t = not_null(h_36);
    if(((s_48 != NULL) && (s_48 != t)))
      _fail(t);
    else
      s_48 = t;
    t = not_null(q_35);
    if(((t_48 != NULL) && (t_48 != t)))
      _fail(t);
    else
      t_48 = t;
    t = not_null(g_36);
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = not_null(i_36);
    {
      ATerm e_29;
      e_29 = t;
      {
        ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
        ATerm f_56 (ATerm t)
        {
          t = not_null(j_49);
          if(((v_48 != NULL) && (v_48 != t)))
            _fail(t);
          else
            v_48 = t;
          t = not_null(i_49);
          return(t);
        }
        t = not_null(s_48);
        {
          ATerm g_30 = t;
          if((PushChoice() == 0))
            {
              ATerm w_48 = NULL;
              if(((w_48 != NULL) && (w_48 != t)))
                _fail(t);
              else
                w_48 = t;
              t = not_null(w_48);
              if(match_string(t, "Nil"))
                {
                  t = not_null(w_48);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(w_48);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_30;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_48), term_h_30);
          {
            ATerm n_2 (ATerm t)
            {
              ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
              ATerm b_56 (ATerm t)
              {
                ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,g_49 = NULL;
                t = not_null(y_48);
                if(((a_49 != NULL) && (a_49 != t)))
                  _fail(t);
                else
                  a_49 = t;
                t = not_null(z_48);
                if(((b_49 != NULL) && (b_49 != t)))
                  _fail(t);
                else
                  b_49 = t;
                t = not_null(x_48);
                {
                  ATerm i_30;
                  i_30 = t;
                  {
                    ATerm d_49 = NULL,f_49 = NULL;
                    ATerm d_56 (ATerm t)
                    {
                      t = not_null(f_49);
                      if(((c_49 != NULL) && (c_49 != t)))
                        _fail(t);
                      else
                        c_49 = t;
                      t = not_null(f_49);
                      return(t);
                    }
                    ATerm e_49 = NULL;
                    ATerm c_56 (ATerm t)
                    {
                      t = not_null(e_49);
                      if(((d_49 != NULL) && (d_49 != t)))
                        _fail(t);
                      else
                        d_49 = t;
                      t = not_null(e_49);
                      return(t);
                    }
                    t = not_null(b_49);
                    t = int_to_string_0_0(t);
                    if(((e_49 != NULL) && (e_49 != t)))
                      _fail(t);
                    else
                      e_49 = t;
                    t = c_56(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), (ATerm) ATmakeAppl(sym_FunCall_2, term_k_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(d_49))), not_null(u_48))));
                    {
                      ATerm l_30 = t;
                      int m_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = MatchArg1_0_0(t);
                          ;
                          LocalPopChoice(m_30);
                        }
                      else
                        {
                          t = l_30;
                          t = MatchArg2_0_0(t);
                        }
                      if(((f_49 != NULL) && (f_49 != t)))
                        _fail(t);
                      else
                        f_49 = t;
                      t = d_56(t);
                    }
                  }
                  t = i_30;
                  {
                    ATerm h_49 = NULL;
                    ATerm e_56 (ATerm t)
                    {
                      t = not_null(h_49);
                      if(((g_49 != NULL) && (g_49 != t)))
                        _fail(t);
                      else
                        g_49 = t;
                      t = not_null(h_49);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_49), term_n_30);
                    t = add_0_0(t);
                    if(((h_49 != NULL) && (h_49 != t)))
                      _fail(t);
                    else
                      h_49 = t;
                    t = e_56(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), not_null(g_49));
                  }
                }
                return(t);
              }
              if(((x_48 != NULL) && (x_48 != t)))
                _fail(t);
              else
                x_48 = t;
              t = not_null(x_48);
              if(match_cons(t, sym__2))
                {
                  y_48 = ATgetArgument(t, 0);
                  z_48 = ATgetArgument(t, 1);
                  t = b_56(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1_0(n_2, t);
            if(((i_49 != NULL) && (i_49 != t)))
              _fail(t);
            else
              i_49 = t;
            t = not_null(i_49);
            if(match_cons(t, sym__2))
              {
                j_49 = ATgetArgument(t, 0);
                k_49 = ATgetArgument(t, 1);
                t = f_56(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = e_29;
      {
        ATerm m_49 = NULL,o_49 = NULL;
        ATerm h_56 (ATerm t)
        {
          t = not_null(o_49);
          if(((l_49 != NULL) && (l_49 != t)))
            _fail(t);
          else
            l_49 = t;
          t = not_null(o_49);
          return(t);
        }
        ATerm n_49 = NULL;
        ATerm g_56 (ATerm t)
        {
          t = not_null(n_49);
          if(((m_49 != NULL) && (m_49 != t)))
            _fail(t);
          else
            m_49 = t;
          t = not_null(n_49);
          return(t);
        }
        t = not_null(t_48);
        t = length_0_0(t);
        if(((n_49 != NULL) && (n_49 != t)))
          _fail(t);
        else
          n_49 = t;
        t = g_56(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_48), not_null(m_49));
        t = ConstructorName_0_0(t);
        if(((o_49 != NULL) && (o_49 != t)))
          _fail(t);
        else
          o_49 = t;
        t = h_56(t);
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_49))), not_null(u_48))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(v_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
      }
    }
    return(t);
  }
  ATerm j_54 (ATerm t)
  {
    ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
    t = not_null(h_36);
    if(((u_49 != NULL) && (u_49 != t)))
      _fail(t);
    else
      u_49 = t;
    t = not_null(g_36);
    if(((v_49 != NULL) && (v_49 != t)))
      _fail(t);
    else
      v_49 = t;
    t = not_null(i_36);
    {
      ATerm x_49 = NULL;
      ATerm i_56 (ATerm t)
      {
        t = not_null(x_49);
        if(((w_49 != NULL) && (w_49 != t)))
          _fail(t);
        else
          w_49 = t;
        t = not_null(x_49);
        return(t);
      }
      t = not_null(u_49);
      t = real_to_string_0_0(t);
      if(((x_49 != NULL) && (x_49 != t)))
        _fail(t);
      else
        x_49 = t;
      t = i_56(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, not_null(v_49))), term_r_30), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_30, not_null(v_49)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(w_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
    }
    return(t);
  }
  ATerm k_54 (ATerm t)
  {
    ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
    t = not_null(h_36);
    if(((y_49 != NULL) && (y_49 != t)))
      _fail(t);
    else
      y_49 = t;
    t = not_null(g_36);
    if(((z_49 != NULL) && (z_49 != t)))
      _fail(t);
    else
      z_49 = t;
    t = not_null(i_36);
    {
      ATerm b_50 = NULL;
      ATerm j_56 (ATerm t)
      {
        t = not_null(b_50);
        if(((a_50 != NULL) && (a_50 != t)))
          _fail(t);
        else
          a_50 = t;
        t = not_null(b_50);
        return(t);
      }
      t = not_null(y_49);
      t = int_to_string_0_0(t);
      if(((b_50 != NULL) && (b_50 != t)))
        _fail(t);
      else
        b_50 = t;
      t = j_56(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, not_null(z_49))), term_z_30), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_31, not_null(z_49)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
    }
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
    t = not_null(h_36);
    if(((c_50 != NULL) && (c_50 != t)))
      _fail(t);
    else
      c_50 = t;
    t = not_null(g_36);
    if(((d_50 != NULL) && (d_50 != t)))
      _fail(t);
    else
      d_50 = t;
    t = not_null(i_36);
    {
      ATerm f_50 = NULL;
      ATerm k_56 (ATerm t)
      {
        t = not_null(f_50);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = not_null(f_50);
        return(t);
      }
      t = not_null(c_50);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((f_50 != NULL) && (f_50 != t)))
        _fail(t);
      else
        f_50 = t;
      t = k_56(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_31, not_null(d_50)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_l_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(e_50)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, term_r_23))));
    }
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    ATerm g_50 = NULL,h_50 = NULL;
    t = not_null(h_36);
    if(((g_50 != NULL) && (g_50 != t)))
      _fail(t);
    else
      g_50 = t;
    t = not_null(g_36);
    if(((h_50 != NULL) && (h_50 != t)))
      _fail(t);
    else
      h_50 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_50)), term_l_28), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_50)), not_null(h_50))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, not_null(h_50)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_50)), term_q_9, not_null(h_50))));
    return(t);
  }
  ATerm n_54 (ATerm t)
  {
    ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
    t = not_null(h_36);
    if(((n_50 != NULL) && (n_50 != t)))
      _fail(t);
    else
      n_50 = t;
    t = not_null(q_35);
    if(((o_50 != NULL) && (o_50 != t)))
      _fail(t);
    else
      o_50 = t;
    t = not_null(g_36);
    if(((p_50 != NULL) && (p_50 != t)))
      _fail(t);
    else
      p_50 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(o_50), not_null(p_50))), (ATerm) ATmakeAppl(sym_Match_2, not_null(n_50), not_null(p_50))));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL;
    t = not_null(h_36);
    if(((q_50 != NULL) && (q_50 != t)))
      _fail(t);
    else
      q_50 = t;
    t = not_null(g_36);
    if(((r_50 != NULL) && (r_50 != t)))
      _fail(t);
    else
      r_50 = t;
    t = term_n_28;
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    ATerm s_50 = NULL;
    t = not_null(g_36);
    if(((s_50 != NULL) && (s_50 != t)))
      _fail(t);
    else
      s_50 = t;
    t = term_n_28;
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    ATerm t_50 = NULL;
    t = not_null(j_36);
    if(((t_50 != NULL) && (t_50 != t)))
      _fail(t);
    else
      t_50 = t;
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(t_50), term_r_23);
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
    t = not_null(h_36);
    if(((x_50 != NULL) && (x_50 != t)))
      _fail(t);
    else
      x_50 = t;
    t = not_null(s_35);
    if(((u_50 != NULL) && (u_50 != t)))
      _fail(t);
    else
      u_50 = t;
    t = not_null(v_35);
    if(((v_50 != NULL) && (v_50 != t)))
      _fail(t);
    else
      v_50 = t;
    t = not_null(b_36);
    if(((w_50 != NULL) && (w_50 != t)))
      _fail(t);
    else
      w_50 = t;
    t = not_null(c_36);
    if(((y_50 != NULL) && (y_50 != t)))
      _fail(t);
    else
      y_50 = t;
    t = not_null(d_36);
    if(((z_50 != NULL) && (z_50 != t)))
      _fail(t);
    else
      z_50 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_50)))), term_b_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_50)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_50)), term_q_9, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_28, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_50))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_50)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_28, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_50))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_50)), not_null(y_50), not_null(z_50)))));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
    t = not_null(h_36);
    if(((b_51 != NULL) && (b_51 != t)))
      _fail(t);
    else
      b_51 = t;
    t = not_null(b_36);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = not_null(c_36);
    if(((c_51 != NULL) && (c_51 != t)))
      _fail(t);
    else
      c_51 = t;
    t = not_null(d_36);
    if(((d_51 != NULL) && (d_51 != t)))
      _fail(t);
    else
      d_51 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_51)))), term_b_29), (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_51))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(a_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_51)), not_null(c_51), not_null(d_51)))));
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,a_52 = NULL,c_52 = NULL;
    t = not_null(h_36);
    if(((e_51 != NULL) && (e_51 != t)))
      _fail(t);
    else
      e_51 = t;
    t = not_null(z_35);
    if(((f_51 != NULL) && (f_51 != t)))
      _fail(t);
    else
      f_51 = t;
    t = not_null(x_35);
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = not_null(a_36);
    if(((h_51 != NULL) && (h_51 != t)))
      _fail(t);
    else
      h_51 = t;
    t = not_null(b_36);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    t = not_null(c_36);
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = not_null(d_36);
    if(((k_51 != NULL) && (k_51 != t)))
      _fail(t);
    else
      k_51 = t;
    t = not_null(i_36);
    {
      ATerm m_31;
      m_31 = t;
      {
        ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
        ATerm o_56 (ATerm t)
        {
          t = not_null(y_51);
          if(((l_51 != NULL) && (l_51 != t)))
            _fail(t);
          else
            l_51 = t;
          t = not_null(x_51);
          return(t);
        }
        t = not_null(f_51);
        {
          ATerm n_31 = t;
          if((PushChoice() == 0))
            {
              ATerm m_51 = NULL;
              if(((m_51 != NULL) && (m_51 != t)))
                _fail(t);
              else
                m_51 = t;
              t = not_null(m_51);
              if(match_string(t, "Nil"))
                {
                  t = not_null(m_51);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(m_51);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_31;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_51), term_h_30);
          {
            ATerm o_2 (ATerm t)
            {
              ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
              ATerm l_56 (ATerm t)
              {
                ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,v_51 = NULL;
                t = not_null(p_51);
                if(((r_51 != NULL) && (r_51 != t)))
                  _fail(t);
                else
                  r_51 = t;
                t = not_null(q_51);
                if(((s_51 != NULL) && (s_51 != t)))
                  _fail(t);
                else
                  s_51 = t;
                t = not_null(n_51);
                {
                  ATerm o_31;
                  o_31 = t;
                  {
                    ATerm u_51 = NULL;
                    ATerm m_56 (ATerm t)
                    {
                      t = not_null(u_51);
                      if(((t_51 != NULL) && (t_51 != t)))
                        _fail(t);
                      else
                        t_51 = t;
                      t = not_null(u_51);
                      return(t);
                    }
                    t = not_null(s_51);
                    t = int_to_string_0_0(t);
                    if(((u_51 != NULL) && (u_51 != t)))
                      _fail(t);
                    else
                      u_51 = t;
                    t = m_56(t);
                  }
                  t = o_31;
                  {
                    ATerm w_51 = NULL;
                    ATerm n_56 (ATerm t)
                    {
                      t = not_null(w_51);
                      if(((v_51 != NULL) && (v_51 != t)))
                        _fail(t);
                      else
                        v_51 = t;
                      t = not_null(w_51);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_51), term_n_30);
                    t = add_0_0(t);
                    if(((w_51 != NULL) && (w_51 != t)))
                      _fail(t);
                    else
                      w_51 = t;
                    t = n_56(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_51)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_51)))))), not_null(v_51));
                  }
                }
                return(t);
              }
              if(((n_51 != NULL) && (n_51 != t)))
                _fail(t);
              else
                n_51 = t;
              t = not_null(n_51);
              if(match_cons(t, sym__2))
                {
                  o_51 = ATgetArgument(t, 0);
                  q_51 = ATgetArgument(t, 1);
                  t = not_null(o_51);
                  if(match_cons(t, sym_Var_1))
                    {
                      p_51 = ATgetArgument(t, 0);
                      t = l_56(t);
                    }
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
            t = thread_map_1_0(o_2, t);
            if(((x_51 != NULL) && (x_51 != t)))
              _fail(t);
            else
              x_51 = t;
            t = not_null(x_51);
            if(match_cons(t, sym__2))
              {
                y_51 = ATgetArgument(t, 0);
                z_51 = ATgetArgument(t, 1);
                t = o_56(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = m_31;
      {
        ATerm p_31;
        p_31 = t;
        {
          ATerm b_52 = NULL;
          ATerm p_56 (ATerm t)
          {
            t = not_null(b_52);
            if(((a_52 != NULL) && (a_52 != t)))
              _fail(t);
            else
              a_52 = t;
            t = not_null(b_52);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_51), not_null(g_51));
          t = ConstructorName_0_0(t);
          if(((b_52 != NULL) && (b_52 != t)))
            _fail(t);
          else
            b_52 = t;
          t = p_56(t);
        }
        t = p_31;
        {
          ATerm d_52 = NULL;
          ATerm q_56 (ATerm t)
          {
            t = not_null(d_52);
            if(((c_52 != NULL) && (c_52 != t)))
              _fail(t);
            else
              c_52 = t;
            t = not_null(d_52);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), (ATerm) ATinsert(ATempty, not_null(i_51)));
          t = conc_0_0(t);
          if(((d_52 != NULL) && (d_52 != t)))
            _fail(t);
          else
            d_52 = t;
          t = q_56(t);
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_51)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_52)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_51)), not_null(j_51), not_null(k_51)))));
        }
      }
    }
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
    t = not_null(h_36);
    if(((e_52 != NULL) && (e_52 != t)))
      _fail(t);
    else
      e_52 = t;
    t = not_null(z_35);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    t = not_null(a_36);
    if(((g_52 != NULL) && (g_52 != t)))
      _fail(t);
    else
      g_52 = t;
    t = not_null(b_36);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(c_36);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(d_36);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(i_36);
    {
      ATerm l_52 = NULL;
      ATerm r_56 (ATerm t)
      {
        t = not_null(l_52);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = not_null(l_52);
        return(t);
      }
      t = not_null(f_52);
      t = real_to_string_0_0(t);
      if(((l_52 != NULL) && (l_52 != t)))
        _fail(t);
      else
        l_52 = t;
      t = r_56(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_52)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_52))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_52)), not_null(i_52), not_null(j_52)))));
    }
    return(t);
  }
  ATerm v_54 (ATerm t)
  {
    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
    t = not_null(h_36);
    if(((m_52 != NULL) && (m_52 != t)))
      _fail(t);
    else
      m_52 = t;
    t = not_null(z_35);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    t = not_null(a_36);
    if(((o_52 != NULL) && (o_52 != t)))
      _fail(t);
    else
      o_52 = t;
    t = not_null(b_36);
    if(((p_52 != NULL) && (p_52 != t)))
      _fail(t);
    else
      p_52 = t;
    t = not_null(c_36);
    if(((q_52 != NULL) && (q_52 != t)))
      _fail(t);
    else
      q_52 = t;
    t = not_null(d_36);
    if(((r_52 != NULL) && (r_52 != t)))
      _fail(t);
    else
      r_52 = t;
    t = not_null(i_36);
    {
      ATerm t_52 = NULL;
      ATerm s_56 (ATerm t)
      {
        t = not_null(t_52);
        if(((s_52 != NULL) && (s_52 != t)))
          _fail(t);
        else
          s_52 = t;
        t = not_null(t_52);
        return(t);
      }
      t = not_null(n_52);
      t = int_to_string_0_0(t);
      if(((t_52 != NULL) && (t_52 != t)))
        _fail(t);
      else
        t_52 = t;
      t = s_56(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(m_52)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_52))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_52)), not_null(q_52), not_null(r_52)))));
    }
    return(t);
  }
  ATerm w_54 (ATerm t)
  {
    ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
    t = not_null(h_36);
    if(((u_52 != NULL) && (u_52 != t)))
      _fail(t);
    else
      u_52 = t;
    t = not_null(z_35);
    if(((v_52 != NULL) && (v_52 != t)))
      _fail(t);
    else
      v_52 = t;
    t = not_null(a_36);
    if(((w_52 != NULL) && (w_52 != t)))
      _fail(t);
    else
      w_52 = t;
    t = not_null(b_36);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(c_36);
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    t = not_null(d_36);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    t = not_null(i_36);
    {
      ATerm b_53 = NULL;
      ATerm t_56 (ATerm t)
      {
        t = not_null(b_53);
        if(((a_53 != NULL) && (a_53 != t)))
          _fail(t);
        else
          a_53 = t;
        t = not_null(b_53);
        return(t);
      }
      t = not_null(v_52);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((b_53 != NULL) && (b_53 != t)))
        _fail(t);
      else
        b_53 = t;
      t = t_56(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_53)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(u_52)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_52))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_52)), not_null(y_52), not_null(z_52)))));
    }
    return(t);
  }
  ATerm x_54 (ATerm t)
  {
    ATerm c_53 = NULL,d_53 = NULL;
    t = not_null(h_36);
    if(((c_53 != NULL) && (c_53 != t)))
      _fail(t);
    else
      c_53 = t;
    t = not_null(d_36);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = not_null(d_53);
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL;
    t = not_null(j_36);
    if(((e_53 != NULL) && (e_53 != t)))
      _fail(t);
    else
      e_53 = t;
    t = not_null(g_36);
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    t = not_null(d_36);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(e_36);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_53)), (ATerm) ATmakeAppl(sym_Case_3, not_null(f_53), not_null(g_53), not_null(h_53)));
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    ATerm i_53 = NULL;
    t = not_null(j_36);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_53)));
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    ATerm j_53 = NULL,k_53 = NULL;
    t = not_null(h_36);
    if(((j_53 != NULL) && (j_53 != t)))
      _fail(t);
    else
      j_53 = t;
    t = not_null(f_36);
    if(((k_53 != NULL) && (k_53 != t)))
      _fail(t);
    else
      k_53 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_53)), term_l_28), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_53)), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_53)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_53))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_53)), term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_53)))));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    ATerm l_53 = NULL,m_53 = NULL;
    t = not_null(h_36);
    if(((l_53 != NULL) && (l_53 != t)))
      _fail(t);
    else
      l_53 = t;
    t = not_null(g_36);
    if(((m_53 != NULL) && (m_53 != t)))
      _fail(t);
    else
      m_53 = t;
    t = not_null(i_36);
    t = not_null(m_53);
    {
      ATerm w_31 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_31;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_53)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_53))));
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    ATerm n_53 = NULL;
    t = not_null(h_36);
    if(((n_53 != NULL) && (n_53 != t)))
      _fail(t);
    else
      n_53 = t;
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_53)), term_q_9, term_r_23));
    return(t);
  }
  ATerm d_55 (ATerm t)
  {
    ATerm o_53 = NULL,p_53 = NULL;
    t = not_null(j_36);
    if(((o_53 != NULL) && (o_53 != t)))
      _fail(t);
    else
      o_53 = t;
    t = not_null(i_36);
    {
      ATerm q_53 = NULL;
      ATerm u_56 (ATerm t)
      {
        t = not_null(q_53);
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        t = not_null(q_53);
        return(t);
      }
      t = not_null(o_53);
      t = construct_term_caching_0_0(t);
      if(((q_53 != NULL) && (q_53 != t)))
        _fail(t);
      else
        q_53 = t;
      t = u_56(t);
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_r_23, term_q_9, not_null(p_53)));
    }
    return(t);
  }
  if(((i_36 != NULL) && (i_36 != t)))
    _fail(t);
  else
    i_36 = t;
  t = not_null(i_36);
  if(match_cons(t, sym_Let_2))
    {
      j_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      t = r_53(t);
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          j_36 = ATgetArgument(t, 0);
          t = s_53(t);
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              j_36 = ATgetArgument(t, 0);
              t = t_53(t);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  j_36 = ATgetArgument(t, 0);
                  g_36 = ATgetArgument(t, 1);
                  d_36 = ATgetArgument(t, 2);
                  t = not_null(j_36);
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_36 = ATgetArgument(t, 0);
                      t = u_53(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      j_36 = ATgetArgument(t, 0);
                      g_36 = ATgetArgument(t, 1);
                      d_36 = ATgetArgument(t, 2);
                      t = v_53(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          j_36 = ATgetArgument(t, 0);
                          t = w_53(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              j_36 = ATgetArgument(t, 0);
                              g_36 = ATgetArgument(t, 1);
                              t = x_53(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  j_36 = ATgetArgument(t, 0);
                                  g_36 = ATgetArgument(t, 1);
                                  t = y_53(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      j_36 = ATgetArgument(t, 0);
                                      g_36 = ATgetArgument(t, 1);
                                      d_36 = ATgetArgument(t, 2);
                                      t = z_53(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          j_36 = ATgetArgument(t, 0);
                                          g_36 = ATgetArgument(t, 1);
                                          t = a_54(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              j_36 = ATgetArgument(t, 0);
                                              g_36 = ATgetArgument(t, 1);
                                              t = b_54(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  j_36 = ATgetArgument(t, 0);
                                                  g_36 = ATgetArgument(t, 1);
                                                  t = c_54(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      j_36 = ATgetArgument(t, 0);
                                                      g_36 = ATgetArgument(t, 1);
                                                      t = d_54(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = e_54(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = f_54(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  j_36 = ATgetArgument(t, 0);
                                                                  g_36 = ATgetArgument(t, 1);
                                                                  t = not_null(j_36);
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      h_36 = ATgetArgument(t, 0);
                                                                      q_35 = ATgetArgument(t, 1);
                                                                      t = not_null(q_35);
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          m_35 = ATgetFirst((ATermList) t);
                                                                          n_35 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = not_null(n_35);
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              o_35 = ATgetFirst((ATermList) t);
                                                                              p_35 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = not_null(p_35);
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = not_null(h_36);
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm x_31 = t;
                                                                                      int y_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = g_54(t);
                                                                                          ;
                                                                                          LocalPopChoice(y_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_31;
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
                                                                                  t = not_null(h_36);
                                                                                  t = i_54(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = not_null(h_36);
                                                                              t = i_54(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = not_null(h_36);
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm z_31 = t;
                                                                                  int a_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_54(t);
                                                                                      ;
                                                                                      LocalPopChoice(a_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_31;
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
                                                                              t = not_null(h_36);
                                                                              t = i_54(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          h_36 = ATgetArgument(t, 0);
                                                                          t = j_54(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              h_36 = ATgetArgument(t, 0);
                                                                              t = k_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  h_36 = ATgetArgument(t, 0);
                                                                                  t = l_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      h_36 = ATgetArgument(t, 0);
                                                                                      t = m_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          h_36 = ATgetArgument(t, 0);
                                                                                          q_35 = ATgetArgument(t, 1);
                                                                                          t = n_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_BuildDefault_1))
                                                                                            {
                                                                                              h_36 = ATgetArgument(t, 0);
                                                                                              t = o_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_Wld_0))
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
                                                                  if(match_cons(t, sym_Match_1))
                                                                    {
                                                                      j_36 = ATgetArgument(t, 0);
                                                                      t = q_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          j_36 = ATgetArgument(t, 0);
                                                                          g_36 = ATgetArgument(t, 1);
                                                                          d_36 = ATgetArgument(t, 2);
                                                                          t = not_null(j_36);
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              h_36 = ATgetArgument(t, 0);
                                                                              t = not_null(g_36);
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_36 = ATgetFirst((ATermList) t);
                                                                                  c_36 = (ATerm) ATgetNext((ATermList) t);
                                                                                  t = not_null(f_36);
                                                                                  if(match_cons(t, sym_Alt_3))
                                                                                    {
                                                                                      y_35 = ATgetArgument(t, 0);
                                                                                      a_36 = ATgetArgument(t, 1);
                                                                                      b_36 = ATgetArgument(t, 2);
                                                                                      t = not_null(y_35);
                                                                                      if(match_cons(t, sym_Fun_2))
                                                                                        {
                                                                                          z_35 = ATgetArgument(t, 0);
                                                                                          x_35 = ATgetArgument(t, 1);
                                                                                          t = not_null(a_36);
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              r_35 = ATgetFirst((ATermList) t);
                                                                                              t_35 = (ATerm) ATgetNext((ATermList) t);
                                                                                              t = not_null(t_35);
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  u_35 = ATgetFirst((ATermList) t);
                                                                                                  w_35 = (ATerm) ATgetNext((ATermList) t);
                                                                                                  t = not_null(w_35);
                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                    {
                                                                                                      t = not_null(u_35);
                                                                                                      if(match_cons(t, sym_Var_1))
                                                                                                        {
                                                                                                          v_35 = ATgetArgument(t, 0);
                                                                                                          t = not_null(r_35);
                                                                                                          if(match_cons(t, sym_Var_1))
                                                                                                            {
                                                                                                              s_35 = ATgetArgument(t, 0);
                                                                                                              t = not_null(x_35);
                                                                                                              if(match_int(t, 2))
                                                                                                                {
                                                                                                                  t = not_null(z_35);
                                                                                                                  if(match_string(t, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm b_32 = t;
                                                                                                                      int c_32 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = r_54(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(c_32);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_32;
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
                                                                                                                  t = not_null(z_35);
                                                                                                                  t = t_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = not_null(z_35);
                                                                                                              t = t_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = not_null(z_35);
                                                                                                          t = t_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = not_null(z_35);
                                                                                                      t = t_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = not_null(z_35);
                                                                                                  t = t_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                {
                                                                                                  t = not_null(x_35);
                                                                                                  if(match_int(t, 0))
                                                                                                    {
                                                                                                      t = not_null(z_35);
                                                                                                      if(match_string(t, "Nil"))
                                                                                                        {
                                                                                                          ATerm d_32 = t;
                                                                                                          int e_32 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = s_54(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(e_32);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_32;
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
                                                                                                      t = not_null(z_35);
                                                                                                      t = t_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = not_null(z_35);
                                                                                                  t = t_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Real_1))
                                                                                            {
                                                                                              z_35 = ATgetArgument(t, 0);
                                                                                              t = u_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_Int_1))
                                                                                                {
                                                                                                  z_35 = ATgetArgument(t, 0);
                                                                                                  t = v_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_Str_1))
                                                                                                    {
                                                                                                      z_35 = ATgetArgument(t, 0);
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
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              j_36 = ATgetArgument(t, 0);
                                                                              g_36 = ATgetArgument(t, 1);
                                                                              d_36 = ATgetArgument(t, 2);
                                                                              e_36 = ATgetArgument(t, 3);
                                                                              t = y_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  j_36 = ATgetArgument(t, 0);
                                                                                  t = z_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      j_36 = ATgetArgument(t, 0);
                                                                                      g_36 = ATgetArgument(t, 1);
                                                                                      t = not_null(j_36);
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          h_36 = ATgetArgument(t, 0);
                                                                                          t = not_null(g_36);
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              f_36 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm f_32 = t;
                                                                                                int g_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = a_55(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(g_32);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_32;
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
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          j_36 = ATgetArgument(t, 0);
                                                                                          t = not_null(j_36);
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              h_36 = ATgetArgument(t, 0);
                                                                                              t = c_55(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_36 = ATgetArgument(t, 0);
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
ATerm real_to_string_0_0 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm y_56 (ATerm t)
  {
    ATerm x_56 = NULL;
    t = not_null(w_56);
    if(((x_56 != NULL) && (x_56 != t)))
      _fail(t);
    else
      x_56 = t;
    t = not_null(w_56);
    t = SSL_real_to_string(not_null(x_56));
    return(t);
  }
  if(((w_56 != NULL) && (w_56 != t)))
    _fail(t);
  else
    w_56 = t;
  t = y_56(t);
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  ATerm g_57 (ATerm t)
  {
    ATerm f_57 = NULL;
    t = not_null(e_57);
    if(((f_57 != NULL) && (f_57 != t)))
      _fail(t);
    else
      f_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_57));
    return(t);
  }
  if(((c_57 != NULL) && (c_57 != t)))
    _fail(t);
  else
    c_57 = t;
  t = not_null(c_57);
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
      t = not_null(d_57);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_57(t);
        }
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
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  ATerm l_58 (ATerm t)
  {
    ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
    t = not_null(v_57);
    if(((y_57 != NULL) && (y_57 != t)))
      _fail(t);
    else
      y_57 = t;
    t = not_null(w_57);
    if(((z_57 != NULL) && (z_57 != t)))
      _fail(t);
    else
      z_57 = t;
    t = not_null(x_57);
    if(((a_58 != NULL) && (a_58 != t)))
      _fail(t);
    else
      a_58 = t;
    t = not_null(t_57);
    {
      ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
      ATerm m_58 (ATerm t)
      {
        ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
        ATerm n_58 (ATerm t)
        {
          t = not_null(j_58);
          if(((e_58 != NULL) && (e_58 != t)))
            _fail(t);
          else
            e_58 = t;
          t = not_null(k_58);
          if(((c_58 != NULL) && (c_58 != t)))
            _fail(t);
          else
            c_58 = t;
          t = not_null(i_58);
          return(t);
        }
        t = not_null(g_58);
        if(((d_58 != NULL) && (d_58 != t)))
          _fail(t);
        else
          d_58 = t;
        t = not_null(h_58);
        if(((b_58 != NULL) && (b_58 != t)))
          _fail(t);
        else
          b_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), not_null(b_58));
        t = a_1(t);
        if(((i_58 != NULL) && (i_58 != t)))
          _fail(t);
        else
          i_58 = t;
        t = not_null(i_58);
        if(match_cons(t, sym__2))
          {
            j_58 = ATgetArgument(t, 0);
            k_58 = ATgetArgument(t, 1);
            t = n_58(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_57), not_null(a_58));
      t = w_0(t);
      if(((f_58 != NULL) && (f_58 != t)))
        _fail(t);
      else
        f_58 = t;
      t = not_null(f_58);
      if(match_cons(t, sym__2))
        {
          g_58 = ATgetArgument(t, 0);
          h_58 = ATgetArgument(t, 1);
          t = m_58(t);
        }
      else
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_58)), not_null(d_58)), not_null(c_58));
    }
    return(t);
  }
  if(((t_57 != NULL) && (t_57 != t)))
    _fail(t);
  else
    t_57 = t;
  t = not_null(t_57);
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      t = not_null(u_57);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_57 = ATgetFirst((ATermList) t);
          w_57 = (ATerm) ATgetNext((ATermList) t);
          t = l_58(t);
        }
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
ATerm thread_map_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm o_58 (ATerm t)
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(z_119, o_58, t);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = o_58(t);
  return(t);
}
ATerm Var_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  ATerm c_60 (ATerm t)
  {
    ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,i_59 = NULL;
    ATerm g_60 (ATerm t)
    {
      ATerm j_59 = NULL,k_59 = NULL;
      t = not_null(i_59);
      if(((j_59 != NULL) && (j_59 != t)))
        _fail(t);
      else
        j_59 = t;
      t = not_null(i_59);
      {
        ATerm l_59 = NULL;
        ATerm h_60 (ATerm t)
        {
          t = not_null(l_59);
          if(((k_59 != NULL) && (k_59 != t)))
            _fail(t);
          else
            k_59 = t;
          t = not_null(l_59);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_59)), not_null(g_59));
        if(((l_59 != NULL) && (l_59 != t)))
          _fail(t);
        else
          l_59 = t;
        t = h_60(t);
        t = not_null(k_59);
      }
      return(t);
    }
    t = not_null(c_59);
    if(((e_59 != NULL) && (e_59 != t)))
      _fail(t);
    else
      e_59 = t;
    t = not_null(d_59);
    if(((f_59 != NULL) && (f_59 != t)))
      _fail(t);
    else
      f_59 = t;
    t = not_null(c_59);
    {
      ATerm h_59 = NULL;
      ATerm f_60 (ATerm t)
      {
        t = not_null(h_59);
        if(((g_59 != NULL) && (g_59 != t)))
          _fail(t);
        else
          g_59 = t;
        t = not_null(h_59);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_59));
      if(((h_59 != NULL) && (h_59 != t)))
        _fail(t);
      else
        h_59 = t;
      t = f_60(t);
      t = not_null(f_59);
      t = q_0(t);
      if(((i_59 != NULL) && (i_59 != t)))
        _fail(t);
      else
        i_59 = t;
      t = g_60(t);
    }
    return(t);
  }
  ATerm d_60 (ATerm t)
  {
    ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,q_59 = NULL;
    ATerm j_60 (ATerm t)
    {
      ATerm r_59 = NULL,s_59 = NULL;
      t = not_null(q_59);
      if(((r_59 != NULL) && (r_59 != t)))
        _fail(t);
      else
        r_59 = t;
      t = not_null(q_59);
      {
        ATerm t_59 = NULL;
        ATerm k_60 (ATerm t)
        {
          t = not_null(t_59);
          if(((s_59 != NULL) && (s_59 != t)))
            _fail(t);
          else
            s_59 = t;
          t = not_null(t_59);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_59)), not_null(o_59));
        if(((t_59 != NULL) && (t_59 != t)))
          _fail(t);
        else
          t_59 = t;
        t = k_60(t);
        t = not_null(s_59);
      }
      return(t);
    }
    t = not_null(c_59);
    if(((m_59 != NULL) && (m_59 != t)))
      _fail(t);
    else
      m_59 = t;
    t = not_null(d_59);
    if(((n_59 != NULL) && (n_59 != t)))
      _fail(t);
    else
      n_59 = t;
    t = not_null(c_59);
    {
      ATerm p_59 = NULL;
      ATerm i_60 (ATerm t)
      {
        t = not_null(p_59);
        if(((o_59 != NULL) && (o_59 != t)))
          _fail(t);
        else
          o_59 = t;
        t = not_null(p_59);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_59));
      if(((p_59 != NULL) && (p_59 != t)))
        _fail(t);
      else
        p_59 = t;
      t = i_60(t);
      t = not_null(n_59);
      t = q_0(t);
      if(((q_59 != NULL) && (q_59 != t)))
        _fail(t);
      else
        q_59 = t;
      t = j_60(t);
    }
    return(t);
  }
  ATerm e_60 (ATerm t)
  {
    ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,y_59 = NULL;
    ATerm m_60 (ATerm t)
    {
      ATerm z_59 = NULL,a_60 = NULL;
      t = not_null(y_59);
      if(((z_59 != NULL) && (z_59 != t)))
        _fail(t);
      else
        z_59 = t;
      t = not_null(y_59);
      {
        ATerm b_60 = NULL;
        ATerm n_60 (ATerm t)
        {
          t = not_null(b_60);
          if(((a_60 != NULL) && (a_60 != t)))
            _fail(t);
          else
            a_60 = t;
          t = not_null(b_60);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_59)), not_null(w_59));
        if(((b_60 != NULL) && (b_60 != t)))
          _fail(t);
        else
          b_60 = t;
        t = n_60(t);
        t = not_null(a_60);
      }
      return(t);
    }
    t = not_null(c_59);
    if(((u_59 != NULL) && (u_59 != t)))
      _fail(t);
    else
      u_59 = t;
    t = not_null(d_59);
    if(((v_59 != NULL) && (v_59 != t)))
      _fail(t);
    else
      v_59 = t;
    t = not_null(c_59);
    {
      ATerm x_59 = NULL;
      ATerm l_60 (ATerm t)
      {
        t = not_null(x_59);
        if(((w_59 != NULL) && (w_59 != t)))
          _fail(t);
        else
          w_59 = t;
        t = not_null(x_59);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_59));
      if(((x_59 != NULL) && (x_59 != t)))
        _fail(t);
      else
        x_59 = t;
      t = l_60(t);
      t = not_null(v_59);
      t = q_0(t);
      if(((y_59 != NULL) && (y_59 != t)))
        _fail(t);
      else
        y_59 = t;
      t = m_60(t);
    }
    return(t);
  }
  if(((c_59 != NULL) && (c_59 != t)))
    _fail(t);
  else
    c_59 = t;
  t = not_null(c_59);
  if(match_cons(t, sym_Var_1))
    {
      d_59 = ATgetArgument(t, 0);
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_60(t);
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            {
              ATerm l_32 = t;
              int m_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_60(t);
                  ;
                  LocalPopChoice(m_32);
                }
              else
                {
                  t = l_32;
                  t = e_60(t);
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
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,o_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  ATerm y_64 (ATerm t)
  {
    ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
    t = not_null(k_62);
    if(((a_63 != NULL) && (a_63 != t)))
      _fail(t);
    else
      a_63 = t;
    t = not_null(r_62);
    if(((b_63 != NULL) && (b_63 != t)))
      _fail(t);
    else
      b_63 = t;
    t = not_null(y_62);
    if(((c_63 != NULL) && (c_63 != t)))
      _fail(t);
    else
      c_63 = t;
    t = not_null(z_62);
    if(((d_63 != NULL) && (d_63 != t)))
      _fail(t);
    else
      d_63 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, term_r_23)), term_b_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, term_r_23)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_63)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_63)), term_q_9, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATempty, term_n_32)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_63)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATempty, term_n_32)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(d_63))));
    return(t);
  }
  ATerm z_64 (ATerm t)
  {
    ATerm e_63 = NULL,f_63 = NULL;
    t = not_null(y_62);
    if(((e_63 != NULL) && (e_63 != t)))
      _fail(t);
    else
      e_63 = t;
    t = not_null(z_62);
    if(((f_63 != NULL) && (f_63 != t)))
      _fail(t);
    else
      f_63 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_28, (ATerm) ATinsert(ATempty, term_r_23)), term_b_29), (ATerm) ATmakeAppl(sym_FunCall_2, term_d_29, (ATerm) ATinsert(ATempty, term_r_23))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_63))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_63))));
    return(t);
  }
  ATerm a_65 (ATerm t)
  {
    ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,z_63 = NULL,d_64 = NULL;
    t = not_null(x_62);
    if(((g_63 != NULL) && (g_63 != t)))
      _fail(t);
    else
      g_63 = t;
    t = not_null(t_62);
    if(((h_63 != NULL) && (h_63 != t)))
      _fail(t);
    else
      h_63 = t;
    t = not_null(y_62);
    if(((i_63 != NULL) && (i_63 != t)))
      _fail(t);
    else
      i_63 = t;
    t = not_null(z_62);
    if(((j_63 != NULL) && (j_63 != t)))
      _fail(t);
    else
      j_63 = t;
    t = not_null(u_62);
    {
      ATerm o_32;
      o_32 = t;
      {
        ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
        ATerm h_65 (ATerm t)
        {
          t = not_null(x_63);
          if(((k_63 != NULL) && (k_63 != t)))
            _fail(t);
          else
            k_63 = t;
          t = not_null(w_63);
          return(t);
        }
        t = not_null(g_63);
        {
          ATerm p_32 = t;
          if((PushChoice() == 0))
            {
              ATerm l_63 = NULL;
              if(((l_63 != NULL) && (l_63 != t)))
                _fail(t);
              else
                l_63 = t;
              t = not_null(l_63);
              if(match_string(t, "Nil"))
                {
                  t = not_null(l_63);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(l_63);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_32;
            }
          t = not_null(h_63);
          {
            ATerm p_2 (ATerm t)
            {
              t = Var_1_0(_id, t);
              return(t);
            }
            t = map_1_0(p_2, t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_63), term_h_30);
            {
              ATerm q_2 (ATerm t)
              {
                ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
                ATerm e_65 (ATerm t)
                {
                  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,u_63 = NULL;
                  t = not_null(o_63);
                  if(((q_63 != NULL) && (q_63 != t)))
                    _fail(t);
                  else
                    q_63 = t;
                  t = not_null(p_63);
                  if(((r_63 != NULL) && (r_63 != t)))
                    _fail(t);
                  else
                    r_63 = t;
                  t = not_null(m_63);
                  {
                    ATerm q_32;
                    q_32 = t;
                    {
                      ATerm t_63 = NULL;
                      ATerm f_65 (ATerm t)
                      {
                        t = not_null(t_63);
                        if(((s_63 != NULL) && (s_63 != t)))
                          _fail(t);
                        else
                          s_63 = t;
                        t = not_null(t_63);
                        return(t);
                      }
                      t = not_null(r_63);
                      t = int_to_string_0_0(t);
                      if(((t_63 != NULL) && (t_63 != t)))
                        _fail(t);
                      else
                        t_63 = t;
                      t = f_65(t);
                    }
                    t = q_32;
                    {
                      ATerm v_63 = NULL;
                      ATerm g_65 (ATerm t)
                      {
                        t = not_null(v_63);
                        if(((u_63 != NULL) && (u_63 != t)))
                          _fail(t);
                        else
                          u_63 = t;
                        t = not_null(v_63);
                        return(t);
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), term_n_30);
                      t = add_0_0(t);
                      if(((v_63 != NULL) && (v_63 != t)))
                        _fail(t);
                      else
                        v_63 = t;
                      t = g_65(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_63)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_63))), term_r_23)))), not_null(u_63));
                    }
                  }
                  return(t);
                }
                if(((m_63 != NULL) && (m_63 != t)))
                  _fail(t);
                else
                  m_63 = t;
                t = not_null(m_63);
                if(match_cons(t, sym__2))
                  {
                    n_63 = ATgetArgument(t, 0);
                    p_63 = ATgetArgument(t, 1);
                    t = not_null(n_63);
                    if(match_cons(t, sym_Var_1))
                      {
                        o_63 = ATgetArgument(t, 0);
                        t = e_65(t);
                      }
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
              t = thread_map_1_0(q_2, t);
              if(((w_63 != NULL) && (w_63 != t)))
                _fail(t);
              else
                w_63 = t;
              t = not_null(w_63);
              if(match_cons(t, sym__2))
                {
                  x_63 = ATgetArgument(t, 0);
                  y_63 = ATgetArgument(t, 1);
                  t = h_65(t);
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
      t = o_32;
      {
        ATerm r_32;
        r_32 = t;
        {
          ATerm a_64 = NULL,c_64 = NULL;
          ATerm j_65 (ATerm t)
          {
            t = not_null(c_64);
            if(((z_63 != NULL) && (z_63 != t)))
              _fail(t);
            else
              z_63 = t;
            t = not_null(c_64);
            return(t);
          }
          ATerm b_64 = NULL;
          ATerm i_65 (ATerm t)
          {
            t = not_null(b_64);
            if(((a_64 != NULL) && (a_64 != t)))
              _fail(t);
            else
              a_64 = t;
            t = not_null(b_64);
            return(t);
          }
          t = not_null(h_63);
          t = length_0_0(t);
          if(((b_64 != NULL) && (b_64 != t)))
            _fail(t);
          else
            b_64 = t;
          t = i_65(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), not_null(a_64));
          t = ConstructorName_0_0(t);
          if(((c_64 != NULL) && (c_64 != t)))
            _fail(t);
          else
            c_64 = t;
          t = j_65(t);
        }
        t = r_32;
        {
          ATerm e_64 = NULL;
          ATerm k_65 (ATerm t)
          {
            t = not_null(e_64);
            if(((d_64 != NULL) && (d_64 != t)))
              _fail(t);
            else
              d_64 = t;
            t = not_null(e_64);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), (ATerm) ATinsert(ATempty, not_null(i_63)));
          t = conc_0_0(t);
          if(((e_64 != NULL) && (e_64 != t)))
            _fail(t);
          else
            e_64 = t;
          t = k_65(t);
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_63))), term_r_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_64)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_63))));
        }
      }
    }
    return(t);
  }
  ATerm b_65 (ATerm t)
  {
    ATerm f_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
    t = not_null(x_62);
    if(((f_64 != NULL) && (f_64 != t)))
      _fail(t);
    else
      f_64 = t;
    t = not_null(y_62);
    if(((i_64 != NULL) && (i_64 != t)))
      _fail(t);
    else
      i_64 = t;
    t = not_null(z_62);
    if(((j_64 != NULL) && (j_64 != t)))
      _fail(t);
    else
      j_64 = t;
    t = not_null(u_62);
    {
      ATerm l_64 = NULL;
      ATerm l_65 (ATerm t)
      {
        t = not_null(l_64);
        if(((k_64 != NULL) && (k_64 != t)))
          _fail(t);
        else
          k_64 = t;
        t = not_null(l_64);
        return(t);
      }
      t = not_null(f_64);
      t = real_to_string_0_0(t);
      if(((l_64 != NULL) && (l_64 != t)))
        _fail(t);
      else
        l_64 = t;
      t = l_65(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_64))), term_r_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(i_64))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_64))));
    }
    return(t);
  }
  ATerm c_65 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
    t = not_null(x_62);
    if(((o_64 != NULL) && (o_64 != t)))
      _fail(t);
    else
      o_64 = t;
    t = not_null(y_62);
    if(((p_64 != NULL) && (p_64 != t)))
      _fail(t);
    else
      p_64 = t;
    t = not_null(z_62);
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = not_null(u_62);
    {
      ATerm s_64 = NULL;
      ATerm o_65 (ATerm t)
      {
        t = not_null(s_64);
        if(((r_64 != NULL) && (r_64 != t)))
          _fail(t);
        else
          r_64 = t;
        t = not_null(s_64);
        return(t);
      }
      t = not_null(o_64);
      t = int_to_string_0_0(t);
      if(((s_64 != NULL) && (s_64 != t)))
        _fail(t);
      else
        s_64 = t;
      t = o_65(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_64))), term_r_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_64))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(q_64))));
    }
    return(t);
  }
  ATerm d_65 (ATerm t)
  {
    ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
    t = not_null(x_62);
    if(((t_64 != NULL) && (t_64 != t)))
      _fail(t);
    else
      t_64 = t;
    t = not_null(y_62);
    if(((u_64 != NULL) && (u_64 != t)))
      _fail(t);
    else
      u_64 = t;
    t = not_null(z_62);
    if(((v_64 != NULL) && (v_64 != t)))
      _fail(t);
    else
      v_64 = t;
    t = not_null(u_62);
    {
      ATerm x_64 = NULL;
      ATerm p_65 (ATerm t)
      {
        t = not_null(x_64);
        if(((w_64 != NULL) && (w_64 != t)))
          _fail(t);
        else
          w_64 = t;
        t = not_null(x_64);
        return(t);
      }
      t = not_null(t_64);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((x_64 != NULL) && (x_64 != t)))
        _fail(t);
      else
        x_64 = t;
      t = p_65(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_64)))), term_r_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(u_64))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_64))));
    }
    return(t);
  }
  if(((u_62 != NULL) && (u_62 != t)))
    _fail(t);
  else
    u_62 = t;
  t = not_null(u_62);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
      z_62 = ATgetArgument(t, 2);
      t = not_null(v_62);
      if(match_cons(t, sym_Match_1))
        {
          w_62 = ATgetArgument(t, 0);
          t = not_null(w_62);
          if(match_cons(t, sym_Op_2))
            {
              x_62 = ATgetArgument(t, 0);
              t_62 = ATgetArgument(t, 1);
              t = not_null(t_62);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_62 = ATgetFirst((ATermList) t);
                  o_62 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(o_62);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_62 = ATgetFirst((ATermList) t);
                      s_62 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(s_62);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(q_62);
                          if(match_cons(t, sym_Var_1))
                            {
                              r_62 = ATgetArgument(t, 0);
                              t = not_null(j_62);
                              if(match_cons(t, sym_Var_1))
                                {
                                  k_62 = ATgetArgument(t, 0);
                                  t = not_null(x_62);
                                  if(match_string(t, "Cons"))
                                    {
                                      ATerm s_32 = t;
                                      int t_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = y_64(t);
                                          ;
                                          LocalPopChoice(t_32);
                                        }
                                      else
                                        {
                                          t = s_32;
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
                                  t = not_null(x_62);
                                  t = a_65(t);
                                }
                            }
                          else
                            {
                              t = not_null(x_62);
                              t = a_65(t);
                            }
                        }
                      else
                        {
                          t = not_null(x_62);
                          t = a_65(t);
                        }
                    }
                  else
                    {
                      t = not_null(x_62);
                      t = a_65(t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(x_62);
                      if(match_string(t, "Nil"))
                        {
                          ATerm u_32 = t;
                          int v_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = z_64(t);
                              ;
                              LocalPopChoice(v_32);
                            }
                          else
                            {
                              t = u_32;
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
                      t = not_null(x_62);
                      t = a_65(t);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  x_62 = ATgetArgument(t, 0);
                  t = b_65(t);
                }
              else
                {
                  if(match_cons(t, sym_Int_1))
                    {
                      x_62 = ATgetArgument(t, 0);
                      t = c_65(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          x_62 = ATgetArgument(t, 0);
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
ATerm PlainBody_0_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  ATerm y_65 (ATerm t)
  {
    ATerm w_65 = NULL,x_65 = NULL;
    t = not_null(u_65);
    if(((w_65 != NULL) && (w_65 != t)))
      _fail(t);
    else
      w_65 = t;
    t = not_null(v_65);
    if(((x_65 != NULL) && (x_65 != t)))
      _fail(t);
    else
      x_65 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_w_32), not_null(x_65)));
    return(t);
  }
  if(((t_65 != NULL) && (t_65 != t)))
    _fail(t);
  else
    t_65 = t;
  t = not_null(t_65);
  if(match_cons(t, sym__2))
    {
      u_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
      t = y_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0_0 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
  ATerm h_66 (ATerm t)
  {
    ATerm g_66 = NULL;
    t = not_null(f_66);
    if(((g_66 != NULL) && (g_66 != t)))
      _fail(t);
    else
      g_66 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_66)), term_y_32), term_x_32);
    return(t);
  }
  if(((d_66 != NULL) && (d_66 != t)))
    _fail(t);
  else
    d_66 = t;
  t = not_null(d_66);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_66 = ATgetFirst((ATermList) t);
      f_66 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(e_66);
      if(match_int(t, 10))
        {
          t = h_66(t);
        }
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
ATerm Escape_backslash_0_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  ATerm p_66 (ATerm t)
  {
    ATerm o_66 = NULL;
    t = not_null(n_66);
    if(((o_66 != NULL) && (o_66 != t)))
      _fail(t);
    else
      o_66 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_66)), term_x_32), term_x_32);
    return(t);
  }
  if(((l_66 != NULL) && (l_66 != t)))
    _fail(t);
  else
    l_66 = t;
  t = not_null(l_66);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_66 = ATgetFirst((ATermList) t);
      n_66 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(m_66);
      if(match_int(t, 92))
        {
          t = p_66(t);
        }
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
ATerm Escape_double_quote_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  ATerm x_66 (ATerm t)
  {
    ATerm w_66 = NULL;
    t = not_null(v_66);
    if(((w_66 != NULL) && (w_66 != t)))
      _fail(t);
    else
      w_66 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_66)), term_z_32), term_x_32);
    return(t);
  }
  if(((t_66 != NULL) && (t_66 != t)))
    _fail(t);
  else
    t_66 = t;
  t = not_null(t_66);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_66 = ATgetFirst((ATermList) t);
      v_66 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(u_66);
      if(match_int(t, 34))
        {
          t = x_66(t);
        }
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
ATerm Escape_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0_0(t);
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
            t = Escape_backslash_0_0(t);
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            t = Escape_linefeed_0_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm x_2 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, x_2, t);
      }
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = Nil_0_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(escape_chars_0_0, t);
  return(t);
}
ATerm TracedBody_0_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  ATerm s_67 (ATerm t)
  {
    ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,q_67 = NULL;
    t = not_null(k_67);
    if(((m_67 != NULL) && (m_67 != t)))
      _fail(t);
    else
      m_67 = t;
    t = not_null(l_67);
    if(((n_67 != NULL) && (n_67 != t)))
      _fail(t);
    else
      n_67 = t;
    t = not_null(j_67);
    {
      ATerm i_33;
      i_33 = t;
      {
        ATerm p_67 = NULL;
        ATerm t_67 (ATerm t)
        {
          t = not_null(p_67);
          if(((o_67 != NULL) && (o_67 != t)))
            _fail(t);
          else
            o_67 = t;
          t = not_null(p_67);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, term_j_33), not_null(m_67));
        t = concat_strings_0_0(t);
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        if(((p_67 != NULL) && (p_67 != t)))
          _fail(t);
        else
          p_67 = t;
        t = t_67(t);
      }
      t = i_33;
      {
        ATerm r_67 = NULL;
        ATerm u_67 (ATerm t)
        {
          t = not_null(r_67);
          if(((q_67 != NULL) && (q_67 != t)))
            _fail(t);
          else
            q_67 = t;
          t = not_null(r_67);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, term_k_33), not_null(m_67));
        t = concat_strings_0_0(t);
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        if(((r_67 != NULL) && (r_67 != t)))
          _fail(t);
        else
          r_67 = t;
        t = u_67(t);
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_67))), term_n_33)))), not_null(n_67)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(o_67))), term_n_33)))));
      }
    }
    return(t);
  }
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  t = not_null(j_67);
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
      t = s_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TraceAllFuns_0_0 (ATerm t)
{
  ATerm y_67 = NULL;
  ATerm d_68 (ATerm t)
  {
    ATerm z_67 = NULL,a_68 = NULL;
    t = not_null(y_67);
    if(((z_67 != NULL) && (z_67 != t)))
      _fail(t);
    else
      z_67 = t;
    t = not_null(y_67);
    if(((a_68 != NULL) && (a_68 != t)))
      _fail(t);
    else
      a_68 = t;
    t = not_null(y_67);
    {
      ATerm b_68 = NULL,c_68 = NULL;
      t = (ATerm) ATempty;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = rewrite_1_0(y_2, t);
        if(((b_68 != NULL) && (b_68 != t)))
          _fail(t);
        else
          b_68 = t;
        t = not_null(b_68);
        if(match_cons(t, sym_Defined_1))
          {
            c_68 = ATgetArgument(t, 0);
            t = not_null(c_68);
            if(match_string(t, "o_0"))
              {
                t = not_null(b_68);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(a_68);
    }
    return(t);
  }
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = d_68(t);
  return(t);
}
ATerm TraceFun_0_0 (ATerm t)
{
  ATerm h_68 = NULL;
  ATerm m_68 (ATerm t)
  {
    ATerm i_68 = NULL,j_68 = NULL;
    t = not_null(h_68);
    if(((j_68 != NULL) && (j_68 != t)))
      _fail(t);
    else
      j_68 = t;
    t = not_null(h_68);
    if(((i_68 != NULL) && (i_68 != t)))
      _fail(t);
    else
      i_68 = t;
    t = not_null(h_68);
    {
      ATerm k_68 = NULL,l_68 = NULL;
      t = not_null(j_68);
      {
        ATerm z_2 (ATerm t)
        {
          t = term_l_9;
          return(t);
        }
        t = rewrite_1_0(z_2, t);
        if(((k_68 != NULL) && (k_68 != t)))
          _fail(t);
        else
          k_68 = t;
        t = not_null(k_68);
        if(match_cons(t, sym_Defined_1))
          {
            l_68 = ATgetArgument(t, 0);
            t = not_null(l_68);
            if(match_string(t, "r_0"))
              {
                t = not_null(k_68);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(i_68);
    }
    return(t);
  }
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  t = m_68(t);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  ATerm a_70 (ATerm t)
  {
    ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,p_69 = NULL;
    t = not_null(a_69);
    if(((d_69 != NULL) && (d_69 != t)))
      _fail(t);
    else
      d_69 = t;
    t = not_null(b_69);
    if(((e_69 != NULL) && (e_69 != t)))
      _fail(t);
    else
      e_69 = t;
    t = not_null(c_69);
    if(((f_69 != NULL) && (f_69 != t)))
      _fail(t);
    else
      f_69 = t;
    t = not_null(y_68);
    if(((g_69 != NULL) && (g_69 != t)))
      _fail(t);
    else
      g_69 = t;
    t = not_null(z_68);
    {
      ATerm o_33;
      o_33 = t;
      {
        ATerm l_69 = NULL;
        ATerm c_70 (ATerm t)
        {
          ATerm m_69 = NULL;
          ATerm d_70 (ATerm t)
          {
            ATerm n_69 = NULL;
            ATerm e_70 (ATerm t)
            {
              ATerm o_69 = NULL;
              ATerm f_70 (ATerm t)
              {
                t = not_null(o_69);
                if(((k_69 != NULL) && (k_69 != t)))
                  _fail(t);
                else
                  k_69 = t;
                t = not_null(o_69);
                return(t);
              }
              t = not_null(n_69);
              if(((j_69 != NULL) && (j_69 != t)))
                _fail(t);
              else
                j_69 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), not_null(g_69));
              {
                ATerm p_33 = t;
                int q_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      ATerm r_33 = t;
                      int s_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TraceFun_0_0(t);
                          ;
                          LocalPopChoice(s_33);
                        }
                      else
                        {
                          t = r_33;
                          t = TraceAllFuns_0_0(t);
                        }
                      return(t);
                    }
                    t = _2_0(a_3, _id, t);
                    t = TracedBody_0_0(t);
                    ;
                    LocalPopChoice(q_33);
                  }
                else
                  {
                    t = p_33;
                    t = PlainBody_0_0(t);
                  }
                if(((o_69 != NULL) && (o_69 != t)))
                  _fail(t);
                else
                  o_69 = t;
                t = f_70(t);
              }
              return(t);
            }
            t = not_null(m_69);
            if(((i_69 != NULL) && (i_69 != t)))
              _fail(t);
            else
              i_69 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_69), not_null(i_69));
            t = conc_0_0(t);
            if(((n_69 != NULL) && (n_69 != t)))
              _fail(t);
            else
              n_69 = t;
            t = e_70(t);
            return(t);
          }
          t = not_null(l_69);
          if(((h_69 != NULL) && (h_69 != t)))
            _fail(t);
          else
            h_69 = t;
          t = not_null(f_69);
          t = map_1_0(TranslateVarDec_0_0, t);
          if(((m_69 != NULL) && (m_69 != t)))
            _fail(t);
          else
            m_69 = t;
          t = d_70(t);
          return(t);
        }
        t = not_null(e_69);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((l_69 != NULL) && (l_69 != t)))
          _fail(t);
        else
          l_69 = t;
        t = c_70(t);
      }
      t = o_33;
      {
        ATerm q_69 = NULL;
        ATerm g_70 (ATerm t)
        {
          t = not_null(q_69);
          if(((p_69 != NULL) && (p_69 != t)))
            _fail(t);
          else
            p_69 = t;
          t = not_null(q_69);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_69), (ATerm) ATinsert(ATempty, term_u_33));
        t = conc_0_0(t);
        if(((q_69 != NULL) && (q_69 != t)))
          _fail(t);
        else
          q_69 = t;
        t = g_70(t);
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(p_69)))), not_null(k_69));
      }
    }
    return(t);
  }
  ATerm b_70 (ATerm t)
  {
    ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,y_69 = NULL;
    t = not_null(a_69);
    if(((r_69 != NULL) && (r_69 != t)))
      _fail(t);
    else
      r_69 = t;
    t = not_null(b_69);
    if(((s_69 != NULL) && (s_69 != t)))
      _fail(t);
    else
      s_69 = t;
    t = not_null(c_69);
    if(((t_69 != NULL) && (t_69 != t)))
      _fail(t);
    else
      t_69 = t;
    t = not_null(z_68);
    {
      ATerm v_33;
      v_33 = t;
      {
        ATerm w_69 = NULL;
        ATerm h_70 (ATerm t)
        {
          ATerm x_69 = NULL;
          ATerm i_70 (ATerm t)
          {
            t = not_null(x_69);
            if(((v_69 != NULL) && (v_69 != t)))
              _fail(t);
            else
              v_69 = t;
            t = not_null(x_69);
            return(t);
          }
          t = not_null(w_69);
          if(((u_69 != NULL) && (u_69 != t)))
            _fail(t);
          else
            u_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_69), not_null(t_69));
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm y_33 = t;
                  int z_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = TraceFun_0_0(t);
                      ;
                      LocalPopChoice(z_33);
                    }
                  else
                    {
                      t = y_33;
                      t = TraceAllFuns_0_0(t);
                    }
                  return(t);
                }
                t = _2_0(b_3, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
                t = PlainBody_0_0(t);
              }
            if(((x_69 != NULL) && (x_69 != t)))
              _fail(t);
            else
              x_69 = t;
            t = i_70(t);
          }
          return(t);
        }
        t = not_null(s_69);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((w_69 != NULL) && (w_69 != t)))
          _fail(t);
        else
          w_69 = t;
        t = h_70(t);
      }
      t = v_33;
      {
        ATerm z_69 = NULL;
        ATerm j_70 (ATerm t)
        {
          t = not_null(z_69);
          if(((y_69 != NULL) && (y_69 != t)))
            _fail(t);
          else
            y_69 = t;
          t = not_null(z_69);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_69), (ATerm) ATinsert(ATempty, term_u_33));
        t = conc_0_0(t);
        if(((z_69 != NULL) && (z_69 != t)))
          _fail(t);
        else
          z_69 = t;
        t = j_70(t);
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(y_69)))), not_null(v_69));
      }
    }
    return(t);
  }
  if(((z_68 != NULL) && (z_68 != t)))
    _fail(t);
  else
    z_68 = t;
  t = not_null(z_68);
  if(match_cons(t, sym_SDefT_4))
    {
      a_69 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
      c_69 = ATgetArgument(t, 2);
      y_68 = ATgetArgument(t, 3);
      t = a_70(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_69 = ATgetArgument(t, 0);
          b_69 = ATgetArgument(t, 1);
          c_69 = ATgetArgument(t, 2);
          t = b_70(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  ATerm a_71 (ATerm t)
  {
    ATerm y_70 = NULL,z_70 = NULL;
    t = not_null(w_70);
    if(((z_70 != NULL) && (z_70 != t)))
      _fail(t);
    else
      z_70 = t;
    t = not_null(x_70);
    if(((y_70 != NULL) && (y_70 != t)))
      _fail(t);
    else
      y_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_70)), not_null(z_70)), (ATerm) ATinsert(ATempty, not_null(z_70)));
    t = conc_0_0(t);
    return(t);
  }
  if(((v_70 != NULL) && (v_70 != t)))
    _fail(t);
  else
    v_70 = t;
  t = not_null(v_70);
  if(match_cons(t, sym__2))
    {
      w_70 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
      t = a_71(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm c_71 = NULL;
  ATerm d_71 = NULL;
  ATerm e_71 (ATerm t)
  {
    t = not_null(d_71);
    if(((c_71 != NULL) && (c_71 != t)))
      _fail(t);
    else
      c_71 = t;
    t = not_null(d_71);
    return(t);
  }
  if(((d_71 != NULL) && (d_71 != t)))
    _fail(t);
  else
    d_71 = t;
  t = e_71(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, not_null(c_71));
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = v_122(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  ATerm l_71 (ATerm t)
  {
    ATerm k_71 = NULL;
    t = not_null(i_71);
    if(((k_71 != NULL) && (k_71 != t)))
      _fail(t);
    else
      k_71 = t;
    t = not_null(k_71);
    return(t);
  }
  if(((h_71 != NULL) && (h_71 != t)))
    _fail(t);
  else
    h_71 = t;
  t = not_null(h_71);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_71 = ATgetFirst((ATermList) t);
      j_71 = (ATerm) ATgetNext((ATermList) t);
      t = l_71(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  ATerm t_71 (ATerm t)
  {
    ATerm r_71 = NULL,s_71 = NULL;
    t = not_null(p_71);
    if(((r_71 != NULL) && (r_71 != t)))
      _fail(t);
    else
      r_71 = t;
    t = not_null(q_71);
    if(((s_71 != NULL) && (s_71 != t)))
      _fail(t);
    else
      s_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_71), not_null(s_71));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((o_71 != NULL) && (o_71 != t)))
    _fail(t);
  else
    o_71 = t;
  t = not_null(o_71);
  if(match_cons(t, sym__2))
    {
      p_71 = ATgetArgument(t, 0);
      q_71 = ATgetArgument(t, 1);
      t = t_71(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm w_71 = NULL;
  ATerm a_72 (ATerm t)
  {
    ATerm x_71 = NULL,y_71 = NULL;
    t = not_null(w_71);
    if(((x_71 != NULL) && (x_71 != t)))
      _fail(t);
    else
      x_71 = t;
    t = not_null(w_71);
    {
      ATerm z_71 = NULL;
      ATerm b_72 (ATerm t)
      {
        t = not_null(z_71);
        if(((y_71 != NULL) && (y_71 != t)))
          _fail(t);
        else
          y_71 = t;
        t = not_null(z_71);
        return(t);
      }
      t = term_a_34;
      t = d_134(t);
      if(((z_71 != NULL) && (z_71 != t)))
        _fail(t);
      else
        z_71 = t;
      t = b_72(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_71), not_null(x_71));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((w_71 != NULL) && (w_71 != t)))
    _fail(t);
  else
    w_71 = t;
  t = a_72(t);
  return(t);
}
ATerm ConstructorName_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  ATerm s_72 (ATerm t)
  {
    ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
    t = not_null(i_72);
    if(((l_72 != NULL) && (l_72 != t)))
      _fail(t);
    else
      l_72 = t;
    t = not_null(j_72);
    if(((m_72 != NULL) && (m_72 != t)))
      _fail(t);
    else
      m_72 = t;
    t = not_null(k_72);
    if(((n_72 != NULL) && (n_72 != t)))
      _fail(t);
    else
      n_72 = t;
    t = not_null(i_72);
    {
      ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
      ATerm t_72 (ATerm t)
      {
        t = not_null(r_72);
        if(((o_72 != NULL) && (o_72 != t)))
          _fail(t);
        else
          o_72 = t;
        t = not_null(p_72);
        return(t);
      }
      t = not_null(l_72);
      {
        ATerm c_3 (ATerm t)
        {
          t = term_b_34;
          return(t);
        }
        t = rewrite_1_0(c_3, t);
        if(((p_72 != NULL) && (p_72 != t)))
          _fail(t);
        else
          p_72 = t;
        t = not_null(p_72);
        if(match_cons(t, sym_Defined_2))
          {
            q_72 = ATgetArgument(t, 0);
            r_72 = ATgetArgument(t, 1);
            t = not_null(q_72);
            if(match_string(t, "j_0"))
              {
                t = t_72(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(o_72);
    }
    return(t);
  }
  if(((i_72 != NULL) && (i_72 != t)))
    _fail(t);
  else
    i_72 = t;
  t = not_null(i_72);
  if(match_cons(t, sym__2))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
      t = s_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  ATerm u_73 (ATerm t)
  {
    ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,s_73 = NULL;
    t = not_null(i_73);
    if(((k_73 != NULL) && (k_73 != t)))
      _fail(t);
    else
      k_73 = t;
    t = not_null(j_73);
    if(((l_73 != NULL) && (l_73 != t)))
      _fail(t);
    else
      l_73 = t;
    t = not_null(h_73);
    {
      ATerm c_34;
      c_34 = t;
      {
        ATerm p_73 = NULL;
        ATerm v_73 (ATerm t)
        {
          ATerm q_73 = NULL;
          ATerm w_73 (ATerm t)
          {
            ATerm r_73 = NULL;
            ATerm x_73 (ATerm t)
            {
              t = not_null(r_73);
              if(((o_73 != NULL) && (o_73 != t)))
                _fail(t);
              else
                o_73 = t;
              t = not_null(r_73);
              return(t);
            }
            t = not_null(q_73);
            if(((m_73 != NULL) && (m_73 != t)))
              _fail(t);
            else
              m_73 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), not_null(n_73));
            t = ConstructorName_0_0(t);
            if(((r_73 != NULL) && (r_73 != t)))
              _fail(t);
            else
              r_73 = t;
            t = x_73(t);
            return(t);
          }
          t = not_null(p_73);
          if(((n_73 != NULL) && (n_73 != t)))
            _fail(t);
          else
            n_73 = t;
          t = not_null(p_73);
          t = int_to_string_0_0(t);
          if(((q_73 != NULL) && (q_73 != t)))
            _fail(t);
          else
            q_73 = t;
          t = w_73(t);
          return(t);
        }
        t = not_null(l_73);
        t = Arity_0_0(t);
        if(((p_73 != NULL) && (p_73 != t)))
          _fail(t);
        else
          p_73 = t;
        t = v_73(t);
      }
      t = c_34;
      {
        ATerm t_73 = NULL;
        ATerm y_73 (ATerm t)
        {
          t = not_null(t_73);
          if(((s_73 != NULL) && (s_73 != t)))
            _fail(t);
          else
            s_73 = t;
          t = not_null(t_73);
          return(t);
        }
        t = not_null(k_73);
        t = double_quote_0_0(t);
        if(((t_73 != NULL) && (t_73 != t)))
          _fail(t);
        else
          t_73 = t;
        t = y_73(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_73)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_73)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_34), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(m_73))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(s_73))))))));
      }
    }
    return(t);
  }
  if(((h_73 != NULL) && (h_73 != t)))
    _fail(t);
  else
    h_73 = t;
  t = not_null(h_73);
  if(match_cons(t, sym_OpDecl_2))
    {
      i_73 = ATgetArgument(t, 0);
      j_73 = ATgetArgument(t, 1);
      t = u_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm c_74 = NULL;
  ATerm i_74 (ATerm t)
  {
    ATerm d_74 = NULL,e_74 = NULL;
    t = not_null(c_74);
    if(((d_74 != NULL) && (d_74 != t)))
      _fail(t);
    else
      d_74 = t;
    t = not_null(c_74);
    {
      ATerm f_74 = NULL,h_74 = NULL;
      ATerm k_74 (ATerm t)
      {
        t = not_null(h_74);
        if(((e_74 != NULL) && (e_74 != t)))
          _fail(t);
        else
          e_74 = t;
        t = not_null(h_74);
        return(t);
      }
      ATerm g_74 = NULL;
      ATerm j_74 (ATerm t)
      {
        t = not_null(g_74);
        if(((f_74 != NULL) && (f_74 != t)))
          _fail(t);
        else
          f_74 = t;
        t = not_null(g_74);
        return(t);
      }
      t = not_null(d_74);
      t = map_1_0(InitConstructor_0_0, t);
      t = concat_0_0(t);
      if(((g_74 != NULL) && (g_74 != t)))
        _fail(t);
      else
        g_74 = t;
      t = j_74(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), (ATerm) ATinsert(ATempty, term_i_34));
      t = conc_0_0(t);
      if(((h_74 != NULL) && (h_74 != t)))
        _fail(t);
      else
        h_74 = t;
      t = k_74(t);
      t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_34, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_u_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_74)));
    }
    return(t);
  }
  if(((c_74 != NULL) && (c_74 != t)))
    _fail(t);
  else
    c_74 = t;
  t = i_74(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm m_74 = NULL;
  ATerm o_74 (ATerm t)
  {
    ATerm n_74 = NULL;
    t = not_null(m_74);
    if(((n_74 != NULL) && (n_74 != t)))
      _fail(t);
    else
      n_74 = t;
    t = not_null(m_74);
    t = SSL_int_to_string(not_null(n_74));
    return(t);
  }
  if(((m_74 != NULL) && (m_74 != t)))
    _fail(t);
  else
    m_74 = t;
  t = o_74(t);
  return(t);
}
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  ATerm j_75 (ATerm t)
  {
    ATerm a_75 = NULL,b_75 = NULL;
    t = not_null(z_74);
    if(((a_75 != NULL) && (a_75 != t)))
      _fail(t);
    else
      a_75 = t;
    t = not_null(x_74);
    {
      ATerm c_75 = NULL;
      ATerm r_75 (ATerm t)
      {
        t = not_null(c_75);
        if(((b_75 != NULL) && (b_75 != t)))
          _fail(t);
        else
          b_75 = t;
        t = not_null(c_75);
        return(t);
      }
      t = not_null(a_75);
      t = p_0(t);
      if(((c_75 != NULL) && (c_75 != t)))
        _fail(t);
      else
        c_75 = t;
      t = r_75(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_75)), term_l_34), term_l_34);
    }
    return(t);
  }
  ATerm k_75 (ATerm t)
  {
    ATerm d_75 = NULL,e_75 = NULL;
    t = not_null(z_74);
    if(((d_75 != NULL) && (d_75 != t)))
      _fail(t);
    else
      d_75 = t;
    t = not_null(x_74);
    {
      ATerm f_75 = NULL;
      ATerm s_75 (ATerm t)
      {
        t = not_null(f_75);
        if(((e_75 != NULL) && (e_75 != t)))
          _fail(t);
        else
          e_75 = t;
        t = not_null(f_75);
        return(t);
      }
      t = not_null(d_75);
      t = p_0(t);
      if(((f_75 != NULL) && (f_75 != t)))
        _fail(t);
      else
        f_75 = t;
      t = s_75(t);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_75)), term_l_34);
    }
    return(t);
  }
  ATerm q_75 (ATerm t)
  {
    ATerm g_75 = NULL,h_75 = NULL;
    t = not_null(z_74);
    if(((g_75 != NULL) && (g_75 != t)))
      _fail(t);
    else
      g_75 = t;
    t = not_null(x_74);
    {
      ATerm i_75 = NULL;
      ATerm t_75 (ATerm t)
      {
        t = not_null(i_75);
        if(((h_75 != NULL) && (h_75 != t)))
          _fail(t);
        else
          h_75 = t;
        t = not_null(i_75);
        return(t);
      }
      t = not_null(g_75);
      t = p_0(t);
      if(((i_75 != NULL) && (i_75 != t)))
        _fail(t);
      else
        i_75 = t;
      t = t_75(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_75)), term_l_34), term_m_34), term_l_34);
    }
    return(t);
  }
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  t = not_null(x_74);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_74 = ATgetFirst((ATermList) t);
      z_74 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(y_74);
      if(match_int(t, 95))
        {
          t = j_75(t);
        }
      else
        {
          if(match_int(t, 45))
            {
              t = k_75(t);
            }
          else
            {
              if(match_int(t, 39))
                {
                  t = q_75(t);
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
ATerm escape_1_0 (ATerm r_122 (ATerm, ATerm (ATerm)), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm u_75 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_122(u_75, t);
          ;
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          {
            ATerm p_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, u_75, t);
                ;
                LocalPopChoice(q_34);
              }
            else
              {
                t = p_34;
                t = Nil_0_0(t);
              }
          }
        }
      return(t);
    }
    t = u_75(t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = l_119(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
        ATerm t_76 (ATerm t)
        {
          ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,r_76 = NULL;
          t = not_null(j_76);
          if(((n_76 != NULL) && (n_76 != t)))
            _fail(t);
          else
            n_76 = t;
          t = not_null(k_76);
          if(((o_76 != NULL) && (o_76 != t)))
            _fail(t);
          else
            o_76 = t;
          t = not_null(i_76);
          {
            ATerm t_34;
            t_34 = t;
            {
              ATerm q_76 = NULL;
              ATerm u_76 (ATerm t)
              {
                t = not_null(q_76);
                if(((p_76 != NULL) && (p_76 != t)))
                  _fail(t);
                else
                  p_76 = t;
                t = not_null(q_76);
                return(t);
              }
              t = not_null(n_76);
              t = n_119(t);
              if(((q_76 != NULL) && (q_76 != t)))
                _fail(t);
              else
                q_76 = t;
              t = u_76(t);
            }
            t = t_34;
            {
              ATerm s_76 = NULL;
              ATerm v_76 (ATerm t)
              {
                t = not_null(s_76);
                if(((r_76 != NULL) && (r_76 != t)))
                  _fail(t);
                else
                  r_76 = t;
                t = not_null(s_76);
                return(t);
              }
              t = not_null(o_76);
              t = foldr_3_0(l_119, m_119, n_119, t);
              if(((s_76 != NULL) && (s_76 != t)))
                _fail(t);
              else
                s_76 = t;
              t = v_76(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(r_76));
              t = m_119(t);
            }
          }
          return(t);
        }
        if(((i_76 != NULL) && (i_76 != t)))
          _fail(t);
        else
          i_76 = t;
        t = not_null(i_76);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_76 = ATgetFirst((ATermList) t);
            k_76 = (ATerm) ATgetNext((ATermList) t);
            t = t_76(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = term_h_30;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_n_30;
    return(t);
  }
  t = foldr_3_0(d_3, add_0_0, e_3, t);
  return(t);
}
ATerm Arity_0_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  ATerm f_77 (ATerm t)
  {
    ATerm c_77 = NULL,d_77 = NULL;
    t = not_null(b_77);
    if(((d_77 != NULL) && (d_77 != t)))
      _fail(t);
    else
      d_77 = t;
    t = not_null(z_76);
    if(((c_77 != NULL) && (c_77 != t)))
      _fail(t);
    else
      c_77 = t;
    t = not_null(d_77);
    t = length_0_0(t);
    return(t);
  }
  ATerm g_77 (ATerm t)
  {
    ATerm e_77 = NULL;
    t = not_null(b_77);
    if(((e_77 != NULL) && (e_77 != t)))
      _fail(t);
    else
      e_77 = t;
    t = term_h_30;
    return(t);
  }
  if(((a_77 != NULL) && (a_77 != t)))
    _fail(t);
  else
    a_77 = t;
  t = not_null(a_77);
  if(match_cons(t, sym_FunType_2))
    {
      b_77 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
      t = f_77(t);
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          b_77 = ATgetArgument(t, 0);
          t = g_77(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  ATerm h_78 (ATerm t)
  {
    ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
    t = not_null(v_77);
    if(((x_77 != NULL) && (x_77 != t)))
      _fail(t);
    else
      x_77 = t;
    t = not_null(w_77);
    if(((y_77 != NULL) && (y_77 != t)))
      _fail(t);
    else
      y_77 = t;
    t = not_null(u_77);
    {
      ATerm b_78 = NULL;
      ATerm i_78 (ATerm t)
      {
        ATerm c_78 = NULL,e_78 = NULL,g_78 = NULL;
        ATerm l_78 (ATerm t)
        {
          t = not_null(g_78);
          if(((a_78 != NULL) && (a_78 != t)))
            _fail(t);
          else
            a_78 = t;
          t = not_null(g_78);
          {
            ATerm u_34;
            u_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_77), not_null(z_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_34, not_null(a_78)));
            {
              ATerm f_3 (ATerm t)
              {
                t = term_b_34;
                return(t);
              }
              t = assert_1_0(f_3, t);
            }
            t = u_34;
          }
          return(t);
        }
        t = not_null(b_78);
        if(((z_77 != NULL) && (z_77 != t)))
          _fail(t);
        else
          z_77 = t;
        t = not_null(b_78);
        {
          ATerm w_34;
          w_34 = t;
          {
            ATerm d_78 = NULL;
            ATerm j_78 (ATerm t)
            {
              t = not_null(d_78);
              if(((c_78 != NULL) && (c_78 != t)))
                _fail(t);
              else
                c_78 = t;
              t = not_null(d_78);
              return(t);
            }
            t = not_null(x_77);
            t = cify_0_0(t);
            if(((d_78 != NULL) && (d_78 != t)))
              _fail(t);
            else
              d_78 = t;
            t = j_78(t);
          }
          t = w_34;
          {
            ATerm f_78 = NULL;
            ATerm k_78 (ATerm t)
            {
              t = not_null(f_78);
              if(((e_78 != NULL) && (e_78 != t)))
                _fail(t);
              else
                e_78 = t;
              t = not_null(f_78);
              return(t);
            }
            t = not_null(z_77);
            t = int_to_string_0_0(t);
            if(((f_78 != NULL) && (f_78 != t)))
              _fail(t);
            else
              f_78 = t;
            t = k_78(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_78)), term_y_34), not_null(c_78)), term_x_34);
            t = concat_strings_0_0(t);
            if(((g_78 != NULL) && (g_78 != t)))
              _fail(t);
            else
              g_78 = t;
            t = l_78(t);
          }
        }
        return(t);
      }
      t = not_null(y_77);
      t = Arity_0_0(t);
      if(((b_78 != NULL) && (b_78 != t)))
        _fail(t);
      else
        b_78 = t;
      t = i_78(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_78)), term_a_10)));
    }
    return(t);
  }
  if(((u_77 != NULL) && (u_77 != t)))
    _fail(t);
  else
    u_77 = t;
  t = not_null(u_77);
  if(match_cons(t, sym_OpDecl_2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
      t = h_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  ATerm g_79 (ATerm t)
  {
    ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,e_79 = NULL;
    t = not_null(x_78);
    if(((z_78 != NULL) && (z_78 != t)))
      _fail(t);
    else
      z_78 = t;
    t = not_null(u_78);
    {
      ATerm c_35;
      c_35 = t;
      {
        ATerm c_79 = NULL;
        ATerm h_79 (ATerm t)
        {
          ATerm d_79 = NULL;
          ATerm i_79 (ATerm t)
          {
            t = not_null(d_79);
            if(((b_79 != NULL) && (b_79 != t)))
              _fail(t);
            else
              b_79 = t;
            t = not_null(d_79);
            return(t);
          }
          t = not_null(c_79);
          if(((a_79 != NULL) && (a_79 != t)))
            _fail(t);
          else
            a_79 = t;
          t = not_null(z_78);
          t = InitConstructors_0_0(t);
          if(((d_79 != NULL) && (d_79 != t)))
            _fail(t);
          else
            d_79 = t;
          t = i_79(t);
          return(t);
        }
        t = not_null(z_78);
        t = map_1_0(DeclareConstructor_0_0, t);
        if(((c_79 != NULL) && (c_79 != t)))
          _fail(t);
        else
          c_79 = t;
        t = h_79(t);
      }
      t = c_35;
      {
        ATerm f_79 = NULL;
        ATerm j_79 (ATerm t)
        {
          t = not_null(f_79);
          if(((e_79 != NULL) && (e_79 != t)))
            _fail(t);
          else
            e_79 = t;
          t = not_null(f_79);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), (ATerm) ATinsert(ATempty, not_null(b_79)));
        t = conc_0_0(t);
        if(((f_79 != NULL) && (f_79 != t)))
          _fail(t);
        else
          f_79 = t;
        t = j_79(t);
        t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(e_79));
      }
    }
    return(t);
  }
  if(((u_78 != NULL) && (u_78 != t)))
    _fail(t);
  else
    u_78 = t;
  t = not_null(u_78);
  if(match_cons(t, sym_Signature_1))
    {
      v_78 = ATgetArgument(t, 0);
      t = not_null(v_78);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_78 = ATgetFirst((ATermList) t);
          y_78 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(w_78);
          if(match_cons(t, sym_Constructors_1))
            {
              x_78 = ATgetArgument(t, 0);
              t = not_null(y_78);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_79(t);
                }
              else
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
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  ATerm u_79 (ATerm t)
  {
    ATerm r_79 = NULL,s_79 = NULL;
    t = not_null(q_79);
    if(((r_79 != NULL) && (r_79 != t)))
      _fail(t);
    else
      r_79 = t;
    t = not_null(p_79);
    {
      ATerm t_79 = NULL;
      ATerm w_79 (ATerm t)
      {
        t = not_null(t_79);
        if(((s_79 != NULL) && (s_79 != t)))
          _fail(t);
        else
          s_79 = t;
        t = not_null(t_79);
        return(t);
      }
      t = not_null(r_79);
      t = map_1_0(TranslateType_0_0, t);
      if(((t_79 != NULL) && (t_79 != t)))
        _fail(t);
      else
        t_79 = t;
      t = w_79(t);
      t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(s_79)));
    }
    return(t);
  }
  ATerm v_79 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  if(((p_79 != NULL) && (p_79 != t)))
    _fail(t);
  else
    p_79 = t;
  t = not_null(p_79);
  if(match_cons(t, sym_FunType_2))
    {
      q_79 = ATgetArgument(t, 0);
      o_79 = ATgetArgument(t, 1);
      t = u_79(t);
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          q_79 = ATgetArgument(t, 0);
          t = v_79(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  ATerm m_80 (ATerm t)
  {
    ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
    t = not_null(e_80);
    if(((h_80 != NULL) && (h_80 != t)))
      _fail(t);
    else
      h_80 = t;
    t = not_null(g_80);
    if(((i_80 != NULL) && (i_80 != t)))
      _fail(t);
    else
      i_80 = t;
    t = not_null(d_80);
    {
      ATerm k_80 = NULL;
      ATerm o_80 (ATerm t)
      {
        t = not_null(k_80);
        if(((j_80 != NULL) && (j_80 != t)))
          _fail(t);
        else
          j_80 = t;
        t = not_null(k_80);
        return(t);
      }
      t = not_null(i_80);
      t = map_1_0(TranslateType_0_0, t);
      if(((k_80 != NULL) && (k_80 != t)))
        _fail(t);
      else
        k_80 = t;
      t = o_80(t);
      t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_80)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_80)))));
    }
    return(t);
  }
  ATerm n_80 (ATerm t)
  {
    ATerm l_80 = NULL;
    t = not_null(e_80);
    if(((l_80 != NULL) && (l_80 != t)))
      _fail(t);
    else
      l_80 = t;
    t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_80)), term_a_10));
    return(t);
  }
  if(((d_80 != NULL) && (d_80 != t)))
    _fail(t);
  else
    d_80 = t;
  t = not_null(d_80);
  if(match_cons(t, sym_VarDec_2))
    {
      e_80 = ATgetArgument(t, 0);
      f_80 = ATgetArgument(t, 1);
      t = not_null(f_80);
      if(match_cons(t, sym_FunType_2))
        {
          g_80 = ATgetArgument(t, 0);
          c_80 = ATgetArgument(t, 1);
          t = m_80(t);
        }
      else
        {
          if(match_cons(t, sym_ConstType_1))
            {
              g_80 = ATgetArgument(t, 0);
              t = n_80(t);
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
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,b_82 = NULL,c_82 = NULL;
  ATerm e_83 (ATerm t)
  {
    ATerm d_82 = NULL,f_82 = NULL,g_82 = NULL,j_82 = NULL;
    t = not_null(p_81);
    if(((d_82 != NULL) && (d_82 != t)))
      _fail(t);
    else
      d_82 = t;
    t = not_null(q_81);
    if(((f_82 != NULL) && (f_82 != t)))
      _fail(t);
    else
      f_82 = t;
    t = not_null(b_82);
    if(((g_82 != NULL) && (g_82 != t)))
      _fail(t);
    else
      g_82 = t;
    t = not_null(o_81);
    {
      ATerm k_82 = NULL;
      ATerm g_83 (ATerm t)
      {
        t = not_null(k_82);
        if(((j_82 != NULL) && (j_82 != t)))
          _fail(t);
        else
          j_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), (ATerm) ATinsert(ATempty, term_z_9));
        t = conc_0_0(t);
        return(t);
      }
      t = not_null(f_82);
      t = map_1_0(TranslateVarDec_0_0, t);
      if(((k_82 != NULL) && (k_82 != t)))
        _fail(t);
      else
        k_82 = t;
      t = g_83(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_82)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_82))))));
    }
    return(t);
  }
  ATerm f_83 (ATerm t)
  {
    ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,v_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
    t = not_null(p_81);
    if(((l_82 != NULL) && (l_82 != t)))
      _fail(t);
    else
      l_82 = t;
    t = not_null(q_81);
    if(((m_82 != NULL) && (m_82 != t)))
      _fail(t);
    else
      m_82 = t;
    t = not_null(b_82);
    if(((n_82 != NULL) && (n_82 != t)))
      _fail(t);
    else
      n_82 = t;
    t = not_null(c_82);
    if(((v_82 != NULL) && (v_82 != t)))
      _fail(t);
    else
      v_82 = t;
    t = not_null(o_81);
    {
      ATerm b_83 = NULL;
      ATerm h_83 (ATerm t)
      {
        ATerm c_83 = NULL;
        ATerm i_83 (ATerm t)
        {
          ATerm d_83 = NULL;
          ATerm j_83 (ATerm t)
          {
            t = not_null(d_83);
            if(((a_83 != NULL) && (a_83 != t)))
              _fail(t);
            else
              a_83 = t;
            t = not_null(d_83);
            return(t);
          }
          t = not_null(c_83);
          if(((z_82 != NULL) && (z_82 != t)))
            _fail(t);
          else
            z_82 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_9)), not_null(z_82)), not_null(y_82));
          t = concat_0_0(t);
          if(((d_83 != NULL) && (d_83 != t)))
            _fail(t);
          else
            d_83 = t;
          t = j_83(t);
          return(t);
        }
        t = not_null(b_83);
        if(((y_82 != NULL) && (y_82 != t)))
          _fail(t);
        else
          y_82 = t;
        t = not_null(n_82);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((c_83 != NULL) && (c_83 != t)))
          _fail(t);
        else
          c_83 = t;
        t = i_83(t);
        return(t);
      }
      t = not_null(m_82);
      t = map_1_0(TranslateVarDec_0_0, t);
      if(((b_83 != NULL) && (b_83 != t)))
        _fail(t);
      else
        b_83 = t;
      t = h_83(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_82)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_83))))));
    }
    return(t);
  }
  if(((o_81 != NULL) && (o_81 != t)))
    _fail(t);
  else
    o_81 = t;
  t = not_null(o_81);
  if(match_cons(t, sym_SDef_3))
    {
      p_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
      b_82 = ATgetArgument(t, 2);
      t = e_83(t);
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_81 = ATgetArgument(t, 0);
          q_81 = ATgetArgument(t, 1);
          b_82 = ATgetArgument(t, 2);
          c_82 = ATgetArgument(t, 3);
          t = f_83(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  ATerm s_84 (ATerm t)
  {
    ATerm e_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,q_84 = NULL;
    t = not_null(z_83);
    if(((e_84 != NULL) && (e_84 != t)))
      _fail(t);
    else
      e_84 = t;
    t = not_null(c_84);
    if(((h_84 != NULL) && (h_84 != t)))
      _fail(t);
    else
      h_84 = t;
    t = not_null(w_83);
    {
      ATerm d_35;
      d_35 = t;
      {
        ATerm k_84 = NULL;
        ATerm t_84 (ATerm t)
        {
          ATerm p_84 = NULL;
          ATerm w_84 (ATerm t)
          {
            t = not_null(p_84);
            if(((j_84 != NULL) && (j_84 != t)))
              _fail(t);
            else
              j_84 = t;
            t = not_null(p_84);
            return(t);
          }
          t = not_null(k_84);
          if(((i_84 != NULL) && (i_84 != t)))
            _fail(t);
          else
            i_84 = t;
          t = term_o_9;
          {
            ATerm e_35 = t;
            int f_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_config_0_0(t);
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm l_84 = NULL;
                    ATerm m_84 = NULL,o_84 = NULL;
                    ATerm v_84 (ATerm t)
                    {
                      t = not_null(o_84);
                      if(((l_84 != NULL) && (l_84 != t)))
                        _fail(t);
                      else
                        l_84 = t;
                      t = not_null(o_84);
                      return(t);
                    }
                    ATerm n_84 = NULL;
                    ATerm u_84 (ATerm t)
                    {
                      t = not_null(n_84);
                      if(((m_84 != NULL) && (m_84 != t)))
                        _fail(t);
                      else
                        m_84 = t;
                      t = not_null(n_84);
                      return(t);
                    }
                    if(((n_84 != NULL) && (n_84 != t)))
                      _fail(t);
                    else
                      n_84 = t;
                    t = u_84(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_g_35, not_null(m_84));
                    t = conc_strings_0_0(t);
                    if(((o_84 != NULL) && (o_84 != t)))
                      _fail(t);
                    else
                      o_84 = t;
                    t = v_84(t);
                    t = (ATerm) ATmakeAppl(sym_Include_1, not_null(l_84));
                    return(t);
                  }
                  t = map_1_0(g_3, t);
                }
                ;
                LocalPopChoice(f_35);
              }
            else
              {
                t = e_35;
                t = (ATerm) ATempty;
              }
            if(((p_84 != NULL) && (p_84 != t)))
              _fail(t);
            else
              p_84 = t;
            t = w_84(t);
          }
          return(t);
        }
        t = not_null(h_84);
        t = map_1_0(SDefToDeclaration_0_0, t);
        if(((k_84 != NULL) && (k_84 != t)))
          _fail(t);
        else
          k_84 = t;
        t = t_84(t);
      }
      t = d_35;
      {
        ATerm r_84 = NULL;
        ATerm x_84 (ATerm t)
        {
          t = not_null(r_84);
          if(((q_84 != NULL) && (q_84 != t)))
            _fail(t);
          else
            q_84 = t;
          t = not_null(r_84);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(h_84)), term_x_38)), not_null(i_84)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_38), (ATerm) ATmakeAppl(sym_Signature_1, not_null(e_84))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_35, (ATerm) ATinsert(ATempty, term_r_38)))), not_null(j_84));
        t = concat_0_0(t);
        if(((r_84 != NULL) && (r_84 != t)))
          _fail(t);
        else
          r_84 = t;
        t = x_84(t);
        t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(q_84));
      }
    }
    return(t);
  }
  if(((w_83 != NULL) && (w_83 != t)))
    _fail(t);
  else
    w_83 = t;
  t = not_null(w_83);
  if(match_cons(t, sym_Specification_1))
    {
      x_83 = ATgetArgument(t, 0);
      t = not_null(x_83);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_83 = ATgetFirst((ATermList) t);
          a_84 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_83);
          if(match_cons(t, sym_Signature_1))
            {
              z_83 = ATgetArgument(t, 0);
              t = not_null(a_84);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_84 = ATgetFirst((ATermList) t);
                  d_84 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(b_84);
                  if(match_cons(t, sym_Strategies_1))
                    {
                      c_84 = ATgetArgument(t, 0);
                      t = not_null(d_84);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = s_84(t);
                        }
                      else
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
ATerm Tl_0_0 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  ATerm e_85 (ATerm t)
  {
    ATerm d_85 = NULL;
    t = not_null(c_85);
    if(((d_85 != NULL) && (d_85 != t)))
      _fail(t);
    else
      d_85 = t;
    t = not_null(d_85);
    return(t);
  }
  if(((a_85 != NULL) && (a_85 != t)))
    _fail(t);
  else
    a_85 = t;
  t = not_null(a_85);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_85 = ATgetFirst((ATermList) t);
      c_85 = (ATerm) ATgetNext((ATermList) t);
      t = e_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  ATerm p_85 (ATerm t)
  {
    ATerm l_85 = NULL,m_85 = NULL;
    t = not_null(j_85);
    if(((l_85 != NULL) && (l_85 != t)))
      _fail(t);
    else
      l_85 = t;
    t = not_null(k_85);
    if(((m_85 != NULL) && (m_85 != t)))
      _fail(t);
    else
      m_85 = t;
    t = not_null(i_85);
    {
      ATerm y_38;
      y_38 = t;
      {
        ATerm n_85 = NULL;
        ATerm o_85 = NULL;
        ATerm q_85 (ATerm t)
        {
          t = not_null(o_85);
          if(((n_85 != NULL) && (n_85 != t)))
            _fail(t);
          else
            n_85 = t;
          t = not_null(o_85);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_85), not_null(m_85));
        {
          ATerm z_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(a_39);
            }
          else
            {
              t = z_38;
              t = (ATerm) ATempty;
            }
          if(((o_85 != NULL) && (o_85 != t)))
            _fail(t);
          else
            o_85 = t;
          t = q_85(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_85), not_null(m_85), not_null(n_85));
        t = table_put_0_0(t);
      }
      t = y_38;
    }
    return(t);
  }
  if(((i_85 != NULL) && (i_85 != t)))
    _fail(t);
  else
    i_85 = t;
  t = not_null(i_85);
  if(match_cons(t, sym__2))
    {
      j_85 = ATgetArgument(t, 0);
      k_85 = ATgetArgument(t, 1);
      t = p_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  ATerm b_39;
  b_39 = t;
  {
    ATerm a_86 = NULL;
    ATerm g_86 (ATerm t)
    {
      ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
      ATerm h_86 (ATerm t)
      {
        t = not_null(c_86);
        if(((y_85 != NULL) && (y_85 != t)))
          _fail(t);
        else
          y_85 = t;
        t = not_null(d_86);
        if(((x_85 != NULL) && (x_85 != t)))
          _fail(t);
        else
          x_85 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_85), term_c_39, not_null(x_85));
        t = table_put_0_0(t);
        t = not_null(y_85);
        {
          ATerm h_3 (ATerm t)
          {
            ATerm e_86 = NULL;
            ATerm i_86 (ATerm t)
            {
              ATerm f_86 = NULL;
              t = not_null(e_86);
              if(((f_86 != NULL) && (f_86 != t)))
                _fail(t);
              else
                f_86 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_85), not_null(f_86));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((e_86 != NULL) && (e_86 != t)))
              _fail(t);
            else
              e_86 = t;
            t = i_86(t);
            return(t);
          }
          t = map_1_0(h_3, t);
        }
        return(t);
      }
      t = not_null(a_86);
      if(((z_85 != NULL) && (z_85 != t)))
        _fail(t);
      else
        z_85 = t;
      t = not_null(a_86);
      {
        ATerm d_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_85), term_c_39);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(h_39);
          }
        else
          {
            t = d_39;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((b_86 != NULL) && (b_86 != t)))
          _fail(t);
        else
          b_86 = t;
        t = not_null(b_86);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_86 = ATgetFirst((ATermList) t);
            d_86 = (ATerm) ATgetNext((ATermList) t);
            t = h_86(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = y_133(t);
    if(((a_86 != NULL) && (a_86 != t)))
      _fail(t);
    else
      a_86 = t;
    t = g_86(t);
  }
  t = b_39;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_106(t);
      t = n_106(t);
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      t = n_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  ATerm m_86 = NULL;
  ATerm k_39;
  k_39 = t;
  {
    ATerm n_86 = NULL;
    ATerm q_86 (ATerm t)
    {
      ATerm o_86 = NULL;
      t = not_null(n_86);
      if(((m_86 != NULL) && (m_86 != t)))
        _fail(t);
      else
        m_86 = t;
      t = not_null(n_86);
      {
        ATerm p_86 = NULL;
        ATerm r_86 (ATerm t)
        {
          t = not_null(p_86);
          if(((o_86 != NULL) && (o_86 != t)))
            _fail(t);
          else
            o_86 = t;
          t = not_null(p_86);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_86), term_c_39);
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = l_39;
              t = (ATerm) ATempty;
            }
          if(((p_86 != NULL) && (p_86 != t)))
            _fail(t);
          else
            p_86 = t;
          t = r_86(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(m_86), term_c_39, (ATerm) ATinsert(CheckATermList(not_null(o_86)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = x_133(t);
    if(((n_86 != NULL) && (n_86 != t)))
      _fail(t);
    else
      n_86 = t;
    t = q_86(t);
  }
  t = k_39;
  return(t);
}
ATerm scope_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm t)
{
  t = begin_scope_1_0(z_133, t);
  {
    ATerm i_3 (ATerm t)
    {
      t = end_scope_1_0(z_133, t);
      return(t);
    }
    t = restore_always_2_0(a_134, i_3, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  ATerm j_87 (ATerm t)
  {
    ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
    t = not_null(y_86);
    if(((a_87 != NULL) && (a_87 != t)))
      _fail(t);
    else
      a_87 = t;
    t = not_null(z_86);
    if(((b_87 != NULL) && (b_87 != t)))
      _fail(t);
    else
      b_87 = t;
    t = not_null(x_86);
    {
      ATerm n_39;
      n_39 = t;
      {
        ATerm f_87 = NULL;
        ATerm k_87 (ATerm t)
        {
          ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
          ATerm l_87 (ATerm t)
          {
            t = not_null(h_87);
            if(((d_87 != NULL) && (d_87 != t)))
              _fail(t);
            else
              d_87 = t;
            t = not_null(i_87);
            if(((e_87 != NULL) && (e_87 != t)))
              _fail(t);
            else
              e_87 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_87), term_c_39, (ATerm) ATinsert(CheckATermList(not_null(e_87)), (ATerm) ATinsert(CheckATermList(not_null(d_87)), not_null(a_87))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(f_87);
          if(((c_87 != NULL) && (c_87 != t)))
            _fail(t);
          else
            c_87 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_87), not_null(a_87), not_null(b_87));
          t = table_push_0_0(t);
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_87), term_c_39);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((g_87 != NULL) && (g_87 != t)))
              _fail(t);
            else
              g_87 = t;
            t = not_null(g_87);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_87 = ATgetFirst((ATermList) t);
                i_87 = (ATerm) ATgetNext((ATermList) t);
                t = l_87(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = b_134(t);
        if(((f_87 != NULL) && (f_87 != t)))
          _fail(t);
        else
          f_87 = t;
        t = k_87(t);
      }
      t = n_39;
    }
    return(t);
  }
  if(((x_86 != NULL) && (x_86 != t)))
    _fail(t);
  else
    x_86 = t;
  t = not_null(x_86);
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      z_86 = ATgetArgument(t, 1);
      t = j_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  ATerm q_39;
  q_39 = t;
  {
    ATerm q_87 = NULL;
    ATerm s_87 (ATerm t)
    {
      ATerm r_87 = NULL;
      ATerm t_87 (ATerm t)
      {
        t = not_null(r_87);
        if(((p_87 != NULL) && (p_87 != t)))
          _fail(t);
        else
          p_87 = t;
        t = not_null(r_87);
        return(t);
      }
      t = not_null(q_87);
      if(((o_87 != NULL) && (o_87 != t)))
        _fail(t);
      else
        o_87 = t;
      t = term_q_22;
      if(((r_87 != NULL) && (r_87 != t)))
        _fail(t);
      else
        r_87 = t;
      t = t_87(t);
      return(t);
    }
    t = term_s_39;
    if(((q_87 != NULL) && (q_87 != t)))
      _fail(t);
    else
      q_87 = t;
    t = s_87(t);
  }
  t = q_39;
  {
    ATerm t_39;
    t_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, not_null(p_87)));
    {
      ATerm j_3 (ATerm t)
      {
        t = term_q_15;
        return(t);
      }
      t = assert_1_0(j_3, t);
    }
    t = t_39;
  }
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  {
    ATerm x_87 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = term_n_18;
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        ATerm m_3 (ATerm t)
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0_0(t);
              ;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              {
                ATerm x_39 = t;
                int y_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0_0(t);
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
                          t = TranslateDef_0_0(t);
                          ;
                          LocalPopChoice(a_40);
                        }
                      else
                        {
                          t = z_39;
                          {
                            ATerm b_40 = t;
                            int c_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = TranslateStratMatchGuard_0_0(t);
                                ;
                                LocalPopChoice(c_40);
                              }
                            else
                              {
                                t = b_40;
                                t = TranslateStrat_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1_0(m_3, t);
        t = SRTS_all(x_87, t);
        t = repeat_1_0(Csimplify_0_0, t);
        return(t);
      }
      t = scope_2_0(k_3, l_3, t);
      return(t);
    }
    t = x_87(t);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm w_87 = NULL;
          ATerm y_87 (ATerm t)
          {
            t = not_null(w_87);
            t = init_cached_terms_0_0(t);
            return(t);
          }
          if(((w_87 != NULL) && (w_87 != t)))
            _fail(t);
          else
            w_87 = t;
          t = not_null(w_87);
          if(match_cons(t, sym_InitCachedTerms_0))
            {
              t = y_87(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1_0(o_3, t);
        return(t);
      }
      t = try_1_0(n_3, t);
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_40;
  d_40 = t;
  {
    ATerm a_88 = NULL;
    ATerm b_88 = NULL;
    ATerm c_88 (ATerm t)
    {
      t = not_null(b_88);
      if(((a_88 != NULL) && (a_88 != t)))
        _fail(t);
      else
        a_88 = t;
      t = not_null(b_88);
      return(t);
    }
    t = term_a_34;
    t = whoami_0_0(t);
    if(((b_88 != NULL) && (b_88 != t)))
      _fail(t);
    else
      b_88 = t;
    t = c_88(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_40), not_null(a_88)), term_f_40));
    t = printnl_0_0(t);
    t = term_n_30;
    t = exit_0_0(t);
  }
  t = d_40;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  ATerm k_88 (ATerm t)
  {
    ATerm i_88 = NULL,j_88 = NULL;
    t = not_null(g_88);
    if(((i_88 != NULL) && (i_88 != t)))
      _fail(t);
    else
      i_88 = t;
    t = not_null(h_88);
    if(((j_88 != NULL) && (j_88 != t)))
      _fail(t);
    else
      j_88 = t;
    t = not_null(f_88);
    {
      ATerm h_40;
      h_40 = t;
      t = SSL_printnl(not_null(i_88), not_null(j_88));
      t = h_40;
    }
    return(t);
  }
  if(((f_88 != NULL) && (f_88 != t)))
    _fail(t);
  else
    f_88 = t;
  t = not_null(f_88);
  if(match_cons(t, sym__2))
    {
      g_88 = ATgetArgument(t, 0);
      h_88 = ATgetArgument(t, 1);
      t = k_88(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm m_88 = NULL;
  ATerm o_88 (ATerm t)
  {
    ATerm n_88 = NULL;
    t = not_null(m_88);
    if(((n_88 != NULL) && (n_88 != t)))
      _fail(t);
    else
      n_88 = t;
    t = not_null(m_88);
    t = SSL_implode_string(not_null(n_88));
    return(t);
  }
  if(((m_88 != NULL) && (m_88 != t)))
    _fail(t);
  else
    m_88 = t;
  t = o_88(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
      {
        ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
        ATerm x_88 (ATerm t)
        {
          ATerm u_88 = NULL,v_88 = NULL;
          t = not_null(s_88);
          if(((u_88 != NULL) && (u_88 != t)))
            _fail(t);
          else
            u_88 = t;
          t = not_null(t_88);
          if(((v_88 != NULL) && (v_88 != t)))
            _fail(t);
          else
            v_88 = t;
          t = not_null(u_88);
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(v_88);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(p_3, t);
          }
          return(t);
        }
        if(((r_88 != NULL) && (r_88 != t)))
          _fail(t);
        else
          r_88 = t;
        t = not_null(r_88);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_88 = ATgetFirst((ATermList) t);
            t_88 = (ATerm) ATgetNext((ATermList) t);
            t = x_88(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_89 = NULL;
  ATerm l_89 (ATerm t)
  {
    ATerm e_89 = NULL,f_89 = NULL;
    t = not_null(d_89);
    if(((e_89 != NULL) && (e_89 != t)))
      _fail(t);
    else
      e_89 = t;
    t = not_null(d_89);
    {
      ATerm g_89 = NULL;
      ATerm m_89 (ATerm t)
      {
        ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
        ATerm n_89 (ATerm t)
        {
          t = not_null(k_89);
          if(((f_89 != NULL) && (f_89 != t)))
            _fail(t);
          else
            f_89 = t;
          t = not_null(i_89);
          return(t);
        }
        t = not_null(g_89);
        if(((h_89 != NULL) && (h_89 != t)))
          _fail(t);
        else
          h_89 = t;
        t = not_null(g_89);
        t = SSL_explode_term(not_null(h_89));
        if(((i_89 != NULL) && (i_89 != t)))
          _fail(t);
        else
          i_89 = t;
        t = not_null(i_89);
        if(match_cons(t, sym__2))
          {
            j_89 = ATgetArgument(t, 0);
            k_89 = ATgetArgument(t, 1);
            t = not_null(j_89);
            if(match_string(t, ""))
              {
                t = n_89(t);
              }
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
      t = not_null(e_89);
      if(((g_89 != NULL) && (g_89 != t)))
        _fail(t);
      else
        g_89 = t;
      t = m_89(t);
      t = not_null(f_89);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((d_89 != NULL) && (d_89 != t)))
    _fail(t);
  else
    d_89 = t;
  t = l_89(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_113 (ATerm), ATerm t)
{
  ATerm o_89 (ATerm t)
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_89, t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = Nil_0_0(t);
        t = y_113(t);
      }
    return(t);
  }
  t = o_89(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
  ATerm w_89 (ATerm t)
  {
    ATerm u_89 = NULL,v_89 = NULL;
    t = not_null(s_89);
    if(((v_89 != NULL) && (v_89 != t)))
      _fail(t);
    else
      v_89 = t;
    t = not_null(t_89);
    if(((u_89 != NULL) && (u_89 != t)))
      _fail(t);
    else
      u_89 = t;
    t = not_null(v_89);
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(u_89);
        return(t);
      }
      t = at_end_1_0(q_3, t);
    }
    return(t);
  }
  if(((r_89 != NULL) && (r_89 != t)))
    _fail(t);
  else
    r_89 = t;
  t = not_null(r_89);
  if(match_cons(t, sym__2))
    {
      s_89 = ATgetArgument(t, 0);
      t_89 = ATgetArgument(t, 1);
      t = w_89(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_40);
    }
  else
    {
      t = m_40;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm y_89 = NULL;
  ATerm a_90 (ATerm t)
  {
    ATerm z_89 = NULL;
    t = not_null(y_89);
    if(((z_89 != NULL) && (z_89 != t)))
      _fail(t);
    else
      z_89 = t;
    t = not_null(y_89);
    t = SSL_explode_string(not_null(z_89));
    return(t);
  }
  if(((y_89 != NULL) && (y_89 != t)))
    _fail(t);
  else
    y_89 = t;
  t = a_90(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            {
              ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
              ATerm s_90 (ATerm t)
              {
                ATerm k_90 = NULL;
                t = not_null(i_90);
                if(((k_90 != NULL) && (k_90 != t)))
                  _fail(t);
                else
                  k_90 = t;
                t = not_null(k_90);
                return(t);
              }
              ATerm t_90 (ATerm t)
              {
                ATerm l_90 = NULL;
                t = not_null(i_90);
                if(((l_90 != NULL) && (l_90 != t)))
                  _fail(t);
                else
                  l_90 = t;
                t = not_null(l_90);
                {
                  ATerm s_40 = t;
                  int t_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_40);
                    }
                  else
                    {
                      t = s_40;
                      {
                        ATerm s_3 (ATerm t)
                        {
                          t = term_u_40;
                          return(t);
                        }
                        t = debug_1_0(s_3, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm u_90 (ATerm t)
              {
                ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,q_90 = NULL;
                t = not_null(i_90);
                if(((m_90 != NULL) && (m_90 != t)))
                  _fail(t);
                else
                  m_90 = t;
                t = not_null(j_90);
                if(((n_90 != NULL) && (n_90 != t)))
                  _fail(t);
                else
                  n_90 = t;
                t = not_null(h_90);
                {
                  ATerm v_40;
                  v_40 = t;
                  {
                    ATerm p_90 = NULL;
                    ATerm v_90 (ATerm t)
                    {
                      t = not_null(p_90);
                      if(((o_90 != NULL) && (o_90 != t)))
                        _fail(t);
                      else
                        o_90 = t;
                      t = not_null(p_90);
                      return(t);
                    }
                    t = not_null(m_90);
                    t = eval_config_0_0(t);
                    if(((p_90 != NULL) && (p_90 != t)))
                      _fail(t);
                    else
                      p_90 = t;
                    t = v_90(t);
                  }
                  t = v_40;
                  {
                    ATerm r_90 = NULL;
                    ATerm w_90 (ATerm t)
                    {
                      t = not_null(r_90);
                      if(((q_90 != NULL) && (q_90 != t)))
                        _fail(t);
                      else
                        q_90 = t;
                      t = not_null(r_90);
                      return(t);
                    }
                    t = not_null(n_90);
                    t = eval_config_0_0(t);
                    if(((r_90 != NULL) && (r_90 != t)))
                      _fail(t);
                    else
                      r_90 = t;
                    t = w_90(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_90), not_null(q_90));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((h_90 != NULL) && (h_90 != t)))
                _fail(t);
              else
                h_90 = t;
              t = not_null(h_90);
              if(match_cons(t, sym_Path_1))
                {
                  i_90 = ATgetArgument(t, 0);
                  t = s_90(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_90 = ATgetArgument(t, 0);
                      t = t_90(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_90 = ATgetArgument(t, 0);
                          j_90 = ATgetArgument(t, 1);
                          t = u_90(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_90 = NULL;
  ATerm d_91 (ATerm t)
  {
    ATerm a_91 = NULL;
    t = not_null(z_90);
    if(((a_91 != NULL) && (a_91 != t)))
      _fail(t);
    else
      a_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(a_91));
    t = table_get_0_0(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm w_40;
          w_40 = t;
          {
            ATerm b_91 = NULL;
            ATerm c_91 = NULL;
            ATerm e_91 (ATerm t)
            {
              t = not_null(c_91);
              if(((b_91 != NULL) && (b_91 != t)))
                _fail(t);
              else
                b_91 = t;
              t = not_null(c_91);
              return(t);
            }
            if(((c_91 != NULL) && (c_91 != t)))
              _fail(t);
            else
              c_91 = t;
            t = e_91(t);
            t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(a_91), not_null(b_91));
            t = table_put_0_0(t);
          }
          t = w_40;
        }
        return(t);
      }
      t = try_1_0(t_3, t);
    }
    return(t);
  }
  if(((z_90 != NULL) && (z_90 != t)))
    _fail(t);
  else
    z_90 = t;
  t = d_91(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm x_40;
    x_40 = t;
    {
      ATerm g_91 = NULL;
      ATerm h_91 = NULL;
      ATerm i_91 (ATerm t)
      {
        t = not_null(h_91);
        if(((g_91 != NULL) && (g_91 != t)))
          _fail(t);
        else
          g_91 = t;
        t = not_null(h_91);
        return(t);
      }
      t = term_y_40;
      t = get_config_0_0(t);
      if(((h_91 != NULL) && (h_91 != t)))
        _fail(t);
      else
        h_91 = t;
      t = i_91(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_91), term_z_40);
      t = geq_0_0(t);
    }
    t = x_40;
    t = p_126(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL;
  ATerm v_91 (ATerm t)
  {
    ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
    t = not_null(o_91);
    if(((r_91 != NULL) && (r_91 != t)))
      _fail(t);
    else
      r_91 = t;
    t = not_null(q_91);
    if(((s_91 != NULL) && (s_91 != t)))
      _fail(t);
    else
      s_91 = t;
    t = not_null(n_91);
    t = SSL_fputc(not_null(r_91), not_null(s_91));
    {
      ATerm u_91 = NULL;
      ATerm w_91 (ATerm t)
      {
        t = not_null(u_91);
        if(((t_91 != NULL) && (t_91 != t)))
          _fail(t);
        else
          t_91 = t;
        t = not_null(u_91);
        return(t);
      }
      if(((u_91 != NULL) && (u_91 != t)))
        _fail(t);
      else
        u_91 = t;
      t = w_91(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_91));
    }
    return(t);
  }
  if(((n_91 != NULL) && (n_91 != t)))
    _fail(t);
  else
    n_91 = t;
  t = not_null(n_91);
  if(match_cons(t, sym__2))
    {
      o_91 = ATgetArgument(t, 0);
      p_91 = ATgetArgument(t, 1);
      t = not_null(p_91);
      if(match_cons(t, sym_Stream_1))
        {
          q_91 = ATgetArgument(t, 0);
          t = v_91(t);
        }
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
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  ATerm j_92 (ATerm t)
  {
    ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
    t = not_null(d_92);
    if(((f_92 != NULL) && (f_92 != t)))
      _fail(t);
    else
      f_92 = t;
    t = not_null(e_92);
    if(((g_92 != NULL) && (g_92 != t)))
      _fail(t);
    else
      g_92 = t;
    t = not_null(b_92);
    t = SSL_write_term_to_stream_text(not_null(f_92), not_null(g_92));
    {
      ATerm i_92 = NULL;
      ATerm k_92 (ATerm t)
      {
        t = not_null(i_92);
        if(((h_92 != NULL) && (h_92 != t)))
          _fail(t);
        else
          h_92 = t;
        t = not_null(i_92);
        return(t);
      }
      if(((i_92 != NULL) && (i_92 != t)))
        _fail(t);
      else
        i_92 = t;
      t = k_92(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_92));
    }
    return(t);
  }
  if(((b_92 != NULL) && (b_92 != t)))
    _fail(t);
  else
    b_92 = t;
  t = not_null(b_92);
  if(match_cons(t, sym__2))
    {
      c_92 = ATgetArgument(t, 0);
      e_92 = ATgetArgument(t, 1);
      t = not_null(c_92);
      if(match_cons(t, sym_Stream_1))
        {
          d_92 = ATgetArgument(t, 0);
          t = j_92(t);
        }
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
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_92 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm n_92 = NULL;
      ATerm o_92 (ATerm t)
      {
        t = not_null(n_92);
        if(((m_92 != NULL) && (m_92 != t)))
          _fail(t);
        else
          m_92 = t;
        t = not_null(n_92);
        return(t);
      }
      if(((n_92 != NULL) && (n_92 != t)))
        _fail(t);
      else
        n_92 = t;
      t = o_92(t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_41, not_null(m_92));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(v_3, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  ATerm b_93 (ATerm t)
  {
    ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
    t = not_null(v_92);
    if(((x_92 != NULL) && (x_92 != t)))
      _fail(t);
    else
      x_92 = t;
    t = not_null(w_92);
    if(((y_92 != NULL) && (y_92 != t)))
      _fail(t);
    else
      y_92 = t;
    t = not_null(t_92);
    t = SSL_write_term_to_stream_baf(not_null(x_92), not_null(y_92));
    {
      ATerm a_93 = NULL;
      ATerm c_93 (ATerm t)
      {
        t = not_null(a_93);
        if(((z_92 != NULL) && (z_92 != t)))
          _fail(t);
        else
          z_92 = t;
        t = not_null(a_93);
        return(t);
      }
      if(((a_93 != NULL) && (a_93 != t)))
        _fail(t);
      else
        a_93 = t;
      t = c_93(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_92));
    }
    return(t);
  }
  if(((t_92 != NULL) && (t_92 != t)))
    _fail(t);
  else
    t_92 = t;
  t = not_null(t_92);
  if(match_cons(t, sym__2))
    {
      u_92 = ATgetArgument(t, 0);
      w_92 = ATgetArgument(t, 1);
      t = not_null(u_92);
      if(match_cons(t, sym_Stream_1))
        {
          v_92 = ATgetArgument(t, 0);
          t = b_93(t);
        }
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
ATerm WriteToFile_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  ATerm q_93 (ATerm t)
  {
    ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,o_93 = NULL;
    t = not_null(i_93);
    if(((k_93 != NULL) && (k_93 != t)))
      _fail(t);
    else
      k_93 = t;
    t = not_null(j_93);
    if(((l_93 != NULL) && (l_93 != t)))
      _fail(t);
    else
      l_93 = t;
    t = not_null(k_93);
    {
      ATerm n_93 = NULL;
      ATerm r_93 (ATerm t)
      {
        t = not_null(n_93);
        if(((m_93 != NULL) && (m_93 != t)))
          _fail(t);
        else
          m_93 = t;
        t = not_null(n_93);
        return(t);
      }
      if(((n_93 != NULL) && (n_93 != t)))
        _fail(t);
      else
        n_93 = t;
      t = r_93(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_93), term_b_41);
      t = open_stream_0_0(t);
      {
        ATerm p_93 = NULL;
        ATerm u_93 (ATerm t)
        {
          t = not_null(p_93);
          if(((o_93 != NULL) && (o_93 != t)))
            _fail(t);
          else
            o_93 = t;
          t = not_null(p_93);
          return(t);
        }
        if(((p_93 != NULL) && (p_93 != t)))
          _fail(t);
        else
          p_93 = t;
        t = u_93(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_93), not_null(l_93));
        t = l_125(t);
        t = fclose_0_0(t);
        t = not_null(l_93);
      }
    }
    return(t);
  }
  if(((h_93 != NULL) && (h_93 != t)))
    _fail(t);
  else
    h_93 = t;
  t = not_null(h_93);
  if(match_cons(t, sym__2))
    {
      i_93 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
      t = q_93(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_93 = NULL;
  ATerm c_41;
  c_41 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm d_41 = t;
      int e_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm a_94 = NULL,b_94 = NULL;
            ATerm e_94 (ATerm t)
            {
              t = not_null(b_94);
              if(((z_93 != NULL) && (z_93 != t)))
                _fail(t);
              else
                z_93 = t;
              t = not_null(a_94);
              return(t);
            }
            if(((a_94 != NULL) && (a_94 != t)))
              _fail(t);
            else
              a_94 = t;
            t = not_null(a_94);
            if(match_cons(t, sym_Output_1))
              {
                b_94 = ATgetArgument(t, 0);
                t = e_94(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(x_3, t);
          ;
          LocalPopChoice(e_41);
        }
      else
        {
          t = d_41;
          {
            ATerm c_94 = NULL;
            ATerm f_94 (ATerm t)
            {
              t = not_null(c_94);
              if(((z_93 != NULL) && (z_93 != t)))
                _fail(t);
              else
                z_93 = t;
              t = not_null(c_94);
              return(t);
            }
            t = term_f_41;
            if(((c_94 != NULL) && (c_94 != t)))
              _fail(t);
            else
              c_94 = t;
            t = f_94(t);
          }
        }
      return(t);
    }
    t = _2_0(w_3, _id, t);
  }
  t = c_41;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(z_93);
        return(t);
      }
      t = split_2_0(z_3, _id, t);
      return(t);
    }
    t = _2_0(_id, y_3, t);
    {
      ATerm g_41 = t;
      int h_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm d_94 = NULL;
              if(((d_94 != NULL) && (d_94 != t)))
                _fail(t);
              else
                d_94 = t;
              t = not_null(d_94);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(d_94);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(b_4, t);
            return(t);
          }
          t = _2_0(a_4, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(h_41);
        }
      else
        {
          t = g_41;
          t = _2_0(_id, WriteToTextFile_0_0, t);
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm j_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  ATerm r_94 (ATerm t)
  {
    ATerm o_94 = NULL,p_94 = NULL;
    t = not_null(m_94);
    if(((o_94 != NULL) && (o_94 != t)))
      _fail(t);
    else
      o_94 = t;
    t = not_null(n_94);
    if(((p_94 != NULL) && (p_94 != t)))
      _fail(t);
    else
      p_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_94))), not_null(p_94));
    return(t);
  }
  ATerm i_41;
  i_41 = t;
  t = dtime_0_0(t);
  t = i_41;
  t = l_127(t);
  {
    ATerm j_41;
    j_41 = t;
    {
      ATerm k_94 = NULL;
      ATerm q_94 (ATerm t)
      {
        t = not_null(k_94);
        if(((j_94 != NULL) && (j_94 != t)))
          _fail(t);
        else
          j_94 = t;
        t = not_null(k_94);
        return(t);
      }
      t = dtime_0_0(t);
      if(((k_94 != NULL) && (k_94 != t)))
        _fail(t);
      else
        k_94 = t;
      t = q_94(t);
    }
    t = j_41;
    if(((l_94 != NULL) && (l_94 != t)))
      _fail(t);
    else
      l_94 = t;
    t = not_null(l_94);
    if(match_cons(t, sym__2))
      {
        m_94 = ATgetArgument(t, 0);
        n_94 = ATgetArgument(t, 1);
        t = r_94(t);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL;
  ATerm b_95 (ATerm t)
  {
    ATerm x_94 = NULL;
    t = not_null(v_94);
    if(((x_94 != NULL) && (x_94 != t)))
      _fail(t);
    else
      x_94 = t;
    t = not_null(w_94);
    t = SSL_fclose(not_null(x_94));
    return(t);
  }
  ATerm c_95 (ATerm t)
  {
    ATerm a_95 = NULL;
    t = not_null(w_94);
    if(((a_95 != NULL) && (a_95 != t)))
      _fail(t);
    else
      a_95 = t;
    t = not_null(w_94);
    t = SSL_fclose(not_null(a_95));
    return(t);
  }
  if(((w_94 != NULL) && (w_94 != t)))
    _fail(t);
  else
    w_94 = t;
  t = not_null(w_94);
  if(match_cons(t, sym_Stream_1))
    {
      v_94 = ATgetArgument(t, 0);
      {
        ATerm k_41 = t;
        int l_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_95(t);
            ;
            LocalPopChoice(l_41);
          }
        else
          {
            t = k_41;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL;
  ATerm i_95 (ATerm t)
  {
    ATerm h_95 = NULL;
    t = not_null(g_95);
    if(((h_95 != NULL) && (h_95 != t)))
      _fail(t);
    else
      h_95 = t;
    t = not_null(f_95);
    t = SSL_read_term_from_stream(not_null(h_95));
    return(t);
  }
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  t = not_null(f_95);
  if(match_cons(t, sym_Stream_1))
    {
      g_95 = ATgetArgument(t, 0);
      t = i_95(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm m_41;
  m_41 = t;
  {
    ATerm l_95 = NULL,n_95 = NULL;
    ATerm n_41;
    n_41 = t;
    {
      ATerm m_95 = NULL;
      ATerm p_95 (ATerm t)
      {
        t = not_null(m_95);
        if(((l_95 != NULL) && (l_95 != t)))
          _fail(t);
        else
          l_95 = t;
        t = not_null(m_95);
        return(t);
      }
      t = x_124(t);
      if(((m_95 != NULL) && (m_95 != t)))
        _fail(t);
      else
        m_95 = t;
      t = p_95(t);
    }
    t = n_41;
    {
      ATerm o_95 = NULL;
      ATerm q_95 (ATerm t)
      {
        t = not_null(o_95);
        if(((n_95 != NULL) && (n_95 != t)))
          _fail(t);
        else
          n_95 = t;
        t = not_null(o_95);
        return(t);
      }
      if(((o_95 != NULL) && (o_95 != t)))
        _fail(t);
      else
        o_95 = t;
      t = q_95(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_95)), not_null(l_95)));
      t = printnl_0_0(t);
    }
  }
  t = m_41;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  ATerm c_96 (ATerm t)
  {
    ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL;
    t = not_null(v_95);
    if(((x_95 != NULL) && (x_95 != t)))
      _fail(t);
    else
      x_95 = t;
    t = not_null(w_95);
    if(((y_95 != NULL) && (y_95 != t)))
      _fail(t);
    else
      y_95 = t;
    t = not_null(u_95);
    t = SSL_fopen(not_null(x_95), not_null(y_95));
    {
      ATerm b_96 = NULL;
      ATerm d_96 (ATerm t)
      {
        t = not_null(b_96);
        if(((z_95 != NULL) && (z_95 != t)))
          _fail(t);
        else
          z_95 = t;
        t = not_null(b_96);
        return(t);
      }
      if(((b_96 != NULL) && (b_96 != t)))
        _fail(t);
      else
        b_96 = t;
      t = d_96(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_95));
    }
    return(t);
  }
  if(((u_95 != NULL) && (u_95 != t)))
    _fail(t);
  else
    u_95 = t;
  t = not_null(u_95);
  if(match_cons(t, sym__2))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
      t = c_96(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm f_96 = NULL;
  ATerm h_96 (ATerm t)
  {
    ATerm g_96 = NULL;
    t = not_null(f_96);
    if(((g_96 != NULL) && (g_96 != t)))
      _fail(t);
    else
      g_96 = t;
    t = not_null(f_96);
    t = SSL_is_string(not_null(g_96));
    return(t);
  }
  if(((f_96 != NULL) && (f_96 != t)))
    _fail(t);
  else
    f_96 = t;
  t = h_96(t);
  return(t);
}
ATerm _2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  ATerm c_97 (ATerm t)
  {
    ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,w_96 = NULL;
    ATerm e_97 (ATerm t)
    {
      ATerm x_96 = NULL,y_96 = NULL;
      ATerm f_97 (ATerm t)
      {
        ATerm z_96 = NULL,a_97 = NULL;
        t = not_null(y_96);
        if(((z_96 != NULL) && (z_96 != t)))
          _fail(t);
        else
          z_96 = t;
        t = not_null(y_96);
        {
          ATerm b_97 = NULL;
          ATerm g_97 (ATerm t)
          {
            t = not_null(b_97);
            if(((a_97 != NULL) && (a_97 != t)))
              _fail(t);
            else
              a_97 = t;
            t = not_null(b_97);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_96), not_null(z_96)), not_null(u_96));
          if(((b_97 != NULL) && (b_97 != t)))
            _fail(t);
          else
            b_97 = t;
          t = g_97(t);
          t = not_null(a_97);
        }
        return(t);
      }
      t = not_null(w_96);
      if(((x_96 != NULL) && (x_96 != t)))
        _fail(t);
      else
        x_96 = t;
      t = not_null(t_96);
      t = x_82(t);
      if(((y_96 != NULL) && (y_96 != t)))
        _fail(t);
      else
        y_96 = t;
      t = f_97(t);
      return(t);
    }
    t = not_null(o_96);
    if(((r_96 != NULL) && (r_96 != t)))
      _fail(t);
    else
      r_96 = t;
    t = not_null(p_96);
    if(((s_96 != NULL) && (s_96 != t)))
      _fail(t);
    else
      s_96 = t;
    t = not_null(q_96);
    if(((t_96 != NULL) && (t_96 != t)))
      _fail(t);
    else
      t_96 = t;
    t = not_null(o_96);
    {
      ATerm v_96 = NULL;
      ATerm d_97 (ATerm t)
      {
        t = not_null(v_96);
        if(((u_96 != NULL) && (u_96 != t)))
          _fail(t);
        else
          u_96 = t;
        t = not_null(v_96);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_96));
      if(((v_96 != NULL) && (v_96 != t)))
        _fail(t);
      else
        v_96 = t;
      t = d_97(t);
      t = not_null(s_96);
      t = w_82(t);
      if(((w_96 != NULL) && (w_96 != t)))
        _fail(t);
      else
        w_96 = t;
      t = e_97(t);
    }
    return(t);
  }
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = not_null(o_96);
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
      t = c_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_97 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_97 = NULL;
    ATerm k_97 (ATerm t)
    {
      t = not_null(j_97);
      if(((i_97 != NULL) && (i_97 != t)))
        _fail(t);
      else
        i_97 = t;
      t = not_null(j_97);
      return(t);
    }
    if(((j_97 != NULL) && (j_97 != t)))
      _fail(t);
    else
      j_97 = t;
    t = k_97(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_97));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_97 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_97 = NULL;
    ATerm o_97 (ATerm t)
    {
      t = not_null(n_97);
      if(((m_97 != NULL) && (m_97 != t)))
        _fail(t);
      else
        m_97 = t;
      t = not_null(n_97);
      return(t);
    }
    if(((n_97 != NULL) && (n_97 != t)))
      _fail(t);
    else
      n_97 = t;
    t = o_97(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_97));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_97 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_97 = NULL;
    ATerm s_97 (ATerm t)
    {
      t = not_null(r_97);
      if(((q_97 != NULL) && (q_97 != t)))
        _fail(t);
      else
        q_97 = t;
      t = not_null(r_97);
      return(t);
    }
    if(((r_97 != NULL) && (r_97 != t)))
      _fail(t);
    else
      r_97 = t;
    t = s_97(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_97));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm x_97 = NULL;
  ATerm y_97 (ATerm t)
  {
    t = not_null(x_97);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm z_97 (ATerm t)
  {
    t = not_null(x_97);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm a_98 (ATerm t)
  {
    t = not_null(x_97);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  t = not_null(x_97);
  if(match_cons(t, sym_stderr_0))
    {
      t = y_97(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_97(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = a_98(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm h_98 = NULL;
  ATerm s_98 (ATerm t)
  {
    ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
    t = not_null(h_98);
    if(((i_98 != NULL) && (i_98 != t)))
      _fail(t);
    else
      i_98 = t;
    t = not_null(h_98);
    {
      ATerm l_98 = NULL;
      ATerm t_98 (ATerm t)
      {
        ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
        ATerm u_98 (ATerm t)
        {
          t = not_null(q_98);
          if(((k_98 != NULL) && (k_98 != t)))
            _fail(t);
          else
            k_98 = t;
          t = not_null(r_98);
          if(((j_98 != NULL) && (j_98 != t)))
            _fail(t);
          else
            j_98 = t;
          t = not_null(n_98);
          return(t);
        }
        t = not_null(l_98);
        if(((m_98 != NULL) && (m_98 != t)))
          _fail(t);
        else
          m_98 = t;
        t = not_null(l_98);
        t = SSL_explode_term(not_null(m_98));
        if(((n_98 != NULL) && (n_98 != t)))
          _fail(t);
        else
          n_98 = t;
        t = not_null(n_98);
        if(match_cons(t, sym__2))
          {
            o_98 = ATgetArgument(t, 0);
            p_98 = ATgetArgument(t, 1);
            t = not_null(o_98);
            if(match_string(t, ""))
              {
                t = not_null(p_98);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_98 = ATgetFirst((ATermList) t);
                    r_98 = (ATerm) ATgetNext((ATermList) t);
                    t = u_98(t);
                  }
                else
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
      t = not_null(i_98);
      if(((l_98 != NULL) && (l_98 != t)))
        _fail(t);
      else
        l_98 = t;
      t = t_98(t);
      t = not_null(k_98);
    }
    return(t);
  }
  if(((h_98 != NULL) && (h_98 != t)))
    _fail(t);
  else
    h_98 = t;
  t = s_98(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  ATerm h_99 (ATerm t)
  {
    t = not_null(z_98);
    {
      ATerm o_41 = t;
      int p_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(p_41);
        }
      else
        {
          t = o_41;
          {
            ATerm q_41 = t;
            int r_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm c_99 = NULL,d_99 = NULL;
                  ATerm i_99 (ATerm t)
                  {
                    ATerm g_99 = NULL;
                    t = not_null(d_99);
                    if(((g_99 != NULL) && (g_99 != t)))
                      _fail(t);
                    else
                      g_99 = t;
                    t = not_null(g_99);
                    return(t);
                  }
                  if(((c_99 != NULL) && (c_99 != t)))
                    _fail(t);
                  else
                    c_99 = t;
                  t = not_null(c_99);
                  if(match_cons(t, sym_Path_1))
                    {
                      d_99 = ATgetArgument(t, 0);
                      t = i_99(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(c_4, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(r_41);
              }
            else
              {
                t = q_41;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  t = not_null(z_98);
  if(match_cons(t, sym__2))
    {
      a_99 = ATgetArgument(t, 0);
      b_99 = ATgetArgument(t, 1);
      t = h_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_99 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_99 = NULL;
      ATerm m_99 = NULL;
      ATerm p_99 (ATerm t)
      {
        t = not_null(m_99);
        if(((l_99 != NULL) && (l_99 != t)))
          _fail(t);
        else
          l_99 = t;
        t = not_null(m_99);
        return(t);
      }
      if(((m_99 != NULL) && (m_99 != t)))
        _fail(t);
      else
        m_99 = t;
      t = p_99(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_99), term_u_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm d_4 (ATerm t)
        {
          t = term_v_41;
          return(t);
        }
        t = debug_1_0(d_4, t);
        _fail(t);
      }
    }
  {
    ATerm w_41;
    w_41 = t;
    {
      ATerm o_99 = NULL;
      ATerm q_99 (ATerm t)
      {
        t = not_null(o_99);
        if(((n_99 != NULL) && (n_99 != t)))
          _fail(t);
        else
          n_99 = t;
        t = not_null(o_99);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((o_99 != NULL) && (o_99 != t)))
        _fail(t);
      else
        o_99 = t;
      t = q_99(t);
    }
    t = w_41;
    t = fclose_0_0(t);
    t = not_null(n_99);
  }
  return(t);
}
ATerm split_2_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm t_99 = NULL,v_99 = NULL;
  ATerm x_41;
  x_41 = t;
  {
    ATerm u_99 = NULL;
    ATerm x_99 (ATerm t)
    {
      t = not_null(u_99);
      if(((t_99 != NULL) && (t_99 != t)))
        _fail(t);
      else
        t_99 = t;
      t = not_null(u_99);
      return(t);
    }
    t = y_120(t);
    if(((u_99 != NULL) && (u_99 != t)))
      _fail(t);
    else
      u_99 = t;
    t = x_99(t);
  }
  t = x_41;
  {
    ATerm w_99 = NULL;
    ATerm y_99 (ATerm t)
    {
      t = not_null(w_99);
      if(((v_99 != NULL) && (v_99 != t)))
        _fail(t);
      else
        v_99 = t;
      t = not_null(w_99);
      return(t);
    }
    t = z_120(t);
    if(((w_99 != NULL) && (w_99 != t)))
      _fail(t);
    else
      w_99 = t;
    t = y_99(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_99), not_null(v_99));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm c_100 = NULL;
  ATerm y_41;
  y_41 = t;
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          ATerm d_100 = NULL,e_100 = NULL;
          ATerm g_100 (ATerm t)
          {
            t = not_null(e_100);
            if(((c_100 != NULL) && (c_100 != t)))
              _fail(t);
            else
              c_100 = t;
            t = not_null(d_100);
            return(t);
          }
          if(((d_100 != NULL) && (d_100 != t)))
            _fail(t);
          else
            d_100 = t;
          t = not_null(d_100);
          if(match_cons(t, sym_Input_1))
            {
              e_100 = ATgetArgument(t, 0);
              t = g_100(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(e_4, t);
        ;
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        {
          ATerm f_100 = NULL;
          ATerm h_100 (ATerm t)
          {
            t = not_null(f_100);
            if(((c_100 != NULL) && (c_100 != t)))
              _fail(t);
            else
              c_100 = t;
            t = not_null(f_100);
            return(t);
          }
          t = term_b_42;
          if(((f_100 != NULL) && (f_100 != t)))
            _fail(t);
          else
            f_100 = t;
          t = h_100(t);
        }
      }
  }
  t = y_41;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(c_100);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, f_4, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_100 = NULL;
    if(((k_100 != NULL) && (k_100 != t)))
      _fail(t);
    else
      k_100 = t;
    t = not_null(k_100);
    if(match_string(t, "-k"))
      {
        t = not_null(k_100);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(k_100);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm c_42;
    c_42 = t;
    {
      ATerm l_100 = NULL;
      ATerm m_100 = NULL;
      ATerm n_100 (ATerm t)
      {
        t = not_null(m_100);
        if(((l_100 != NULL) && (l_100 != t)))
          _fail(t);
        else
          l_100 = t;
        t = not_null(m_100);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((m_100 != NULL) && (m_100 != t)))
        _fail(t);
      else
        m_100 = t;
      t = n_100(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_42, not_null(l_100));
      t = set_config_0_0(t);
    }
    t = c_42;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_e_42;
    return(t);
  }
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm p_100 = NULL;
  ATerm r_100 (ATerm t)
  {
    ATerm q_100 = NULL;
    t = not_null(p_100);
    if(((q_100 != NULL) && (q_100 != t)))
      _fail(t);
    else
      q_100 = t;
    t = not_null(p_100);
    t = SSL_string_to_int(not_null(q_100));
    return(t);
  }
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  t = r_100(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm x_100 = NULL;
        if(((x_100 != NULL) && (x_100 != t)))
          _fail(t);
        else
          x_100 = t;
        t = not_null(x_100);
        if(match_string(t, "-S"))
          {
            t = not_null(x_100);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(x_100);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_h_42;
        t = set_config_0_0(t);
        t = term_i_42;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_j_42;
        return(t);
      }
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm y_100 = NULL;
              if(((y_100 != NULL) && (y_100 != t)))
                _fail(t);
              else
                y_100 = t;
              t = not_null(y_100);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(y_100);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm b_101 = NULL;
              ATerm m_42;
              m_42 = t;
              {
                ATerm z_100 = NULL;
                ATerm a_101 = NULL;
                ATerm e_101 (ATerm t)
                {
                  t = not_null(a_101);
                  if(((z_100 != NULL) && (z_100 != t)))
                    _fail(t);
                  else
                    z_100 = t;
                  t = not_null(a_101);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((a_101 != NULL) && (a_101 != t)))
                  _fail(t);
                else
                  a_101 = t;
                t = e_101(t);
                t = (ATerm) ATmakeAppl(sym__2, term_y_40, not_null(z_100));
                t = set_config_0_0(t);
              }
              t = m_42;
              {
                ATerm c_101 = NULL;
                ATerm f_101 (ATerm t)
                {
                  t = not_null(c_101);
                  if(((b_101 != NULL) && (b_101 != t)))
                    _fail(t);
                  else
                    b_101 = t;
                  t = not_null(c_101);
                  return(t);
                }
                if(((c_101 != NULL) && (c_101 != t)))
                  _fail(t);
                else
                  c_101 = t;
                t = f_101(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_101));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_n_42;
              return(t);
            }
            t = ArgOption_3_0(m_4, n_4, o_4, t);
            ;
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm d_101 = NULL;
                if(((d_101 != NULL) && (d_101 != t)))
                  _fail(t);
                else
                  d_101 = t;
                t = not_null(d_101);
                if(match_string(t, "-s"))
                  {
                    t = not_null(d_101);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_p_42;
                t = set_config_0_0(t);
                t = term_q_42;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_r_42;
                return(t);
              }
              t = Option_3_0(p_4, q_4, r_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm j_101 = NULL;
    if(((j_101 != NULL) && (j_101 != t)))
      _fail(t);
    else
      j_101 = t;
    t = not_null(j_101);
    if(match_string(t, "-o"))
      {
        t = not_null(j_101);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(j_101);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm m_101 = NULL;
    ATerm u_42;
    u_42 = t;
    {
      ATerm k_101 = NULL;
      ATerm l_101 = NULL;
      ATerm o_101 (ATerm t)
      {
        t = not_null(l_101);
        if(((k_101 != NULL) && (k_101 != t)))
          _fail(t);
        else
          k_101 = t;
        t = not_null(l_101);
        return(t);
      }
      if(((l_101 != NULL) && (l_101 != t)))
        _fail(t);
      else
        l_101 = t;
      t = o_101(t);
      t = (ATerm) ATmakeAppl(sym__2, term_v_42, not_null(k_101));
      t = set_config_0_0(t);
    }
    t = u_42;
    {
      ATerm n_101 = NULL;
      ATerm p_101 (ATerm t)
      {
        t = not_null(n_101);
        if(((m_101 != NULL) && (m_101 != t)))
          _fail(t);
        else
          m_101 = t;
        t = not_null(n_101);
        return(t);
      }
      if(((n_101 != NULL) && (n_101 != t)))
        _fail(t);
      else
        n_101 = t;
      t = p_101(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_101));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_w_42;
    return(t);
  }
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm r_101 = NULL;
          if(((r_101 != NULL) && (r_101 != t)))
            _fail(t);
          else
            r_101 = t;
          t = not_null(r_101);
          if(match_string(t, "-b"))
            {
              t = not_null(r_101);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_a_43;
          t = set_config_0_0(t);
          t = term_b_43;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_c_43;
          return(t);
        }
        t = Option_3_0(v_4, w_4, x_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  ATerm h_102 (ATerm t)
  {
    t = not_null(x_101);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm i_102 (ATerm t)
  {
    ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
    t = not_null(y_101);
    if(((c_102 != NULL) && (c_102 != t)))
      _fail(t);
    else
      c_102 = t;
    t = not_null(a_102);
    if(((d_102 != NULL) && (d_102 != t)))
      _fail(t);
    else
      d_102 = t;
    t = not_null(b_102);
    if(((e_102 != NULL) && (e_102 != t)))
      _fail(t);
    else
      e_102 = t;
    t = not_null(x_101);
    {
      ATerm d_43;
      d_43 = t;
      t = not_null(c_102);
      t = i_0(t);
      t = d_43;
      {
        ATerm g_102 = NULL;
        ATerm j_102 (ATerm t)
        {
          t = not_null(g_102);
          if(((f_102 != NULL) && (f_102 != t)))
            _fail(t);
          else
            f_102 = t;
          t = not_null(g_102);
          return(t);
        }
        t = not_null(d_102);
        t = k_0(t);
        if(((g_102 != NULL) && (g_102 != t)))
          _fail(t);
        else
          g_102 = t;
        t = j_102(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(e_102)), not_null(f_102));
      }
    }
    return(t);
  }
  if(((x_101 != NULL) && (x_101 != t)))
    _fail(t);
  else
    x_101 = t;
  t = not_null(x_101);
  if(match_string(t, "register-usage-info"))
    {
      t = h_102(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_101 = ATgetFirst((ATermList) t);
          z_101 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(z_101);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_102 = ATgetFirst((ATermList) t);
              b_102 = (ATerm) ATgetNext((ATermList) t);
              t = i_102(t);
            }
          else
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
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm n_102 = NULL;
    if(((n_102 != NULL) && (n_102 != t)))
      _fail(t);
    else
      n_102 = t;
    t = not_null(n_102);
    if(match_string(t, "-i"))
      {
        t = not_null(n_102);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(n_102);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm q_102 = NULL;
    ATerm e_43;
    e_43 = t;
    {
      ATerm o_102 = NULL;
      ATerm p_102 = NULL;
      ATerm s_102 (ATerm t)
      {
        t = not_null(p_102);
        if(((o_102 != NULL) && (o_102 != t)))
          _fail(t);
        else
          o_102 = t;
        t = not_null(p_102);
        return(t);
      }
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = s_102(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_43, not_null(o_102));
      t = set_config_0_0(t);
    }
    t = e_43;
    {
      ATerm r_102 = NULL;
      ATerm t_102 (ATerm t)
      {
        t = not_null(r_102);
        if(((q_102 != NULL) && (q_102 != t)))
          _fail(t);
        else
          q_102 = t;
        t = not_null(r_102);
        return(t);
      }
      if(((r_102 != NULL) && (r_102 != t)))
        _fail(t);
      else
        r_102 = t;
      t = t_102(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_102));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_g_43;
    return(t);
  }
  t = ArgOption_3_0(y_4, z_4, a_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_102 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm w_102 = NULL;
    ATerm x_102 (ATerm t)
    {
      t = not_null(w_102);
      if(((v_102 != NULL) && (v_102 != t)))
        _fail(t);
      else
        v_102 = t;
      t = not_null(w_102);
      return(t);
    }
    t = term_a_34;
    t = whoami_0_0(t);
    if(((w_102 != NULL) && (w_102 != t)))
      _fail(t);
    else
      w_102 = t;
    t = x_102(t);
    t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATinsert(ATempty, term_l_43), not_null(v_102)));
    t = printnl_0_0(t);
    t = term_n_30;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_43;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm z_102 = NULL;
  ATerm b_103 (ATerm t)
  {
    ATerm a_103 = NULL;
    t = not_null(z_102);
    if(((a_103 != NULL) && (a_103 != t)))
      _fail(t);
    else
      a_103 = t;
    t = not_null(z_102);
    t = SSL_TicksToSeconds(not_null(a_103));
    return(t);
  }
  if(((z_102 != NULL) && (z_102 != t)))
    _fail(t);
  else
    z_102 = t;
  t = b_103(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  ATerm j_103 (ATerm t)
  {
    ATerm h_103 = NULL,i_103 = NULL;
    t = not_null(f_103);
    if(((h_103 != NULL) && (h_103 != t)))
      _fail(t);
    else
      h_103 = t;
    t = not_null(g_103);
    if(((i_103 != NULL) && (i_103 != t)))
      _fail(t);
    else
      i_103 = t;
    t = not_null(e_103);
    {
      ATerm n_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(h_103), not_null(i_103));
          ;
          LocalPopChoice(o_43);
        }
      else
        {
          t = n_43;
          t = SSL_addr(not_null(h_103), not_null(i_103));
        }
    }
    return(t);
  }
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  t = not_null(e_103);
  if(match_cons(t, sym__2))
    {
      f_103 = ATgetArgument(t, 0);
      g_103 = ATgetArgument(t, 1);
      t = j_103(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = j_119(t);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL;
        ATerm u_103 (ATerm t)
        {
          ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
          t = not_null(o_103);
          if(((q_103 != NULL) && (q_103 != t)))
            _fail(t);
          else
            q_103 = t;
          t = not_null(p_103);
          if(((r_103 != NULL) && (r_103 != t)))
            _fail(t);
          else
            r_103 = t;
          t = not_null(n_103);
          {
            ATerm t_103 = NULL;
            ATerm v_103 (ATerm t)
            {
              t = not_null(t_103);
              if(((s_103 != NULL) && (s_103 != t)))
                _fail(t);
              else
                s_103 = t;
              t = not_null(t_103);
              return(t);
            }
            t = not_null(r_103);
            t = foldr_2_0(j_119, k_119, t);
            if(((t_103 != NULL) && (t_103 != t)))
              _fail(t);
            else
              t_103 = t;
            t = v_103(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_103), not_null(s_103));
            t = k_119(t);
          }
          return(t);
        }
        if(((n_103 != NULL) && (n_103 != t)))
          _fail(t);
        else
          n_103 = t;
        t = not_null(n_103);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_103 = ATgetFirst((ATermList) t);
            p_103 = (ATerm) ATgetNext((ATermList) t);
            t = u_103(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm a_104 = NULL;
  ATerm i_104 (ATerm t)
  {
    ATerm b_104 = NULL,c_104 = NULL;
    t = not_null(a_104);
    if(((b_104 != NULL) && (b_104 != t)))
      _fail(t);
    else
      b_104 = t;
    t = not_null(a_104);
    {
      ATerm d_104 = NULL;
      ATerm j_104 (ATerm t)
      {
        ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
        ATerm k_104 (ATerm t)
        {
          t = not_null(h_104);
          if(((c_104 != NULL) && (c_104 != t)))
            _fail(t);
          else
            c_104 = t;
          t = not_null(f_104);
          return(t);
        }
        t = not_null(d_104);
        if(((e_104 != NULL) && (e_104 != t)))
          _fail(t);
        else
          e_104 = t;
        t = not_null(d_104);
        t = SSL_explode_term(not_null(e_104));
        if(((f_104 != NULL) && (f_104 != t)))
          _fail(t);
        else
          f_104 = t;
        t = not_null(f_104);
        if(match_cons(t, sym__2))
          {
            g_104 = ATgetArgument(t, 0);
            h_104 = ATgetArgument(t, 1);
            t = k_104(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(b_104);
      if(((d_104 != NULL) && (d_104 != t)))
        _fail(t);
      else
        d_104 = t;
      t = j_104(t);
      t = not_null(c_104);
      t = foldr_2_0(c_123, d_123, t);
    }
    return(t);
  }
  if(((a_104 != NULL) && (a_104 != t)))
    _fail(t);
  else
    a_104 = t;
  t = i_104(t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm b_5 (ATerm t)
    {
      t = term_h_30;
      return(t);
    }
    t = crush_2_0(b_5, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  ATerm s_104 (ATerm t)
  {
    ATerm q_104 = NULL,r_104 = NULL;
    t = not_null(o_104);
    if(((q_104 != NULL) && (q_104 != t)))
      _fail(t);
    else
      q_104 = t;
    t = not_null(p_104);
    if(((r_104 != NULL) && (r_104 != t)))
      _fail(t);
    else
      r_104 = t;
    t = not_null(n_104);
    {
      ATerm r_43;
      r_43 = t;
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(q_104), not_null(r_104));
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = SSL_gtr(not_null(q_104), not_null(r_104));
          }
      }
      t = r_43;
    }
    return(t);
  }
  if(((n_104 != NULL) && (n_104 != t)))
    _fail(t);
  else
    n_104 = t;
  t = not_null(n_104);
  if(match_cons(t, sym__2))
    {
      o_104 = ATgetArgument(t, 0);
      p_104 = ATgetArgument(t, 1);
      t = s_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_104 = NULL;
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
      ATerm z_104 (ATerm t)
      {
        t = not_null(x_104);
        if(((v_104 != NULL) && (v_104 != t)))
          _fail(t);
        else
          v_104 = t;
        t = not_null(y_104);
        if(((v_104 != NULL) && (v_104 != t)))
          _fail(t);
        else
          v_104 = t;
        t = not_null(w_104);
        return(t);
      }
      if(((w_104 != NULL) && (w_104 != t)))
        _fail(t);
      else
        w_104 = t;
      t = not_null(w_104);
      if(match_cons(t, sym__2))
        {
          x_104 = ATgetArgument(t, 0);
          y_104 = ATgetArgument(t, 1);
          t = z_104(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm w_43;
    w_43 = t;
    {
      ATerm b_105 = NULL;
      ATerm c_105 = NULL;
      ATerm d_105 (ATerm t)
      {
        t = not_null(c_105);
        if(((b_105 != NULL) && (b_105 != t)))
          _fail(t);
        else
          b_105 = t;
        t = not_null(c_105);
        return(t);
      }
      t = term_y_40;
      t = get_config_0_0(t);
      if(((c_105 != NULL) && (c_105 != t)))
        _fail(t);
      else
        c_105 = t;
      t = d_105(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), term_n_30);
      t = geq_0_0(t);
    }
    t = w_43;
    t = o_126(t);
    return(t);
  }
  t = try_1_0(c_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm g_105 = NULL,i_105 = NULL;
    ATerm x_43;
    x_43 = t;
    {
      ATerm h_105 = NULL;
      ATerm k_105 (ATerm t)
      {
        t = not_null(h_105);
        if(((g_105 != NULL) && (g_105 != t)))
          _fail(t);
        else
          g_105 = t;
        t = not_null(h_105);
        return(t);
      }
      t = run_time_0_0(t);
      if(((h_105 != NULL) && (h_105 != t)))
        _fail(t);
      else
        h_105 = t;
      t = k_105(t);
    }
    t = x_43;
    {
      ATerm j_105 = NULL;
      ATerm l_105 (ATerm t)
      {
        t = not_null(j_105);
        if(((i_105 != NULL) && (i_105 != t)))
          _fail(t);
        else
          i_105 = t;
        t = not_null(j_105);
        return(t);
      }
      t = term_a_34;
      t = whoami_0_0(t);
      if(((j_105 != NULL) && (j_105 != t)))
        _fail(t);
      else
        j_105 = t;
      t = l_105(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_43), not_null(g_105)), term_y_43), not_null(i_105)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(d_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_h_30;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm q_105 = NULL;
  ATerm z_105 (ATerm t)
  {
    ATerm r_105 = NULL,s_105 = NULL,u_105 = NULL;
    t = not_null(q_105);
    if(((r_105 != NULL) && (r_105 != t)))
      _fail(t);
    else
      r_105 = t;
    t = not_null(q_105);
    {
      ATerm a_44;
      a_44 = t;
      {
        ATerm t_105 = NULL;
        ATerm a_106 (ATerm t)
        {
          t = not_null(t_105);
          if(((s_105 != NULL) && (s_105 != t)))
            _fail(t);
          else
            s_105 = t;
          t = not_null(t_105);
          return(t);
        }
        t = SSLgetAnnotations(not_null(r_105));
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = a_106(t);
      }
      t = a_44;
      {
        ATerm y_105 = NULL;
        ATerm b_106 (ATerm t)
        {
          t = not_null(y_105);
          if(((u_105 != NULL) && (u_105 != t)))
            _fail(t);
          else
            u_105 = t;
          t = not_null(y_105);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_105));
        if(((y_105 != NULL) && (y_105 != t)))
          _fail(t);
        else
          y_105 = t;
        t = b_106(t);
        t = not_null(u_105);
      }
    }
    return(t);
  }
  if(((q_105 != NULL) && (q_105 != t)))
    _fail(t);
  else
    q_105 = t;
  t = not_null(q_105);
  if(match_cons(t, sym_Version_0))
    {
      t = z_105(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_44);
    }
  else
    {
      t = b_44;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm e_44 = t;
          int f_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(f_44);
            }
          else
            {
              t = e_44;
              {
                ATerm g_44 = t;
                int h_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_44);
                  }
                else
                  {
                    t = g_44;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_5, t);
      }
    }
  t = j_128(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_106 = NULL;
  ATerm f_106 (ATerm t)
  {
    ATerm e_106 = NULL;
    t = not_null(d_106);
    if(((e_106 != NULL) && (e_106 != t)))
      _fail(t);
    else
      e_106 = t;
    t = not_null(d_106);
    t = SSL_table_create(not_null(e_106));
    return(t);
  }
  if(((d_106 != NULL) && (d_106 != t)))
    _fail(t);
  else
    d_106 = t;
  t = f_106(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm h_106 = NULL;
  ATerm j_106 (ATerm t)
  {
    ATerm i_106 = NULL;
    t = not_null(h_106);
    if(((i_106 != NULL) && (i_106 != t)))
      _fail(t);
    else
      i_106 = t;
    t = not_null(h_106);
    {
      ATerm i_44;
      i_44 = t;
      t = term_j_44;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_j_44, term_k_44, not_null(i_106));
      t = table_put_0_0(t);
      t = i_44;
    }
    return(t);
  }
  if(((h_106 != NULL) && (h_106 != t)))
    _fail(t);
  else
    h_106 = t;
  t = j_106(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_106 = NULL;
  ATerm p_106 (ATerm t)
  {
    ATerm o_106 = NULL;
    t = not_null(l_106);
    if(((o_106 != NULL) && (o_106 != t)))
      _fail(t);
    else
      o_106 = t;
    t = not_null(l_106);
    t = SSL_table_destroy(not_null(o_106));
    return(t);
  }
  if(((l_106 != NULL) && (l_106 != t)))
    _fail(t);
  else
    l_106 = t;
  t = p_106(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm r_106 = NULL;
  ATerm v_106 (ATerm t)
  {
    ATerm s_106 = NULL;
    t = not_null(r_106);
    if(((s_106 != NULL) && (s_106 != t)))
      _fail(t);
    else
      s_106 = t;
    t = not_null(r_106);
    t = SSL_exit(not_null(s_106));
    return(t);
  }
  if(((r_106 != NULL) && (r_106 != t)))
    _fail(t);
  else
    r_106 = t;
  t = v_106(t);
  return(t);
}
ATerm long_description_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm w_106 (ATerm t)
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = Cons_2_0(i_113, w_106, t);
      }
    return(t);
  }
  t = w_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  ATerm o_107 (ATerm t)
  {
    ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
    t = not_null(d_107);
    if(((g_107 != NULL) && (g_107 != t)))
      _fail(t);
    else
      g_107 = t;
    t = not_null(e_107);
    if(((h_107 != NULL) && (h_107 != t)))
      _fail(t);
    else
      h_107 = t;
    t = not_null(h_107);
    {
      ATerm n_44;
      n_44 = t;
      {
        ATerm j_107 = NULL,l_107 = NULL,n_107 = NULL;
        ATerm u_107 (ATerm t)
        {
          t = not_null(n_107);
          if(((i_107 != NULL) && (i_107 != t)))
            _fail(t);
          else
            i_107 = t;
          t = not_null(n_107);
          return(t);
        }
        ATerm o_44;
        o_44 = t;
        {
          ATerm k_107 = NULL;
          ATerm q_107 (ATerm t)
          {
            t = not_null(k_107);
            if(((j_107 != NULL) && (j_107 != t)))
              _fail(t);
            else
              j_107 = t;
            t = not_null(k_107);
            return(t);
          }
          t = g_0(t);
          if(((k_107 != NULL) && (k_107 != t)))
            _fail(t);
          else
            k_107 = t;
          t = q_107(t);
        }
        t = o_44;
        {
          ATerm m_107 = NULL;
          ATerm t_107 (ATerm t)
          {
            t = not_null(m_107);
            if(((l_107 != NULL) && (l_107 != t)))
              _fail(t);
            else
              l_107 = t;
            t = not_null(m_107);
            return(t);
          }
          t = not_null(g_107);
          t = f_0(t);
          if(((m_107 != NULL) && (m_107 != t)))
            _fail(t);
          else
            m_107 = t;
          t = t_107(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(j_107)), not_null(l_107));
          if(((n_107 != NULL) && (n_107 != t)))
            _fail(t);
          else
            n_107 = t;
          t = u_107(t);
        }
      }
      t = n_44;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(i_107);
          return(t);
        }
        t = reverse_acc_2_0(f_0, f_5, t);
      }
    }
    return(t);
  }
  ATerm p_107 (ATerm t)
  {
    t = term_a_34;
    t = g_0(t);
    return(t);
  }
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = not_null(f_107);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_107 = ATgetFirst((ATermList) t);
      e_107 = (ATerm) ATgetNext((ATermList) t);
      t = o_107(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_107(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_5, t);
  return(t);
}
ATerm short_description_1_0 (ATerm x_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL;
  ATerm k_108 (ATerm t)
  {
    ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL,g_108 = NULL;
    ATerm m_108 (ATerm t)
    {
      ATerm h_108 = NULL,i_108 = NULL;
      t = not_null(g_108);
      if(((h_108 != NULL) && (h_108 != t)))
        _fail(t);
      else
        h_108 = t;
      t = not_null(g_108);
      {
        ATerm j_108 = NULL;
        ATerm n_108 (ATerm t)
        {
          t = not_null(j_108);
          if(((i_108 != NULL) && (i_108 != t)))
            _fail(t);
          else
            i_108 = t;
          t = not_null(j_108);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_108)), not_null(e_108));
        if(((j_108 != NULL) && (j_108 != t)))
          _fail(t);
        else
          j_108 = t;
        t = n_108(t);
        t = not_null(i_108);
      }
      return(t);
    }
    t = not_null(a_108);
    if(((c_108 != NULL) && (c_108 != t)))
      _fail(t);
    else
      c_108 = t;
    t = not_null(b_108);
    if(((d_108 != NULL) && (d_108 != t)))
      _fail(t);
    else
      d_108 = t;
    t = not_null(a_108);
    {
      ATerm f_108 = NULL;
      ATerm l_108 (ATerm t)
      {
        t = not_null(f_108);
        if(((e_108 != NULL) && (e_108 != t)))
          _fail(t);
        else
          e_108 = t;
        t = not_null(f_108);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_108));
      if(((f_108 != NULL) && (f_108 != t)))
        _fail(t);
      else
        f_108 = t;
      t = l_108(t);
      t = not_null(d_108);
      t = s_93(t);
      if(((g_108 != NULL) && (g_108 != t)))
        _fail(t);
      else
        g_108 = t;
      t = m_108(t);
    }
    return(t);
  }
  if(((a_108 != NULL) && (a_108 != t)))
    _fail(t);
  else
    a_108 = t;
  t = not_null(a_108);
  if(match_cons(t, sym_Program_1))
    {
      b_108 = ATgetArgument(t, 0);
      t = k_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_108 = NULL;
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_108 = NULL;
      ATerm b_109 (ATerm t)
      {
        t = not_null(t_108);
        if(((s_108 != NULL) && (s_108 != t)))
          _fail(t);
        else
          s_108 = t;
        t = not_null(t_108);
        return(t);
      }
      t = term_m_43;
      t = get_config_0_0(t);
      if(((t_108 != NULL) && (t_108 != t)))
        _fail(t);
      else
        t_108 = t;
      t = b_109(t);
      ;
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm u_108 = NULL;
            ATerm c_109 (ATerm t)
            {
              t = not_null(u_108);
              if(((s_108 != NULL) && (s_108 != t)))
                _fail(t);
              else
                s_108 = t;
              t = not_null(u_108);
              return(t);
            }
            if(((u_108 != NULL) && (u_108 != t)))
              _fail(t);
            else
              u_108 = t;
            t = c_109(t);
            return(t);
          }
          t = Program_1_0(i_5, t);
          return(t);
        }
        t = option_defined_1_0(h_5, t);
      }
    }
  {
    ATerm j_5 (ATerm t)
    {
      ATerm m_5 (ATerm t)
      {
        t = not_null(s_108);
        return(t);
      }
      t = short_description_1_0(m_5, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(j_5, t);
    t = term_r_44;
    t = echo_0_0(t);
    t = term_u_44;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm x_108 = NULL;
        ATerm y_108 = NULL;
        ATerm d_109 (ATerm t)
        {
          t = not_null(y_108);
          if(((x_108 != NULL) && (x_108 != t)))
            _fail(t);
          else
            x_108 = t;
          t = not_null(y_108);
          return(t);
        }
        if(((y_108 != NULL) && (y_108 != t)))
          _fail(t);
        else
          y_108 = t;
        t = d_109(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_108)), term_v_44);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(n_5, t);
      {
        ATerm o_5 (ATerm t)
        {
          ATerm z_108 = NULL;
          ATerm a_109 = NULL;
          ATerm e_109 (ATerm t)
          {
            t = not_null(a_109);
            if(((z_108 != NULL) && (z_108 != t)))
              _fail(t);
            else
              z_108 = t;
            t = not_null(a_109);
            return(t);
          }
          ATerm p_5 (ATerm t)
          {
            t = not_null(s_108);
            return(t);
          }
          t = long_description_1_0(p_5, t);
          if(((a_109 != NULL) && (a_109 != t)))
            _fail(t);
          else
            a_109 = t;
          t = e_109(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(z_108)), term_w_44);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(o_5, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL;
  ATerm u_109 (ATerm t)
  {
    ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,q_109 = NULL;
    ATerm w_109 (ATerm t)
    {
      ATerm r_109 = NULL,s_109 = NULL;
      t = not_null(q_109);
      if(((r_109 != NULL) && (r_109 != t)))
        _fail(t);
      else
        r_109 = t;
      t = not_null(q_109);
      {
        ATerm t_109 = NULL;
        ATerm x_109 (ATerm t)
        {
          t = not_null(t_109);
          if(((s_109 != NULL) && (s_109 != t)))
            _fail(t);
          else
            s_109 = t;
          t = not_null(t_109);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_109)), not_null(o_109));
        if(((t_109 != NULL) && (t_109 != t)))
          _fail(t);
        else
          t_109 = t;
        t = x_109(t);
        t = not_null(s_109);
      }
      return(t);
    }
    t = not_null(k_109);
    if(((m_109 != NULL) && (m_109 != t)))
      _fail(t);
    else
      m_109 = t;
    t = not_null(l_109);
    if(((n_109 != NULL) && (n_109 != t)))
      _fail(t);
    else
      n_109 = t;
    t = not_null(k_109);
    {
      ATerm p_109 = NULL;
      ATerm v_109 (ATerm t)
      {
        t = not_null(p_109);
        if(((o_109 != NULL) && (o_109 != t)))
          _fail(t);
        else
          o_109 = t;
        t = not_null(p_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_109));
      if(((p_109 != NULL) && (p_109 != t)))
        _fail(t);
      else
        p_109 = t;
      t = v_109(t);
      t = not_null(n_109);
      t = t_93(t);
      if(((q_109 != NULL) && (q_109 != t)))
        _fail(t);
      else
        q_109 = t;
      t = w_109(t);
    }
    return(t);
  }
  if(((k_109 != NULL) && (k_109 != t)))
    _fail(t);
  else
    k_109 = t;
  t = not_null(k_109);
  if(match_cons(t, sym_Undefined_1))
    {
      l_109 = ATgetArgument(t, 0);
      t = u_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm y_109 (ATerm t)
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_113, _id, t);
        ;
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        t = Cons_2_0(_id, y_109, t);
      }
    return(t);
  }
  t = y_109(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  t = fetch_1_0(x_129, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  if(((a_110 != NULL) && (a_110 != t)))
    _fail(t);
  else
    a_110 = t;
  t = not_null(a_110);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(a_110);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_110 = ATgetFirst((ATermList) t);
          c_110 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_110);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_45;
  b_45 = t;
  {
    ATerm f_110 = NULL;
    ATerm i_110 = NULL;
    ATerm k_110 (ATerm t)
    {
      t = not_null(i_110);
      if(((f_110 != NULL) && (f_110 != t)))
        _fail(t);
      else
        f_110 = t;
      t = not_null(i_110);
      return(t);
    }
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        {
          ATerm g_110 = NULL;
          ATerm h_110 = NULL;
          ATerm j_110 (ATerm t)
          {
            t = not_null(h_110);
            if(((g_110 != NULL) && (g_110 != t)))
              _fail(t);
            else
              g_110 = t;
            t = not_null(h_110);
            return(t);
          }
          if(((h_110 != NULL) && (h_110 != t)))
            _fail(t);
          else
            h_110 = t;
          t = j_110(t);
          t = (ATerm) ATinsert(ATempty, not_null(g_110));
        }
      }
    if(((i_110 != NULL) && (i_110 != t)))
      _fail(t);
    else
      i_110 = t;
    t = k_110(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_41, not_null(f_110));
    t = printnl_0_0(t);
  }
  t = b_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_43;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm p_110 = NULL;
  ATerm v_110 (ATerm t)
  {
    ATerm q_110 = NULL,r_110 = NULL,t_110 = NULL;
    t = not_null(p_110);
    if(((q_110 != NULL) && (q_110 != t)))
      _fail(t);
    else
      q_110 = t;
    t = not_null(p_110);
    {
      ATerm g_45;
      g_45 = t;
      {
        ATerm s_110 = NULL;
        ATerm w_110 (ATerm t)
        {
          t = not_null(s_110);
          if(((r_110 != NULL) && (r_110 != t)))
            _fail(t);
          else
            r_110 = t;
          t = not_null(s_110);
          return(t);
        }
        t = SSLgetAnnotations(not_null(q_110));
        if(((s_110 != NULL) && (s_110 != t)))
          _fail(t);
        else
          s_110 = t;
        t = w_110(t);
      }
      t = g_45;
      {
        ATerm u_110 = NULL;
        ATerm x_110 (ATerm t)
        {
          t = not_null(u_110);
          if(((t_110 != NULL) && (t_110 != t)))
            _fail(t);
          else
            t_110 = t;
          t = not_null(u_110);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_110));
        if(((u_110 != NULL) && (u_110 != t)))
          _fail(t);
        else
          u_110 = t;
        t = x_110(t);
        t = not_null(t_110);
      }
    }
    return(t);
  }
  if(((p_110 != NULL) && (p_110 != t)))
    _fail(t);
  else
    p_110 = t;
  t = not_null(p_110);
  if(match_cons(t, sym_Help_0))
    {
      t = v_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_105(t);
      ;
      LocalPopChoice(i_45);
    }
  else
    {
      t = h_45;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 (ATerm t)
      {
        ATerm a_111 = NULL;
        if(((a_111 != NULL) && (a_111 != t)))
          _fail(t);
        else
          a_111 = t;
        t = not_null(a_111);
        if(match_string(t, "--about"))
          {
            t = not_null(a_111);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_m_45;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_n_45;
        return(t);
      }
      t = Option_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(k_45);
    }
  else
    {
      t = j_45;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm b_111 = NULL;
          if(((b_111 != NULL) && (b_111 != t)))
            _fail(t);
          else
            b_111 = t;
          t = not_null(b_111);
          if(match_string(t, "--version"))
            {
              t = not_null(b_111);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_m_45;
          t = set_config_0_0(t);
          t = term_p_45;
          t = set_config_0_0(t);
          t = term_q_45;
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_r_45;
          return(t);
        }
        t = Option_3_0(t_5, u_5, v_5, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  ATerm j_111 (ATerm t)
  {
    ATerm h_111 = NULL,i_111 = NULL;
    t = not_null(f_111);
    if(((h_111 != NULL) && (h_111 != t)))
      _fail(t);
    else
      h_111 = t;
    t = not_null(g_111);
    if(((i_111 != NULL) && (i_111 != t)))
      _fail(t);
    else
      i_111 = t;
    t = not_null(e_111);
    t = SSL_table_get(not_null(h_111), not_null(i_111));
    return(t);
  }
  if(((e_111 != NULL) && (e_111 != t)))
    _fail(t);
  else
    e_111 = t;
  t = not_null(e_111);
  if(match_cons(t, sym__2))
    {
      f_111 = ATgetArgument(t, 0);
      g_111 = ATgetArgument(t, 1);
      t = j_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  ATerm w_111 (ATerm t)
  {
    ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL;
    t = not_null(o_111);
    if(((s_111 != NULL) && (s_111 != t)))
      _fail(t);
    else
      s_111 = t;
    t = not_null(p_111);
    if(((t_111 != NULL) && (t_111 != t)))
      _fail(t);
    else
      t_111 = t;
    t = not_null(q_111);
    if(((r_111 != NULL) && (r_111 != t)))
      _fail(t);
    else
      r_111 = t;
    t = not_null(n_111);
    {
      ATerm s_45;
      s_45 = t;
      {
        ATerm u_111 = NULL;
        ATerm v_111 = NULL;
        ATerm x_111 (ATerm t)
        {
          t = not_null(v_111);
          if(((u_111 != NULL) && (u_111 != t)))
            _fail(t);
          else
            u_111 = t;
          t = not_null(v_111);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_111), not_null(t_111));
        {
          ATerm t_45 = t;
          int u_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(u_45);
            }
          else
            {
              t = t_45;
              t = (ATerm) ATempty;
            }
          if(((v_111 != NULL) && (v_111 != t)))
            _fail(t);
          else
            v_111 = t;
          t = x_111(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_111), not_null(t_111), (ATerm) ATinsert(CheckATermList(not_null(u_111)), not_null(r_111)));
        t = table_put_0_0(t);
      }
      t = s_45;
    }
    return(t);
  }
  if(((n_111 != NULL) && (n_111 != t)))
    _fail(t);
  else
    n_111 = t;
  t = not_null(n_111);
  if(match_cons(t, sym__3))
    {
      o_111 = ATgetArgument(t, 0);
      p_111 = ATgetArgument(t, 1);
      q_111 = ATgetArgument(t, 2);
      t = w_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_131 (ATerm), ATerm t)
{
  ATerm z_111 = NULL;
  ATerm a_112 = NULL;
  ATerm b_112 (ATerm t)
  {
    t = not_null(a_112);
    if(((z_111 != NULL) && (z_111 != t)))
      _fail(t);
    else
      z_111 = t;
    t = not_null(a_112);
    return(t);
  }
  t = term_a_34;
  t = c_131(t);
  if(((a_112 != NULL) && (a_112 != t)))
    _fail(t);
  else
    a_112 = t;
  t = b_112(t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_44, term_t_44, not_null(z_111));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
  ATerm n_112 (ATerm t)
  {
    t = not_null(g_112);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm o_112 (ATerm t)
  {
    ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
    t = not_null(h_112);
    if(((j_112 != NULL) && (j_112 != t)))
      _fail(t);
    else
      j_112 = t;
    t = not_null(i_112);
    if(((k_112 != NULL) && (k_112 != t)))
      _fail(t);
    else
      k_112 = t;
    t = not_null(g_112);
    {
      ATerm v_45;
      v_45 = t;
      t = not_null(j_112);
      t = a_0(t);
      t = v_45;
      {
        ATerm m_112 = NULL;
        ATerm p_112 (ATerm t)
        {
          t = not_null(m_112);
          if(((l_112 != NULL) && (l_112 != t)))
            _fail(t);
          else
            l_112 = t;
          t = not_null(m_112);
          return(t);
        }
        t = term_a_34;
        t = b_0(t);
        if(((m_112 != NULL) && (m_112 != t)))
          _fail(t);
        else
          m_112 = t;
        t = p_112(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(k_112)), not_null(l_112));
      }
    }
    return(t);
  }
  if(((g_112 != NULL) && (g_112 != t)))
    _fail(t);
  else
    g_112 = t;
  t = not_null(g_112);
  if(match_string(t, "register-usage-info"))
    {
      t = n_112(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_112 = ATgetFirst((ATermList) t);
          i_112 = (ATerm) ATgetNext((ATermList) t);
          t = o_112(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm r_112 = NULL;
    if(((r_112 != NULL) && (r_112 != t)))
      _fail(t);
    else
      r_112 = t;
    t = not_null(r_112);
    if(match_string(t, "--help"))
      {
        t = not_null(r_112);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(r_112);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(r_112);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_w_45;
    t = set_config_0_0(t);
    t = term_x_45;
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_y_45;
    return(t);
  }
  t = Option_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL;
  ATerm z_112 (ATerm t)
  {
    ATerm x_112 = NULL,y_112 = NULL;
    t = not_null(v_112);
    if(((x_112 != NULL) && (x_112 != t)))
      _fail(t);
    else
      x_112 = t;
    t = not_null(w_112);
    if(((y_112 != NULL) && (y_112 != t)))
      _fail(t);
    else
      y_112 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(y_112)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_112)));
    return(t);
  }
  if(((u_112 != NULL) && (u_112 != t)))
    _fail(t);
  else
    u_112 = t;
  t = not_null(u_112);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_112 = ATgetFirst((ATermList) t);
      w_112 = (ATerm) ATgetNext((ATermList) t);
      t = z_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  ATerm h_113 = NULL,k_113 = NULL,l_113 = NULL;
  ATerm b_114 (ATerm t)
  {
    ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,r_113 = NULL;
    ATerm d_114 (ATerm t)
    {
      ATerm u_113 = NULL,v_113 = NULL;
      ATerm e_114 (ATerm t)
      {
        ATerm w_113 = NULL,x_113 = NULL;
        t = not_null(v_113);
        if(((w_113 != NULL) && (w_113 != t)))
          _fail(t);
        else
          w_113 = t;
        t = not_null(v_113);
        {
          ATerm a_114 = NULL;
          ATerm f_114 (ATerm t)
          {
            t = not_null(a_114);
            if(((x_113 != NULL) && (x_113 != t)))
              _fail(t);
            else
              x_113 = t;
            t = not_null(a_114);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_113)), not_null(u_113)), not_null(p_113));
          if(((a_114 != NULL) && (a_114 != t)))
            _fail(t);
          else
            a_114 = t;
          t = f_114(t);
          t = not_null(x_113);
        }
        return(t);
      }
      t = not_null(r_113);
      if(((u_113 != NULL) && (u_113 != t)))
        _fail(t);
      else
        u_113 = t;
      t = not_null(o_113);
      t = g_84(t);
      if(((v_113 != NULL) && (v_113 != t)))
        _fail(t);
      else
        v_113 = t;
      t = e_114(t);
      return(t);
    }
    t = not_null(h_113);
    if(((m_113 != NULL) && (m_113 != t)))
      _fail(t);
    else
      m_113 = t;
    t = not_null(k_113);
    if(((n_113 != NULL) && (n_113 != t)))
      _fail(t);
    else
      n_113 = t;
    t = not_null(l_113);
    if(((o_113 != NULL) && (o_113 != t)))
      _fail(t);
    else
      o_113 = t;
    t = not_null(h_113);
    {
      ATerm q_113 = NULL;
      ATerm c_114 (ATerm t)
      {
        t = not_null(q_113);
        if(((p_113 != NULL) && (p_113 != t)))
          _fail(t);
        else
          p_113 = t;
        t = not_null(q_113);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_113));
      if(((q_113 != NULL) && (q_113 != t)))
        _fail(t);
      else
        q_113 = t;
      t = c_114(t);
      t = not_null(n_113);
      t = f_84(t);
      if(((r_113 != NULL) && (r_113 != t)))
        _fail(t);
      else
        r_113 = t;
      t = d_114(t);
    }
    return(t);
  }
  if(((h_113 != NULL) && (h_113 != t)))
    _fail(t);
  else
    h_113 = t;
  t = not_null(h_113);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_113 = ATgetFirst((ATermList) t);
      l_113 = (ATerm) ATgetNext((ATermList) t);
      t = b_114(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm k_114 = NULL;
  ATerm q_114 (ATerm t)
  {
    ATerm l_114 = NULL,m_114 = NULL,o_114 = NULL;
    t = not_null(k_114);
    if(((l_114 != NULL) && (l_114 != t)))
      _fail(t);
    else
      l_114 = t;
    t = not_null(k_114);
    {
      ATerm z_45;
      z_45 = t;
      {
        ATerm n_114 = NULL;
        ATerm r_114 (ATerm t)
        {
          t = not_null(n_114);
          if(((m_114 != NULL) && (m_114 != t)))
            _fail(t);
          else
            m_114 = t;
          t = not_null(n_114);
          return(t);
        }
        t = SSLgetAnnotations(not_null(l_114));
        if(((n_114 != NULL) && (n_114 != t)))
          _fail(t);
        else
          n_114 = t;
        t = r_114(t);
      }
      t = z_45;
      {
        ATerm p_114 = NULL;
        ATerm s_114 (ATerm t)
        {
          t = not_null(p_114);
          if(((o_114 != NULL) && (o_114 != t)))
            _fail(t);
          else
            o_114 = t;
          t = not_null(p_114);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(m_114));
        if(((p_114 != NULL) && (p_114 != t)))
          _fail(t);
        else
          p_114 = t;
        t = s_114(t);
        t = not_null(o_114);
      }
    }
    return(t);
  }
  if(((k_114 != NULL) && (k_114 != t)))
    _fail(t);
  else
    k_114 = t;
  t = not_null(k_114);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_114(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL,x_114 = NULL;
  ATerm a_115 (ATerm t)
  {
    ATerm y_114 = NULL,z_114 = NULL;
    t = not_null(w_114);
    if(((y_114 != NULL) && (y_114 != t)))
      _fail(t);
    else
      y_114 = t;
    t = not_null(x_114);
    if(((z_114 != NULL) && (z_114 != t)))
      _fail(t);
    else
      z_114 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(y_114), not_null(z_114));
    t = table_put_0_0(t);
    return(t);
  }
  if(((v_114 != NULL) && (v_114 != t)))
    _fail(t);
  else
    v_114 = t;
  t = not_null(v_114);
  if(match_cons(t, sym__2))
    {
      w_114 = ATgetArgument(t, 0);
      x_114 = ATgetArgument(t, 1);
      t = a_115(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_131 (ATerm), ATerm t)
{
  ATerm a_46;
  a_46 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_b_46;
      t = a_131(t);
      return(t);
    }
    t = try_1_0(j_6, t);
  }
  t = a_46;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm f_115 = NULL;
      ATerm c_46;
      c_46 = t;
      {
        ATerm d_115 = NULL;
        ATerm e_115 = NULL;
        ATerm h_115 (ATerm t)
        {
          t = not_null(e_115);
          if(((d_115 != NULL) && (d_115 != t)))
            _fail(t);
          else
            d_115 = t;
          t = not_null(e_115);
          return(t);
        }
        if(((e_115 != NULL) && (e_115 != t)))
          _fail(t);
        else
          e_115 = t;
        t = h_115(t);
        t = (ATerm) ATmakeAppl(sym__2, term_m_43, not_null(d_115));
        t = set_config_0_0(t);
      }
      t = c_46;
      {
        ATerm g_115 = NULL;
        ATerm i_115 (ATerm t)
        {
          t = not_null(g_115);
          if(((f_115 != NULL) && (f_115 != t)))
            _fail(t);
          else
            f_115 = t;
          t = not_null(g_115);
          return(t);
        }
        if(((g_115 != NULL) && (g_115 != t)))
          _fail(t);
        else
          g_115 = t;
        t = i_115(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_115));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm d_46 = t;
      int e_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_46 = t;
          int g_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(g_46);
            }
          else
            {
              t = f_46;
              t = a_131(t);
              t = Cons_2_0(_id, l_6, t);
            }
          ;
          LocalPopChoice(e_46);
        }
      else
        {
          t = d_46;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(k_6, l_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
  ATerm h_46;
  h_46 = t;
  {
    ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL;
    ATerm t_115 (ATerm t)
    {
      t = not_null(q_115);
      if(((m_115 != NULL) && (m_115 != t)))
        _fail(t);
      else
        m_115 = t;
      t = not_null(r_115);
      if(((n_115 != NULL) && (n_115 != t)))
        _fail(t);
      else
        n_115 = t;
      t = not_null(s_115);
      if(((o_115 != NULL) && (o_115 != t)))
        _fail(t);
      else
        o_115 = t;
      t = not_null(p_115);
      t = SSL_table_put(not_null(m_115), not_null(n_115), not_null(o_115));
      return(t);
    }
    if(((p_115 != NULL) && (p_115 != t)))
      _fail(t);
    else
      p_115 = t;
    t = not_null(p_115);
    if(match_cons(t, sym__3))
      {
        q_115 = ATgetArgument(t, 0);
        r_115 = ATgetArgument(t, 1);
        s_115 = ATgetArgument(t, 2);
        t = t_115(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = h_46;
  return(t);
}
ATerm parse_options_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  ATerm v_115 = NULL;
  ATerm i_46;
  i_46 = t;
  t = term_j_46;
  t = table_put_0_0(t);
  t = i_46;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm k_46 = t;
      int l_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_130(t);
          ;
          LocalPopChoice(l_46);
        }
      else
        {
          t = k_46;
          {
            ATerm m_46 = t;
            int n_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_46);
              }
            else
              {
                t = m_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_6, t);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm o_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46;
            q_46 = t;
            {
              ATerm r_46 = t;
              int s_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_44;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(s_46);
                }
              else
                {
                  t = r_46;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = q_46;
            t = system_usage_0_0(t);
            t = term_h_30;
            t = exit_0_0(t);
            ;
            LocalPopChoice(p_46);
          }
        else
          {
            t = o_46;
            {
              ATerm t_46 = t;
              int u_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_46;
                  v_46 = t;
                  t = term_l_45;
                  t = get_config_0_0(t);
                  t = v_46;
                  t = system_about_0_0(t);
                  t = term_h_30;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(u_46);
                }
              else
                {
                  t = t_46;
                  {
                    ATerm o_6 (ATerm t)
                    {
                      ATerm b_7 (ATerm t)
                      {
                        ATerm w_115 = NULL;
                        ATerm x_115 (ATerm t)
                        {
                          t = not_null(w_115);
                          if(((v_115 != NULL) && (v_115 != t)))
                            _fail(t);
                          else
                            v_115 = t;
                          t = not_null(w_115);
                          return(t);
                        }
                        if(((w_115 != NULL) && (w_115 != t)))
                          _fail(t);
                        else
                          w_115 = t;
                        t = x_115(t);
                        return(t);
                      }
                      t = Undefined_1_0(b_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(o_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_115)), term_w_46));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_n_30;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(n_6, t);
      {
        ATerm x_46;
        x_46 = t;
        t = term_s_44;
        t = table_destroy_0_0(t);
        t = x_46;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_128, t);
  t = store_options_0_0(t);
  t = n_128(t);
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_128, t);
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        {
          ATerm a_47 = t;
          int b_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_128(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_47);
            }
          else
            {
              t = a_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_128(t);
        ;
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_7, c_128, d_128, l_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm e_47;
      e_47 = t;
      {
        ATerm z_115 = NULL;
        ATerm a_116 = NULL;
        ATerm b_116 (ATerm t)
        {
          t = not_null(a_116);
          if(((z_115 != NULL) && (z_115 != t)))
            _fail(t);
          else
            z_115 = t;
          t = not_null(a_116);
          return(t);
        }
        t = term_m_43;
        t = get_config_0_0(t);
        if(((a_116 != NULL) && (a_116 != t)))
          _fail(t);
        else
          a_116 = t;
        t = b_116(t);
        t = (ATerm) ATmakeAppl(sym__2, term_e_40, (ATerm) ATinsert(ATempty, not_null(z_115)));
        t = printnl_0_0(t);
      }
      t = e_47;
      return(t);
    }
    t = if_verbose2_1_0(t_7, t);
    return(t);
  }
  t = iowrap_4_0(u_127, v_127, w_127, m_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_127, t_127, default_usage_0_0, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  t = iowrap_2_0(compile_0_0, s2c_options_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = s2c_0_0(t);
  return(t);
}
