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
ATerm term_d_47;
ATerm term_q_46;
ATerm term_i_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_k_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_g_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_k_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_z_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_h_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_j_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_d_32;
ATerm term_c_32;
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
ATerm term_b_30;
ATerm term_a_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
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
ATerm term_r_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
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
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
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
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
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
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Id_1, term_q_22);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Id_1, term_j_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, term_o_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Id_1, term_d_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Id_1, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Equal_2, term_o_24, term_l_20);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Id_1, term_y_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATempty);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_25);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Id_1, term_c_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, term_e_24);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_e_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Id_1, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_25, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Equal_2, term_i_25, term_l_20);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_25, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Id_1, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Id_1, term_q_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_25, (ATerm) ATempty);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Stat_1, term_q_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_27);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Id_1, term_n_28);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_29, (ATerm) ATempty);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_29, term_a_10);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Id_1, term_m_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Id_1, term_q_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Id_1, term_s_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Id_1, term_u_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Id_1, term_a_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Id_1, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Id_1, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Id_1, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_31, (ATerm) ATempty);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_31, term_a_10);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Id_1, term_q_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Id_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_31, (ATerm) ATempty);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_31, term_a_10);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Id_1, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_32);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_32, term_a_10);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Id_1, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Id_1, term_k_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Id_1, term_m_32);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_29, term_e_24);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Return_1, term_e_24);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Id_1, term_i_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_24, term_a_10);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, term_p_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Id_1, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Id_1, term_b_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_35);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Id_1, term_f_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_35, (ATerm) ATempty);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_36, (ATerm) ATempty);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Some_1, term_g_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_9, term_h_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Id_1, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_36, (ATerm) ATempty);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Id_1, term_o_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Id_1, term_q_36);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_CallT_3, term_a_39, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_SDefT_4, term_y_38, (ATerm)ATempty, (ATerm)ATempty, term_b_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Op_2, term_w_39, (ATerm) ATempty);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym__2, term_d_41, term_y_29);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_29);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_t_42, term_w_34);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_e_43, term_w_34);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym__2, term_s_45, term_w_34);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym__2, term_v_45, term_w_34);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_w_34);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym__3, term_z_44, term_a_45, (ATerm) ATempty);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0_0 (ATerm);
ATerm Option_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm DeclareTermId_0_0 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm LiftCompound_0_0 (ATerm);
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm Snd_0_0 (ATerm);
ATerm CachedTerms_0_0 (ATerm);
ATerm BuildDefault_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm Real_1_0 (ATerm v_2 (ATerm), ATerm);
ATerm Str_1_0 (ATerm u_2 (ATerm), ATerm);
ATerm Int_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm r_2 (ATerm), ATerm s_2 (ATerm), ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm Initialized_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm f_108 (ATerm), ATerm);
ATerm construct_term_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_108 (ATerm), ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm real_to_string_0_0 (ATerm);
ATerm Nil_T_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm m_120 (ATerm), ATerm);
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
ATerm string_as_chars_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm q_134 (ATerm), ATerm);
ATerm ConstructorName_0_0 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm e_123 (ATerm, ATerm (ATerm)), ATerm);
ATerm cify_0_0 (ATerm);
ATerm foldr_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm);
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
ATerm end_scope_1_0 (ATerm l_134 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm scope_2_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm);
ATerm assert_1_0 (ATerm o_134 (ATerm), ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_127 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_125 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_125 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm _2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm);
ATerm crush_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_127 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_128 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_131 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_94 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_130 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm);
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
ATerm Option_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    t = term_f_8;
    return(t);
  }
  t = Option_3_0(p_130, q_130, l_0, t);
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 (ATerm t)
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
      t = Option_2_0(r_0, t_0, t);
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
ATerm oncetd_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_109(t);
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
ATerm repeat_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = g_107(t);
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
ATerm BuildDefault_1_0 (ATerm w_86 (ATerm), ATerm t)
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
      t = w_86(t);
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
ATerm Op_2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t)
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
      t = g_86(t);
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
      t = f_86(t);
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
            if(match_string(t, "f_0"))
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
            if(match_string(t, "b_0"))
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
            if(match_string(t, "m_0"))
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  ATerm c_27 (ATerm t)
  {
    ATerm x_25 = NULL,y_25 = NULL;
    t = not_null(w_25);
    if(((x_25 != NULL) && (x_25 != t)))
      _fail(t);
    else
      x_25 = t;
    t = not_null(u_25);
    if(((y_25 != NULL) && (y_25 != t)))
      _fail(t);
    else
      y_25 = t;
    t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_25)), not_null(x_25))));
    return(t);
  }
  ATerm d_27 (ATerm t)
  {
    ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
    t = not_null(w_25);
    if(((z_25 != NULL) && (z_25 != t)))
      _fail(t);
    else
      z_25 = t;
    t = not_null(u_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(v_25);
    {
      ATerm c_26 = NULL,e_26 = NULL;
      ATerm m_27 (ATerm t)
      {
        t = not_null(e_26);
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        t = not_null(e_26);
        return(t);
      }
      ATerm d_26 = NULL;
      ATerm l_27 (ATerm t)
      {
        t = not_null(d_26);
        if(((c_26 != NULL) && (c_26 != t)))
          _fail(t);
        else
          c_26 = t;
        t = not_null(d_26);
        return(t);
      }
      t = not_null(a_26);
      t = length_0_0(t);
      if(((d_26 != NULL) && (d_26 != t)))
        _fail(t);
      else
        d_26 = t;
      t = l_27(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(c_26));
      t = ConstructorName_0_0(t);
      if(((e_26 != NULL) && (e_26 != t)))
        _fail(t);
      else
        e_26 = t;
      t = m_27(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(CheckATermList(not_null(a_26)), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_26)))));
    }
    return(t);
  }
  ATerm e_27 (ATerm t)
  {
    ATerm f_26 = NULL;
    t = not_null(w_25);
    if(((f_26 != NULL) && (f_26 != t)))
      _fail(t);
    else
      f_26 = t;
    t = not_null(f_26);
    return(t);
  }
  ATerm f_27 (ATerm t)
  {
    ATerm g_26 = NULL,h_26 = NULL;
    t = not_null(v_25);
    if(((h_26 != NULL) && (h_26 != t)))
      _fail(t);
    else
      h_26 = t;
    t = not_null(w_25);
    if(((g_26 != NULL) && (g_26 != t)))
      _fail(t);
    else
      g_26 = t;
    t = not_null(v_25);
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = SSLgetAnnotations(not_null(h_26));
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      t = not_null(i_26);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_26 = ATgetFirst((ATermList) t);
          k_26 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(j_26);
          if(match_string(t, "unbound"))
            {
              t = not_null(k_26);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(i_26);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_26))));
    }
    return(t);
  }
  ATerm g_27 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL;
    t = not_null(v_25);
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = not_null(w_25);
    if(((l_26 != NULL) && (l_26 != t)))
      _fail(t);
    else
      l_26 = t;
    t = not_null(v_25);
    {
      ATerm n_26 = NULL;
      t = SSLgetAnnotations(not_null(m_26));
      if(((n_26 != NULL) && (n_26 != t)))
        _fail(t);
      else
        n_26 = t;
      t = not_null(n_26);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(n_26);
        }
      else
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_26))));
    }
    return(t);
  }
  ATerm h_27 (ATerm t)
  {
    ATerm o_26 = NULL,p_26 = NULL;
    t = not_null(v_25);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    t = not_null(w_25);
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(v_25);
    {
      ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
      t = SSLgetAnnotations(not_null(p_26));
      if(((q_26 != NULL) && (q_26 != t)))
        _fail(t);
      else
        q_26 = t;
      t = not_null(q_26);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_26 = ATgetFirst((ATermList) t);
          s_26 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_26);
          if(match_string(t, "bound"))
            {
              t = not_null(s_26);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(q_26);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Id_1, not_null(o_26));
    }
    return(t);
  }
  ATerm i_27 (ATerm t)
  {
    ATerm t_26 = NULL,u_26 = NULL;
    t = not_null(w_25);
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = not_null(v_25);
    {
      ATerm v_26 = NULL;
      ATerm n_27 (ATerm t)
      {
        t = not_null(v_26);
        if(((u_26 != NULL) && (u_26 != t)))
          _fail(t);
        else
          u_26 = t;
        t = not_null(v_26);
        return(t);
      }
      t = not_null(t_26);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      t = n_27(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_l_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_26))))))));
    }
    return(t);
  }
  ATerm j_27 (ATerm t)
  {
    ATerm w_26 = NULL,x_26 = NULL;
    t = not_null(w_25);
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    t = not_null(v_25);
    {
      ATerm y_26 = NULL;
      ATerm o_27 (ATerm t)
      {
        t = not_null(y_26);
        if(((x_26 != NULL) && (x_26 != t)))
          _fail(t);
        else
          x_26 = t;
        t = not_null(y_26);
        return(t);
      }
      t = not_null(w_26);
      t = real_to_string_0_0(t);
      if(((y_26 != NULL) && (y_26 != t)))
        _fail(t);
      else
        y_26 = t;
      t = o_27(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(x_26)))));
    }
    return(t);
  }
  ATerm k_27 (ATerm t)
  {
    ATerm z_26 = NULL,a_27 = NULL;
    t = not_null(w_25);
    if(((z_26 != NULL) && (z_26 != t)))
      _fail(t);
    else
      z_26 = t;
    t = not_null(v_25);
    {
      ATerm b_27 = NULL;
      ATerm p_27 (ATerm t)
      {
        t = not_null(b_27);
        if(((a_27 != NULL) && (a_27 != t)))
          _fail(t);
        else
          a_27 = t;
        t = not_null(b_27);
        return(t);
      }
      t = not_null(z_26);
      t = int_to_string_0_0(t);
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = p_27(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_27)))));
    }
    return(t);
  }
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = not_null(v_25);
  if(match_cons(t, sym_Anno_2))
    {
      w_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
      t = c_27(t);
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          w_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
          t = d_27(t);
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              w_25 = ATgetArgument(t, 0);
              t = e_27(t);
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  w_25 = ATgetArgument(t, 0);
                  {
                    ATerm l_21 = t;
                    int m_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_27(t);
                        ;
                        LocalPopChoice(m_21);
                      }
                    else
                      {
                        t = l_21;
                        {
                          ATerm n_21 = t;
                          int j_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_27(t);
                              ;
                              LocalPopChoice(j_22);
                            }
                          else
                            {
                              t = n_21;
                              t = h_27(t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      w_25 = ATgetArgument(t, 0);
                      t = i_27(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          w_25 = ATgetArgument(t, 0);
                          t = j_27(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_Int_1))
                            {
                              w_25 = ATgetArgument(t, 0);
                              t = k_27(t);
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
ATerm Id_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  ATerm f_28 (ATerm t)
  {
    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,b_28 = NULL;
    ATerm h_28 (ATerm t)
    {
      ATerm c_28 = NULL,d_28 = NULL;
      t = not_null(b_28);
      if(((c_28 != NULL) && (c_28 != t)))
        _fail(t);
      else
        c_28 = t;
      t = not_null(b_28);
      {
        ATerm e_28 = NULL;
        ATerm i_28 (ATerm t)
        {
          t = not_null(e_28);
          if(((d_28 != NULL) && (d_28 != t)))
            _fail(t);
          else
            d_28 = t;
          t = not_null(e_28);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(c_28)), not_null(z_27));
        if(((e_28 != NULL) && (e_28 != t)))
          _fail(t);
        else
          e_28 = t;
        t = i_28(t);
        t = not_null(d_28);
      }
      return(t);
    }
    t = not_null(v_27);
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = not_null(w_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(v_27);
    {
      ATerm a_28 = NULL;
      ATerm g_28 (ATerm t)
      {
        t = not_null(a_28);
        if(((z_27 != NULL) && (z_27 != t)))
          _fail(t);
        else
          z_27 = t;
        t = not_null(a_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_27));
      if(((a_28 != NULL) && (a_28 != t)))
        _fail(t);
      else
        a_28 = t;
      t = g_28(t);
      t = not_null(y_27);
      t = n_96(t);
      if(((b_28 != NULL) && (b_28 != t)))
        _fail(t);
      else
        b_28 = t;
      t = h_28(t);
    }
    return(t);
  }
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  t = not_null(v_27);
  if(match_cons(t, sym_Id_1))
    {
      w_27 = ATgetArgument(t, 0);
      t = f_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FunCall_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  ATerm d_29 (ATerm t)
  {
    ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL;
    ATerm f_29 (ATerm t)
    {
      ATerm y_28 = NULL,z_28 = NULL;
      ATerm g_29 (ATerm t)
      {
        ATerm a_29 = NULL,b_29 = NULL;
        t = not_null(z_28);
        if(((a_29 != NULL) && (a_29 != t)))
          _fail(t);
        else
          a_29 = t;
        t = not_null(z_28);
        {
          ATerm c_29 = NULL;
          ATerm h_29 (ATerm t)
          {
            t = not_null(c_29);
            if(((b_29 != NULL) && (b_29 != t)))
              _fail(t);
            else
              b_29 = t;
            t = not_null(c_29);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(y_28), not_null(a_29)), not_null(v_28));
          if(((c_29 != NULL) && (c_29 != t)))
            _fail(t);
          else
            c_29 = t;
          t = h_29(t);
          t = not_null(b_29);
        }
        return(t);
      }
      t = not_null(x_28);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      t = not_null(u_28);
      t = s_99(t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = g_29(t);
      return(t);
    }
    t = not_null(p_28);
    if(((s_28 != NULL) && (s_28 != t)))
      _fail(t);
    else
      s_28 = t;
    t = not_null(q_28);
    if(((t_28 != NULL) && (t_28 != t)))
      _fail(t);
    else
      t_28 = t;
    t = not_null(r_28);
    if(((u_28 != NULL) && (u_28 != t)))
      _fail(t);
    else
      u_28 = t;
    t = not_null(p_28);
    {
      ATerm w_28 = NULL;
      ATerm e_29 (ATerm t)
      {
        t = not_null(w_28);
        if(((v_28 != NULL) && (v_28 != t)))
          _fail(t);
        else
          v_28 = t;
        t = not_null(w_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_28));
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      t = e_29(t);
      t = not_null(t_28);
      t = r_99(t);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = f_29(t);
    }
    return(t);
  }
  if(((p_28 != NULL) && (p_28 != t)))
    _fail(t);
  else
    p_28 = t;
  t = not_null(p_28);
  if(match_cons(t, sym_FunCall_2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      t = d_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  ATerm z_30 (ATerm t)
  {
    ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
    t = not_null(c_30);
    if(((j_30 != NULL) && (j_30 != t)))
      _fail(t);
    else
      j_30 = t;
    t = not_null(e_30);
    if(((k_30 != NULL) && (k_30 != t)))
      _fail(t);
    else
      k_30 = t;
    t = not_null(g_30);
    {
      ATerm y_30 = NULL;
      ATerm c_31 (ATerm t)
      {
        t = not_null(y_30);
        if(((l_30 != NULL) && (l_30 != t)))
          _fail(t);
        else
          l_30 = t;
        t = not_null(y_30);
        return(t);
      }
      t = not_null(k_30);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
            ATerm b_31 (ATerm t)
            {
              ATerm v_30 = NULL;
              t = not_null(u_30);
              if(((v_30 != NULL) && (v_30 != t)))
                _fail(t);
              else
                v_30 = t;
              t = not_null(v_30);
              {
                ATerm m_22 = t;
                int n_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm w_30 = NULL;
                      if(((w_30 != NULL) && (w_30 != t)))
                        _fail(t);
                      else
                        w_30 = t;
                      t = not_null(w_30);
                      if(match_string(t, "ATempty"))
                        {
                          t = not_null(w_30);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Id_1_0(u_1, t);
                    ;
                    LocalPopChoice(n_22);
                  }
                else
                  {
                    t = m_22;
                    {
                      ATerm v_1 (ATerm t)
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm x_30 = NULL;
                          if(((x_30 != NULL) && (x_30 != t)))
                            _fail(t);
                          else
                            x_30 = t;
                          t = not_null(x_30);
                          if(match_string(t, "ATinsert"))
                            {
                              t = not_null(x_30);
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
            if(((m_30 != NULL) && (m_30 != t)))
              _fail(t);
            else
              m_30 = t;
            t = not_null(m_30);
            if(match_cons(t, sym_TypeCast_2))
              {
                n_30 = ATgetArgument(t, 0);
                u_30 = ATgetArgument(t, 1);
                t = not_null(n_30);
                if(match_cons(t, sym_TypeName_2))
                  {
                    o_30 = ATgetArgument(t, 0);
                    t_30 = ATgetArgument(t, 1);
                    t = not_null(o_30);
                    if(match_cons(t, sym_TypeSpec_3))
                      {
                        p_30 = ATgetArgument(t, 0);
                        q_30 = ATgetArgument(t, 1);
                        s_30 = ATgetArgument(t, 2);
                        t = not_null(p_30);
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = not_null(q_30);
                            if(match_cons(t, sym_TypeId_1))
                              {
                                r_30 = ATgetArgument(t, 0);
                                t = not_null(r_30);
                                if(match_string(t, "ATerm"))
                                  {
                                    t = not_null(s_30);
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = not_null(t_30);
                                        if(match_cons(t, sym_None_0))
                                          {
                                            t = b_31(t);
                                          }
                                        else
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
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, not_null(k_30)));
          }
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = c_31(t);
      }
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_30)), not_null(l_30))));
    }
    return(t);
  }
  ATerm a_31 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = not_null(g_30);
  if(match_cons(t, sym_Op_2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      t = not_null(h_30);
      if(match_string(t, "Cons"))
        {
          t = not_null(i_30);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_30 = ATgetFirst((ATermList) t);
              d_30 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(d_30);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_30 = ATgetFirst((ATermList) t);
                  f_30 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(f_30);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_30(t);
                    }
                  else
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
              t = not_null(i_30);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = a_31(t);
                }
              else
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
ATerm bottomup_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = bottomup_1_0(f_108, t);
    return(t);
  }
  t = SRTS_all(z_1, t);
  t = f_108(t);
  return(t);
}
ATerm construct_term_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0_0(t);
          ;
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
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
ATerm topdown_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  t = e_108(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1_0(e_108, t);
      return(t);
    }
    t = SRTS_all(c_2, t);
  }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  ATerm r_55 (ATerm t)
  {
    ATerm q_37 = NULL,r_37 = NULL;
    t = not_null(p_37);
    if(((q_37 != NULL) && (q_37 != t)))
      _fail(t);
    else
      q_37 = t;
    t = not_null(m_37);
    if(((r_37 != NULL) && (r_37 != t)))
      _fail(t);
    else
      r_37 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(q_37), (ATerm) ATinsert(ATempty, not_null(r_37)));
    return(t);
  }
  ATerm s_55 (ATerm t)
  {
    ATerm s_37 = NULL,t_37 = NULL;
    t = not_null(p_37);
    if(((s_37 != NULL) && (s_37 != t)))
      _fail(t);
    else
      s_37 = t;
    t = not_null(o_37);
    {
      ATerm u_37 = NULL;
      ATerm k_57 (ATerm t)
      {
        t = not_null(u_37);
        if(((t_37 != NULL) && (t_37 != t)))
          _fail(t);
        else
          t_37 = t;
        t = not_null(u_37);
        return(t);
      }
      t = new_0_0(t);
      if(((u_37 != NULL) && (u_37 != t)))
        _fail(t);
      else
        u_37 = t;
      t = k_57(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_37)), term_a_10))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_37))))), not_null(s_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_37)), term_q_9, term_e_24))));
    }
    return(t);
  }
  ATerm t_55 (ATerm t)
  {
    ATerm v_37 = NULL;
    t = not_null(p_37);
    if(((v_37 != NULL) && (v_37 != t)))
      _fail(t);
    else
      v_37 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(v_37));
    return(t);
  }
  ATerm u_55 (ATerm t)
  {
    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
    t = not_null(n_37);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = not_null(m_37);
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    t = not_null(j_37);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = not_null(o_37);
    {
      ATerm i_38 = NULL;
      ATerm m_57 (ATerm t)
      {
        ATerm j_38 = NULL;
        ATerm n_57 (ATerm t)
        {
          ATerm k_38 = NULL;
          ATerm o_57 (ATerm t)
          {
            t = not_null(k_38);
            if(((b_38 != NULL) && (b_38 != t)))
              _fail(t);
            else
              b_38 = t;
            t = not_null(k_38);
            return(t);
          }
          t = not_null(j_38);
          if(((a_38 != NULL) && (a_38 != t)))
            _fail(t);
          else
            a_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_24)), not_null(a_38)), not_null(z_37));
          t = concat_0_0(t);
          if(((k_38 != NULL) && (k_38 != t)))
            _fail(t);
          else
            k_38 = t;
          t = o_57(t);
          return(t);
        }
        t = not_null(i_38);
        if(((z_37 != NULL) && (z_37 != t)))
          _fail(t);
        else
          z_37 = t;
        t = not_null(y_37);
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
          if(((j_38 != NULL) && (j_38 != t)))
            _fail(t);
          else
            j_38 = t;
          t = n_57(t);
        }
        return(t);
      }
      t = not_null(x_37);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
          ATerm l_57 (ATerm t)
          {
            ATerm h_38 = NULL;
            t = not_null(e_38);
            if(((h_38 != NULL) && (h_38 != t)))
              _fail(t);
            else
              h_38 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(h_38));
            return(t);
          }
          if(((c_38 != NULL) && (c_38 != t)))
            _fail(t);
          else
            c_38 = t;
          t = not_null(c_38);
          if(match_cons(t, sym_CallT_3))
            {
              d_38 = ATgetArgument(t, 0);
              f_38 = ATgetArgument(t, 1);
              g_38 = ATgetArgument(t, 2);
              t = not_null(d_38);
              if(match_cons(t, sym_SVar_1))
                {
                  e_38 = ATgetArgument(t, 0);
                  t = not_null(f_38);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(g_38);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = l_57(t);
                        }
                      else
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
        if(((i_38 != NULL) && (i_38 != t)))
          _fail(t);
        else
          i_38 = t;
        t = m_57(t);
      }
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_37)), not_null(b_38))));
    }
    return(t);
  }
  ATerm v_55 (ATerm t)
  {
    ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
    t = not_null(p_37);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = not_null(m_37);
    if(((m_38 != NULL) && (m_38 != t)))
      _fail(t);
    else
      m_38 = t;
    t = not_null(j_37);
    if(((n_38 != NULL) && (n_38 != t)))
      _fail(t);
    else
      n_38 = t;
    t = not_null(o_37);
    {
      ATerm m_39 = NULL;
      ATerm q_57 (ATerm t)
      {
        ATerm n_39 = NULL;
        ATerm r_57 (ATerm t)
        {
          ATerm p_43 = NULL;
          ATerm s_57 (ATerm t)
          {
            t = not_null(p_43);
            if(((q_38 != NULL) && (q_38 != t)))
              _fail(t);
            else
              q_38 = t;
            t = not_null(p_43);
            return(t);
          }
          t = not_null(n_39);
          if(((p_38 != NULL) && (p_38 != t)))
            _fail(t);
          else
            p_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(p_38));
          t = conc_0_0(t);
          if(((p_43 != NULL) && (p_43 != t)))
            _fail(t);
          else
            p_43 = t;
          t = s_57(t);
          return(t);
        }
        t = not_null(m_39);
        if(((o_38 != NULL) && (o_38 != t)))
          _fail(t);
        else
          o_38 = t;
        t = not_null(n_38);
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
          if(((n_39 != NULL) && (n_39 != t)))
            _fail(t);
          else
            n_39 = t;
          t = r_57(t);
        }
        return(t);
      }
      t = not_null(m_38);
      {
        ATerm i_2 (ATerm t)
        {
          ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
          ATerm p_57 (ATerm t)
          {
            ATerm l_39 = NULL;
            t = not_null(t_38);
            if(((l_39 != NULL) && (l_39 != t)))
              _fail(t);
            else
              l_39 = t;
            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(l_39));
            return(t);
          }
          if(((r_38 != NULL) && (r_38 != t)))
            _fail(t);
          else
            r_38 = t;
          t = not_null(r_38);
          if(match_cons(t, sym_CallT_3))
            {
              s_38 = ATgetArgument(t, 0);
              u_38 = ATgetArgument(t, 1);
              v_38 = ATgetArgument(t, 2);
              t = not_null(s_38);
              if(match_cons(t, sym_SVar_1))
                {
                  t_38 = ATgetArgument(t, 0);
                  t = not_null(u_38);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(v_38);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = p_57(t);
                        }
                      else
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
        if(((m_39 != NULL) && (m_39 != t)))
          _fail(t);
        else
          m_39 = t;
        t = q_57(t);
      }
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_38)), not_null(q_38))));
    }
    return(t);
  }
  ATerm w_55 (ATerm t)
  {
    ATerm q_43 = NULL,r_48 = NULL;
    t = not_null(p_37);
    if(((q_43 != NULL) && (q_43 != t)))
      _fail(t);
    else
      q_43 = t;
    t = not_null(o_37);
    {
      ATerm s_48 = NULL;
      ATerm t_57 (ATerm t)
      {
        t = not_null(s_48);
        if(((r_48 != NULL) && (r_48 != t)))
          _fail(t);
        else
          r_48 = t;
        t = not_null(s_48);
        return(t);
      }
      t = new_0_0(t);
      if(((s_48 != NULL) && (s_48 != t)))
        _fail(t);
      else
        s_48 = t;
      t = t_57(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_48)), term_a_10), term_f_24)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_25), term_b_25), not_null(q_43))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_48)))))))));
    }
    return(t);
  }
  ATerm x_55 (ATerm t)
  {
    ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
    t = not_null(p_37);
    if(((t_48 != NULL) && (t_48 != t)))
      _fail(t);
    else
      t_48 = t;
    t = not_null(m_37);
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = not_null(o_37);
    {
      ATerm w_48 = NULL;
      ATerm u_57 (ATerm t)
      {
        t = not_null(w_48);
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        t = not_null(w_48);
        return(t);
      }
      t = new_0_0(t);
      if(((w_48 != NULL) && (w_48 != t)))
        _fail(t);
      else
        w_48 = t;
      t = u_57(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_48)), term_a_10), term_f_24)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(t_48))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_48)))))))));
    }
    return(t);
  }
  ATerm y_55 (ATerm t)
  {
    ATerm x_48 = NULL,y_48 = NULL;
    t = not_null(p_37);
    if(((x_48 != NULL) && (x_48 != t)))
      _fail(t);
    else
      x_48 = t;
    t = not_null(m_37);
    if(((y_48 != NULL) && (y_48 != t)))
      _fail(t);
    else
      y_48 = t;
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(x_48), not_null(y_48));
    return(t);
  }
  ATerm z_55 (ATerm t)
  {
    ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
    t = not_null(p_37);
    if(((z_48 != NULL) && (z_48 != t)))
      _fail(t);
    else
      z_48 = t;
    t = not_null(m_37);
    if(((a_49 != NULL) && (a_49 != t)))
      _fail(t);
    else
      a_49 = t;
    t = not_null(j_37);
    if(((b_49 != NULL) && (b_49 != t)))
      _fail(t);
    else
      b_49 = t;
    t = not_null(o_37);
    {
      ATerm e_49 = NULL;
      ATerm v_57 (ATerm t)
      {
        ATerm f_49 = NULL;
        ATerm w_57 (ATerm t)
        {
          t = not_null(f_49);
          if(((d_49 != NULL) && (d_49 != t)))
            _fail(t);
          else
            d_49 = t;
          t = not_null(f_49);
          return(t);
        }
        t = not_null(e_49);
        if(((c_49 != NULL) && (c_49 != t)))
          _fail(t);
        else
          c_49 = t;
        t = not_null(e_49);
        t = new_0_0(t);
        if(((f_49 != NULL) && (f_49 != t)))
          _fail(t);
        else
          f_49 = t;
        t = w_57(t);
        return(t);
      }
      t = new_0_0(t);
      if(((e_49 != NULL) && (e_49 != t)))
        _fail(t);
      else
        e_49 = t;
      t = v_57(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_49)), term_a_10), term_p_25)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_49)), term_a_10), term_f_24)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_49)))))), not_null(z_48))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_49)))))))));
    }
    return(t);
  }
  ATerm a_56 (ATerm t)
  {
    ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
    t = not_null(p_37);
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(m_37);
    if(((h_49 != NULL) && (h_49 != t)))
      _fail(t);
    else
      h_49 = t;
    t = not_null(o_37);
    {
      ATerm k_49 = NULL;
      ATerm x_57 (ATerm t)
      {
        ATerm l_49 = NULL;
        ATerm d_58 (ATerm t)
        {
          t = not_null(l_49);
          if(((j_49 != NULL) && (j_49 != t)))
            _fail(t);
          else
            j_49 = t;
          t = not_null(l_49);
          return(t);
        }
        t = not_null(k_49);
        if(((i_49 != NULL) && (i_49 != t)))
          _fail(t);
        else
          i_49 = t;
        t = not_null(k_49);
        t = new_0_0(t);
        if(((l_49 != NULL) && (l_49 != t)))
          _fail(t);
        else
          l_49 = t;
        t = d_58(t);
        return(t);
      }
      t = new_0_0(t);
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = x_57(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_49)), term_a_10), term_p_25)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_49)), term_a_10), term_f_24)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_24, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_49)))))), term_r_27), not_null(g_49))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_49)))))))));
    }
    return(t);
  }
  ATerm b_56 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL;
    t = not_null(p_37);
    if(((m_49 != NULL) && (m_49 != t)))
      _fail(t);
    else
      m_49 = t;
    t = not_null(m_37);
    if(((n_49 != NULL) && (n_49 != t)))
      _fail(t);
    else
      n_49 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_49), not_null(n_49));
    return(t);
  }
  ATerm c_56 (ATerm t)
  {
    ATerm o_49 = NULL,p_49 = NULL;
    t = not_null(p_37);
    if(((o_49 != NULL) && (o_49 != t)))
      _fail(t);
    else
      o_49 = t;
    t = not_null(m_37);
    if(((p_49 != NULL) && (p_49 != t)))
      _fail(t);
    else
      p_49 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_49)), not_null(o_49)));
    return(t);
  }
  ATerm d_56 (ATerm t)
  {
    ATerm q_49 = NULL,r_49 = NULL,u_49 = NULL;
    t = not_null(p_37);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = not_null(m_37);
    if(((r_49 != NULL) && (r_49 != t)))
      _fail(t);
    else
      r_49 = t;
    t = not_null(o_37);
    {
      ATerm s_27;
      s_27 = t;
      t = not_null(q_49);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm s_49 = NULL;
          ATerm e_58 (ATerm t)
          {
            ATerm t_49 = NULL;
            t = not_null(s_49);
            if(((t_49 != NULL) && (t_49 != t)))
              _fail(t);
            else
              t_49 = t;
            t = not_null(s_49);
            {
              ATerm t_27;
              t_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), term_j_28);
              {
                ATerm k_2 (ATerm t)
                {
                  t = term_n_18;
                  return(t);
                }
                t = assert_1_0(k_2, t);
              }
              t = t_27;
            }
            return(t);
          }
          if(((s_49 != NULL) && (s_49 != t)))
            _fail(t);
          else
            s_49 = t;
          t = e_58(t);
          return(t);
        }
        t = map_1_0(j_2, t);
      }
      t = s_27;
      {
        ATerm x_49 = NULL;
        ATerm g_58 (ATerm t)
        {
          t = not_null(x_49);
          if(((u_49 != NULL) && (u_49 != t)))
            _fail(t);
          else
            u_49 = t;
          t = not_null(x_49);
          return(t);
        }
        t = not_null(q_49);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm v_49 = NULL;
            ATerm f_58 (ATerm t)
            {
              ATerm w_49 = NULL;
              t = not_null(v_49);
              if(((w_49 != NULL) && (w_49 != t)))
                _fail(t);
              else
                w_49 = t;
              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_49)), term_a_10), term_l_28);
              return(t);
            }
            if(((v_49 != NULL) && (v_49 != t)))
              _fail(t);
            else
              v_49 = t;
            t = f_58(t);
            return(t);
          }
          t = map_1_0(l_2, t);
          if(((x_49 != NULL) && (x_49 != t)))
            _fail(t);
          else
            x_49 = t;
          t = g_58(t);
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, not_null(u_49))), (ATerm) ATinsert(ATempty, not_null(r_49)));
      }
    }
    return(t);
  }
  ATerm e_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24)));
    return(t);
  }
  ATerm f_56 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  ATerm g_56 (ATerm t)
  {
    ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
    t = not_null(s_36);
    if(((y_49 != NULL) && (y_49 != t)))
      _fail(t);
    else
      y_49 = t;
    t = not_null(u_36);
    if(((z_49 != NULL) && (z_49 != t)))
      _fail(t);
    else
      z_49 = t;
    t = not_null(m_37);
    if(((a_50 != NULL) && (a_50 != t)))
      _fail(t);
    else
      a_50 = t;
    t = not_null(o_37);
    {
      ATerm h_50 = NULL;
      ATerm h_58 (ATerm t)
      {
        t = not_null(h_50);
        if(((b_50 != NULL) && (b_50 != t)))
          _fail(t);
        else
          b_50 = t;
        t = not_null(h_50);
        return(t);
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(z_49), (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_29, not_null(a_50))))))), (ATerm) ATmakeAppl(sym__2, not_null(y_49), (ATerm) ATmakeAppl(sym_FunCall_2, term_o_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_29, not_null(a_50))))));
      {
        ATerm m_2 (ATerm t)
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchArg1_0_0(t);
              ;
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              t = MatchArg2_0_0(t);
            }
          return(t);
        }
        t = map_1_0(m_2, t);
        if(((h_50 != NULL) && (h_50 != t)))
          _fail(t);
        else
          h_50 = t;
        t = h_58(t);
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, not_null(a_50))), term_t_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, not_null(a_50))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(b_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
    }
    return(t);
  }
  ATerm h_56 (ATerm t)
  {
    ATerm i_50 = NULL;
    t = not_null(m_37);
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, not_null(i_50))), term_t_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, not_null(i_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
    return(t);
  }
  ATerm i_56 (ATerm t)
  {
    ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,h_51 = NULL;
    t = not_null(n_37);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = not_null(w_36);
    if(((k_50 != NULL) && (k_50 != t)))
      _fail(t);
    else
      k_50 = t;
    t = not_null(m_37);
    if(((l_50 != NULL) && (l_50 != t)))
      _fail(t);
    else
      l_50 = t;
    t = not_null(o_37);
    {
      ATerm w_29;
      w_29 = t;
      {
        ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
        ATerm m_58 (ATerm t)
        {
          t = not_null(f_51);
          if(((m_50 != NULL) && (m_50 != t)))
            _fail(t);
          else
            m_50 = t;
          t = not_null(e_51);
          return(t);
        }
        t = not_null(j_50);
        {
          ATerm x_29 = t;
          if((PushChoice() == 0))
            {
              ATerm n_50 = NULL;
              if(((n_50 != NULL) && (n_50 != t)))
                _fail(t);
              else
                n_50 = t;
              t = not_null(n_50);
              if(match_string(t, "Nil"))
                {
                  t = not_null(n_50);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(n_50);
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
              t = x_29;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), term_y_29);
          {
            ATerm n_2 (ATerm t)
            {
              ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
              ATerm i_58 (ATerm t)
              {
                ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,c_51 = NULL;
                t = not_null(p_50);
                if(((r_50 != NULL) && (r_50 != t)))
                  _fail(t);
                else
                  r_50 = t;
                t = not_null(q_50);
                if(((s_50 != NULL) && (s_50 != t)))
                  _fail(t);
                else
                  s_50 = t;
                t = not_null(o_50);
                {
                  ATerm z_29;
                  z_29 = t;
                  {
                    ATerm u_50 = NULL,b_51 = NULL;
                    ATerm k_58 (ATerm t)
                    {
                      t = not_null(b_51);
                      if(((t_50 != NULL) && (t_50 != t)))
                        _fail(t);
                      else
                        t_50 = t;
                      t = not_null(b_51);
                      return(t);
                    }
                    ATerm a_51 = NULL;
                    ATerm j_58 (ATerm t)
                    {
                      t = not_null(a_51);
                      if(((u_50 != NULL) && (u_50 != t)))
                        _fail(t);
                      else
                        u_50 = t;
                      t = not_null(a_51);
                      return(t);
                    }
                    t = not_null(s_50);
                    t = int_to_string_0_0(t);
                    if(((a_51 != NULL) && (a_51 != t)))
                      _fail(t);
                    else
                      a_51 = t;
                    t = j_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_50))), not_null(l_50))));
                    {
                      ATerm d_31 = t;
                      int e_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = MatchArg1_0_0(t);
                          ;
                          LocalPopChoice(e_31);
                        }
                      else
                        {
                          t = d_31;
                          t = MatchArg2_0_0(t);
                        }
                      if(((b_51 != NULL) && (b_51 != t)))
                        _fail(t);
                      else
                        b_51 = t;
                      t = k_58(t);
                    }
                  }
                  t = z_29;
                  {
                    ATerm d_51 = NULL;
                    ATerm l_58 (ATerm t)
                    {
                      t = not_null(d_51);
                      if(((c_51 != NULL) && (c_51 != t)))
                        _fail(t);
                      else
                        c_51 = t;
                      t = not_null(d_51);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_50), term_f_31);
                    t = add_0_0(t);
                    if(((d_51 != NULL) && (d_51 != t)))
                      _fail(t);
                    else
                      d_51 = t;
                    t = l_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_50), not_null(c_51));
                  }
                }
                return(t);
              }
              if(((o_50 != NULL) && (o_50 != t)))
                _fail(t);
              else
                o_50 = t;
              t = not_null(o_50);
              if(match_cons(t, sym__2))
                {
                  p_50 = ATgetArgument(t, 0);
                  q_50 = ATgetArgument(t, 1);
                  t = i_58(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1_0(n_2, t);
            if(((e_51 != NULL) && (e_51 != t)))
              _fail(t);
            else
              e_51 = t;
            t = not_null(e_51);
            if(match_cons(t, sym__2))
              {
                f_51 = ATgetArgument(t, 0);
                g_51 = ATgetArgument(t, 1);
                t = m_58(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = w_29;
      {
        ATerm i_51 = NULL,k_51 = NULL;
        ATerm o_58 (ATerm t)
        {
          t = not_null(k_51);
          if(((h_51 != NULL) && (h_51 != t)))
            _fail(t);
          else
            h_51 = t;
          t = not_null(k_51);
          return(t);
        }
        ATerm j_51 = NULL;
        ATerm n_58 (ATerm t)
        {
          t = not_null(j_51);
          if(((i_51 != NULL) && (i_51 != t)))
            _fail(t);
          else
            i_51 = t;
          t = not_null(j_51);
          return(t);
        }
        t = not_null(k_50);
        t = length_0_0(t);
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
        t = n_58(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_50), not_null(i_51));
        t = ConstructorName_0_0(t);
        if(((k_51 != NULL) && (k_51 != t)))
          _fail(t);
        else
          k_51 = t;
        t = o_58(t);
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_51))), not_null(l_50))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
      }
    }
    return(t);
  }
  ATerm n_56 (ATerm t)
  {
    ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
    t = not_null(n_37);
    if(((l_51 != NULL) && (l_51 != t)))
      _fail(t);
    else
      l_51 = t;
    t = not_null(m_37);
    if(((m_51 != NULL) && (m_51 != t)))
      _fail(t);
    else
      m_51 = t;
    t = not_null(o_37);
    {
      ATerm o_51 = NULL;
      ATerm p_58 (ATerm t)
      {
        t = not_null(o_51);
        if(((n_51 != NULL) && (n_51 != t)))
          _fail(t);
        else
          n_51 = t;
        t = not_null(o_51);
        return(t);
      }
      t = not_null(l_51);
      t = real_to_string_0_0(t);
      if(((o_51 != NULL) && (o_51 != t)))
        _fail(t);
      else
        o_51 = t;
      t = p_58(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, not_null(m_51))), term_j_31), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_31, not_null(m_51)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(n_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
    }
    return(t);
  }
  ATerm o_56 (ATerm t)
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
    t = not_null(n_37);
    if(((p_51 != NULL) && (p_51 != t)))
      _fail(t);
    else
      p_51 = t;
    t = not_null(m_37);
    if(((q_51 != NULL) && (q_51 != t)))
      _fail(t);
    else
      q_51 = t;
    t = not_null(o_37);
    {
      ATerm s_51 = NULL;
      ATerm q_58 (ATerm t)
      {
        t = not_null(s_51);
        if(((r_51 != NULL) && (r_51 != t)))
          _fail(t);
        else
          r_51 = t;
        t = not_null(s_51);
        return(t);
      }
      t = not_null(p_51);
      t = int_to_string_0_0(t);
      if(((s_51 != NULL) && (s_51 != t)))
        _fail(t);
      else
        s_51 = t;
      t = q_58(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, not_null(q_51))), term_r_31), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_31, not_null(q_51)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
    }
    return(t);
  }
  ATerm p_56 (ATerm t)
  {
    ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
    t = not_null(n_37);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(m_37);
    if(((u_51 != NULL) && (u_51 != t)))
      _fail(t);
    else
      u_51 = t;
    t = not_null(o_37);
    {
      ATerm w_51 = NULL;
      ATerm r_58 (ATerm t)
      {
        t = not_null(w_51);
        if(((v_51 != NULL) && (v_51 != t)))
          _fail(t);
        else
          v_51 = t;
        t = not_null(w_51);
        return(t);
      }
      t = not_null(t_51);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((w_51 != NULL) && (w_51 != t)))
        _fail(t);
      else
        w_51 = t;
      t = r_58(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, not_null(u_51)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), term_l_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_51)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, term_e_24))));
    }
    return(t);
  }
  ATerm q_56 (ATerm t)
  {
    ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
    t = not_null(p_37);
    if(((z_51 != NULL) && (z_51 != t)))
      _fail(t);
    else
      z_51 = t;
    t = not_null(n_37);
    if(((x_51 != NULL) && (x_51 != t)))
      _fail(t);
    else
      x_51 = t;
    t = not_null(m_37);
    if(((y_51 != NULL) && (y_51 != t)))
      _fail(t);
    else
      y_51 = t;
    t = not_null(o_37);
    {
      ATerm a_52 = NULL;
      t = SSLgetAnnotations(not_null(z_51));
      if(((a_52 != NULL) && (a_52 != t)))
        _fail(t);
      else
        a_52 = t;
      t = not_null(a_52);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(a_52);
        }
      else
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_51)), term_k_28), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_51)), not_null(y_51))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, not_null(y_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_51)), term_q_9, not_null(y_51))));
    }
    return(t);
  }
  ATerm r_56 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
    t = not_null(p_37);
    if(((d_52 != NULL) && (d_52 != t)))
      _fail(t);
    else
      d_52 = t;
    t = not_null(n_37);
    if(((b_52 != NULL) && (b_52 != t)))
      _fail(t);
    else
      b_52 = t;
    t = not_null(m_37);
    if(((c_52 != NULL) && (c_52 != t)))
      _fail(t);
    else
      c_52 = t;
    t = not_null(o_37);
    {
      ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
      t = SSLgetAnnotations(not_null(d_52));
      if(((e_52 != NULL) && (e_52 != t)))
        _fail(t);
      else
        e_52 = t;
      t = not_null(e_52);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_52 = ATgetFirst((ATermList) t);
          g_52 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(f_52);
          if(match_string(t, "bound"))
            {
              t = not_null(g_52);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(e_52);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_52)), not_null(c_52)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, not_null(c_52)))))));
    }
    return(t);
  }
  ATerm s_56 (ATerm t)
  {
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
    t = not_null(p_37);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(n_37);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(m_37);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(o_37);
    {
      ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
      t = SSLgetAnnotations(not_null(j_52));
      if(((k_52 != NULL) && (k_52 != t)))
        _fail(t);
      else
        k_52 = t;
      t = not_null(k_52);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(l_52);
          if(match_string(t, "unbound"))
            {
              t = not_null(m_52);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(k_52);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_52)), term_q_9, not_null(i_52)));
    }
    return(t);
  }
  ATerm t_56 (ATerm t)
  {
    ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
    t = not_null(n_37);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    t = not_null(w_36);
    if(((o_52 != NULL) && (o_52 != t)))
      _fail(t);
    else
      o_52 = t;
    t = not_null(m_37);
    if(((p_52 != NULL) && (p_52 != t)))
      _fail(t);
    else
      p_52 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(o_52), not_null(p_52))), (ATerm) ATmakeAppl(sym_Match_2, not_null(n_52), not_null(p_52))));
    return(t);
  }
  ATerm u_56 (ATerm t)
  {
    ATerm q_52 = NULL,r_52 = NULL;
    t = not_null(n_37);
    if(((q_52 != NULL) && (q_52 != t)))
      _fail(t);
    else
      q_52 = t;
    t = not_null(m_37);
    if(((r_52 != NULL) && (r_52 != t)))
      _fail(t);
    else
      r_52 = t;
    t = term_m_28;
    return(t);
  }
  ATerm v_56 (ATerm t)
  {
    ATerm s_52 = NULL;
    t = not_null(m_37);
    if(((s_52 != NULL) && (s_52 != t)))
      _fail(t);
    else
      s_52 = t;
    t = term_m_28;
    return(t);
  }
  ATerm w_56 (ATerm t)
  {
    ATerm t_52 = NULL;
    t = not_null(p_37);
    if(((t_52 != NULL) && (t_52 != t)))
      _fail(t);
    else
      t_52 = t;
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(t_52), term_e_24);
    return(t);
  }
  ATerm x_56 (ATerm t)
  {
    ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
    t = not_null(n_37);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(y_36);
    if(((u_52 != NULL) && (u_52 != t)))
      _fail(t);
    else
      u_52 = t;
    t = not_null(b_37);
    if(((v_52 != NULL) && (v_52 != t)))
      _fail(t);
    else
      v_52 = t;
    t = not_null(h_37);
    if(((w_52 != NULL) && (w_52 != t)))
      _fail(t);
    else
      w_52 = t;
    t = not_null(i_37);
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    t = not_null(j_37);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_52)))), term_t_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_52)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_52)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_52)), term_q_9, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_29, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_52))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_52)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_29, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_52))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_52)), not_null(y_52), not_null(z_52)))));
    return(t);
  }
  ATerm y_56 (ATerm t)
  {
    ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
    t = not_null(n_37);
    if(((b_53 != NULL) && (b_53 != t)))
      _fail(t);
    else
      b_53 = t;
    t = not_null(h_37);
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    t = not_null(i_37);
    if(((c_53 != NULL) && (c_53 != t)))
      _fail(t);
    else
      c_53 = t;
    t = not_null(j_37);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_53)))), term_t_29), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_53))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(a_53)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_53)), not_null(c_53), not_null(d_53)))));
    return(t);
  }
  ATerm z_56 (ATerm t)
  {
    ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,a_54 = NULL,c_54 = NULL;
    t = not_null(n_37);
    if(((e_53 != NULL) && (e_53 != t)))
      _fail(t);
    else
      e_53 = t;
    t = not_null(f_37);
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    t = not_null(d_37);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(g_37);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = not_null(h_37);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = not_null(i_37);
    if(((j_53 != NULL) && (j_53 != t)))
      _fail(t);
    else
      j_53 = t;
    t = not_null(j_37);
    if(((k_53 != NULL) && (k_53 != t)))
      _fail(t);
    else
      k_53 = t;
    t = not_null(o_37);
    {
      ATerm e_32;
      e_32 = t;
      {
        ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
        ATerm v_58 (ATerm t)
        {
          t = not_null(y_53);
          if(((l_53 != NULL) && (l_53 != t)))
            _fail(t);
          else
            l_53 = t;
          t = not_null(x_53);
          return(t);
        }
        t = not_null(f_53);
        {
          ATerm f_32 = t;
          if((PushChoice() == 0))
            {
              ATerm m_53 = NULL;
              if(((m_53 != NULL) && (m_53 != t)))
                _fail(t);
              else
                m_53 = t;
              t = not_null(m_53);
              if(match_string(t, "Nil"))
                {
                  t = not_null(m_53);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(m_53);
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
              t = f_32;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_53), term_y_29);
          {
            ATerm o_2 (ATerm t)
            {
              ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
              ATerm s_58 (ATerm t)
              {
                ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,v_53 = NULL;
                t = not_null(p_53);
                if(((r_53 != NULL) && (r_53 != t)))
                  _fail(t);
                else
                  r_53 = t;
                t = not_null(q_53);
                if(((s_53 != NULL) && (s_53 != t)))
                  _fail(t);
                else
                  s_53 = t;
                t = not_null(n_53);
                {
                  ATerm g_32;
                  g_32 = t;
                  {
                    ATerm u_53 = NULL;
                    ATerm t_58 (ATerm t)
                    {
                      t = not_null(u_53);
                      if(((t_53 != NULL) && (t_53 != t)))
                        _fail(t);
                      else
                        t_53 = t;
                      t = not_null(u_53);
                      return(t);
                    }
                    t = not_null(s_53);
                    t = int_to_string_0_0(t);
                    if(((u_53 != NULL) && (u_53 != t)))
                      _fail(t);
                    else
                      u_53 = t;
                    t = t_58(t);
                  }
                  t = g_32;
                  {
                    ATerm w_53 = NULL;
                    ATerm u_58 (ATerm t)
                    {
                      t = not_null(w_53);
                      if(((v_53 != NULL) && (v_53 != t)))
                        _fail(t);
                      else
                        v_53 = t;
                      t = not_null(w_53);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_53), term_f_31);
                    t = add_0_0(t);
                    if(((w_53 != NULL) && (w_53 != t)))
                      _fail(t);
                    else
                      w_53 = t;
                    t = u_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_53)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_53))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_53)))))), not_null(v_53));
                  }
                }
                return(t);
              }
              if(((n_53 != NULL) && (n_53 != t)))
                _fail(t);
              else
                n_53 = t;
              t = not_null(n_53);
              if(match_cons(t, sym__2))
                {
                  o_53 = ATgetArgument(t, 0);
                  q_53 = ATgetArgument(t, 1);
                  t = not_null(o_53);
                  if(match_cons(t, sym_Var_1))
                    {
                      p_53 = ATgetArgument(t, 0);
                      t = s_58(t);
                    }
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
            if(((x_53 != NULL) && (x_53 != t)))
              _fail(t);
            else
              x_53 = t;
            t = not_null(x_53);
            if(match_cons(t, sym__2))
              {
                y_53 = ATgetArgument(t, 0);
                z_53 = ATgetArgument(t, 1);
                t = v_58(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = e_32;
      {
        ATerm h_32;
        h_32 = t;
        {
          ATerm b_54 = NULL;
          ATerm w_58 (ATerm t)
          {
            t = not_null(b_54);
            if(((a_54 != NULL) && (a_54 != t)))
              _fail(t);
            else
              a_54 = t;
            t = not_null(b_54);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_53), not_null(g_53));
          t = ConstructorName_0_0(t);
          if(((b_54 != NULL) && (b_54 != t)))
            _fail(t);
          else
            b_54 = t;
          t = w_58(t);
        }
        t = h_32;
        {
          ATerm d_54 = NULL;
          ATerm x_58 (ATerm t)
          {
            t = not_null(d_54);
            if(((c_54 != NULL) && (c_54 != t)))
              _fail(t);
            else
              c_54 = t;
            t = not_null(d_54);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), (ATerm) ATinsert(ATempty, not_null(i_53)));
          t = conc_0_0(t);
          if(((d_54 != NULL) && (d_54 != t)))
            _fail(t);
          else
            d_54 = t;
          t = x_58(t);
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_53)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_53)), not_null(j_53), not_null(k_53)))));
        }
      }
    }
    return(t);
  }
  ATerm a_57 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
    t = not_null(n_37);
    if(((e_54 != NULL) && (e_54 != t)))
      _fail(t);
    else
      e_54 = t;
    t = not_null(f_37);
    if(((f_54 != NULL) && (f_54 != t)))
      _fail(t);
    else
      f_54 = t;
    t = not_null(g_37);
    if(((g_54 != NULL) && (g_54 != t)))
      _fail(t);
    else
      g_54 = t;
    t = not_null(h_37);
    if(((h_54 != NULL) && (h_54 != t)))
      _fail(t);
    else
      h_54 = t;
    t = not_null(i_37);
    if(((i_54 != NULL) && (i_54 != t)))
      _fail(t);
    else
      i_54 = t;
    t = not_null(j_37);
    if(((j_54 != NULL) && (j_54 != t)))
      _fail(t);
    else
      j_54 = t;
    t = not_null(o_37);
    {
      ATerm l_54 = NULL;
      ATerm y_58 (ATerm t)
      {
        t = not_null(l_54);
        if(((k_54 != NULL) && (k_54 != t)))
          _fail(t);
        else
          k_54 = t;
        t = not_null(l_54);
        return(t);
      }
      t = not_null(f_54);
      t = real_to_string_0_0(t);
      if(((l_54 != NULL) && (l_54 != t)))
        _fail(t);
      else
        l_54 = t;
      t = y_58(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(e_54)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_54))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_54)), not_null(i_54), not_null(j_54)))));
    }
    return(t);
  }
  ATerm b_57 (ATerm t)
  {
    ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
    t = not_null(n_37);
    if(((m_54 != NULL) && (m_54 != t)))
      _fail(t);
    else
      m_54 = t;
    t = not_null(f_37);
    if(((n_54 != NULL) && (n_54 != t)))
      _fail(t);
    else
      n_54 = t;
    t = not_null(g_37);
    if(((o_54 != NULL) && (o_54 != t)))
      _fail(t);
    else
      o_54 = t;
    t = not_null(h_37);
    if(((p_54 != NULL) && (p_54 != t)))
      _fail(t);
    else
      p_54 = t;
    t = not_null(i_37);
    if(((q_54 != NULL) && (q_54 != t)))
      _fail(t);
    else
      q_54 = t;
    t = not_null(j_37);
    if(((r_54 != NULL) && (r_54 != t)))
      _fail(t);
    else
      r_54 = t;
    t = not_null(o_37);
    {
      ATerm t_54 = NULL;
      ATerm z_58 (ATerm t)
      {
        t = not_null(t_54);
        if(((s_54 != NULL) && (s_54 != t)))
          _fail(t);
        else
          s_54 = t;
        t = not_null(t_54);
        return(t);
      }
      t = not_null(n_54);
      t = int_to_string_0_0(t);
      if(((t_54 != NULL) && (t_54 != t)))
        _fail(t);
      else
        t_54 = t;
      t = z_58(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(m_54)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_54))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_54)), not_null(q_54), not_null(r_54)))));
    }
    return(t);
  }
  ATerm c_57 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
    t = not_null(n_37);
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = not_null(f_37);
    if(((v_54 != NULL) && (v_54 != t)))
      _fail(t);
    else
      v_54 = t;
    t = not_null(g_37);
    if(((w_54 != NULL) && (w_54 != t)))
      _fail(t);
    else
      w_54 = t;
    t = not_null(h_37);
    if(((x_54 != NULL) && (x_54 != t)))
      _fail(t);
    else
      x_54 = t;
    t = not_null(i_37);
    if(((y_54 != NULL) && (y_54 != t)))
      _fail(t);
    else
      y_54 = t;
    t = not_null(j_37);
    if(((z_54 != NULL) && (z_54 != t)))
      _fail(t);
    else
      z_54 = t;
    t = not_null(o_37);
    {
      ATerm b_55 = NULL;
      ATerm a_59 (ATerm t)
      {
        t = not_null(b_55);
        if(((a_55 != NULL) && (a_55 != t)))
          _fail(t);
        else
          a_55 = t;
        t = not_null(b_55);
        return(t);
      }
      t = not_null(v_54);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
      t = a_59(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_55)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(u_54)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_54))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_54)), not_null(y_54), not_null(z_54)))));
    }
    return(t);
  }
  ATerm d_57 (ATerm t)
  {
    ATerm c_55 = NULL,d_55 = NULL;
    t = not_null(n_37);
    if(((c_55 != NULL) && (c_55 != t)))
      _fail(t);
    else
      c_55 = t;
    t = not_null(j_37);
    if(((d_55 != NULL) && (d_55 != t)))
      _fail(t);
    else
      d_55 = t;
    t = not_null(d_55);
    return(t);
  }
  ATerm e_57 (ATerm t)
  {
    ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
    t = not_null(p_37);
    if(((e_55 != NULL) && (e_55 != t)))
      _fail(t);
    else
      e_55 = t;
    t = not_null(m_37);
    if(((f_55 != NULL) && (f_55 != t)))
      _fail(t);
    else
      f_55 = t;
    t = not_null(j_37);
    if(((g_55 != NULL) && (g_55 != t)))
      _fail(t);
    else
      g_55 = t;
    t = not_null(k_37);
    if(((h_55 != NULL) && (h_55 != t)))
      _fail(t);
    else
      h_55 = t;
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_55)), (ATerm) ATmakeAppl(sym_Case_3, not_null(f_55), not_null(g_55), not_null(h_55)));
    return(t);
  }
  ATerm f_57 (ATerm t)
  {
    ATerm i_55 = NULL;
    t = not_null(p_37);
    if(((i_55 != NULL) && (i_55 != t)))
      _fail(t);
    else
      i_55 = t;
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_55)));
    return(t);
  }
  ATerm g_57 (ATerm t)
  {
    ATerm j_55 = NULL,k_55 = NULL;
    t = not_null(n_37);
    if(((j_55 != NULL) && (j_55 != t)))
      _fail(t);
    else
      j_55 = t;
    t = not_null(l_37);
    if(((k_55 != NULL) && (k_55 != t)))
      _fail(t);
    else
      k_55 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_55)), term_k_28), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_55)), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_55)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_55))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_55)), term_q_9, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_55)))));
    return(t);
  }
  ATerm h_57 (ATerm t)
  {
    ATerm l_55 = NULL,m_55 = NULL;
    t = not_null(n_37);
    if(((l_55 != NULL) && (l_55 != t)))
      _fail(t);
    else
      l_55 = t;
    t = not_null(m_37);
    if(((m_55 != NULL) && (m_55 != t)))
      _fail(t);
    else
      m_55 = t;
    t = not_null(o_37);
    t = not_null(m_55);
    {
      ATerm o_32 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_32;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_55)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_55))));
    return(t);
  }
  ATerm i_57 (ATerm t)
  {
    ATerm n_55 = NULL;
    t = not_null(n_37);
    if(((n_55 != NULL) && (n_55 != t)))
      _fail(t);
    else
      n_55 = t;
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_55)), term_q_9, term_e_24));
    return(t);
  }
  ATerm j_57 (ATerm t)
  {
    ATerm o_55 = NULL,p_55 = NULL;
    t = not_null(p_37);
    if(((o_55 != NULL) && (o_55 != t)))
      _fail(t);
    else
      o_55 = t;
    t = not_null(o_37);
    {
      ATerm q_55 = NULL;
      ATerm b_59 (ATerm t)
      {
        t = not_null(q_55);
        if(((p_55 != NULL) && (p_55 != t)))
          _fail(t);
        else
          p_55 = t;
        t = not_null(q_55);
        return(t);
      }
      t = not_null(o_55);
      t = construct_term_caching_0_0(t);
      if(((q_55 != NULL) && (q_55 != t)))
        _fail(t);
      else
        q_55 = t;
      t = b_59(t);
      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_24, term_q_9, not_null(p_55)));
    }
    return(t);
  }
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  t = not_null(o_37);
  if(match_cons(t, sym_Let_2))
    {
      p_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
      t = r_55(t);
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          p_37 = ATgetArgument(t, 0);
          t = s_55(t);
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              p_37 = ATgetArgument(t, 0);
              t = t_55(t);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  p_37 = ATgetArgument(t, 0);
                  m_37 = ATgetArgument(t, 1);
                  j_37 = ATgetArgument(t, 2);
                  t = not_null(p_37);
                  if(match_cons(t, sym_SVar_1))
                    {
                      n_37 = ATgetArgument(t, 0);
                      t = u_55(t);
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
                      p_37 = ATgetArgument(t, 0);
                      m_37 = ATgetArgument(t, 1);
                      j_37 = ATgetArgument(t, 2);
                      t = v_55(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          p_37 = ATgetArgument(t, 0);
                          t = w_55(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              p_37 = ATgetArgument(t, 0);
                              m_37 = ATgetArgument(t, 1);
                              t = x_55(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  p_37 = ATgetArgument(t, 0);
                                  m_37 = ATgetArgument(t, 1);
                                  t = y_55(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      p_37 = ATgetArgument(t, 0);
                                      m_37 = ATgetArgument(t, 1);
                                      j_37 = ATgetArgument(t, 2);
                                      t = z_55(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          p_37 = ATgetArgument(t, 0);
                                          m_37 = ATgetArgument(t, 1);
                                          t = a_56(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              p_37 = ATgetArgument(t, 0);
                                              m_37 = ATgetArgument(t, 1);
                                              t = b_56(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  p_37 = ATgetArgument(t, 0);
                                                  m_37 = ATgetArgument(t, 1);
                                                  t = c_56(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      p_37 = ATgetArgument(t, 0);
                                                      m_37 = ATgetArgument(t, 1);
                                                      t = d_56(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = e_56(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = f_56(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  p_37 = ATgetArgument(t, 0);
                                                                  m_37 = ATgetArgument(t, 1);
                                                                  t = not_null(p_37);
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      n_37 = ATgetArgument(t, 0);
                                                                      w_36 = ATgetArgument(t, 1);
                                                                      t = not_null(w_36);
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          s_36 = ATgetFirst((ATermList) t);
                                                                          t_36 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = not_null(t_36);
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_36 = ATgetFirst((ATermList) t);
                                                                              v_36 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = not_null(v_36);
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = not_null(n_37);
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm p_32 = t;
                                                                                      int q_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = g_56(t);
                                                                                          ;
                                                                                          LocalPopChoice(q_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_32;
                                                                                          t = i_56(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = not_null(n_37);
                                                                                  t = i_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = not_null(n_37);
                                                                              t = i_56(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = not_null(n_37);
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm r_32 = t;
                                                                                  int s_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_56(t);
                                                                                      ;
                                                                                      LocalPopChoice(s_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_32;
                                                                                      t = i_56(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = not_null(n_37);
                                                                              t = i_56(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          n_37 = ATgetArgument(t, 0);
                                                                          t = n_56(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              n_37 = ATgetArgument(t, 0);
                                                                              t = o_56(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  n_37 = ATgetArgument(t, 0);
                                                                                  t = p_56(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      n_37 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm t_32 = t;
                                                                                        int u_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_56(t);
                                                                                            ;
                                                                                            LocalPopChoice(u_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_32;
                                                                                            {
                                                                                              ATerm v_32 = t;
                                                                                              int w_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = r_56(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(w_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_32;
                                                                                                  t = s_56(t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          n_37 = ATgetArgument(t, 0);
                                                                                          w_36 = ATgetArgument(t, 1);
                                                                                          t = t_56(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_BuildDefault_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(t, 0);
                                                                                              t = u_56(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_Wld_0))
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
                                                                  if(match_cons(t, sym_Match_1))
                                                                    {
                                                                      p_37 = ATgetArgument(t, 0);
                                                                      t = w_56(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          p_37 = ATgetArgument(t, 0);
                                                                          m_37 = ATgetArgument(t, 1);
                                                                          j_37 = ATgetArgument(t, 2);
                                                                          t = not_null(p_37);
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              n_37 = ATgetArgument(t, 0);
                                                                              t = not_null(m_37);
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  l_37 = ATgetFirst((ATermList) t);
                                                                                  i_37 = (ATerm) ATgetNext((ATermList) t);
                                                                                  t = not_null(l_37);
                                                                                  if(match_cons(t, sym_Alt_3))
                                                                                    {
                                                                                      e_37 = ATgetArgument(t, 0);
                                                                                      g_37 = ATgetArgument(t, 1);
                                                                                      h_37 = ATgetArgument(t, 2);
                                                                                      t = not_null(e_37);
                                                                                      if(match_cons(t, sym_Fun_2))
                                                                                        {
                                                                                          f_37 = ATgetArgument(t, 0);
                                                                                          d_37 = ATgetArgument(t, 1);
                                                                                          t = not_null(g_37);
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              x_36 = ATgetFirst((ATermList) t);
                                                                                              z_36 = (ATerm) ATgetNext((ATermList) t);
                                                                                              t = not_null(z_36);
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  a_37 = ATgetFirst((ATermList) t);
                                                                                                  c_37 = (ATerm) ATgetNext((ATermList) t);
                                                                                                  t = not_null(c_37);
                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                    {
                                                                                                      t = not_null(a_37);
                                                                                                      if(match_cons(t, sym_Var_1))
                                                                                                        {
                                                                                                          b_37 = ATgetArgument(t, 0);
                                                                                                          t = not_null(x_36);
                                                                                                          if(match_cons(t, sym_Var_1))
                                                                                                            {
                                                                                                              y_36 = ATgetArgument(t, 0);
                                                                                                              t = not_null(d_37);
                                                                                                              if(match_int(t, 2))
                                                                                                                {
                                                                                                                  t = not_null(f_37);
                                                                                                                  if(match_string(t, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm x_32 = t;
                                                                                                                      int y_32 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = x_56(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(y_32);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_32;
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
                                                                                                                  t = not_null(f_37);
                                                                                                                  t = z_56(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = not_null(f_37);
                                                                                                              t = z_56(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = not_null(f_37);
                                                                                                          t = z_56(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = not_null(f_37);
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = not_null(f_37);
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                {
                                                                                                  t = not_null(d_37);
                                                                                                  if(match_int(t, 0))
                                                                                                    {
                                                                                                      t = not_null(f_37);
                                                                                                      if(match_string(t, "Nil"))
                                                                                                        {
                                                                                                          ATerm z_32 = t;
                                                                                                          int a_33 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = y_56(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(a_33);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = z_32;
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
                                                                                                      t = not_null(f_37);
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = not_null(f_37);
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Real_1))
                                                                                            {
                                                                                              f_37 = ATgetArgument(t, 0);
                                                                                              t = a_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_Int_1))
                                                                                                {
                                                                                                  f_37 = ATgetArgument(t, 0);
                                                                                                  t = b_57(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_Str_1))
                                                                                                    {
                                                                                                      f_37 = ATgetArgument(t, 0);
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
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              p_37 = ATgetArgument(t, 0);
                                                                              m_37 = ATgetArgument(t, 1);
                                                                              j_37 = ATgetArgument(t, 2);
                                                                              k_37 = ATgetArgument(t, 3);
                                                                              t = e_57(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  p_37 = ATgetArgument(t, 0);
                                                                                  t = f_57(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      p_37 = ATgetArgument(t, 0);
                                                                                      m_37 = ATgetArgument(t, 1);
                                                                                      t = not_null(p_37);
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          n_37 = ATgetArgument(t, 0);
                                                                                          t = not_null(m_37);
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              l_37 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm b_33 = t;
                                                                                                int c_33 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = g_57(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(c_33);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = b_33;
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
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          p_37 = ATgetArgument(t, 0);
                                                                                          t = not_null(p_37);
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(t, 0);
                                                                                              t = i_57(t);
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
                                                                                              p_37 = ATgetArgument(t, 0);
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
ATerm real_to_string_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  ATerm f_59 (ATerm t)
  {
    ATerm e_59 = NULL;
    t = not_null(d_59);
    if(((e_59 != NULL) && (e_59 != t)))
      _fail(t);
    else
      e_59 = t;
    t = not_null(d_59);
    t = SSL_real_to_string(not_null(e_59));
    return(t);
  }
  if(((d_59 != NULL) && (d_59 != t)))
    _fail(t);
  else
    d_59 = t;
  t = f_59(t);
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  ATerm n_59 (ATerm t)
  {
    ATerm m_59 = NULL;
    t = not_null(l_59);
    if(((m_59 != NULL) && (m_59 != t)))
      _fail(t);
    else
      m_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_59));
    return(t);
  }
  if(((j_59 != NULL) && (j_59 != t)))
    _fail(t);
  else
    j_59 = t;
  t = not_null(j_59);
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
      t = not_null(k_59);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_59(t);
        }
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
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  ATerm n_60 (ATerm t)
  {
    ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
    t = not_null(x_59);
    if(((a_60 != NULL) && (a_60 != t)))
      _fail(t);
    else
      a_60 = t;
    t = not_null(y_59);
    if(((b_60 != NULL) && (b_60 != t)))
      _fail(t);
    else
      b_60 = t;
    t = not_null(z_59);
    if(((c_60 != NULL) && (c_60 != t)))
      _fail(t);
    else
      c_60 = t;
    t = not_null(v_59);
    {
      ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
      ATerm o_60 (ATerm t)
      {
        ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
        ATerm p_60 (ATerm t)
        {
          t = not_null(l_60);
          if(((g_60 != NULL) && (g_60 != t)))
            _fail(t);
          else
            g_60 = t;
          t = not_null(m_60);
          if(((e_60 != NULL) && (e_60 != t)))
            _fail(t);
          else
            e_60 = t;
          t = not_null(k_60);
          return(t);
        }
        t = not_null(i_60);
        if(((f_60 != NULL) && (f_60 != t)))
          _fail(t);
        else
          f_60 = t;
        t = not_null(j_60);
        if(((d_60 != NULL) && (d_60 != t)))
          _fail(t);
        else
          d_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_60), not_null(d_60));
        t = a_1(t);
        if(((k_60 != NULL) && (k_60 != t)))
          _fail(t);
        else
          k_60 = t;
        t = not_null(k_60);
        if(match_cons(t, sym__2))
          {
            l_60 = ATgetArgument(t, 0);
            m_60 = ATgetArgument(t, 1);
            t = p_60(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(c_60));
      t = w_0(t);
      if(((h_60 != NULL) && (h_60 != t)))
        _fail(t);
      else
        h_60 = t;
      t = not_null(h_60);
      if(match_cons(t, sym__2))
        {
          i_60 = ATgetArgument(t, 0);
          j_60 = ATgetArgument(t, 1);
          t = o_60(t);
        }
      else
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_60)), not_null(f_60)), not_null(e_60));
    }
    return(t);
  }
  if(((v_59 != NULL) && (v_59 != t)))
    _fail(t);
  else
    v_59 = t;
  t = not_null(v_59);
  if(match_cons(t, sym__2))
    {
      w_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
      t = not_null(w_59);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_59 = ATgetFirst((ATermList) t);
          y_59 = (ATerm) ATgetNext((ATermList) t);
          t = n_60(t);
        }
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
ATerm thread_map_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm q_60 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(m_120, q_60, t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = q_60(t);
  return(t);
}
ATerm Var_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  ATerm e_62 (ATerm t)
  {
    ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,k_61 = NULL;
    ATerm o_62 (ATerm t)
    {
      ATerm l_61 = NULL,m_61 = NULL;
      t = not_null(k_61);
      if(((l_61 != NULL) && (l_61 != t)))
        _fail(t);
      else
        l_61 = t;
      t = not_null(k_61);
      {
        ATerm n_61 = NULL;
        ATerm r_62 (ATerm t)
        {
          t = not_null(n_61);
          if(((m_61 != NULL) && (m_61 != t)))
            _fail(t);
          else
            m_61 = t;
          t = not_null(n_61);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_61)), not_null(i_61));
        if(((n_61 != NULL) && (n_61 != t)))
          _fail(t);
        else
          n_61 = t;
        t = r_62(t);
        t = not_null(m_61);
      }
      return(t);
    }
    t = not_null(e_61);
    if(((g_61 != NULL) && (g_61 != t)))
      _fail(t);
    else
      g_61 = t;
    t = not_null(f_61);
    if(((h_61 != NULL) && (h_61 != t)))
      _fail(t);
    else
      h_61 = t;
    t = not_null(e_61);
    {
      ATerm j_61 = NULL;
      ATerm h_62 (ATerm t)
      {
        t = not_null(j_61);
        if(((i_61 != NULL) && (i_61 != t)))
          _fail(t);
        else
          i_61 = t;
        t = not_null(j_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_61));
      if(((j_61 != NULL) && (j_61 != t)))
        _fail(t);
      else
        j_61 = t;
      t = h_62(t);
      t = not_null(h_61);
      t = q_0(t);
      if(((k_61 != NULL) && (k_61 != t)))
        _fail(t);
      else
        k_61 = t;
      t = o_62(t);
    }
    return(t);
  }
  ATerm f_62 (ATerm t)
  {
    ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,s_61 = NULL;
    ATerm t_62 (ATerm t)
    {
      ATerm t_61 = NULL,u_61 = NULL;
      t = not_null(s_61);
      if(((t_61 != NULL) && (t_61 != t)))
        _fail(t);
      else
        t_61 = t;
      t = not_null(s_61);
      {
        ATerm v_61 = NULL;
        ATerm u_62 (ATerm t)
        {
          t = not_null(v_61);
          if(((u_61 != NULL) && (u_61 != t)))
            _fail(t);
          else
            u_61 = t;
          t = not_null(v_61);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_61)), not_null(q_61));
        if(((v_61 != NULL) && (v_61 != t)))
          _fail(t);
        else
          v_61 = t;
        t = u_62(t);
        t = not_null(u_61);
      }
      return(t);
    }
    t = not_null(e_61);
    if(((o_61 != NULL) && (o_61 != t)))
      _fail(t);
    else
      o_61 = t;
    t = not_null(f_61);
    if(((p_61 != NULL) && (p_61 != t)))
      _fail(t);
    else
      p_61 = t;
    t = not_null(e_61);
    {
      ATerm r_61 = NULL;
      ATerm s_62 (ATerm t)
      {
        t = not_null(r_61);
        if(((q_61 != NULL) && (q_61 != t)))
          _fail(t);
        else
          q_61 = t;
        t = not_null(r_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_61));
      if(((r_61 != NULL) && (r_61 != t)))
        _fail(t);
      else
        r_61 = t;
      t = s_62(t);
      t = not_null(p_61);
      t = q_0(t);
      if(((s_61 != NULL) && (s_61 != t)))
        _fail(t);
      else
        s_61 = t;
      t = t_62(t);
    }
    return(t);
  }
  ATerm g_62 (ATerm t)
  {
    ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,a_62 = NULL;
    ATerm w_62 (ATerm t)
    {
      ATerm b_62 = NULL,c_62 = NULL;
      t = not_null(a_62);
      if(((b_62 != NULL) && (b_62 != t)))
        _fail(t);
      else
        b_62 = t;
      t = not_null(a_62);
      {
        ATerm d_62 = NULL;
        ATerm x_62 (ATerm t)
        {
          t = not_null(d_62);
          if(((c_62 != NULL) && (c_62 != t)))
            _fail(t);
          else
            c_62 = t;
          t = not_null(d_62);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_62)), not_null(y_61));
        if(((d_62 != NULL) && (d_62 != t)))
          _fail(t);
        else
          d_62 = t;
        t = x_62(t);
        t = not_null(c_62);
      }
      return(t);
    }
    t = not_null(e_61);
    if(((w_61 != NULL) && (w_61 != t)))
      _fail(t);
    else
      w_61 = t;
    t = not_null(f_61);
    if(((x_61 != NULL) && (x_61 != t)))
      _fail(t);
    else
      x_61 = t;
    t = not_null(e_61);
    {
      ATerm z_61 = NULL;
      ATerm v_62 (ATerm t)
      {
        t = not_null(z_61);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = not_null(z_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_61));
      if(((z_61 != NULL) && (z_61 != t)))
        _fail(t);
      else
        z_61 = t;
      t = v_62(t);
      t = not_null(x_61);
      t = q_0(t);
      if(((a_62 != NULL) && (a_62 != t)))
        _fail(t);
      else
        a_62 = t;
      t = w_62(t);
    }
    return(t);
  }
  if(((e_61 != NULL) && (e_61 != t)))
    _fail(t);
  else
    e_61 = t;
  t = not_null(e_61);
  if(match_cons(t, sym_Var_1))
    {
      f_61 = ATgetArgument(t, 0);
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_62(t);
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm h_33 = t;
              int i_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_62(t);
                  ;
                  LocalPopChoice(i_33);
                }
              else
                {
                  t = h_33;
                  t = g_62(t);
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
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  ATerm e_67 (ATerm t)
  {
    ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
    t = not_null(q_64);
    if(((g_65 != NULL) && (g_65 != t)))
      _fail(t);
    else
      g_65 = t;
    t = not_null(v_64);
    if(((h_65 != NULL) && (h_65 != t)))
      _fail(t);
    else
      h_65 = t;
    t = not_null(e_65);
    if(((i_65 != NULL) && (i_65 != t)))
      _fail(t);
    else
      i_65 = t;
    t = not_null(f_65);
    if(((j_65 != NULL) && (j_65 != t)))
      _fail(t);
    else
      j_65 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, term_e_24)), term_t_29), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, term_e_24)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_65)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_65)), term_q_9, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_29, (ATerm) ATinsert(ATempty, term_j_33)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_65)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_28, (ATerm) ATinsert(ATempty, term_j_33)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_65))));
    return(t);
  }
  ATerm f_67 (ATerm t)
  {
    ATerm k_65 = NULL,l_65 = NULL;
    t = not_null(e_65);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
    t = not_null(f_65);
    if(((l_65 != NULL) && (l_65 != t)))
      _fail(t);
    else
      l_65 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_29, (ATerm) ATinsert(ATempty, term_e_24)), term_t_29), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATinsert(ATempty, term_e_24))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(k_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_65))));
    return(t);
  }
  ATerm g_67 (ATerm t)
  {
    ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,i_66 = NULL,n_66 = NULL;
    t = not_null(d_65);
    if(((m_65 != NULL) && (m_65 != t)))
      _fail(t);
    else
      m_65 = t;
    t = not_null(x_64);
    if(((n_65 != NULL) && (n_65 != t)))
      _fail(t);
    else
      n_65 = t;
    t = not_null(e_65);
    if(((o_65 != NULL) && (o_65 != t)))
      _fail(t);
    else
      o_65 = t;
    t = not_null(f_65);
    if(((p_65 != NULL) && (p_65 != t)))
      _fail(t);
    else
      p_65 = t;
    t = not_null(y_64);
    {
      ATerm k_33;
      k_33 = t;
      {
        ATerm e_66 = NULL,g_66 = NULL,h_66 = NULL;
        ATerm n_67 (ATerm t)
        {
          t = not_null(g_66);
          if(((q_65 != NULL) && (q_65 != t)))
            _fail(t);
          else
            q_65 = t;
          t = not_null(e_66);
          return(t);
        }
        t = not_null(m_65);
        {
          ATerm l_33 = t;
          if((PushChoice() == 0))
            {
              ATerm r_65 = NULL;
              if(((r_65 != NULL) && (r_65 != t)))
                _fail(t);
              else
                r_65 = t;
              t = not_null(r_65);
              if(match_string(t, "Nil"))
                {
                  t = not_null(r_65);
                }
              else
                {
                  if(match_string(t, "Cons"))
                    {
                      t = not_null(r_65);
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
              t = l_33;
            }
          t = not_null(n_65);
          {
            ATerm p_2 (ATerm t)
            {
              t = Var_1_0(_id, t);
              return(t);
            }
            t = map_1_0(p_2, t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_65), term_y_29);
            {
              ATerm q_2 (ATerm t)
              {
                ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
                ATerm k_67 (ATerm t)
                {
                  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,c_66 = NULL;
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
                  t = not_null(s_65);
                  {
                    ATerm m_33;
                    m_33 = t;
                    {
                      ATerm b_66 = NULL;
                      ATerm l_67 (ATerm t)
                      {
                        t = not_null(b_66);
                        if(((y_65 != NULL) && (y_65 != t)))
                          _fail(t);
                        else
                          y_65 = t;
                        t = not_null(b_66);
                        return(t);
                      }
                      t = not_null(x_65);
                      t = int_to_string_0_0(t);
                      if(((b_66 != NULL) && (b_66 != t)))
                        _fail(t);
                      else
                        b_66 = t;
                      t = l_67(t);
                    }
                    t = m_33;
                    {
                      ATerm d_66 = NULL;
                      ATerm m_67 (ATerm t)
                      {
                        t = not_null(d_66);
                        if(((c_66 != NULL) && (c_66 != t)))
                          _fail(t);
                        else
                          c_66 = t;
                        t = not_null(d_66);
                        return(t);
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_65), term_f_31);
                      t = add_0_0(t);
                      if(((d_66 != NULL) && (d_66 != t)))
                        _fail(t);
                      else
                        d_66 = t;
                      t = m_67(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_65)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(y_65))), term_e_24)))), not_null(c_66));
                    }
                  }
                  return(t);
                }
                if(((s_65 != NULL) && (s_65 != t)))
                  _fail(t);
                else
                  s_65 = t;
                t = not_null(s_65);
                if(match_cons(t, sym__2))
                  {
                    t_65 = ATgetArgument(t, 0);
                    v_65 = ATgetArgument(t, 1);
                    t = not_null(t_65);
                    if(match_cons(t, sym_Var_1))
                      {
                        u_65 = ATgetArgument(t, 0);
                        t = k_67(t);
                      }
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
              if(((e_66 != NULL) && (e_66 != t)))
                _fail(t);
              else
                e_66 = t;
              t = not_null(e_66);
              if(match_cons(t, sym__2))
                {
                  g_66 = ATgetArgument(t, 0);
                  h_66 = ATgetArgument(t, 1);
                  t = n_67(t);
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
      t = k_33;
      {
        ATerm n_33;
        n_33 = t;
        {
          ATerm j_66 = NULL,l_66 = NULL;
          ATerm v_67 (ATerm t)
          {
            t = not_null(l_66);
            if(((i_66 != NULL) && (i_66 != t)))
              _fail(t);
            else
              i_66 = t;
            t = not_null(l_66);
            return(t);
          }
          ATerm k_66 = NULL;
          ATerm o_67 (ATerm t)
          {
            t = not_null(k_66);
            if(((j_66 != NULL) && (j_66 != t)))
              _fail(t);
            else
              j_66 = t;
            t = not_null(k_66);
            return(t);
          }
          t = not_null(n_65);
          t = length_0_0(t);
          if(((k_66 != NULL) && (k_66 != t)))
            _fail(t);
          else
            k_66 = t;
          t = o_67(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_65), not_null(j_66));
          t = ConstructorName_0_0(t);
          if(((l_66 != NULL) && (l_66 != t)))
            _fail(t);
          else
            l_66 = t;
          t = v_67(t);
        }
        t = n_33;
        {
          ATerm o_66 = NULL;
          ATerm w_67 (ATerm t)
          {
            t = not_null(o_66);
            if(((n_66 != NULL) && (n_66 != t)))
              _fail(t);
            else
              n_66 = t;
            t = not_null(o_66);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_65), (ATerm) ATinsert(ATempty, not_null(o_65)));
          t = conc_0_0(t);
          if(((o_66 != NULL) && (o_66 != t)))
            _fail(t);
          else
            o_66 = t;
          t = w_67(t);
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_66))), term_e_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_66)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_65))));
        }
      }
    }
    return(t);
  }
  ATerm h_67 (ATerm t)
  {
    ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
    t = not_null(d_65);
    if(((p_66 != NULL) && (p_66 != t)))
      _fail(t);
    else
      p_66 = t;
    t = not_null(e_65);
    if(((q_66 != NULL) && (q_66 != t)))
      _fail(t);
    else
      q_66 = t;
    t = not_null(f_65);
    if(((r_66 != NULL) && (r_66 != t)))
      _fail(t);
    else
      r_66 = t;
    t = not_null(y_64);
    {
      ATerm t_66 = NULL;
      ATerm x_67 (ATerm t)
      {
        t = not_null(t_66);
        if(((s_66 != NULL) && (s_66 != t)))
          _fail(t);
        else
          s_66 = t;
        t = not_null(t_66);
        return(t);
      }
      t = not_null(p_66);
      t = real_to_string_0_0(t);
      if(((t_66 != NULL) && (t_66 != t)))
        _fail(t);
      else
        t_66 = t;
      t = x_67(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_66))), term_e_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(q_66))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(r_66))));
    }
    return(t);
  }
  ATerm i_67 (ATerm t)
  {
    ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL;
    t = not_null(d_65);
    if(((u_66 != NULL) && (u_66 != t)))
      _fail(t);
    else
      u_66 = t;
    t = not_null(e_65);
    if(((v_66 != NULL) && (v_66 != t)))
      _fail(t);
    else
      v_66 = t;
    t = not_null(f_65);
    if(((w_66 != NULL) && (w_66 != t)))
      _fail(t);
    else
      w_66 = t;
    t = not_null(y_64);
    {
      ATerm y_66 = NULL;
      ATerm y_67 (ATerm t)
      {
        t = not_null(y_66);
        if(((x_66 != NULL) && (x_66 != t)))
          _fail(t);
        else
          x_66 = t;
        t = not_null(y_66);
        return(t);
      }
      t = not_null(u_66);
      t = int_to_string_0_0(t);
      if(((y_66 != NULL) && (y_66 != t)))
        _fail(t);
      else
        y_66 = t;
      t = y_67(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_66))), term_e_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_66))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(w_66))));
    }
    return(t);
  }
  ATerm j_67 (ATerm t)
  {
    ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
    t = not_null(d_65);
    if(((z_66 != NULL) && (z_66 != t)))
      _fail(t);
    else
      z_66 = t;
    t = not_null(e_65);
    if(((a_67 != NULL) && (a_67 != t)))
      _fail(t);
    else
      a_67 = t;
    t = not_null(f_65);
    if(((b_67 != NULL) && (b_67 != t)))
      _fail(t);
    else
      b_67 = t;
    t = not_null(y_64);
    {
      ATerm d_67 = NULL;
      ATerm z_67 (ATerm t)
      {
        t = not_null(d_67);
        if(((c_67 != NULL) && (c_67 != t)))
          _fail(t);
        else
          c_67 = t;
        t = not_null(d_67);
        return(t);
      }
      t = not_null(z_66);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((d_67 != NULL) && (d_67 != t)))
        _fail(t);
      else
        d_67 = t;
      t = z_67(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_67)))), term_e_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_67))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_67))));
    }
    return(t);
  }
  if(((y_64 != NULL) && (y_64 != t)))
    _fail(t);
  else
    y_64 = t;
  t = not_null(y_64);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      b_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
      f_65 = ATgetArgument(t, 2);
      t = not_null(b_65);
      if(match_cons(t, sym_Match_1))
        {
          c_65 = ATgetArgument(t, 0);
          t = not_null(c_65);
          if(match_cons(t, sym_Op_2))
            {
              d_65 = ATgetArgument(t, 0);
              x_64 = ATgetArgument(t, 1);
              t = not_null(x_64);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_64 = ATgetFirst((ATermList) t);
                  r_64 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(r_64);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_64 = ATgetFirst((ATermList) t);
                      w_64 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(w_64);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(s_64);
                          if(match_cons(t, sym_Var_1))
                            {
                              v_64 = ATgetArgument(t, 0);
                              t = not_null(p_64);
                              if(match_cons(t, sym_Var_1))
                                {
                                  q_64 = ATgetArgument(t, 0);
                                  t = not_null(d_65);
                                  if(match_string(t, "Cons"))
                                    {
                                      ATerm o_33 = t;
                                      int p_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = e_67(t);
                                          ;
                                          LocalPopChoice(p_33);
                                        }
                                      else
                                        {
                                          t = o_33;
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
                                  t = not_null(d_65);
                                  t = g_67(t);
                                }
                            }
                          else
                            {
                              t = not_null(d_65);
                              t = g_67(t);
                            }
                        }
                      else
                        {
                          t = not_null(d_65);
                          t = g_67(t);
                        }
                    }
                  else
                    {
                      t = not_null(d_65);
                      t = g_67(t);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(d_65);
                      if(match_string(t, "Nil"))
                        {
                          ATerm q_33 = t;
                          int r_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_67(t);
                              ;
                              LocalPopChoice(r_33);
                            }
                          else
                            {
                              t = q_33;
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
                      t = not_null(d_65);
                      t = g_67(t);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  d_65 = ATgetArgument(t, 0);
                  t = h_67(t);
                }
              else
                {
                  if(match_cons(t, sym_Int_1))
                    {
                      d_65 = ATgetArgument(t, 0);
                      t = i_67(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          d_65 = ATgetArgument(t, 0);
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
ATerm PlainBody_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  ATerm h_68 (ATerm t)
  {
    ATerm f_68 = NULL,g_68 = NULL;
    t = not_null(d_68);
    if(((f_68 != NULL) && (f_68 != t)))
      _fail(t);
    else
      f_68 = t;
    t = not_null(e_68);
    if(((g_68 != NULL) && (g_68 != t)))
      _fail(t);
    else
      g_68 = t;
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), not_null(g_68)));
    return(t);
  }
  if(((c_68 != NULL) && (c_68 != t)))
    _fail(t);
  else
    c_68 = t;
  t = not_null(c_68);
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      t = h_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  ATerm p_68 (ATerm t)
  {
    ATerm o_68 = NULL;
    t = not_null(n_68);
    if(((o_68 != NULL) && (o_68 != t)))
      _fail(t);
    else
      o_68 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_68)), term_u_33), term_t_33);
    return(t);
  }
  if(((l_68 != NULL) && (l_68 != t)))
    _fail(t);
  else
    l_68 = t;
  t = not_null(l_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_68 = ATgetFirst((ATermList) t);
      n_68 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(m_68);
      if(match_int(t, 10))
        {
          t = p_68(t);
        }
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
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  ATerm x_68 (ATerm t)
  {
    ATerm w_68 = NULL;
    t = not_null(v_68);
    if(((w_68 != NULL) && (w_68 != t)))
      _fail(t);
    else
      w_68 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_68)), term_t_33), term_t_33);
    return(t);
  }
  if(((t_68 != NULL) && (t_68 != t)))
    _fail(t);
  else
    t_68 = t;
  t = not_null(t_68);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_68 = ATgetFirst((ATermList) t);
      v_68 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(u_68);
      if(match_int(t, 92))
        {
          t = x_68(t);
        }
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  ATerm f_69 (ATerm t)
  {
    ATerm e_69 = NULL;
    t = not_null(d_69);
    if(((e_69 != NULL) && (e_69 != t)))
      _fail(t);
    else
      e_69 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_69)), term_v_33), term_t_33);
    return(t);
  }
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  t = not_null(b_69);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      d_69 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(c_69);
      if(match_int(t, 34))
        {
          t = f_69(t);
        }
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
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0_0(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0_0(t);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            t = Escape_linefeed_0_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
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
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
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
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  ATerm u_69 (ATerm t)
  {
    ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,s_69 = NULL;
    t = not_null(m_69);
    if(((o_69 != NULL) && (o_69 != t)))
      _fail(t);
    else
      o_69 = t;
    t = not_null(n_69);
    if(((p_69 != NULL) && (p_69 != t)))
      _fail(t);
    else
      p_69 = t;
    t = not_null(l_69);
    {
      ATerm e_34;
      e_34 = t;
      {
        ATerm r_69 = NULL;
        ATerm v_69 (ATerm t)
        {
          t = not_null(r_69);
          if(((q_69 != NULL) && (q_69 != t)))
            _fail(t);
          else
            q_69 = t;
          t = not_null(r_69);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, term_f_34), not_null(o_69));
        t = concat_strings_0_0(t);
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        if(((r_69 != NULL) && (r_69 != t)))
          _fail(t);
        else
          r_69 = t;
        t = v_69(t);
      }
      t = e_34;
      {
        ATerm t_69 = NULL;
        ATerm w_69 (ATerm t)
        {
          t = not_null(t_69);
          if(((s_69 != NULL) && (s_69 != t)))
            _fail(t);
          else
            s_69 = t;
          t = not_null(t_69);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATempty, term_g_34), not_null(o_69));
        t = concat_strings_0_0(t);
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        if(((t_69 != NULL) && (t_69 != t)))
          _fail(t);
        else
          t_69 = t;
        t = w_69(t);
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_33), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_34, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(s_69))), term_j_34)))), not_null(p_69)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_34, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_69))), term_j_34)))));
      }
    }
    return(t);
  }
  if(((l_69 != NULL) && (l_69 != t)))
    _fail(t);
  else
    l_69 = t;
  t = not_null(l_69);
  if(match_cons(t, sym__2))
    {
      m_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
      t = u_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TraceAllFuns_0_0 (ATerm t)
{
  ATerm a_70 = NULL;
  ATerm f_70 (ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL;
    t = not_null(a_70);
    if(((b_70 != NULL) && (b_70 != t)))
      _fail(t);
    else
      b_70 = t;
    t = not_null(a_70);
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = not_null(a_70);
    {
      ATerm d_70 = NULL,e_70 = NULL;
      t = (ATerm) ATempty;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_g_9;
          return(t);
        }
        t = rewrite_1_0(y_2, t);
        if(((d_70 != NULL) && (d_70 != t)))
          _fail(t);
        else
          d_70 = t;
        t = not_null(d_70);
        if(match_cons(t, sym_Defined_1))
          {
            e_70 = ATgetArgument(t, 0);
            t = not_null(e_70);
            if(match_string(t, "p_0"))
              {
                t = not_null(d_70);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(c_70);
    }
    return(t);
  }
  if(((a_70 != NULL) && (a_70 != t)))
    _fail(t);
  else
    a_70 = t;
  t = f_70(t);
  return(t);
}
ATerm TraceFun_0_0 (ATerm t)
{
  ATerm j_70 = NULL;
  ATerm o_70 (ATerm t)
  {
    ATerm k_70 = NULL,l_70 = NULL;
    t = not_null(j_70);
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = not_null(j_70);
    if(((k_70 != NULL) && (k_70 != t)))
      _fail(t);
    else
      k_70 = t;
    t = not_null(j_70);
    {
      ATerm m_70 = NULL,n_70 = NULL;
      t = not_null(l_70);
      {
        ATerm z_2 (ATerm t)
        {
          t = term_l_9;
          return(t);
        }
        t = rewrite_1_0(z_2, t);
        if(((m_70 != NULL) && (m_70 != t)))
          _fail(t);
        else
          m_70 = t;
        t = not_null(m_70);
        if(match_cons(t, sym_Defined_1))
          {
            n_70 = ATgetArgument(t, 0);
            t = not_null(n_70);
            if(match_string(t, "s_0"))
              {
                t = not_null(m_70);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(k_70);
    }
    return(t);
  }
  if(((j_70 != NULL) && (j_70 != t)))
    _fail(t);
  else
    j_70 = t;
  t = o_70(t);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  ATerm l_72 (ATerm t)
  {
    ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,a_72 = NULL;
    t = not_null(l_71);
    if(((o_71 != NULL) && (o_71 != t)))
      _fail(t);
    else
      o_71 = t;
    t = not_null(m_71);
    if(((p_71 != NULL) && (p_71 != t)))
      _fail(t);
    else
      p_71 = t;
    t = not_null(n_71);
    if(((q_71 != NULL) && (q_71 != t)))
      _fail(t);
    else
      q_71 = t;
    t = not_null(j_71);
    if(((r_71 != NULL) && (r_71 != t)))
      _fail(t);
    else
      r_71 = t;
    t = not_null(k_71);
    {
      ATerm k_34;
      k_34 = t;
      {
        ATerm w_71 = NULL;
        ATerm n_72 (ATerm t)
        {
          ATerm x_71 = NULL;
          ATerm o_72 (ATerm t)
          {
            ATerm y_71 = NULL;
            ATerm p_72 (ATerm t)
            {
              ATerm z_71 = NULL;
              ATerm q_72 (ATerm t)
              {
                t = not_null(z_71);
                if(((v_71 != NULL) && (v_71 != t)))
                  _fail(t);
                else
                  v_71 = t;
                t = not_null(z_71);
                return(t);
              }
              t = not_null(y_71);
              if(((u_71 != NULL) && (u_71 != t)))
                _fail(t);
              else
                u_71 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_71), not_null(r_71));
              {
                ATerm l_34 = t;
                int m_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      ATerm n_34 = t;
                      int o_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TraceFun_0_0(t);
                          ;
                          LocalPopChoice(o_34);
                        }
                      else
                        {
                          t = n_34;
                          t = TraceAllFuns_0_0(t);
                        }
                      return(t);
                    }
                    t = _2_0(a_3, _id, t);
                    t = TracedBody_0_0(t);
                    ;
                    LocalPopChoice(m_34);
                  }
                else
                  {
                    t = l_34;
                    t = PlainBody_0_0(t);
                  }
                if(((z_71 != NULL) && (z_71 != t)))
                  _fail(t);
                else
                  z_71 = t;
                t = q_72(t);
              }
              return(t);
            }
            t = not_null(x_71);
            if(((t_71 != NULL) && (t_71 != t)))
              _fail(t);
            else
              t_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), not_null(t_71));
            t = conc_0_0(t);
            if(((y_71 != NULL) && (y_71 != t)))
              _fail(t);
            else
              y_71 = t;
            t = p_72(t);
            return(t);
          }
          t = not_null(w_71);
          if(((s_71 != NULL) && (s_71 != t)))
            _fail(t);
          else
            s_71 = t;
          t = not_null(q_71);
          t = map_1_0(TranslateVarDec_0_0, t);
          if(((x_71 != NULL) && (x_71 != t)))
            _fail(t);
          else
            x_71 = t;
          t = o_72(t);
          return(t);
        }
        t = not_null(p_71);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((w_71 != NULL) && (w_71 != t)))
          _fail(t);
        else
          w_71 = t;
        t = n_72(t);
      }
      t = k_34;
      {
        ATerm b_72 = NULL;
        ATerm r_72 (ATerm t)
        {
          t = not_null(b_72);
          if(((a_72 != NULL) && (a_72 != t)))
            _fail(t);
          else
            a_72 = t;
          t = not_null(b_72);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_71), (ATerm) ATinsert(ATempty, term_q_34));
        t = conc_0_0(t);
        if(((b_72 != NULL) && (b_72 != t)))
          _fail(t);
        else
          b_72 = t;
        t = r_72(t);
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_72)))), not_null(v_71));
      }
    }
    return(t);
  }
  ATerm m_72 (ATerm t)
  {
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,j_72 = NULL;
    t = not_null(l_71);
    if(((c_72 != NULL) && (c_72 != t)))
      _fail(t);
    else
      c_72 = t;
    t = not_null(m_71);
    if(((d_72 != NULL) && (d_72 != t)))
      _fail(t);
    else
      d_72 = t;
    t = not_null(n_71);
    if(((e_72 != NULL) && (e_72 != t)))
      _fail(t);
    else
      e_72 = t;
    t = not_null(k_71);
    {
      ATerm r_34;
      r_34 = t;
      {
        ATerm h_72 = NULL;
        ATerm t_72 (ATerm t)
        {
          ATerm i_72 = NULL;
          ATerm u_72 (ATerm t)
          {
            t = not_null(i_72);
            if(((g_72 != NULL) && (g_72 != t)))
              _fail(t);
            else
              g_72 = t;
            t = not_null(i_72);
            return(t);
          }
          t = not_null(h_72);
          if(((f_72 != NULL) && (f_72 != t)))
            _fail(t);
          else
            f_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), not_null(e_72));
          {
            ATerm s_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = TraceFun_0_0(t);
                      ;
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = u_34;
                      t = TraceAllFuns_0_0(t);
                    }
                  return(t);
                }
                t = _2_0(b_3, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(t_34);
              }
            else
              {
                t = s_34;
                t = PlainBody_0_0(t);
              }
            if(((i_72 != NULL) && (i_72 != t)))
              _fail(t);
            else
              i_72 = t;
            t = u_72(t);
          }
          return(t);
        }
        t = not_null(d_72);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((h_72 != NULL) && (h_72 != t)))
          _fail(t);
        else
          h_72 = t;
        t = t_72(t);
      }
      t = r_34;
      {
        ATerm k_72 = NULL;
        ATerm v_72 (ATerm t)
        {
          t = not_null(k_72);
          if(((j_72 != NULL) && (j_72 != t)))
            _fail(t);
          else
            j_72 = t;
          t = not_null(k_72);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_72), (ATerm) ATinsert(ATempty, term_q_34));
        t = conc_0_0(t);
        if(((k_72 != NULL) && (k_72 != t)))
          _fail(t);
        else
          k_72 = t;
        t = v_72(t);
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_72)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_72)))), not_null(g_72));
      }
    }
    return(t);
  }
  if(((k_71 != NULL) && (k_71 != t)))
    _fail(t);
  else
    k_71 = t;
  t = not_null(k_71);
  if(match_cons(t, sym_SDefT_4))
    {
      l_71 = ATgetArgument(t, 0);
      m_71 = ATgetArgument(t, 1);
      n_71 = ATgetArgument(t, 2);
      j_71 = ATgetArgument(t, 3);
      t = l_72(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_71 = ATgetArgument(t, 0);
          m_71 = ATgetArgument(t, 1);
          n_71 = ATgetArgument(t, 2);
          t = m_72(t);
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
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  ATerm d_73 (ATerm t)
  {
    ATerm b_73 = NULL,c_73 = NULL;
    t = not_null(z_72);
    if(((c_73 != NULL) && (c_73 != t)))
      _fail(t);
    else
      c_73 = t;
    t = not_null(a_73);
    if(((b_73 != NULL) && (b_73 != t)))
      _fail(t);
    else
      b_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_73)), not_null(c_73)), (ATerm) ATinsert(ATempty, not_null(c_73)));
    t = conc_0_0(t);
    return(t);
  }
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  t = not_null(y_72);
  if(match_cons(t, sym__2))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
      t = d_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm f_73 = NULL;
  ATerm g_73 = NULL;
  ATerm h_73 (ATerm t)
  {
    t = not_null(g_73);
    if(((f_73 != NULL) && (f_73 != t)))
      _fail(t);
    else
      f_73 = t;
    t = not_null(g_73);
    return(t);
  }
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = h_73(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_33, not_null(f_73));
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = i_123(t);
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
  ATerm q_73 = NULL,s_73 = NULL,t_73 = NULL;
  ATerm v_73 (ATerm t)
  {
    ATerm u_73 = NULL;
    t = not_null(s_73);
    if(((u_73 != NULL) && (u_73 != t)))
      _fail(t);
    else
      u_73 = t;
    t = not_null(u_73);
    return(t);
  }
  if(((q_73 != NULL) && (q_73 != t)))
    _fail(t);
  else
    q_73 = t;
  t = not_null(q_73);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_73 = ATgetFirst((ATermList) t);
      t_73 = (ATerm) ATgetNext((ATermList) t);
      t = v_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  ATerm d_74 (ATerm t)
  {
    ATerm b_74 = NULL,c_74 = NULL;
    t = not_null(z_73);
    if(((b_74 != NULL) && (b_74 != t)))
      _fail(t);
    else
      b_74 = t;
    t = not_null(a_74);
    if(((c_74 != NULL) && (c_74 != t)))
      _fail(t);
    else
      c_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_74), not_null(c_74));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((y_73 != NULL) && (y_73 != t)))
    _fail(t);
  else
    y_73 = t;
  t = not_null(y_73);
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
      t = d_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm q_134 (ATerm), ATerm t)
{
  ATerm g_74 = NULL;
  ATerm k_74 (ATerm t)
  {
    ATerm h_74 = NULL,i_74 = NULL;
    t = not_null(g_74);
    if(((h_74 != NULL) && (h_74 != t)))
      _fail(t);
    else
      h_74 = t;
    t = not_null(g_74);
    {
      ATerm j_74 = NULL;
      ATerm l_74 (ATerm t)
      {
        t = not_null(j_74);
        if(((i_74 != NULL) && (i_74 != t)))
          _fail(t);
        else
          i_74 = t;
        t = not_null(j_74);
        return(t);
      }
      t = term_w_34;
      t = q_134(t);
      if(((j_74 != NULL) && (j_74 != t)))
        _fail(t);
      else
        j_74 = t;
      t = l_74(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_74), not_null(h_74));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((g_74 != NULL) && (g_74 != t)))
    _fail(t);
  else
    g_74 = t;
  t = k_74(t);
  return(t);
}
ATerm ConstructorName_0_0 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  ATerm b_75 (ATerm t)
  {
    ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
    t = not_null(r_74);
    if(((u_74 != NULL) && (u_74 != t)))
      _fail(t);
    else
      u_74 = t;
    t = not_null(s_74);
    if(((v_74 != NULL) && (v_74 != t)))
      _fail(t);
    else
      v_74 = t;
    t = not_null(t_74);
    if(((w_74 != NULL) && (w_74 != t)))
      _fail(t);
    else
      w_74 = t;
    t = not_null(r_74);
    {
      ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
      ATerm c_75 (ATerm t)
      {
        t = not_null(a_75);
        if(((x_74 != NULL) && (x_74 != t)))
          _fail(t);
        else
          x_74 = t;
        t = not_null(y_74);
        return(t);
      }
      t = not_null(u_74);
      {
        ATerm c_3 (ATerm t)
        {
          t = term_x_34;
          return(t);
        }
        t = rewrite_1_0(c_3, t);
        if(((y_74 != NULL) && (y_74 != t)))
          _fail(t);
        else
          y_74 = t;
        t = not_null(y_74);
        if(match_cons(t, sym_Defined_2))
          {
            z_74 = ATgetArgument(t, 0);
            a_75 = ATgetArgument(t, 1);
            t = not_null(z_74);
            if(match_string(t, "j_0"))
              {
                t = c_75(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(x_74);
    }
    return(t);
  }
  if(((r_74 != NULL) && (r_74 != t)))
    _fail(t);
  else
    r_74 = t;
  t = not_null(r_74);
  if(match_cons(t, sym__2))
    {
      s_74 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
      t = b_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  ATerm w_75 (ATerm t)
  {
    ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,u_75 = NULL;
    t = not_null(k_75);
    if(((m_75 != NULL) && (m_75 != t)))
      _fail(t);
    else
      m_75 = t;
    t = not_null(l_75);
    if(((n_75 != NULL) && (n_75 != t)))
      _fail(t);
    else
      n_75 = t;
    t = not_null(j_75);
    {
      ATerm y_34;
      y_34 = t;
      {
        ATerm r_75 = NULL;
        ATerm x_75 (ATerm t)
        {
          ATerm s_75 = NULL;
          ATerm d_76 (ATerm t)
          {
            ATerm t_75 = NULL;
            ATerm e_76 (ATerm t)
            {
              t = not_null(t_75);
              if(((q_75 != NULL) && (q_75 != t)))
                _fail(t);
              else
                q_75 = t;
              t = not_null(t_75);
              return(t);
            }
            t = not_null(s_75);
            if(((o_75 != NULL) && (o_75 != t)))
              _fail(t);
            else
              o_75 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_75), not_null(p_75));
            t = ConstructorName_0_0(t);
            if(((t_75 != NULL) && (t_75 != t)))
              _fail(t);
            else
              t_75 = t;
            t = e_76(t);
            return(t);
          }
          t = not_null(r_75);
          if(((p_75 != NULL) && (p_75 != t)))
            _fail(t);
          else
            p_75 = t;
          t = not_null(r_75);
          t = int_to_string_0_0(t);
          if(((s_75 != NULL) && (s_75 != t)))
            _fail(t);
          else
            s_75 = t;
          t = d_76(t);
          return(t);
        }
        t = not_null(n_75);
        t = Arity_0_0(t);
        if(((r_75 != NULL) && (r_75 != t)))
          _fail(t);
        else
          r_75 = t;
        t = x_75(t);
      }
      t = y_34;
      {
        ATerm v_75 = NULL;
        ATerm f_76 (ATerm t)
        {
          t = not_null(v_75);
          if(((u_75 != NULL) && (u_75 != t)))
            _fail(t);
          else
            u_75 = t;
          t = not_null(v_75);
          return(t);
        }
        t = not_null(m_75);
        t = double_quote_0_0(t);
        if(((v_75 != NULL) && (v_75 != t)))
          _fail(t);
        else
          v_75 = t;
        t = f_76(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_75)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_75)), term_q_9, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_35), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_75))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_75))))))));
      }
    }
    return(t);
  }
  if(((j_75 != NULL) && (j_75 != t)))
    _fail(t);
  else
    j_75 = t;
  t = not_null(j_75);
  if(match_cons(t, sym_OpDecl_2))
    {
      k_75 = ATgetArgument(t, 0);
      l_75 = ATgetArgument(t, 1);
      t = w_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm j_76 = NULL;
  ATerm a_77 (ATerm t)
  {
    ATerm k_76 = NULL,u_76 = NULL;
    t = not_null(j_76);
    if(((k_76 != NULL) && (k_76 != t)))
      _fail(t);
    else
      k_76 = t;
    t = not_null(j_76);
    {
      ATerm v_76 = NULL,x_76 = NULL;
      ATerm c_77 (ATerm t)
      {
        t = not_null(x_76);
        if(((u_76 != NULL) && (u_76 != t)))
          _fail(t);
        else
          u_76 = t;
        t = not_null(x_76);
        return(t);
      }
      ATerm w_76 = NULL;
      ATerm b_77 (ATerm t)
      {
        t = not_null(w_76);
        if(((v_76 != NULL) && (v_76 != t)))
          _fail(t);
        else
          v_76 = t;
        t = not_null(w_76);
        return(t);
      }
      t = not_null(k_76);
      t = map_1_0(InitConstructor_0_0, t);
      t = concat_0_0(t);
      if(((w_76 != NULL) && (w_76 != t)))
        _fail(t);
      else
        w_76 = t;
      t = b_77(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_76), (ATerm) ATinsert(ATempty, term_e_35));
      t = conc_0_0(t);
      if(((x_76 != NULL) && (x_76 != t)))
        _fail(t);
      else
        x_76 = t;
      t = c_77(t);
      t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_35, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_u_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(u_76)));
    }
    return(t);
  }
  if(((j_76 != NULL) && (j_76 != t)))
    _fail(t);
  else
    j_76 = t;
  t = a_77(t);
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
  ATerm e_77 = NULL;
  ATerm g_77 (ATerm t)
  {
    ATerm f_77 = NULL;
    t = not_null(e_77);
    if(((f_77 != NULL) && (f_77 != t)))
      _fail(t);
    else
      f_77 = t;
    t = not_null(e_77);
    t = SSL_int_to_string(not_null(f_77));
    return(t);
  }
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  t = g_77(t);
  return(t);
}
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  ATerm i_78 (ATerm t)
  {
    ATerm s_77 = NULL,t_77 = NULL;
    t = not_null(r_77);
    if(((s_77 != NULL) && (s_77 != t)))
      _fail(t);
    else
      s_77 = t;
    t = not_null(p_77);
    {
      ATerm u_77 = NULL;
      ATerm l_78 (ATerm t)
      {
        t = not_null(u_77);
        if(((t_77 != NULL) && (t_77 != t)))
          _fail(t);
        else
          t_77 = t;
        t = not_null(u_77);
        return(t);
      }
      t = not_null(s_77);
      t = o_0(t);
      if(((u_77 != NULL) && (u_77 != t)))
        _fail(t);
      else
        u_77 = t;
      t = l_78(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_77)), term_h_35), term_h_35);
    }
    return(t);
  }
  ATerm j_78 (ATerm t)
  {
    ATerm v_77 = NULL,w_77 = NULL;
    t = not_null(r_77);
    if(((v_77 != NULL) && (v_77 != t)))
      _fail(t);
    else
      v_77 = t;
    t = not_null(p_77);
    {
      ATerm x_77 = NULL;
      ATerm m_78 (ATerm t)
      {
        t = not_null(x_77);
        if(((w_77 != NULL) && (w_77 != t)))
          _fail(t);
        else
          w_77 = t;
        t = not_null(x_77);
        return(t);
      }
      t = not_null(v_77);
      t = o_0(t);
      if(((x_77 != NULL) && (x_77 != t)))
        _fail(t);
      else
        x_77 = t;
      t = m_78(t);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_77)), term_h_35);
    }
    return(t);
  }
  ATerm k_78 (ATerm t)
  {
    ATerm y_77 = NULL,g_78 = NULL;
    t = not_null(r_77);
    if(((y_77 != NULL) && (y_77 != t)))
      _fail(t);
    else
      y_77 = t;
    t = not_null(p_77);
    {
      ATerm h_78 = NULL;
      ATerm n_78 (ATerm t)
      {
        t = not_null(h_78);
        if(((g_78 != NULL) && (g_78 != t)))
          _fail(t);
        else
          g_78 = t;
        t = not_null(h_78);
        return(t);
      }
      t = not_null(y_77);
      t = o_0(t);
      if(((h_78 != NULL) && (h_78 != t)))
        _fail(t);
      else
        h_78 = t;
      t = n_78(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_78)), term_h_35), term_i_35), term_h_35);
    }
    return(t);
  }
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = not_null(p_77);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_77 = ATgetFirst((ATermList) t);
      r_77 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(q_77);
      if(match_int(t, 95))
        {
          t = i_78(t);
        }
      else
        {
          if(match_int(t, 45))
            {
              t = j_78(t);
            }
          else
            {
              if(match_int(t, 39))
                {
                  t = k_78(t);
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
ATerm escape_1_0 (ATerm e_123 (ATerm, ATerm (ATerm)), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm o_78 (ATerm t)
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_123(o_78, t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, o_78, t);
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = Nil_0_0(t);
              }
          }
        }
      return(t);
    }
    t = o_78(t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = y_119(t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
        ATerm c_79 (ATerm t)
        {
          ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,a_79 = NULL;
          t = not_null(u_78);
          if(((w_78 != NULL) && (w_78 != t)))
            _fail(t);
          else
            w_78 = t;
          t = not_null(v_78);
          if(((x_78 != NULL) && (x_78 != t)))
            _fail(t);
          else
            x_78 = t;
          t = not_null(t_78);
          {
            ATerm p_35;
            p_35 = t;
            {
              ATerm z_78 = NULL;
              ATerm d_79 (ATerm t)
              {
                t = not_null(z_78);
                if(((y_78 != NULL) && (y_78 != t)))
                  _fail(t);
                else
                  y_78 = t;
                t = not_null(z_78);
                return(t);
              }
              t = not_null(w_78);
              t = a_120(t);
              if(((z_78 != NULL) && (z_78 != t)))
                _fail(t);
              else
                z_78 = t;
              t = d_79(t);
            }
            t = p_35;
            {
              ATerm b_79 = NULL;
              ATerm e_79 (ATerm t)
              {
                t = not_null(b_79);
                if(((a_79 != NULL) && (a_79 != t)))
                  _fail(t);
                else
                  a_79 = t;
                t = not_null(b_79);
                return(t);
              }
              t = not_null(x_78);
              t = foldr_3_0(y_119, z_119, a_120, t);
              if(((b_79 != NULL) && (b_79 != t)))
                _fail(t);
              else
                b_79 = t;
              t = e_79(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_78), not_null(a_79));
              t = z_119(t);
            }
          }
          return(t);
        }
        if(((t_78 != NULL) && (t_78 != t)))
          _fail(t);
        else
          t_78 = t;
        t = not_null(t_78);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_78 = ATgetFirst((ATermList) t);
            v_78 = (ATerm) ATgetNext((ATermList) t);
            t = c_79(t);
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
    t = term_y_29;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_f_31;
    return(t);
  }
  t = foldr_3_0(d_3, add_0_0, e_3, t);
  return(t);
}
ATerm Arity_0_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  ATerm o_79 (ATerm t)
  {
    ATerm l_79 = NULL,m_79 = NULL;
    t = not_null(k_79);
    if(((m_79 != NULL) && (m_79 != t)))
      _fail(t);
    else
      m_79 = t;
    t = not_null(i_79);
    if(((l_79 != NULL) && (l_79 != t)))
      _fail(t);
    else
      l_79 = t;
    t = not_null(m_79);
    t = length_0_0(t);
    return(t);
  }
  ATerm p_79 (ATerm t)
  {
    ATerm n_79 = NULL;
    t = not_null(k_79);
    if(((n_79 != NULL) && (n_79 != t)))
      _fail(t);
    else
      n_79 = t;
    t = term_y_29;
    return(t);
  }
  if(((j_79 != NULL) && (j_79 != t)))
    _fail(t);
  else
    j_79 = t;
  t = not_null(j_79);
  if(match_cons(t, sym_FunType_2))
    {
      k_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
      t = o_79(t);
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          k_79 = ATgetArgument(t, 0);
          t = p_79(t);
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
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  ATerm j_80 (ATerm t)
  {
    ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
    t = not_null(x_79);
    if(((z_79 != NULL) && (z_79 != t)))
      _fail(t);
    else
      z_79 = t;
    t = not_null(y_79);
    if(((a_80 != NULL) && (a_80 != t)))
      _fail(t);
    else
      a_80 = t;
    t = not_null(w_79);
    {
      ATerm d_80 = NULL;
      ATerm k_80 (ATerm t)
      {
        ATerm e_80 = NULL,g_80 = NULL,i_80 = NULL;
        ATerm n_80 (ATerm t)
        {
          t = not_null(i_80);
          if(((c_80 != NULL) && (c_80 != t)))
            _fail(t);
          else
            c_80 = t;
          t = not_null(i_80);
          {
            ATerm q_35;
            q_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_79), not_null(b_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_35, not_null(c_80)));
            {
              ATerm f_3 (ATerm t)
              {
                t = term_x_34;
                return(t);
              }
              t = assert_1_0(f_3, t);
            }
            t = q_35;
          }
          return(t);
        }
        t = not_null(d_80);
        if(((b_80 != NULL) && (b_80 != t)))
          _fail(t);
        else
          b_80 = t;
        t = not_null(d_80);
        {
          ATerm s_35;
          s_35 = t;
          {
            ATerm f_80 = NULL;
            ATerm l_80 (ATerm t)
            {
              t = not_null(f_80);
              if(((e_80 != NULL) && (e_80 != t)))
                _fail(t);
              else
                e_80 = t;
              t = not_null(f_80);
              return(t);
            }
            t = not_null(z_79);
            t = cify_0_0(t);
            if(((f_80 != NULL) && (f_80 != t)))
              _fail(t);
            else
              f_80 = t;
            t = l_80(t);
          }
          t = s_35;
          {
            ATerm h_80 = NULL;
            ATerm m_80 (ATerm t)
            {
              t = not_null(h_80);
              if(((g_80 != NULL) && (g_80 != t)))
                _fail(t);
              else
                g_80 = t;
              t = not_null(h_80);
              return(t);
            }
            t = not_null(b_80);
            t = int_to_string_0_0(t);
            if(((h_80 != NULL) && (h_80 != t)))
              _fail(t);
            else
              h_80 = t;
            t = m_80(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_80)), term_u_35), not_null(e_80)), term_t_35);
            t = concat_strings_0_0(t);
            if(((i_80 != NULL) && (i_80 != t)))
              _fail(t);
            else
              i_80 = t;
            t = n_80(t);
          }
        }
        return(t);
      }
      t = not_null(a_80);
      t = Arity_0_0(t);
      if(((d_80 != NULL) && (d_80 != t)))
        _fail(t);
      else
        d_80 = t;
      t = k_80(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_80)), term_a_10)));
    }
    return(t);
  }
  if(((w_79 != NULL) && (w_79 != t)))
    _fail(t);
  else
    w_79 = t;
  t = not_null(w_79);
  if(match_cons(t, sym_OpDecl_2))
    {
      x_79 = ATgetArgument(t, 0);
      y_79 = ATgetArgument(t, 1);
      t = j_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL;
  ATerm a_82 (ATerm t)
  {
    ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,y_81 = NULL;
    t = not_null(z_80);
    if(((b_81 != NULL) && (b_81 != t)))
      _fail(t);
    else
      b_81 = t;
    t = not_null(w_80);
    {
      ATerm y_35;
      y_35 = t;
      {
        ATerm w_81 = NULL;
        ATerm b_82 (ATerm t)
        {
          ATerm x_81 = NULL;
          ATerm c_82 (ATerm t)
          {
            t = not_null(x_81);
            if(((d_81 != NULL) && (d_81 != t)))
              _fail(t);
            else
              d_81 = t;
            t = not_null(x_81);
            return(t);
          }
          t = not_null(w_81);
          if(((c_81 != NULL) && (c_81 != t)))
            _fail(t);
          else
            c_81 = t;
          t = not_null(b_81);
          t = InitConstructors_0_0(t);
          if(((x_81 != NULL) && (x_81 != t)))
            _fail(t);
          else
            x_81 = t;
          t = c_82(t);
          return(t);
        }
        t = not_null(b_81);
        t = map_1_0(DeclareConstructor_0_0, t);
        if(((w_81 != NULL) && (w_81 != t)))
          _fail(t);
        else
          w_81 = t;
        t = b_82(t);
      }
      t = y_35;
      {
        ATerm z_81 = NULL;
        ATerm d_82 (ATerm t)
        {
          t = not_null(z_81);
          if(((y_81 != NULL) && (y_81 != t)))
            _fail(t);
          else
            y_81 = t;
          t = not_null(z_81);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_81), (ATerm) ATinsert(ATempty, not_null(d_81)));
        t = conc_0_0(t);
        if(((z_81 != NULL) && (z_81 != t)))
          _fail(t);
        else
          z_81 = t;
        t = d_82(t);
        t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(y_81));
      }
    }
    return(t);
  }
  if(((w_80 != NULL) && (w_80 != t)))
    _fail(t);
  else
    w_80 = t;
  t = not_null(w_80);
  if(match_cons(t, sym_Signature_1))
    {
      x_80 = ATgetArgument(t, 0);
      t = not_null(x_80);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_80 = ATgetFirst((ATermList) t);
          a_81 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_80);
          if(match_cons(t, sym_Constructors_1))
            {
              z_80 = ATgetArgument(t, 0);
              t = not_null(a_81);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = a_82(t);
                }
              else
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
  ATerm t_82 = NULL,w_82 = NULL,x_82 = NULL;
  ATerm i_83 (ATerm t)
  {
    ATerm y_82 = NULL,z_82 = NULL;
    t = not_null(x_82);
    if(((y_82 != NULL) && (y_82 != t)))
      _fail(t);
    else
      y_82 = t;
    t = not_null(w_82);
    {
      ATerm a_83 = NULL;
      ATerm m_83 (ATerm t)
      {
        t = not_null(a_83);
        if(((z_82 != NULL) && (z_82 != t)))
          _fail(t);
        else
          z_82 = t;
        t = not_null(a_83);
        return(t);
      }
      t = not_null(y_82);
      t = map_1_0(TranslateType_0_0, t);
      if(((a_83 != NULL) && (a_83 != t)))
        _fail(t);
      else
        a_83 = t;
      t = m_83(t);
      t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(z_82)));
    }
    return(t);
  }
  ATerm l_83 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  if(((w_82 != NULL) && (w_82 != t)))
    _fail(t);
  else
    w_82 = t;
  t = not_null(w_82);
  if(match_cons(t, sym_FunType_2))
    {
      x_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
      t = i_83(t);
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          x_82 = ATgetArgument(t, 0);
          t = l_83(t);
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
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  ATerm c_84 (ATerm t)
  {
    ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
    t = not_null(u_83);
    if(((x_83 != NULL) && (x_83 != t)))
      _fail(t);
    else
      x_83 = t;
    t = not_null(w_83);
    if(((y_83 != NULL) && (y_83 != t)))
      _fail(t);
    else
      y_83 = t;
    t = not_null(t_83);
    {
      ATerm a_84 = NULL;
      ATerm e_84 (ATerm t)
      {
        t = not_null(a_84);
        if(((z_83 != NULL) && (z_83 != t)))
          _fail(t);
        else
          z_83 = t;
        t = not_null(a_84);
        return(t);
      }
      t = not_null(y_83);
      t = map_1_0(TranslateType_0_0, t);
      if(((a_84 != NULL) && (a_84 != t)))
        _fail(t);
      else
        a_84 = t;
      t = e_84(t);
      t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_83)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(z_83)))));
    }
    return(t);
  }
  ATerm d_84 (ATerm t)
  {
    ATerm b_84 = NULL;
    t = not_null(u_83);
    if(((b_84 != NULL) && (b_84 != t)))
      _fail(t);
    else
      b_84 = t;
    t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_84)), term_a_10));
    return(t);
  }
  if(((t_83 != NULL) && (t_83 != t)))
    _fail(t);
  else
    t_83 = t;
  t = not_null(t_83);
  if(match_cons(t, sym_VarDec_2))
    {
      u_83 = ATgetArgument(t, 0);
      v_83 = ATgetArgument(t, 1);
      t = not_null(v_83);
      if(match_cons(t, sym_FunType_2))
        {
          w_83 = ATgetArgument(t, 0);
          s_83 = ATgetArgument(t, 1);
          t = c_84(t);
        }
      else
        {
          if(match_cons(t, sym_ConstType_1))
            {
              w_83 = ATgetArgument(t, 0);
              t = d_84(t);
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
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL;
  ATerm i_85 (ATerm t)
  {
    ATerm r_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL;
    t = not_null(n_84);
    if(((r_84 != NULL) && (r_84 != t)))
      _fail(t);
    else
      r_84 = t;
    t = not_null(o_84);
    if(((u_84 != NULL) && (u_84 != t)))
      _fail(t);
    else
      u_84 = t;
    t = not_null(p_84);
    if(((v_84 != NULL) && (v_84 != t)))
      _fail(t);
    else
      v_84 = t;
    t = not_null(m_84);
    {
      ATerm x_84 = NULL;
      ATerm k_85 (ATerm t)
      {
        t = not_null(x_84);
        if(((w_84 != NULL) && (w_84 != t)))
          _fail(t);
        else
          w_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_84), (ATerm) ATinsert(ATempty, term_z_9));
        t = conc_0_0(t);
        return(t);
      }
      t = not_null(u_84);
      t = map_1_0(TranslateVarDec_0_0, t);
      if(((x_84 != NULL) && (x_84 != t)))
        _fail(t);
      else
        x_84 = t;
      t = k_85(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(w_84))))));
    }
    return(t);
  }
  ATerm j_85 (ATerm t)
  {
    ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL;
    t = not_null(n_84);
    if(((y_84 != NULL) && (y_84 != t)))
      _fail(t);
    else
      y_84 = t;
    t = not_null(o_84);
    if(((z_84 != NULL) && (z_84 != t)))
      _fail(t);
    else
      z_84 = t;
    t = not_null(p_84);
    if(((a_85 != NULL) && (a_85 != t)))
      _fail(t);
    else
      a_85 = t;
    t = not_null(q_84);
    if(((b_85 != NULL) && (b_85 != t)))
      _fail(t);
    else
      b_85 = t;
    t = not_null(m_84);
    {
      ATerm f_85 = NULL;
      ATerm l_85 (ATerm t)
      {
        ATerm g_85 = NULL;
        ATerm m_85 (ATerm t)
        {
          ATerm h_85 = NULL;
          ATerm n_85 (ATerm t)
          {
            t = not_null(h_85);
            if(((e_85 != NULL) && (e_85 != t)))
              _fail(t);
            else
              e_85 = t;
            t = not_null(h_85);
            return(t);
          }
          t = not_null(g_85);
          if(((d_85 != NULL) && (d_85 != t)))
            _fail(t);
          else
            d_85 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_9)), not_null(d_85)), not_null(c_85));
          t = concat_0_0(t);
          if(((h_85 != NULL) && (h_85 != t)))
            _fail(t);
          else
            h_85 = t;
          t = n_85(t);
          return(t);
        }
        t = not_null(f_85);
        if(((c_85 != NULL) && (c_85 != t)))
          _fail(t);
        else
          c_85 = t;
        t = not_null(a_85);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((g_85 != NULL) && (g_85 != t)))
          _fail(t);
        else
          g_85 = t;
        t = m_85(t);
        return(t);
      }
      t = not_null(z_84);
      t = map_1_0(TranslateVarDec_0_0, t);
      if(((f_85 != NULL) && (f_85 != t)))
        _fail(t);
      else
        f_85 = t;
      t = l_85(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(e_85))))));
    }
    return(t);
  }
  if(((m_84 != NULL) && (m_84 != t)))
    _fail(t);
  else
    m_84 = t;
  t = not_null(m_84);
  if(match_cons(t, sym_SDef_3))
    {
      n_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
      p_84 = ATgetArgument(t, 2);
      t = i_85(t);
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_84 = ATgetArgument(t, 0);
          o_84 = ATgetArgument(t, 1);
          p_84 = ATgetArgument(t, 2);
          q_84 = ATgetArgument(t, 3);
          t = j_85(t);
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
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL;
  ATerm x_86 (ATerm t)
  {
    ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,u_86 = NULL;
    t = not_null(d_86);
    if(((k_86 != NULL) && (k_86 != t)))
      _fail(t);
    else
      k_86 = t;
    t = not_null(i_86);
    if(((l_86 != NULL) && (l_86 != t)))
      _fail(t);
    else
      l_86 = t;
    t = not_null(a_86);
    {
      ATerm z_35;
      z_35 = t;
      {
        ATerm o_86 = NULL;
        ATerm y_86 (ATerm t)
        {
          ATerm t_86 = NULL;
          ATerm b_87 (ATerm t)
          {
            t = not_null(t_86);
            if(((n_86 != NULL) && (n_86 != t)))
              _fail(t);
            else
              n_86 = t;
            t = not_null(t_86);
            return(t);
          }
          t = not_null(o_86);
          if(((m_86 != NULL) && (m_86 != t)))
            _fail(t);
          else
            m_86 = t;
          t = term_o_9;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_config_0_0(t);
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm p_86 = NULL;
                    ATerm q_86 = NULL,s_86 = NULL;
                    ATerm a_87 (ATerm t)
                    {
                      t = not_null(s_86);
                      if(((p_86 != NULL) && (p_86 != t)))
                        _fail(t);
                      else
                        p_86 = t;
                      t = not_null(s_86);
                      return(t);
                    }
                    ATerm r_86 = NULL;
                    ATerm z_86 (ATerm t)
                    {
                      t = not_null(r_86);
                      if(((q_86 != NULL) && (q_86 != t)))
                        _fail(t);
                      else
                        q_86 = t;
                      t = not_null(r_86);
                      return(t);
                    }
                    if(((r_86 != NULL) && (r_86 != t)))
                      _fail(t);
                    else
                      r_86 = t;
                    t = z_86(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_c_36, not_null(q_86));
                    t = conc_strings_0_0(t);
                    if(((s_86 != NULL) && (s_86 != t)))
                      _fail(t);
                    else
                      s_86 = t;
                    t = a_87(t);
                    t = (ATerm) ATmakeAppl(sym_Include_1, not_null(p_86));
                    return(t);
                  }
                  t = map_1_0(g_3, t);
                }
                ;
                LocalPopChoice(b_36);
              }
            else
              {
                t = a_36;
                t = (ATerm) ATempty;
              }
            if(((t_86 != NULL) && (t_86 != t)))
              _fail(t);
            else
              t_86 = t;
            t = b_87(t);
          }
          return(t);
        }
        t = not_null(l_86);
        t = map_1_0(SDefToDeclaration_0_0, t);
        if(((o_86 != NULL) && (o_86 != t)))
          _fail(t);
        else
          o_86 = t;
        t = y_86(t);
      }
      t = z_35;
      {
        ATerm v_86 = NULL;
        ATerm c_87 (ATerm t)
        {
          t = not_null(v_86);
          if(((u_86 != NULL) && (u_86 != t)))
            _fail(t);
          else
            u_86 = t;
          t = not_null(v_86);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(l_86)), term_c_39)), not_null(m_86)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_38), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_u_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_36, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_36, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_n_36), term_p_36, term_a_10))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_36), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_w_38))), term_j_34)))))))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(k_86))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_36, (ATerm) ATinsert(ATempty, term_i_36)))), not_null(n_86));
        t = concat_0_0(t);
        if(((v_86 != NULL) && (v_86 != t)))
          _fail(t);
        else
          v_86 = t;
        t = c_87(t);
        t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(u_86));
      }
    }
    return(t);
  }
  if(((a_86 != NULL) && (a_86 != t)))
    _fail(t);
  else
    a_86 = t;
  t = not_null(a_86);
  if(match_cons(t, sym_Specification_1))
    {
      b_86 = ATgetArgument(t, 0);
      t = not_null(b_86);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_86 = ATgetFirst((ATermList) t);
          e_86 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(c_86);
          if(match_cons(t, sym_Signature_1))
            {
              d_86 = ATgetArgument(t, 0);
              t = not_null(e_86);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_86 = ATgetFirst((ATermList) t);
                  j_86 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(h_86);
                  if(match_cons(t, sym_Strategies_1))
                    {
                      i_86 = ATgetArgument(t, 0);
                      t = not_null(j_86);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = x_86(t);
                        }
                      else
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
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  ATerm j_87 (ATerm t)
  {
    ATerm i_87 = NULL;
    t = not_null(h_87);
    if(((i_87 != NULL) && (i_87 != t)))
      _fail(t);
    else
      i_87 = t;
    t = not_null(i_87);
    return(t);
  }
  if(((f_87 != NULL) && (f_87 != t)))
    _fail(t);
  else
    f_87 = t;
  t = not_null(f_87);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_87 = ATgetFirst((ATermList) t);
      h_87 = (ATerm) ATgetNext((ATermList) t);
      t = j_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  ATerm u_87 (ATerm t)
  {
    ATerm q_87 = NULL,r_87 = NULL;
    t = not_null(o_87);
    if(((q_87 != NULL) && (q_87 != t)))
      _fail(t);
    else
      q_87 = t;
    t = not_null(p_87);
    if(((r_87 != NULL) && (r_87 != t)))
      _fail(t);
    else
      r_87 = t;
    t = not_null(n_87);
    {
      ATerm d_39;
      d_39 = t;
      {
        ATerm s_87 = NULL;
        ATerm t_87 = NULL;
        ATerm v_87 (ATerm t)
        {
          t = not_null(t_87);
          if(((s_87 != NULL) && (s_87 != t)))
            _fail(t);
          else
            s_87 = t;
          t = not_null(t_87);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_87), not_null(r_87));
        {
          ATerm e_39 = t;
          int f_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(f_39);
            }
          else
            {
              t = e_39;
              t = (ATerm) ATempty;
            }
          if(((t_87 != NULL) && (t_87 != t)))
            _fail(t);
          else
            t_87 = t;
          t = v_87(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(q_87), not_null(r_87), not_null(s_87));
        t = table_put_0_0(t);
      }
      t = d_39;
    }
    return(t);
  }
  if(((n_87 != NULL) && (n_87 != t)))
    _fail(t);
  else
    n_87 = t;
  t = not_null(n_87);
  if(match_cons(t, sym__2))
    {
      o_87 = ATgetArgument(t, 0);
      p_87 = ATgetArgument(t, 1);
      t = u_87(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_134 (ATerm), ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  ATerm g_39;
  g_39 = t;
  {
    ATerm d_88 = NULL;
    ATerm j_88 (ATerm t)
    {
      ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
      ATerm k_88 (ATerm t)
      {
        t = not_null(f_88);
        if(((b_88 != NULL) && (b_88 != t)))
          _fail(t);
        else
          b_88 = t;
        t = not_null(g_88);
        if(((a_88 != NULL) && (a_88 != t)))
          _fail(t);
        else
          a_88 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(c_88), term_h_39, not_null(a_88));
        t = table_put_0_0(t);
        t = not_null(b_88);
        {
          ATerm h_3 (ATerm t)
          {
            ATerm h_88 = NULL;
            ATerm l_88 (ATerm t)
            {
              ATerm i_88 = NULL;
              t = not_null(h_88);
              if(((i_88 != NULL) && (i_88 != t)))
                _fail(t);
              else
                i_88 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_88), not_null(i_88));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((h_88 != NULL) && (h_88 != t)))
              _fail(t);
            else
              h_88 = t;
            t = l_88(t);
            return(t);
          }
          t = map_1_0(h_3, t);
        }
        return(t);
      }
      t = not_null(d_88);
      if(((c_88 != NULL) && (c_88 != t)))
        _fail(t);
      else
        c_88 = t;
      t = not_null(d_88);
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_88), term_h_39);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((e_88 != NULL) && (e_88 != t)))
          _fail(t);
        else
          e_88 = t;
        t = not_null(e_88);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_88 = ATgetFirst((ATermList) t);
            g_88 = (ATerm) ATgetNext((ATermList) t);
            t = k_88(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = l_134(t);
    if(((d_88 != NULL) && (d_88 != t)))
      _fail(t);
    else
      d_88 = t;
    t = j_88(t);
  }
  t = g_39;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm k_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_106(t);
      t = a_107(t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = k_39;
      t = a_107(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm o_88 = NULL;
  ATerm p_39;
  p_39 = t;
  {
    ATerm p_88 = NULL;
    ATerm s_88 (ATerm t)
    {
      ATerm q_88 = NULL;
      t = not_null(p_88);
      if(((o_88 != NULL) && (o_88 != t)))
        _fail(t);
      else
        o_88 = t;
      t = not_null(p_88);
      {
        ATerm r_88 = NULL;
        ATerm t_88 (ATerm t)
        {
          t = not_null(r_88);
          if(((q_88 != NULL) && (q_88 != t)))
            _fail(t);
          else
            q_88 = t;
          t = not_null(r_88);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), term_h_39);
        {
          ATerm q_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(r_39);
            }
          else
            {
              t = q_39;
              t = (ATerm) ATempty;
            }
          if(((r_88 != NULL) && (r_88 != t)))
            _fail(t);
          else
            r_88 = t;
          t = t_88(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(o_88), term_h_39, (ATerm) ATinsert(CheckATermList(not_null(q_88)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = k_134(t);
    if(((p_88 != NULL) && (p_88 != t)))
      _fail(t);
    else
      p_88 = t;
    t = s_88(t);
  }
  t = p_39;
  return(t);
}
ATerm scope_2_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm t)
{
  t = begin_scope_1_0(m_134, t);
  {
    ATerm i_3 (ATerm t)
    {
      t = end_scope_1_0(m_134, t);
      return(t);
    }
    t = restore_always_2_0(n_134, i_3, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm o_134 (ATerm), ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  ATerm l_89 (ATerm t)
  {
    ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
    t = not_null(a_89);
    if(((c_89 != NULL) && (c_89 != t)))
      _fail(t);
    else
      c_89 = t;
    t = not_null(b_89);
    if(((d_89 != NULL) && (d_89 != t)))
      _fail(t);
    else
      d_89 = t;
    t = not_null(z_88);
    {
      ATerm s_39;
      s_39 = t;
      {
        ATerm h_89 = NULL;
        ATerm m_89 (ATerm t)
        {
          ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
          ATerm n_89 (ATerm t)
          {
            t = not_null(j_89);
            if(((f_89 != NULL) && (f_89 != t)))
              _fail(t);
            else
              f_89 = t;
            t = not_null(k_89);
            if(((g_89 != NULL) && (g_89 != t)))
              _fail(t);
            else
              g_89 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_89), term_h_39, (ATerm) ATinsert(CheckATermList(not_null(g_89)), (ATerm) ATinsert(CheckATermList(not_null(f_89)), not_null(c_89))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(h_89);
          if(((e_89 != NULL) && (e_89 != t)))
            _fail(t);
          else
            e_89 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(e_89), not_null(c_89), not_null(d_89));
          t = table_push_0_0(t);
          {
            ATerm t_39 = t;
            int u_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_89), term_h_39);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(u_39);
              }
            else
              {
                t = t_39;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((i_89 != NULL) && (i_89 != t)))
              _fail(t);
            else
              i_89 = t;
            t = not_null(i_89);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_89 = ATgetFirst((ATermList) t);
                k_89 = (ATerm) ATgetNext((ATermList) t);
                t = n_89(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = o_134(t);
        if(((h_89 != NULL) && (h_89 != t)))
          _fail(t);
        else
          h_89 = t;
        t = m_89(t);
      }
      t = s_39;
    }
    return(t);
  }
  if(((z_88 != NULL) && (z_88 != t)))
    _fail(t);
  else
    z_88 = t;
  t = not_null(z_88);
  if(match_cons(t, sym__2))
    {
      a_89 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
      t = l_89(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL;
  ATerm v_39;
  v_39 = t;
  {
    ATerm s_89 = NULL;
    ATerm u_89 (ATerm t)
    {
      ATerm t_89 = NULL;
      ATerm v_89 (ATerm t)
      {
        t = not_null(t_89);
        if(((r_89 != NULL) && (r_89 != t)))
          _fail(t);
        else
          r_89 = t;
        t = not_null(t_89);
        return(t);
      }
      t = not_null(s_89);
      if(((q_89 != NULL) && (q_89 != t)))
        _fail(t);
      else
        q_89 = t;
      t = term_r_23;
      if(((t_89 != NULL) && (t_89 != t)))
        _fail(t);
      else
        t_89 = t;
      t = v_89(t);
      return(t);
    }
    t = term_x_39;
    if(((s_89 != NULL) && (s_89 != t)))
      _fail(t);
    else
      s_89 = t;
    t = u_89(t);
  }
  t = v_39;
  {
    ATerm y_39;
    y_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), (ATerm) ATmakeAppl(sym_Defined_2, term_z_39, not_null(r_89)));
    {
      ATerm j_3 (ATerm t)
      {
        t = term_q_15;
        return(t);
      }
      t = assert_1_0(j_3, t);
    }
    t = y_39;
  }
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  {
    ATerm z_89 (ATerm t)
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
          ATerm a_40 = t;
          int b_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0_0(t);
              ;
              LocalPopChoice(b_40);
            }
          else
            {
              t = a_40;
              {
                ATerm c_40 = t;
                int d_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0_0(t);
                    ;
                    LocalPopChoice(d_40);
                  }
                else
                  {
                    t = c_40;
                    {
                      ATerm e_40 = t;
                      int f_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0_0(t);
                          ;
                          LocalPopChoice(f_40);
                        }
                      else
                        {
                          t = e_40;
                          {
                            ATerm g_40 = t;
                            int h_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = TranslateStratMatchGuard_0_0(t);
                                ;
                                LocalPopChoice(h_40);
                              }
                            else
                              {
                                t = g_40;
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
        t = SRTS_all(z_89, t);
        t = repeat_1_0(Csimplify_0_0, t);
        return(t);
      }
      t = scope_2_0(k_3, l_3, t);
      return(t);
    }
    t = z_89(t);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm y_89 = NULL;
          ATerm a_90 (ATerm t)
          {
            t = not_null(y_89);
            t = init_cached_terms_0_0(t);
            return(t);
          }
          if(((y_89 != NULL) && (y_89 != t)))
            _fail(t);
          else
            y_89 = t;
          t = not_null(y_89);
          if(match_cons(t, sym_InitCachedTerms_0))
            {
              t = a_90(t);
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
  ATerm i_40;
  i_40 = t;
  {
    ATerm c_90 = NULL;
    ATerm d_90 = NULL;
    ATerm e_90 (ATerm t)
    {
      t = not_null(d_90);
      if(((c_90 != NULL) && (c_90 != t)))
        _fail(t);
      else
        c_90 = t;
      t = not_null(d_90);
      return(t);
    }
    t = term_w_34;
    t = whoami_0_0(t);
    if(((d_90 != NULL) && (d_90 != t)))
      _fail(t);
    else
      d_90 = t;
    t = e_90(t);
    t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_40), not_null(c_90)), term_k_40));
    t = printnl_0_0(t);
    t = term_f_31;
    t = exit_0_0(t);
  }
  t = i_40;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  ATerm m_90 (ATerm t)
  {
    ATerm k_90 = NULL,l_90 = NULL;
    t = not_null(i_90);
    if(((k_90 != NULL) && (k_90 != t)))
      _fail(t);
    else
      k_90 = t;
    t = not_null(j_90);
    if(((l_90 != NULL) && (l_90 != t)))
      _fail(t);
    else
      l_90 = t;
    t = not_null(h_90);
    {
      ATerm m_40;
      m_40 = t;
      t = SSL_printnl(not_null(k_90), not_null(l_90));
      t = m_40;
    }
    return(t);
  }
  if(((h_90 != NULL) && (h_90 != t)))
    _fail(t);
  else
    h_90 = t;
  t = not_null(h_90);
  if(match_cons(t, sym__2))
    {
      i_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
      t = m_90(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm o_90 = NULL;
  ATerm q_90 (ATerm t)
  {
    ATerm p_90 = NULL;
    t = not_null(o_90);
    if(((p_90 != NULL) && (p_90 != t)))
      _fail(t);
    else
      p_90 = t;
    t = not_null(o_90);
    t = SSL_implode_string(not_null(p_90));
    return(t);
  }
  if(((o_90 != NULL) && (o_90 != t)))
    _fail(t);
  else
    o_90 = t;
  t = q_90(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
        ATerm z_90 (ATerm t)
        {
          ATerm w_90 = NULL,x_90 = NULL;
          t = not_null(u_90);
          if(((w_90 != NULL) && (w_90 != t)))
            _fail(t);
          else
            w_90 = t;
          t = not_null(v_90);
          if(((x_90 != NULL) && (x_90 != t)))
            _fail(t);
          else
            x_90 = t;
          t = not_null(w_90);
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(x_90);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(p_3, t);
          }
          return(t);
        }
        if(((t_90 != NULL) && (t_90 != t)))
          _fail(t);
        else
          t_90 = t;
        t = not_null(t_90);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_90 = ATgetFirst((ATermList) t);
            v_90 = (ATerm) ATgetNext((ATermList) t);
            t = z_90(t);
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
  ATerm f_91 = NULL;
  ATerm n_91 (ATerm t)
  {
    ATerm g_91 = NULL,h_91 = NULL;
    t = not_null(f_91);
    if(((g_91 != NULL) && (g_91 != t)))
      _fail(t);
    else
      g_91 = t;
    t = not_null(f_91);
    {
      ATerm i_91 = NULL;
      ATerm o_91 (ATerm t)
      {
        ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
        ATerm p_91 (ATerm t)
        {
          t = not_null(m_91);
          if(((h_91 != NULL) && (h_91 != t)))
            _fail(t);
          else
            h_91 = t;
          t = not_null(k_91);
          return(t);
        }
        t = not_null(i_91);
        if(((j_91 != NULL) && (j_91 != t)))
          _fail(t);
        else
          j_91 = t;
        t = not_null(i_91);
        t = SSL_explode_term(not_null(j_91));
        if(((k_91 != NULL) && (k_91 != t)))
          _fail(t);
        else
          k_91 = t;
        t = not_null(k_91);
        if(match_cons(t, sym__2))
          {
            l_91 = ATgetArgument(t, 0);
            m_91 = ATgetArgument(t, 1);
            t = not_null(l_91);
            if(match_string(t, ""))
              {
                t = p_91(t);
              }
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
      t = not_null(g_91);
      if(((i_91 != NULL) && (i_91 != t)))
        _fail(t);
      else
        i_91 = t;
      t = o_91(t);
      t = not_null(h_91);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((f_91 != NULL) && (f_91 != t)))
    _fail(t);
  else
    f_91 = t;
  t = n_91(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm q_91 (ATerm t)
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_91, t);
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = Nil_0_0(t);
        t = l_114(t);
      }
    return(t);
  }
  t = q_91(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
  ATerm y_91 (ATerm t)
  {
    ATerm w_91 = NULL,x_91 = NULL;
    t = not_null(u_91);
    if(((x_91 != NULL) && (x_91 != t)))
      _fail(t);
    else
      x_91 = t;
    t = not_null(v_91);
    if(((w_91 != NULL) && (w_91 != t)))
      _fail(t);
    else
      w_91 = t;
    t = not_null(x_91);
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(w_91);
        return(t);
      }
      t = at_end_1_0(q_3, t);
    }
    return(t);
  }
  if(((t_91 != NULL) && (t_91 != t)))
    _fail(t);
  else
    t_91 = t;
  t = not_null(t_91);
  if(match_cons(t, sym__2))
    {
      u_91 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
      t = y_91(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm a_92 = NULL;
  ATerm c_92 (ATerm t)
  {
    ATerm b_92 = NULL;
    t = not_null(a_92);
    if(((b_92 != NULL) && (b_92 != t)))
      _fail(t);
    else
      b_92 = t;
    t = not_null(a_92);
    t = SSL_explode_string(not_null(b_92));
    return(t);
  }
  if(((a_92 != NULL) && (a_92 != t)))
    _fail(t);
  else
    a_92 = t;
  t = c_92(t);
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
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_3, t);
            ;
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            {
              ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
              ATerm u_92 (ATerm t)
              {
                ATerm m_92 = NULL;
                t = not_null(k_92);
                if(((m_92 != NULL) && (m_92 != t)))
                  _fail(t);
                else
                  m_92 = t;
                t = not_null(m_92);
                return(t);
              }
              ATerm v_92 (ATerm t)
              {
                ATerm n_92 = NULL;
                t = not_null(k_92);
                if(((n_92 != NULL) && (n_92 != t)))
                  _fail(t);
                else
                  n_92 = t;
                t = not_null(n_92);
                {
                  ATerm x_40 = t;
                  int y_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_40);
                    }
                  else
                    {
                      t = x_40;
                      {
                        ATerm s_3 (ATerm t)
                        {
                          t = term_z_40;
                          return(t);
                        }
                        t = debug_1_0(s_3, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm w_92 (ATerm t)
              {
                ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,s_92 = NULL;
                t = not_null(k_92);
                if(((o_92 != NULL) && (o_92 != t)))
                  _fail(t);
                else
                  o_92 = t;
                t = not_null(l_92);
                if(((p_92 != NULL) && (p_92 != t)))
                  _fail(t);
                else
                  p_92 = t;
                t = not_null(j_92);
                {
                  ATerm a_41;
                  a_41 = t;
                  {
                    ATerm r_92 = NULL;
                    ATerm x_92 (ATerm t)
                    {
                      t = not_null(r_92);
                      if(((q_92 != NULL) && (q_92 != t)))
                        _fail(t);
                      else
                        q_92 = t;
                      t = not_null(r_92);
                      return(t);
                    }
                    t = not_null(o_92);
                    t = eval_config_0_0(t);
                    if(((r_92 != NULL) && (r_92 != t)))
                      _fail(t);
                    else
                      r_92 = t;
                    t = x_92(t);
                  }
                  t = a_41;
                  {
                    ATerm t_92 = NULL;
                    ATerm y_92 (ATerm t)
                    {
                      t = not_null(t_92);
                      if(((s_92 != NULL) && (s_92 != t)))
                        _fail(t);
                      else
                        s_92 = t;
                      t = not_null(t_92);
                      return(t);
                    }
                    t = not_null(p_92);
                    t = eval_config_0_0(t);
                    if(((t_92 != NULL) && (t_92 != t)))
                      _fail(t);
                    else
                      t_92 = t;
                    t = y_92(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_92), not_null(s_92));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((j_92 != NULL) && (j_92 != t)))
                _fail(t);
              else
                j_92 = t;
              t = not_null(j_92);
              if(match_cons(t, sym_Path_1))
                {
                  k_92 = ATgetArgument(t, 0);
                  t = u_92(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_92 = ATgetArgument(t, 0);
                      t = v_92(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_92 = ATgetArgument(t, 0);
                          l_92 = ATgetArgument(t, 1);
                          t = w_92(t);
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
  ATerm b_93 = NULL;
  ATerm f_93 (ATerm t)
  {
    ATerm c_93 = NULL;
    t = not_null(b_93);
    if(((c_93 != NULL) && (c_93 != t)))
      _fail(t);
    else
      c_93 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(c_93));
    t = table_get_0_0(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm b_41;
          b_41 = t;
          {
            ATerm d_93 = NULL;
            ATerm e_93 = NULL;
            ATerm g_93 (ATerm t)
            {
              t = not_null(e_93);
              if(((d_93 != NULL) && (d_93 != t)))
                _fail(t);
              else
                d_93 = t;
              t = not_null(e_93);
              return(t);
            }
            if(((e_93 != NULL) && (e_93 != t)))
              _fail(t);
            else
              e_93 = t;
            t = g_93(t);
            t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(c_93), not_null(d_93));
            t = table_put_0_0(t);
          }
          t = b_41;
        }
        return(t);
      }
      t = try_1_0(t_3, t);
    }
    return(t);
  }
  if(((b_93 != NULL) && (b_93 != t)))
    _fail(t);
  else
    b_93 = t;
  t = f_93(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm c_41;
    c_41 = t;
    {
      ATerm i_93 = NULL;
      ATerm j_93 = NULL;
      ATerm k_93 (ATerm t)
      {
        t = not_null(j_93);
        if(((i_93 != NULL) && (i_93 != t)))
          _fail(t);
        else
          i_93 = t;
        t = not_null(j_93);
        return(t);
      }
      t = term_d_41;
      t = get_config_0_0(t);
      if(((j_93 != NULL) && (j_93 != t)))
        _fail(t);
      else
        j_93 = t;
      t = k_93(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), term_e_41);
      t = geq_0_0(t);
    }
    t = c_41;
    t = c_127(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  ATerm x_93 (ATerm t)
  {
    ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL;
    t = not_null(q_93);
    if(((t_93 != NULL) && (t_93 != t)))
      _fail(t);
    else
      t_93 = t;
    t = not_null(s_93);
    if(((u_93 != NULL) && (u_93 != t)))
      _fail(t);
    else
      u_93 = t;
    t = not_null(p_93);
    t = SSL_fputc(not_null(t_93), not_null(u_93));
    {
      ATerm w_93 = NULL;
      ATerm y_93 (ATerm t)
      {
        t = not_null(w_93);
        if(((v_93 != NULL) && (v_93 != t)))
          _fail(t);
        else
          v_93 = t;
        t = not_null(w_93);
        return(t);
      }
      if(((w_93 != NULL) && (w_93 != t)))
        _fail(t);
      else
        w_93 = t;
      t = y_93(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_93));
    }
    return(t);
  }
  if(((p_93 != NULL) && (p_93 != t)))
    _fail(t);
  else
    p_93 = t;
  t = not_null(p_93);
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
      t = not_null(r_93);
      if(match_cons(t, sym_Stream_1))
        {
          s_93 = ATgetArgument(t, 0);
          t = x_93(t);
        }
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
  ATerm d_94 = NULL,e_94 = NULL,h_94 = NULL,i_94 = NULL;
  ATerm n_94 (ATerm t)
  {
    ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
    t = not_null(h_94);
    if(((j_94 != NULL) && (j_94 != t)))
      _fail(t);
    else
      j_94 = t;
    t = not_null(i_94);
    if(((k_94 != NULL) && (k_94 != t)))
      _fail(t);
    else
      k_94 = t;
    t = not_null(d_94);
    t = SSL_write_term_to_stream_text(not_null(j_94), not_null(k_94));
    {
      ATerm m_94 = NULL;
      ATerm o_94 (ATerm t)
      {
        t = not_null(m_94);
        if(((l_94 != NULL) && (l_94 != t)))
          _fail(t);
        else
          l_94 = t;
        t = not_null(m_94);
        return(t);
      }
      if(((m_94 != NULL) && (m_94 != t)))
        _fail(t);
      else
        m_94 = t;
      t = o_94(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_94));
    }
    return(t);
  }
  if(((d_94 != NULL) && (d_94 != t)))
    _fail(t);
  else
    d_94 = t;
  t = not_null(d_94);
  if(match_cons(t, sym__2))
    {
      e_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
      t = not_null(e_94);
      if(match_cons(t, sym_Stream_1))
        {
          h_94 = ATgetArgument(t, 0);
          t = n_94(t);
        }
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
    ATerm q_94 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm r_94 = NULL;
      ATerm s_94 (ATerm t)
      {
        t = not_null(r_94);
        if(((q_94 != NULL) && (q_94 != t)))
          _fail(t);
        else
          q_94 = t;
        t = not_null(r_94);
        return(t);
      }
      if(((r_94 != NULL) && (r_94 != t)))
        _fail(t);
      else
        r_94 = t;
      t = s_94(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_41, not_null(q_94));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(v_3, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  ATerm f_95 (ATerm t)
  {
    ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
    t = not_null(z_94);
    if(((b_95 != NULL) && (b_95 != t)))
      _fail(t);
    else
      b_95 = t;
    t = not_null(a_95);
    if(((c_95 != NULL) && (c_95 != t)))
      _fail(t);
    else
      c_95 = t;
    t = not_null(x_94);
    t = SSL_write_term_to_stream_baf(not_null(b_95), not_null(c_95));
    {
      ATerm e_95 = NULL;
      ATerm g_95 (ATerm t)
      {
        t = not_null(e_95);
        if(((d_95 != NULL) && (d_95 != t)))
          _fail(t);
        else
          d_95 = t;
        t = not_null(e_95);
        return(t);
      }
      if(((e_95 != NULL) && (e_95 != t)))
        _fail(t);
      else
        e_95 = t;
      t = g_95(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_95));
    }
    return(t);
  }
  if(((x_94 != NULL) && (x_94 != t)))
    _fail(t);
  else
    x_94 = t;
  t = not_null(x_94);
  if(match_cons(t, sym__2))
    {
      y_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      t = not_null(y_94);
      if(match_cons(t, sym_Stream_1))
        {
          z_94 = ATgetArgument(t, 0);
          t = f_95(t);
        }
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
ATerm WriteToFile_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  ATerm u_95 (ATerm t)
  {
    ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,s_95 = NULL;
    t = not_null(m_95);
    if(((o_95 != NULL) && (o_95 != t)))
      _fail(t);
    else
      o_95 = t;
    t = not_null(n_95);
    if(((p_95 != NULL) && (p_95 != t)))
      _fail(t);
    else
      p_95 = t;
    t = not_null(o_95);
    {
      ATerm r_95 = NULL;
      ATerm v_95 (ATerm t)
      {
        t = not_null(r_95);
        if(((q_95 != NULL) && (q_95 != t)))
          _fail(t);
        else
          q_95 = t;
        t = not_null(r_95);
        return(t);
      }
      if(((r_95 != NULL) && (r_95 != t)))
        _fail(t);
      else
        r_95 = t;
      t = v_95(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), term_g_41);
      t = open_stream_0_0(t);
      {
        ATerm t_95 = NULL;
        ATerm w_95 (ATerm t)
        {
          t = not_null(t_95);
          if(((s_95 != NULL) && (s_95 != t)))
            _fail(t);
          else
            s_95 = t;
          t = not_null(t_95);
          return(t);
        }
        if(((t_95 != NULL) && (t_95 != t)))
          _fail(t);
        else
          t_95 = t;
        t = w_95(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_95), not_null(p_95));
        t = y_125(t);
        t = fclose_0_0(t);
        t = not_null(p_95);
      }
    }
    return(t);
  }
  if(((l_95 != NULL) && (l_95 != t)))
    _fail(t);
  else
    l_95 = t;
  t = not_null(l_95);
  if(match_cons(t, sym__2))
    {
      m_95 = ATgetArgument(t, 0);
      n_95 = ATgetArgument(t, 1);
      t = u_95(t);
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
  ATerm b_96 = NULL;
  ATerm h_41;
  h_41 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm c_96 = NULL,d_96 = NULL;
            ATerm g_96 (ATerm t)
            {
              t = not_null(d_96);
              if(((b_96 != NULL) && (b_96 != t)))
                _fail(t);
              else
                b_96 = t;
              t = not_null(c_96);
              return(t);
            }
            if(((c_96 != NULL) && (c_96 != t)))
              _fail(t);
            else
              c_96 = t;
            t = not_null(c_96);
            if(match_cons(t, sym_Output_1))
              {
                d_96 = ATgetArgument(t, 0);
                t = g_96(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(x_3, t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          {
            ATerm e_96 = NULL;
            ATerm h_96 (ATerm t)
            {
              t = not_null(e_96);
              if(((b_96 != NULL) && (b_96 != t)))
                _fail(t);
              else
                b_96 = t;
              t = not_null(e_96);
              return(t);
            }
            t = term_k_41;
            if(((e_96 != NULL) && (e_96 != t)))
              _fail(t);
            else
              e_96 = t;
            t = h_96(t);
          }
        }
      return(t);
    }
    t = _2_0(w_3, _id, t);
  }
  t = h_41;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(b_96);
        return(t);
      }
      t = split_2_0(z_3, _id, t);
      return(t);
    }
    t = _2_0(_id, y_3, t);
    {
      ATerm l_41 = t;
      int m_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm f_96 = NULL;
              if(((f_96 != NULL) && (f_96 != t)))
                _fail(t);
              else
                f_96 = t;
              t = not_null(f_96);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(f_96);
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
          LocalPopChoice(m_41);
        }
      else
        {
          t = l_41;
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
ATerm apply_strategy_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm l_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  ATerm u_96 (ATerm t)
  {
    ATerm r_96 = NULL,s_96 = NULL;
    t = not_null(p_96);
    if(((r_96 != NULL) && (r_96 != t)))
      _fail(t);
    else
      r_96 = t;
    t = not_null(q_96);
    if(((s_96 != NULL) && (s_96 != t)))
      _fail(t);
    else
      s_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_96))), not_null(s_96));
    return(t);
  }
  ATerm n_41;
  n_41 = t;
  t = dtime_0_0(t);
  t = n_41;
  t = y_127(t);
  {
    ATerm o_41;
    o_41 = t;
    {
      ATerm m_96 = NULL;
      ATerm t_96 (ATerm t)
      {
        t = not_null(m_96);
        if(((l_96 != NULL) && (l_96 != t)))
          _fail(t);
        else
          l_96 = t;
        t = not_null(m_96);
        return(t);
      }
      t = dtime_0_0(t);
      if(((m_96 != NULL) && (m_96 != t)))
        _fail(t);
      else
        m_96 = t;
      t = t_96(t);
    }
    t = o_41;
    if(((o_96 != NULL) && (o_96 != t)))
      _fail(t);
    else
      o_96 = t;
    t = not_null(o_96);
    if(match_cons(t, sym__2))
      {
        p_96 = ATgetArgument(t, 0);
        q_96 = ATgetArgument(t, 1);
        t = u_96(t);
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
  ATerm y_96 = NULL,z_96 = NULL;
  ATerm e_97 (ATerm t)
  {
    ATerm a_97 = NULL;
    t = not_null(y_96);
    if(((a_97 != NULL) && (a_97 != t)))
      _fail(t);
    else
      a_97 = t;
    t = not_null(z_96);
    t = SSL_fclose(not_null(a_97));
    return(t);
  }
  ATerm f_97 (ATerm t)
  {
    ATerm d_97 = NULL;
    t = not_null(z_96);
    if(((d_97 != NULL) && (d_97 != t)))
      _fail(t);
    else
      d_97 = t;
    t = not_null(z_96);
    t = SSL_fclose(not_null(d_97));
    return(t);
  }
  if(((z_96 != NULL) && (z_96 != t)))
    _fail(t);
  else
    z_96 = t;
  t = not_null(z_96);
  if(match_cons(t, sym_Stream_1))
    {
      y_96 = ATgetArgument(t, 0);
      {
        ATerm p_41 = t;
        int q_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_97(t);
            ;
            LocalPopChoice(q_41);
          }
        else
          {
            t = p_41;
            t = f_97(t);
          }
      }
    }
  else
    {
      t = f_97(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL;
  ATerm l_97 (ATerm t)
  {
    ATerm k_97 = NULL;
    t = not_null(j_97);
    if(((k_97 != NULL) && (k_97 != t)))
      _fail(t);
    else
      k_97 = t;
    t = not_null(i_97);
    t = SSL_read_term_from_stream(not_null(k_97));
    return(t);
  }
  if(((i_97 != NULL) && (i_97 != t)))
    _fail(t);
  else
    i_97 = t;
  t = not_null(i_97);
  if(match_cons(t, sym_Stream_1))
    {
      j_97 = ATgetArgument(t, 0);
      t = l_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm r_41;
  r_41 = t;
  {
    ATerm o_97 = NULL,q_97 = NULL;
    ATerm s_41;
    s_41 = t;
    {
      ATerm p_97 = NULL;
      ATerm s_97 (ATerm t)
      {
        t = not_null(p_97);
        if(((o_97 != NULL) && (o_97 != t)))
          _fail(t);
        else
          o_97 = t;
        t = not_null(p_97);
        return(t);
      }
      t = k_125(t);
      if(((p_97 != NULL) && (p_97 != t)))
        _fail(t);
      else
        p_97 = t;
      t = s_97(t);
    }
    t = s_41;
    {
      ATerm r_97 = NULL;
      ATerm t_97 (ATerm t)
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
      t = t_97(t);
      t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_97)), not_null(o_97)));
      t = printnl_0_0(t);
    }
  }
  t = r_41;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
  ATerm e_98 (ATerm t)
  {
    ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
    t = not_null(y_97);
    if(((a_98 != NULL) && (a_98 != t)))
      _fail(t);
    else
      a_98 = t;
    t = not_null(z_97);
    if(((b_98 != NULL) && (b_98 != t)))
      _fail(t);
    else
      b_98 = t;
    t = not_null(x_97);
    t = SSL_fopen(not_null(a_98), not_null(b_98));
    {
      ATerm d_98 = NULL;
      ATerm f_98 (ATerm t)
      {
        t = not_null(d_98);
        if(((c_98 != NULL) && (c_98 != t)))
          _fail(t);
        else
          c_98 = t;
        t = not_null(d_98);
        return(t);
      }
      if(((d_98 != NULL) && (d_98 != t)))
        _fail(t);
      else
        d_98 = t;
      t = f_98(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_98));
    }
    return(t);
  }
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  t = not_null(x_97);
  if(match_cons(t, sym__2))
    {
      y_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
      t = e_98(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm h_98 = NULL;
  ATerm j_98 (ATerm t)
  {
    ATerm i_98 = NULL;
    t = not_null(h_98);
    if(((i_98 != NULL) && (i_98 != t)))
      _fail(t);
    else
      i_98 = t;
    t = not_null(h_98);
    t = SSL_is_string(not_null(i_98));
    return(t);
  }
  if(((h_98 != NULL) && (h_98 != t)))
    _fail(t);
  else
    h_98 = t;
  t = j_98(t);
  return(t);
}
ATerm _2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
  ATerm e_99 (ATerm t)
  {
    ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,y_98 = NULL;
    ATerm g_99 (ATerm t)
    {
      ATerm z_98 = NULL,a_99 = NULL;
      ATerm h_99 (ATerm t)
      {
        ATerm b_99 = NULL,c_99 = NULL;
        t = not_null(a_99);
        if(((b_99 != NULL) && (b_99 != t)))
          _fail(t);
        else
          b_99 = t;
        t = not_null(a_99);
        {
          ATerm d_99 = NULL;
          ATerm i_99 (ATerm t)
          {
            t = not_null(d_99);
            if(((c_99 != NULL) && (c_99 != t)))
              _fail(t);
            else
              c_99 = t;
            t = not_null(d_99);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_98), not_null(b_99)), not_null(w_98));
          if(((d_99 != NULL) && (d_99 != t)))
            _fail(t);
          else
            d_99 = t;
          t = i_99(t);
          t = not_null(c_99);
        }
        return(t);
      }
      t = not_null(y_98);
      if(((z_98 != NULL) && (z_98 != t)))
        _fail(t);
      else
        z_98 = t;
      t = not_null(v_98);
      t = k_83(t);
      if(((a_99 != NULL) && (a_99 != t)))
        _fail(t);
      else
        a_99 = t;
      t = h_99(t);
      return(t);
    }
    t = not_null(q_98);
    if(((t_98 != NULL) && (t_98 != t)))
      _fail(t);
    else
      t_98 = t;
    t = not_null(r_98);
    if(((u_98 != NULL) && (u_98 != t)))
      _fail(t);
    else
      u_98 = t;
    t = not_null(s_98);
    if(((v_98 != NULL) && (v_98 != t)))
      _fail(t);
    else
      v_98 = t;
    t = not_null(q_98);
    {
      ATerm x_98 = NULL;
      ATerm f_99 (ATerm t)
      {
        t = not_null(x_98);
        if(((w_98 != NULL) && (w_98 != t)))
          _fail(t);
        else
          w_98 = t;
        t = not_null(x_98);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_98));
      if(((x_98 != NULL) && (x_98 != t)))
        _fail(t);
      else
        x_98 = t;
      t = f_99(t);
      t = not_null(u_98);
      t = j_83(t);
      if(((y_98 != NULL) && (y_98 != t)))
        _fail(t);
      else
        y_98 = t;
      t = g_99(t);
    }
    return(t);
  }
  if(((q_98 != NULL) && (q_98 != t)))
    _fail(t);
  else
    q_98 = t;
  t = not_null(q_98);
  if(match_cons(t, sym__2))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
      t = e_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_99 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_99 = NULL;
    ATerm m_99 (ATerm t)
    {
      t = not_null(l_99);
      if(((k_99 != NULL) && (k_99 != t)))
        _fail(t);
      else
        k_99 = t;
      t = not_null(l_99);
      return(t);
    }
    if(((l_99 != NULL) && (l_99 != t)))
      _fail(t);
    else
      l_99 = t;
    t = m_99(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_99));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_99 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm p_99 = NULL;
    ATerm q_99 (ATerm t)
    {
      t = not_null(p_99);
      if(((o_99 != NULL) && (o_99 != t)))
        _fail(t);
      else
        o_99 = t;
      t = not_null(p_99);
      return(t);
    }
    if(((p_99 != NULL) && (p_99 != t)))
      _fail(t);
    else
      p_99 = t;
    t = q_99(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_99));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_99 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm v_99 = NULL;
    ATerm w_99 (ATerm t)
    {
      t = not_null(v_99);
      if(((u_99 != NULL) && (u_99 != t)))
        _fail(t);
      else
        u_99 = t;
      t = not_null(v_99);
      return(t);
    }
    if(((v_99 != NULL) && (v_99 != t)))
      _fail(t);
    else
      v_99 = t;
    t = w_99(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_99));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_100 = NULL;
  ATerm c_100 (ATerm t)
  {
    t = not_null(b_100);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm d_100 (ATerm t)
  {
    t = not_null(b_100);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm e_100 (ATerm t)
  {
    t = not_null(b_100);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  t = not_null(b_100);
  if(match_cons(t, sym_stderr_0))
    {
      t = c_100(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_100(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = e_100(t);
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
  ATerm l_100 = NULL;
  ATerm w_100 (ATerm t)
  {
    ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
    t = not_null(l_100);
    if(((m_100 != NULL) && (m_100 != t)))
      _fail(t);
    else
      m_100 = t;
    t = not_null(l_100);
    {
      ATerm p_100 = NULL;
      ATerm x_100 (ATerm t)
      {
        ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
        ATerm y_100 (ATerm t)
        {
          t = not_null(u_100);
          if(((o_100 != NULL) && (o_100 != t)))
            _fail(t);
          else
            o_100 = t;
          t = not_null(v_100);
          if(((n_100 != NULL) && (n_100 != t)))
            _fail(t);
          else
            n_100 = t;
          t = not_null(r_100);
          return(t);
        }
        t = not_null(p_100);
        if(((q_100 != NULL) && (q_100 != t)))
          _fail(t);
        else
          q_100 = t;
        t = not_null(p_100);
        t = SSL_explode_term(not_null(q_100));
        if(((r_100 != NULL) && (r_100 != t)))
          _fail(t);
        else
          r_100 = t;
        t = not_null(r_100);
        if(match_cons(t, sym__2))
          {
            s_100 = ATgetArgument(t, 0);
            t_100 = ATgetArgument(t, 1);
            t = not_null(s_100);
            if(match_string(t, ""))
              {
                t = not_null(t_100);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_100 = ATgetFirst((ATermList) t);
                    v_100 = (ATerm) ATgetNext((ATermList) t);
                    t = y_100(t);
                  }
                else
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
      t = not_null(m_100);
      if(((p_100 != NULL) && (p_100 != t)))
        _fail(t);
      else
        p_100 = t;
      t = x_100(t);
      t = not_null(o_100);
    }
    return(t);
  }
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = w_100(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL;
  ATerm j_101 (ATerm t)
  {
    t = not_null(d_101);
    {
      ATerm t_41 = t;
      int u_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(u_41);
        }
      else
        {
          t = t_41;
          {
            ATerm v_41 = t;
            int w_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_4 (ATerm t)
                {
                  ATerm g_101 = NULL,h_101 = NULL;
                  ATerm k_101 (ATerm t)
                  {
                    ATerm i_101 = NULL;
                    t = not_null(h_101);
                    if(((i_101 != NULL) && (i_101 != t)))
                      _fail(t);
                    else
                      i_101 = t;
                    t = not_null(i_101);
                    return(t);
                  }
                  if(((g_101 != NULL) && (g_101 != t)))
                    _fail(t);
                  else
                    g_101 = t;
                  t = not_null(g_101);
                  if(match_cons(t, sym_Path_1))
                    {
                      h_101 = ATgetArgument(t, 0);
                      t = k_101(t);
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
                LocalPopChoice(w_41);
              }
            else
              {
                t = v_41;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((d_101 != NULL) && (d_101 != t)))
    _fail(t);
  else
    d_101 = t;
  t = not_null(d_101);
  if(match_cons(t, sym__2))
    {
      e_101 = ATgetArgument(t, 0);
      f_101 = ATgetArgument(t, 1);
      t = j_101(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_101 = NULL;
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_101 = NULL;
      ATerm o_101 = NULL;
      ATerm r_101 (ATerm t)
      {
        t = not_null(o_101);
        if(((n_101 != NULL) && (n_101 != t)))
          _fail(t);
        else
          n_101 = t;
        t = not_null(o_101);
        return(t);
      }
      if(((o_101 != NULL) && (o_101 != t)))
        _fail(t);
      else
        o_101 = t;
      t = r_101(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_101), term_z_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm d_4 (ATerm t)
        {
          t = term_a_42;
          return(t);
        }
        t = debug_1_0(d_4, t);
        _fail(t);
      }
    }
  {
    ATerm b_42;
    b_42 = t;
    {
      ATerm q_101 = NULL;
      ATerm s_101 (ATerm t)
      {
        t = not_null(q_101);
        if(((p_101 != NULL) && (p_101 != t)))
          _fail(t);
        else
          p_101 = t;
        t = not_null(q_101);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((q_101 != NULL) && (q_101 != t)))
        _fail(t);
      else
        q_101 = t;
      t = s_101(t);
    }
    t = b_42;
    t = fclose_0_0(t);
    t = not_null(p_101);
  }
  return(t);
}
ATerm split_2_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t)
{
  ATerm v_101 = NULL,x_101 = NULL;
  ATerm c_42;
  c_42 = t;
  {
    ATerm w_101 = NULL;
    ATerm z_101 (ATerm t)
    {
      t = not_null(w_101);
      if(((v_101 != NULL) && (v_101 != t)))
        _fail(t);
      else
        v_101 = t;
      t = not_null(w_101);
      return(t);
    }
    t = l_121(t);
    if(((w_101 != NULL) && (w_101 != t)))
      _fail(t);
    else
      w_101 = t;
    t = z_101(t);
  }
  t = c_42;
  {
    ATerm y_101 = NULL;
    ATerm a_102 (ATerm t)
    {
      t = not_null(y_101);
      if(((x_101 != NULL) && (x_101 != t)))
        _fail(t);
      else
        x_101 = t;
      t = not_null(y_101);
      return(t);
    }
    t = m_121(t);
    if(((y_101 != NULL) && (y_101 != t)))
      _fail(t);
    else
      y_101 = t;
    t = a_102(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_101), not_null(x_101));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm e_102 = NULL;
  ATerm d_42;
  d_42 = t;
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_102 = NULL,g_102 = NULL;
          ATerm i_102 (ATerm t)
          {
            t = not_null(g_102);
            if(((e_102 != NULL) && (e_102 != t)))
              _fail(t);
            else
              e_102 = t;
            t = not_null(f_102);
            return(t);
          }
          if(((f_102 != NULL) && (f_102 != t)))
            _fail(t);
          else
            f_102 = t;
          t = not_null(f_102);
          if(match_cons(t, sym_Input_1))
            {
              g_102 = ATgetArgument(t, 0);
              t = i_102(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(e_4, t);
        ;
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        {
          ATerm h_102 = NULL;
          ATerm j_102 (ATerm t)
          {
            t = not_null(h_102);
            if(((e_102 != NULL) && (e_102 != t)))
              _fail(t);
            else
              e_102 = t;
            t = not_null(h_102);
            return(t);
          }
          t = term_g_42;
          if(((h_102 != NULL) && (h_102 != t)))
            _fail(t);
          else
            h_102 = t;
          t = j_102(t);
        }
      }
  }
  t = d_42;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(e_102);
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
    ATerm m_102 = NULL;
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    t = not_null(m_102);
    if(match_string(t, "-k"))
      {
        t = not_null(m_102);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(m_102);
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
    ATerm h_42;
    h_42 = t;
    {
      ATerm n_102 = NULL;
      ATerm o_102 = NULL;
      ATerm p_102 (ATerm t)
      {
        t = not_null(o_102);
        if(((n_102 != NULL) && (n_102 != t)))
          _fail(t);
        else
          n_102 = t;
        t = not_null(o_102);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((o_102 != NULL) && (o_102 != t)))
        _fail(t);
      else
        o_102 = t;
      t = p_102(t);
      t = (ATerm) ATmakeAppl(sym__2, term_i_42, not_null(n_102));
      t = set_config_0_0(t);
    }
    t = h_42;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_j_42;
    return(t);
  }
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm r_102 = NULL;
  ATerm t_102 (ATerm t)
  {
    ATerm s_102 = NULL;
    t = not_null(r_102);
    if(((s_102 != NULL) && (s_102 != t)))
      _fail(t);
    else
      s_102 = t;
    t = not_null(r_102);
    t = SSL_string_to_int(not_null(s_102));
    return(t);
  }
  if(((r_102 != NULL) && (r_102 != t)))
    _fail(t);
  else
    r_102 = t;
  t = t_102(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm z_102 = NULL;
        if(((z_102 != NULL) && (z_102 != t)))
          _fail(t);
        else
          z_102 = t;
        t = not_null(z_102);
        if(match_string(t, "-S"))
          {
            t = not_null(z_102);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(z_102);
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
        t = term_m_42;
        t = set_config_0_0(t);
        t = term_n_42;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_o_42;
        return(t);
      }
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(l_42);
    }
  else
    {
      t = k_42;
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm a_103 = NULL;
              if(((a_103 != NULL) && (a_103 != t)))
                _fail(t);
              else
                a_103 = t;
              t = not_null(a_103);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(a_103);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm d_103 = NULL;
              ATerm r_42;
              r_42 = t;
              {
                ATerm b_103 = NULL;
                ATerm c_103 = NULL;
                ATerm g_103 (ATerm t)
                {
                  t = not_null(c_103);
                  if(((b_103 != NULL) && (b_103 != t)))
                    _fail(t);
                  else
                    b_103 = t;
                  t = not_null(c_103);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((c_103 != NULL) && (c_103 != t)))
                  _fail(t);
                else
                  c_103 = t;
                t = g_103(t);
                t = (ATerm) ATmakeAppl(sym__2, term_d_41, not_null(b_103));
                t = set_config_0_0(t);
              }
              t = r_42;
              {
                ATerm e_103 = NULL;
                ATerm h_103 (ATerm t)
                {
                  t = not_null(e_103);
                  if(((d_103 != NULL) && (d_103 != t)))
                    _fail(t);
                  else
                    d_103 = t;
                  t = not_null(e_103);
                  return(t);
                }
                if(((e_103 != NULL) && (e_103 != t)))
                  _fail(t);
                else
                  e_103 = t;
                t = h_103(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_103));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_s_42;
              return(t);
            }
            t = ArgOption_3_0(m_4, n_4, o_4, t);
            ;
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm f_103 = NULL;
                if(((f_103 != NULL) && (f_103 != t)))
                  _fail(t);
                else
                  f_103 = t;
                t = not_null(f_103);
                if(match_string(t, "-s"))
                  {
                    t = not_null(f_103);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_u_42;
                t = set_config_0_0(t);
                t = term_v_42;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_w_42;
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
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm l_103 = NULL;
    if(((l_103 != NULL) && (l_103 != t)))
      _fail(t);
    else
      l_103 = t;
    t = not_null(l_103);
    if(match_string(t, "-o"))
      {
        t = not_null(l_103);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(l_103);
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
    ATerm o_103 = NULL;
    ATerm z_42;
    z_42 = t;
    {
      ATerm m_103 = NULL;
      ATerm n_103 = NULL;
      ATerm q_103 (ATerm t)
      {
        t = not_null(n_103);
        if(((m_103 != NULL) && (m_103 != t)))
          _fail(t);
        else
          m_103 = t;
        t = not_null(n_103);
        return(t);
      }
      if(((n_103 != NULL) && (n_103 != t)))
        _fail(t);
      else
        n_103 = t;
      t = q_103(t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_43, not_null(m_103));
      t = set_config_0_0(t);
    }
    t = z_42;
    {
      ATerm p_103 = NULL;
      ATerm r_103 (ATerm t)
      {
        t = not_null(p_103);
        if(((o_103 != NULL) && (o_103 != t)))
          _fail(t);
        else
          o_103 = t;
        t = not_null(p_103);
        return(t);
      }
      if(((p_103 != NULL) && (p_103 != t)))
        _fail(t);
      else
        p_103 = t;
      t = r_103(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_103));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_b_43;
    return(t);
  }
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm t_103 = NULL;
          if(((t_103 != NULL) && (t_103 != t)))
            _fail(t);
          else
            t_103 = t;
          t = not_null(t_103);
          if(match_string(t, "-b"))
            {
              t = not_null(t_103);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_f_43;
          t = set_config_0_0(t);
          t = term_g_43;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_h_43;
          return(t);
        }
        t = Option_3_0(v_4, w_4, x_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  ATerm j_104 (ATerm t)
  {
    t = not_null(z_103);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm k_104 (ATerm t)
  {
    ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
    t = not_null(a_104);
    if(((e_104 != NULL) && (e_104 != t)))
      _fail(t);
    else
      e_104 = t;
    t = not_null(c_104);
    if(((f_104 != NULL) && (f_104 != t)))
      _fail(t);
    else
      f_104 = t;
    t = not_null(d_104);
    if(((g_104 != NULL) && (g_104 != t)))
      _fail(t);
    else
      g_104 = t;
    t = not_null(z_103);
    {
      ATerm i_43;
      i_43 = t;
      t = not_null(e_104);
      t = i_0(t);
      t = i_43;
      {
        ATerm i_104 = NULL;
        ATerm l_104 (ATerm t)
        {
          t = not_null(i_104);
          if(((h_104 != NULL) && (h_104 != t)))
            _fail(t);
          else
            h_104 = t;
          t = not_null(i_104);
          return(t);
        }
        t = not_null(f_104);
        t = k_0(t);
        if(((i_104 != NULL) && (i_104 != t)))
          _fail(t);
        else
          i_104 = t;
        t = l_104(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(g_104)), not_null(h_104));
      }
    }
    return(t);
  }
  if(((z_103 != NULL) && (z_103 != t)))
    _fail(t);
  else
    z_103 = t;
  t = not_null(z_103);
  if(match_string(t, "register-usage-info"))
    {
      t = j_104(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_104 = ATgetFirst((ATermList) t);
          b_104 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(b_104);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_104 = ATgetFirst((ATermList) t);
              d_104 = (ATerm) ATgetNext((ATermList) t);
              t = k_104(t);
            }
          else
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
    ATerm p_104 = NULL;
    if(((p_104 != NULL) && (p_104 != t)))
      _fail(t);
    else
      p_104 = t;
    t = not_null(p_104);
    if(match_string(t, "-i"))
      {
        t = not_null(p_104);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(p_104);
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
    ATerm s_104 = NULL;
    ATerm j_43;
    j_43 = t;
    {
      ATerm q_104 = NULL;
      ATerm r_104 = NULL;
      ATerm u_104 (ATerm t)
      {
        t = not_null(r_104);
        if(((q_104 != NULL) && (q_104 != t)))
          _fail(t);
        else
          q_104 = t;
        t = not_null(r_104);
        return(t);
      }
      if(((r_104 != NULL) && (r_104 != t)))
        _fail(t);
      else
        r_104 = t;
      t = u_104(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_43, not_null(q_104));
      t = set_config_0_0(t);
    }
    t = j_43;
    {
      ATerm t_104 = NULL;
      ATerm v_104 (ATerm t)
      {
        t = not_null(t_104);
        if(((s_104 != NULL) && (s_104 != t)))
          _fail(t);
        else
          s_104 = t;
        t = not_null(t_104);
        return(t);
      }
      if(((t_104 != NULL) && (t_104 != t)))
        _fail(t);
      else
        t_104 = t;
      t = v_104(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_104));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_l_43;
    return(t);
  }
  t = ArgOption_3_0(y_4, z_4, a_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm o_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(r_43);
          }
        else
          {
            t = o_43;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_104 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm y_104 = NULL;
    ATerm z_104 (ATerm t)
    {
      t = not_null(y_104);
      if(((x_104 != NULL) && (x_104 != t)))
        _fail(t);
      else
        x_104 = t;
      t = not_null(y_104);
      return(t);
    }
    t = term_w_34;
    t = whoami_0_0(t);
    if(((y_104 != NULL) && (y_104 != t)))
      _fail(t);
    else
      y_104 = t;
    t = z_104(t);
    t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATempty, term_s_43), not_null(x_104)));
    t = printnl_0_0(t);
    t = term_f_31;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_43;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm b_105 = NULL;
  ATerm d_105 (ATerm t)
  {
    ATerm c_105 = NULL;
    t = not_null(b_105);
    if(((c_105 != NULL) && (c_105 != t)))
      _fail(t);
    else
      c_105 = t;
    t = not_null(b_105);
    t = SSL_TicksToSeconds(not_null(c_105));
    return(t);
  }
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  t = d_105(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  ATerm l_105 (ATerm t)
  {
    ATerm j_105 = NULL,k_105 = NULL;
    t = not_null(h_105);
    if(((j_105 != NULL) && (j_105 != t)))
      _fail(t);
    else
      j_105 = t;
    t = not_null(i_105);
    if(((k_105 != NULL) && (k_105 != t)))
      _fail(t);
    else
      k_105 = t;
    t = not_null(g_105);
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(j_105), not_null(k_105));
          ;
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          t = SSL_addr(not_null(j_105), not_null(k_105));
        }
    }
    return(t);
  }
  if(((g_105 != NULL) && (g_105 != t)))
    _fail(t);
  else
    g_105 = t;
  t = not_null(g_105);
  if(match_cons(t, sym__2))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
      t = l_105(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = w_119(t);
      ;
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
        ATerm w_105 (ATerm t)
        {
          ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL;
          t = not_null(q_105);
          if(((s_105 != NULL) && (s_105 != t)))
            _fail(t);
          else
            s_105 = t;
          t = not_null(r_105);
          if(((t_105 != NULL) && (t_105 != t)))
            _fail(t);
          else
            t_105 = t;
          t = not_null(p_105);
          {
            ATerm v_105 = NULL;
            ATerm x_105 (ATerm t)
            {
              t = not_null(v_105);
              if(((u_105 != NULL) && (u_105 != t)))
                _fail(t);
              else
                u_105 = t;
              t = not_null(v_105);
              return(t);
            }
            t = not_null(t_105);
            t = foldr_2_0(w_119, x_119, t);
            if(((v_105 != NULL) && (v_105 != t)))
              _fail(t);
            else
              v_105 = t;
            t = x_105(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_105), not_null(u_105));
            t = x_119(t);
          }
          return(t);
        }
        if(((p_105 != NULL) && (p_105 != t)))
          _fail(t);
        else
          p_105 = t;
        t = not_null(p_105);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_105 = ATgetFirst((ATermList) t);
            r_105 = (ATerm) ATgetNext((ATermList) t);
            t = w_105(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm t)
{
  ATerm c_106 = NULL;
  ATerm n_106 (ATerm t)
  {
    ATerm d_106 = NULL,e_106 = NULL;
    t = not_null(c_106);
    if(((d_106 != NULL) && (d_106 != t)))
      _fail(t);
    else
      d_106 = t;
    t = not_null(c_106);
    {
      ATerm f_106 = NULL;
      ATerm o_106 (ATerm t)
      {
        ATerm g_106 = NULL,h_106 = NULL,l_106 = NULL,m_106 = NULL;
        ATerm p_106 (ATerm t)
        {
          t = not_null(m_106);
          if(((e_106 != NULL) && (e_106 != t)))
            _fail(t);
          else
            e_106 = t;
          t = not_null(h_106);
          return(t);
        }
        t = not_null(f_106);
        if(((g_106 != NULL) && (g_106 != t)))
          _fail(t);
        else
          g_106 = t;
        t = not_null(f_106);
        t = SSL_explode_term(not_null(g_106));
        if(((h_106 != NULL) && (h_106 != t)))
          _fail(t);
        else
          h_106 = t;
        t = not_null(h_106);
        if(match_cons(t, sym__2))
          {
            l_106 = ATgetArgument(t, 0);
            m_106 = ATgetArgument(t, 1);
            t = p_106(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(d_106);
      if(((f_106 != NULL) && (f_106 != t)))
        _fail(t);
      else
        f_106 = t;
      t = o_106(t);
      t = not_null(e_106);
      t = foldr_2_0(p_123, q_123, t);
    }
    return(t);
  }
  if(((c_106 != NULL) && (c_106 != t)))
    _fail(t);
  else
    c_106 = t;
  t = n_106(t);
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
      t = term_y_29;
      return(t);
    }
    t = crush_2_0(b_5, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  ATerm x_106 (ATerm t)
  {
    ATerm v_106 = NULL,w_106 = NULL;
    t = not_null(t_106);
    if(((v_106 != NULL) && (v_106 != t)))
      _fail(t);
    else
      v_106 = t;
    t = not_null(u_106);
    if(((w_106 != NULL) && (w_106 != t)))
      _fail(t);
    else
      w_106 = t;
    t = not_null(s_106);
    {
      ATerm y_43;
      y_43 = t;
      {
        ATerm z_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(v_106), not_null(w_106));
            ;
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            t = SSL_gtr(not_null(v_106), not_null(w_106));
          }
      }
      t = y_43;
    }
    return(t);
  }
  if(((s_106 != NULL) && (s_106 != t)))
    _fail(t);
  else
    s_106 = t;
  t = not_null(s_106);
  if(match_cons(t, sym__2))
    {
      t_106 = ATgetArgument(t, 0);
      u_106 = ATgetArgument(t, 1);
      t = x_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_107 = NULL;
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
      ATerm i_107 (ATerm t)
      {
        t = not_null(e_107);
        if(((c_107 != NULL) && (c_107 != t)))
          _fail(t);
        else
          c_107 = t;
        t = not_null(f_107);
        if(((c_107 != NULL) && (c_107 != t)))
          _fail(t);
        else
          c_107 = t;
        t = not_null(d_107);
        return(t);
      }
      if(((d_107 != NULL) && (d_107 != t)))
        _fail(t);
      else
        d_107 = t;
      t = not_null(d_107);
      if(match_cons(t, sym__2))
        {
          e_107 = ATgetArgument(t, 0);
          f_107 = ATgetArgument(t, 1);
          t = i_107(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_44);
    }
  else
    {
      t = b_44;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_44;
    d_44 = t;
    {
      ATerm k_107 = NULL;
      ATerm l_107 = NULL;
      ATerm m_107 (ATerm t)
      {
        t = not_null(l_107);
        if(((k_107 != NULL) && (k_107 != t)))
          _fail(t);
        else
          k_107 = t;
        t = not_null(l_107);
        return(t);
      }
      t = term_d_41;
      t = get_config_0_0(t);
      if(((l_107 != NULL) && (l_107 != t)))
        _fail(t);
      else
        l_107 = t;
      t = m_107(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_107), term_f_31);
      t = geq_0_0(t);
    }
    t = d_44;
    t = b_127(t);
    return(t);
  }
  t = try_1_0(c_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm p_107 = NULL,r_107 = NULL;
    ATerm e_44;
    e_44 = t;
    {
      ATerm q_107 = NULL;
      ATerm t_107 (ATerm t)
      {
        t = not_null(q_107);
        if(((p_107 != NULL) && (p_107 != t)))
          _fail(t);
        else
          p_107 = t;
        t = not_null(q_107);
        return(t);
      }
      t = run_time_0_0(t);
      if(((q_107 != NULL) && (q_107 != t)))
        _fail(t);
      else
        q_107 = t;
      t = t_107(t);
    }
    t = e_44;
    {
      ATerm s_107 = NULL;
      ATerm u_107 (ATerm t)
      {
        t = not_null(s_107);
        if(((r_107 != NULL) && (r_107 != t)))
          _fail(t);
        else
          r_107 = t;
        t = not_null(s_107);
        return(t);
      }
      t = term_w_34;
      t = whoami_0_0(t);
      if(((s_107 != NULL) && (s_107 != t)))
        _fail(t);
      else
        s_107 = t;
      t = u_107(t);
      t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_44), not_null(p_107)), term_f_44), not_null(r_107)));
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
  t = term_y_29;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm z_107 = NULL;
  ATerm h_108 (ATerm t)
  {
    ATerm a_108 = NULL,b_108 = NULL,d_108 = NULL;
    t = not_null(z_107);
    if(((a_108 != NULL) && (a_108 != t)))
      _fail(t);
    else
      a_108 = t;
    t = not_null(z_107);
    {
      ATerm h_44;
      h_44 = t;
      {
        ATerm c_108 = NULL;
        ATerm i_108 (ATerm t)
        {
          t = not_null(c_108);
          if(((b_108 != NULL) && (b_108 != t)))
            _fail(t);
          else
            b_108 = t;
          t = not_null(c_108);
          return(t);
        }
        t = SSLgetAnnotations(not_null(a_108));
        if(((c_108 != NULL) && (c_108 != t)))
          _fail(t);
        else
          c_108 = t;
        t = i_108(t);
      }
      t = h_44;
      {
        ATerm g_108 = NULL;
        ATerm j_108 (ATerm t)
        {
          t = not_null(g_108);
          if(((d_108 != NULL) && (d_108 != t)))
            _fail(t);
          else
            d_108 = t;
          t = not_null(g_108);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_108));
        if(((g_108 != NULL) && (g_108 != t)))
          _fail(t);
        else
          g_108 = t;
        t = j_108(t);
        t = not_null(d_108);
      }
    }
    return(t);
  }
  if(((z_107 != NULL) && (z_107 != t)))
    _fail(t);
  else
    z_107 = t;
  t = not_null(z_107);
  if(match_cons(t, sym_Version_0))
    {
      t = h_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  ATerm i_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = i_44;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm l_44 = t;
          int m_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(m_44);
            }
          else
            {
              t = l_44;
              {
                ATerm n_44 = t;
                int o_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_44);
                  }
                else
                  {
                    t = n_44;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(e_5, t);
      }
    }
  t = w_128(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_108 = NULL;
  ATerm n_108 (ATerm t)
  {
    ATerm m_108 = NULL;
    t = not_null(l_108);
    if(((m_108 != NULL) && (m_108 != t)))
      _fail(t);
    else
      m_108 = t;
    t = not_null(l_108);
    t = SSL_table_create(not_null(m_108));
    return(t);
  }
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  t = n_108(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm p_108 = NULL;
  ATerm r_108 (ATerm t)
  {
    ATerm q_108 = NULL;
    t = not_null(p_108);
    if(((q_108 != NULL) && (q_108 != t)))
      _fail(t);
    else
      q_108 = t;
    t = not_null(p_108);
    {
      ATerm p_44;
      p_44 = t;
      t = term_q_44;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_q_44, term_r_44, not_null(q_108));
      t = table_put_0_0(t);
      t = p_44;
    }
    return(t);
  }
  if(((p_108 != NULL) && (p_108 != t)))
    _fail(t);
  else
    p_108 = t;
  t = r_108(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_108 = NULL;
  ATerm v_108 (ATerm t)
  {
    ATerm u_108 = NULL;
    t = not_null(t_108);
    if(((u_108 != NULL) && (u_108 != t)))
      _fail(t);
    else
      u_108 = t;
    t = not_null(t_108);
    t = SSL_table_destroy(not_null(u_108));
    return(t);
  }
  if(((t_108 != NULL) && (t_108 != t)))
    _fail(t);
  else
    t_108 = t;
  t = v_108(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm x_108 = NULL;
  ATerm z_108 (ATerm t)
  {
    ATerm y_108 = NULL;
    t = not_null(x_108);
    if(((y_108 != NULL) && (y_108 != t)))
      _fail(t);
    else
      y_108 = t;
    t = not_null(x_108);
    t = SSL_exit(not_null(y_108));
    return(t);
  }
  if(((x_108 != NULL) && (x_108 != t)))
    _fail(t);
  else
    x_108 = t;
  t = z_108(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm a_109 (ATerm t)
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = Cons_2_0(v_113, a_109, t);
      }
    return(t);
  }
  t = a_109(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_109 = NULL,k_109 = NULL,l_109 = NULL;
  ATerm u_109 (ATerm t)
  {
    ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL;
    t = not_null(h_109);
    if(((m_109 != NULL) && (m_109 != t)))
      _fail(t);
    else
      m_109 = t;
    t = not_null(k_109);
    if(((n_109 != NULL) && (n_109 != t)))
      _fail(t);
    else
      n_109 = t;
    t = not_null(n_109);
    {
      ATerm u_44;
      u_44 = t;
      {
        ATerm p_109 = NULL,r_109 = NULL,t_109 = NULL;
        ATerm y_109 (ATerm t)
        {
          t = not_null(t_109);
          if(((o_109 != NULL) && (o_109 != t)))
            _fail(t);
          else
            o_109 = t;
          t = not_null(t_109);
          return(t);
        }
        ATerm v_44;
        v_44 = t;
        {
          ATerm q_109 = NULL;
          ATerm w_109 (ATerm t)
          {
            t = not_null(q_109);
            if(((p_109 != NULL) && (p_109 != t)))
              _fail(t);
            else
              p_109 = t;
            t = not_null(q_109);
            return(t);
          }
          t = g_0(t);
          if(((q_109 != NULL) && (q_109 != t)))
            _fail(t);
          else
            q_109 = t;
          t = w_109(t);
        }
        t = v_44;
        {
          ATerm s_109 = NULL;
          ATerm x_109 (ATerm t)
          {
            t = not_null(s_109);
            if(((r_109 != NULL) && (r_109 != t)))
              _fail(t);
            else
              r_109 = t;
            t = not_null(s_109);
            return(t);
          }
          t = not_null(m_109);
          t = e_0(t);
          if(((s_109 != NULL) && (s_109 != t)))
            _fail(t);
          else
            s_109 = t;
          t = x_109(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(p_109)), not_null(r_109));
          if(((t_109 != NULL) && (t_109 != t)))
            _fail(t);
          else
            t_109 = t;
          t = y_109(t);
        }
      }
      t = u_44;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(o_109);
          return(t);
        }
        t = reverse_acc_2_0(e_0, f_5, t);
      }
    }
    return(t);
  }
  ATerm v_109 (ATerm t)
  {
    t = term_w_34;
    t = g_0(t);
    return(t);
  }
  if(((l_109 != NULL) && (l_109 != t)))
    _fail(t);
  else
    l_109 = t;
  t = not_null(l_109);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_109 = ATgetFirst((ATermList) t);
      k_109 = (ATerm) ATgetNext((ATermList) t);
      t = u_109(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_109(t);
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
ATerm short_description_1_0 (ATerm k_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL;
  ATerm o_110 (ATerm t)
  {
    ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL,k_110 = NULL;
    ATerm q_110 (ATerm t)
    {
      ATerm l_110 = NULL,m_110 = NULL;
      t = not_null(k_110);
      if(((l_110 != NULL) && (l_110 != t)))
        _fail(t);
      else
        l_110 = t;
      t = not_null(k_110);
      {
        ATerm n_110 = NULL;
        ATerm r_110 (ATerm t)
        {
          t = not_null(n_110);
          if(((m_110 != NULL) && (m_110 != t)))
            _fail(t);
          else
            m_110 = t;
          t = not_null(n_110);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_110)), not_null(i_110));
        if(((n_110 != NULL) && (n_110 != t)))
          _fail(t);
        else
          n_110 = t;
        t = r_110(t);
        t = not_null(m_110);
      }
      return(t);
    }
    t = not_null(e_110);
    if(((g_110 != NULL) && (g_110 != t)))
      _fail(t);
    else
      g_110 = t;
    t = not_null(f_110);
    if(((h_110 != NULL) && (h_110 != t)))
      _fail(t);
    else
      h_110 = t;
    t = not_null(e_110);
    {
      ATerm j_110 = NULL;
      ATerm p_110 (ATerm t)
      {
        t = not_null(j_110);
        if(((i_110 != NULL) && (i_110 != t)))
          _fail(t);
        else
          i_110 = t;
        t = not_null(j_110);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_110));
      if(((j_110 != NULL) && (j_110 != t)))
        _fail(t);
      else
        j_110 = t;
      t = p_110(t);
      t = not_null(h_110);
      t = f_94(t);
      if(((k_110 != NULL) && (k_110 != t)))
        _fail(t);
      else
        k_110 = t;
      t = q_110(t);
    }
    return(t);
  }
  if(((e_110 != NULL) && (e_110 != t)))
    _fail(t);
  else
    e_110 = t;
  t = not_null(e_110);
  if(match_cons(t, sym_Program_1))
    {
      f_110 = ATgetArgument(t, 0);
      t = o_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_110 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_110 = NULL;
      ATerm d_111 (ATerm t)
      {
        t = not_null(x_110);
        if(((w_110 != NULL) && (w_110 != t)))
          _fail(t);
        else
          w_110 = t;
        t = not_null(x_110);
        return(t);
      }
      t = term_t_43;
      t = get_config_0_0(t);
      if(((x_110 != NULL) && (x_110 != t)))
        _fail(t);
      else
        x_110 = t;
      t = d_111(t);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm y_110 = NULL;
            ATerm e_111 (ATerm t)
            {
              t = not_null(y_110);
              if(((w_110 != NULL) && (w_110 != t)))
                _fail(t);
              else
                w_110 = t;
              t = not_null(y_110);
              return(t);
            }
            if(((y_110 != NULL) && (y_110 != t)))
              _fail(t);
            else
              y_110 = t;
            t = e_111(t);
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
        t = not_null(w_110);
        return(t);
      }
      t = short_description_1_0(m_5, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(j_5, t);
    t = term_y_44;
    t = echo_0_0(t);
    t = term_b_45;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm z_110 = NULL;
        ATerm a_111 = NULL;
        ATerm f_111 (ATerm t)
        {
          t = not_null(a_111);
          if(((z_110 != NULL) && (z_110 != t)))
            _fail(t);
          else
            z_110 = t;
          t = not_null(a_111);
          return(t);
        }
        if(((a_111 != NULL) && (a_111 != t)))
          _fail(t);
        else
          a_111 = t;
        t = f_111(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), term_c_45);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(n_5, t);
      {
        ATerm o_5 (ATerm t)
        {
          ATerm b_111 = NULL;
          ATerm c_111 = NULL;
          ATerm g_111 (ATerm t)
          {
            t = not_null(c_111);
            if(((b_111 != NULL) && (b_111 != t)))
              _fail(t);
            else
              b_111 = t;
            t = not_null(c_111);
            return(t);
          }
          ATerm p_5 (ATerm t)
          {
            t = not_null(w_110);
            return(t);
          }
          t = long_description_1_0(p_5, t);
          if(((c_111 != NULL) && (c_111 != t)))
            _fail(t);
          else
            c_111 = t;
          t = g_111(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(b_111)), term_d_45);
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
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm m_111 = NULL,n_111 = NULL;
  ATerm w_111 (ATerm t)
  {
    ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL,s_111 = NULL;
    ATerm y_111 (ATerm t)
    {
      ATerm t_111 = NULL,u_111 = NULL;
      t = not_null(s_111);
      if(((t_111 != NULL) && (t_111 != t)))
        _fail(t);
      else
        t_111 = t;
      t = not_null(s_111);
      {
        ATerm v_111 = NULL;
        ATerm z_111 (ATerm t)
        {
          t = not_null(v_111);
          if(((u_111 != NULL) && (u_111 != t)))
            _fail(t);
          else
            u_111 = t;
          t = not_null(v_111);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_111)), not_null(q_111));
        if(((v_111 != NULL) && (v_111 != t)))
          _fail(t);
        else
          v_111 = t;
        t = z_111(t);
        t = not_null(u_111);
      }
      return(t);
    }
    t = not_null(m_111);
    if(((o_111 != NULL) && (o_111 != t)))
      _fail(t);
    else
      o_111 = t;
    t = not_null(n_111);
    if(((p_111 != NULL) && (p_111 != t)))
      _fail(t);
    else
      p_111 = t;
    t = not_null(m_111);
    {
      ATerm r_111 = NULL;
      ATerm x_111 (ATerm t)
      {
        t = not_null(r_111);
        if(((q_111 != NULL) && (q_111 != t)))
          _fail(t);
        else
          q_111 = t;
        t = not_null(r_111);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_111));
      if(((r_111 != NULL) && (r_111 != t)))
        _fail(t);
      else
        r_111 = t;
      t = x_111(t);
      t = not_null(p_111);
      t = g_94(t);
      if(((s_111 != NULL) && (s_111 != t)))
        _fail(t);
      else
        s_111 = t;
      t = y_111(t);
    }
    return(t);
  }
  if(((m_111 != NULL) && (m_111 != t)))
    _fail(t);
  else
    m_111 = t;
  t = not_null(m_111);
  if(match_cons(t, sym_Undefined_1))
    {
      n_111 = ATgetArgument(t, 0);
      t = w_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm a_112 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_114, _id, t);
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = Cons_2_0(_id, a_112, t);
      }
    return(t);
  }
  t = a_112(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  t = fetch_1_0(k_130, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL;
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  t = not_null(c_112);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(c_112);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_112 = ATgetFirst((ATermList) t);
          e_112 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(c_112);
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
  ATerm i_45;
  i_45 = t;
  {
    ATerm h_112 = NULL;
    ATerm k_112 = NULL;
    ATerm m_112 (ATerm t)
    {
      t = not_null(k_112);
      if(((h_112 != NULL) && (h_112 != t)))
        _fail(t);
      else
        h_112 = t;
      t = not_null(k_112);
      return(t);
    }
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        {
          ATerm i_112 = NULL;
          ATerm j_112 = NULL;
          ATerm l_112 (ATerm t)
          {
            t = not_null(j_112);
            if(((i_112 != NULL) && (i_112 != t)))
              _fail(t);
            else
              i_112 = t;
            t = not_null(j_112);
            return(t);
          }
          if(((j_112 != NULL) && (j_112 != t)))
            _fail(t);
          else
            j_112 = t;
          t = l_112(t);
          t = (ATerm) ATinsert(ATempty, not_null(i_112));
        }
      }
    if(((k_112 != NULL) && (k_112 != t)))
      _fail(t);
    else
      k_112 = t;
    t = m_112(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_41, not_null(h_112));
    t = printnl_0_0(t);
  }
  t = i_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_43;
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
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm r_112 = NULL;
  ATerm x_112 (ATerm t)
  {
    ATerm s_112 = NULL,t_112 = NULL,v_112 = NULL;
    t = not_null(r_112);
    if(((s_112 != NULL) && (s_112 != t)))
      _fail(t);
    else
      s_112 = t;
    t = not_null(r_112);
    {
      ATerm n_45;
      n_45 = t;
      {
        ATerm u_112 = NULL;
        ATerm y_112 (ATerm t)
        {
          t = not_null(u_112);
          if(((t_112 != NULL) && (t_112 != t)))
            _fail(t);
          else
            t_112 = t;
          t = not_null(u_112);
          return(t);
        }
        t = SSLgetAnnotations(not_null(s_112));
        if(((u_112 != NULL) && (u_112 != t)))
          _fail(t);
        else
          u_112 = t;
        t = y_112(t);
      }
      t = n_45;
      {
        ATerm w_112 = NULL;
        ATerm z_112 (ATerm t)
        {
          t = not_null(w_112);
          if(((v_112 != NULL) && (v_112 != t)))
            _fail(t);
          else
            v_112 = t;
          t = not_null(w_112);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_112));
        if(((w_112 != NULL) && (w_112 != t)))
          _fail(t);
        else
          w_112 = t;
        t = z_112(t);
        t = not_null(v_112);
      }
    }
    return(t);
  }
  if(((r_112 != NULL) && (r_112 != t)))
    _fail(t);
  else
    r_112 = t;
  t = not_null(r_112);
  if(match_cons(t, sym_Help_0))
    {
      t = x_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_106(t);
      ;
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 (ATerm t)
      {
        ATerm c_113 = NULL;
        if(((c_113 != NULL) && (c_113 != t)))
          _fail(t);
        else
          c_113 = t;
        t = not_null(c_113);
        if(match_string(t, "--about"))
          {
            t = not_null(c_113);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_t_45;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_u_45;
        return(t);
      }
      t = Option_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(r_45);
    }
  else
    {
      t = q_45;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm d_113 = NULL;
          if(((d_113 != NULL) && (d_113 != t)))
            _fail(t);
          else
            d_113 = t;
          t = not_null(d_113);
          if(match_string(t, "--version"))
            {
              t = not_null(d_113);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_t_45;
          t = set_config_0_0(t);
          t = term_w_45;
          t = set_config_0_0(t);
          t = term_x_45;
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_y_45;
          return(t);
        }
        t = Option_3_0(t_5, u_5, v_5, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  ATerm l_113 (ATerm t)
  {
    ATerm j_113 = NULL,k_113 = NULL;
    t = not_null(h_113);
    if(((j_113 != NULL) && (j_113 != t)))
      _fail(t);
    else
      j_113 = t;
    t = not_null(i_113);
    if(((k_113 != NULL) && (k_113 != t)))
      _fail(t);
    else
      k_113 = t;
    t = not_null(g_113);
    t = SSL_table_get(not_null(j_113), not_null(k_113));
    return(t);
  }
  if(((g_113 != NULL) && (g_113 != t)))
    _fail(t);
  else
    g_113 = t;
  t = not_null(g_113);
  if(match_cons(t, sym__2))
    {
      h_113 = ATgetArgument(t, 0);
      i_113 = ATgetArgument(t, 1);
      t = l_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  ATerm b_114 (ATerm t)
  {
    ATerm u_113 = NULL,x_113 = NULL,y_113 = NULL;
    t = not_null(q_113);
    if(((x_113 != NULL) && (x_113 != t)))
      _fail(t);
    else
      x_113 = t;
    t = not_null(r_113);
    if(((y_113 != NULL) && (y_113 != t)))
      _fail(t);
    else
      y_113 = t;
    t = not_null(s_113);
    if(((u_113 != NULL) && (u_113 != t)))
      _fail(t);
    else
      u_113 = t;
    t = not_null(p_113);
    {
      ATerm z_45;
      z_45 = t;
      {
        ATerm z_113 = NULL;
        ATerm a_114 = NULL;
        ATerm c_114 (ATerm t)
        {
          t = not_null(a_114);
          if(((z_113 != NULL) && (z_113 != t)))
            _fail(t);
          else
            z_113 = t;
          t = not_null(a_114);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_113), not_null(y_113));
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
              t = (ATerm) ATempty;
            }
          if(((a_114 != NULL) && (a_114 != t)))
            _fail(t);
          else
            a_114 = t;
          t = c_114(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_113), not_null(y_113), (ATerm) ATinsert(CheckATermList(not_null(z_113)), not_null(u_113)));
        t = table_put_0_0(t);
      }
      t = z_45;
    }
    return(t);
  }
  if(((p_113 != NULL) && (p_113 != t)))
    _fail(t);
  else
    p_113 = t;
  t = not_null(p_113);
  if(match_cons(t, sym__3))
    {
      q_113 = ATgetArgument(t, 0);
      r_113 = ATgetArgument(t, 1);
      s_113 = ATgetArgument(t, 2);
      t = b_114(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm e_114 = NULL;
  ATerm h_114 = NULL;
  ATerm i_114 (ATerm t)
  {
    t = not_null(h_114);
    if(((e_114 != NULL) && (e_114 != t)))
      _fail(t);
    else
      e_114 = t;
    t = not_null(h_114);
    return(t);
  }
  t = term_w_34;
  t = p_131(t);
  if(((h_114 != NULL) && (h_114 != t)))
    _fail(t);
  else
    h_114 = t;
  t = i_114(t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_44, term_a_45, not_null(e_114));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  ATerm w_114 (ATerm t)
  {
    t = not_null(p_114);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm x_114 (ATerm t)
  {
    ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
    t = not_null(q_114);
    if(((s_114 != NULL) && (s_114 != t)))
      _fail(t);
    else
      s_114 = t;
    t = not_null(r_114);
    if(((t_114 != NULL) && (t_114 != t)))
      _fail(t);
    else
      t_114 = t;
    t = not_null(p_114);
    {
      ATerm c_46;
      c_46 = t;
      t = not_null(s_114);
      t = a_0(t);
      t = c_46;
      {
        ATerm v_114 = NULL;
        ATerm y_114 (ATerm t)
        {
          t = not_null(v_114);
          if(((u_114 != NULL) && (u_114 != t)))
            _fail(t);
          else
            u_114 = t;
          t = not_null(v_114);
          return(t);
        }
        t = term_w_34;
        t = c_0(t);
        if(((v_114 != NULL) && (v_114 != t)))
          _fail(t);
        else
          v_114 = t;
        t = y_114(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(t_114)), not_null(u_114));
      }
    }
    return(t);
  }
  if(((p_114 != NULL) && (p_114 != t)))
    _fail(t);
  else
    p_114 = t;
  t = not_null(p_114);
  if(match_string(t, "register-usage-info"))
    {
      t = w_114(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_114 = ATgetFirst((ATermList) t);
          r_114 = (ATerm) ATgetNext((ATermList) t);
          t = x_114(t);
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
    ATerm a_115 = NULL;
    if(((a_115 != NULL) && (a_115 != t)))
      _fail(t);
    else
      a_115 = t;
    t = not_null(a_115);
    if(match_string(t, "--help"))
      {
        t = not_null(a_115);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(a_115);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(a_115);
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
    t = term_d_46;
    t = set_config_0_0(t);
    t = term_e_46;
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_f_46;
    return(t);
  }
  t = Option_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL;
  ATerm i_115 (ATerm t)
  {
    ATerm g_115 = NULL,h_115 = NULL;
    t = not_null(e_115);
    if(((g_115 != NULL) && (g_115 != t)))
      _fail(t);
    else
      g_115 = t;
    t = not_null(f_115);
    if(((h_115 != NULL) && (h_115 != t)))
      _fail(t);
    else
      h_115 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(h_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_115)));
    return(t);
  }
  if(((d_115 != NULL) && (d_115 != t)))
    _fail(t);
  else
    d_115 = t;
  t = not_null(d_115);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_115 = ATgetFirst((ATermList) t);
      f_115 = (ATerm) ATgetNext((ATermList) t);
      t = i_115(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
  ATerm d_116 (ATerm t)
  {
    ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,x_115 = NULL;
    ATerm f_116 (ATerm t)
    {
      ATerm y_115 = NULL,z_115 = NULL;
      ATerm g_116 (ATerm t)
      {
        ATerm a_116 = NULL,b_116 = NULL;
        t = not_null(z_115);
        if(((a_116 != NULL) && (a_116 != t)))
          _fail(t);
        else
          a_116 = t;
        t = not_null(z_115);
        {
          ATerm c_116 = NULL;
          ATerm h_116 (ATerm t)
          {
            t = not_null(c_116);
            if(((b_116 != NULL) && (b_116 != t)))
              _fail(t);
            else
              b_116 = t;
            t = not_null(c_116);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_116)), not_null(y_115)), not_null(v_115));
          if(((c_116 != NULL) && (c_116 != t)))
            _fail(t);
          else
            c_116 = t;
          t = h_116(t);
          t = not_null(b_116);
        }
        return(t);
      }
      t = not_null(x_115);
      if(((y_115 != NULL) && (y_115 != t)))
        _fail(t);
      else
        y_115 = t;
      t = not_null(u_115);
      t = t_84(t);
      if(((z_115 != NULL) && (z_115 != t)))
        _fail(t);
      else
        z_115 = t;
      t = g_116(t);
      return(t);
    }
    t = not_null(p_115);
    if(((s_115 != NULL) && (s_115 != t)))
      _fail(t);
    else
      s_115 = t;
    t = not_null(q_115);
    if(((t_115 != NULL) && (t_115 != t)))
      _fail(t);
    else
      t_115 = t;
    t = not_null(r_115);
    if(((u_115 != NULL) && (u_115 != t)))
      _fail(t);
    else
      u_115 = t;
    t = not_null(p_115);
    {
      ATerm w_115 = NULL;
      ATerm e_116 (ATerm t)
      {
        t = not_null(w_115);
        if(((v_115 != NULL) && (v_115 != t)))
          _fail(t);
        else
          v_115 = t;
        t = not_null(w_115);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_115));
      if(((w_115 != NULL) && (w_115 != t)))
        _fail(t);
      else
        w_115 = t;
      t = e_116(t);
      t = not_null(t_115);
      t = s_84(t);
      if(((x_115 != NULL) && (x_115 != t)))
        _fail(t);
      else
        x_115 = t;
      t = f_116(t);
    }
    return(t);
  }
  if(((p_115 != NULL) && (p_115 != t)))
    _fail(t);
  else
    p_115 = t;
  t = not_null(p_115);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_115 = ATgetFirst((ATermList) t);
      r_115 = (ATerm) ATgetNext((ATermList) t);
      t = d_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm m_116 = NULL;
  ATerm s_116 (ATerm t)
  {
    ATerm n_116 = NULL,o_116 = NULL,q_116 = NULL;
    t = not_null(m_116);
    if(((n_116 != NULL) && (n_116 != t)))
      _fail(t);
    else
      n_116 = t;
    t = not_null(m_116);
    {
      ATerm g_46;
      g_46 = t;
      {
        ATerm p_116 = NULL;
        ATerm t_116 (ATerm t)
        {
          t = not_null(p_116);
          if(((o_116 != NULL) && (o_116 != t)))
            _fail(t);
          else
            o_116 = t;
          t = not_null(p_116);
          return(t);
        }
        t = SSLgetAnnotations(not_null(n_116));
        if(((p_116 != NULL) && (p_116 != t)))
          _fail(t);
        else
          p_116 = t;
        t = t_116(t);
      }
      t = g_46;
      {
        ATerm r_116 = NULL;
        ATerm u_116 (ATerm t)
        {
          t = not_null(r_116);
          if(((q_116 != NULL) && (q_116 != t)))
            _fail(t);
          else
            q_116 = t;
          t = not_null(r_116);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(o_116));
        if(((r_116 != NULL) && (r_116 != t)))
          _fail(t);
        else
          r_116 = t;
        t = u_116(t);
        t = not_null(q_116);
      }
    }
    return(t);
  }
  if(((m_116 != NULL) && (m_116 != t)))
    _fail(t);
  else
    m_116 = t;
  t = not_null(m_116);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
  ATerm c_117 (ATerm t)
  {
    ATerm a_117 = NULL,b_117 = NULL;
    t = not_null(y_116);
    if(((a_117 != NULL) && (a_117 != t)))
      _fail(t);
    else
      a_117 = t;
    t = not_null(z_116);
    if(((b_117 != NULL) && (b_117 != t)))
      _fail(t);
    else
      b_117 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(a_117), not_null(b_117));
    t = table_put_0_0(t);
    return(t);
  }
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  t = not_null(x_116);
  if(match_cons(t, sym__2))
    {
      y_116 = ATgetArgument(t, 0);
      z_116 = ATgetArgument(t, 1);
      t = c_117(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm h_46;
  h_46 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_i_46;
      t = n_131(t);
      return(t);
    }
    t = try_1_0(j_6, t);
  }
  t = h_46;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm h_117 = NULL;
      ATerm j_46;
      j_46 = t;
      {
        ATerm f_117 = NULL;
        ATerm g_117 = NULL;
        ATerm j_117 (ATerm t)
        {
          t = not_null(g_117);
          if(((f_117 != NULL) && (f_117 != t)))
            _fail(t);
          else
            f_117 = t;
          t = not_null(g_117);
          return(t);
        }
        if(((g_117 != NULL) && (g_117 != t)))
          _fail(t);
        else
          g_117 = t;
        t = j_117(t);
        t = (ATerm) ATmakeAppl(sym__2, term_t_43, not_null(f_117));
        t = set_config_0_0(t);
      }
      t = j_46;
      {
        ATerm i_117 = NULL;
        ATerm k_117 (ATerm t)
        {
          t = not_null(i_117);
          if(((h_117 != NULL) && (h_117 != t)))
            _fail(t);
          else
            h_117 = t;
          t = not_null(i_117);
          return(t);
        }
        if(((i_117 != NULL) && (i_117 != t)))
          _fail(t);
        else
          i_117 = t;
        t = k_117(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_117));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm k_46 = t;
      int l_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_46 = t;
          int n_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(n_46);
            }
          else
            {
              t = m_46;
              t = n_131(t);
              t = Cons_2_0(_id, l_6, t);
            }
          ;
          LocalPopChoice(l_46);
        }
      else
        {
          t = k_46;
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
  ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
  ATerm o_46;
  o_46 = t;
  {
    ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL;
    ATerm v_117 (ATerm t)
    {
      t = not_null(s_117);
      if(((o_117 != NULL) && (o_117 != t)))
        _fail(t);
      else
        o_117 = t;
      t = not_null(t_117);
      if(((p_117 != NULL) && (p_117 != t)))
        _fail(t);
      else
        p_117 = t;
      t = not_null(u_117);
      if(((q_117 != NULL) && (q_117 != t)))
        _fail(t);
      else
        q_117 = t;
      t = not_null(r_117);
      t = SSL_table_put(not_null(o_117), not_null(p_117), not_null(q_117));
      return(t);
    }
    if(((r_117 != NULL) && (r_117 != t)))
      _fail(t);
    else
      r_117 = t;
    t = not_null(r_117);
    if(match_cons(t, sym__3))
      {
        s_117 = ATgetArgument(t, 0);
        t_117 = ATgetArgument(t, 1);
        u_117 = ATgetArgument(t, 2);
        t = v_117(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = o_46;
  return(t);
}
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm x_117 = NULL;
  ATerm p_46;
  p_46 = t;
  t = term_q_46;
  t = table_put_0_0(t);
  t = p_46;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm r_46 = t;
      int s_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_131(t);
          ;
          LocalPopChoice(s_46);
        }
      else
        {
          t = r_46;
          {
            ATerm t_46 = t;
            int u_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(u_46);
              }
            else
              {
                t = t_46;
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
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_46;
            x_46 = t;
            {
              ATerm y_46 = t;
              int z_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_44;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(z_46);
                }
              else
                {
                  t = y_46;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = x_46;
            t = system_usage_0_0(t);
            t = term_y_29;
            t = exit_0_0(t);
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            {
              ATerm a_47 = t;
              int b_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_47;
                  c_47 = t;
                  t = term_s_45;
                  t = get_config_0_0(t);
                  t = c_47;
                  t = system_about_0_0(t);
                  t = term_y_29;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(b_47);
                }
              else
                {
                  t = a_47;
                  {
                    ATerm o_6 (ATerm t)
                    {
                      ATerm b_7 (ATerm t)
                      {
                        ATerm y_117 = NULL;
                        ATerm z_117 (ATerm t)
                        {
                          t = not_null(y_117);
                          if(((x_117 != NULL) && (x_117 != t)))
                            _fail(t);
                          else
                            x_117 = t;
                          t = not_null(y_117);
                          return(t);
                        }
                        if(((y_117 != NULL) && (y_117 != t)))
                          _fail(t);
                        else
                          y_117 = t;
                        t = z_117(t);
                        return(t);
                      }
                      t = Undefined_1_0(b_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(o_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_117)), term_d_47));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_f_31;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(n_6, t);
      {
        ATerm e_47;
        e_47 = t;
        t = term_z_44;
        t = table_destroy_0_0(t);
        t = e_47;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm t)
{
  t = parse_options_1_0(y_128, t);
  t = store_options_0_0(t);
  t = a_129(t);
  {
    ATerm f_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_128, t);
        ;
        LocalPopChoice(g_47);
      }
    else
      {
        t = f_47;
        {
          ATerm h_47 = t;
          int i_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_47);
            }
          else
            {
              t = h_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_128(t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(n_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_7, p_128, q_128, l_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm j_128 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm l_47;
      l_47 = t;
      {
        ATerm b_118 = NULL;
        ATerm c_118 = NULL;
        ATerm d_118 (ATerm t)
        {
          t = not_null(c_118);
          if(((b_118 != NULL) && (b_118 != t)))
            _fail(t);
          else
            b_118 = t;
          t = not_null(c_118);
          return(t);
        }
        t = term_t_43;
        t = get_config_0_0(t);
        if(((c_118 != NULL) && (c_118 != t)))
          _fail(t);
        else
          c_118 = t;
        t = d_118(t);
        t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATempty, not_null(b_118)));
        t = printnl_0_0(t);
      }
      t = l_47;
      return(t);
    }
    t = if_verbose2_1_0(t_7, t);
    return(t);
  }
  t = iowrap_4_0(h_128, i_128, j_128, m_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm t)
{
  t = iowrap_3_0(f_128, g_128, default_usage_0_0, t);
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
