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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_c_23;
ATerm term_w_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_CallT_3, term_s_5, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_5, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_6);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_o_9);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_o_9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_t_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_o_9);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_o_9);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_o_9);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__3, term_s_18, term_t_18, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm x_77 (ATerm));
ATerm CallT_3 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm));
ATerm unzip_1 (ATerm, ATerm t_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm h_97 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm r_94 (ATerm));
ATerm downup2_2 (ATerm, ATerm u_95 (ATerm), ATerm v_95 (ATerm));
ATerm _2 (ATerm, ATerm c_72 (ATerm), ATerm d_72 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_101 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_114 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm j_113 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_116 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_112 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_108 (ATerm), ATerm x_108 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm crush_2 (ATerm, ATerm a_111 (ATerm), ATerm b_111 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_114 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_117 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_119 (ATerm));
ATerm map_1 (ATerm, ATerm g_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_119 (ATerm));
ATerm Program_1 (ATerm, ATerm d_82 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_82 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_118 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_93 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_116 (ATerm), ATerm t_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_116 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm t)
{
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm f_1 = NULL;
  ATerm u_1 = NULL;
  f_1 = t;
  {
    ATerm v_1 = NULL;
    t = new_0(t);
    {
      v_1 = t;
      if(((u_1 != NULL) && (u_1 != v_1)))
        _fail(v_1);
      else
        u_1 = v_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_1)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(u_1), (ATerm)ATempty, (ATerm)ATempty, not_null(f_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL;
  q_2 = t;
  p_2 :
  if(match_cons(q_2, sym_SVar_1))
    {
      r_2 = ATgetArgument(q_2, 0);
      {
        ATerm u_2 = NULL,w_2 = NULL;
        ATerm v_2 = NULL;
        t = SSLgetAnnotations(not_null(q_2));
        {
          v_2 = t;
          if(((u_2 != NULL) && (u_2 != v_2)))
            _fail(v_2);
          else
            u_2 = v_2;
        }
        {
          t = not_null(r_2);
          {
            ATerm y_2 = NULL;
            t = x_77(t);
            {
              w_2 = t;
              {
                ATerm z_2 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(w_2)), not_null(u_2));
                {
                  z_2 = t;
                  if(((y_2 != NULL) && (y_2 != z_2)))
                    _fail(z_2);
                  else
                    y_2 = z_2;
                }
                t = not_null(y_2);
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
ATerm CallT_3 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym_CallT_3))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      o_3 = ATgetArgument(l_3, 2);
      {
        ATerm t_3 = NULL,v_3 = NULL;
        ATerm u_3 = NULL;
        t = SSLgetAnnotations(not_null(l_3));
        {
          u_3 = t;
          if(((t_3 != NULL) && (t_3 != u_3)))
            _fail(u_3);
          else
            t_3 = u_3;
        }
        {
          t = not_null(m_3);
          {
            ATerm x_3 = NULL;
            t = c_78(t);
            {
              v_3 = t;
              {
                t = not_null(n_3);
                {
                  ATerm z_3 = NULL;
                  t = d_78(t);
                  {
                    x_3 = t;
                    {
                      t = not_null(o_3);
                      {
                        ATerm b_4 = NULL;
                        t = e_78(t);
                        {
                          z_3 = t;
                          {
                            ATerm c_4 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(v_3), not_null(x_3), not_null(z_3)), not_null(t_3));
                            {
                              c_4 = t;
                              if(((b_4 != NULL) && (b_4 != c_4)))
                                _fail(c_4);
                              else
                                b_4 = c_4;
                            }
                            t = not_null(b_4);
                          }
                        }
                      }
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
ATerm CreateDef1_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  p_4 = t;
  k_4 :
  if(match_cons(p_4, sym_Let_2))
    {
      q_4 = ATgetArgument(p_4, 0);
      r_4 = ATgetArgument(p_4, 1);
      l_4 :
      if(match_cons(r_4, sym_CallT_3))
        {
          s_4 = ATgetArgument(r_4, 0);
          u_4 = ATgetArgument(r_4, 1);
          v_4 = ATgetArgument(r_4, 2);
          m_4 :
          if(match_cons(s_4, sym_SVar_1))
            {
              t_4 = ATgetArgument(s_4, 0);
              n_4 :
              if(((ATgetType(u_4) == AT_LIST) && ATisEmpty(u_4)))
                {
                  o_4 :
                  if(((ATgetType(v_4) == AT_LIST) && ATisEmpty(v_4)))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_4)), (ATerm)ATempty, (ATerm) ATempty), not_null(q_4));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm CallFailFun_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Fail_0))
    {
      t = term_t_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Id_0))
    {
      t = term_w_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  l_5 = t;
  i_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      p_5 = ATgetArgument(l_5, 1);
      j_5 :
      if(match_cons(m_5, sym__2))
        {
          n_5 = ATgetArgument(m_5, 0);
          o_5 = ATgetArgument(m_5, 1);
          k_5 :
          if(match_cons(p_5, sym__2))
            {
              q_5 = ATgetArgument(p_5, 0);
              r_5 = ATgetArgument(p_5, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_5)), not_null(n_5)), (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(o_5)));
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
  z_5 = t;
  y_5 :
  if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
    {
      a_6 = ATgetFirst((ATermList) z_5);
      b_6 = (ATerm) ATgetNext((ATermList) z_5);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), not_null(b_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  g_6 :
  if(((ATgetType(h_6) == AT_LIST) && ATisEmpty(h_6)))
    {
      t = term_x_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_103(t);
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        {
          t = k_103(t);
          {
            t = _2(t, m_103, j_6);
            t = l_103(t);
          }
        }
      }
    return(t);
  }
  t = j_6(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm t_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, t_103);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm h_97 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm e_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_97(t);
        ;
        LocalPopChoice(f_6);
      }
    else
      {
        t = e_6;
        t = _all(t, k_6);
      }
    return(t);
  }
  t = k_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  ATerm b_11 (ATerm t)
  {
    t = not_null(m_8);
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = not_null(n_8);
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm l_9 = NULL;
    ATerm m_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(j_8));
    {
      t = conc_0(t);
      {
        m_9 = t;
        if(((l_9 != NULL) && (l_9 != m_9)))
          _fail(m_9);
        else
          l_9 = m_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_9), not_null(k_8));
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    t = not_null(n_8);
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_6, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATempty);
    return(t);
  }
  ATerm g_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_6, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATempty);
    return(t);
  }
  ATerm h_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_6, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATempty);
    return(t);
  }
  ATerm i_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_6, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATempty);
    return(t);
  }
  ATerm j_11 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_6, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATempty);
    return(t);
  }
  ATerm k_11 (ATerm t)
  {
    ATerm w_9 = NULL;
    ATerm x_9 = NULL;
    t = not_null(n_8);
    {
      ATerm r_11 (ATerm t)
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              ATerm w_6 = t;
              int x_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(x_6);
                }
              else
                {
                  t = w_6;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              t = try_1(t, r_11);
              return(t);
            }
            t = Cons_2(t, c_0, e_0);
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            t = Cons_2(t, _id, r_11);
          }
        return(t);
      }
      t = r_11(t);
      {
        x_9 = t;
        if(((w_9 != NULL) && (w_9 != x_9)))
          _fail(x_9);
        else
          w_9 = x_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(m_8), not_null(w_9), not_null(o_8));
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    ATerm b_10 = NULL;
    ATerm c_10 = NULL;
    t = not_null(n_8);
    {
      ATerm t_11 (ATerm t)
      {
        ATerm y_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm a_7 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(b_7);
                }
              else
                {
                  t = a_7;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm h_0 (ATerm t)
            {
              t = try_1(t, t_11);
              return(t);
            }
            t = Cons_2(t, f_0, h_0);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = y_6;
            t = Cons_2(t, _id, t_11);
          }
        return(t);
      }
      t = t_11(t);
      {
        c_10 = t;
        if(((b_10 != NULL) && (b_10 != c_10)))
          _fail(c_10);
        else
          b_10 = c_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(m_8), not_null(b_10), not_null(o_8));
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
    ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
    t = not_null(n_8);
    {
      ATerm j_0 (ATerm t)
      {
        ATerm l_0 (ATerm t)
        {
          ATerm c_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = c_7;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, l_0);
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
              {
                ATerm k_7 = t;
                int l_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_7 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm o_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, o_0, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = m_7;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(l_7);
                  }
                else
                  {
                    t = k_7;
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, p_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, j_0);
      {
        j_10 = t;
        n_7 :
        if(match_cons(j_10, sym__2))
          {
            k_10 = ATgetArgument(j_10, 0);
            l_10 = ATgetArgument(j_10, 1);
            {
              ATerm m_10 = NULL;
              if(((g_10 != NULL) && (g_10 != k_10)))
                _fail(k_10);
              else
                g_10 = k_10;
              {
                if(((h_10 != NULL) && (h_10 != l_10)))
                  _fail(l_10);
                else
                  h_10 = l_10;
                {
                  t = not_null(h_10);
                  {
                    t = concat_0(t);
                    {
                      m_10 = t;
                      {
                        if(((i_10 != NULL) && (i_10 != m_10)))
                          _fail(m_10);
                        else
                          i_10 = m_10;
                        {
                          ATerm o_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = o_7;
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
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_10), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(m_8), not_null(g_10), not_null(o_8)));
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
    t = not_null(n_8);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm r_0 (ATerm t)
        {
          ATerm p_7 = t;
          int p_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(p_8);
            }
          else
            {
              t = p_7;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, r_0);
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
              {
                ATerm s_8 = t;
                int t_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_9 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm s_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, s_0, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_9;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(t_8);
                  }
                else
                  {
                    t = s_8;
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, t_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, q_0);
      {
        t_10 = t;
        q_7 :
        if(match_cons(t_10, sym__2))
          {
            u_10 = ATgetArgument(t_10, 0);
            v_10 = ATgetArgument(t_10, 1);
            {
              ATerm w_10 = NULL;
              if(((q_10 != NULL) && (q_10 != u_10)))
                _fail(u_10);
              else
                q_10 = u_10;
              {
                if(((r_10 != NULL) && (r_10 != v_10)))
                  _fail(v_10);
                else
                  r_10 = v_10;
                {
                  t = not_null(r_10);
                  {
                    t = concat_0(t);
                    {
                      w_10 = t;
                      {
                        if(((s_10 != NULL) && (s_10 != w_10)))
                          _fail(w_10);
                        else
                          s_10 = w_10;
                        {
                          ATerm c_9 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = c_9;
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
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(s_10), (ATerm) ATmakeAppl(sym_CallT_3, not_null(m_8), not_null(q_10), not_null(o_8)));
    return(t);
  }
  l_8 = t;
  r_7 :
  if(match_cons(l_8, sym_Rec_2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_8), (ATerm)ATempty, (ATerm)ATempty, not_null(n_8))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_8)), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(l_8, sym_SDefT_4))
        {
          m_8 = ATgetArgument(l_8, 0);
          n_8 = ATgetArgument(l_8, 1);
          o_8 = ATgetArgument(l_8, 2);
          e_8 = ATgetArgument(l_8, 3);
          s_7 :
          if(((ATgetType(n_8) == AT_LIST) && ATisEmpty(n_8)))
            {
              t_7 :
              if(((ATgetType(o_8) == AT_LIST) && ATisEmpty(o_8)))
                {
                  u_7 :
                  if(match_cons(e_8, sym_Rec_2))
                    {
                      f_8 = ATgetArgument(e_8, 0);
                      g_8 = ATgetArgument(e_8, 1);
                      {
                        ATerm u_8 = NULL;
                        ATerm a_9 = NULL;
                        t = not_null(g_8);
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
                            v_8 = t;
                            d_7 :
                            if(match_cons(v_8, sym_CallT_3))
                              {
                                w_8 = ATgetArgument(v_8, 0);
                                y_8 = ATgetArgument(v_8, 1);
                                z_8 = ATgetArgument(v_8, 2);
                                e_7 :
                                if(match_cons(w_8, sym_SVar_1))
                                  {
                                    x_8 = ATgetArgument(w_8, 0);
                                    f_7 :
                                    if(((ATgetType(y_8) == AT_LIST) && ATisEmpty(y_8)))
                                      {
                                        g_7 :
                                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
                                          {
                                            {
                                              if(((f_8 != NULL) && (f_8 != x_8)))
                                                _fail(x_8);
                                              else
                                                f_8 = x_8;
                                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_8)), (ATerm)ATempty, (ATerm) ATempty);
                                            }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
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
                          t = alltd_1(t, u_0);
                          {
                            a_9 = t;
                            if(((u_8 != NULL) && (u_8 != a_9)))
                              _fail(a_9);
                            else
                              u_8 = a_9;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_8), (ATerm)ATempty, (ATerm)ATempty, not_null(u_8));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_8, sym_Seq_2))
            {
              m_8 = ATgetArgument(l_8, 0);
              n_8 = ATgetArgument(l_8, 1);
              v_7 :
              if(match_cons(n_8, sym_Seq_2))
                {
                  j_8 = ATgetArgument(n_8, 0);
                  k_8 = ATgetArgument(n_8, 1);
                  w_7 :
                  if(match_cons(m_8, sym_Where_1))
                    {
                      i_8 = ATgetArgument(m_8, 0);
                      x_7 :
                      if(match_cons(j_8, sym_Build_1))
                        {
                          h_8 = ATgetArgument(j_8, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_8)), not_null(k_8)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(m_8, sym_Id_0))
                        {
                          t = c_11(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(n_8, sym_Build_1))
                    {
                      j_8 = ATgetArgument(n_8, 0);
                      y_7 :
                      if(match_cons(m_8, sym_Where_1))
                        {
                          i_8 = ATgetArgument(m_8, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_8), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_8)));
                        }
                      else
                        {
                          if(match_cons(m_8, sym_Id_0))
                            {
                              t = c_11(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(n_8, sym_Id_0))
                        {
                          z_7 :
                          if(match_cons(m_8, sym_Id_0))
                            {
                              ATerm d_9 = t;
                              int e_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_11(t);
                                  ;
                                  LocalPopChoice(e_9);
                                }
                              else
                                {
                                  t = d_9;
                                  t = c_11(t);
                                }
                            }
                          else
                            {
                              t = b_11(t);
                            }
                        }
                      else
                        {
                          a_8 :
                          if(match_cons(m_8, sym_Id_0))
                            {
                              t = c_11(t);
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
              if(match_cons(l_8, sym_Scope_2))
                {
                  m_8 = ATgetArgument(l_8, 0);
                  n_8 = ATgetArgument(l_8, 1);
                  b_8 :
                  if(match_cons(n_8, sym_Scope_2))
                    {
                      j_8 = ATgetArgument(n_8, 0);
                      k_8 = ATgetArgument(n_8, 1);
                      c_8 :
                      if(((ATgetType(m_8) == AT_LIST) && ATisEmpty(m_8)))
                        {
                          {
                            ATerm f_9 = t;
                            int g_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_11(t);
                                ;
                                LocalPopChoice(g_9);
                              }
                            else
                              {
                                t = f_9;
                                t = e_11(t);
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
                      d_8 :
                      if(((ATgetType(m_8) == AT_LIST) && ATisEmpty(m_8)))
                        {
                          t = e_11(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(l_8, sym_Thread_1))
                    {
                      m_8 = ATgetArgument(l_8, 0);
                      t = f_11(t);
                    }
                  else
                    {
                      if(match_cons(l_8, sym_Some_1))
                        {
                          m_8 = ATgetArgument(l_8, 0);
                          t = g_11(t);
                        }
                      else
                        {
                          if(match_cons(l_8, sym_One_1))
                            {
                              m_8 = ATgetArgument(l_8, 0);
                              t = h_11(t);
                            }
                          else
                            {
                              if(match_cons(l_8, sym_All_1))
                                {
                                  m_8 = ATgetArgument(l_8, 0);
                                  t = i_11(t);
                                }
                              else
                                {
                                  if(match_cons(l_8, sym_Bagof_1))
                                    {
                                      m_8 = ATgetArgument(l_8, 0);
                                      t = j_11(t);
                                    }
                                  else
                                    {
                                      if(match_cons(l_8, sym_PrimT_3))
                                        {
                                          m_8 = ATgetArgument(l_8, 0);
                                          n_8 = ATgetArgument(l_8, 1);
                                          o_8 = ATgetArgument(l_8, 2);
                                          {
                                            ATerm h_9 = t;
                                            int i_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_11(t);
                                                ;
                                                LocalPopChoice(i_9);
                                              }
                                            else
                                              {
                                                t = h_9;
                                                t = m_11(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(l_8, sym_CallT_3))
                                            {
                                              m_8 = ATgetArgument(l_8, 0);
                                              n_8 = ATgetArgument(l_8, 1);
                                              o_8 = ATgetArgument(l_8, 2);
                                              {
                                                ATerm j_9 = t;
                                                int k_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = l_11(t);
                                                    ;
                                                    LocalPopChoice(k_9);
                                                  }
                                                else
                                                  {
                                                    t = j_9;
                                                    t = n_11(t);
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
            }
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm z_11 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = r_94(t);
      t = z_11(t);
      return(t);
    }
    t = try_1(t, v_0);
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm u_95 (ATerm), ATerm v_95 (ATerm))
{
  t = u_95(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = downup2_2(t, u_95, v_95);
      return(t);
    }
    t = _all(t, w_0);
    t = v_95(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_72 (ATerm), ATerm d_72 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym__2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(g_12));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(h_12);
          {
            ATerm q_12 = NULL;
            t = c_72(t);
            {
              o_12 = t;
              {
                t = not_null(i_12);
                {
                  ATerm s_12 = NULL;
                  t = d_72(t);
                  {
                    q_12 = t;
                    {
                      ATerm t_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_12), not_null(q_12)), not_null(m_12));
                      {
                        t_12 = t;
                        if(((s_12 != NULL) && (s_12 != t_12)))
                          _fail(t_12);
                        else
                          s_12 = t_12;
                      }
                      t = not_null(s_12);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm n_9;
  n_9 = t;
  {
    ATerm a_13 = NULL;
    ATerm b_13 = NULL;
    t = term_o_9;
    {
      t = whoami_0(t);
      {
        b_13 = t;
        if(((a_13 != NULL) && (a_13 != b_13)))
          _fail(b_13);
        else
          a_13 = b_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), not_null(a_13)), term_q_9));
      {
        t = printnl_0(t);
        {
          t = term_s_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm t_9;
        t_9 = t;
        t = SSL_printnl(not_null(g_13), not_null(h_13));
        t = t_9;
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
  ATerm m_13 = NULL;
  m_13 = t;
  t = SSL_implode_string(not_null(m_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
        r_13 = t;
        q_13 :
        if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
          {
            s_13 = ATgetFirst((ATermList) r_13);
            t_13 = (ATerm) ATgetNext((ATermList) r_13);
            {
              t = not_null(s_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(t_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_0);
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
  ATerm d_14 = NULL;
  ATerm f_14 = NULL;
  d_14 = t;
  {
    ATerm g_14 = NULL;
    ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
    t = not_null(d_14);
    {
      g_14 = t;
      {
        t = SSL_explode_term(not_null(g_14));
        {
          i_14 = t;
          b_14 :
          if(match_cons(i_14, sym__2))
            {
              j_14 = ATgetArgument(i_14, 0);
              k_14 = ATgetArgument(i_14, 1);
              c_14 :
              if(match_string(j_14, ""))
                {
                  if(((f_14 != NULL) && (f_14 != k_14)))
                    _fail(k_14);
                  else
                    f_14 = k_14;
                }
              else
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
      t = not_null(f_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_101 (ATerm))
{
  ATerm o_14 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_14);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        {
          t = Nil_0(t);
          t = w_101(t);
        }
      }
    return(t);
  }
  t = o_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      {
        t = not_null(s_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(t_14);
            return(t);
          }
          t = at_end_1(t, y_0);
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
  ATerm a_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_10);
    }
  else
    {
      t = a_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_explode_string(not_null(y_14));
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
              h_15 = t;
              g_15 :
              if(match_cons(h_15, sym_Path_1))
                {
                  i_15 = ATgetArgument(h_15, 0);
                  t = not_null(i_15);
                }
              else
                {
                  if(match_cons(h_15, sym_Var_1))
                    {
                      i_15 = ATgetArgument(h_15, 0);
                      {
                        t = not_null(i_15);
                        {
                          ATerm p_10 = t;
                          int x_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_10);
                            }
                          else
                            {
                              t = p_10;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_y_10;
                                  return(t);
                                }
                                t = debug_1(t, a_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_15, sym_Prefix_2))
                        {
                          i_15 = ATgetArgument(h_15, 0);
                          j_15 = ATgetArgument(h_15, 1);
                          {
                            ATerm o_15 = NULL,q_15 = NULL;
                            ATerm z_10;
                            z_10 = t;
                            {
                              ATerm p_15 = NULL;
                              t = not_null(i_15);
                              {
                                t = eval_config_0(t);
                                {
                                  p_15 = t;
                                  if(((o_15 != NULL) && (o_15 != p_15)))
                                    _fail(p_15);
                                  else
                                    o_15 = p_15;
                                }
                              }
                            }
                            t = z_10;
                            {
                              ATerm r_15 = NULL;
                              t = not_null(j_15);
                              {
                                t = eval_config_0(t);
                                {
                                  r_15 = t;
                                  if(((q_15 != NULL) && (q_15 != r_15)))
                                    _fail(r_15);
                                  else
                                    q_15 = r_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(q_15));
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
  ATerm z_15 = NULL;
  z_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(z_15));
    {
      t = table_get_0(t);
      {
        ATerm b_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_11;
            o_11 = t;
            {
              ATerm b_16 = NULL;
              ATerm c_16 = NULL;
              c_16 = t;
              if(((b_16 != NULL) && (b_16 != c_16)))
                _fail(c_16);
              else
                b_16 = c_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_11, not_null(z_15), not_null(b_16));
                t = table_put_0(t);
              }
            }
            t = o_11;
          }
          return(t);
        }
        t = try_1(t, b_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_114 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm p_11;
    p_11 = t;
    {
      ATerm g_16 = NULL;
      ATerm h_16 = NULL;
      t = term_q_11;
      {
        t = get_config_0(t);
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), term_s_11);
        t = geq_0(t);
      }
    }
    t = p_11;
    t = n_114(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  n_16 = t;
  l_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      m_16 :
      if(match_cons(p_16, sym_Stream_1))
        {
          q_16 = ATgetArgument(p_16, 0);
          {
            ATerm t_16 = NULL;
            t = SSL_fputc(not_null(o_16), not_null(q_16));
            {
              ATerm u_16 = NULL;
              u_16 = t;
              if(((t_16 != NULL) && (t_16 != u_16)))
                _fail(u_16);
              else
                t_16 = u_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_16));
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
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  b_17 = t;
  z_16 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      e_17 = ATgetArgument(b_17, 1);
      a_17 :
      if(match_cons(c_17, sym_Stream_1))
        {
          d_17 = ATgetArgument(c_17, 0);
          {
            ATerm h_17 = NULL;
            t = SSL_write_term_to_stream_text(not_null(d_17), not_null(e_17));
            {
              ATerm i_17 = NULL;
              i_17 = t;
              if(((h_17 != NULL) && (h_17 != i_17)))
                _fail(i_17);
              else
                h_17 = i_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_17));
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
  ATerm d_1 (ATerm t)
  {
    ATerm m_17 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm n_17 = NULL;
      n_17 = t;
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(m_17));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, d_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  r_17 :
  if(match_cons(t_17, sym__2))
    {
      u_17 = ATgetArgument(t_17, 0);
      w_17 = ATgetArgument(t_17, 1);
      s_17 :
      if(match_cons(u_17, sym_Stream_1))
        {
          v_17 = ATgetArgument(u_17, 0);
          {
            ATerm z_17 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(v_17), not_null(w_17));
            {
              ATerm a_18 = NULL;
              a_18 = t;
              if(((z_17 != NULL) && (z_17 != a_18)))
                _fail(a_18);
              else
                z_17 = a_18;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_17));
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
ATerm WriteToFile_1 (ATerm t, ATerm j_113 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym__2))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      {
        ATerm m_18 = NULL,o_18 = NULL;
        t = not_null(i_18);
        {
          ATerm n_18 = NULL;
          n_18 = t;
          if(((m_18 != NULL) && (m_18 != n_18)))
            _fail(n_18);
          else
            m_18 = n_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), term_v_11);
            {
              t = open_stream_0(t);
              {
                ATerm p_18 = NULL;
                p_18 = t;
                if(((o_18 != NULL) && (o_18 != p_18)))
                  _fail(p_18);
                else
                  o_18 = p_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(j_18));
                  {
                    t = j_113(t);
                    {
                      t = fclose_0(t);
                      t = not_null(j_18);
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
  ATerm x_18 = NULL;
  ATerm w_11;
  w_11 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm y_18 = NULL,z_18 = NULL;
            y_18 = t;
            u_18 :
            if(match_cons(y_18, sym_Output_1))
              {
                z_18 = ATgetArgument(y_18, 0);
                if(((x_18 != NULL) && (x_18 != z_18)))
                  _fail(z_18);
                else
                  x_18 = z_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_1);
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          {
            ATerm a_19 = NULL;
            t = term_a_12;
            {
              a_19 = t;
              if(((x_18 != NULL) && (x_18 != a_19)))
                _fail(a_19);
              else
                x_18 = a_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_1, _id);
  }
  t = w_11;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(x_18);
        return(t);
      }
      t = split_2(t, i_1, _id);
      return(t);
    }
    t = _2(t, _id, h_1);
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm b_19 = NULL;
              b_19 = t;
              w_18 :
              if(!(match_cons(b_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_1);
            return(t);
          }
          t = _2(t, j_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_116 (ATerm))
{
  ATerm h_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm d_12;
  d_12 = t;
  t = dtime_0(t);
  t = d_12;
  {
    t = l_116(t);
    {
      ATerm e_12;
      e_12 = t;
      {
        ATerm i_19 = NULL;
        t = dtime_0(t);
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
      }
      t = e_12;
      {
        j_19 = t;
        g_19 :
        if(match_cons(j_19, sym__2))
          {
            k_19 = ATgetArgument(j_19, 0);
            l_19 = ATgetArgument(j_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_19))), not_null(l_19));
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
  ATerm t_19 = NULL,u_19 = NULL;
  ATerm a_20 (ATerm t)
  {
    t = SSL_fclose(not_null(u_19));
    return(t);
  }
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym_Stream_1))
    {
      t_19 = ATgetArgument(u_19, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(t_19));
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = a_20(t);
          }
      }
    }
  else
    {
      t = a_20(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_Stream_1))
    {
      e_20 = ATgetArgument(d_20, 0);
      t = SSL_read_term_from_stream(not_null(e_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm l_12;
  l_12 = t;
  {
    ATerm j_20 = NULL,l_20 = NULL;
    ATerm p_12;
    p_12 = t;
    {
      ATerm k_20 = NULL;
      t = v_112(t);
      {
        k_20 = t;
        if(((j_20 != NULL) && (j_20 != k_20)))
          _fail(k_20);
        else
          j_20 = k_20;
      }
    }
    t = p_12;
    {
      ATerm m_20 = NULL;
      m_20 = t;
      if(((l_20 != NULL) && (l_20 != m_20)))
        _fail(m_20);
      else
        l_20 = m_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_20)), not_null(j_20)));
        t = printnl_0(t);
      }
    }
  }
  t = l_12;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL;
        t = SSL_fopen(not_null(t_20), not_null(u_20));
        {
          ATerm y_20 = NULL;
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_20));
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
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_is_string(not_null(c_21));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_21 = NULL;
    h_21 = t;
    if(((g_21 != NULL) && (g_21 != h_21)))
      _fail(h_21);
    else
      g_21 = h_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_21));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_21 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_21 = NULL;
    l_21 = t;
    if(((k_21 != NULL) && (k_21 != l_21)))
      _fail(l_21);
    else
      k_21 = l_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_21));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_21 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_21 = NULL;
    p_21 = t;
    if(((o_21 != NULL) && (o_21 != p_21)))
      _fail(p_21);
    else
      o_21 = p_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_21));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  u_21 :
  if(match_cons(v_21, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_21, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_21, sym_stdin_0))
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
  ATerm f_22 = NULL;
  ATerm h_22 = NULL,i_22 = NULL;
  f_22 = t;
  {
    ATerm j_22 = NULL;
    ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
    t = not_null(f_22);
    {
      j_22 = t;
      {
        t = SSL_explode_term(not_null(j_22));
        {
          l_22 = t;
          c_22 :
          if(match_cons(l_22, sym__2))
            {
              m_22 = ATgetArgument(l_22, 0);
              n_22 = ATgetArgument(l_22, 1);
              d_22 :
              if(match_string(m_22, ""))
                {
                  e_22 :
                  if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
                    {
                      o_22 = ATgetFirst((ATermList) n_22);
                      p_22 = (ATerm) ATgetNext((ATermList) n_22);
                      {
                        if(((i_22 != NULL) && (i_22 != o_22)))
                          _fail(o_22);
                        else
                          i_22 = o_22;
                        if(((h_22 != NULL) && (h_22 != p_22)))
                          _fail(p_22);
                        else
                          h_22 = p_22;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(i_22);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        ATerm r_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = r_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm a_23 = NULL,b_23 = NULL;
                    a_23 = t;
                    v_22 :
                    if(match_cons(a_23, sym_Path_1))
                      {
                        b_23 = ATgetArgument(a_23, 0);
                        t = not_null(b_23);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
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
  ATerm j_23 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL;
      ATerm i_23 = NULL;
      i_23 = t;
      if(((h_23 != NULL) && (h_23 != i_23)))
        _fail(i_23);
      else
        h_23 = i_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), term_z_12);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = debug_1(t, m_1);
        _fail(t);
      }
    }
  {
    ATerm d_13;
    d_13 = t;
    {
      ATerm k_23 = NULL;
      t = read_from_stream_0(t);
      {
        k_23 = t;
        if(((j_23 != NULL) && (j_23 != k_23)))
          _fail(k_23);
        else
          j_23 = k_23;
      }
    }
    t = d_13;
    {
      t = fclose_0(t);
      t = not_null(j_23);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_108 (ATerm), ATerm x_108 (ATerm))
{
  ATerm p_23 = NULL,r_23 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm q_23 = NULL;
    t = w_108(t);
    {
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
    }
  }
  t = i_13;
  {
    ATerm s_23 = NULL;
    t = x_108(t);
    {
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), not_null(r_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_23 = NULL;
  ATerm j_13;
  j_13 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 (ATerm t)
        {
          ATerm z_23 = NULL,a_24 = NULL;
          z_23 = t;
          w_23 :
          if(match_cons(z_23, sym_Input_1))
            {
              a_24 = ATgetArgument(z_23, 0);
              if(((y_23 != NULL) && (y_23 != a_24)))
                _fail(a_24);
              else
                y_23 = a_24;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_1);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm b_24 = NULL;
          t = term_n_13;
          {
            b_24 = t;
            if(((y_23 != NULL) && (y_23 != b_24)))
              _fail(b_24);
            else
              y_23 = b_24;
          }
        }
      }
  }
  t = j_13;
  {
    ATerm o_1 (ATerm t)
    {
      t = not_null(y_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm g_24 = NULL;
    g_24 = t;
    e_24 :
    if(!(match_string(g_24, "-k")))
      {
        if(!(match_string(g_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm h_24 = NULL;
      ATerm i_24 = NULL;
      t = string_to_int_0(t);
      {
        i_24 = t;
        if(((h_24 != NULL) && (h_24 != i_24)))
          _fail(i_24);
        else
          h_24 = i_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(h_24));
        t = set_config_0(t);
      }
    }
    t = o_13;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_u_13;
    return(t);
  }
  t = ArgOption_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_string_to_int(not_null(l_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_24 = NULL;
        t_24 = t;
        o_24 :
        if(!(match_string(t_24, "-S")))
          {
            if(!(match_string(t_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_y_13;
        t = set_config_0(t);
        t = term_z_13;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = Option_3(t, s_1, t_1, w_1);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm e_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm u_24 = NULL;
              u_24 = t;
              p_24 :
              if(!(match_string(u_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm x_24 = NULL;
              ATerm l_14;
              l_14 = t;
              {
                ATerm v_24 = NULL;
                ATerm w_24 = NULL;
                t = string_to_int_0(t);
                {
                  w_24 = t;
                  if(((v_24 != NULL) && (v_24 != w_24)))
                    _fail(w_24);
                  else
                    v_24 = w_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(v_24));
                  t = set_config_0(t);
                }
              }
              t = l_14;
              {
                ATerm y_24 = NULL;
                y_24 = t;
                if(((x_24 != NULL) && (x_24 != y_24)))
                  _fail(y_24);
                else
                  x_24 = y_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_24));
              }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_m_14;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = e_14;
            {
              ATerm a_2 (ATerm t)
              {
                ATerm z_24 = NULL;
                z_24 = t;
                s_24 :
                if(!(match_string(z_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_p_14;
                t = set_config_0(t);
                t = term_u_14;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_v_14;
                return(t);
              }
              t = Option_3(t, a_2, b_2, c_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    c_25 :
    if(!(match_string(f_25, "-o")))
      {
        if(!(match_string(f_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm i_25 = NULL;
    ATerm z_14;
    z_14 = t;
    {
      ATerm g_25 = NULL;
      ATerm h_25 = NULL;
      h_25 = t;
      if(((g_25 != NULL) && (g_25 != h_25)))
        _fail(h_25);
      else
        g_25 = h_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(g_25));
        t = set_config_0(t);
      }
    }
    t = z_14;
    {
      ATerm j_25 = NULL;
      j_25 = t;
      if(((i_25 != NULL) && (i_25 != j_25)))
        _fail(j_25);
      else
        i_25 = j_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_25));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_b_15;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm n_25 = NULL;
          n_25 = t;
          m_25 :
          if(!(match_string(n_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = term_f_15;
          t = set_config_0(t);
          t = term_k_15;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = Option_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t_25 = t;
  r_25 :
  if(match_string(t_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
        {
          u_25 = ATgetFirst((ATermList) t_25);
          v_25 = (ATerm) ATgetNext((ATermList) t_25);
          s_25 :
          if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
            {
              w_25 = ATgetFirst((ATermList) v_25);
              x_25 = (ATerm) ATgetNext((ATermList) v_25);
              {
                ATerm b_26 = NULL;
                ATerm m_15;
                m_15 = t;
                {
                  t = not_null(u_25);
                  t = k_0(t);
                }
                t = m_15;
                {
                  ATerm c_26 = NULL;
                  t = not_null(w_25);
                  {
                    t = m_0(t);
                    {
                      c_26 = t;
                      if(((b_26 != NULL) && (b_26 != c_26)))
                        _fail(c_26);
                      else
                        b_26 = c_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_25)), not_null(b_26));
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
  ATerm j_2 (ATerm t)
  {
    ATerm j_26 = NULL;
    j_26 = t;
    g_26 :
    if(!(match_string(j_26, "-i")))
      {
        if(!(match_string(j_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm m_26 = NULL;
    ATerm n_15;
    n_15 = t;
    {
      ATerm k_26 = NULL;
      ATerm l_26 = NULL;
      l_26 = t;
      if(((k_26 != NULL) && (k_26 != l_26)))
        _fail(l_26);
      else
        k_26 = l_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(k_26));
        t = set_config_0(t);
      }
    }
    t = n_15;
    {
      ATerm n_26 = NULL;
      n_26 = t;
      if(((m_26 != NULL) && (m_26 != n_26)))
        _fail(n_26);
      else
        m_26 = n_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_26));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  t = ArgOption_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = report_run_time_0(t);
  {
    ATerm s_26 = NULL;
    t = term_o_9;
    {
      t = whoami_0(t);
      {
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, term_y_15), not_null(r_26)));
      {
        t = printnl_0(t);
        {
          t = term_s_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_a_16;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  t = SSL_TicksToSeconds(not_null(v_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_27), not_null(c_27));
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            t = SSL_addr(not_null(b_27), not_null(c_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm f_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_107(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = f_16;
      {
        ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
        j_27 = t;
        i_27 :
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            k_27 = ATgetFirst((ATermList) j_27);
            l_27 = (ATerm) ATgetNext((ATermList) j_27);
            {
              ATerm o_27 = NULL;
              ATerm p_27 = NULL;
              t = not_null(l_27);
              {
                t = foldr_2(t, h_107, i_107);
                {
                  p_27 = t;
                  if(((o_27 != NULL) && (o_27 != p_27)))
                    _fail(p_27);
                  else
                    o_27 = p_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(o_27));
                t = i_107(t);
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
ATerm crush_2 (ATerm t, ATerm a_111 (ATerm), ATerm b_111 (ATerm))
{
  ATerm w_27 = NULL;
  ATerm y_27 = NULL;
  w_27 = t;
  {
    ATerm z_27 = NULL;
    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
    t = not_null(w_27);
    {
      z_27 = t;
      {
        t = SSL_explode_term(not_null(z_27));
        {
          b_28 = t;
          v_27 :
          if(match_cons(b_28, sym__2))
            {
              c_28 = ATgetArgument(b_28, 0);
              d_28 = ATgetArgument(b_28, 1);
              if(((y_27 != NULL) && (y_27 != d_28)))
                _fail(d_28);
              else
                y_27 = d_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_27);
      t = foldr_2(t, a_111, b_111);
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
    ATerm m_2 (ATerm t)
    {
      t = term_x_13;
      return(t);
    }
    t = crush_2(t, m_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym__2))
    {
      k_28 = ATgetArgument(j_28, 0);
      l_28 = ATgetArgument(j_28, 1);
      {
        ATerm j_16;
        j_16 = t;
        {
          ATerm k_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_28), not_null(l_28));
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = k_16;
              t = SSL_gtr(not_null(k_28), not_null(l_28));
            }
        }
        t = j_16;
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
  ATerm r_28 = NULL;
  ATerm s_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
      s_28 = t;
      q_28 :
      if(match_cons(s_28, sym__2))
        {
          t_28 = ATgetArgument(s_28, 0);
          u_28 = ATgetArgument(s_28, 1);
          {
            if(((r_28 != NULL) && (r_28 != t_28)))
              _fail(t_28);
            else
              r_28 = t_28;
            if(((r_28 != NULL) && (r_28 != u_28)))
              _fail(u_28);
            else
              r_28 = u_28;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = s_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_114 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm x_28 = NULL;
      ATerm y_28 = NULL;
      t = term_q_11;
      {
        t = get_config_0(t);
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), term_s_9);
        t = geq_0(t);
      }
    }
    t = w_16;
    t = m_114(t);
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm c_29 = NULL,e_29 = NULL;
    ATerm x_16;
    x_16 = t;
    {
      ATerm d_29 = NULL;
      t = run_time_0(t);
      {
        d_29 = t;
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
      }
    }
    t = x_16;
    {
      ATerm f_29 = NULL;
      t = term_o_9;
      {
        t = whoami_0(t);
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), not_null(c_29)), term_y_16), not_null(e_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_x_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Version_0))
    {
      ATerm o_29 = NULL,q_29 = NULL;
      ATerm g_17;
      g_17 = t;
      {
        ATerm p_29 = NULL;
        t = SSLgetAnnotations(not_null(m_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
      }
      t = g_17;
      {
        ATerm r_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_29));
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
        t = not_null(q_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_117 (ATerm))
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm q_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = q_17;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, s_2);
      }
    }
  t = j_117(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_table_create(not_null(w_29));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm y_17;
    y_17 = t;
    {
      t = term_b_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, not_null(a_30));
          t = table_put_0(t);
        }
      }
    }
    t = y_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_table_destroy(not_null(e_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_exit(not_null(i_30));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_101 (ATerm))
{
  ATerm l_30 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = Cons_2(t, g_101, l_30);
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  u_30 = t;
  r_30 :
  if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
    {
      s_30 = ATgetFirst((ATermList) u_30);
      t_30 = (ATerm) ATgetNext((ATermList) u_30);
      {
        ATerm x_30 = NULL;
        t = not_null(t_30);
        {
          ATerm f_18;
          f_18 = t;
          {
            ATerm y_30 = NULL,a_31 = NULL,c_31 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm z_30 = NULL;
              t = i_0(t);
              {
                z_30 = t;
                if(((y_30 != NULL) && (y_30 != z_30)))
                  _fail(z_30);
                else
                  y_30 = z_30;
              }
            }
            t = k_18;
            {
              ATerm b_31 = NULL;
              t = not_null(s_30);
              {
                t = g_0(t);
                {
                  b_31 = t;
                  if(((a_31 != NULL) && (a_31 != b_31)))
                    _fail(b_31);
                  else
                    a_31 = b_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_30)), not_null(a_31));
                {
                  c_31 = t;
                  if(((x_30 != NULL) && (x_30 != c_31)))
                    _fail(c_31);
                  else
                    x_30 = c_31;
                }
              }
            }
          }
          t = f_18;
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(x_30);
              return(t);
            }
            t = reverse_acc_2(t, g_0, t_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_30) == AT_LIST) && ATisEmpty(u_30)))
        {
          {
            t = term_o_9;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_82 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym_Program_1))
    {
      o_31 = ATgetArgument(n_31, 0);
      {
        ATerm r_31 = NULL,t_31 = NULL;
        ATerm s_31 = NULL;
        t = SSLgetAnnotations(not_null(n_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        {
          t = not_null(o_31);
          {
            ATerm v_31 = NULL;
            t = d_82(t);
            {
              t_31 = t;
              {
                ATerm w_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_31)), not_null(r_31));
                {
                  w_31 = t;
                  if(((v_31 != NULL) && (v_31 != w_31)))
                    _fail(w_31);
                  else
                    v_31 = w_31;
                }
                t = not_null(v_31);
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
  ATerm f_32 = NULL;
  ATerm l_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_32 = NULL;
      t = term_a_16;
      {
        t = get_config_0(t);
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
      }
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = l_18;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm b_3 (ATerm t)
          {
            ATerm h_32 = NULL;
            h_32 = t;
            if(((f_32 != NULL) && (f_32 != h_32)))
              _fail(h_32);
            else
              f_32 = h_32;
            return(t);
          }
          t = Program_1(t, b_3);
          return(t);
        }
        t = option_defined_1(t, a_3);
      }
    }
  {
    ATerm c_3 (ATerm t)
    {
      ATerm d_3 (ATerm t)
      {
        t = not_null(f_32);
        return(t);
      }
      t = short_description_1(t, d_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_3);
    {
      t = term_r_18;
      {
        t = echo_0(t);
        {
          t = term_v_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm i_32 = NULL;
                  ATerm j_32 = NULL;
                  j_32 = t;
                  if(((i_32 != NULL) && (i_32 != j_32)))
                    _fail(j_32);
                  else
                    i_32 = j_32;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_c_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_3);
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm k_32 = NULL;
                    ATerm l_32 = NULL;
                    ATerm g_3 (ATerm t)
                    {
                      t = not_null(f_32);
                      return(t);
                    }
                    t = long_description_1(t, g_3);
                    {
                      l_32 = t;
                      if(((k_32 != NULL) && (k_32 != l_32)))
                        _fail(l_32);
                      else
                        k_32 = l_32;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_32)), term_d_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_3);
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
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_Undefined_1))
    {
      w_32 = ATgetArgument(v_32, 0);
      {
        ATerm z_32 = NULL,b_33 = NULL;
        ATerm a_33 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        {
          t = not_null(w_32);
          {
            ATerm d_33 = NULL;
            t = e_82(t);
            {
              b_33 = t;
              {
                ATerm e_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_33)), not_null(z_32));
                {
                  e_33 = t;
                  if(((d_33 != NULL) && (d_33 != e_33)))
                    _fail(e_33);
                  else
                    d_33 = e_33;
                }
                t = not_null(d_33);
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
ATerm fetch_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm j_33 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_101, _id);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = Cons_2(t, _id, j_33);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_118 (ATerm))
{
  t = fetch_1(t, j_118);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(((ATgetType(l_33) == AT_LIST) && ATisEmpty(l_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
        {
          m_33 = ATgetFirst((ATermList) l_33);
          n_33 = (ATerm) ATgetNext((ATermList) l_33);
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
  ATerm o_19;
  o_19 = t;
  {
    ATerm q_33 = NULL;
    ATerm t_33 = NULL;
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm r_33 = NULL;
          ATerm s_33 = NULL;
          s_33 = t;
          if(((r_33 != NULL) && (r_33 != s_33)))
            _fail(s_33);
          else
            r_33 = s_33;
          t = (ATerm) ATinsert(ATempty, not_null(r_33));
        }
      }
    {
      t_33 = t;
      if(((q_33 != NULL) && (q_33 != t_33)))
        _fail(t_33);
      else
        q_33 = t_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(q_33));
      t = printnl_0(t);
    }
  }
  t = o_19;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_a_16;
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
  ATerm r_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = r_19;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_Help_0))
    {
      ATerm c_34 = NULL,e_34 = NULL;
      ATerm w_19;
      w_19 = t;
      {
        ATerm d_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          d_34 = t;
          if(((c_34 != NULL) && (c_34 != d_34)))
            _fail(d_34);
          else
            c_34 = d_34;
        }
      }
      t = w_19;
      {
        ATerm f_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_34));
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
        t = not_null(e_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_93(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm z_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        ATerm l_34 = NULL;
        l_34 = t;
        j_34 :
        if(!(match_string(l_34, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_g_20;
        t = set_config_0(t);
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_h_20;
        return(t);
      }
      t = Option_3(t, h_3, i_3, j_3);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = z_19;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm m_34 = NULL;
          m_34 = t;
          k_34 :
          if(!(match_string(m_34, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_g_20;
          {
            t = set_config_0(t);
            {
              t = term_n_20;
              t = set_config_0(t);
            }
          }
          t = term_o_20;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_p_20;
          return(t);
        }
        t = Option_3(t, p_3, q_3, r_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      t = SSL_table_get(not_null(q_34), not_null(r_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  r_36 = t;
  q_36 :
  if(match_cons(r_36, sym__3))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      u_36 = ATgetArgument(r_36, 2);
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm y_36 = NULL;
          ATerm z_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(t_36));
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = (ATerm) ATempty;
              }
            {
              z_36 = t;
              if(((y_36 != NULL) && (y_36 != z_36)))
                _fail(z_36);
              else
                y_36 = z_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_36), not_null(t_36), (ATerm) ATinsert(CheckATermList(not_null(y_36)), not_null(u_36)));
            t = table_put_0(t);
          }
        }
        t = q_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_119 (ATerm))
{
  ATerm d_37 = NULL;
  ATerm e_37 = NULL;
  t = term_o_9;
  {
    t = o_119(t);
    {
      e_37 = t;
      if(((d_37 != NULL) && (d_37 != e_37)))
        _fail(e_37);
      else
        d_37 = e_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_18, term_t_18, not_null(d_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_string(k_37, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
        {
          l_37 = ATgetFirst((ATermList) k_37);
          m_37 = (ATerm) ATgetNext((ATermList) k_37);
          {
            ATerm p_37 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              t = not_null(l_37);
              t = a_0(t);
            }
            t = z_20;
            {
              ATerm q_37 = NULL;
              t = term_o_9;
              {
                t = b_0(t);
                {
                  q_37 = t;
                  if(((p_37 != NULL) && (p_37 != q_37)))
                    _fail(q_37);
                  else
                    p_37 = q_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(p_37));
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
  ATerm s_3 (ATerm t)
  {
    ATerm v_37 = NULL;
    v_37 = t;
    u_37 :
    if(!(match_string(v_37, "--help")))
      {
        if(!(match_string(v_37, "-h")))
          {
            if(!(match_string(v_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_a_21;
    {
      t = set_config_0(t);
      t = term_b_21;
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_d_21;
    return(t);
  }
  t = Option_3(t, s_3, w_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
    {
      e_38 = ATgetFirst((ATermList) d_38);
      f_38 = (ATerm) ATgetNext((ATermList) d_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm p_38 = NULL,t_38 = NULL,u_38 = NULL;
  p_38 = t;
  o_38 :
  if(((ATgetType(p_38) == AT_LIST) && !(ATisEmpty(p_38))))
    {
      t_38 = ATgetFirst((ATermList) p_38);
      u_38 = (ATerm) ATgetNext((ATermList) p_38);
      {
        ATerm y_38 = NULL,a_39 = NULL;
        ATerm z_38 = NULL;
        t = SSLgetAnnotations(not_null(p_38));
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
        {
          t = not_null(t_38);
          {
            ATerm c_39 = NULL;
            t = l_73(t);
            {
              a_39 = t;
              {
                t = not_null(u_38);
                {
                  ATerm e_39 = NULL;
                  t = m_73(t);
                  {
                    c_39 = t;
                    {
                      ATerm f_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_39)), not_null(a_39)), not_null(y_38));
                      {
                        f_39 = t;
                        if(((e_39 != NULL) && (e_39 != f_39)))
                          _fail(f_39);
                        else
                          e_39 = f_39;
                      }
                      t = not_null(e_39);
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
  ATerm p_39 = NULL;
  p_39 = t;
  o_39 :
  if(((ATgetType(p_39) == AT_LIST) && ATisEmpty(p_39)))
    {
      {
        ATerm r_39 = NULL,t_39 = NULL;
        ATerm e_21;
        e_21 = t;
        {
          ATerm s_39 = NULL;
          t = SSLgetAnnotations(not_null(p_39));
          {
            s_39 = t;
            if(((r_39 != NULL) && (r_39 != s_39)))
              _fail(s_39);
            else
              r_39 = s_39;
          }
        }
        t = e_21;
        {
          ATerm u_39 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_39));
          {
            u_39 = t;
            if(((t_39 != NULL) && (t_39 != u_39)))
              _fail(u_39);
            else
              t_39 = u_39;
          }
          t = not_null(t_39);
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
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym__2))
    {
      b_40 = ATgetArgument(a_40, 0);
      c_40 = ATgetArgument(a_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_11, not_null(b_40), not_null(c_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_119 (ATerm))
{
  ATerm f_21;
  f_21 = t;
  {
    ATerm a_4 (ATerm t)
    {
      t = term_i_21;
      t = m_119(t);
      return(t);
    }
    t = try_1(t, a_4);
  }
  t = f_21;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm k_40 = NULL;
      ATerm j_21;
      j_21 = t;
      {
        ATerm i_40 = NULL;
        ATerm j_40 = NULL;
        j_40 = t;
        if(((i_40 != NULL) && (i_40 != j_40)))
          _fail(j_40);
        else
          i_40 = j_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(i_40));
          t = set_config_0(t);
        }
      }
      t = j_21;
      {
        ATerm l_40 = NULL;
        l_40 = t;
        if(((k_40 != NULL) && (k_40 != l_40)))
          _fail(l_40);
        else
          k_40 = l_40;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_40));
      }
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm m_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                t = m_119(t);
                t = Cons_2(t, _id, e_4);
              }
            }
          ;
          LocalPopChoice(n_21);
        }
      else
        {
          t = m_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_4, e_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
    u_40 = t;
    q_40 :
    if(match_cons(u_40, sym__3))
      {
        v_40 = ATgetArgument(u_40, 0);
        w_40 = ATgetArgument(u_40, 1);
        x_40 = ATgetArgument(u_40, 2);
        {
          if(((r_40 != NULL) && (r_40 != v_40)))
            _fail(v_40);
          else
            r_40 = v_40;
          {
            if(((s_40 != NULL) && (s_40 != w_40)))
              _fail(w_40);
            else
              s_40 = w_40;
            {
              if(((t_40 != NULL) && (t_40 != x_40)))
                _fail(x_40);
              else
                t_40 = x_40;
              t = SSL_table_put(not_null(r_40), not_null(s_40), not_null(t_40));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_119 (ATerm))
{
  ATerm a_41 = NULL;
  ATerm t_21;
  t_21 = t;
  {
    t = term_w_21;
    t = table_put_0(t);
  }
  t = t_21;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm x_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_119(t);
          ;
          LocalPopChoice(y_21);
        }
      else
        {
          t = x_21;
          {
            ATerm z_21 = t;
            int a_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(a_22);
              }
            else
              {
                t = z_21;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, f_4);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm b_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_22;
            k_22 = t;
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = q_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_22;
            {
              t = system_usage_0(t);
              {
                t = term_x_13;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = b_22;
            {
              ATerm s_22 = t;
              int t_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_22;
                  u_22 = t;
                  {
                    t = term_f_20;
                    t = get_config_0(t);
                  }
                  t = u_22;
                  {
                    t = system_about_0(t);
                    {
                      t = term_x_13;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(t_22);
                }
              else
                {
                  t = s_22;
                  {
                    ATerm h_4 (ATerm t)
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm b_41 = NULL;
                        b_41 = t;
                        if(((a_41 != NULL) && (a_41 != b_41)))
                          _fail(b_41);
                        else
                          a_41 = b_41;
                        return(t);
                      }
                      t = Undefined_1(t, i_4);
                      return(t);
                    }
                    t = option_defined_1(t, h_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_41)), term_c_23));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_s_9;
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
      t = try_1(t, g_4);
      {
        ATerm d_23;
        d_23 = t;
        {
          t = term_s_18;
          t = table_destroy_0(t);
        }
        t = d_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm))
{
  t = parse_options_1(t, l_117);
  {
    t = store_options_0(t);
    {
      t = n_117(t);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_117);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            {
              ATerm g_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_117(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(l_23);
                }
              else
                {
                  t = g_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_117(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_4, c_117, d_117, w_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm o_23;
      o_23 = t;
      {
        ATerm e_41 = NULL;
        ATerm l_41 = NULL;
        t = term_a_16;
        {
          t = get_config_0(t);
          {
            l_41 = t;
            if(((e_41 != NULL) && (e_41 != l_41)))
              _fail(l_41);
            else
              e_41 = l_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, not_null(e_41)));
          t = printnl_0(t);
        }
      }
      t = o_23;
      return(t);
    }
    t = if_verbose2_1(t, y_4);
    return(t);
  }
  t = iowrap_4(t, u_116, v_116, w_116, x_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_116 (ATerm), ATerm t_116 (ATerm))
{
  t = iowrap_3(t, s_116, t_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_116 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = _2(t, _id, p_116);
    return(t);
  }
  t = iowrap_2(t, z_4, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm g_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, d_5, g_5);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, c_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
