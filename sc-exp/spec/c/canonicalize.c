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
ATerm term_d_28;
ATerm term_m_27;
ATerm term_a_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_n_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_b_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_f_9;
ATerm term_r_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_g_7;
ATerm term_o_6;
ATerm term_k_6;
ATerm term_y_5;
void init_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_7);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_9);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_CallT_3, term_l_11, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_CallT_3, term_o_11, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_12);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_m_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_r_8);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_r_8);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_c_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_r_8);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_r_8);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_r_8);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__3, term_b_24, term_c_24, (ATerm) ATempty);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_112 (ATerm));
ATerm guardedlchoice_1 (ATerm, ATerm h_122 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm lchoice_1 (ATerm, ATerm g_122 (ATerm));
ATerm LChoice_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm abstract_choice_2 (ATerm, ATerm i_122 (ATerm), ATerm j_122 (ATerm));
ATerm choice_1 (ATerm, ATerm f_122 (ATerm));
ATerm Choice_2 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm restore_MarkVar_0 (ATerm);
ATerm Let_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_MarkVar_0 (ATerm);
ATerm isect_MarkVar_0 (ATerm);
ATerm mark_let_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm z_121 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm y_121 (ATerm));
ATerm scope_2 (ATerm, ATerm a_122 (ATerm), ATerm b_122 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm mark_scope_0 (ATerm);
ATerm Build_1 (ATerm, ATerm v_77 (ATerm));
ATerm mark_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm c_122 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm));
ATerm union_1 (ATerm, ATerm y_104 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm));
ATerm crush_3 (ATerm, ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm));
ATerm collect_om_1 (ATerm, ATerm u_105 (ATerm));
ATerm collect_1 (ATerm, ATerm v_105 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm e_122 (ATerm));
ATerm MarkVar_0 (ATerm);
ATerm mark_match_0 (ATerm);
ATerm mark_buv_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_73 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_73 (ATerm));
ATerm mark_bound_unbound_vars_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm m_77 (ATerm));
ATerm CallT_3 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm));
ATerm unzip_1 (ATerm, ATerm i_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm w_96 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm g_94 (ATerm));
ATerm downup2_2 (ATerm, ATerm j_95 (ATerm), ATerm k_95 (ATerm));
ATerm _2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_101 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_114 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm y_112 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_116 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_112 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_108 (ATerm), ATerm m_108 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_106 (ATerm), ATerm x_106 (ATerm));
ATerm crush_2 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_114 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_116 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_118 (ATerm));
ATerm map_1 (ATerm, ATerm v_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_118 (ATerm));
ATerm Program_1 (ATerm, ATerm s_81 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_117 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_93 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm s_116 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_116 (ATerm), ATerm i_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_116 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm x_5;
  x_5 = t;
  {
    ATerm g_3 = NULL;
    ATerm h_3 = NULL;
    h_3 = t;
    if(((g_3 != NULL) && (g_3 != h_3)))
      _fail(h_3);
    else
      g_3 = h_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATempty, not_null(g_3)));
      t = printnl_0(t);
    }
  }
  t = x_5;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_112 (ATerm))
{
  ATerm z_5;
  z_5 = t;
  {
    t = o_112(t);
    t = debug_0(t);
  }
  t = z_5;
  return(t);
}
ATerm guardedlchoice_1 (ATerm t, ATerm h_122 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = GuardedLChoice_3(t, h_122, h_122, _id);
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, h_122);
    return(t);
  }
  t = abstract_choice_2(t, c_0, e_0);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_GuardedLChoice_3))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      t_4 = ATgetArgument(q_4, 2);
      {
        ATerm y_4 = NULL,a_5 = NULL;
        ATerm z_4 = NULL;
        t = SSLgetAnnotations(not_null(q_4));
        {
          z_4 = t;
          if(((y_4 != NULL) && (y_4 != z_4)))
            _fail(z_4);
          else
            y_4 = z_4;
        }
        {
          t = not_null(r_4);
          {
            ATerm c_5 = NULL;
            t = h_78(t);
            {
              a_5 = t;
              {
                t = not_null(s_4);
                {
                  ATerm e_5 = NULL;
                  t = i_78(t);
                  {
                    c_5 = t;
                    {
                      t = not_null(t_4);
                      {
                        ATerm g_5 = NULL;
                        t = j_78(t);
                        {
                          e_5 = t;
                          {
                            ATerm h_5 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(a_5), not_null(c_5), not_null(e_5)), not_null(y_4));
                            {
                              h_5 = t;
                              if(((g_5 != NULL) && (g_5 != h_5)))
                                _fail(h_5);
                              else
                                g_5 = h_5;
                            }
                            t = not_null(g_5);
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
ATerm lchoice_1 (ATerm t, ATerm g_122 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = LChoice_2(t, g_122, _id);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = LChoice_2(t, _id, g_122);
    return(t);
  }
  t = abstract_choice_2(t, f_0, n_0);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym_LChoice_2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      {
        ATerm a_6 = NULL,c_6 = NULL;
        ATerm b_6 = NULL;
        t = SSLgetAnnotations(not_null(u_5));
        {
          b_6 = t;
          if(((a_6 != NULL) && (a_6 != b_6)))
            _fail(b_6);
          else
            a_6 = b_6;
        }
        {
          t = not_null(v_5);
          {
            ATerm e_6 = NULL;
            t = d_78(t);
            {
              c_6 = t;
              {
                t = not_null(w_5);
                {
                  ATerm g_6 = NULL;
                  t = e_78(t);
                  {
                    e_6 = t;
                    {
                      ATerm h_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_6), not_null(e_6)), not_null(a_6));
                      {
                        h_6 = t;
                        if(((g_6 != NULL) && (g_6 != h_6)))
                          _fail(h_6);
                        else
                          g_6 = h_6;
                      }
                      t = not_null(g_6);
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
ATerm abstract_choice_2 (ATerm t, ATerm i_122 (ATerm), ATerm j_122 (ATerm))
{
  ATerm p_6 = NULL,r_6 = NULL;
  ATerm d_6;
  d_6 = t;
  {
    ATerm q_6 = NULL;
    t = save_MarkVar_0(t);
    {
      q_6 = t;
      if(((p_6 != NULL) && (p_6 != q_6)))
        _fail(q_6);
      else
        p_6 = q_6;
    }
  }
  t = d_6;
  {
    t = i_122(t);
    {
      ATerm f_6;
      f_6 = t;
      {
        ATerm s_6 = NULL;
        t = save_MarkVar_0(t);
        {
          s_6 = t;
          {
            if(((r_6 != NULL) && (r_6 != s_6)))
              _fail(s_6);
            else
              r_6 = s_6;
            {
              t = not_null(p_6);
              t = restore_MarkVar_0(t);
            }
          }
        }
      }
      t = f_6;
      {
        t = j_122(t);
        {
          ATerm i_6;
          i_6 = t;
          {
            t = not_null(r_6);
            t = isect_MarkVar_0(t);
          }
          t = i_6;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm f_122 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = Choice_2(t, f_122, _id);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = Choice_2(t, _id, f_122);
    return(t);
  }
  t = abstract_choice_2(t, o_0, p_0);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Choice_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm h_7 = NULL,j_7 = NULL;
        ATerm i_7 = NULL;
        t = SSLgetAnnotations(not_null(b_7));
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
        {
          t = not_null(c_7);
          {
            ATerm l_7 = NULL;
            t = b_77(t);
            {
              j_7 = t;
              {
                t = not_null(d_7);
                {
                  ATerm n_7 = NULL;
                  t = c_77(t);
                  {
                    l_7 = t;
                    {
                      ATerm o_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(j_7), not_null(l_7)), not_null(h_7));
                      {
                        o_7 = t;
                        if(((n_7 != NULL) && (n_7 != o_7)))
                          _fail(o_7);
                        else
                          n_7 = o_7;
                      }
                      t = not_null(n_7);
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
ATerm table_putlist_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym__2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        t = not_null(a_8);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
            d_8 = t;
            w_7 :
            if(match_cons(d_8, sym__2))
              {
                e_8 = ATgetArgument(d_8, 0);
                f_8 = ATgetArgument(d_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_7), not_null(e_8), not_null(f_8));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, q_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_MarkVar_0 (ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  {
    ATerm j_6;
    j_6 = t;
    {
      t = term_k_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(l_8));
          t = table_putlist_0(t);
        }
      }
    }
    t = j_6;
  }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Let_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm a_9 = NULL,c_9 = NULL;
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(u_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        {
          t = not_null(v_8);
          {
            ATerm e_9 = NULL;
            t = n_77(t);
            {
              c_9 = t;
              {
                t = not_null(w_8);
                {
                  ATerm g_9 = NULL;
                  t = o_77(t);
                  {
                    e_9 = t;
                    {
                      ATerm h_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(c_9), not_null(e_9)), not_null(a_9));
                      {
                        h_9 = t;
                        if(((g_9 != NULL) && (g_9 != h_9)))
                          _fail(h_9);
                        else
                          g_9 = h_9;
                      }
                      t = not_null(g_9);
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
ATerm table_keys_0 (ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  t = SSL_table_keys(not_null(o_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm w_9 = NULL;
        ATerm y_9 = NULL;
        w_9 = t;
        {
          ATerm z_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(w_9));
          {
            t = table_get_0(t);
            {
              z_9 = t;
              if(((y_9 != NULL) && (y_9 != z_9)))
                _fail(z_9);
              else
                y_9 = z_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(y_9));
        }
        return(t);
      }
      t = map_1(t, r_0);
    }
  }
  return(t);
}
ATerm save_MarkVar_0 (ATerm t)
{
  t = term_k_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm isect_MarkVar_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      m_10 = t;
      g_10 :
      if(match_cons(m_10, sym__2))
        {
          n_10 = ATgetArgument(m_10, 0);
          o_10 = ATgetArgument(m_10, 1);
          h_10 :
          if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
            {
              p_10 = ATgetFirst((ATermList) o_10);
              r_10 = (ATerm) ATgetNext((ATermList) o_10);
              i_10 :
              if(match_cons(p_10, sym_Defined_1))
                {
                  q_10 = ATgetArgument(p_10, 0);
                  j_10 :
                  if(!(match_cons(n_10, sym_Scopes_0)))
                    {
                      ATerm l_6 = t;
                      int m_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_6;
                          n_6 = t;
                          {
                            ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(n_10));
                            {
                              t = table_get_0(t);
                              {
                                t_10 = t;
                                e_10 :
                                if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
                                  {
                                    u_10 = ATgetFirst((ATermList) t_10);
                                    w_10 = (ATerm) ATgetNext((ATermList) t_10);
                                    f_10 :
                                    if(match_cons(u_10, sym_Defined_1))
                                      {
                                        v_10 = ATgetArgument(u_10, 0);
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
                            }
                          }
                          t = n_6;
                          ;
                          LocalPopChoice(m_6);
                        }
                      else
                        {
                          t = l_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), (ATerm) ATinsert(ATempty, term_o_6));
                        }
                    }
                }
              else
                {
                  k_10 :
                  if(!(match_cons(n_10, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              l_10 :
              if(!(match_cons(n_10, sym_Scopes_0)))
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
    t = try_1(t, t_0);
    return(t);
  }
  t = map_1(t, s_0);
  t = restore_MarkVar_0(t);
  return(t);
}
ATerm mark_let_0 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL;
  t = Let_2(t, _id, _id);
  {
    ATerm t_6;
    t_6 = t;
    {
      ATerm b_11 = NULL;
      t = save_MarkVar_0(t);
      {
        b_11 = t;
        if(((a_11 != NULL) && (a_11 != b_11)))
          _fail(b_11);
        else
          a_11 = b_11;
      }
    }
    t = t_6;
    {
      t = Let_2(t, _id, mark_buv_0);
      {
        ATerm u_6;
        u_6 = t;
        {
          ATerm d_11 = NULL;
          t = not_null(a_11);
          {
            t = isect_MarkVar_0(t);
            {
              t = save_MarkVar_0(t);
              {
                d_11 = t;
                if(((c_11 != NULL) && (c_11 != d_11)))
                  _fail(d_11);
                else
                  c_11 = d_11;
              }
            }
          }
        }
        t = u_6;
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              t = mark_buv_0(t);
              {
                ATerm v_6;
                v_6 = t;
                {
                  t = not_null(c_11);
                  t = restore_MarkVar_0(t);
                }
                t = v_6;
              }
              return(t);
            }
            t = map_1(t, v_0);
            return(t);
          }
          t = Let_2(t, u_0, _id);
        }
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
    {
      j_11 = ATgetFirst((ATermList) i_11);
      k_11 = (ATerm) ATgetNext((ATermList) i_11);
      t = not_null(k_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      {
        ATerm w_6;
        w_6 = t;
        {
          ATerm v_11 = NULL;
          ATerm w_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), not_null(s_11));
          {
            ATerm x_6 = t;
            int y_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(y_6);
              }
            else
              {
                t = x_6;
                t = (ATerm) ATempty;
              }
            {
              w_11 = t;
              if(((v_11 != NULL) && (v_11 != w_11)))
                _fail(w_11);
              else
                v_11 = w_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), not_null(s_11), not_null(v_11));
            t = table_put_0(t);
          }
        }
        t = w_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm z_121 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  ATerm z_6;
  z_6 = t;
  {
    ATerm g_12 = NULL;
    ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
    t = z_121(t);
    {
      g_12 = t;
      {
        if(((f_12 != NULL) && (f_12 != g_12)))
          _fail(g_12);
        else
          f_12 = g_12;
        {
          ATerm e_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), term_g_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(f_7);
            }
          else
            {
              t = e_7;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_12 = t;
            c_12 :
            if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
              {
                i_12 = ATgetFirst((ATermList) h_12);
                j_12 = (ATerm) ATgetNext((ATermList) h_12);
                {
                  if(((e_12 != NULL) && (e_12 != i_12)))
                    _fail(i_12);
                  else
                    e_12 = i_12;
                  {
                    if(((d_12 != NULL) && (d_12 != j_12)))
                      _fail(j_12);
                    else
                      d_12 = j_12;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_12), term_g_7, not_null(d_12));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm k_12 = NULL;
                              k_12 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(k_12));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_0);
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
  t = z_6;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm))
{
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_93(t);
      t = a_94(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      {
        t = a_94(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm y_121 (ATerm))
{
  ATerm r_12 = NULL;
  ATerm p_7;
  p_7 = t;
  {
    ATerm s_12 = NULL;
    ATerm t_12 = NULL;
    t = y_121(t);
    {
      s_12 = t;
      {
        if(((r_12 != NULL) && (r_12 != s_12)))
          _fail(s_12);
        else
          r_12 = s_12;
        {
          ATerm u_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), term_g_7);
          {
            ATerm q_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_7);
              }
            else
              {
                t = q_7;
                t = (ATerm) ATempty;
              }
            {
              u_12 = t;
              if(((t_12 != NULL) && (t_12 != u_12)))
                _fail(u_12);
              else
                t_12 = u_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_12), term_g_7, (ATerm) ATinsert(CheckATermList(not_null(t_12)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = p_7;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm a_122 (ATerm), ATerm b_122 (ATerm))
{
  t = begin_scope_1(t, a_122);
  {
    ATerm x_0 (ATerm t)
    {
      t = end_scope_1(t, a_122);
      return(t);
    }
    t = restore_always_2(t, b_122, x_0);
  }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Scope_2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      {
        ATerm j_13 = NULL,l_13 = NULL;
        ATerm k_13 = NULL;
        t = SSLgetAnnotations(not_null(d_13));
        {
          k_13 = t;
          if(((j_13 != NULL) && (j_13 != k_13)))
            _fail(k_13);
          else
            j_13 = k_13;
        }
        {
          t = not_null(e_13);
          {
            ATerm n_13 = NULL;
            t = x_77(t);
            {
              l_13 = t;
              {
                t = not_null(f_13);
                {
                  ATerm p_13 = NULL;
                  t = y_77(t);
                  {
                    n_13 = t;
                    {
                      ATerm q_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_13), not_null(n_13)), not_null(j_13));
                      {
                        q_13 = t;
                        if(((p_13 != NULL) && (p_13 != q_13)))
                          _fail(q_13);
                        else
                          p_13 = q_13;
                      }
                      t = not_null(p_13);
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
ATerm mark_scope_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_Scope_2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            t = term_k_6;
            return(t);
          }
          ATerm a_1 (ATerm t)
          {
            ATerm s_7;
            s_7 = t;
            {
              t = not_null(a_14);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_14 = NULL;
                  d_14 = t;
                  {
                    ATerm t_7;
                    t_7 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_14)), term_v_7);
                      {
                        ATerm c_1 (ATerm t)
                        {
                          t = term_k_6;
                          return(t);
                        }
                        t = assert_1(t, c_1);
                      }
                    }
                    t = t_7;
                  }
                  return(t);
                }
                t = map_1(t, b_1);
              }
            }
            t = s_7;
            t = mark_buv_0(t);
            return(t);
          }
          t = scope_2(t, z_0, a_1);
          return(t);
        }
        t = Scope_2(t, _id, y_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_Build_1))
    {
      n_14 = ATgetArgument(m_14, 0);
      {
        ATerm q_14 = NULL,s_14 = NULL;
        ATerm r_14 = NULL;
        t = SSLgetAnnotations(not_null(m_14));
        {
          r_14 = t;
          if(((q_14 != NULL) && (q_14 != r_14)))
            _fail(r_14);
          else
            q_14 = r_14;
        }
        {
          t = not_null(n_14);
          {
            ATerm u_14 = NULL;
            t = v_77(t);
            {
              s_14 = t;
              {
                ATerm v_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_14)), not_null(q_14));
                {
                  v_14 = t;
                  if(((u_14 != NULL) && (u_14 != v_14)))
                    _fail(v_14);
                  else
                    u_14 = v_14;
                }
                t = not_null(u_14);
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
ATerm mark_build_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = alltd_1(t, MarkVar_0);
    return(t);
  }
  t = Build_1(t, d_1);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_122 (ATerm))
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
        ATerm b_8;
        b_8 = t;
        {
          ATerm n_15 = NULL;
          ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
          t = c_122(t);
          {
            n_15 = t;
            {
              if(((k_15 != NULL) && (k_15 != n_15)))
                _fail(n_15);
              else
                k_15 = n_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_15), not_null(g_15), not_null(h_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_8 = t;
                    int g_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_g_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(g_8);
                      }
                    else
                      {
                        t = c_8;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_15 = t;
                      d_15 :
                      if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
                        {
                          p_15 = ATgetFirst((ATermList) o_15);
                          q_15 = (ATerm) ATgetNext((ATermList) o_15);
                          {
                            if(((l_15 != NULL) && (l_15 != p_15)))
                              _fail(p_15);
                            else
                              l_15 = p_15;
                            {
                              if(((m_15 != NULL) && (m_15 != q_15)))
                                _fail(q_15);
                              else
                                m_15 = q_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_15), term_g_7, (ATerm) ATinsert(CheckATermList(not_null(m_15)), (ATerm) ATinsert(CheckATermList(not_null(l_15)), not_null(g_15))));
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
        t = b_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      if(((x_15 != NULL) && (x_15 != y_15)))
        _fail(y_15);
      else
        x_15 = y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      g_16 = (ATerm) ATgetNext((ATermList) e_16);
      {
        t = d_105(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
              t = c_105(t);
            }
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(g_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm h_8 = t;
            int i_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                ;
                LocalPopChoice(i_8);
              }
            else
              {
                t = h_8;
                {
                  ATerm j_8 = t;
                  int k_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_104, f_1);
                      t = v_16(t);
                      ;
                      LocalPopChoice(k_8);
                    }
                  else
                    {
                      t = j_8;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm))
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_106(t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
        a_17 = t;
        z_16 :
        if(((ATgetType(a_17) == AT_LIST) && !(ATisEmpty(a_17))))
          {
            b_17 = ATgetFirst((ATermList) a_17);
            c_17 = (ATerm) ATgetNext((ATermList) a_17);
            {
              ATerm f_17 = NULL,h_17 = NULL;
              ATerm o_8;
              o_8 = t;
              {
                ATerm g_17 = NULL;
                t = not_null(b_17);
                {
                  t = a_107(t);
                  {
                    g_17 = t;
                    if(((f_17 != NULL) && (f_17 != g_17)))
                      _fail(g_17);
                    else
                      f_17 = g_17;
                  }
                }
              }
              t = o_8;
              {
                ATerm i_17 = NULL;
                t = not_null(c_17);
                {
                  t = foldr_3(t, y_106, z_106, a_107);
                  {
                    i_17 = t;
                    if(((h_17 != NULL) && (h_17 != i_17)))
                      _fail(i_17);
                    else
                      h_17 = i_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
                  t = z_106(t);
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
ATerm crush_3 (ATerm t, ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm))
{
  ATerm q_17 = NULL;
  ATerm s_17 = NULL;
  q_17 = t;
  {
    ATerm t_17 = NULL;
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
    t = not_null(q_17);
    {
      t_17 = t;
      {
        t = SSL_explode_term(not_null(t_17));
        {
          v_17 = t;
          p_17 :
          if(match_cons(v_17, sym__2))
            {
              w_17 = ATgetArgument(v_17, 0);
              x_17 = ATgetArgument(v_17, 1);
              if(((s_17 != NULL) && (s_17 != x_17)))
                _fail(x_17);
              else
                s_17 = x_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_17);
      t = foldr_3(t, r_110, s_110, t_110);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL;
      ATerm d_18 = NULL;
      t = u_105(t);
      {
        d_18 = t;
        if(((c_18 != NULL) && (c_18 != d_18)))
          _fail(d_18);
        else
          c_18 = d_18;
      }
      t = (ATerm) ATinsert(ATempty, not_null(c_18));
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm g_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = collect_om_1(t, u_105);
          return(t);
        }
        t = crush_3(t, g_1, union_0, h_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_105 (ATerm))
{
  t = collect_om_1(t, v_105);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  g_18 :
  if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
    {
      i_18 = ATgetFirst((ATermList) h_18);
      j_18 = (ATerm) ATgetNext((ATermList) h_18);
      t = not_null(i_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
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
ATerm rewrite_1 (ATerm t, ATerm e_122 (ATerm))
{
  ATerm w_18 = NULL;
  ATerm y_18 = NULL;
  w_18 = t;
  {
    ATerm z_18 = NULL;
    t = term_r_8;
    {
      t = e_122(t);
      {
        z_18 = t;
        if(((y_18 != NULL) && (y_18 != z_18)))
          _fail(z_18);
        else
          y_18 = z_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(w_18));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm MarkVar_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Var_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19 = NULL;
            ATerm y_8;
            y_8 = t;
            {
              ATerm t_19 = NULL,u_19 = NULL;
              t = not_null(p_19);
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_k_6;
                  return(t);
                }
                t = rewrite_1(t, i_1);
                {
                  t_19 = t;
                  e_19 :
                  if(match_cons(t_19, sym_Defined_1))
                    {
                      u_19 = ATgetArgument(t_19, 0);
                      f_19 :
                      if(!(match_string(u_19, "j_0")))
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
            t = y_8;
            {
              ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL;
              ATerm z_8;
              z_8 = t;
              {
                ATerm x_19 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_19));
                {
                  x_19 = t;
                  if(((w_19 != NULL) && (w_19 != x_19)))
                    _fail(x_19);
                  else
                    w_19 = x_19;
                }
              }
              t = z_8;
              {
                ATerm d_9;
                d_9 = t;
                {
                  ATerm z_19 = NULL;
                  t = (ATerm) ATinsert(ATempty, term_f_9);
                  {
                    z_19 = t;
                    if(((y_19 != NULL) && (y_19 != z_19)))
                      _fail(z_19);
                    else
                      y_19 = z_19;
                  }
                }
                t = d_9;
                {
                  t = SSLsetAnnotations(not_null(w_19), not_null(y_19));
                  {
                    a_20 = t;
                    if(((v_19 != NULL) && (v_19 != a_20)))
                      _fail(a_20);
                    else
                      v_19 = a_20;
                  }
                }
              }
              t = not_null(v_19);
            }
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = s_8;
            {
              ATerm f_20 = NULL;
              ATerm i_9;
              i_9 = t;
              {
                ATerm d_20 = NULL,e_20 = NULL;
                t = not_null(p_19);
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = term_k_6;
                    return(t);
                  }
                  t = rewrite_1(t, j_1);
                  {
                    d_20 = t;
                    j_19 :
                    if(match_cons(d_20, sym_Defined_1))
                      {
                        e_20 = ATgetArgument(d_20, 0);
                        k_19 :
                        if(!(match_string(e_20, "h_0")))
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
              t = i_9;
              {
                ATerm g_20 = NULL,i_20 = NULL,k_20 = NULL;
                ATerm j_9;
                j_9 = t;
                {
                  ATerm h_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_19));
                  {
                    h_20 = t;
                    if(((g_20 != NULL) && (g_20 != h_20)))
                      _fail(h_20);
                    else
                      g_20 = h_20;
                  }
                }
                t = j_9;
                {
                  ATerm k_9;
                  k_9 = t;
                  {
                    ATerm j_20 = NULL;
                    t = (ATerm) ATinsert(ATempty, term_l_9);
                    {
                      j_20 = t;
                      if(((i_20 != NULL) && (i_20 != j_20)))
                        _fail(j_20);
                      else
                        i_20 = j_20;
                    }
                  }
                  t = k_9;
                  {
                    t = SSLsetAnnotations(not_null(g_20), not_null(i_20));
                    {
                      k_20 = t;
                      if(((f_20 != NULL) && (f_20 != k_20)))
                        _fail(k_20);
                      else
                        f_20 = k_20;
                    }
                  }
                }
                t = not_null(f_20);
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
ATerm mark_match_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Match_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      {
        ATerm c_21 = NULL;
        ATerm d_21 = NULL;
        t = not_null(a_21);
        {
          t = alltd_1(t, MarkVar_0);
          {
            d_21 = t;
            {
              if(((c_21 != NULL) && (c_21 != d_21)))
                _fail(d_21);
              else
                c_21 = d_21;
              {
                t = not_null(a_21);
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm e_21 = NULL,f_21 = NULL;
                    e_21 = t;
                    w_20 :
                    if(match_cons(e_21, sym_Var_1))
                      {
                        f_21 = ATgetArgument(e_21, 0);
                        t = not_null(f_21);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = collect_1(t, k_1);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm h_21 = NULL;
                      h_21 = t;
                      {
                        ATerm m_9;
                        m_9 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_21)), term_p_9);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              t = term_k_6;
                              return(t);
                            }
                            t = assert_1(t, m_1);
                          }
                        }
                        t = m_9;
                      }
                      return(t);
                    }
                    t = map_1(t, l_1);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_21));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_buv_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0(t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm v_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0(t);
                  ;
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = v_9;
                  {
                    ATerm a_10 = t;
                    int b_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0(t);
                        ;
                        LocalPopChoice(b_10);
                      }
                    else
                      {
                        t = a_10;
                        {
                          ATerm c_10 = t;
                          int d_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              t = choice_1(t, mark_buv_0);
                              ;
                              LocalPopChoice(d_10);
                            }
                          else
                            {
                              t = c_10;
                              {
                                ATerm s_10 = t;
                                int x_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    t = lchoice_1(t, mark_buv_0);
                                    ;
                                    LocalPopChoice(x_10);
                                  }
                                else
                                  {
                                    t = s_10;
                                    {
                                      ATerm y_10 = t;
                                      int z_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          t = guardedlchoice_1(t, mark_buv_0);
                                          ;
                                          LocalPopChoice(z_10);
                                        }
                                      else
                                        {
                                          t = y_10;
                                          t = _all(t, mark_buv_0);
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
ATerm Strategies_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Strategies_1))
    {
      t_21 = ATgetArgument(s_21, 0);
      {
        ATerm w_21 = NULL,y_21 = NULL;
        ATerm x_21 = NULL;
        t = SSLgetAnnotations(not_null(s_21));
        {
          x_21 = t;
          if(((w_21 != NULL) && (w_21 != x_21)))
            _fail(x_21);
          else
            w_21 = x_21;
        }
        {
          t = not_null(t_21);
          {
            ATerm a_22 = NULL;
            t = e_73(t);
            {
              y_21 = t;
              {
                ATerm b_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(y_21)), not_null(w_21));
                {
                  b_22 = t;
                  if(((a_22 != NULL) && (a_22 != b_22)))
                    _fail(b_22);
                  else
                    a_22 = b_22;
                }
                t = not_null(a_22);
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
ATerm Specification_1 (ATerm t, ATerm j_73 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Specification_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm t_22 = NULL;
            t = j_73(t);
            {
              r_22 = t;
              {
                ATerm u_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_22)), not_null(p_22));
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                t = not_null(t_22);
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
ATerm mark_bound_unbound_vars_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  t = say_1(t, n_1);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            t = map_1(t, mark_buv_0);
            return(t);
          }
          t = Strategies_1(t, r_1);
          return(t);
        }
        t = Cons_2(t, q_1, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, p_1);
      return(t);
    }
    t = Specification_1(t, o_1);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_f_11;
        return(t);
      }
      t = say_1(t, s_1);
    }
  }
  return(t);
}
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
  ATerm b_23 = NULL;
  ATerm d_23 = NULL;
  b_23 = t;
  {
    ATerm e_23 = NULL;
    t = new_0(t);
    {
      e_23 = t;
      if(((d_23 != NULL) && (d_23 != e_23)))
        _fail(e_23);
      else
        d_23 = e_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_23)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_23), (ATerm)ATempty, (ATerm)ATempty, not_null(b_23))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_SVar_1))
    {
      n_23 = ATgetArgument(m_23, 0);
      {
        ATerm q_23 = NULL,s_23 = NULL;
        ATerm r_23 = NULL;
        t = SSLgetAnnotations(not_null(m_23));
        {
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
        }
        {
          t = not_null(n_23);
          {
            ATerm u_23 = NULL;
            t = m_77(t);
            {
              s_23 = t;
              {
                ATerm v_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(s_23)), not_null(q_23));
                {
                  v_23 = t;
                  if(((u_23 != NULL) && (u_23 != v_23)))
                    _fail(v_23);
                  else
                    u_23 = v_23;
                }
                t = not_null(u_23);
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
ATerm CallT_3 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_CallT_3))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      k_24 = ATgetArgument(h_24, 2);
      {
        ATerm p_24 = NULL,r_24 = NULL;
        ATerm q_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
        {
          t = not_null(i_24);
          {
            ATerm t_24 = NULL;
            t = r_77(t);
            {
              r_24 = t;
              {
                t = not_null(j_24);
                {
                  ATerm v_24 = NULL;
                  t = s_77(t);
                  {
                    t_24 = t;
                    {
                      t = not_null(k_24);
                      {
                        ATerm x_24 = NULL;
                        t = t_77(t);
                        {
                          v_24 = t;
                          {
                            ATerm y_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(r_24), not_null(t_24), not_null(v_24)), not_null(p_24));
                            {
                              y_24 = t;
                              if(((x_24 != NULL) && (x_24 != y_24)))
                                _fail(y_24);
                              else
                                x_24 = y_24;
                            }
                            t = not_null(x_24);
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
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  l_25 = t;
  g_25 :
  if(match_cons(l_25, sym_Let_2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      h_25 :
      if(match_cons(n_25, sym_CallT_3))
        {
          o_25 = ATgetArgument(n_25, 0);
          q_25 = ATgetArgument(n_25, 1);
          r_25 = ATgetArgument(n_25, 2);
          i_25 :
          if(match_cons(o_25, sym_SVar_1))
            {
              p_25 = ATgetArgument(o_25, 0);
              j_25 :
              if(((ATgetType(q_25) == AT_LIST) && ATisEmpty(q_25)))
                {
                  k_25 :
                  if(((ATgetType(r_25) == AT_LIST) && ATisEmpty(r_25)))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_25)), (ATerm)ATempty, (ATerm) ATempty), not_null(m_25));
                    }
                  else
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
  ATerm x_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Fail_0))
    {
      t = term_m_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_Id_0))
    {
      t = term_t_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  h_26 = t;
  e_26 :
  if(match_cons(h_26, sym__2))
    {
      i_26 = ATgetArgument(h_26, 0);
      l_26 = ATgetArgument(h_26, 1);
      f_26 :
      if(match_cons(i_26, sym__2))
        {
          j_26 = ATgetArgument(i_26, 0);
          k_26 = ATgetArgument(i_26, 1);
          g_26 :
          if(match_cons(l_26, sym__2))
            {
              m_26 = ATgetArgument(l_26, 0);
              n_26 = ATgetArgument(l_26, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_26)), not_null(j_26)), (ATerm) ATinsert(CheckATermList(not_null(n_26)), not_null(k_26)));
            }
          else
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
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  u_26 :
  if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
    {
      w_26 = ATgetFirst((ATermList) v_26);
      x_26 = (ATerm) ATgetNext((ATermList) v_26);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), not_null(x_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  c_27 :
  if(((ATgetType(d_27) == AT_LIST) && ATisEmpty(d_27)))
    {
      t = term_u_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm))
{
  ATerm f_27 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          t = z_102(t);
          {
            t = _2(t, b_103, f_27);
            t = a_103(t);
          }
        }
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_103);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm g_27 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_96(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = _all(t, g_27);
      }
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  ATerm x_31 (ATerm t)
  {
    t = not_null(i_29);
    return(t);
  }
  ATerm y_31 (ATerm t)
  {
    t = not_null(j_29);
    return(t);
  }
  ATerm z_31 (ATerm t)
  {
    ATerm h_30 = NULL;
    ATerm i_30 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(f_29));
    {
      t = conc_0(t);
      {
        i_30 = t;
        if(((h_30 != NULL) && (h_30 != i_30)))
          _fail(i_30);
        else
          h_30 = i_30;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_30), not_null(g_29));
    return(t);
  }
  ATerm a_32 (ATerm t)
  {
    t = not_null(j_29);
    return(t);
  }
  ATerm b_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_12, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATempty);
    return(t);
  }
  ATerm c_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_12, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATempty);
    return(t);
  }
  ATerm d_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_12, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATempty);
    return(t);
  }
  ATerm e_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_12, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATempty);
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_12, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATempty);
    return(t);
  }
  ATerm g_32 (ATerm t)
  {
    ATerm s_30 = NULL;
    ATerm t_30 = NULL;
    t = not_null(j_29);
    {
      ATerm n_32 (ATerm t)
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm a_13 = t;
              int b_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(b_13);
                }
              else
                {
                  t = a_13;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = try_1(t, n_32);
              return(t);
            }
            t = Cons_2(t, t_1, u_1);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = Cons_2(t, _id, n_32);
          }
        return(t);
      }
      t = n_32(t);
      {
        t_30 = t;
        if(((s_30 != NULL) && (s_30 != t_30)))
          _fail(t_30);
        else
          s_30 = t_30;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(i_29), not_null(s_30), not_null(k_29));
    return(t);
  }
  ATerm h_32 (ATerm t)
  {
    ATerm x_30 = NULL;
    ATerm y_30 = NULL;
    t = not_null(j_29);
    {
      ATerm p_32 (ATerm t)
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm i_13 = t;
              int m_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(m_13);
                }
              else
                {
                  t = i_13;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = try_1(t, p_32);
              return(t);
            }
            t = Cons_2(t, v_1, w_1);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = Cons_2(t, _id, p_32);
          }
        return(t);
      }
      t = p_32(t);
      {
        y_30 = t;
        if(((x_30 != NULL) && (x_30 != y_30)))
          _fail(y_30);
        else
          x_30 = y_30;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(i_29), not_null(x_30), not_null(k_29));
    return(t);
  }
  ATerm i_32 (ATerm t)
  {
    ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
    t = not_null(j_29);
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm o_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = o_13;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, y_1);
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                ATerm u_13 = t;
                int v_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_13 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, z_1, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = w_13;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(v_13);
                  }
                else
                  {
                    t = u_13;
                    {
                      ATerm a_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, a_2);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, x_1);
      {
        f_31 = t;
        j_28 :
        if(match_cons(f_31, sym__2))
          {
            g_31 = ATgetArgument(f_31, 0);
            h_31 = ATgetArgument(f_31, 1);
            {
              ATerm i_31 = NULL;
              if(((c_31 != NULL) && (c_31 != g_31)))
                _fail(g_31);
              else
                c_31 = g_31;
              {
                if(((d_31 != NULL) && (d_31 != h_31)))
                  _fail(h_31);
                else
                  d_31 = h_31;
                {
                  t = not_null(d_31);
                  {
                    t = concat_0(t);
                    {
                      i_31 = t;
                      {
                        if(((e_31 != NULL) && (e_31 != i_31)))
                          _fail(i_31);
                        else
                          e_31 = i_31;
                        {
                          ATerm x_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = x_13;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_31), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(i_29), not_null(c_31), not_null(k_29)));
    return(t);
  }
  ATerm j_32 (ATerm t)
  {
    ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
    t = not_null(j_29);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm c_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = c_14;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, c_2);
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              {
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm d_2 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, d_2, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_14;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
                    {
                      ATerm e_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, e_2);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, b_2);
      {
        p_31 = t;
        m_28 :
        if(match_cons(p_31, sym__2))
          {
            q_31 = ATgetArgument(p_31, 0);
            r_31 = ATgetArgument(p_31, 1);
            {
              ATerm s_31 = NULL;
              if(((m_31 != NULL) && (m_31 != q_31)))
                _fail(q_31);
              else
                m_31 = q_31;
              {
                if(((n_31 != NULL) && (n_31 != r_31)))
                  _fail(r_31);
                else
                  n_31 = r_31;
                {
                  t = not_null(n_31);
                  {
                    t = concat_0(t);
                    {
                      s_31 = t;
                      {
                        if(((o_31 != NULL) && (o_31 != s_31)))
                          _fail(s_31);
                        else
                          o_31 = s_31;
                        {
                          ATerm k_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = k_14;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_31), (ATerm) ATmakeAppl(sym_CallT_3, not_null(i_29), not_null(m_31), not_null(k_29)));
    return(t);
  }
  h_29 = t;
  n_28 :
  if(match_cons(h_29, sym_Rec_2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(i_29), (ATerm)ATempty, (ATerm)ATempty, not_null(j_29))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_29)), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(h_29, sym_SDefT_4))
        {
          i_29 = ATgetArgument(h_29, 0);
          j_29 = ATgetArgument(h_29, 1);
          k_29 = ATgetArgument(h_29, 2);
          a_29 = ATgetArgument(h_29, 3);
          o_28 :
          if(((ATgetType(j_29) == AT_LIST) && ATisEmpty(j_29)))
            {
              p_28 :
              if(((ATgetType(k_29) == AT_LIST) && ATisEmpty(k_29)))
                {
                  q_28 :
                  if(match_cons(a_29, sym_Rec_2))
                    {
                      b_29 = ATgetArgument(a_29, 0);
                      c_29 = ATgetArgument(a_29, 1);
                      {
                        ATerm q_29 = NULL;
                        ATerm w_29 = NULL;
                        t = not_null(c_29);
                        {
                          ATerm f_2 (ATerm t)
                          {
                            ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
                            r_29 = t;
                            z_27 :
                            if(match_cons(r_29, sym_CallT_3))
                              {
                                s_29 = ATgetArgument(r_29, 0);
                                u_29 = ATgetArgument(r_29, 1);
                                v_29 = ATgetArgument(r_29, 2);
                                a_28 :
                                if(match_cons(s_29, sym_SVar_1))
                                  {
                                    t_29 = ATgetArgument(s_29, 0);
                                    b_28 :
                                    if(((ATgetType(u_29) == AT_LIST) && ATisEmpty(u_29)))
                                      {
                                        c_28 :
                                        if(((ATgetType(v_29) == AT_LIST) && ATisEmpty(v_29)))
                                          {
                                            {
                                              if(((b_29 != NULL) && (b_29 != t_29)))
                                                _fail(t_29);
                                              else
                                                b_29 = t_29;
                                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_29)), (ATerm)ATempty, (ATerm) ATempty);
                                            }
                                          }
                                        else
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
                          t = alltd_1(t, f_2);
                          {
                            w_29 = t;
                            if(((q_29 != NULL) && (q_29 != w_29)))
                              _fail(w_29);
                            else
                              q_29 = w_29;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(i_29), (ATerm)ATempty, (ATerm)ATempty, not_null(q_29));
                      }
                    }
                  else
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
          if(match_cons(h_29, sym_Seq_2))
            {
              i_29 = ATgetArgument(h_29, 0);
              j_29 = ATgetArgument(h_29, 1);
              r_28 :
              if(match_cons(j_29, sym_Seq_2))
                {
                  f_29 = ATgetArgument(j_29, 0);
                  g_29 = ATgetArgument(j_29, 1);
                  s_28 :
                  if(match_cons(i_29, sym_Where_1))
                    {
                      e_29 = ATgetArgument(i_29, 0);
                      t_28 :
                      if(match_cons(f_29, sym_Build_1))
                        {
                          d_29 = ATgetArgument(f_29, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_29)), not_null(g_29)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(i_29, sym_Id_0))
                        {
                          t = y_31(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(j_29, sym_Build_1))
                    {
                      f_29 = ATgetArgument(j_29, 0);
                      u_28 :
                      if(match_cons(i_29, sym_Where_1))
                        {
                          e_29 = ATgetArgument(i_29, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_29), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_29)));
                        }
                      else
                        {
                          if(match_cons(i_29, sym_Id_0))
                            {
                              t = y_31(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(j_29, sym_Id_0))
                        {
                          v_28 :
                          if(match_cons(i_29, sym_Id_0))
                            {
                              ATerm o_14 = t;
                              int p_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = x_31(t);
                                  ;
                                  LocalPopChoice(p_14);
                                }
                              else
                                {
                                  t = o_14;
                                  t = y_31(t);
                                }
                            }
                          else
                            {
                              t = x_31(t);
                            }
                        }
                      else
                        {
                          w_28 :
                          if(match_cons(i_29, sym_Id_0))
                            {
                              t = y_31(t);
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
              if(match_cons(h_29, sym_Scope_2))
                {
                  i_29 = ATgetArgument(h_29, 0);
                  j_29 = ATgetArgument(h_29, 1);
                  x_28 :
                  if(match_cons(j_29, sym_Scope_2))
                    {
                      f_29 = ATgetArgument(j_29, 0);
                      g_29 = ATgetArgument(j_29, 1);
                      y_28 :
                      if(((ATgetType(i_29) == AT_LIST) && ATisEmpty(i_29)))
                        {
                          {
                            ATerm t_14 = t;
                            int w_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_31(t);
                                ;
                                LocalPopChoice(w_14);
                              }
                            else
                              {
                                t = t_14;
                                t = a_32(t);
                              }
                          }
                        }
                      else
                        {
                          t = z_31(t);
                        }
                    }
                  else
                    {
                      z_28 :
                      if(((ATgetType(i_29) == AT_LIST) && ATisEmpty(i_29)))
                        {
                          t = a_32(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(h_29, sym_Thread_1))
                    {
                      i_29 = ATgetArgument(h_29, 0);
                      t = b_32(t);
                    }
                  else
                    {
                      if(match_cons(h_29, sym_Some_1))
                        {
                          i_29 = ATgetArgument(h_29, 0);
                          t = c_32(t);
                        }
                      else
                        {
                          if(match_cons(h_29, sym_One_1))
                            {
                              i_29 = ATgetArgument(h_29, 0);
                              t = d_32(t);
                            }
                          else
                            {
                              if(match_cons(h_29, sym_All_1))
                                {
                                  i_29 = ATgetArgument(h_29, 0);
                                  t = e_32(t);
                                }
                              else
                                {
                                  if(match_cons(h_29, sym_Bagof_1))
                                    {
                                      i_29 = ATgetArgument(h_29, 0);
                                      t = f_32(t);
                                    }
                                  else
                                    {
                                      if(match_cons(h_29, sym_PrimT_3))
                                        {
                                          i_29 = ATgetArgument(h_29, 0);
                                          j_29 = ATgetArgument(h_29, 1);
                                          k_29 = ATgetArgument(h_29, 2);
                                          {
                                            ATerm x_14 = t;
                                            int y_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = g_32(t);
                                                ;
                                                LocalPopChoice(y_14);
                                              }
                                            else
                                              {
                                                t = x_14;
                                                t = i_32(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(h_29, sym_CallT_3))
                                            {
                                              i_29 = ATgetArgument(h_29, 0);
                                              j_29 = ATgetArgument(h_29, 1);
                                              k_29 = ATgetArgument(h_29, 2);
                                              {
                                                ATerm z_14 = t;
                                                int a_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_32(t);
                                                    ;
                                                    LocalPopChoice(a_15);
                                                  }
                                                else
                                                  {
                                                    t = z_14;
                                                    t = j_32(t);
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
ATerm repeat_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm v_32 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      t = g_94(t);
      t = v_32(t);
      return(t);
    }
    t = try_1(t, g_2);
    return(t);
  }
  t = v_32(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm j_95 (ATerm), ATerm k_95 (ATerm))
{
  t = j_95(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = downup2_2(t, j_95, k_95);
      return(t);
    }
    t = _all(t, h_2);
    t = k_95(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      {
        ATerm i_33 = NULL,k_33 = NULL;
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm m_33 = NULL;
            t = r_71(t);
            {
              k_33 = t;
              {
                t = not_null(e_33);
                {
                  ATerm o_33 = NULL;
                  t = s_71(t);
                  {
                    m_33 = t;
                    {
                      ATerm p_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_33), not_null(m_33)), not_null(i_33));
                      {
                        p_33 = t;
                        if(((o_33 != NULL) && (o_33 != p_33)))
                          _fail(p_33);
                        else
                          o_33 = p_33;
                      }
                      t = not_null(o_33);
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
  ATerm b_15;
  b_15 = t;
  {
    ATerm w_33 = NULL;
    ATerm x_33 = NULL;
    t = term_r_8;
    {
      t = whoami_0(t);
      {
        x_33 = t;
        if(((w_33 != NULL) && (w_33 != x_33)))
          _fail(x_33);
        else
          w_33 = x_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_15), not_null(w_33)), term_c_15));
      {
        t = printnl_0(t);
        {
          t = term_j_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_15;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        ATerm r_15;
        r_15 = t;
        t = SSL_printnl(not_null(c_34), not_null(d_34));
        t = r_15;
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
  ATerm i_34 = NULL;
  i_34 = t;
  t = SSL_implode_string(not_null(i_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
        n_34 = t;
        m_34 :
        if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
          {
            o_34 = ATgetFirst((ATermList) n_34);
            p_34 = (ATerm) ATgetNext((ATermList) n_34);
            {
              t = not_null(o_34);
              {
                ATerm i_2 (ATerm t)
                {
                  t = not_null(p_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_2);
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
  ATerm t_36 = NULL;
  ATerm v_36 = NULL;
  t_36 = t;
  {
    ATerm w_36 = NULL;
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    t = not_null(t_36);
    {
      w_36 = t;
      {
        t = SSL_explode_term(not_null(w_36));
        {
          y_36 = t;
          r_36 :
          if(match_cons(y_36, sym__2))
            {
              z_36 = ATgetArgument(y_36, 0);
              a_37 = ATgetArgument(y_36, 1);
              s_36 :
              if(match_string(z_36, ""))
                {
                  if(((v_36 != NULL) && (v_36 != a_37)))
                    _fail(a_37);
                  else
                    v_36 = a_37;
                }
              else
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
      t = not_null(v_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm e_37 (ATerm t)
  {
    ATerm u_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_37);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = u_15;
        {
          t = Nil_0(t);
          t = l_101(t);
        }
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        t = not_null(i_37);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(j_37);
            return(t);
          }
          t = at_end_1(t, j_2);
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
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_explode_string(not_null(o_37));
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
  ATerm c_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = c_16;
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_2);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            {
              ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
              c_38 = t;
              b_38 :
              if(match_cons(c_38, sym_Path_1))
                {
                  d_38 = ATgetArgument(c_38, 0);
                  t = not_null(d_38);
                }
              else
                {
                  if(match_cons(c_38, sym_Var_1))
                    {
                      d_38 = ATgetArgument(c_38, 0);
                      {
                        t = not_null(d_38);
                        {
                          ATerm l_16 = t;
                          int m_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_16);
                            }
                          else
                            {
                              t = l_16;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = term_n_16;
                                  return(t);
                                }
                                t = debug_1(t, l_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_38, sym_Prefix_2))
                        {
                          d_38 = ATgetArgument(c_38, 0);
                          e_38 = ATgetArgument(c_38, 1);
                          {
                            ATerm j_38 = NULL,l_38 = NULL;
                            ATerm s_16;
                            s_16 = t;
                            {
                              ATerm k_38 = NULL;
                              t = not_null(d_38);
                              {
                                t = eval_config_0(t);
                                {
                                  k_38 = t;
                                  if(((j_38 != NULL) && (j_38 != k_38)))
                                    _fail(k_38);
                                  else
                                    j_38 = k_38;
                                }
                              }
                            }
                            t = s_16;
                            {
                              ATerm m_38 = NULL;
                              t = not_null(e_38);
                              {
                                t = eval_config_0(t);
                                {
                                  m_38 = t;
                                  if(((l_38 != NULL) && (l_38 != m_38)))
                                    _fail(m_38);
                                  else
                                    l_38 = m_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(l_38));
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
  ATerm z_38 = NULL;
  z_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(z_38));
    {
      t = table_get_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_16;
            u_16 = t;
            {
              ATerm b_39 = NULL;
              ATerm c_39 = NULL;
              c_39 = t;
              if(((b_39 != NULL) && (b_39 != c_39)))
                _fail(c_39);
              else
                b_39 = c_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_16, not_null(z_38), not_null(b_39));
                t = table_put_0(t);
              }
            }
            t = u_16;
          }
          return(t);
        }
        t = try_1(t, m_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_114 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm g_39 = NULL;
      ATerm h_39 = NULL;
      t = term_x_16;
      {
        t = get_config_0(t);
        {
          h_39 = t;
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), term_y_16);
        t = geq_0(t);
      }
    }
    t = w_16;
    t = c_114(t);
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  n_39 = t;
  l_39 :
  if(match_cons(n_39, sym__2))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      m_39 :
      if(match_cons(p_39, sym_Stream_1))
        {
          q_39 = ATgetArgument(p_39, 0);
          {
            ATerm t_39 = NULL;
            t = SSL_fputc(not_null(o_39), not_null(q_39));
            {
              ATerm u_39 = NULL;
              u_39 = t;
              if(((t_39 != NULL) && (t_39 != u_39)))
                _fail(u_39);
              else
                t_39 = u_39;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_39));
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
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  b_40 = t;
  z_39 :
  if(match_cons(b_40, sym__2))
    {
      c_40 = ATgetArgument(b_40, 0);
      e_40 = ATgetArgument(b_40, 1);
      a_40 :
      if(match_cons(c_40, sym_Stream_1))
        {
          d_40 = ATgetArgument(c_40, 0);
          {
            ATerm h_40 = NULL;
            t = SSL_write_term_to_stream_text(not_null(d_40), not_null(e_40));
            {
              ATerm i_40 = NULL;
              i_40 = t;
              if(((h_40 != NULL) && (h_40 != i_40)))
                _fail(i_40);
              else
                h_40 = i_40;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_40));
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
  ATerm o_2 (ATerm t)
  {
    ATerm m_40 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm n_40 = NULL;
      n_40 = t;
      if(((m_40 != NULL) && (m_40 != n_40)))
        _fail(n_40);
      else
        m_40 = n_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_17, not_null(m_40));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, o_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t_40 = t;
  r_40 :
  if(match_cons(t_40, sym__2))
    {
      u_40 = ATgetArgument(t_40, 0);
      w_40 = ATgetArgument(t_40, 1);
      s_40 :
      if(match_cons(u_40, sym_Stream_1))
        {
          v_40 = ATgetArgument(u_40, 0);
          {
            ATerm z_40 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(v_40), not_null(w_40));
            {
              ATerm a_41 = NULL;
              a_41 = t;
              if(((z_40 != NULL) && (z_40 != a_41)))
                _fail(a_41);
              else
                z_40 = a_41;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_40));
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
ATerm WriteToFile_1 (ATerm t, ATerm y_112 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm s_41 = NULL,u_41 = NULL;
        t = not_null(o_41);
        {
          ATerm t_41 = NULL;
          t_41 = t;
          if(((s_41 != NULL) && (s_41 != t_41)))
            _fail(t_41);
          else
            s_41 = t_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), term_e_17);
            {
              t = open_stream_0(t);
              {
                ATerm v_41 = NULL;
                v_41 = t;
                if(((u_41 != NULL) && (u_41 != v_41)))
                  _fail(v_41);
                else
                  u_41 = v_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_41), not_null(p_41));
                  {
                    t = y_112(t);
                    {
                      t = fclose_0(t);
                      t = not_null(p_41);
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
  ATerm d_42 = NULL;
  ATerm j_17;
  j_17 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm e_42 = NULL,f_42 = NULL;
            e_42 = t;
            a_42 :
            if(match_cons(e_42, sym_Output_1))
              {
                f_42 = ATgetArgument(e_42, 0);
                if(((d_42 != NULL) && (d_42 != f_42)))
                  _fail(f_42);
                else
                  d_42 = f_42;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_2);
          ;
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          {
            ATerm g_42 = NULL;
            t = term_m_17;
            {
              g_42 = t;
              if(((d_42 != NULL) && (d_42 != g_42)))
                _fail(g_42);
              else
                d_42 = g_42;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = j_17;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(d_42);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm n_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm h_42 = NULL;
              h_42 = t;
              c_42 :
              if(!(match_cons(h_42, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = n_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_116 (ATerm))
{
  ATerm n_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  ATerm r_17;
  r_17 = t;
  t = dtime_0(t);
  t = r_17;
  {
    t = a_116(t);
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm o_42 = NULL;
        t = dtime_0(t);
        {
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
        }
      }
      t = u_17;
      {
        p_42 = t;
        m_42 :
        if(match_cons(p_42, sym__2))
          {
            q_42 = ATgetArgument(p_42, 0);
            r_42 = ATgetArgument(p_42, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_42))), not_null(r_42));
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
  ATerm z_42 = NULL,c_43 = NULL;
  ATerm l_43 (ATerm t)
  {
    t = SSL_fclose(not_null(c_43));
    return(t);
  }
  c_43 = t;
  y_42 :
  if(match_cons(c_43, sym_Stream_1))
    {
      z_42 = ATgetArgument(c_43, 0);
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(z_42));
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            t = l_43(t);
          }
      }
    }
  else
    {
      t = l_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Stream_1))
    {
      p_43 = ATgetArgument(o_43, 0);
      t = SSL_read_term_from_stream(not_null(p_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm a_18;
  a_18 = t;
  {
    ATerm u_43 = NULL,w_43 = NULL;
    ATerm b_18;
    b_18 = t;
    {
      ATerm v_43 = NULL;
      t = k_112(t);
      {
        v_43 = t;
        if(((u_43 != NULL) && (u_43 != v_43)))
          _fail(v_43);
        else
          u_43 = v_43;
      }
    }
    t = b_18;
    {
      ATerm x_43 = NULL;
      x_43 = t;
      if(((w_43 != NULL) && (w_43 != x_43)))
        _fail(x_43);
      else
        w_43 = x_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_43)), not_null(u_43)));
        t = printnl_0(t);
      }
    }
  }
  t = a_18;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm m_44 = NULL;
        t = SSL_fopen(not_null(i_44), not_null(j_44));
        {
          ATerm n_44 = NULL;
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_44));
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
  ATerm r_44 = NULL;
  r_44 = t;
  t = SSL_is_string(not_null(r_44));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm v_44 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_44 = NULL;
    w_44 = t;
    if(((v_44 != NULL) && (v_44 != w_44)))
      _fail(w_44);
    else
      v_44 = w_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_44));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm z_44 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm a_45 = NULL;
    a_45 = t;
    if(((z_44 != NULL) && (z_44 != a_45)))
      _fail(a_45);
    else
      z_44 = a_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_44));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm e_45 = NULL;
    e_45 = t;
    if(((d_45 != NULL) && (d_45 != e_45)))
      _fail(e_45);
    else
      d_45 = e_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_45));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(k_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(k_45, sym_stdin_0))
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
  ATerm w_45 = NULL;
  ATerm y_45 = NULL,z_45 = NULL;
  w_45 = t;
  {
    ATerm a_46 = NULL;
    ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
    t = not_null(w_45);
    {
      a_46 = t;
      {
        t = SSL_explode_term(not_null(a_46));
        {
          c_46 = t;
          t_45 :
          if(match_cons(c_46, sym__2))
            {
              d_46 = ATgetArgument(c_46, 0);
              e_46 = ATgetArgument(c_46, 1);
              u_45 :
              if(match_string(d_46, ""))
                {
                  v_45 :
                  if(((ATgetType(e_46) == AT_LIST) && !(ATisEmpty(e_46))))
                    {
                      f_46 = ATgetFirst((ATermList) e_46);
                      g_46 = (ATerm) ATgetNext((ATermList) e_46);
                      {
                        if(((z_45 != NULL) && (z_45 != f_46)))
                          _fail(f_46);
                        else
                          z_45 = f_46;
                        if(((y_45 != NULL) && (y_45 != g_46)))
                          _fail(g_46);
                        else
                          y_45 = g_46;
                      }
                    }
                  else
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
    t = not_null(z_45);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm k_18 = t;
              int l_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm r_46 = NULL,s_46 = NULL;
                    r_46 = t;
                    m_46 :
                    if(match_cons(r_46, sym_Path_1))
                      {
                        s_46 = ATgetArgument(r_46, 0);
                        t = not_null(s_46);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_18);
                }
              else
                {
                  t = k_18;
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
  ATerm a_47 = NULL;
  ATerm m_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_46 = NULL;
      ATerm z_46 = NULL;
      z_46 = t;
      if(((y_46 != NULL) && (y_46 != z_46)))
        _fail(z_46);
      else
        y_46 = z_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_46), term_s_18);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = m_18;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_t_18;
          return(t);
        }
        t = debug_1(t, w_2);
        _fail(t);
      }
    }
  {
    ATerm u_18;
    u_18 = t;
    {
      ATerm b_47 = NULL;
      t = read_from_stream_0(t);
      {
        b_47 = t;
        if(((a_47 != NULL) && (a_47 != b_47)))
          _fail(b_47);
        else
          a_47 = b_47;
      }
    }
    t = u_18;
    {
      t = fclose_0(t);
      t = not_null(a_47);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_108 (ATerm), ATerm m_108 (ATerm))
{
  ATerm g_47 = NULL,i_47 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm h_47 = NULL;
    t = l_108(t);
    {
      h_47 = t;
      if(((g_47 != NULL) && (g_47 != h_47)))
        _fail(h_47);
      else
        g_47 = h_47;
    }
  }
  t = v_18;
  {
    ATerm j_47 = NULL;
    t = m_108(t);
    {
      j_47 = t;
      if(((i_47 != NULL) && (i_47 != j_47)))
        _fail(j_47);
      else
        i_47 = j_47;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), not_null(i_47));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_47 = NULL;
  ATerm x_18;
  x_18 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm q_47 = NULL,r_47 = NULL;
          q_47 = t;
          n_47 :
          if(match_cons(q_47, sym_Input_1))
            {
              r_47 = ATgetArgument(q_47, 0);
              if(((p_47 != NULL) && (p_47 != r_47)))
                _fail(r_47);
              else
                p_47 = r_47;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm s_47 = NULL;
          t = term_c_19;
          {
            s_47 = t;
            if(((p_47 != NULL) && (p_47 != s_47)))
              _fail(s_47);
            else
              p_47 = s_47;
          }
        }
      }
  }
  t = x_18;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(p_47);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    v_47 :
    if(!(match_string(x_47, "-k")))
      {
        if(!(match_string(x_47, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm d_19;
    d_19 = t;
    {
      ATerm y_47 = NULL;
      ATerm z_47 = NULL;
      t = string_to_int_0(t);
      {
        z_47 = t;
        if(((y_47 != NULL) && (y_47 != z_47)))
          _fail(z_47);
        else
          y_47 = z_47;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_19, not_null(y_47));
        t = set_config_0(t);
      }
    }
    t = d_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_h_19;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_string_to_int(not_null(c_48));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm k_48 = NULL;
        k_48 = t;
        f_48 :
        if(!(match_string(k_48, "-S")))
          {
            if(!(match_string(k_48, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_n_19;
        t = set_config_0(t);
        t = term_r_19;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_s_19;
        return(t);
      }
      t = Option_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = i_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm l_48 = NULL;
              l_48 = t;
              g_48 :
              if(!(match_string(l_48, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm o_48 = NULL;
              ATerm l_20;
              l_20 = t;
              {
                ATerm m_48 = NULL;
                ATerm n_48 = NULL;
                t = string_to_int_0(t);
                {
                  n_48 = t;
                  if(((m_48 != NULL) && (m_48 != n_48)))
                    _fail(n_48);
                  else
                    m_48 = n_48;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_16, not_null(m_48));
                  t = set_config_0(t);
                }
              }
              t = l_20;
              {
                ATerm p_48 = NULL;
                p_48 = t;
                if(((o_48 != NULL) && (o_48 != p_48)))
                  _fail(p_48);
                else
                  o_48 = p_48;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_48));
              }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_m_20;
              return(t);
            }
            t = ArgOption_3(t, f_3, i_3, j_3);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm q_48 = NULL;
                q_48 = t;
                j_48 :
                if(!(match_string(q_48, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_o_20;
                t = set_config_0(t);
                t = term_p_20;
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_q_20;
                return(t);
              }
              t = Option_3(t, k_3, l_3, m_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm w_48 = NULL;
    w_48 = t;
    t_48 :
    if(!(match_string(w_48, "-o")))
      {
        if(!(match_string(w_48, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm z_48 = NULL;
    ATerm t_20;
    t_20 = t;
    {
      ATerm x_48 = NULL;
      ATerm y_48 = NULL;
      y_48 = t;
      if(((x_48 != NULL) && (x_48 != y_48)))
        _fail(y_48);
      else
        x_48 = y_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(x_48));
        t = set_config_0(t);
      }
    }
    t = t_20;
    {
      ATerm a_49 = NULL;
      a_49 = t;
      if(((z_48 != NULL) && (z_48 != a_49)))
        _fail(a_49);
      else
        z_48 = a_49;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_48));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = x_20;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm e_49 = NULL;
          e_49 = t;
          d_49 :
          if(!(match_string(e_49, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_i_21;
          t = set_config_0(t);
          t = term_j_21;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_k_21;
          return(t);
        }
        t = Option_3(t, q_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  k_49 = t;
  i_49 :
  if(match_string(k_49, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
        {
          l_49 = ATgetFirst((ATermList) k_49);
          m_49 = (ATerm) ATgetNext((ATermList) k_49);
          j_49 :
          if(((ATgetType(m_49) == AT_LIST) && !(ATisEmpty(m_49))))
            {
              n_49 = ATgetFirst((ATermList) m_49);
              o_49 = (ATerm) ATgetNext((ATermList) m_49);
              {
                ATerm s_49 = NULL;
                ATerm l_21;
                l_21 = t;
                {
                  t = not_null(l_49);
                  t = k_0(t);
                }
                t = l_21;
                {
                  ATerm t_49 = NULL;
                  t = not_null(n_49);
                  {
                    t = l_0(t);
                    {
                      t_49 = t;
                      if(((s_49 != NULL) && (s_49 != t_49)))
                        _fail(t_49);
                      else
                        s_49 = t_49;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_49)), not_null(s_49));
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
  ATerm t_3 (ATerm t)
  {
    ATerm a_50 = NULL;
    a_50 = t;
    x_49 :
    if(!(match_string(a_50, "-i")))
      {
        if(!(match_string(a_50, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm d_50 = NULL;
    ATerm m_21;
    m_21 = t;
    {
      ATerm b_50 = NULL;
      ATerm c_50 = NULL;
      c_50 = t;
      if(((b_50 != NULL) && (b_50 != c_50)))
        _fail(c_50);
      else
        b_50 = c_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(b_50));
        t = set_config_0(t);
      }
    }
    t = m_21;
    {
      ATerm e_50 = NULL;
      e_50 = t;
      if(((d_50 != NULL) && (d_50 != e_50)))
        _fail(e_50);
      else
        d_50 = e_50;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_50));
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_o_21;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm i_50 = NULL;
  t = report_run_time_0(t);
  {
    ATerm j_50 = NULL;
    t = term_r_8;
    {
      t = whoami_0(t);
      {
        j_50 = t;
        if(((i_50 != NULL) && (i_50 != j_50)))
          _fail(j_50);
        else
          i_50 = j_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, term_z_21), not_null(i_50)));
      {
        t = printnl_0(t);
        {
          t = term_j_15;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_c_22;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_50 = NULL;
  m_50 = t;
  t = SSL_TicksToSeconds(not_null(m_50));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  t_50 :
  if(match_cons(w_50, sym__2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_50), not_null(y_50));
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = SSL_addr(not_null(x_50), not_null(y_50));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_106 (ATerm), ATerm x_106 (ATerm))
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_106(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
        f_51 = t;
        e_51 :
        if(((ATgetType(f_51) == AT_LIST) && !(ATisEmpty(f_51))))
          {
            g_51 = ATgetFirst((ATermList) f_51);
            h_51 = (ATerm) ATgetNext((ATermList) f_51);
            {
              ATerm k_51 = NULL;
              ATerm l_51 = NULL;
              t = not_null(h_51);
              {
                t = foldr_2(t, w_106, x_106);
                {
                  l_51 = t;
                  if(((k_51 != NULL) && (k_51 != l_51)))
                    _fail(l_51);
                  else
                    k_51 = l_51;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), not_null(k_51));
                t = x_106(t);
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
ATerm crush_2 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm))
{
  ATerm s_51 = NULL;
  ATerm u_51 = NULL;
  s_51 = t;
  {
    ATerm v_51 = NULL;
    ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
    t = not_null(s_51);
    {
      v_51 = t;
      {
        t = SSL_explode_term(not_null(v_51));
        {
          x_51 = t;
          r_51 :
          if(match_cons(x_51, sym__2))
            {
              y_51 = ATgetArgument(x_51, 0);
              z_51 = ATgetArgument(x_51, 1);
              if(((u_51 != NULL) && (u_51 != z_51)))
                _fail(z_51);
              else
                u_51 = z_51;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_51);
      t = foldr_2(t, p_110, q_110);
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
    ATerm w_3 (ATerm t)
    {
      t = term_m_19;
      return(t);
    }
    t = crush_2(t, w_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(match_cons(f_52, sym__2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      {
        ATerm h_22;
        h_22 = t;
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_52), not_null(h_52));
              ;
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              t = SSL_gtr(not_null(g_52), not_null(h_52));
            }
        }
        t = h_22;
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
  ATerm o_52 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL,q_52 = NULL,t_52 = NULL;
      p_52 = t;
      n_52 :
      if(match_cons(p_52, sym__2))
        {
          q_52 = ATgetArgument(p_52, 0);
          t_52 = ATgetArgument(p_52, 1);
          {
            if(((o_52 != NULL) && (o_52 != q_52)))
              _fail(q_52);
            else
              o_52 = q_52;
            if(((o_52 != NULL) && (o_52 != t_52)))
              _fail(t_52);
            else
              o_52 = t_52;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_114 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm s_22;
    s_22 = t;
    {
      ATerm w_52 = NULL;
      ATerm x_52 = NULL;
      t = term_x_16;
      {
        t = get_config_0(t);
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), term_j_15);
        t = geq_0(t);
      }
    }
    t = s_22;
    t = b_114(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm b_53 = NULL,d_53 = NULL;
    ATerm v_22;
    v_22 = t;
    {
      ATerm c_53 = NULL;
      t = run_time_0(t);
      {
        c_53 = t;
        if(((b_53 != NULL) && (b_53 != c_53)))
          _fail(c_53);
        else
          b_53 = c_53;
      }
    }
    t = v_22;
    {
      ATerm e_53 = NULL;
      t = term_r_8;
      {
        t = whoami_0(t);
        {
          e_53 = t;
          if(((d_53 != NULL) && (d_53 != e_53)))
            _fail(e_53);
          else
            d_53 = e_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_22), not_null(b_53)), term_w_22), not_null(d_53)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_m_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_53 = NULL;
  l_53 = t;
  k_53 :
  if(match_cons(l_53, sym_Version_0))
    {
      ATerm n_53 = NULL,p_53 = NULL;
      ATerm y_22;
      y_22 = t;
      {
        ATerm o_53 = NULL;
        t = SSLgetAnnotations(not_null(l_53));
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
      }
      t = y_22;
      {
        ATerm q_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_53));
        {
          q_53 = t;
          if(((p_53 != NULL) && (p_53 != q_53)))
            _fail(q_53);
          else
            p_53 = q_53;
        }
        t = not_null(p_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_116 (ATerm))
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_23;
      t = get_config_0(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm h_23 = t;
                int i_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(i_23);
                  }
                else
                  {
                    t = h_23;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, z_3);
      }
    }
  t = y_116(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  t = SSL_table_create(not_null(y_53));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  {
    ATerm j_23;
    j_23 = t;
    {
      t = term_k_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_23, term_o_23, not_null(c_54));
          t = table_put_0(t);
        }
      }
    }
    t = j_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  t = SSL_table_destroy(not_null(g_54));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_54 = NULL;
  k_54 = t;
  t = SSL_exit(not_null(k_54));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_118 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm n_54 (ATerm t)
  {
    ATerm p_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = p_23;
        t = Cons_2(t, v_100, n_54);
      }
    return(t);
  }
  t = n_54(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  w_54 = t;
  t_54 :
  if(((ATgetType(w_54) == AT_LIST) && !(ATisEmpty(w_54))))
    {
      u_54 = ATgetFirst((ATermList) w_54);
      v_54 = (ATerm) ATgetNext((ATermList) w_54);
      {
        ATerm z_54 = NULL;
        t = not_null(v_54);
        {
          ATerm w_23;
          w_23 = t;
          {
            ATerm a_55 = NULL,c_55 = NULL,e_55 = NULL;
            ATerm x_23;
            x_23 = t;
            {
              ATerm b_55 = NULL;
              t = i_0(t);
              {
                b_55 = t;
                if(((a_55 != NULL) && (a_55 != b_55)))
                  _fail(b_55);
                else
                  a_55 = b_55;
              }
            }
            t = x_23;
            {
              ATerm d_55 = NULL;
              t = not_null(u_54);
              {
                t = g_0(t);
                {
                  d_55 = t;
                  if(((c_55 != NULL) && (c_55 != d_55)))
                    _fail(d_55);
                  else
                    c_55 = d_55;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_55)), not_null(c_55));
                {
                  e_55 = t;
                  if(((z_54 != NULL) && (z_54 != e_55)))
                    _fail(e_55);
                  else
                    z_54 = e_55;
                }
              }
            }
          }
          t = w_23;
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(z_54);
              return(t);
            }
            t = reverse_acc_2(t, g_0, a_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_54) == AT_LIST) && ATisEmpty(w_54)))
        {
          {
            t = term_r_8;
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_118 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm v_55 = NULL,w_55 = NULL;
  v_55 = t;
  u_55 :
  if(match_cons(v_55, sym_Program_1))
    {
      w_55 = ATgetArgument(v_55, 0);
      {
        ATerm z_55 = NULL,b_56 = NULL;
        ATerm a_56 = NULL;
        t = SSLgetAnnotations(not_null(v_55));
        {
          a_56 = t;
          if(((z_55 != NULL) && (z_55 != a_56)))
            _fail(a_56);
          else
            z_55 = a_56;
        }
        {
          t = not_null(w_55);
          {
            ATerm d_56 = NULL;
            t = s_81(t);
            {
              b_56 = t;
              {
                ATerm e_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_56)), not_null(z_55));
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
                t = not_null(d_56);
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
  ATerm n_56 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL;
      t = term_c_22;
      {
        t = get_config_0(t);
        {
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
        }
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm p_56 = NULL;
            p_56 = t;
            if(((n_56 != NULL) && (n_56 != p_56)))
              _fail(p_56);
            else
              n_56 = p_56;
            return(t);
          }
          t = Program_1(t, d_4);
          return(t);
        }
        t = option_defined_1(t, c_4);
      }
    }
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = not_null(n_56);
        return(t);
      }
      t = short_description_1(t, f_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_4);
    {
      t = term_a_24;
      {
        t = echo_0(t);
        {
          t = term_d_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm q_56 = NULL;
                  ATerm r_56 = NULL;
                  r_56 = t;
                  if(((q_56 != NULL) && (q_56 != r_56)))
                    _fail(r_56);
                  else
                    q_56 = r_56;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_56)), term_e_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_4);
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm s_56 = NULL;
                    ATerm t_56 = NULL;
                    ATerm i_4 (ATerm t)
                    {
                      t = not_null(n_56);
                      return(t);
                    }
                    t = long_description_1(t, i_4);
                    {
                      t_56 = t;
                      if(((s_56 != NULL) && (s_56 != t_56)))
                        _fail(t_56);
                      else
                        s_56 = t_56;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_56)), term_f_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_4);
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
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm d_57 = NULL,e_57 = NULL;
  d_57 = t;
  c_57 :
  if(match_cons(d_57, sym_Undefined_1))
    {
      e_57 = ATgetArgument(d_57, 0);
      {
        ATerm h_57 = NULL,j_57 = NULL;
        ATerm i_57 = NULL;
        t = SSLgetAnnotations(not_null(d_57));
        {
          i_57 = t;
          if(((h_57 != NULL) && (h_57 != i_57)))
            _fail(i_57);
          else
            h_57 = i_57;
        }
        {
          t = not_null(e_57);
          {
            ATerm l_57 = NULL;
            t = t_81(t);
            {
              j_57 = t;
              {
                ATerm m_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_57)), not_null(h_57));
                {
                  m_57 = t;
                  if(((l_57 != NULL) && (l_57 != m_57)))
                    _fail(m_57);
                  else
                    l_57 = m_57;
                }
                t = not_null(l_57);
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
ATerm fetch_1 (ATerm t, ATerm f_101 (ATerm))
{
  ATerm r_57 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_101, _id);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = Cons_2(t, _id, r_57);
      }
    return(t);
  }
  t = r_57(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_117 (ATerm))
{
  t = fetch_1(t, y_117);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  t_57 = t;
  s_57 :
  if(((ATgetType(t_57) == AT_LIST) && ATisEmpty(t_57)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_57) == AT_LIST) && !(ATisEmpty(t_57))))
        {
          u_57 = ATgetFirst((ATermList) t_57);
          v_57 = (ATerm) ATgetNext((ATermList) t_57);
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
  ATerm s_24;
  s_24 = t;
  {
    ATerm y_57 = NULL;
    ATerm b_58 = NULL;
    ATerm u_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = u_24;
        {
          ATerm z_57 = NULL;
          ATerm a_58 = NULL;
          a_58 = t;
          if(((z_57 != NULL) && (z_57 != a_58)))
            _fail(a_58);
          else
            z_57 = a_58;
          t = (ATerm) ATinsert(ATempty, not_null(z_57));
        }
      }
    {
      b_58 = t;
      if(((y_57 != NULL) && (y_57 != b_58)))
        _fail(b_58);
      else
        y_57 = b_58;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_17, not_null(y_57));
      t = printnl_0(t);
    }
  }
  t = s_24;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_c_22;
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
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym_Help_0))
    {
      ATerm k_58 = NULL,m_58 = NULL;
      ATerm b_25;
      b_25 = t;
      {
        ATerm l_58 = NULL;
        t = SSLgetAnnotations(not_null(i_58));
        {
          l_58 = t;
          if(((k_58 != NULL) && (k_58 != l_58)))
            _fail(l_58);
          else
            k_58 = l_58;
        }
      }
      t = b_25;
      {
        ATerm n_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_58));
        {
          n_58 = t;
          if(((m_58 != NULL) && (m_58 != n_58)))
            _fail(n_58);
          else
            m_58 = n_58;
        }
        t = not_null(m_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_93(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm c_59 = NULL;
        c_59 = t;
        a_59 :
        if(!(match_string(c_59, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_t_25;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_u_25;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm d_59 = NULL;
          d_59 = t;
          b_59 :
          if(!(match_string(d_59, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = term_t_25;
          {
            t = set_config_0(t);
            {
              t = term_y_25;
              t = set_config_0(t);
            }
          }
          t = term_z_25;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_c_26;
          return(t);
        }
        t = Option_3(t, m_4, n_4, o_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  f_59 :
  if(match_cons(g_59, sym__2))
    {
      h_59 = ATgetArgument(g_59, 0);
      i_59 = ATgetArgument(g_59, 1);
      t = SSL_table_get(not_null(h_59), not_null(i_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  p_59 = t;
  o_59 :
  if(match_cons(p_59, sym__3))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      s_59 = ATgetArgument(p_59, 2);
      {
        ATerm d_26;
        d_26 = t;
        {
          ATerm w_59 = NULL;
          ATerm x_59 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_59), not_null(r_59));
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_26);
              }
            else
              {
                t = o_26;
                t = (ATerm) ATempty;
              }
            {
              x_59 = t;
              if(((w_59 != NULL) && (w_59 != x_59)))
                _fail(x_59);
              else
                w_59 = x_59;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_59), not_null(r_59), (ATerm) ATinsert(CheckATermList(not_null(w_59)), not_null(s_59)));
            t = table_put_0(t);
          }
        }
        t = d_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_119 (ATerm))
{
  ATerm d_60 = NULL;
  ATerm e_60 = NULL;
  t = term_r_8;
  {
    t = d_119(t);
    {
      e_60 = t;
      if(((d_60 != NULL) && (d_60 != e_60)))
        _fail(e_60);
      else
        d_60 = e_60;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_24, term_c_24, not_null(d_60));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_string(p_60, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(p_60) == AT_LIST) && !(ATisEmpty(p_60))))
        {
          q_60 = ATgetFirst((ATermList) p_60);
          r_60 = (ATerm) ATgetNext((ATermList) p_60);
          {
            ATerm u_60 = NULL;
            ATerm q_26;
            q_26 = t;
            {
              t = not_null(q_60);
              t = a_0(t);
            }
            t = q_26;
            {
              ATerm v_60 = NULL;
              t = term_r_8;
              {
                t = b_0(t);
                {
                  v_60 = t;
                  if(((u_60 != NULL) && (u_60 != v_60)))
                    _fail(v_60);
                  else
                    u_60 = v_60;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_60)), not_null(u_60));
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
  ATerm u_4 (ATerm t)
  {
    ATerm b_61 = NULL;
    b_61 = t;
    z_60 :
    if(!(match_string(b_61, "--help")))
      {
        if(!(match_string(b_61, "-h")))
          {
            if(!(match_string(b_61, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_r_26;
    {
      t = set_config_0(t);
      t = term_s_26;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_t_26;
    return(t);
  }
  t = Option_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  e_61 = t;
  d_61 :
  if(((ATgetType(e_61) == AT_LIST) && !(ATisEmpty(e_61))))
    {
      f_61 = ATgetFirst((ATermList) e_61);
      g_61 = (ATerm) ATgetNext((ATermList) e_61);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_61)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_61)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL;
  w_61 = t;
  p_61 :
  if(((ATgetType(w_61) == AT_LIST) && !(ATisEmpty(w_61))))
    {
      x_61 = ATgetFirst((ATermList) w_61);
      y_61 = (ATerm) ATgetNext((ATermList) w_61);
      {
        ATerm d_62 = NULL,f_62 = NULL;
        ATerm e_62 = NULL;
        t = SSLgetAnnotations(not_null(w_61));
        {
          e_62 = t;
          if(((d_62 != NULL) && (d_62 != e_62)))
            _fail(e_62);
          else
            d_62 = e_62;
        }
        {
          t = not_null(x_61);
          {
            ATerm h_62 = NULL;
            t = a_73(t);
            {
              f_62 = t;
              {
                t = not_null(y_61);
                {
                  ATerm j_62 = NULL;
                  t = b_73(t);
                  {
                    h_62 = t;
                    {
                      ATerm k_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_62)), not_null(f_62)), not_null(d_62));
                      {
                        k_62 = t;
                        if(((j_62 != NULL) && (j_62 != k_62)))
                          _fail(k_62);
                        else
                          j_62 = k_62;
                      }
                      t = not_null(j_62);
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
  ATerm u_62 = NULL;
  u_62 = t;
  t_62 :
  if(((ATgetType(u_62) == AT_LIST) && ATisEmpty(u_62)))
    {
      {
        ATerm w_62 = NULL,y_62 = NULL;
        ATerm y_26;
        y_26 = t;
        {
          ATerm x_62 = NULL;
          t = SSLgetAnnotations(not_null(u_62));
          {
            x_62 = t;
            if(((w_62 != NULL) && (w_62 != x_62)))
              _fail(x_62);
            else
              w_62 = x_62;
          }
        }
        t = y_26;
        {
          ATerm z_62 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_62));
          {
            z_62 = t;
            if(((y_62 != NULL) && (y_62 != z_62)))
              _fail(z_62);
            else
              y_62 = z_62;
          }
          t = not_null(y_62);
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
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym__2))
    {
      g_63 = ATgetArgument(f_63, 0);
      h_63 = ATgetArgument(f_63, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_16, not_null(g_63), not_null(h_63));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_119 (ATerm))
{
  ATerm z_26;
  z_26 = t;
  {
    ATerm x_4 (ATerm t)
    {
      t = term_a_27;
      t = b_119(t);
      return(t);
    }
    t = try_1(t, x_4);
  }
  t = z_26;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm p_63 = NULL;
      ATerm b_27;
      b_27 = t;
      {
        ATerm n_63 = NULL;
        ATerm o_63 = NULL;
        o_63 = t;
        if(((n_63 != NULL) && (n_63 != o_63)))
          _fail(o_63);
        else
          n_63 = o_63;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(n_63));
          t = set_config_0(t);
        }
      }
      t = b_27;
      {
        ATerm q_63 = NULL;
        q_63 = t;
        if(((p_63 != NULL) && (p_63 != q_63)))
          _fail(q_63);
        else
          p_63 = q_63;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_63));
      }
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      ATerm e_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              {
                t = b_119(t);
                t = Cons_2(t, _id, d_5);
              }
            }
          ;
          LocalPopChoice(h_27);
        }
      else
        {
          t = e_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_5, d_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  ATerm k_27;
  k_27 = t;
  {
    ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
    z_63 = t;
    v_63 :
    if(match_cons(z_63, sym__3))
      {
        a_64 = ATgetArgument(z_63, 0);
        b_64 = ATgetArgument(z_63, 1);
        c_64 = ATgetArgument(z_63, 2);
        {
          if(((w_63 != NULL) && (w_63 != a_64)))
            _fail(a_64);
          else
            w_63 = a_64;
          {
            if(((x_63 != NULL) && (x_63 != b_64)))
              _fail(b_64);
            else
              x_63 = b_64;
            {
              if(((y_63 != NULL) && (y_63 != c_64)))
                _fail(c_64);
              else
                y_63 = c_64;
              t = SSL_table_put(not_null(w_63), not_null(x_63), not_null(y_63));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_119 (ATerm))
{
  ATerm f_64 = NULL;
  ATerm l_27;
  l_27 = t;
  {
    t = term_m_27;
    t = table_put_0(t);
  }
  t = l_27;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_119(t);
          ;
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, f_5);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27;
            t_27 = t;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = t_27;
            {
              t = system_usage_0(t);
              {
                t = term_m_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_27;
                  y_27 = t;
                  {
                    t = term_s_25;
                    t = get_config_0(t);
                  }
                  t = y_27;
                  {
                    t = system_about_0(t);
                    {
                      t = term_m_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  {
                    ATerm j_5 (ATerm t)
                    {
                      ATerm k_5 (ATerm t)
                      {
                        ATerm l_64 = NULL;
                        l_64 = t;
                        if(((f_64 != NULL) && (f_64 != l_64)))
                          _fail(l_64);
                        else
                          f_64 = l_64;
                        return(t);
                      }
                      t = Undefined_1(t, k_5);
                      return(t);
                    }
                    t = option_defined_1(t, j_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_64)), term_d_28));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_j_15;
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
      t = try_1(t, i_5);
      {
        ATerm e_28;
        e_28 = t;
        {
          t = term_b_24;
          t = table_destroy_0(t);
        }
        t = e_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm))
{
  t = parse_options_1(t, a_117);
  {
    t = store_options_0(t);
    {
      t = c_117(t);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_117);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_117(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = h_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm s_116 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_116(t);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_116);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_5, r_116, s_116, m_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm l_116 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm l_29;
      l_29 = t;
      {
        ATerm o_64 = NULL;
        ATerm p_64 = NULL;
        t = term_c_22;
        {
          t = get_config_0(t);
          {
            p_64 = t;
            if(((o_64 != NULL) && (o_64 != p_64)))
              _fail(p_64);
            else
              o_64 = p_64;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATempty, not_null(o_64)));
          t = printnl_0(t);
        }
      }
      t = l_29;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, j_116, k_116, l_116, n_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_116 (ATerm), ATerm i_116 (ATerm))
{
  t = iowrap_3(t, h_116, i_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_116 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    t = _2(t, _id, e_116);
    return(t);
  }
  t = iowrap_2(t, p_5, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, r_5, s_5);
    {
      t = mark_fresh_vars_0(t);
      t = mark_bound_unbound_vars_0(t);
    }
    return(t);
  }
  t = iowrap_1(t, q_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
