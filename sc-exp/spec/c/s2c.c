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
ATerm term_f_44;
ATerm term_s_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_k_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_g_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_r_37;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_o_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_z_32;
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
ATerm term_a_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_k_30;
ATerm term_v_29;
ATerm term_k_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_z_25;
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
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
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
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_c_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Id_1, term_j_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, term_z_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Id_1, term_k_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Id_1, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_18, term_j_9);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Id_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Id_1, term_r_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_19, term_j_9);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Id_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_19, (ATerm) ATempty);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_19, term_j_9);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
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
  term_k_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_20, term_j_9);
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
  term_i_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_18);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_21, term_w_15);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Id_1, term_r_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, term_e_18);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Id_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_22, term_w_15);
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
  term_s_23 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_19);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, term_e_18);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Return_1, term_e_18);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(34);
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
  term_q_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_18, term_j_9);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, term_q_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Id_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Id_1, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_9, (ATerm) ATempty);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Id_1, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_30, (ATerm) ATempty);
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
  term_l_31 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_9, term_k_31);
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
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_v_34, term_f_17);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_17);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_v_39, term_f_28);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_f_28);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_a_42);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_f_28);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_v_42, term_f_28);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_k_41, term_f_28);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__3, term_z_41, term_a_42, (ATerm) ATempty);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm BuildDefault_1 (ATerm, ATerm u_86 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm l_96 (ATerm));
ATerm FunCall_2 (ATerm, ATerm p_99 (ATerm), ATerm q_99 (ATerm));
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
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_134 (ATerm));
ATerm restore_always_2 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_134 (ATerm));
ATerm scope_2 (ATerm, ATerm k_134 (ATerm), ATerm l_134 (ATerm));
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
ATerm _2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm));
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
ATerm Program_1 (ATerm, ATerm d_94 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_94 (ATerm));
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
ATerm Cons_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
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
ATerm Option_2 (ATerm t, ATerm n_130 (ATerm), ATerm o_130 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  t = Option_3(t, n_130, o_130, f_0);
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
ATerm oncetd_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_109(t);
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
ATerm BuildDefault_1 (ATerm t, ATerm u_86 (ATerm))
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
            t = u_86(t);
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
ATerm Op_2 (ATerm t, ATerm d_86 (ATerm), ATerm e_86 (ATerm))
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
            t = d_86(t);
            {
              w_20 = t;
              {
                t = not_null(q_20);
                {
                  ATerm a_21 = NULL;
                  t = e_86(t);
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  v_25 = t;
  t_25 :
  if(match_cons(v_25, sym_Anno_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      u_25 = ATgetArgument(v_25, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), not_null(w_25))));
    }
  else
    {
      if(match_cons(v_25, sym_Op_2))
        {
          w_25 = ATgetArgument(v_25, 0);
          u_25 = ATgetArgument(v_25, 1);
          {
            ATerm b_26 = NULL;
            ATerm c_26 = NULL,e_26 = NULL;
            ATerm d_26 = NULL;
            t = not_null(u_25);
            {
              t = length_0(t);
              {
                d_26 = t;
                if(((c_26 != NULL) && (c_26 != d_26)))
                  _fail(d_26);
                else
                  c_26 = d_26;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(c_26));
              {
                t = ConstructorName_0(t);
                {
                  e_26 = t;
                  if(((b_26 != NULL) && (b_26 != e_26)))
                    _fail(e_26);
                  else
                    b_26 = e_26;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(u_25)), (ATerm) ATmakeAppl(sym_Id_1, not_null(b_26)))));
          }
        }
      else
        {
          if(match_cons(v_25, sym_BuildDefault_1))
            {
              w_25 = ATgetArgument(v_25, 0);
              t = not_null(w_25);
            }
          else
            {
              if(match_cons(v_25, sym_Var_1))
                {
                  w_25 = ATgetArgument(v_25, 0);
                  {
                    ATerm n_15 = t;
                    int o_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
                        t = SSLgetAnnotations(not_null(v_25));
                        {
                          i_26 = t;
                          j_25 :
                          if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
                            {
                              j_26 = ATgetFirst((ATermList) i_26);
                              k_26 = (ATerm) ATgetNext((ATermList) i_26);
                              k_25 :
                              if(match_string(j_26, "unbound"))
                                {
                                  l_25 :
                                  if(((ATgetType(k_26) == AT_LIST) && ATisEmpty(k_26)))
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
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_25))));
                        ;
                        LocalPopChoice(o_15);
                      }
                    else
                      {
                        t = n_15;
                        {
                          ATerm r_15 = t;
                          int s_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_26 = NULL;
                              t = SSLgetAnnotations(not_null(v_25));
                              {
                                n_26 = t;
                                m_25 :
                                if(((ATgetType(n_26) == AT_LIST) && ATisEmpty(n_26)))
                                  {
                                    {
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_25))));
                              ;
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              {
                                ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
                                t = SSLgetAnnotations(not_null(v_25));
                                {
                                  q_26 = t;
                                  n_25 :
                                  if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
                                    {
                                      r_26 = ATgetFirst((ATermList) q_26);
                                      s_26 = (ATerm) ATgetNext((ATermList) q_26);
                                      o_25 :
                                      if(match_string(r_26, "bound"))
                                        {
                                          p_25 :
                                          if(((ATgetType(s_26) == AT_LIST) && ATisEmpty(s_26)))
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
                                t = (ATerm) ATmakeAppl(sym_Id_1, not_null(w_25));
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(v_25, sym_Str_1))
                    {
                      w_25 = ATgetArgument(v_25, 0);
                      {
                        ATerm u_26 = NULL;
                        ATerm v_26 = NULL;
                        t = not_null(w_25);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              v_26 = t;
                              if(((u_26 != NULL) && (u_26 != v_26)))
                                _fail(v_26);
                              else
                                u_26 = v_26;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_16), term_w_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_26))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(v_25, sym_Real_1))
                        {
                          w_25 = ATgetArgument(v_25, 0);
                          {
                            ATerm x_26 = NULL;
                            ATerm y_26 = NULL;
                            t = not_null(w_25);
                            {
                              t = real_to_string_0(t);
                              {
                                y_26 = t;
                                if(((x_26 != NULL) && (x_26 != y_26)))
                                  _fail(y_26);
                                else
                                  x_26 = y_26;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(x_26)))));
                          }
                        }
                      else
                        {
                          if(match_cons(v_25, sym_Int_1))
                            {
                              w_25 = ATgetArgument(v_25, 0);
                              {
                                ATerm a_27 = NULL;
                                ATerm b_27 = NULL;
                                t = not_null(w_25);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    b_27 = t;
                                    if(((a_27 != NULL) && (a_27 != b_27)))
                                      _fail(b_27);
                                    else
                                      a_27 = b_27;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_27)))));
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
ATerm Id_1 (ATerm t, ATerm l_96 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Id_1))
    {
      w_27 = ATgetArgument(v_27, 0);
      {
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        {
          t = not_null(w_27);
          {
            ATerm d_28 = NULL;
            t = l_96(t);
            {
              b_28 = t;
              {
                ATerm e_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(b_28)), not_null(z_27));
                {
                  e_28 = t;
                  if(((d_28 != NULL) && (d_28 != e_28)))
                    _fail(e_28);
                  else
                    d_28 = e_28;
                }
                t = not_null(d_28);
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
ATerm FunCall_2 (ATerm t, ATerm p_99 (ATerm), ATerm q_99 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_FunCall_2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        ATerm v_28 = NULL,x_28 = NULL;
        ATerm w_28 = NULL;
        t = SSLgetAnnotations(not_null(p_28));
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
        {
          t = not_null(q_28);
          {
            ATerm z_28 = NULL;
            t = p_99(t);
            {
              x_28 = t;
              {
                t = not_null(r_28);
                {
                  ATerm b_29 = NULL;
                  t = q_99(t);
                  {
                    z_28 = t;
                    {
                      ATerm c_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(x_28), not_null(z_28)), not_null(v_28));
                      {
                        c_29 = t;
                        if(((b_29 != NULL) && (b_29 != c_29)))
                          _fail(c_29);
                        else
                          b_29 = c_29;
                      }
                      t = not_null(b_29);
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
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  w_29 :
  if(match_cons(g_30, sym_Op_2))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      x_29 :
      if(match_string(h_30, "Cons"))
        {
          y_29 :
          if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
            {
              c_30 = ATgetFirst((ATermList) i_30);
              d_30 = (ATerm) ATgetNext((ATermList) i_30);
              z_29 :
              if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
                {
                  e_30 = ATgetFirst((ATermList) d_30);
                  f_30 = (ATerm) ATgetNext((ATermList) d_30);
                  a_30 :
                  if(((ATgetType(f_30) == AT_LIST) && ATisEmpty(f_30)))
                    {
                      {
                        ATerm l_30 = NULL;
                        ATerm y_30 = NULL;
                        t = not_null(e_30);
                        {
                          ATerm o_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
                              m_30 = t;
                              n_29 :
                              if(match_cons(m_30, sym_TypeCast_2))
                                {
                                  n_30 = ATgetArgument(m_30, 0);
                                  u_30 = ATgetArgument(m_30, 1);
                                  o_29 :
                                  if(match_cons(n_30, sym_TypeName_2))
                                    {
                                      o_30 = ATgetArgument(n_30, 0);
                                      t_30 = ATgetArgument(n_30, 1);
                                      p_29 :
                                      if(match_cons(o_30, sym_TypeSpec_3))
                                        {
                                          p_30 = ATgetArgument(o_30, 0);
                                          q_30 = ATgetArgument(o_30, 1);
                                          s_30 = ATgetArgument(o_30, 2);
                                          q_29 :
                                          if(((ATgetType(p_30) == AT_LIST) && ATisEmpty(p_30)))
                                            {
                                              r_29 :
                                              if(match_cons(q_30, sym_TypeId_1))
                                                {
                                                  r_30 = ATgetArgument(q_30, 0);
                                                  s_29 :
                                                  if(match_string(r_30, "ATerm"))
                                                    {
                                                      t_29 :
                                                      if(((ATgetType(s_30) == AT_LIST) && ATisEmpty(s_30)))
                                                        {
                                                          u_29 :
                                                          if(match_cons(t_30, sym_None_0))
                                                            {
                                                              t = not_null(u_30);
                                                              {
                                                                ATerm s_16 = t;
                                                                int t_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm u_1 (ATerm t)
                                                                    {
                                                                      ATerm w_30 = NULL;
                                                                      w_30 = t;
                                                                      l_29 :
                                                                      if(!(match_string(w_30, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, u_1);
                                                                    ;
                                                                    LocalPopChoice(t_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_16;
                                                                    {
                                                                      ATerm v_1 (ATerm t)
                                                                      {
                                                                        ATerm x_1 (ATerm t)
                                                                        {
                                                                          ATerm x_30 = NULL;
                                                                          x_30 = t;
                                                                          m_29 :
                                                                          if(!(match_string(x_30, "ATinsert")))
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
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = o_16;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, not_null(e_30)));
                            }
                          {
                            y_30 = t;
                            if(((l_30 != NULL) && (l_30 != y_30)))
                              _fail(y_30);
                            else
                              l_30 = y_30;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_30)), not_null(l_30))));
                      }
                    }
                  else
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
          if(match_string(h_30, "Nil"))
            {
              b_30 :
              if(((ATgetType(i_30) == AT_LIST) && ATisEmpty(i_30)))
                {
                  t = term_a_17;
                }
              else
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
  ATerm z_1 (ATerm t)
  {
    t = bottomup_1(t, d_108);
    return(t);
  }
  t = _all(t, z_1);
  t = d_108(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
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
ATerm topdown_1 (ATerm t, ATerm c_108 (ATerm))
{
  t = c_108(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = topdown_1(t, c_108);
      return(t);
    }
    t = _all(t, c_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  ATerm m_56 (ATerm t)
  {
    ATerm m_50 = NULL,h_51 = NULL;
    ATerm d_17;
    d_17 = t;
    {
      ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
      t = not_null(n_37);
      {
        ATerm e_17 = t;
        if((PushChoice() == 0))
          {
            ATerm n_50 = NULL;
            n_50 = t;
            t_33 :
            if(!(match_string(n_50, "Nil")))
              {
                if(!(match_string(n_50, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_17;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), term_f_17);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
              o_50 = t;
              y_33 :
              if(match_cons(o_50, sym__2))
                {
                  p_50 = ATgetArgument(o_50, 0);
                  q_50 = ATgetArgument(o_50, 1);
                  {
                    ATerm y_50 = NULL,c_51 = NULL;
                    ATerm g_17;
                    g_17 = t;
                    {
                      ATerm z_50 = NULL,b_51 = NULL;
                      ATerm a_51 = NULL;
                      t = not_null(q_50);
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
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_50))), not_null(m_37))));
                        {
                          ATerm p_17 = t;
                          int s_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(s_17);
                            }
                          else
                            {
                              t = p_17;
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
                    t = g_17;
                    {
                      ATerm d_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), term_t_17);
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
            t = thread_map_1(t, d_2);
            {
              e_51 = t;
              a_34 :
              if(match_cons(e_51, sym__2))
                {
                  f_51 = ATgetArgument(e_51, 0);
                  g_51 = ATgetArgument(e_51, 1);
                  if(((m_50 != NULL) && (m_50 != f_51)))
                    _fail(f_51);
                  else
                    m_50 = f_51;
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
    t = d_17;
    {
      ATerm i_51 = NULL,k_51 = NULL;
      ATerm j_51 = NULL;
      t = not_null(w_36);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), not_null(i_51));
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
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_51))), not_null(m_37))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
    }
    return(t);
  }
  ATerm n_56 (ATerm t)
  {
    ATerm n_51 = NULL;
    ATerm o_51 = NULL;
    t = not_null(n_37);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, not_null(m_37))), term_i_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_18, not_null(m_37)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(n_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
    return(t);
  }
  ATerm o_56 (ATerm t)
  {
    ATerm r_51 = NULL;
    ATerm s_51 = NULL;
    t = not_null(n_37);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, not_null(m_37))), term_q_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_19, not_null(m_37)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_51)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
    return(t);
  }
  ATerm p_56 (ATerm t)
  {
    ATerm v_51 = NULL;
    ATerm w_51 = NULL;
    t = not_null(n_37);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_19, not_null(m_37)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_16), term_w_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_51)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
    return(t);
  }
  ATerm q_56 (ATerm t)
  {
    ATerm a_52 = NULL;
    t = SSLgetAnnotations(not_null(p_37));
    {
      a_52 = t;
      g_34 :
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_t_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), not_null(m_37))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(m_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_z_8, not_null(m_37))));
    return(t);
  }
  ATerm r_56 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
    t = SSLgetAnnotations(not_null(p_37));
    {
      e_52 = t;
      h_34 :
      if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
        {
          f_52 = ATgetFirst((ATermList) e_52);
          g_52 = (ATerm) ATgetNext((ATermList) e_52);
          i_34 :
          if(match_string(f_52, "bound"))
            {
              j_34 :
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), not_null(m_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, not_null(m_37)))))));
    return(t);
  }
  ATerm s_56 (ATerm t)
  {
    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
    t = SSLgetAnnotations(not_null(p_37));
    {
      k_52 = t;
      k_34 :
      if(((ATgetType(k_52) == AT_LIST) && !(ATisEmpty(k_52))))
        {
          l_52 = ATgetFirst((ATermList) k_52);
          m_52 = (ATerm) ATgetNext((ATermList) k_52);
          l_34 :
          if(match_string(l_52, "unbound"))
            {
              m_34 :
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
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_z_8, not_null(m_37)));
    return(t);
  }
  ATerm t_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(w_36), not_null(m_37))), (ATerm) ATmakeAppl(sym_Match_2, not_null(n_37), not_null(m_37))));
    return(t);
  }
  ATerm u_56 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm v_56 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm w_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(p_37), term_e_18);
    return(t);
  }
  ATerm x_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_37)), term_z_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_36)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
    return(t);
  }
  ATerm y_56 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), term_w_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(h_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
    return(t);
  }
  ATerm z_56 (ATerm t)
  {
    ATerm l_53 = NULL,a_54 = NULL,c_54 = NULL;
    ATerm r_20;
    r_20 = t;
    {
      ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
      t = not_null(f_37);
      {
        ATerm s_20 = t;
        if((PushChoice() == 0))
          {
            ATerm m_53 = NULL;
            m_53 = t;
            n_34 :
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
            t = s_20;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), term_f_17);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
              n_53 = t;
              r_34 :
              if(match_cons(n_53, sym__2))
                {
                  o_53 = ATgetArgument(n_53, 0);
                  q_53 = ATgetArgument(n_53, 1);
                  s_34 :
                  if(match_cons(o_53, sym_Var_1))
                    {
                      p_53 = ATgetArgument(o_53, 0);
                      {
                        ATerm t_53 = NULL,v_53 = NULL;
                        ATerm t_20;
                        t_20 = t;
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
                        t = t_20;
                        {
                          ATerm w_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), term_t_17);
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
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_53)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(t_53))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))))), not_null(v_53));
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
              x_53 = t;
              u_34 :
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
    t = r_20;
    {
      ATerm x_20;
      x_20 = t;
      {
        ATerm b_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(d_37));
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
      t = x_20;
      {
        ATerm d_54 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), (ATerm) ATinsert(ATempty, not_null(h_37)));
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
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
      }
    }
    return(t);
  }
  ATerm a_57 (ATerm t)
  {
    ATerm k_54 = NULL;
    ATerm l_54 = NULL;
    t = not_null(f_37);
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(k_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
    return(t);
  }
  ATerm b_57 (ATerm t)
  {
    ATerm s_54 = NULL;
    ATerm t_54 = NULL;
    t = not_null(f_37);
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_54))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
    return(t);
  }
  ATerm c_57 (ATerm t)
  {
    ATerm a_55 = NULL;
    ATerm b_55 = NULL;
    t = not_null(f_37);
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_55)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_37)), not_null(i_37), not_null(j_37)))));
    return(t);
  }
  ATerm d_57 (ATerm t)
  {
    t = not_null(j_37);
    return(t);
  }
  ATerm e_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), (ATerm) ATmakeAppl(sym_Case_3, not_null(m_37), not_null(j_37), not_null(k_37)));
    return(t);
  }
  ATerm f_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_37)));
    return(t);
  }
  ATerm g_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_t_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_37)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_37)))));
    return(t);
  }
  ATerm h_57 (ATerm t)
  {
    t = not_null(m_37);
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
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_37)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37))));
    return(t);
  }
  ATerm i_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), term_z_8, term_e_18));
    return(t);
  }
  ATerm j_57 (ATerm t)
  {
    ATerm p_55 = NULL;
    ATerm q_55 = NULL;
    t = not_null(p_37);
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
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, not_null(p_55)));
    return(t);
  }
  o_37 = t;
  b_35 :
  if(match_cons(o_37, sym_Let_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      m_37 = ATgetArgument(o_37, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(p_37), (ATerm) ATinsert(ATempty, not_null(m_37)));
    }
  else
    {
      if(match_cons(o_37, sym_Where_1))
        {
          p_37 = ATgetArgument(o_37, 0);
          {
            ATerm t_37 = NULL;
            ATerm u_37 = NULL;
            t = new_0(t);
            {
              u_37 = t;
              if(((t_37 != NULL) && (t_37 != u_37)))
                _fail(u_37);
              else
                t_37 = u_37;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_37)), term_j_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_37))))), not_null(p_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_37)), term_z_8, term_e_18))));
          }
        }
      else
        {
          if(match_cons(o_37, sym_Test_1))
            {
              p_37 = ATgetArgument(o_37, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_37));
            }
          else
            {
              if(match_cons(o_37, sym_CallT_3))
                {
                  p_37 = ATgetArgument(o_37, 0);
                  m_37 = ATgetArgument(o_37, 1);
                  j_37 = ATgetArgument(o_37, 2);
                  c_35 :
                  if(match_cons(p_37, sym_SVar_1))
                    {
                      n_37 = ATgetArgument(p_37, 0);
                      {
                        ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
                        ATerm i_38 = NULL;
                        t = not_null(m_37);
                        {
                          ATerm j_38 = NULL;
                          ATerm f_2 (ATerm t)
                          {
                            ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
                            c_38 = t;
                            u_32 :
                            if(match_cons(c_38, sym_CallT_3))
                              {
                                d_38 = ATgetArgument(c_38, 0);
                                f_38 = ATgetArgument(c_38, 1);
                                g_38 = ATgetArgument(c_38, 2);
                                v_32 :
                                if(match_cons(d_38, sym_SVar_1))
                                  {
                                    e_38 = ATgetArgument(d_38, 0);
                                    w_32 :
                                    if(((ATgetType(f_38) == AT_LIST) && ATisEmpty(f_38)))
                                      {
                                        x_32 :
                                        if(((ATgetType(g_38) == AT_LIST) && ATisEmpty(g_38)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(e_38));
                                          }
                                        else
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
                            i_38 = t;
                            {
                              if(((z_37 != NULL) && (z_37 != i_38)))
                                _fail(i_38);
                              else
                                z_37 = i_38;
                              {
                                t = not_null(j_37);
                                {
                                  ATerm k_38 = NULL;
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
                                    j_38 = t;
                                    {
                                      if(((a_38 != NULL) && (a_38 != j_38)))
                                        _fail(j_38);
                                      else
                                        a_38 = j_38;
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_18)), not_null(a_38)), not_null(z_37));
                                        {
                                          t = concat_0(t);
                                          {
                                            k_38 = t;
                                            if(((b_38 != NULL) && (b_38 != k_38)))
                                              _fail(k_38);
                                            else
                                              b_38 = k_38;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_37)), not_null(b_38))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(o_37, sym_PrimT_3))
                    {
                      p_37 = ATgetArgument(o_37, 0);
                      m_37 = ATgetArgument(o_37, 1);
                      j_37 = ATgetArgument(o_37, 2);
                      {
                        ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
                        ATerm n_43 = NULL;
                        t = not_null(m_37);
                        {
                          ATerm o_43 = NULL;
                          ATerm i_2 (ATerm t)
                          {
                            ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,j_39 = NULL,k_39 = NULL;
                            r_38 = t;
                            c_33 :
                            if(match_cons(r_38, sym_CallT_3))
                              {
                                s_38 = ATgetArgument(r_38, 0);
                                j_39 = ATgetArgument(r_38, 1);
                                k_39 = ATgetArgument(r_38, 2);
                                d_33 :
                                if(match_cons(s_38, sym_SVar_1))
                                  {
                                    t_38 = ATgetArgument(s_38, 0);
                                    e_33 :
                                    if(((ATgetType(j_39) == AT_LIST) && ATisEmpty(j_39)))
                                      {
                                        f_33 :
                                        if(((ATgetType(k_39) == AT_LIST) && ATisEmpty(k_39)))
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_38));
                                          }
                                        else
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
                            n_43 = t;
                            {
                              if(((o_38 != NULL) && (o_38 != n_43)))
                                _fail(n_43);
                              else
                                o_38 = n_43;
                              {
                                t = not_null(j_37);
                                {
                                  ATerm p_48 = NULL;
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
                                    o_43 = t;
                                    {
                                      if(((p_38 != NULL) && (p_38 != o_43)))
                                        _fail(o_43);
                                      else
                                        p_38 = o_43;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(p_38));
                                        {
                                          t = conc_0(t);
                                          {
                                            p_48 = t;
                                            if(((q_38 != NULL) && (q_38 != p_48)))
                                              _fail(p_48);
                                            else
                                              q_38 = p_48;
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_37)), not_null(q_38))));
                      }
                    }
                  else
                    {
                      if(match_cons(o_37, sym_Not_1))
                        {
                          p_37 = ATgetArgument(o_37, 0);
                          {
                            ATerm r_48 = NULL;
                            ATerm s_48 = NULL;
                            t = new_0(t);
                            {
                              s_48 = t;
                              if(((r_48 != NULL) && (r_48 != s_48)))
                                _fail(s_48);
                              else
                                r_48 = s_48;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_48)), term_j_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), term_e_22), not_null(p_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_48)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(o_37, sym_LGChoice_2))
                            {
                              p_37 = ATgetArgument(o_37, 0);
                              m_37 = ATgetArgument(o_37, 1);
                              {
                                ATerm v_48 = NULL;
                                ATerm w_48 = NULL;
                                t = new_0(t);
                                {
                                  w_48 = t;
                                  if(((v_48 != NULL) && (v_48 != w_48)))
                                    _fail(w_48);
                                  else
                                    v_48 = w_48;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_48)), term_j_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_22, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_48)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(o_37, sym_GChoice_2))
                                {
                                  p_37 = ATgetArgument(o_37, 0);
                                  m_37 = ATgetArgument(o_37, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(p_37), not_null(m_37));
                                }
                              else
                                {
                                  if(match_cons(o_37, sym_GuardedLChoice_3))
                                    {
                                      p_37 = ATgetArgument(o_37, 0);
                                      m_37 = ATgetArgument(o_37, 1);
                                      j_37 = ATgetArgument(o_37, 2);
                                      {
                                        ATerm c_49 = NULL,d_49 = NULL;
                                        ATerm e_49 = NULL;
                                        ATerm f_49 = NULL;
                                        t = new_0(t);
                                        {
                                          e_49 = t;
                                          {
                                            if(((c_49 != NULL) && (c_49 != e_49)))
                                              _fail(e_49);
                                            else
                                              c_49 = e_49;
                                            {
                                              t = new_0(t);
                                              {
                                                f_49 = t;
                                                if(((d_49 != NULL) && (d_49 != f_49)))
                                                  _fail(f_49);
                                                else
                                                  d_49 = f_49;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_49)), term_j_9), term_z_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_49)), term_j_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(d_49)))))), not_null(p_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_49)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(o_37, sym_LChoice_2))
                                        {
                                          p_37 = ATgetArgument(o_37, 0);
                                          m_37 = ATgetArgument(o_37, 1);
                                          {
                                            ATerm i_49 = NULL,j_49 = NULL;
                                            ATerm k_49 = NULL;
                                            ATerm l_49 = NULL;
                                            t = new_0(t);
                                            {
                                              k_49 = t;
                                              {
                                                if(((i_49 != NULL) && (i_49 != k_49)))
                                                  _fail(k_49);
                                                else
                                                  i_49 = k_49;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    l_49 = t;
                                                    if(((j_49 != NULL) && (j_49 != l_49)))
                                                      _fail(l_49);
                                                    else
                                                      j_49 = l_49;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_49)), term_j_9), term_z_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_49)), term_j_9), term_i_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_49)))))), term_j_23), not_null(p_37))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_37)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_18, term_z_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_49)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_37, sym_Choice_2))
                                            {
                                              p_37 = ATgetArgument(o_37, 0);
                                              m_37 = ATgetArgument(o_37, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_37), not_null(m_37));
                                            }
                                          else
                                            {
                                              if(match_cons(o_37, sym_Seq_2))
                                                {
                                                  p_37 = ATgetArgument(o_37, 0);
                                                  m_37 = ATgetArgument(o_37, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_37)), not_null(p_37)));
                                                }
                                              else
                                                {
                                                  if(match_cons(o_37, sym_Scope_2))
                                                    {
                                                      p_37 = ATgetArgument(o_37, 0);
                                                      m_37 = ATgetArgument(o_37, 1);
                                                      {
                                                        ATerm u_49 = NULL;
                                                        ATerm o_23;
                                                        o_23 = t;
                                                        {
                                                          t = not_null(p_37);
                                                          {
                                                            ATerm l_2 (ATerm t)
                                                            {
                                                              ATerm s_49 = NULL;
                                                              s_49 = t;
                                                              {
                                                                ATerm p_23;
                                                                p_23 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_49), term_r_23);
                                                                  {
                                                                    ATerm m_2 (ATerm t)
                                                                    {
                                                                      t = term_b_15;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, m_2);
                                                                  }
                                                                }
                                                                t = p_23;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, l_2);
                                                          }
                                                        }
                                                        t = o_23;
                                                        {
                                                          ATerm x_49 = NULL;
                                                          t = not_null(p_37);
                                                          {
                                                            ATerm n_2 (ATerm t)
                                                            {
                                                              ATerm v_49 = NULL;
                                                              v_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_49)), term_j_9), term_s_23);
                                                              return(t);
                                                            }
                                                            t = map_1(t, n_2);
                                                            {
                                                              x_49 = t;
                                                              if(((u_49 != NULL) && (u_49 != x_49)))
                                                                _fail(x_49);
                                                              else
                                                                u_49 = x_49;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, not_null(u_49))), (ATerm) ATinsert(ATempty, not_null(m_37)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(o_37, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(o_37, sym_Id_0))
                                                            {
                                                              t = term_u_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(o_37, sym_Match_2))
                                                                {
                                                                  p_37 = ATgetArgument(o_37, 0);
                                                                  m_37 = ATgetArgument(o_37, 1);
                                                                  d_35 :
                                                                  if(match_cons(p_37, sym_Op_2))
                                                                    {
                                                                      n_37 = ATgetArgument(p_37, 0);
                                                                      w_36 = ATgetArgument(p_37, 1);
                                                                      e_35 :
                                                                      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
                                                                        {
                                                                          s_36 = ATgetFirst((ATermList) w_36);
                                                                          t_36 = (ATerm) ATgetNext((ATermList) w_36);
                                                                          f_35 :
                                                                          if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
                                                                            {
                                                                              u_36 = ATgetFirst((ATermList) t_36);
                                                                              v_36 = (ATerm) ATgetNext((ATermList) t_36);
                                                                              g_35 :
                                                                              if(((ATgetType(v_36) == AT_LIST) && ATisEmpty(v_36)))
                                                                                {
                                                                                  h_35 :
                                                                                  if(match_string(n_37, "Cons"))
                                                                                    {
                                                                                      ATerm x_23 = t;
                                                                                      int y_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm g_50 = NULL;
                                                                                          ATerm h_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(u_36), (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, not_null(m_37))))))), (ATerm) ATmakeAppl(sym__2, not_null(s_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, not_null(m_37))))));
                                                                                          {
                                                                                            ATerm o_2 (ATerm t)
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
                                                                                            t = map_1(t, o_2);
                                                                                            {
                                                                                              h_50 = t;
                                                                                              if(((g_50 != NULL) && (g_50 != h_50)))
                                                                                                _fail(h_50);
                                                                                              else
                                                                                                g_50 = h_50;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, not_null(m_37))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, not_null(m_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_50)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
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
                                                                                  i_35 :
                                                                                  t = m_56(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              j_35 :
                                                                              t = m_56(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(w_36) == AT_LIST) && ATisEmpty(w_36)))
                                                                            {
                                                                              k_35 :
                                                                              if(match_string(n_37, "Nil"))
                                                                                {
                                                                                  ATerm d_24 = t;
                                                                                  int h_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, not_null(m_37))), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, not_null(m_37))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATempty, term_e_18))));
                                                                                      ;
                                                                                      LocalPopChoice(h_24);
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
                                                                              l_35 :
                                                                              t = m_56(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(p_37, sym_Real_1))
                                                                        {
                                                                          n_37 = ATgetArgument(p_37, 0);
                                                                          t = n_56(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(p_37, sym_Int_1))
                                                                            {
                                                                              n_37 = ATgetArgument(p_37, 0);
                                                                              t = o_56(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(p_37, sym_Str_1))
                                                                                {
                                                                                  n_37 = ATgetArgument(p_37, 0);
                                                                                  t = p_56(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(p_37, sym_Var_1))
                                                                                    {
                                                                                      n_37 = ATgetArgument(p_37, 0);
                                                                                      {
                                                                                        ATerm i_24 = t;
                                                                                        int l_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_56(t);
                                                                                            ;
                                                                                            LocalPopChoice(l_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_24;
                                                                                            {
                                                                                              ATerm m_24 = t;
                                                                                              int u_24 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = r_56(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(u_24);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_24;
                                                                                                  t = s_56(t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(p_37, sym_As_2))
                                                                                        {
                                                                                          n_37 = ATgetArgument(p_37, 0);
                                                                                          w_36 = ATgetArgument(p_37, 1);
                                                                                          t = t_56(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(p_37, sym_BuildDefault_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(p_37, 0);
                                                                                              t = u_56(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(p_37, sym_Wld_0))
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
                                                                  if(match_cons(o_37, sym_Match_1))
                                                                    {
                                                                      p_37 = ATgetArgument(o_37, 0);
                                                                      t = w_56(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(o_37, sym_Case_3))
                                                                        {
                                                                          p_37 = ATgetArgument(o_37, 0);
                                                                          m_37 = ATgetArgument(o_37, 1);
                                                                          j_37 = ATgetArgument(o_37, 2);
                                                                          m_35 :
                                                                          if(match_cons(p_37, sym_Var_1))
                                                                            {
                                                                              n_37 = ATgetArgument(p_37, 0);
                                                                              n_35 :
                                                                              if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
                                                                                {
                                                                                  l_37 = ATgetFirst((ATermList) m_37);
                                                                                  i_37 = (ATerm) ATgetNext((ATermList) m_37);
                                                                                  o_35 :
                                                                                  if(match_cons(l_37, sym_Alt_3))
                                                                                    {
                                                                                      e_37 = ATgetArgument(l_37, 0);
                                                                                      g_37 = ATgetArgument(l_37, 1);
                                                                                      h_37 = ATgetArgument(l_37, 2);
                                                                                      p_35 :
                                                                                      if(match_cons(e_37, sym_Fun_2))
                                                                                        {
                                                                                          f_37 = ATgetArgument(e_37, 0);
                                                                                          d_37 = ATgetArgument(e_37, 1);
                                                                                          q_35 :
                                                                                          if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
                                                                                            {
                                                                                              x_36 = ATgetFirst((ATermList) g_37);
                                                                                              z_36 = (ATerm) ATgetNext((ATermList) g_37);
                                                                                              r_35 :
                                                                                              if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
                                                                                                {
                                                                                                  a_37 = ATgetFirst((ATermList) z_36);
                                                                                                  c_37 = (ATerm) ATgetNext((ATermList) z_36);
                                                                                                  s_35 :
                                                                                                  if(((ATgetType(c_37) == AT_LIST) && ATisEmpty(c_37)))
                                                                                                    {
                                                                                                      t_35 :
                                                                                                      if(match_cons(a_37, sym_Var_1))
                                                                                                        {
                                                                                                          b_37 = ATgetArgument(a_37, 0);
                                                                                                          u_35 :
                                                                                                          if(match_cons(x_36, sym_Var_1))
                                                                                                            {
                                                                                                              y_36 = ATgetArgument(x_36, 0);
                                                                                                              v_35 :
                                                                                                              if(match_int(d_37, 2))
                                                                                                                {
                                                                                                                  w_35 :
                                                                                                                  if(match_string(f_37, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm v_24 = t;
                                                                                                                      int x_24 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = x_56(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(x_24);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = v_24;
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
                                                                                                                  x_35 :
                                                                                                                  t = z_56(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              y_35 :
                                                                                                              z_35 :
                                                                                                              t = z_56(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          a_36 :
                                                                                                          b_36 :
                                                                                                          c_36 :
                                                                                                          t = z_56(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      d_36 :
                                                                                                      e_36 :
                                                                                                      f_36 :
                                                                                                      g_36 :
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  h_36 :
                                                                                                  i_36 :
                                                                                                  j_36 :
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(g_37) == AT_LIST) && ATisEmpty(g_37)))
                                                                                                {
                                                                                                  k_36 :
                                                                                                  if(match_int(d_37, 0))
                                                                                                    {
                                                                                                      l_36 :
                                                                                                      if(match_string(f_37, "Nil"))
                                                                                                        {
                                                                                                          ATerm y_24 = t;
                                                                                                          int z_24 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = y_56(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(z_24);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_24;
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
                                                                                                      m_36 :
                                                                                                      t = z_56(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  n_36 :
                                                                                                  o_36 :
                                                                                                  t = z_56(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(e_37, sym_Real_1))
                                                                                            {
                                                                                              f_37 = ATgetArgument(e_37, 0);
                                                                                              t = a_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(e_37, sym_Int_1))
                                                                                                {
                                                                                                  f_37 = ATgetArgument(e_37, 0);
                                                                                                  t = b_57(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(e_37, sym_Str_1))
                                                                                                    {
                                                                                                      f_37 = ATgetArgument(e_37, 0);
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
                                                                                  if(((ATgetType(m_37) == AT_LIST) && ATisEmpty(m_37)))
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
                                                                          if(match_cons(o_37, sym_Case_4))
                                                                            {
                                                                              p_37 = ATgetArgument(o_37, 0);
                                                                              m_37 = ATgetArgument(o_37, 1);
                                                                              j_37 = ATgetArgument(o_37, 2);
                                                                              k_37 = ATgetArgument(o_37, 3);
                                                                              t = e_57(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(o_37, sym_Continue_1))
                                                                                {
                                                                                  p_37 = ATgetArgument(o_37, 0);
                                                                                  t = f_57(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(o_37, sym_Assign_2))
                                                                                    {
                                                                                      p_37 = ATgetArgument(o_37, 0);
                                                                                      m_37 = ATgetArgument(o_37, 1);
                                                                                      p_36 :
                                                                                      if(match_cons(p_37, sym_Var_1))
                                                                                        {
                                                                                          n_37 = ATgetArgument(p_37, 0);
                                                                                          q_36 :
                                                                                          if(match_cons(m_37, sym_Var_1))
                                                                                            {
                                                                                              l_37 = ATgetArgument(m_37, 0);
                                                                                              {
                                                                                                ATerm a_25 = t;
                                                                                                int b_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = g_57(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(b_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_25;
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
                                                                                      if(match_cons(o_37, sym_Assign_1))
                                                                                        {
                                                                                          p_37 = ATgetArgument(o_37, 0);
                                                                                          r_36 :
                                                                                          if(match_cons(p_37, sym_Var_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(p_37, 0);
                                                                                              t = i_57(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(o_37, sym_Build_1))
                                                                                            {
                                                                                              p_37 = ATgetArgument(o_37, 0);
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
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, k_120, q_60);
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
        ATerm e_25 = t;
        int f_25 = stack_ptr;
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
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
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
  ATerm p_64 = NULL,q_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  ATerm g_67 (ATerm t)
  {
    ATerm q_65 = NULL,i_66 = NULL,n_66 = NULL;
    ATerm i_25;
    i_25 = t;
    {
      ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
      t = not_null(d_65);
      {
        ATerm q_25 = t;
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
            t = q_25;
          }
        {
          t = not_null(z_64);
          {
            ATerm p_2 (ATerm t)
            {
              t = Var_1(t, _id);
              return(t);
            }
            t = map_1(t, p_2);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), term_f_17);
              {
                ATerm q_2 (ATerm t)
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
                            ATerm r_25;
                            r_25 = t;
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
                            t = r_25;
                            {
                              ATerm e_66 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_65), term_t_17);
                              {
                                t = add_0(t);
                                {
                                  e_66 = t;
                                  if(((c_66 != NULL) && (c_66 != e_66)))
                                    _fail(e_66);
                                  else
                                    c_66 = e_66;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_65)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_66))), term_e_18)))), not_null(c_66));
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
    t = i_25;
    {
      ATerm s_25;
      s_25 = t;
      {
        ATerm j_66 = NULL,m_66 = NULL;
        ATerm l_66 = NULL;
        t = not_null(z_64);
        {
          t = length_0(t);
          {
            l_66 = t;
            if(((j_66 != NULL) && (j_66 != l_66)))
              _fail(l_66);
            else
              j_66 = l_66;
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
      t = s_25;
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
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_66))), term_e_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(n_66)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_66))), term_e_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_66))), term_e_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
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
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_67)))), term_e_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
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
              z_64 = ATgetArgument(c_65, 1);
              z_63 :
              if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
                {
                  p_64 = ATgetFirst((ATermList) z_64);
                  t_64 = (ATerm) ATgetNext((ATermList) z_64);
                  a_64 :
                  if(((ATgetType(t_64) == AT_LIST) && !(ATisEmpty(t_64))))
                    {
                      u_64 = ATgetFirst((ATermList) t_64);
                      w_64 = (ATerm) ATgetNext((ATermList) t_64);
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
                                      ATerm x_25 = t;
                                      int y_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, term_e_18)), term_w_19), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, term_e_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_65)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_64)), term_z_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, term_z_25)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_64)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATempty, term_z_25)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
                                          ;
                                          LocalPopChoice(y_25);
                                        }
                                      else
                                        {
                                          t = x_25;
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
                  if(((ATgetType(z_64) == AT_LIST) && ATisEmpty(z_64)))
                    {
                      n_64 :
                      if(match_string(d_65, "Nil"))
                        {
                          ATerm a_26 = t;
                          int f_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATempty, term_e_18)), term_w_19), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, term_e_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_65))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_65))));
                              ;
                              LocalPopChoice(f_26);
                            }
                          else
                            {
                              t = a_26;
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
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_26), not_null(e_68)));
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_68)), term_l_26), term_h_26);
        }
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_68)), term_h_26), term_h_26);
        }
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_69)), term_m_26), term_h_26);
        }
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
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm t_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = t_26;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm z_26 = t;
  int c_27 = stack_ptr;
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
      LocalPopChoice(c_27);
    }
  else
    {
      t = z_26;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
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
        ATerm f_27;
        f_27 = t;
        {
          ATerm r_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), not_null(m_69));
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
        t = f_27;
        {
          ATerm t_69 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_h_27), not_null(m_69));
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
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_26), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(s_69))), term_k_27)))), not_null(n_69)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(q_69))), term_k_27)))));
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
      ATerm y_2 (ATerm t)
      {
        t = term_a_8;
        return(t);
      }
      t = rewrite_1(t, y_2);
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
      ATerm z_2 (ATerm t)
      {
        t = term_f_8;
        return(t);
      }
      t = rewrite_1(t, z_2);
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
        ATerm l_27;
        l_27 = t;
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
                                    ATerm m_27 = t;
                                    int n_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm a_3 (ATerm t)
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
                                        t = _2(t, a_3, _id);
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
        t = l_27;
        {
          ATerm b_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_71), (ATerm) ATinsert(ATempty, term_r_27));
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
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_i_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(a_72)))), not_null(v_71));
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
            ATerm s_27;
            s_27 = t;
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
                        ATerm t_27 = t;
                        int x_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_3 (ATerm t)
                            {
                              ATerm y_27 = t;
                              int c_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = TraceFun_0(t);
                                  ;
                                  LocalPopChoice(c_28);
                                }
                              else
                                {
                                  t = y_27;
                                  t = TraceAllFuns_0(t);
                                }
                              return(t);
                            }
                            t = _2(t, b_3, _id);
                            t = TracedBody_0(t);
                            ;
                            LocalPopChoice(x_27);
                          }
                        else
                          {
                            t = t_27;
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
            t = s_27;
            {
              ATerm k_72 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_72), (ATerm) ATinsert(ATempty, term_r_27));
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
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_i_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_71)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(j_72)))), not_null(g_72));
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
  ATerm m_73 = NULL;
  m_73 = t;
  if(((f_73 != NULL) && (f_73 != m_73)))
    _fail(m_73);
  else
    f_73 = m_73;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(f_73));
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
  q_73 :
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
    t = term_f_28;
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
          ATerm c_3 (ATerm t)
          {
            t = term_g_28;
            return(t);
          }
          t = rewrite_1(t, c_3);
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
        ATerm h_28;
        h_28 = t;
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
        t = h_28;
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
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_75)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(q_75)), term_z_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_28), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(o_75))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(u_75))))))));
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
  ATerm s_76 = NULL;
  ATerm u_76 = NULL;
  s_76 = t;
  {
    ATerm v_76 = NULL,z_76 = NULL;
    ATerm y_76 = NULL;
    t = not_null(s_76);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          y_76 = t;
          if(((v_76 != NULL) && (v_76 != y_76)))
            _fail(y_76);
          else
            v_76 = y_76;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_76), (ATerm) ATinsert(ATempty, term_n_28));
      {
        t = conc_0(t);
        {
          z_76 = t;
          if(((u_76 != NULL) && (u_76 != z_76)))
            _fail(z_76);
          else
            u_76 = z_76;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_t_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_9)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(u_76)));
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
  ATerm e_77 = NULL;
  e_77 = t;
  t = SSL_int_to_string(not_null(e_77));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  n_77 :
  if(((ATgetType(p_77) == AT_LIST) && !(ATisEmpty(p_77))))
    {
      q_77 = ATgetFirst((ATermList) p_77);
      r_77 = (ATerm) ATgetNext((ATermList) p_77);
      o_77 :
      if(match_int(q_77, 95))
        {
          ATerm t_77 = NULL;
          ATerm u_77 = NULL;
          t = not_null(r_77);
          {
            t = p_0(t);
            {
              u_77 = t;
              if(((t_77 != NULL) && (t_77 != u_77)))
                _fail(u_77);
              else
                t_77 = u_77;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_77)), term_u_28), term_u_28);
        }
      else
        {
          if(match_int(q_77, 45))
            {
              ATerm w_77 = NULL;
              ATerm e_78 = NULL;
              t = not_null(r_77);
              {
                t = p_0(t);
                {
                  e_78 = t;
                  if(((w_77 != NULL) && (w_77 != e_78)))
                    _fail(e_78);
                  else
                    w_77 = e_78;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_77)), term_u_28);
            }
          else
            {
              if(match_int(q_77, 39))
                {
                  ATerm g_78 = NULL;
                  ATerm h_78 = NULL;
                  t = not_null(r_77);
                  {
                    t = p_0(t);
                    {
                      h_78 = t;
                      if(((g_78 != NULL) && (g_78 != h_78)))
                        _fail(h_78);
                      else
                        g_78 = h_78;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_78)), term_u_28), term_y_28), term_u_28);
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
    ATerm o_78 (ATerm t)
    {
      ATerm a_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_123(t, o_78);
          ;
          LocalPopChoice(d_29);
        }
      else
        {
          t = a_29;
          {
            ATerm e_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, o_78);
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = o_78(t);
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
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_119(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
        t_78 = t;
        s_78 :
        if(((ATgetType(t_78) == AT_LIST) && !(ATisEmpty(t_78))))
          {
            u_78 = ATgetFirst((ATermList) t_78);
            v_78 = (ATerm) ATgetNext((ATermList) t_78);
            {
              ATerm y_78 = NULL,a_79 = NULL;
              ATerm i_29;
              i_29 = t;
              {
                ATerm z_78 = NULL;
                t = not_null(u_78);
                {
                  t = y_119(t);
                  {
                    z_78 = t;
                    if(((y_78 != NULL) && (y_78 != z_78)))
                      _fail(z_78);
                    else
                      y_78 = z_78;
                  }
                }
              }
              t = i_29;
              {
                ATerm b_79 = NULL;
                t = not_null(v_78);
                {
                  t = foldr_3(t, w_119, x_119, y_119);
                  {
                    b_79 = t;
                    if(((a_79 != NULL) && (a_79 != b_79)))
                      _fail(b_79);
                    else
                      a_79 = b_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_78), not_null(a_79));
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
  ATerm d_3 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  j_79 = t;
  h_79 :
  if(match_cons(j_79, sym_FunType_2))
    {
      k_79 = ATgetArgument(j_79, 0);
      i_79 = ATgetArgument(j_79, 1);
      {
        t = not_null(k_79);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(j_79, sym_ConstType_1))
        {
          k_79 = ATgetArgument(j_79, 0);
          t = term_f_17;
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
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  w_79 = t;
  v_79 :
  if(match_cons(w_79, sym_OpDecl_2))
    {
      x_79 = ATgetArgument(w_79, 0);
      y_79 = ATgetArgument(w_79, 1);
      {
        ATerm b_80 = NULL,c_80 = NULL;
        ATerm d_80 = NULL;
        t = not_null(y_79);
        {
          ATerm e_80 = NULL,g_80 = NULL,i_80 = NULL;
          t = Arity_0(t);
          {
            d_80 = t;
            {
              if(((b_80 != NULL) && (b_80 != d_80)))
                _fail(d_80);
              else
                b_80 = d_80;
              {
                ATerm j_29;
                j_29 = t;
                {
                  ATerm f_80 = NULL;
                  t = not_null(x_79);
                  {
                    t = cify_0(t);
                    {
                      f_80 = t;
                      if(((e_80 != NULL) && (e_80 != f_80)))
                        _fail(f_80);
                      else
                        e_80 = f_80;
                    }
                  }
                }
                t = j_29;
                {
                  ATerm h_80 = NULL;
                  t = not_null(b_80);
                  {
                    t = int_to_string_0(t);
                    {
                      h_80 = t;
                      if(((g_80 != NULL) && (g_80 != h_80)))
                        _fail(h_80);
                      else
                        g_80 = h_80;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_80)), term_v_29), not_null(e_80)), term_k_29);
                    {
                      t = concat_strings_0(t);
                      {
                        i_80 = t;
                        {
                          if(((c_80 != NULL) && (c_80 != i_80)))
                            _fail(i_80);
                          else
                            c_80 = i_80;
                          {
                            ATerm j_30;
                            j_30 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_79), not_null(b_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_30, not_null(c_80)));
                              {
                                ATerm f_3 (ATerm t)
                                {
                                  t = term_g_28;
                                  return(t);
                                }
                                t = assert_1(t, f_3);
                              }
                            }
                            t = j_30;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_80)), term_j_9)));
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
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL;
  w_80 = t;
  s_80 :
  if(match_cons(w_80, sym_Signature_1))
    {
      x_80 = ATgetArgument(w_80, 0);
      t_80 :
      if(((ATgetType(x_80) == AT_LIST) && !(ATisEmpty(x_80))))
        {
          y_80 = ATgetFirst((ATermList) x_80);
          a_81 = (ATerm) ATgetNext((ATermList) x_80);
          u_80 :
          if(match_cons(y_80, sym_Constructors_1))
            {
              z_80 = ATgetArgument(y_80, 0);
              v_80 :
              if(((ATgetType(a_81) == AT_LIST) && ATisEmpty(a_81)))
                {
                  {
                    ATerm u_81 = NULL,v_81 = NULL,y_81 = NULL;
                    ATerm b_31;
                    b_31 = t;
                    {
                      ATerm w_81 = NULL;
                      t = not_null(z_80);
                      {
                        ATerm x_81 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          w_81 = t;
                          {
                            if(((u_81 != NULL) && (u_81 != w_81)))
                              _fail(w_81);
                            else
                              u_81 = w_81;
                            {
                              t = not_null(z_80);
                              {
                                t = InitConstructors_0(t);
                                {
                                  x_81 = t;
                                  if(((v_81 != NULL) && (v_81 != x_81)))
                                    _fail(x_81);
                                  else
                                    v_81 = x_81;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = b_31;
                    {
                      ATerm z_81 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_81), (ATerm) ATinsert(ATempty, not_null(v_81)));
                      {
                        t = conc_0(t);
                        {
                          z_81 = t;
                          if(((y_81 != NULL) && (y_81 != z_81)))
                            _fail(z_81);
                          else
                            y_81 = z_81;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(y_81));
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
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  w_82 = t;
  u_82 :
  if(match_cons(w_82, sym_FunType_2))
    {
      x_82 = ATgetArgument(w_82, 0);
      v_82 = ATgetArgument(w_82, 1);
      {
        ATerm g_83 = NULL;
        ATerm j_83 = NULL;
        t = not_null(x_82);
        {
          t = map_1(t, TranslateType_0);
          {
            j_83 = t;
            if(((g_83 != NULL) && (g_83 != j_83)))
              _fail(j_83);
            else
              g_83 = j_83;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(g_83)));
      }
    }
  else
    {
      if(match_cons(w_82, sym_ConstType_1))
        {
          x_82 = ATgetArgument(w_82, 0);
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
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  t_83 = t;
  q_83 :
  if(match_cons(t_83, sym_VarDec_2))
    {
      u_83 = ATgetArgument(t_83, 0);
      v_83 = ATgetArgument(t_83, 1);
      r_83 :
      if(match_cons(v_83, sym_FunType_2))
        {
          w_83 = ATgetArgument(v_83, 0);
          s_83 = ATgetArgument(v_83, 1);
          {
            ATerm z_83 = NULL;
            ATerm a_84 = NULL;
            t = not_null(w_83);
            {
              t = map_1(t, TranslateType_0);
              {
                a_84 = t;
                if(((z_83 != NULL) && (z_83 != a_84)))
                  _fail(a_84);
                else
                  z_83 = a_84;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_83)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(z_83)))));
          }
        }
      else
        {
          if(match_cons(v_83, sym_ConstType_1))
            {
              w_83 = ATgetArgument(v_83, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_i_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_83)), term_j_9));
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
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,s_84 = NULL;
  m_84 = t;
  l_84 :
  if(match_cons(m_84, sym_SDef_3))
    {
      n_84 = ATgetArgument(m_84, 0);
      o_84 = ATgetArgument(m_84, 1);
      p_84 = ATgetArgument(m_84, 2);
      {
        ATerm w_84 = NULL;
        ATerm x_84 = NULL;
        t = not_null(o_84);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            x_84 = t;
            {
              if(((w_84 != NULL) && (w_84 != x_84)))
                _fail(x_84);
              else
                w_84 = x_84;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_84), (ATerm) ATinsert(ATempty, term_i_9));
                t = conc_0(t);
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(w_84))))));
      }
    }
  else
    {
      if(match_cons(m_84, sym_SDefT_4))
        {
          n_84 = ATgetArgument(m_84, 0);
          o_84 = ATgetArgument(m_84, 1);
          p_84 = ATgetArgument(m_84, 2);
          s_84 = ATgetArgument(m_84, 3);
          {
            ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
            ATerm f_85 = NULL;
            t = not_null(o_84);
            {
              ATerm g_85 = NULL;
              t = map_1(t, TranslateVarDec_0);
              {
                f_85 = t;
                {
                  if(((c_85 != NULL) && (c_85 != f_85)))
                    _fail(f_85);
                  else
                    c_85 = f_85;
                  {
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
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_9)), not_null(d_85)), not_null(c_85));
                            {
                              t = concat_0(t);
                              {
                                h_85 = t;
                                if(((e_85 != NULL) && (e_85 != h_85)))
                                  _fail(h_85);
                                else
                                  e_85 = h_85;
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
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_84)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(e_85))))));
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
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL;
  a_86 = t;
  u_85 :
  if(match_cons(a_86, sym_Specification_1))
    {
      b_86 = ATgetArgument(a_86, 0);
      v_85 :
      if(((ATgetType(b_86) == AT_LIST) && !(ATisEmpty(b_86))))
        {
          c_86 = ATgetFirst((ATermList) b_86);
          g_86 = (ATerm) ATgetNext((ATermList) b_86);
          w_85 :
          if(match_cons(c_86, sym_Signature_1))
            {
              f_86 = ATgetArgument(c_86, 0);
              x_85 :
              if(((ATgetType(g_86) == AT_LIST) && !(ATisEmpty(g_86))))
                {
                  h_86 = ATgetFirst((ATermList) g_86);
                  j_86 = (ATerm) ATgetNext((ATermList) g_86);
                  y_85 :
                  if(match_cons(h_86, sym_Strategies_1))
                    {
                      i_86 = ATgetArgument(h_86, 0);
                      z_85 :
                      if(((ATgetType(j_86) == AT_LIST) && ATisEmpty(j_86)))
                        {
                          {
                            ATerm m_86 = NULL,n_86 = NULL,v_86 = NULL;
                            ATerm c_31;
                            c_31 = t;
                            {
                              ATerm o_86 = NULL;
                              t = not_null(i_86);
                              {
                                ATerm t_86 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  o_86 = t;
                                  {
                                    if(((m_86 != NULL) && (m_86 != o_86)))
                                      _fail(o_86);
                                    else
                                      m_86 = o_86;
                                    {
                                      t = term_o_8;
                                      {
                                        ATerm d_31 = t;
                                        int e_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm g_3 (ATerm t)
                                              {
                                                ATerm p_86 = NULL;
                                                ATerm q_86 = NULL,s_86 = NULL;
                                                ATerm r_86 = NULL;
                                                r_86 = t;
                                                if(((q_86 != NULL) && (q_86 != r_86)))
                                                  _fail(r_86);
                                                else
                                                  q_86 = r_86;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_f_31, not_null(q_86));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      s_86 = t;
                                                      if(((p_86 != NULL) && (p_86 != s_86)))
                                                        _fail(s_86);
                                                      else
                                                        p_86 = s_86;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(p_86));
                                                return(t);
                                              }
                                              t = map_1(t, g_3);
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
                                          t_86 = t;
                                          if(((n_86 != NULL) && (n_86 != t_86)))
                                            _fail(t_86);
                                          else
                                            n_86 = t_86;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = c_31;
                            {
                              ATerm w_86 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(i_86)), term_b_32)), not_null(m_86)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_d_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_n_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_31, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_q_31), term_s_31, term_j_9))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_31), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_v_31))), term_k_27)))))))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(f_86))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_31, (ATerm) ATinsert(ATempty, term_l_31)))), not_null(n_86));
                              {
                                t = concat_0(t);
                                {
                                  w_86 = t;
                                  if(((v_86 != NULL) && (v_86 != w_86)))
                                    _fail(w_86);
                                  else
                                    v_86 = w_86;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(v_86));
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
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  f_87 = t;
  e_87 :
  if(((ATgetType(f_87) == AT_LIST) && !(ATisEmpty(f_87))))
    {
      g_87 = ATgetFirst((ATermList) f_87);
      h_87 = (ATerm) ATgetNext((ATermList) f_87);
      t = not_null(h_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  m_87 :
  if(match_cons(n_87, sym__2))
    {
      o_87 = ATgetArgument(n_87, 0);
      p_87 = ATgetArgument(n_87, 1);
      {
        ATerm c_32;
        c_32 = t;
        {
          ATerm s_87 = NULL;
          ATerm t_87 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), not_null(p_87));
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
              t_87 = t;
              if(((s_87 != NULL) && (s_87 != t_87)))
                _fail(t_87);
              else
                s_87 = t_87;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_87), not_null(p_87), not_null(s_87));
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
ATerm end_scope_1 (ATerm t, ATerm j_134 (ATerm))
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  ATerm f_32;
  f_32 = t;
  {
    ATerm d_88 = NULL;
    ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
    t = j_134(t);
    {
      d_88 = t;
      {
        if(((c_88 != NULL) && (c_88 != d_88)))
          _fail(d_88);
        else
          c_88 = d_88;
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_88), term_i_32);
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
            e_88 = t;
            z_87 :
            if(((ATgetType(e_88) == AT_LIST) && !(ATisEmpty(e_88))))
              {
                f_88 = ATgetFirst((ATermList) e_88);
                g_88 = (ATerm) ATgetNext((ATermList) e_88);
                {
                  if(((b_88 != NULL) && (b_88 != f_88)))
                    _fail(f_88);
                  else
                    b_88 = f_88;
                  {
                    if(((a_88 != NULL) && (a_88 != g_88)))
                      _fail(g_88);
                    else
                      a_88 = g_88;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_88), term_i_32, not_null(a_88));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_88);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm h_88 = NULL;
                              h_88 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_88), not_null(h_88));
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
  t = f_32;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_106(t);
      t = y_106(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        t = y_106(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_134 (ATerm))
{
  ATerm o_88 = NULL;
  ATerm l_32;
  l_32 = t;
  {
    ATerm p_88 = NULL;
    ATerm q_88 = NULL;
    t = i_134(t);
    {
      p_88 = t;
      {
        if(((o_88 != NULL) && (o_88 != p_88)))
          _fail(p_88);
        else
          o_88 = p_88;
        {
          ATerm r_88 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), term_i_32);
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
              r_88 = t;
              if(((q_88 != NULL) && (q_88 != r_88)))
                _fail(r_88);
              else
                q_88 = r_88;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_88), term_i_32, (ATerm) ATinsert(CheckATermList(not_null(q_88)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_32;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm k_134 (ATerm), ATerm l_134 (ATerm))
{
  t = begin_scope_1(t, k_134);
  {
    ATerm i_3 (ATerm t)
    {
      t = end_scope_1(t, k_134);
      return(t);
    }
    t = restore_always_2(t, l_134, i_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_134 (ATerm))
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym__2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      {
        ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
        ATerm o_32;
        o_32 = t;
        {
          ATerm h_89 = NULL;
          ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
          t = m_134(t);
          {
            h_89 = t;
            {
              if(((e_89 != NULL) && (e_89 != h_89)))
                _fail(h_89);
              else
                e_89 = h_89;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_89), not_null(a_89), not_null(b_89));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_89), term_i_32);
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
                      i_89 = t;
                      x_88 :
                      if(((ATgetType(i_89) == AT_LIST) && !(ATisEmpty(i_89))))
                        {
                          j_89 = ATgetFirst((ATermList) i_89);
                          k_89 = (ATerm) ATgetNext((ATermList) i_89);
                          {
                            if(((f_89 != NULL) && (f_89 != j_89)))
                              _fail(j_89);
                            else
                              f_89 = j_89;
                            {
                              if(((g_89 != NULL) && (g_89 != k_89)))
                                _fail(k_89);
                              else
                                g_89 = k_89;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_89), term_i_32, (ATerm) ATinsert(CheckATermList(not_null(g_89)), (ATerm) ATinsert(CheckATermList(not_null(f_89)), not_null(a_89))));
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
  ATerm q_89 = NULL,r_89 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    ATerm s_89 = NULL;
    ATerm t_89 = NULL;
    t = term_t_32;
    {
      s_89 = t;
      {
        if(((q_89 != NULL) && (q_89 != s_89)))
          _fail(s_89);
        else
          q_89 = s_89;
        {
          t = term_a_17;
          {
            t_89 = t;
            if(((r_89 != NULL) && (r_89 != t_89)))
              _fail(t_89);
            else
              r_89 = t_89;
          }
        }
      }
    }
  }
  t = r_32;
  {
    ATerm y_32;
    y_32 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), (ATerm) ATmakeAppl(sym_Defined_2, term_z_32, not_null(r_89)));
      {
        ATerm j_3 (ATerm t)
        {
          t = term_f_14;
          return(t);
        }
        t = assert_1(t, j_3);
      }
    }
    t = y_32;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm z_89 (ATerm t)
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
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
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
        t = repeat_1(t, m_3);
        {
          t = _all(t, z_89);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, k_3, l_3);
      return(t);
    }
    t = z_89(t);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm y_89 = NULL;
          y_89 = t;
          x_89 :
          if(match_cons(y_89, sym_InitCachedTerms_0))
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
  ATerm m_33;
  m_33 = t;
  {
    ATerm c_90 = NULL;
    ATerm d_90 = NULL;
    t = term_f_28;
    {
      t = whoami_0(t);
      {
        d_90 = t;
        if(((c_90 != NULL) && (c_90 != d_90)))
          _fail(d_90);
        else
          c_90 = d_90;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_33), not_null(c_90)), term_o_33));
      {
        t = printnl_0(t);
        {
          t = term_t_17;
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
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      {
        ATerm q_33;
        q_33 = t;
        t = SSL_printnl(not_null(i_90), not_null(j_90));
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
  ATerm o_90 = NULL;
  o_90 = t;
  t = SSL_implode_string(not_null(o_90));
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
        ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
        t_90 = t;
        s_90 :
        if(((ATgetType(t_90) == AT_LIST) && !(ATisEmpty(t_90))))
          {
            u_90 = ATgetFirst((ATermList) t_90);
            v_90 = (ATerm) ATgetNext((ATermList) t_90);
            {
              t = not_null(u_90);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(v_90);
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
  ATerm f_91 = NULL;
  ATerm h_91 = NULL;
  f_91 = t;
  {
    ATerm i_91 = NULL;
    ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
    t = not_null(f_91);
    {
      i_91 = t;
      {
        t = SSL_explode_term(not_null(i_91));
        {
          k_91 = t;
          d_91 :
          if(match_cons(k_91, sym__2))
            {
              l_91 = ATgetArgument(k_91, 0);
              m_91 = ATgetArgument(k_91, 1);
              e_91 :
              if(match_string(l_91, ""))
                {
                  if(((h_91 != NULL) && (h_91 != m_91)))
                    _fail(m_91);
                  else
                    h_91 = m_91;
                }
              else
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
      t = not_null(h_91);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_114 (ATerm))
{
  ATerm q_91 (ATerm t)
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_91);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          t = Nil_0(t);
          t = j_114(t);
        }
      }
    return(t);
  }
  t = q_91(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
  t_91 = t;
  s_91 :
  if(match_cons(t_91, sym__2))
    {
      u_91 = ATgetArgument(t_91, 0);
      v_91 = ATgetArgument(t_91, 1);
      {
        t = not_null(u_91);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(v_91);
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
  ATerm a_92 = NULL;
  a_92 = t;
  t = SSL_explode_string(not_null(a_92));
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
  ATerm z_33 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = z_33;
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_3);
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
            {
              ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
              j_92 = t;
              i_92 :
              if(match_cons(j_92, sym_Path_1))
                {
                  k_92 = ATgetArgument(j_92, 0);
                  t = not_null(k_92);
                }
              else
                {
                  if(match_cons(j_92, sym_Var_1))
                    {
                      k_92 = ATgetArgument(j_92, 0);
                      {
                        t = not_null(k_92);
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
                                ATerm s_3 (ATerm t)
                                {
                                  t = term_o_34;
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
                      if(match_cons(j_92, sym_Prefix_2))
                        {
                          k_92 = ATgetArgument(j_92, 0);
                          l_92 = ATgetArgument(j_92, 1);
                          {
                            ATerm q_92 = NULL,s_92 = NULL;
                            ATerm p_34;
                            p_34 = t;
                            {
                              ATerm r_92 = NULL;
                              t = not_null(k_92);
                              {
                                t = eval_config_0(t);
                                {
                                  r_92 = t;
                                  if(((q_92 != NULL) && (q_92 != r_92)))
                                    _fail(r_92);
                                  else
                                    q_92 = r_92;
                                }
                              }
                            }
                            t = p_34;
                            {
                              ATerm t_92 = NULL;
                              t = not_null(l_92);
                              {
                                t = eval_config_0(t);
                                {
                                  t_92 = t;
                                  if(((s_92 != NULL) && (s_92 != t_92)))
                                    _fail(t_92);
                                  else
                                    s_92 = t_92;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_92), not_null(s_92));
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
  ATerm b_93 = NULL;
  b_93 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_7, not_null(b_93));
    {
      t = table_get_0(t);
      {
        ATerm t_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_34;
            q_34 = t;
            {
              ATerm d_93 = NULL;
              ATerm e_93 = NULL;
              e_93 = t;
              if(((d_93 != NULL) && (d_93 != e_93)))
                _fail(e_93);
              else
                d_93 = e_93;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_7, not_null(b_93), not_null(d_93));
                t = table_put_0(t);
              }
            }
            t = q_34;
          }
          return(t);
        }
        t = try_1(t, t_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_127 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm t_34;
    t_34 = t;
    {
      ATerm i_93 = NULL;
      ATerm j_93 = NULL;
      t = term_v_34;
      {
        t = get_config_0(t);
        {
          j_93 = t;
          if(((i_93 != NULL) && (i_93 != j_93)))
            _fail(j_93);
          else
            i_93 = j_93;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), term_w_34);
        t = geq_0(t);
      }
    }
    t = t_34;
    t = a_127(t);
    return(t);
  }
  t = try_1(t, u_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  p_93 = t;
  n_93 :
  if(match_cons(p_93, sym__2))
    {
      q_93 = ATgetArgument(p_93, 0);
      r_93 = ATgetArgument(p_93, 1);
      o_93 :
      if(match_cons(r_93, sym_Stream_1))
        {
          s_93 = ATgetArgument(r_93, 0);
          {
            ATerm v_93 = NULL;
            t = SSL_fputc(not_null(q_93), not_null(s_93));
            {
              ATerm w_93 = NULL;
              w_93 = t;
              if(((v_93 != NULL) && (v_93 != w_93)))
                _fail(w_93);
              else
                v_93 = w_93;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_93));
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
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  f_94 = t;
  b_94 :
  if(match_cons(f_94, sym__2))
    {
      g_94 = ATgetArgument(f_94, 0);
      i_94 = ATgetArgument(f_94, 1);
      c_94 :
      if(match_cons(g_94, sym_Stream_1))
        {
          h_94 = ATgetArgument(g_94, 0);
          {
            ATerm l_94 = NULL;
            t = SSL_write_term_to_stream_text(not_null(h_94), not_null(i_94));
            {
              ATerm m_94 = NULL;
              m_94 = t;
              if(((l_94 != NULL) && (l_94 != m_94)))
                _fail(m_94);
              else
                l_94 = m_94;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_94));
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
    ATerm q_94 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm r_94 = NULL;
      r_94 = t;
      if(((q_94 != NULL) && (q_94 != r_94)))
        _fail(r_94);
      else
        q_94 = r_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(q_94));
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
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  x_94 = t;
  v_94 :
  if(match_cons(x_94, sym__2))
    {
      y_94 = ATgetArgument(x_94, 0);
      a_95 = ATgetArgument(x_94, 1);
      w_94 :
      if(match_cons(y_94, sym_Stream_1))
        {
          z_94 = ATgetArgument(y_94, 0);
          {
            ATerm d_95 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(z_94), not_null(a_95));
            {
              ATerm e_95 = NULL;
              e_95 = t;
              if(((d_95 != NULL) && (d_95 != e_95)))
                _fail(e_95);
              else
                d_95 = e_95;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_95));
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
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  l_95 = t;
  k_95 :
  if(match_cons(l_95, sym__2))
    {
      m_95 = ATgetArgument(l_95, 0);
      n_95 = ATgetArgument(l_95, 1);
      {
        ATerm q_95 = NULL,s_95 = NULL;
        t = not_null(m_95);
        {
          ATerm r_95 = NULL;
          r_95 = t;
          if(((q_95 != NULL) && (q_95 != r_95)))
            _fail(r_95);
          else
            q_95 = r_95;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), term_y_34);
            {
              t = open_stream_0(t);
              {
                ATerm t_95 = NULL;
                t_95 = t;
                if(((s_95 != NULL) && (s_95 != t_95)))
                  _fail(t_95);
                else
                  s_95 = t_95;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_95), not_null(n_95));
                  {
                    t = w_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(n_95);
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
  ATerm b_96 = NULL;
  ATerm z_34;
  z_34 = t;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm a_35 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm c_96 = NULL,d_96 = NULL;
            c_96 = t;
            y_95 :
            if(match_cons(c_96, sym_Output_1))
              {
                d_96 = ATgetArgument(c_96, 0);
                if(((b_96 != NULL) && (b_96 != d_96)))
                  _fail(d_96);
                else
                  b_96 = d_96;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_3);
          ;
          LocalPopChoice(q_37);
        }
      else
        {
          t = a_35;
          {
            ATerm e_96 = NULL;
            t = term_r_37;
            {
              e_96 = t;
              if(((b_96 != NULL) && (b_96 != e_96)))
                _fail(e_96);
              else
                b_96 = e_96;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_3, _id);
  }
  t = z_34;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(b_96);
        return(t);
      }
      t = split_2(t, z_3, _id);
      return(t);
    }
    t = _2(t, _id, y_3);
    {
      ATerm s_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              ATerm f_96 = NULL;
              f_96 = t;
              a_96 :
              if(!(match_cons(f_96, sym_Binary_0)))
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
          LocalPopChoice(v_37);
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
ATerm apply_strategy_1 (ATerm t, ATerm w_127 (ATerm))
{
  ATerm m_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  ATerm w_37;
  w_37 = t;
  t = dtime_0(t);
  t = w_37;
  {
    t = w_127(t);
    {
      ATerm x_37;
      x_37 = t;
      {
        ATerm n_96 = NULL;
        t = dtime_0(t);
        {
          n_96 = t;
          if(((m_96 != NULL) && (m_96 != n_96)))
            _fail(n_96);
          else
            m_96 = n_96;
        }
      }
      t = x_37;
      {
        o_96 = t;
        k_96 :
        if(match_cons(o_96, sym__2))
          {
            p_96 = ATgetArgument(o_96, 0);
            q_96 = ATgetArgument(o_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_96))), not_null(q_96));
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
  ATerm y_96 = NULL,z_96 = NULL;
  ATerm f_97 (ATerm t)
  {
    t = SSL_fclose(not_null(z_96));
    return(t);
  }
  z_96 = t;
  x_96 :
  if(match_cons(z_96, sym_Stream_1))
    {
      y_96 = ATgetArgument(z_96, 0);
      {
        ATerm y_37 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_96));
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = y_37;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL;
  i_97 = t;
  h_97 :
  if(match_cons(i_97, sym_Stream_1))
    {
      j_97 = ATgetArgument(i_97, 0);
      t = SSL_read_term_from_stream(not_null(j_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_125 (ATerm))
{
  ATerm l_38;
  l_38 = t;
  {
    ATerm o_97 = NULL,q_97 = NULL;
    ATerm m_38;
    m_38 = t;
    {
      ATerm p_97 = NULL;
      t = i_125(t);
      {
        p_97 = t;
        if(((o_97 != NULL) && (o_97 != p_97)))
          _fail(p_97);
        else
          o_97 = p_97;
      }
    }
    t = m_38;
    {
      ATerm r_97 = NULL;
      r_97 = t;
      if(((q_97 != NULL) && (q_97 != r_97)))
        _fail(r_97);
      else
        q_97 = r_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_97)), not_null(o_97)));
        t = printnl_0(t);
      }
    }
  }
  t = l_38;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
  x_97 = t;
  w_97 :
  if(match_cons(x_97, sym__2))
    {
      y_97 = ATgetArgument(x_97, 0);
      z_97 = ATgetArgument(x_97, 1);
      {
        ATerm c_98 = NULL;
        t = SSL_fopen(not_null(y_97), not_null(z_97));
        {
          ATerm d_98 = NULL;
          d_98 = t;
          if(((c_98 != NULL) && (c_98 != d_98)))
            _fail(d_98);
          else
            c_98 = d_98;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_98));
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
  ATerm h_98 = NULL;
  h_98 = t;
  t = SSL_is_string(not_null(h_98));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
  q_98 = t;
  p_98 :
  if(match_cons(q_98, sym__2))
    {
      r_98 = ATgetArgument(q_98, 0);
      s_98 = ATgetArgument(q_98, 1);
      {
        ATerm w_98 = NULL,y_98 = NULL;
        ATerm x_98 = NULL;
        t = SSLgetAnnotations(not_null(q_98));
        {
          x_98 = t;
          if(((w_98 != NULL) && (w_98 != x_98)))
            _fail(x_98);
          else
            w_98 = x_98;
        }
        {
          t = not_null(r_98);
          {
            ATerm a_99 = NULL;
            t = h_83(t);
            {
              y_98 = t;
              {
                t = not_null(s_98);
                {
                  ATerm c_99 = NULL;
                  t = i_83(t);
                  {
                    a_99 = t;
                    {
                      ATerm d_99 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_98), not_null(a_99)), not_null(w_98));
                      {
                        d_99 = t;
                        if(((c_99 != NULL) && (c_99 != d_99)))
                          _fail(d_99);
                        else
                          c_99 = d_99;
                      }
                      t = not_null(c_99);
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
  ATerm k_99 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_99 = NULL;
    l_99 = t;
    if(((k_99 != NULL) && (k_99 != l_99)))
      _fail(l_99);
    else
      k_99 = l_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_99));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm o_99 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm r_99 = NULL;
    r_99 = t;
    if(((o_99 != NULL) && (o_99 != r_99)))
      _fail(r_99);
    else
      o_99 = r_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_99));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm u_99 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm v_99 = NULL;
    v_99 = t;
    if(((u_99 != NULL) && (u_99 != v_99)))
      _fail(v_99);
    else
      u_99 = v_99;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_99));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm b_100 = NULL;
  b_100 = t;
  a_100 :
  if(match_cons(b_100, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(b_100, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(b_100, sym_stdin_0))
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
  ATerm l_100 = NULL;
  ATerm n_100 = NULL,o_100 = NULL;
  l_100 = t;
  {
    ATerm p_100 = NULL;
    ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
    t = not_null(l_100);
    {
      p_100 = t;
      {
        t = SSL_explode_term(not_null(p_100));
        {
          r_100 = t;
          i_100 :
          if(match_cons(r_100, sym__2))
            {
              s_100 = ATgetArgument(r_100, 0);
              t_100 = ATgetArgument(r_100, 1);
              j_100 :
              if(match_string(s_100, ""))
                {
                  k_100 :
                  if(((ATgetType(t_100) == AT_LIST) && !(ATisEmpty(t_100))))
                    {
                      u_100 = ATgetFirst((ATermList) t_100);
                      v_100 = (ATerm) ATgetNext((ATermList) t_100);
                      {
                        if(((o_100 != NULL) && (o_100 != u_100)))
                          _fail(u_100);
                        else
                          o_100 = u_100;
                        if(((n_100 != NULL) && (n_100 != v_100)))
                          _fail(v_100);
                        else
                          n_100 = v_100;
                      }
                    }
                  else
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
    t = not_null(o_100);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL;
  d_101 = t;
  c_101 :
  if(match_cons(d_101, sym__2))
    {
      e_101 = ATgetArgument(d_101, 0);
      f_101 = ATgetArgument(d_101, 1);
      {
        ATerm n_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_38);
          }
        else
          {
            t = n_38;
            {
              ATerm v_38 = t;
              int w_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm g_101 = NULL,h_101 = NULL;
                    g_101 = t;
                    b_101 :
                    if(match_cons(g_101, sym_Path_1))
                      {
                        h_101 = ATgetArgument(g_101, 0);
                        t = not_null(h_101);
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
                  LocalPopChoice(w_38);
                }
              else
                {
                  t = v_38;
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
  ATerm p_101 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_101 = NULL;
      ATerm o_101 = NULL;
      o_101 = t;
      if(((n_101 != NULL) && (n_101 != o_101)))
        _fail(o_101);
      else
        n_101 = o_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_101), term_z_38);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      {
        ATerm d_4 (ATerm t)
        {
          t = term_a_39;
          return(t);
        }
        t = debug_1(t, d_4);
        _fail(t);
      }
    }
  {
    ATerm b_39;
    b_39 = t;
    {
      ATerm q_101 = NULL;
      t = read_from_stream_0(t);
      {
        q_101 = t;
        if(((p_101 != NULL) && (p_101 != q_101)))
          _fail(q_101);
        else
          p_101 = q_101;
      }
    }
    t = b_39;
    {
      t = fclose_0(t);
      t = not_null(p_101);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_121 (ATerm), ATerm k_121 (ATerm))
{
  ATerm v_101 = NULL,x_101 = NULL;
  ATerm c_39;
  c_39 = t;
  {
    ATerm w_101 = NULL;
    t = j_121(t);
    {
      w_101 = t;
      if(((v_101 != NULL) && (v_101 != w_101)))
        _fail(w_101);
      else
        v_101 = w_101;
    }
  }
  t = c_39;
  {
    ATerm y_101 = NULL;
    t = k_121(t);
    {
      y_101 = t;
      if(((x_101 != NULL) && (x_101 != y_101)))
        _fail(y_101);
      else
        x_101 = y_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_101), not_null(x_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_102 = NULL;
  ATerm d_39;
  d_39 = t;
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_102 = NULL,g_102 = NULL;
          f_102 = t;
          c_102 :
          if(match_cons(f_102, sym_Input_1))
            {
              g_102 = ATgetArgument(f_102, 0);
              if(((e_102 != NULL) && (e_102 != g_102)))
                _fail(g_102);
              else
                e_102 = g_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_4);
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        {
          ATerm h_102 = NULL;
          t = term_g_39;
          {
            h_102 = t;
            if(((e_102 != NULL) && (e_102 != h_102)))
              _fail(h_102);
            else
              e_102 = h_102;
          }
        }
      }
  }
  t = d_39;
  {
    ATerm f_4 (ATerm t)
    {
      t = not_null(e_102);
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
    ATerm m_102 = NULL;
    m_102 = t;
    k_102 :
    if(!(match_string(m_102, "-k")))
      {
        if(!(match_string(m_102, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm h_39;
    h_39 = t;
    {
      ATerm n_102 = NULL;
      ATerm o_102 = NULL;
      t = string_to_int_0(t);
      {
        o_102 = t;
        if(((n_102 != NULL) && (n_102 != o_102)))
          _fail(o_102);
        else
          n_102 = o_102;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_39, not_null(n_102));
        t = set_config_0(t);
      }
    }
    t = h_39;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_l_39;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_102 = NULL;
  r_102 = t;
  t = SSL_string_to_int(not_null(r_102));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm z_102 = NULL;
        z_102 = t;
        u_102 :
        if(!(match_string(z_102, "-S")))
          {
            if(!(match_string(z_102, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_o_39;
        t = set_config_0(t);
        t = term_p_39;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_q_39;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm a_103 = NULL;
              a_103 = t;
              v_102 :
              if(!(match_string(a_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm d_103 = NULL;
              ATerm t_39;
              t_39 = t;
              {
                ATerm b_103 = NULL;
                ATerm c_103 = NULL;
                t = string_to_int_0(t);
                {
                  c_103 = t;
                  if(((b_103 != NULL) && (b_103 != c_103)))
                    _fail(c_103);
                  else
                    b_103 = c_103;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_34, not_null(b_103));
                  t = set_config_0(t);
                }
              }
              t = t_39;
              {
                ATerm e_103 = NULL;
                e_103 = t;
                if(((d_103 != NULL) && (d_103 != e_103)))
                  _fail(e_103);
                else
                  d_103 = e_103;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_103));
              }
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              t = term_u_39;
              return(t);
            }
            t = ArgOption_3(t, m_4, n_4, o_4);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm f_103 = NULL;
                f_103 = t;
                y_102 :
                if(!(match_string(f_103, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_w_39;
                t = set_config_0(t);
                t = term_x_39;
                return(t);
              }
              ATerm r_4 (ATerm t)
              {
                t = term_y_39;
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
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm l_103 = NULL;
    l_103 = t;
    i_103 :
    if(!(match_string(l_103, "-o")))
      {
        if(!(match_string(l_103, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm o_103 = NULL;
    ATerm b_40;
    b_40 = t;
    {
      ATerm m_103 = NULL;
      ATerm n_103 = NULL;
      n_103 = t;
      if(((m_103 != NULL) && (m_103 != n_103)))
        _fail(n_103);
      else
        m_103 = n_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_40, not_null(m_103));
        t = set_config_0(t);
      }
    }
    t = b_40;
    {
      ATerm p_103 = NULL;
      p_103 = t;
      if(((o_103 != NULL) && (o_103 != p_103)))
        _fail(p_103);
      else
        o_103 = p_103;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_103));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_d_40;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm t_103 = NULL;
          t_103 = t;
          s_103 :
          if(!(match_string(t_103, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_h_40;
          t = set_config_0(t);
          t = term_i_40;
          return(t);
        }
        ATerm x_4 (ATerm t)
        {
          t = term_j_40;
          return(t);
        }
        t = Option_3(t, v_4, w_4, x_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  z_103 = t;
  x_103 :
  if(match_string(z_103, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_103) == AT_LIST) && !(ATisEmpty(z_103))))
        {
          a_104 = ATgetFirst((ATermList) z_103);
          b_104 = (ATerm) ATgetNext((ATermList) z_103);
          y_103 :
          if(((ATgetType(b_104) == AT_LIST) && !(ATisEmpty(b_104))))
            {
              c_104 = ATgetFirst((ATermList) b_104);
              d_104 = (ATerm) ATgetNext((ATermList) b_104);
              {
                ATerm h_104 = NULL;
                ATerm k_40;
                k_40 = t;
                {
                  t = not_null(a_104);
                  t = k_0(t);
                }
                t = k_40;
                {
                  ATerm i_104 = NULL;
                  t = not_null(c_104);
                  {
                    t = m_0(t);
                    {
                      i_104 = t;
                      if(((h_104 != NULL) && (h_104 != i_104)))
                        _fail(i_104);
                      else
                        h_104 = i_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_104)), not_null(h_104));
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
    ATerm p_104 = NULL;
    p_104 = t;
    m_104 :
    if(!(match_string(p_104, "-i")))
      {
        if(!(match_string(p_104, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm s_104 = NULL;
    ATerm l_40;
    l_40 = t;
    {
      ATerm q_104 = NULL;
      ATerm r_104 = NULL;
      r_104 = t;
      if(((q_104 != NULL) && (q_104 != r_104)))
        _fail(r_104);
      else
        q_104 = r_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_40, not_null(q_104));
        t = set_config_0(t);
      }
    }
    t = l_40;
    {
      ATerm t_104 = NULL;
      t_104 = t;
      if(((s_104 != NULL) && (s_104 != t_104)))
        _fail(t_104);
      else
        s_104 = t_104;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_104));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_n_40;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm x_104 = NULL;
  t = report_run_time_0(t);
  {
    ATerm y_104 = NULL;
    t = term_f_28;
    {
      t = whoami_0(t);
      {
        y_104 = t;
        if(((x_104 != NULL) && (x_104 != y_104)))
          _fail(y_104);
        else
          x_104 = y_104;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, term_s_40), not_null(x_104)));
      {
        t = printnl_0(t);
        {
          t = term_t_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_t_40;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_105 = NULL;
  b_105 = t;
  t = SSL_TicksToSeconds(not_null(b_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  f_105 :
  if(match_cons(g_105, sym__2))
    {
      h_105 = ATgetArgument(g_105, 0);
      i_105 = ATgetArgument(g_105, 1);
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_105), not_null(i_105));
            ;
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            t = SSL_addr(not_null(h_105), not_null(i_105));
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
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_119(t);
      ;
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
      {
        ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
        p_105 = t;
        o_105 :
        if(((ATgetType(p_105) == AT_LIST) && !(ATisEmpty(p_105))))
          {
            q_105 = ATgetFirst((ATermList) p_105);
            r_105 = (ATerm) ATgetNext((ATermList) p_105);
            {
              ATerm u_105 = NULL;
              ATerm v_105 = NULL;
              t = not_null(r_105);
              {
                t = foldr_2(t, u_119, v_119);
                {
                  v_105 = t;
                  if(((u_105 != NULL) && (u_105 != v_105)))
                    _fail(v_105);
                  else
                    u_105 = v_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_105), not_null(u_105));
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
  ATerm c_106 = NULL;
  ATerm e_106 = NULL;
  c_106 = t;
  {
    ATerm f_106 = NULL;
    ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
    t = not_null(c_106);
    {
      f_106 = t;
      {
        t = SSL_explode_term(not_null(f_106));
        {
          k_106 = t;
          b_106 :
          if(match_cons(k_106, sym__2))
            {
              l_106 = ATgetArgument(k_106, 0);
              m_106 = ATgetArgument(k_106, 1);
              if(((e_106 != NULL) && (e_106 != m_106)))
                _fail(m_106);
              else
                e_106 = m_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_106);
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
    ATerm b_5 (ATerm t)
    {
      t = term_f_17;
      return(t);
    }
    t = crush_2(t, b_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  r_106 :
  if(match_cons(s_106, sym__2))
    {
      t_106 = ATgetArgument(s_106, 0);
      u_106 = ATgetArgument(s_106, 1);
      {
        ATerm y_40;
        y_40 = t;
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_106), not_null(u_106));
              ;
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              t = SSL_gtr(not_null(t_106), not_null(u_106));
            }
        }
        t = y_40;
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
  ATerm c_107 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_107 = NULL,g_107 = NULL,h_107 = NULL;
      d_107 = t;
      b_107 :
      if(match_cons(d_107, sym__2))
        {
          g_107 = ATgetArgument(d_107, 0);
          h_107 = ATgetArgument(d_107, 1);
          {
            if(((c_107 != NULL) && (c_107 != g_107)))
              _fail(g_107);
            else
              c_107 = g_107;
            if(((c_107 != NULL) && (c_107 != h_107)))
              _fail(h_107);
            else
              c_107 = h_107;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_126 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_41;
    d_41 = t;
    {
      ATerm k_107 = NULL;
      ATerm l_107 = NULL;
      t = term_v_34;
      {
        t = get_config_0(t);
        {
          l_107 = t;
          if(((k_107 != NULL) && (k_107 != l_107)))
            _fail(l_107);
          else
            k_107 = l_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_107), term_t_17);
        t = geq_0(t);
      }
    }
    t = d_41;
    t = z_126(t);
    return(t);
  }
  t = try_1(t, c_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm p_107 = NULL,r_107 = NULL;
    ATerm e_41;
    e_41 = t;
    {
      ATerm q_107 = NULL;
      t = run_time_0(t);
      {
        q_107 = t;
        if(((p_107 != NULL) && (p_107 != q_107)))
          _fail(q_107);
        else
          p_107 = q_107;
      }
    }
    t = e_41;
    {
      ATerm s_107 = NULL;
      t = term_f_28;
      {
        t = whoami_0(t);
        {
          s_107 = t;
          if(((r_107 != NULL) && (r_107 != s_107)))
            _fail(s_107);
          else
            r_107 = s_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_41), not_null(p_107)), term_f_41), not_null(r_107)));
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
    t = term_f_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_107 = NULL;
  z_107 = t;
  y_107 :
  if(match_cons(z_107, sym_Version_0))
    {
      ATerm b_108 = NULL,f_108 = NULL;
      ATerm h_41;
      h_41 = t;
      {
        ATerm e_108 = NULL;
        t = SSLgetAnnotations(not_null(z_107));
        {
          e_108 = t;
          if(((b_108 != NULL) && (b_108 != e_108)))
            _fail(e_108);
          else
            b_108 = e_108;
        }
      }
      t = h_41;
      {
        ATerm g_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_108));
        {
          g_108 = t;
          if(((f_108 != NULL) && (f_108 != g_108)))
            _fail(g_108);
          else
            f_108 = g_108;
        }
        t = not_null(f_108);
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
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_41;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm l_41 = t;
          int m_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(m_41);
            }
          else
            {
              t = l_41;
              {
                ATerm n_41 = t;
                int o_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(o_41);
                  }
                else
                  {
                    t = n_41;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  t = u_128(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_108 = NULL;
  l_108 = t;
  t = SSL_table_create(not_null(l_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  {
    ATerm p_41;
    p_41 = t;
    {
      t = term_q_41;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_41, term_r_41, not_null(p_108));
          t = table_put_0(t);
        }
      }
    }
    t = p_41;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_108 = NULL;
  t_108 = t;
  t = SSL_table_destroy(not_null(t_108));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_108 = NULL;
  x_108 = t;
  t = SSL_exit(not_null(x_108));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_113 (ATerm))
{
  ATerm a_109 (ATerm t)
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = Cons_2(t, t_113, a_109);
      }
    return(t);
  }
  t = a_109(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
  l_109 = t;
  i_109 :
  if(((ATgetType(l_109) == AT_LIST) && !(ATisEmpty(l_109))))
    {
      j_109 = ATgetFirst((ATermList) l_109);
      k_109 = (ATerm) ATgetNext((ATermList) l_109);
      {
        ATerm o_109 = NULL;
        t = not_null(k_109);
        {
          ATerm u_41;
          u_41 = t;
          {
            ATerm p_109 = NULL,r_109 = NULL,t_109 = NULL;
            ATerm v_41;
            v_41 = t;
            {
              ATerm q_109 = NULL;
              t = i_0(t);
              {
                q_109 = t;
                if(((p_109 != NULL) && (p_109 != q_109)))
                  _fail(q_109);
                else
                  p_109 = q_109;
              }
            }
            t = v_41;
            {
              ATerm s_109 = NULL;
              t = not_null(j_109);
              {
                t = g_0(t);
                {
                  s_109 = t;
                  if(((r_109 != NULL) && (r_109 != s_109)))
                    _fail(s_109);
                  else
                    r_109 = s_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_109)), not_null(r_109));
                {
                  t_109 = t;
                  if(((o_109 != NULL) && (o_109 != t_109)))
                    _fail(t_109);
                  else
                    o_109 = t_109;
                }
              }
            }
          }
          t = u_41;
          {
            ATerm f_5 (ATerm t)
            {
              t = not_null(o_109);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_109) == AT_LIST) && ATisEmpty(l_109)))
        {
          {
            t = term_f_28;
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
ATerm short_description_1 (ATerm t, ATerm i_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm e_110 = NULL,f_110 = NULL;
  e_110 = t;
  d_110 :
  if(match_cons(e_110, sym_Program_1))
    {
      f_110 = ATgetArgument(e_110, 0);
      {
        ATerm i_110 = NULL,k_110 = NULL;
        ATerm j_110 = NULL;
        t = SSLgetAnnotations(not_null(e_110));
        {
          j_110 = t;
          if(((i_110 != NULL) && (i_110 != j_110)))
            _fail(j_110);
          else
            i_110 = j_110;
        }
        {
          t = not_null(f_110);
          {
            ATerm m_110 = NULL;
            t = d_94(t);
            {
              k_110 = t;
              {
                ATerm n_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_110)), not_null(i_110));
                {
                  n_110 = t;
                  if(((m_110 != NULL) && (m_110 != n_110)))
                    _fail(n_110);
                  else
                    m_110 = n_110;
                }
                t = not_null(m_110);
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
  ATerm w_110 = NULL;
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_110 = NULL;
      t = term_t_40;
      {
        t = get_config_0(t);
        {
          x_110 = t;
          if(((w_110 != NULL) && (w_110 != x_110)))
            _fail(x_110);
          else
            w_110 = x_110;
        }
      }
      ;
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm i_5 (ATerm t)
          {
            ATerm y_110 = NULL;
            y_110 = t;
            if(((w_110 != NULL) && (w_110 != y_110)))
              _fail(y_110);
            else
              w_110 = y_110;
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
        t = not_null(w_110);
        return(t);
      }
      t = short_description_1(t, n_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_5);
    {
      t = term_y_41;
      {
        t = echo_0(t);
        {
          t = term_b_42;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm z_110 = NULL;
                  ATerm a_111 = NULL;
                  a_111 = t;
                  if(((z_110 != NULL) && (z_110 != a_111)))
                    _fail(a_111);
                  else
                    z_110 = a_111;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), term_c_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm b_111 = NULL;
                    ATerm c_111 = NULL;
                    ATerm q_5 (ATerm t)
                    {
                      t = not_null(w_110);
                      return(t);
                    }
                    t = long_description_1(t, q_5);
                    {
                      c_111 = t;
                      if(((b_111 != NULL) && (b_111 != c_111)))
                        _fail(c_111);
                      else
                        b_111 = c_111;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_111)), term_d_42);
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
  ATerm e_42 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(f_42);
    }
  else
    {
      t = e_42;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm m_111 = NULL,n_111 = NULL;
  m_111 = t;
  l_111 :
  if(match_cons(m_111, sym_Undefined_1))
    {
      n_111 = ATgetArgument(m_111, 0);
      {
        ATerm q_111 = NULL,s_111 = NULL;
        ATerm r_111 = NULL;
        t = SSLgetAnnotations(not_null(m_111));
        {
          r_111 = t;
          if(((q_111 != NULL) && (q_111 != r_111)))
            _fail(r_111);
          else
            q_111 = r_111;
        }
        {
          t = not_null(n_111);
          {
            ATerm u_111 = NULL;
            t = e_94(t);
            {
              s_111 = t;
              {
                ATerm v_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_111)), not_null(q_111));
                {
                  v_111 = t;
                  if(((u_111 != NULL) && (u_111 != v_111)))
                    _fail(v_111);
                  else
                    u_111 = v_111;
                }
                t = not_null(u_111);
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
  ATerm a_112 (ATerm t)
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_114, _id);
        ;
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        t = Cons_2(t, _id, a_112);
      }
    return(t);
  }
  t = a_112(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_130 (ATerm))
{
  t = fetch_1(t, i_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL;
  c_112 = t;
  b_112 :
  if(((ATgetType(c_112) == AT_LIST) && ATisEmpty(c_112)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_112) == AT_LIST) && !(ATisEmpty(c_112))))
        {
          d_112 = ATgetFirst((ATermList) c_112);
          e_112 = (ATerm) ATgetNext((ATermList) c_112);
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
  ATerm i_42;
  i_42 = t;
  {
    ATerm h_112 = NULL;
    ATerm k_112 = NULL;
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        {
          ATerm i_112 = NULL;
          ATerm j_112 = NULL;
          j_112 = t;
          if(((i_112 != NULL) && (i_112 != j_112)))
            _fail(j_112);
          else
            i_112 = j_112;
          t = (ATerm) ATinsert(ATempty, not_null(i_112));
        }
      }
    {
      k_112 = t;
      if(((h_112 != NULL) && (h_112 != k_112)))
        _fail(k_112);
      else
        h_112 = k_112;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_37, not_null(h_112));
      t = printnl_0(t);
    }
  }
  t = i_42;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_t_40;
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
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_112 = NULL;
  r_112 = t;
  q_112 :
  if(match_cons(r_112, sym_Help_0))
    {
      ATerm t_112 = NULL,v_112 = NULL;
      ATerm n_42;
      n_42 = t;
      {
        ATerm u_112 = NULL;
        t = SSLgetAnnotations(not_null(r_112));
        {
          u_112 = t;
          if(((t_112 != NULL) && (t_112 != u_112)))
            _fail(u_112);
          else
            t_112 = u_112;
        }
      }
      t = n_42;
      {
        ATerm w_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_112));
        {
          w_112 = t;
          if(((v_112 != NULL) && (v_112 != w_112)))
            _fail(w_112);
          else
            v_112 = w_112;
        }
        t = not_null(v_112);
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
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_106(t);
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 (ATerm t)
      {
        ATerm c_113 = NULL;
        c_113 = t;
        a_113 :
        if(!(match_string(c_113, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_t_42;
        t = set_config_0(t);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_u_42;
        return(t);
      }
      t = Option_3(t, r_5, s_5, t_5);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm d_113 = NULL;
          d_113 = t;
          b_113 :
          if(!(match_string(d_113, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_t_42;
          {
            t = set_config_0(t);
            {
              t = term_w_42;
              t = set_config_0(t);
            }
          }
          t = term_x_42;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_y_42;
          return(t);
        }
        t = Option_3(t, u_5, v_5, x_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym__2))
    {
      h_113 = ATgetArgument(g_113, 0);
      i_113 = ATgetArgument(g_113, 1);
      t = SSL_table_get(not_null(h_113), not_null(i_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_113 = NULL,q_113 = NULL,s_113 = NULL,v_113 = NULL;
  p_113 = t;
  o_113 :
  if(match_cons(p_113, sym__3))
    {
      q_113 = ATgetArgument(p_113, 0);
      s_113 = ATgetArgument(p_113, 1);
      v_113 = ATgetArgument(p_113, 2);
      {
        ATerm z_42;
        z_42 = t;
        {
          ATerm z_113 = NULL;
          ATerm a_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_113), not_null(s_113));
          {
            ATerm a_43 = t;
            int b_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_43);
              }
            else
              {
                t = a_43;
                t = (ATerm) ATempty;
              }
            {
              a_114 = t;
              if(((z_113 != NULL) && (z_113 != a_114)))
                _fail(a_114);
              else
                z_113 = a_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_113), not_null(s_113), (ATerm) ATinsert(CheckATermList(not_null(z_113)), not_null(v_113)));
            t = table_put_0(t);
          }
        }
        t = z_42;
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
  ATerm g_114 = NULL;
  ATerm h_114 = NULL;
  t = term_f_28;
  {
    t = n_131(t);
    {
      h_114 = t;
      if(((g_114 != NULL) && (g_114 != h_114)))
        _fail(h_114);
      else
        g_114 = h_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_41, term_a_42, not_null(g_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  p_114 = t;
  o_114 :
  if(match_string(p_114, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(p_114) == AT_LIST) && !(ATisEmpty(p_114))))
        {
          q_114 = ATgetFirst((ATermList) p_114);
          r_114 = (ATerm) ATgetNext((ATermList) p_114);
          {
            ATerm u_114 = NULL;
            ATerm c_43;
            c_43 = t;
            {
              t = not_null(q_114);
              t = a_0(t);
            }
            t = c_43;
            {
              ATerm v_114 = NULL;
              t = term_f_28;
              {
                t = b_0(t);
                {
                  v_114 = t;
                  if(((u_114 != NULL) && (u_114 != v_114)))
                    _fail(v_114);
                  else
                    u_114 = v_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_114)), not_null(u_114));
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
    ATerm a_115 = NULL;
    a_115 = t;
    z_114 :
    if(!(match_string(a_115, "--help")))
      {
        if(!(match_string(a_115, "-h")))
          {
            if(!(match_string(a_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_d_43;
    {
      t = set_config_0(t);
      t = term_e_43;
    }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_f_43;
    return(t);
  }
  t = Option_3(t, y_5, z_5, a_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL;
  d_115 = t;
  c_115 :
  if(((ATgetType(d_115) == AT_LIST) && !(ATisEmpty(d_115))))
    {
      e_115 = ATgetFirst((ATermList) d_115);
      f_115 = (ATerm) ATgetNext((ATermList) d_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
  p_115 = t;
  o_115 :
  if(((ATgetType(p_115) == AT_LIST) && !(ATisEmpty(p_115))))
    {
      q_115 = ATgetFirst((ATermList) p_115);
      r_115 = (ATerm) ATgetNext((ATermList) p_115);
      {
        ATerm v_115 = NULL,x_115 = NULL;
        ATerm w_115 = NULL;
        t = SSLgetAnnotations(not_null(p_115));
        {
          w_115 = t;
          if(((v_115 != NULL) && (v_115 != w_115)))
            _fail(w_115);
          else
            v_115 = w_115;
        }
        {
          t = not_null(q_115);
          {
            ATerm z_115 = NULL;
            t = q_84(t);
            {
              x_115 = t;
              {
                t = not_null(r_115);
                {
                  ATerm b_116 = NULL;
                  t = r_84(t);
                  {
                    z_115 = t;
                    {
                      ATerm c_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_115)), not_null(x_115)), not_null(v_115));
                      {
                        c_116 = t;
                        if(((b_116 != NULL) && (b_116 != c_116)))
                          _fail(c_116);
                        else
                          b_116 = c_116;
                      }
                      t = not_null(b_116);
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
  ATerm m_116 = NULL;
  m_116 = t;
  l_116 :
  if(((ATgetType(m_116) == AT_LIST) && ATisEmpty(m_116)))
    {
      {
        ATerm o_116 = NULL,q_116 = NULL;
        ATerm g_43;
        g_43 = t;
        {
          ATerm p_116 = NULL;
          t = SSLgetAnnotations(not_null(m_116));
          {
            p_116 = t;
            if(((o_116 != NULL) && (o_116 != p_116)))
              _fail(p_116);
            else
              o_116 = p_116;
          }
        }
        t = g_43;
        {
          ATerm r_116 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_116));
          {
            r_116 = t;
            if(((q_116 != NULL) && (q_116 != r_116)))
              _fail(r_116);
            else
              q_116 = r_116;
          }
          t = not_null(q_116);
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
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
  x_116 = t;
  w_116 :
  if(match_cons(x_116, sym__2))
    {
      y_116 = ATgetArgument(x_116, 0);
      z_116 = ATgetArgument(x_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_7, not_null(y_116), not_null(z_116));
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
  ATerm h_43;
  h_43 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_i_43;
      t = l_131(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = h_43;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_117 = NULL;
      ATerm j_43;
      j_43 = t;
      {
        ATerm f_117 = NULL;
        ATerm g_117 = NULL;
        g_117 = t;
        if(((f_117 != NULL) && (f_117 != g_117)))
          _fail(g_117);
        else
          f_117 = g_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_40, not_null(f_117));
          t = set_config_0(t);
        }
      }
      t = j_43;
      {
        ATerm i_117 = NULL;
        i_117 = t;
        if(((h_117 != NULL) && (h_117 != i_117)))
          _fail(i_117);
        else
          h_117 = i_117;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_117));
      }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm k_43 = t;
      int l_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_43);
            }
          else
            {
              t = m_43;
              {
                t = l_131(t);
                t = Cons_2(t, _id, h_6);
              }
            }
          ;
          LocalPopChoice(l_43);
        }
      else
        {
          t = k_43;
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
  ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
  ATerm q_43;
  q_43 = t;
  {
    ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL;
    r_117 = t;
    n_117 :
    if(match_cons(r_117, sym__3))
      {
        s_117 = ATgetArgument(r_117, 0);
        t_117 = ATgetArgument(r_117, 1);
        u_117 = ATgetArgument(r_117, 2);
        {
          if(((o_117 != NULL) && (o_117 != s_117)))
            _fail(s_117);
          else
            o_117 = s_117;
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
              t = SSL_table_put(not_null(o_117), not_null(p_117), not_null(q_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_43;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_131 (ATerm))
{
  ATerm x_117 = NULL;
  ATerm r_43;
  r_43 = t;
  {
    t = term_s_43;
    t = table_put_0(t);
  }
  t = r_43;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm t_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_131(t);
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
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(w_43);
              }
            else
              {
                t = v_43;
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
        ATerm x_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_43;
            z_43 = t;
            {
              ATerm a_44 = t;
              int b_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_41;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(b_44);
                }
              else
                {
                  t = a_44;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_43;
            {
              t = system_usage_0(t);
              {
                t = term_f_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_43);
          }
        else
          {
            t = x_43;
            {
              ATerm c_44 = t;
              int d_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_44;
                  e_44 = t;
                  {
                    t = term_s_42;
                    t = get_config_0(t);
                  }
                  t = e_44;
                  {
                    t = system_about_0(t);
                    {
                      t = term_f_17;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(d_44);
                }
              else
                {
                  t = c_44;
                  {
                    ATerm n_6 (ATerm t)
                    {
                      ATerm o_6 (ATerm t)
                      {
                        ATerm y_117 = NULL;
                        y_117 = t;
                        if(((x_117 != NULL) && (x_117 != y_117)))
                          _fail(y_117);
                        else
                          x_117 = y_117;
                        return(t);
                      }
                      t = Undefined_1(t, o_6);
                      return(t);
                    }
                    t = option_defined_1(t, n_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_117)), term_f_44));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_t_17;
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
        ATerm g_44;
        g_44 = t;
        {
          t = term_z_41;
          t = table_destroy_0(t);
        }
        t = g_44;
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
        ATerm h_44 = t;
        int i_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_128);
            ;
            LocalPopChoice(i_44);
          }
        else
          {
            t = h_44;
            {
              ATerm j_44 = t;
              int k_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_128(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(k_44);
                }
              else
                {
                  t = j_44;
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
  ATerm s_6 (ATerm t)
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_128(t);
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, n_128, o_128, y_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm h_128 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      ATerm n_44;
      n_44 = t;
      {
        ATerm b_118 = NULL;
        ATerm c_118 = NULL;
        t = term_t_40;
        {
          t = get_config_0(t);
          {
            c_118 = t;
            if(((b_118 != NULL) && (b_118 != c_118)))
              _fail(c_118);
            else
              b_118 = c_118;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_33, (ATerm) ATinsert(ATempty, not_null(b_118)));
          t = printnl_0(t);
        }
      }
      t = n_44;
      return(t);
    }
    t = if_verbose2_1(t, a_7);
    return(t);
  }
  t = iowrap_4(t, f_128, g_128, h_128, z_6);
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
