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
ATerm term_i_43;
ATerm term_c_42;
ATerm term_i_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_l_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_i_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_z_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_t_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_v_15;
ATerm term_c_15;
ATerm term_k_14;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_z_10;
ATerm term_d_10;
ATerm term_n_9;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_12);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_16);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_CallT_3, term_e_19, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_19, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_19);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_20);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_21);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_b_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_k_14);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_k_14);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_u_37);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_k_14);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_y_39, term_k_14);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_i_36, term_k_14);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__3, term_t_37, term_u_37, (ATerm) ATempty);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm q_112 (ATerm), ATerm);
ATerm guardedlchoice_1_0 (ATerm j_122 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm);
ATerm lchoice_1_0 (ATerm i_122 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm);
ATerm choice_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_MarkVar_0_0 (ATerm);
ATerm Let_2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_122 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_122 (ATerm), ATerm);
ATerm scope_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm Build_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm mark_build_0_0 (ATerm);
ATerm assert_1_0 (ATerm e_122 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm crush_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm collect_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm g_122 (ATerm), ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm mark_fresh_vars_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm o_77 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm CreateDef1_0_0 (ATerm);
ATerm CallFailFun_0_0 (ATerm);
ATerm CallIdFun_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm Canon_0_0 (ATerm);
ATerm repeat_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm);
ATerm _2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm a_113 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_114 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_118 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm g_116 (ATerm), ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm k_8;
  k_8 = t;
  {
    ATerm g_3 = NULL;
    ATerm h_3 = NULL;
    ATerm v_3 (ATerm t)
    {
      t = not_null(h_3);
      if(((g_3 != NULL) && (g_3 != t)))
        _fail(t);
      else
        g_3 = t;
      t = not_null(h_3);
      return(t);
    }
    if(((h_3 != NULL) && (h_3 != t)))
      _fail(t);
    else
      h_3 = t;
    t = v_3(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, not_null(g_3)));
    t = printnl_0_0(t);
  }
  t = k_8;
  return(t);
}
ATerm say_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm p_8;
  p_8 = t;
  t = q_112(t);
  t = debug_0_0(t);
  t = p_8;
  return(t);
}
ATerm guardedlchoice_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = GuardedLChoice_3_0(j_122, j_122, _id, t);
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = GuardedLChoice_3_0(_id, _id, j_122, t);
    return(t);
  }
  t = abstract_choice_2_0(c_0, e_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  ATerm i_5 (ATerm t)
  {
    ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,a_5 = NULL;
    ATerm k_5 (ATerm t)
    {
      ATerm b_5 = NULL,c_5 = NULL;
      ATerm l_5 (ATerm t)
      {
        ATerm d_5 = NULL,e_5 = NULL;
        ATerm m_5 (ATerm t)
        {
          ATerm f_5 = NULL,g_5 = NULL;
          t = not_null(e_5);
          if(((f_5 != NULL) && (f_5 != t)))
            _fail(t);
          else
            f_5 = t;
          t = not_null(e_5);
          {
            ATerm h_5 = NULL;
            ATerm n_5 (ATerm t)
            {
              t = not_null(h_5);
              if(((g_5 != NULL) && (g_5 != t)))
                _fail(t);
              else
                g_5 = t;
              t = not_null(h_5);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_5), not_null(d_5), not_null(f_5)), not_null(y_4));
            if(((h_5 != NULL) && (h_5 != t)))
              _fail(t);
            else
              h_5 = t;
            t = n_5(t);
            t = not_null(g_5);
          }
          return(t);
        }
        t = not_null(c_5);
        if(((d_5 != NULL) && (d_5 != t)))
          _fail(t);
        else
          d_5 = t;
        t = not_null(x_4);
        t = l_78(t);
        if(((e_5 != NULL) && (e_5 != t)))
          _fail(t);
        else
          e_5 = t;
        t = m_5(t);
        return(t);
      }
      t = not_null(a_5);
      if(((b_5 != NULL) && (b_5 != t)))
        _fail(t);
      else
        b_5 = t;
      t = not_null(w_4);
      t = k_78(t);
      if(((c_5 != NULL) && (c_5 != t)))
        _fail(t);
      else
        c_5 = t;
      t = l_5(t);
      return(t);
    }
    t = not_null(q_4);
    if(((u_4 != NULL) && (u_4 != t)))
      _fail(t);
    else
      u_4 = t;
    t = not_null(r_4);
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    t = not_null(s_4);
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    t = not_null(t_4);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    t = not_null(q_4);
    {
      ATerm z_4 = NULL;
      ATerm j_5 (ATerm t)
      {
        t = not_null(z_4);
        if(((y_4 != NULL) && (y_4 != t)))
          _fail(t);
        else
          y_4 = t;
        t = not_null(z_4);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_4));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = j_5(t);
      t = not_null(v_4);
      t = j_78(t);
      if(((a_5 != NULL) && (a_5 != t)))
        _fail(t);
      else
        a_5 = t;
      t = k_5(t);
    }
    return(t);
  }
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = not_null(q_4);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
      t_4 = ATgetArgument(t, 2);
      t = i_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lchoice_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    t = LChoice_2_0(i_122, _id, t);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = LChoice_2_0(_id, i_122, t);
    return(t);
  }
  t = abstract_choice_2_0(m_0, n_0, t);
  return(t);
}
ATerm LChoice_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  ATerm i_6 (ATerm t)
  {
    ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL;
    ATerm k_6 (ATerm t)
    {
      ATerm d_6 = NULL,e_6 = NULL;
      ATerm l_6 (ATerm t)
      {
        ATerm f_6 = NULL,g_6 = NULL;
        t = not_null(e_6);
        if(((f_6 != NULL) && (f_6 != t)))
          _fail(t);
        else
          f_6 = t;
        t = not_null(e_6);
        {
          ATerm h_6 = NULL;
          ATerm m_6 (ATerm t)
          {
            t = not_null(h_6);
            if(((g_6 != NULL) && (g_6 != t)))
              _fail(t);
            else
              g_6 = t;
            t = not_null(h_6);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(d_6), not_null(f_6)), not_null(a_6));
          if(((h_6 != NULL) && (h_6 != t)))
            _fail(t);
          else
            h_6 = t;
          t = m_6(t);
          t = not_null(g_6);
        }
        return(t);
      }
      t = not_null(c_6);
      if(((d_6 != NULL) && (d_6 != t)))
        _fail(t);
      else
        d_6 = t;
      t = not_null(z_5);
      t = g_78(t);
      if(((e_6 != NULL) && (e_6 != t)))
        _fail(t);
      else
        e_6 = t;
      t = l_6(t);
      return(t);
    }
    t = not_null(u_5);
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    t = not_null(v_5);
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    t = not_null(w_5);
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = not_null(u_5);
    {
      ATerm b_6 = NULL;
      ATerm j_6 (ATerm t)
      {
        t = not_null(b_6);
        if(((a_6 != NULL) && (a_6 != t)))
          _fail(t);
        else
          a_6 = t;
        t = not_null(b_6);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_5));
      if(((b_6 != NULL) && (b_6 != t)))
        _fail(t);
      else
        b_6 = t;
      t = j_6(t);
      t = not_null(y_5);
      t = f_78(t);
      if(((c_6 != NULL) && (c_6 != t)))
        _fail(t);
      else
        c_6 = t;
      t = k_6(t);
    }
    return(t);
  }
  if(((u_5 != NULL) && (u_5 != t)))
    _fail(t);
  else
    u_5 = t;
  t = not_null(u_5);
  if(match_cons(t, sym_LChoice_2))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      t = i_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abstract_choice_2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,r_6 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm q_6 = NULL;
    ATerm t_6 (ATerm t)
    {
      t = not_null(q_6);
      if(((p_6 != NULL) && (p_6 != t)))
        _fail(t);
      else
        p_6 = t;
      t = not_null(q_6);
      return(t);
    }
    t = save_MarkVar_0_0(t);
    if(((q_6 != NULL) && (q_6 != t)))
      _fail(t);
    else
      q_6 = t;
    t = t_6(t);
  }
  t = q_8;
  t = k_122(t);
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm s_6 = NULL;
      ATerm u_6 (ATerm t)
      {
        t = not_null(s_6);
        if(((r_6 != NULL) && (r_6 != t)))
          _fail(t);
        else
          r_6 = t;
        t = not_null(p_6);
        t = restore_MarkVar_0_0(t);
        return(t);
      }
      t = save_MarkVar_0_0(t);
      if(((s_6 != NULL) && (s_6 != t)))
        _fail(t);
      else
        s_6 = t;
      t = u_6(t);
    }
    t = r_8;
    t = l_122(t);
    {
      ATerm s_8;
      s_8 = t;
      t = not_null(r_6);
      t = isect_MarkVar_0_0(t);
      t = s_8;
    }
  }
  return(t);
}
ATerm choice_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = Choice_2_0(h_122, _id, t);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = Choice_2_0(_id, h_122, t);
    return(t);
  }
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm Choice_2_0 (ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  ATerm p_7 (ATerm t)
  {
    ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL;
    ATerm r_7 (ATerm t)
    {
      ATerm k_7 = NULL,l_7 = NULL;
      ATerm s_7 (ATerm t)
      {
        ATerm m_7 = NULL,n_7 = NULL;
        t = not_null(l_7);
        if(((m_7 != NULL) && (m_7 != t)))
          _fail(t);
        else
          m_7 = t;
        t = not_null(l_7);
        {
          ATerm o_7 = NULL;
          ATerm t_7 (ATerm t)
          {
            t = not_null(o_7);
            if(((n_7 != NULL) && (n_7 != t)))
              _fail(t);
            else
              n_7 = t;
            t = not_null(o_7);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(k_7), not_null(m_7)), not_null(h_7));
          if(((o_7 != NULL) && (o_7 != t)))
            _fail(t);
          else
            o_7 = t;
          t = t_7(t);
          t = not_null(n_7);
        }
        return(t);
      }
      t = not_null(j_7);
      if(((k_7 != NULL) && (k_7 != t)))
        _fail(t);
      else
        k_7 = t;
      t = not_null(g_7);
      t = e_77(t);
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
      t = s_7(t);
      return(t);
    }
    t = not_null(b_7);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = not_null(c_7);
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = not_null(d_7);
    if(((g_7 != NULL) && (g_7 != t)))
      _fail(t);
    else
      g_7 = t;
    t = not_null(b_7);
    {
      ATerm i_7 = NULL;
      ATerm q_7 (ATerm t)
      {
        t = not_null(i_7);
        if(((h_7 != NULL) && (h_7 != t)))
          _fail(t);
        else
          h_7 = t;
        t = not_null(i_7);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_7));
      if(((i_7 != NULL) && (i_7 != t)))
        _fail(t);
      else
        i_7 = t;
      t = q_7(t);
      t = not_null(f_7);
      t = d_77(t);
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      t = r_7(t);
    }
    return(t);
  }
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
  t = not_null(b_7);
  if(match_cons(t, sym_Choice_2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      t = p_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  ATerm i_8 (ATerm t)
  {
    ATerm b_8 = NULL,c_8 = NULL;
    t = not_null(z_7);
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    t = not_null(a_8);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = not_null(b_8);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
        ATerm j_8 (ATerm t)
        {
          ATerm g_8 = NULL,h_8 = NULL;
          t = not_null(e_8);
          if(((g_8 != NULL) && (g_8 != t)))
            _fail(t);
          else
            g_8 = t;
          t = not_null(f_8);
          if(((h_8 != NULL) && (h_8 != t)))
            _fail(t);
          else
            h_8 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_8), not_null(g_8), not_null(h_8));
          t = table_put_0_0(t);
          return(t);
        }
        if(((d_8 != NULL) && (d_8 != t)))
          _fail(t);
        else
          d_8 = t;
        t = not_null(d_8);
        if(match_cons(t, sym__2))
          {
            e_8 = ATgetArgument(t, 0);
            f_8 = ATgetArgument(t, 1);
            t = j_8(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(q_0, t);
    }
    return(t);
  }
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = not_null(y_7);
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      t = i_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_MarkVar_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm n_8 (ATerm t)
  {
    ATerm m_8 = NULL;
    t = not_null(l_8);
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    t = not_null(l_8);
    {
      ATerm t_8;
      t_8 = t;
      t = term_n_9;
      t = table_destroy_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(m_8));
      t = table_putlist_0_0(t);
      t = t_8;
    }
    return(t);
  }
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = n_8(t);
  return(t);
}
ATerm Let_2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  ATerm i_9 (ATerm t)
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL;
    ATerm k_9 (ATerm t)
    {
      ATerm d_9 = NULL,e_9 = NULL;
      ATerm l_9 (ATerm t)
      {
        ATerm f_9 = NULL,g_9 = NULL;
        t = not_null(e_9);
        if(((f_9 != NULL) && (f_9 != t)))
          _fail(t);
        else
          f_9 = t;
        t = not_null(e_9);
        {
          ATerm h_9 = NULL;
          ATerm m_9 (ATerm t)
          {
            t = not_null(h_9);
            if(((g_9 != NULL) && (g_9 != t)))
              _fail(t);
            else
              g_9 = t;
            t = not_null(h_9);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(d_9), not_null(f_9)), not_null(a_9));
          if(((h_9 != NULL) && (h_9 != t)))
            _fail(t);
          else
            h_9 = t;
          t = m_9(t);
          t = not_null(g_9);
        }
        return(t);
      }
      t = not_null(c_9);
      if(((d_9 != NULL) && (d_9 != t)))
        _fail(t);
      else
        d_9 = t;
      t = not_null(z_8);
      t = q_77(t);
      if(((e_9 != NULL) && (e_9 != t)))
        _fail(t);
      else
        e_9 = t;
      t = l_9(t);
      return(t);
    }
    t = not_null(u_8);
    if(((x_8 != NULL) && (x_8 != t)))
      _fail(t);
    else
      x_8 = t;
    t = not_null(v_8);
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = not_null(w_8);
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = not_null(u_8);
    {
      ATerm b_9 = NULL;
      ATerm j_9 (ATerm t)
      {
        t = not_null(b_9);
        if(((a_9 != NULL) && (a_9 != t)))
          _fail(t);
        else
          a_9 = t;
        t = not_null(b_9);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_8));
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = j_9(t);
      t = not_null(y_8);
      t = p_77(t);
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      t = k_9(t);
    }
    return(t);
  }
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = not_null(u_8);
  if(match_cons(t, sym_Let_2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      t = i_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  ATerm q_9 (ATerm t)
  {
    ATerm p_9 = NULL;
    t = not_null(o_9);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = not_null(o_9);
    t = SSL_table_keys(not_null(p_9));
    return(t);
  }
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = q_9(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm a_10 (ATerm t)
  {
    ATerm v_9 = NULL;
    t = not_null(u_9);
    if(((v_9 != NULL) && (v_9 != t)))
      _fail(t);
    else
      v_9 = t;
    t = not_null(u_9);
    t = table_keys_0_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm w_9 = NULL;
        ATerm b_10 (ATerm t)
        {
          ATerm x_9 = NULL,y_9 = NULL;
          t = not_null(w_9);
          if(((x_9 != NULL) && (x_9 != t)))
            _fail(t);
          else
            x_9 = t;
          t = not_null(w_9);
          {
            ATerm z_9 = NULL;
            ATerm c_10 (ATerm t)
            {
              t = not_null(z_9);
              if(((y_9 != NULL) && (y_9 != t)))
                _fail(t);
              else
                y_9 = t;
              t = not_null(z_9);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
            t = table_get_0_0(t);
            if(((z_9 != NULL) && (z_9 != t)))
              _fail(t);
            else
              z_9 = t;
            t = c_10(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(y_9));
          }
          return(t);
        }
        if(((w_9 != NULL) && (w_9 != t)))
          _fail(t);
        else
          w_9 = t;
        t = b_10(t);
        return(t);
      }
      t = map_1_0(r_0, t);
    }
    return(t);
  }
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = a_10(t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_n_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      ATerm x_10 (ATerm t)
      {
        ATerm s_10 = NULL;
        t = not_null(n_10);
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = not_null(m_10);
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9;
              t_9 = t;
              {
                ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(s_10));
                t = table_get_0_0(t);
                if(((t_10 != NULL) && (t_10 != t)))
                  _fail(t);
                else
                  t_10 = t;
                t = not_null(t_10);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_10 = ATgetFirst((ATermList) t);
                    w_10 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(u_10);
                    if(match_cons(t, sym_Defined_1))
                      {
                        v_10 = ATgetArgument(t, 0);
                        t = not_null(t_10);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
              t = t_9;
              ;
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), (ATerm) ATinsert(ATempty, term_d_10));
            }
        }
        return(t);
      }
      if(((m_10 != NULL) && (m_10 != t)))
        _fail(t);
      else
        m_10 = t;
      t = not_null(m_10);
      if(match_cons(t, sym__2))
        {
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
          t = not_null(o_10);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_10 = ATgetFirst((ATermList) t);
              r_10 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(p_10);
              if(match_cons(t, sym_Defined_1))
                {
                  q_10 = ATgetArgument(t, 0);
                  t = not_null(n_10);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm e_10 = t;
                      int f_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(m_10);
                          ;
                          LocalPopChoice(f_10);
                        }
                      else
                        {
                          t = e_10;
                          t = x_10(t);
                        }
                    }
                  else
                    {
                      t = x_10(t);
                    }
                }
              else
                {
                  t = not_null(n_10);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = not_null(m_10);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              t = not_null(n_10);
              if(match_cons(t, sym_Scopes_0))
                {
                  t = not_null(m_10);
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
    t = try_1_0(t_0, t);
    return(t);
  }
  t = map_1_0(s_0, t);
  t = restore_MarkVar_0_0(t);
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL;
  t = Let_2_0(_id, _id, t);
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm b_11 = NULL;
      ATerm e_11 (ATerm t)
      {
        t = not_null(b_11);
        if(((a_11 != NULL) && (a_11 != t)))
          _fail(t);
        else
          a_11 = t;
        t = not_null(b_11);
        return(t);
      }
      t = save_MarkVar_0_0(t);
      if(((b_11 != NULL) && (b_11 != t)))
        _fail(t);
      else
        b_11 = t;
      t = e_11(t);
    }
    t = g_10;
    t = Let_2_0(_id, mark_buv_0_0, t);
    {
      ATerm h_10;
      h_10 = t;
      {
        ATerm d_11 = NULL;
        ATerm f_11 (ATerm t)
        {
          t = not_null(d_11);
          if(((c_11 != NULL) && (c_11 != t)))
            _fail(t);
          else
            c_11 = t;
          t = not_null(d_11);
          return(t);
        }
        t = not_null(a_11);
        t = isect_MarkVar_0_0(t);
        t = save_MarkVar_0_0(t);
        if(((d_11 != NULL) && (d_11 != t)))
          _fail(t);
        else
          d_11 = t;
        t = f_11(t);
      }
      t = h_10;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = mark_buv_0_0(t);
            {
              ATerm i_10;
              i_10 = t;
              t = not_null(c_11);
              t = restore_MarkVar_0_0(t);
              t = i_10;
            }
            return(t);
          }
          t = map_1_0(v_0, t);
          return(t);
        }
        t = Let_2_0(u_0, _id, t);
      }
    }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm m_11 (ATerm t)
  {
    ATerm l_11 = NULL;
    t = not_null(k_11);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(l_11);
    return(t);
  }
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = not_null(i_11);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
      t = m_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  ATerm x_11 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL;
    t = not_null(r_11);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    t = not_null(s_11);
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = not_null(q_11);
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm v_11 = NULL;
        ATerm w_11 = NULL;
        ATerm y_11 (ATerm t)
        {
          t = not_null(w_11);
          if(((v_11 != NULL) && (v_11 != t)))
            _fail(t);
          else
            v_11 = t;
          t = not_null(w_11);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(u_11));
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              t = (ATerm) ATempty;
            }
          if(((w_11 != NULL) && (w_11 != t)))
            _fail(t);
          else
            w_11 = t;
          t = y_11(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_11), not_null(u_11), not_null(v_11));
        t = table_put_0_0(t);
      }
      t = j_10;
    }
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = not_null(q_11);
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
      t = x_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  ATerm y_10;
  y_10 = t;
  {
    ATerm g_12 = NULL;
    ATerm m_12 (ATerm t)
    {
      ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
      ATerm n_12 (ATerm t)
      {
        t = not_null(i_12);
        if(((e_12 != NULL) && (e_12 != t)))
          _fail(t);
        else
          e_12 = t;
        t = not_null(j_12);
        if(((d_12 != NULL) && (d_12 != t)))
          _fail(t);
        else
          d_12 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_12), term_z_10, not_null(d_12));
        t = table_put_0_0(t);
        t = not_null(e_12);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm k_12 = NULL;
            ATerm o_12 (ATerm t)
            {
              ATerm l_12 = NULL;
              t = not_null(k_12);
              if(((l_12 != NULL) && (l_12 != t)))
                _fail(t);
              else
                l_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(l_12));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((k_12 != NULL) && (k_12 != t)))
              _fail(t);
            else
              k_12 = t;
            t = o_12(t);
            return(t);
          }
          t = map_1_0(w_0, t);
        }
        return(t);
      }
      t = not_null(g_12);
      if(((f_12 != NULL) && (f_12 != t)))
        _fail(t);
      else
        f_12 = t;
      t = not_null(g_12);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), term_z_10);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((h_12 != NULL) && (h_12 != t)))
          _fail(t);
        else
          h_12 = t;
        t = not_null(h_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_12 = ATgetFirst((ATermList) t);
            j_12 = (ATerm) ATgetNext((ATermList) t);
            t = n_12(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = b_122(t);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    t = m_12(t);
  }
  t = y_10;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_94(t);
      t = c_94(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = c_94(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_122 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm s_12 = NULL;
    ATerm v_12 (ATerm t)
    {
      ATerm t_12 = NULL;
      t = not_null(s_12);
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      t = not_null(s_12);
      {
        ATerm u_12 = NULL;
        ATerm w_12 (ATerm t)
        {
          t = not_null(u_12);
          if(((t_12 != NULL) && (t_12 != t)))
            _fail(t);
          else
            t_12 = t;
          t = not_null(u_12);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), term_z_10);
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              t = (ATerm) ATempty;
            }
          if(((u_12 != NULL) && (u_12 != t)))
            _fail(t);
          else
            u_12 = t;
          t = w_12(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_12), term_z_10, (ATerm) ATinsert(CheckATermList(not_null(t_12)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = a_122(t);
    if(((s_12 != NULL) && (s_12 != t)))
      _fail(t);
    else
      s_12 = t;
    t = v_12(t);
  }
  t = p_11;
  return(t);
}
ATerm scope_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t)
{
  t = begin_scope_1_0(c_122, t);
  {
    ATerm x_0 (ATerm t)
    {
      t = end_scope_1_0(c_122, t);
      return(t);
    }
    t = restore_always_2_0(d_122, x_0, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  ATerm r_13 (ATerm t)
  {
    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL;
    ATerm t_13 (ATerm t)
    {
      ATerm m_13 = NULL,n_13 = NULL;
      ATerm u_13 (ATerm t)
      {
        ATerm o_13 = NULL,p_13 = NULL;
        t = not_null(n_13);
        if(((o_13 != NULL) && (o_13 != t)))
          _fail(t);
        else
          o_13 = t;
        t = not_null(n_13);
        {
          ATerm q_13 = NULL;
          ATerm v_13 (ATerm t)
          {
            t = not_null(q_13);
            if(((p_13 != NULL) && (p_13 != t)))
              _fail(t);
            else
              p_13 = t;
            t = not_null(q_13);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(m_13), not_null(o_13)), not_null(j_13));
          if(((q_13 != NULL) && (q_13 != t)))
            _fail(t);
          else
            q_13 = t;
          t = v_13(t);
          t = not_null(p_13);
        }
        return(t);
      }
      t = not_null(l_13);
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      t = not_null(i_13);
      t = a_78(t);
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = u_13(t);
      return(t);
    }
    t = not_null(d_13);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = not_null(e_13);
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    t = not_null(f_13);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(d_13);
    {
      ATerm k_13 = NULL;
      ATerm s_13 (ATerm t)
      {
        t = not_null(k_13);
        if(((j_13 != NULL) && (j_13 != t)))
          _fail(t);
        else
          j_13 = t;
        t = not_null(k_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_13));
      if(((k_13 != NULL) && (k_13 != t)))
        _fail(t);
      else
        k_13 = t;
      t = s_13(t);
      t = not_null(h_13);
      t = z_77(t);
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = t_13(t);
    }
    return(t);
  }
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = not_null(d_13);
  if(match_cons(t, sym_Scope_2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      t = r_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  ATerm f_14 (ATerm t)
  {
    ATerm c_14 = NULL;
    t = not_null(a_14);
    if(((c_14 != NULL) && (c_14 != t)))
      _fail(t);
    else
      c_14 = t;
    t = not_null(z_13);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = term_n_9;
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm b_12;
          b_12 = t;
          t = not_null(c_14);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm d_14 = NULL;
              ATerm g_14 (ATerm t)
              {
                ATerm e_14 = NULL;
                t = not_null(d_14);
                if(((e_14 != NULL) && (e_14 != t)))
                  _fail(t);
                else
                  e_14 = t;
                t = not_null(d_14);
                {
                  ATerm c_12;
                  c_12 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_14)), term_q_12);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      t = term_n_9;
                      return(t);
                    }
                    t = assert_1_0(c_1, t);
                  }
                  t = c_12;
                }
                return(t);
              }
              if(((d_14 != NULL) && (d_14 != t)))
                _fail(t);
              else
                d_14 = t;
              t = g_14(t);
              return(t);
            }
            t = map_1_0(b_1, t);
          }
          t = b_12;
          t = mark_buv_0_0(t);
          return(t);
        }
        t = scope_2_0(z_0, a_1, t);
        return(t);
      }
      t = Scope_2_0(_id, y_0, t);
    }
    return(t);
  }
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = not_null(z_13);
  if(match_cons(t, sym_Scope_2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      t = f_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  ATerm w_14 (ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL;
    ATerm y_14 (ATerm t)
    {
      ATerm t_14 = NULL,u_14 = NULL;
      t = not_null(s_14);
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = not_null(s_14);
      {
        ATerm v_14 = NULL;
        ATerm z_14 (ATerm t)
        {
          t = not_null(v_14);
          if(((u_14 != NULL) && (u_14 != t)))
            _fail(t);
          else
            u_14 = t;
          t = not_null(v_14);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_14)), not_null(q_14));
        if(((v_14 != NULL) && (v_14 != t)))
          _fail(t);
        else
          v_14 = t;
        t = z_14(t);
        t = not_null(u_14);
      }
      return(t);
    }
    t = not_null(m_14);
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = not_null(n_14);
    if(((p_14 != NULL) && (p_14 != t)))
      _fail(t);
    else
      p_14 = t;
    t = not_null(m_14);
    {
      ATerm r_14 = NULL;
      ATerm x_14 (ATerm t)
      {
        t = not_null(r_14);
        if(((q_14 != NULL) && (q_14 != t)))
          _fail(t);
        else
          q_14 = t;
        t = not_null(r_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_14));
      if(((r_14 != NULL) && (r_14 != t)))
        _fail(t);
      else
        r_14 = t;
      t = x_14(t);
      t = not_null(p_14);
      t = x_77(t);
      if(((s_14 != NULL) && (s_14 != t)))
        _fail(t);
      else
        s_14 = t;
      t = y_14(t);
    }
    return(t);
  }
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = not_null(m_14);
  if(match_cons(t, sym_Build_1))
    {
      n_14 = ATgetArgument(t, 0);
      t = w_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_build_0_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = alltd_1_0(MarkVar_0_0, t);
    return(t);
  }
  t = Build_1_0(d_1, t);
  return(t);
}
ATerm assert_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  ATerm r_15 (ATerm t)
  {
    ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
    t = not_null(g_15);
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = not_null(h_15);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(f_15);
    {
      ATerm x_12;
      x_12 = t;
      {
        ATerm n_15 = NULL;
        ATerm s_15 (ATerm t)
        {
          ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
          ATerm t_15 (ATerm t)
          {
            t = not_null(p_15);
            if(((l_15 != NULL) && (l_15 != t)))
              _fail(t);
            else
              l_15 = t;
            t = not_null(q_15);
            if(((m_15 != NULL) && (m_15 != t)))
              _fail(t);
            else
              m_15 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_15), term_z_10, (ATerm) ATinsert(CheckATermList(not_null(m_15)), (ATerm) ATinsert(CheckATermList(not_null(l_15)), not_null(i_15))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(n_15);
          if(((k_15 != NULL) && (k_15 != t)))
            _fail(t);
          else
            k_15 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(k_15), not_null(i_15), not_null(j_15));
          t = table_push_0_0(t);
          {
            ATerm y_12 = t;
            int z_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_z_10);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(z_12);
              }
            else
              {
                t = y_12;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((o_15 != NULL) && (o_15 != t)))
              _fail(t);
            else
              o_15 = t;
            t = not_null(o_15);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_15 = ATgetFirst((ATermList) t);
                q_15 = (ATerm) ATgetNext((ATermList) t);
                t = t_15(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = e_122(t);
        if(((n_15 != NULL) && (n_15 != t)))
          _fail(t);
        else
          n_15 = t;
        t = s_15(t);
      }
      t = x_12;
    }
    return(t);
  }
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  t = not_null(f_15);
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
      t = r_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  ATerm a_16 (ATerm t)
  {
    ATerm z_15 = NULL;
    t = not_null(x_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(y_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(w_15);
    return(t);
  }
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = not_null(w_15);
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      t = a_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  ATerm l_16 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL;
    t = not_null(f_16);
    if(((i_16 != NULL) && (i_16 != t)))
      _fail(t);
    else
      i_16 = t;
    t = not_null(g_16);
    if(((h_16 != NULL) && (h_16 != t)))
      _fail(t);
    else
      h_16 = t;
    t = not_null(e_16);
    t = f_105(t);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm j_16 = NULL;
        ATerm m_16 (ATerm t)
        {
          ATerm k_16 = NULL;
          t = not_null(j_16);
          if(((k_16 != NULL) && (k_16 != t)))
            _fail(t);
          else
            k_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(k_16));
          t = e_105(t);
          return(t);
        }
        if(((j_16 != NULL) && (j_16 != t)))
          _fail(t);
        else
          j_16 = t;
        t = m_16(t);
        return(t);
      }
      t = fetch_1_0(e_1, t);
    }
    t = not_null(h_16);
    return(t);
  }
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  t = not_null(e_16);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_16 = ATgetFirst((ATermList) t);
      g_16 = (ATerm) ATgetNext((ATermList) t);
      t = l_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  ATerm u_16 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL;
    t = not_null(q_16);
    if(((t_16 != NULL) && (t_16 != t)))
      _fail(t);
    else
      t_16 = t;
    t = not_null(r_16);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = not_null(t_16);
    {
      ATerm v_16 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(s_16);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm c_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = not_null(s_16);
                    return(t);
                  }
                  t = HdMember_p__2_0(a_105, f_1, t);
                  t = v_16(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = c_13;
                  t = Cons_2_0(_id, v_16, t);
                }
            }
          }
        return(t);
      }
      t = v_16(t);
    }
    return(t);
  }
  if(((p_16 != NULL) && (p_16 != t)))
    _fail(t);
  else
    p_16 = t;
  t = not_null(p_16);
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      t = u_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = a_107(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
        ATerm j_17 (ATerm t)
        {
          ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,h_17 = NULL;
          t = not_null(b_17);
          if(((d_17 != NULL) && (d_17 != t)))
            _fail(t);
          else
            d_17 = t;
          t = not_null(c_17);
          if(((e_17 != NULL) && (e_17 != t)))
            _fail(t);
          else
            e_17 = t;
          t = not_null(a_17);
          {
            ATerm h_14;
            h_14 = t;
            {
              ATerm g_17 = NULL;
              ATerm k_17 (ATerm t)
              {
                t = not_null(g_17);
                if(((f_17 != NULL) && (f_17 != t)))
                  _fail(t);
                else
                  f_17 = t;
                t = not_null(g_17);
                return(t);
              }
              t = not_null(d_17);
              t = c_107(t);
              if(((g_17 != NULL) && (g_17 != t)))
                _fail(t);
              else
                g_17 = t;
              t = k_17(t);
            }
            t = h_14;
            {
              ATerm i_17 = NULL;
              ATerm l_17 (ATerm t)
              {
                t = not_null(i_17);
                if(((h_17 != NULL) && (h_17 != t)))
                  _fail(t);
                else
                  h_17 = t;
                t = not_null(i_17);
                return(t);
              }
              t = not_null(e_17);
              t = foldr_3_0(a_107, b_107, c_107, t);
              if(((i_17 != NULL) && (i_17 != t)))
                _fail(t);
              else
                i_17 = t;
              t = l_17(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
              t = b_107(t);
            }
          }
          return(t);
        }
        if(((a_17 != NULL) && (a_17 != t)))
          _fail(t);
        else
          a_17 = t;
        t = not_null(a_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_17 = ATgetFirst((ATermList) t);
            c_17 = (ATerm) ATgetNext((ATermList) t);
            t = j_17(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm q_17 = NULL;
  ATerm y_17 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL;
    t = not_null(q_17);
    if(((r_17 != NULL) && (r_17 != t)))
      _fail(t);
    else
      r_17 = t;
    t = not_null(q_17);
    {
      ATerm t_17 = NULL;
      ATerm z_17 (ATerm t)
      {
        ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
        ATerm a_18 (ATerm t)
        {
          t = not_null(x_17);
          if(((s_17 != NULL) && (s_17 != t)))
            _fail(t);
          else
            s_17 = t;
          t = not_null(v_17);
          return(t);
        }
        t = not_null(t_17);
        if(((u_17 != NULL) && (u_17 != t)))
          _fail(t);
        else
          u_17 = t;
        t = not_null(t_17);
        t = SSL_explode_term(not_null(u_17));
        if(((v_17 != NULL) && (v_17 != t)))
          _fail(t);
        else
          v_17 = t;
        t = not_null(v_17);
        if(match_cons(t, sym__2))
          {
            w_17 = ATgetArgument(t, 0);
            x_17 = ATgetArgument(t, 1);
            t = a_18(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(r_17);
      if(((t_17 != NULL) && (t_17 != t)))
        _fail(t);
      else
        t_17 = t;
      t = z_17(t);
      t = not_null(s_17);
      t = foldr_3_0(t_110, u_110, v_110, t);
    }
    return(t);
  }
  if(((q_17 != NULL) && (q_17 != t)))
    _fail(t);
  else
    q_17 = t;
  t = y_17(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL;
      ATerm d_18 = NULL;
      ATerm e_18 (ATerm t)
      {
        t = not_null(d_18);
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = not_null(d_18);
        return(t);
      }
      t = w_105(t);
      if(((d_18 != NULL) && (d_18 != t)))
        _fail(t);
      else
        d_18 = t;
      t = e_18(t);
      t = (ATerm) ATinsert(ATempty, not_null(c_18));
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm g_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = collect_om_1_0(w_105, t);
          return(t);
        }
        t = crush_3_0(g_1, union_0_0, h_1, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  t = collect_om_1_0(x_105, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  ATerm l_18 (ATerm t)
  {
    ATerm k_18 = NULL;
    t = not_null(i_18);
    if(((k_18 != NULL) && (k_18 != t)))
      _fail(t);
    else
      k_18 = t;
    t = not_null(k_18);
    return(t);
  }
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = not_null(h_18);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_18 = ATgetFirst((ATermList) t);
      j_18 = (ATerm) ATgetNext((ATermList) t);
      t = l_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  ATerm t_18 (ATerm t)
  {
    ATerm r_18 = NULL,s_18 = NULL;
    t = not_null(p_18);
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = not_null(q_18);
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(s_18));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  t = not_null(o_18);
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
      t = t_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm w_18 = NULL;
  ATerm a_19 (ATerm t)
  {
    ATerm x_18 = NULL,y_18 = NULL;
    t = not_null(w_18);
    if(((x_18 != NULL) && (x_18 != t)))
      _fail(t);
    else
      x_18 = t;
    t = not_null(w_18);
    {
      ATerm z_18 = NULL;
      ATerm b_19 (ATerm t)
      {
        t = not_null(z_18);
        if(((y_18 != NULL) && (y_18 != t)))
          _fail(t);
        else
          y_18 = t;
        t = not_null(z_18);
        return(t);
      }
      t = term_k_14;
      t = g_122(t);
      if(((z_18 != NULL) && (z_18 != t)))
        _fail(t);
      else
        z_18 = t;
      t = b_19(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(x_18));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((w_18 != NULL) && (w_18 != t)))
    _fail(t);
  else
    w_18 = t;
  t = a_19(t);
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  ATerm l_20 (ATerm t)
  {
    ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL;
    t = not_null(p_19);
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    t = not_null(q_19);
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    t = not_null(p_19);
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm t_19 = NULL,u_19 = NULL;
        t = not_null(r_19);
        {
          ATerm i_1 (ATerm t)
          {
            t = term_n_9;
            return(t);
          }
          t = rewrite_1_0(i_1, t);
          if(((t_19 != NULL) && (t_19 != t)))
            _fail(t);
          else
            t_19 = t;
          t = not_null(t_19);
          if(match_cons(t, sym_Defined_1))
            {
              u_19 = ATgetArgument(t, 0);
              t = not_null(u_19);
              if(match_string(t, "j_0"))
                {
                  t = not_null(t_19);
                }
              else
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
      t = l_14;
      {
        ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL;
        ATerm p_20 (ATerm t)
        {
          t = not_null(a_20);
          if(((v_19 != NULL) && (v_19 != t)))
            _fail(t);
          else
            v_19 = t;
          t = not_null(a_20);
          return(t);
        }
        ATerm a_15;
        a_15 = t;
        {
          ATerm x_19 = NULL;
          ATerm n_20 (ATerm t)
          {
            t = not_null(x_19);
            if(((w_19 != NULL) && (w_19 != t)))
              _fail(t);
            else
              w_19 = t;
            t = not_null(x_19);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_19));
          if(((x_19 != NULL) && (x_19 != t)))
            _fail(t);
          else
            x_19 = t;
          t = n_20(t);
        }
        t = a_15;
        {
          ATerm b_15;
          b_15 = t;
          {
            ATerm z_19 = NULL;
            ATerm o_20 (ATerm t)
            {
              t = not_null(z_19);
              if(((y_19 != NULL) && (y_19 != t)))
                _fail(t);
              else
                y_19 = t;
              t = not_null(z_19);
              return(t);
            }
            t = (ATerm) ATinsert(ATempty, term_c_15);
            if(((z_19 != NULL) && (z_19 != t)))
              _fail(t);
            else
              z_19 = t;
            t = o_20(t);
          }
          t = b_15;
          t = SSLsetAnnotations(not_null(w_19), not_null(y_19));
          if(((a_20 != NULL) && (a_20 != t)))
            _fail(t);
          else
            a_20 = t;
          t = p_20(t);
        }
        t = not_null(v_19);
      }
    }
    return(t);
  }
  ATerm m_20 (ATerm t)
  {
    ATerm b_20 = NULL,c_20 = NULL,f_20 = NULL;
    t = not_null(p_19);
    if(((b_20 != NULL) && (b_20 != t)))
      _fail(t);
    else
      b_20 = t;
    t = not_null(q_19);
    if(((c_20 != NULL) && (c_20 != t)))
      _fail(t);
    else
      c_20 = t;
    t = not_null(p_19);
    {
      ATerm d_15;
      d_15 = t;
      {
        ATerm d_20 = NULL,e_20 = NULL;
        t = not_null(b_20);
        {
          ATerm j_1 (ATerm t)
          {
            t = term_n_9;
            return(t);
          }
          t = rewrite_1_0(j_1, t);
          if(((d_20 != NULL) && (d_20 != t)))
            _fail(t);
          else
            d_20 = t;
          t = not_null(d_20);
          if(match_cons(t, sym_Defined_1))
            {
              e_20 = ATgetArgument(t, 0);
              t = not_null(e_20);
              if(match_string(t, "h_0"))
                {
                  t = not_null(d_20);
                }
              else
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
      t = d_15;
      {
        ATerm g_20 = NULL,i_20 = NULL,k_20 = NULL;
        ATerm s_20 (ATerm t)
        {
          t = not_null(k_20);
          if(((f_20 != NULL) && (f_20 != t)))
            _fail(t);
          else
            f_20 = t;
          t = not_null(k_20);
          return(t);
        }
        ATerm e_15;
        e_15 = t;
        {
          ATerm h_20 = NULL;
          ATerm q_20 (ATerm t)
          {
            t = not_null(h_20);
            if(((g_20 != NULL) && (g_20 != t)))
              _fail(t);
            else
              g_20 = t;
            t = not_null(h_20);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_20));
          if(((h_20 != NULL) && (h_20 != t)))
            _fail(t);
          else
            h_20 = t;
          t = q_20(t);
        }
        t = e_15;
        {
          ATerm u_15;
          u_15 = t;
          {
            ATerm j_20 = NULL;
            ATerm r_20 (ATerm t)
            {
              t = not_null(j_20);
              if(((i_20 != NULL) && (i_20 != t)))
                _fail(t);
              else
                i_20 = t;
              t = not_null(j_20);
              return(t);
            }
            t = (ATerm) ATinsert(ATempty, term_v_15);
            if(((j_20 != NULL) && (j_20 != t)))
              _fail(t);
            else
              j_20 = t;
            t = r_20(t);
          }
          t = u_15;
          t = SSLsetAnnotations(not_null(g_20), not_null(i_20));
          if(((k_20 != NULL) && (k_20 != t)))
            _fail(t);
          else
            k_20 = t;
          t = s_20(t);
        }
        t = not_null(f_20);
      }
    }
    return(t);
  }
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  t = not_null(p_19);
  if(match_cons(t, sym_Var_1))
    {
      q_19 = ATgetArgument(t, 0);
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_20(t);
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            t = m_20(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm j_21 (ATerm t)
  {
    ATerm b_21 = NULL,c_21 = NULL;
    t = not_null(a_21);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = not_null(z_20);
    {
      ATerm d_21 = NULL;
      ATerm k_21 (ATerm t)
      {
        t = not_null(d_21);
        if(((c_21 != NULL) && (c_21 != t)))
          _fail(t);
        else
          c_21 = t;
        t = not_null(b_21);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm e_21 = NULL,f_21 = NULL;
            ATerm l_21 (ATerm t)
            {
              ATerm g_21 = NULL;
              t = not_null(f_21);
              if(((g_21 != NULL) && (g_21 != t)))
                _fail(t);
              else
                g_21 = t;
              t = not_null(g_21);
              return(t);
            }
            if(((e_21 != NULL) && (e_21 != t)))
              _fail(t);
            else
              e_21 = t;
            t = not_null(e_21);
            if(match_cons(t, sym_Var_1))
              {
                f_21 = ATgetArgument(t, 0);
                t = l_21(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1_0(k_1, t);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm h_21 = NULL;
              ATerm m_21 (ATerm t)
              {
                ATerm i_21 = NULL;
                t = not_null(h_21);
                if(((i_21 != NULL) && (i_21 != t)))
                  _fail(t);
                else
                  i_21 = t;
                t = not_null(h_21);
                {
                  ATerm d_16;
                  d_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_21)), term_o_16);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      t = term_n_9;
                      return(t);
                    }
                    t = assert_1_0(m_1, t);
                  }
                  t = d_16;
                }
                return(t);
              }
              if(((h_21 != NULL) && (h_21 != t)))
                _fail(t);
              else
                h_21 = t;
              t = m_21(t);
              return(t);
            }
            t = map_1_0(l_1, t);
          }
        }
        return(t);
      }
      t = not_null(b_21);
      t = alltd_1_0(MarkVar_0_0, t);
      if(((d_21 != NULL) && (d_21 != t)))
        _fail(t);
      else
        d_21 = t;
      t = k_21(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_21));
    }
    return(t);
  }
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = not_null(z_20);
  if(match_cons(t, sym_Match_1))
    {
      a_21 = ATgetArgument(t, 0);
      t = j_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0_0(t);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  {
                    ATerm o_17 = t;
                    int p_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(p_17);
                      }
                    else
                      {
                        t = o_17;
                        {
                          ATerm b_18 = t;
                          int f_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              t = choice_1_0(mark_buv_0_0, t);
                              ;
                              LocalPopChoice(f_18);
                            }
                          else
                            {
                              t = b_18;
                              {
                                ATerm g_18 = t;
                                int m_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    t = lchoice_1_0(mark_buv_0_0, t);
                                    ;
                                    LocalPopChoice(m_18);
                                  }
                                else
                                  {
                                    t = g_18;
                                    {
                                      ATerm n_18 = t;
                                      int u_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          t = guardedlchoice_1_0(mark_buv_0_0, t);
                                          ;
                                          LocalPopChoice(u_18);
                                        }
                                      else
                                        {
                                          t = n_18;
                                          t = SRTS_all(mark_buv_0_0, t);
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
ATerm Strategies_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  ATerm c_22 (ATerm t)
  {
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,y_21 = NULL;
    ATerm e_22 (ATerm t)
    {
      ATerm z_21 = NULL,a_22 = NULL;
      t = not_null(y_21);
      if(((z_21 != NULL) && (z_21 != t)))
        _fail(t);
      else
        z_21 = t;
      t = not_null(y_21);
      {
        ATerm b_22 = NULL;
        ATerm f_22 (ATerm t)
        {
          t = not_null(b_22);
          if(((a_22 != NULL) && (a_22 != t)))
            _fail(t);
          else
            a_22 = t;
          t = not_null(b_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_21)), not_null(w_21));
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = f_22(t);
        t = not_null(a_22);
      }
      return(t);
    }
    t = not_null(s_21);
    if(((u_21 != NULL) && (u_21 != t)))
      _fail(t);
    else
      u_21 = t;
    t = not_null(t_21);
    if(((v_21 != NULL) && (v_21 != t)))
      _fail(t);
    else
      v_21 = t;
    t = not_null(s_21);
    {
      ATerm x_21 = NULL;
      ATerm d_22 (ATerm t)
      {
        t = not_null(x_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = not_null(x_21);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_21));
      if(((x_21 != NULL) && (x_21 != t)))
        _fail(t);
      else
        x_21 = t;
      t = d_22(t);
      t = not_null(v_21);
      t = g_73(t);
      if(((y_21 != NULL) && (y_21 != t)))
        _fail(t);
      else
        y_21 = t;
      t = e_22(t);
    }
    return(t);
  }
  if(((s_21 != NULL) && (s_21 != t)))
    _fail(t);
  else
    s_21 = t;
  t = not_null(s_21);
  if(match_cons(t, sym_Strategies_1))
    {
      t_21 = ATgetArgument(t, 0);
      t = c_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  ATerm v_22 (ATerm t)
  {
    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,r_22 = NULL;
    ATerm x_22 (ATerm t)
    {
      ATerm s_22 = NULL,t_22 = NULL;
      t = not_null(r_22);
      if(((s_22 != NULL) && (s_22 != t)))
        _fail(t);
      else
        s_22 = t;
      t = not_null(r_22);
      {
        ATerm u_22 = NULL;
        ATerm y_22 (ATerm t)
        {
          t = not_null(u_22);
          if(((t_22 != NULL) && (t_22 != t)))
            _fail(t);
          else
            t_22 = t;
          t = not_null(u_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_22)), not_null(p_22));
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = y_22(t);
        t = not_null(t_22);
      }
      return(t);
    }
    t = not_null(l_22);
    if(((n_22 != NULL) && (n_22 != t)))
      _fail(t);
    else
      n_22 = t;
    t = not_null(m_22);
    if(((o_22 != NULL) && (o_22 != t)))
      _fail(t);
    else
      o_22 = t;
    t = not_null(l_22);
    {
      ATerm q_22 = NULL;
      ATerm w_22 (ATerm t)
      {
        t = not_null(q_22);
        if(((p_22 != NULL) && (p_22 != t)))
          _fail(t);
        else
          p_22 = t;
        t = not_null(q_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_22));
      if(((q_22 != NULL) && (q_22 != t)))
        _fail(t);
      else
        q_22 = t;
      t = w_22(t);
      t = not_null(o_22);
      t = l_73(t);
      if(((r_22 != NULL) && (r_22 != t)))
        _fail(t);
      else
        r_22 = t;
      t = x_22(t);
    }
    return(t);
  }
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = not_null(l_22);
  if(match_cons(t, sym_Specification_1))
    {
      m_22 = ATgetArgument(t, 0);
      t = v_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  t = say_1_0(n_1, t);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            t = map_1_0(mark_buv_0_0, t);
            return(t);
          }
          t = Strategies_1_0(r_1, t);
          return(t);
        }
        t = Cons_2_0(q_1, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, p_1, t);
      return(t);
    }
    t = Specification_1_0(o_1, t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_c_19;
        return(t);
      }
      t = say_1_0(s_1, t);
    }
  }
  return(t);
}
ATerm mark_fresh_vars_0_0 (ATerm t)
{
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  ATerm f_23 (ATerm t)
  {
    ATerm c_23 = NULL,d_23 = NULL;
    t = not_null(b_23);
    if(((c_23 != NULL) && (c_23 != t)))
      _fail(t);
    else
      c_23 = t;
    t = not_null(b_23);
    {
      ATerm e_23 = NULL;
      ATerm g_23 (ATerm t)
      {
        t = not_null(e_23);
        if(((d_23 != NULL) && (d_23 != t)))
          _fail(t);
        else
          d_23 = t;
        t = not_null(e_23);
        return(t);
      }
      t = new_0_0(t);
      if(((e_23 != NULL) && (e_23 != t)))
        _fail(t);
      else
        e_23 = t;
      t = g_23(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_23)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_23), (ATerm)ATempty, (ATerm)ATempty, not_null(c_23))));
    }
    return(t);
  }
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = f_23(t);
  return(t);
}
ATerm SVar_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  ATerm w_23 (ATerm t)
  {
    ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,s_23 = NULL;
    ATerm y_23 (ATerm t)
    {
      ATerm t_23 = NULL,u_23 = NULL;
      t = not_null(s_23);
      if(((t_23 != NULL) && (t_23 != t)))
        _fail(t);
      else
        t_23 = t;
      t = not_null(s_23);
      {
        ATerm v_23 = NULL;
        ATerm z_23 (ATerm t)
        {
          t = not_null(v_23);
          if(((u_23 != NULL) && (u_23 != t)))
            _fail(t);
          else
            u_23 = t;
          t = not_null(v_23);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(t_23)), not_null(q_23));
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = z_23(t);
        t = not_null(u_23);
      }
      return(t);
    }
    t = not_null(m_23);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = not_null(n_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(m_23);
    {
      ATerm r_23 = NULL;
      ATerm x_23 (ATerm t)
      {
        t = not_null(r_23);
        if(((q_23 != NULL) && (q_23 != t)))
          _fail(t);
        else
          q_23 = t;
        t = not_null(r_23);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_23));
      if(((r_23 != NULL) && (r_23 != t)))
        _fail(t);
      else
        r_23 = t;
      t = x_23(t);
      t = not_null(p_23);
      t = o_77(t);
      if(((s_23 != NULL) && (s_23 != t)))
        _fail(t);
      else
        s_23 = t;
      t = y_23(t);
    }
    return(t);
  }
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  t = not_null(m_23);
  if(match_cons(t, sym_SVar_1))
    {
      n_23 = ATgetArgument(t, 0);
      t = w_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  ATerm z_24 (ATerm t)
  {
    ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL;
    ATerm b_25 (ATerm t)
    {
      ATerm s_24 = NULL,t_24 = NULL;
      ATerm c_25 (ATerm t)
      {
        ATerm u_24 = NULL,v_24 = NULL;
        ATerm d_25 (ATerm t)
        {
          ATerm w_24 = NULL,x_24 = NULL;
          t = not_null(v_24);
          if(((w_24 != NULL) && (w_24 != t)))
            _fail(t);
          else
            w_24 = t;
          t = not_null(v_24);
          {
            ATerm y_24 = NULL;
            ATerm e_25 (ATerm t)
            {
              t = not_null(y_24);
              if(((x_24 != NULL) && (x_24 != t)))
                _fail(t);
              else
                x_24 = t;
              t = not_null(y_24);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(s_24), not_null(u_24), not_null(w_24)), not_null(p_24));
            if(((y_24 != NULL) && (y_24 != t)))
              _fail(t);
            else
              y_24 = t;
            t = e_25(t);
            t = not_null(x_24);
          }
          return(t);
        }
        t = not_null(t_24);
        if(((u_24 != NULL) && (u_24 != t)))
          _fail(t);
        else
          u_24 = t;
        t = not_null(o_24);
        t = v_77(t);
        if(((v_24 != NULL) && (v_24 != t)))
          _fail(t);
        else
          v_24 = t;
        t = d_25(t);
        return(t);
      }
      t = not_null(r_24);
      if(((s_24 != NULL) && (s_24 != t)))
        _fail(t);
      else
        s_24 = t;
      t = not_null(n_24);
      t = u_77(t);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      t = c_25(t);
      return(t);
    }
    t = not_null(h_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(i_24);
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    t = not_null(j_24);
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
    t = not_null(k_24);
    if(((o_24 != NULL) && (o_24 != t)))
      _fail(t);
    else
      o_24 = t;
    t = not_null(h_24);
    {
      ATerm q_24 = NULL;
      ATerm a_25 (ATerm t)
      {
        t = not_null(q_24);
        if(((p_24 != NULL) && (p_24 != t)))
          _fail(t);
        else
          p_24 = t;
        t = not_null(q_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_24));
      if(((q_24 != NULL) && (q_24 != t)))
        _fail(t);
      else
        q_24 = t;
      t = a_25(t);
      t = not_null(m_24);
      t = t_77(t);
      if(((r_24 != NULL) && (r_24 != t)))
        _fail(t);
      else
        r_24 = t;
      t = b_25(t);
    }
    return(t);
  }
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = not_null(h_24);
  if(match_cons(t, sym_CallT_3))
    {
      i_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
      k_24 = ATgetArgument(t, 2);
      t = z_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CreateDef1_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  ATerm u_25 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL;
    t = not_null(m_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(p_25);
    if(((s_25 != NULL) && (s_25 != t)))
      _fail(t);
    else
      s_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_25)), (ATerm)ATempty, (ATerm) ATempty), not_null(t_25));
    return(t);
  }
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = not_null(l_25);
  if(match_cons(t, sym_Let_2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      t = not_null(n_25);
      if(match_cons(t, sym_CallT_3))
        {
          o_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
          r_25 = ATgetArgument(t, 2);
          t = not_null(o_25);
          if(match_cons(t, sym_SVar_1))
            {
              p_25 = ATgetArgument(t, 0);
              t = not_null(q_25);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(r_25);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = u_25(t);
                    }
                  else
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
ATerm CallFailFun_0_0 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm y_25 (ATerm t)
  {
    t = term_f_19;
    return(t);
  }
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = not_null(x_25);
  if(match_cons(t, sym_Fail_0))
    {
      t = y_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm c_26 (ATerm t)
  {
    t = term_i_19;
    return(t);
  }
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = not_null(b_26);
  if(match_cons(t, sym_Id_0))
    {
      t = c_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  ATerm s_26 (ATerm t)
  {
    ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
    t = not_null(j_26);
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(k_26);
    if(((q_26 != NULL) && (q_26 != t)))
      _fail(t);
    else
      q_26 = t;
    t = not_null(m_26);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    t = not_null(n_26);
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_26)), not_null(o_26)), (ATerm) ATinsert(CheckATermList(not_null(r_26)), not_null(q_26)));
    return(t);
  }
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = not_null(h_26);
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      t = not_null(i_26);
      if(match_cons(t, sym__2))
        {
          j_26 = ATgetArgument(t, 0);
          k_26 = ATgetArgument(t, 1);
          t = not_null(l_26);
          if(match_cons(t, sym__2))
            {
              m_26 = ATgetArgument(t, 0);
              n_26 = ATgetArgument(t, 1);
              t = s_26(t);
            }
          else
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
ATerm UnZip3_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  ATerm a_27 (ATerm t)
  {
    ATerm y_26 = NULL,z_26 = NULL;
    t = not_null(w_26);
    if(((y_26 != NULL) && (y_26 != t)))
      _fail(t);
    else
      y_26 = t;
    t = not_null(x_26);
    if(((z_26 != NULL) && (z_26 != t)))
      _fail(t);
    else
      z_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(z_26));
    return(t);
  }
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = not_null(v_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_26 = ATgetFirst((ATermList) t);
      x_26 = (ATerm) ATgetNext((ATermList) t);
      t = a_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  ATerm e_27 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  if(((d_27 != NULL) && (d_27 != t)))
    _fail(t);
  else
    d_27 = t;
  t = not_null(d_27);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm f_27 (ATerm t)
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_103(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = b_103(t);
        t = _2_0(d_103, f_27, t);
        t = c_103(t);
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm unzip_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, k_103, t);
  return(t);
}
ATerm alltd_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm g_27 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_96(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = SRTS_all(g_27, t);
      }
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  ATerm t_31 (ATerm t)
  {
    ATerm l_29 = NULL,m_29 = NULL;
    t = not_null(i_29);
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
    t = not_null(j_29);
    if(((l_29 != NULL) && (l_29 != t)))
      _fail(t);
    else
      l_29 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_29), (ATerm)ATempty, (ATerm)ATempty, not_null(l_29))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_29)), (ATerm)ATempty, (ATerm) ATempty));
    return(t);
  }
  ATerm u_31 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
    t = not_null(i_29);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(b_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(c_29);
    if(((p_29 != NULL) && (p_29 != t)))
      _fail(t);
    else
      p_29 = t;
    t = not_null(h_29);
    {
      ATerm w_29 = NULL;
      ATerm l_32 (ATerm t)
      {
        t = not_null(w_29);
        if(((q_29 != NULL) && (q_29 != t)))
          _fail(t);
        else
          q_29 = t;
        t = not_null(w_29);
        return(t);
      }
      t = not_null(p_29);
      {
        ATerm t_1 (ATerm t)
        {
          ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
          ATerm k_32 (ATerm t)
          {
            t = not_null(t_29);
            if(((o_29 != NULL) && (o_29 != t)))
              _fail(t);
            else
              o_29 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_29)), (ATerm)ATempty, (ATerm) ATempty);
            return(t);
          }
          if(((r_29 != NULL) && (r_29 != t)))
            _fail(t);
          else
            r_29 = t;
          t = not_null(r_29);
          if(match_cons(t, sym_CallT_3))
            {
              s_29 = ATgetArgument(t, 0);
              u_29 = ATgetArgument(t, 1);
              v_29 = ATgetArgument(t, 2);
              t = not_null(s_29);
              if(match_cons(t, sym_SVar_1))
                {
                  t_29 = ATgetArgument(t, 0);
                  t = not_null(u_29);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(v_29);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = k_32(t);
                        }
                      else
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
        t = alltd_1_0(t_1, t);
        if(((w_29 != NULL) && (w_29 != t)))
          _fail(t);
        else
          w_29 = t;
        t = l_32(t);
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(n_29), (ATerm)ATempty, (ATerm)ATempty, not_null(q_29));
    }
    return(t);
  }
  ATerm v_31 (ATerm t)
  {
    ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
    t = not_null(e_29);
    if(((x_29 != NULL) && (x_29 != t)))
      _fail(t);
    else
      x_29 = t;
    t = not_null(d_29);
    if(((y_29 != NULL) && (y_29 != t)))
      _fail(t);
    else
      y_29 = t;
    t = not_null(g_29);
    if(((z_29 != NULL) && (z_29 != t)))
      _fail(t);
    else
      z_29 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_29)), not_null(z_29)));
    return(t);
  }
  ATerm w_31 (ATerm t)
  {
    ATerm a_30 = NULL,b_30 = NULL;
    t = not_null(e_29);
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    t = not_null(f_29);
    if(((b_30 != NULL) && (b_30 != t)))
      _fail(t);
    else
      b_30 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_30), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_30)));
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    ATerm c_30 = NULL;
    t = not_null(i_29);
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    t = not_null(c_30);
    return(t);
  }
  ATerm y_31 (ATerm t)
  {
    ATerm d_30 = NULL;
    t = not_null(j_29);
    if(((d_30 != NULL) && (d_30 != t)))
      _fail(t);
    else
      d_30 = t;
    t = not_null(d_30);
    return(t);
  }
  ATerm z_31 (ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
    t = not_null(i_29);
    if(((e_30 != NULL) && (e_30 != t)))
      _fail(t);
    else
      e_30 = t;
    t = not_null(f_29);
    if(((f_30 != NULL) && (f_30 != t)))
      _fail(t);
    else
      f_30 = t;
    t = not_null(g_29);
    if(((g_30 != NULL) && (g_30 != t)))
      _fail(t);
    else
      g_30 = t;
    t = not_null(h_29);
    {
      ATerm i_30 = NULL;
      ATerm m_32 (ATerm t)
      {
        t = not_null(i_30);
        if(((h_30 != NULL) && (h_30 != t)))
          _fail(t);
        else
          h_30 = t;
        t = not_null(i_30);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(f_30));
      t = conc_0_0(t);
      if(((i_30 != NULL) && (i_30 != t)))
        _fail(t);
      else
        i_30 = t;
      t = m_32(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_30), not_null(g_30));
    }
    return(t);
  }
  ATerm a_32 (ATerm t)
  {
    ATerm j_30 = NULL;
    t = not_null(j_29);
    if(((j_30 != NULL) && (j_30 != t)))
      _fail(t);
    else
      j_30 = t;
    t = not_null(j_30);
    return(t);
  }
  ATerm b_32 (ATerm t)
  {
    ATerm k_30 = NULL;
    t = not_null(i_29);
    if(((k_30 != NULL) && (k_30 != t)))
      _fail(t);
    else
      k_30 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_20, (ATerm)ATinsert(ATempty, not_null(k_30)), (ATerm) ATempty);
    return(t);
  }
  ATerm c_32 (ATerm t)
  {
    ATerm l_30 = NULL;
    t = not_null(i_29);
    if(((l_30 != NULL) && (l_30 != t)))
      _fail(t);
    else
      l_30 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_20, (ATerm)ATinsert(ATempty, not_null(l_30)), (ATerm) ATempty);
    return(t);
  }
  ATerm d_32 (ATerm t)
  {
    ATerm m_30 = NULL;
    t = not_null(i_29);
    if(((m_30 != NULL) && (m_30 != t)))
      _fail(t);
    else
      m_30 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_20, (ATerm)ATinsert(ATempty, not_null(m_30)), (ATerm) ATempty);
    return(t);
  }
  ATerm e_32 (ATerm t)
  {
    ATerm n_30 = NULL;
    t = not_null(i_29);
    if(((n_30 != NULL) && (n_30 != t)))
      _fail(t);
    else
      n_30 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_21, (ATerm)ATinsert(ATempty, not_null(n_30)), (ATerm) ATempty);
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    ATerm o_30 = NULL;
    t = not_null(i_29);
    if(((o_30 != NULL) && (o_30 != t)))
      _fail(t);
    else
      o_30 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_21, (ATerm)ATinsert(ATempty, not_null(o_30)), (ATerm) ATempty);
    return(t);
  }
  ATerm g_32 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
    t = not_null(i_29);
    if(((p_30 != NULL) && (p_30 != t)))
      _fail(t);
    else
      p_30 = t;
    t = not_null(j_29);
    if(((q_30 != NULL) && (q_30 != t)))
      _fail(t);
    else
      q_30 = t;
    t = not_null(k_29);
    if(((r_30 != NULL) && (r_30 != t)))
      _fail(t);
    else
      r_30 = t;
    t = not_null(h_29);
    {
      ATerm t_30 = NULL;
      ATerm o_32 (ATerm t)
      {
        t = not_null(t_30);
        if(((s_30 != NULL) && (s_30 != t)))
          _fail(t);
        else
          s_30 = t;
        t = not_null(t_30);
        return(t);
      }
      t = not_null(q_30);
      {
        ATerm n_32 (ATerm t)
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 (ATerm t)
              {
                ATerm g_22 = t;
                int h_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallIdFun_0_0(t);
                    ;
                    LocalPopChoice(h_22);
                  }
                else
                  {
                    t = g_22;
                    t = CallFailFun_0_0(t);
                  }
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = try_1_0(n_32, t);
                return(t);
              }
              t = Cons_2_0(u_1, v_1, t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = Cons_2_0(_id, n_32, t);
            }
          return(t);
        }
        t = n_32(t);
        if(((t_30 != NULL) && (t_30 != t)))
          _fail(t);
        else
          t_30 = t;
        t = o_32(t);
      }
      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(p_30), not_null(s_30), not_null(r_30));
    }
    return(t);
  }
  ATerm h_32 (ATerm t)
  {
    ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
    t = not_null(i_29);
    if(((u_30 != NULL) && (u_30 != t)))
      _fail(t);
    else
      u_30 = t;
    t = not_null(j_29);
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = not_null(k_29);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = not_null(h_29);
    {
      ATerm y_30 = NULL;
      ATerm q_32 (ATerm t)
      {
        t = not_null(y_30);
        if(((x_30 != NULL) && (x_30 != t)))
          _fail(t);
        else
          x_30 = t;
        t = not_null(y_30);
        return(t);
      }
      t = not_null(v_30);
      {
        ATerm p_32 (ATerm t)
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_1 (ATerm t)
              {
                ATerm k_22 = t;
                int z_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallIdFun_0_0(t);
                    ;
                    LocalPopChoice(z_22);
                  }
                else
                  {
                    t = k_22;
                    t = CallFailFun_0_0(t);
                  }
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = try_1_0(p_32, t);
                return(t);
              }
              t = Cons_2_0(w_1, x_1, t);
              ;
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              t = Cons_2_0(_id, p_32, t);
            }
          return(t);
        }
        t = p_32(t);
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = q_32(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(u_30), not_null(x_30), not_null(w_30));
    }
    return(t);
  }
  ATerm i_32 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
    t = not_null(i_29);
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = not_null(j_29);
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = not_null(k_29);
    if(((b_31 != NULL) && (b_31 != t)))
      _fail(t);
    else
      b_31 = t;
    t = not_null(h_29);
    {
      ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
      ATerm r_32 (ATerm t)
      {
        ATerm i_31 = NULL;
        ATerm s_32 (ATerm t)
        {
          t = not_null(i_31);
          if(((e_31 != NULL) && (e_31 != t)))
            _fail(t);
          else
            e_31 = t;
          t = not_null(i_31);
          {
            ATerm a_23 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_23;
              }
          }
          return(t);
        }
        t = not_null(g_31);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = not_null(h_31);
        if(((d_31 != NULL) && (d_31 != t)))
          _fail(t);
        else
          d_31 = t;
        t = not_null(d_31);
        t = concat_0_0(t);
        if(((i_31 != NULL) && (i_31 != t)))
          _fail(t);
        else
          i_31 = t;
        t = s_32(t);
        return(t);
      }
      t = not_null(a_31);
      {
        ATerm y_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CallIdFun_0_0(t);
                ;
                LocalPopChoice(i_23);
              }
            else
              {
                t = h_23;
                t = CallFailFun_0_0(t);
              }
            return(t);
          }
          t = try_1_0(z_1, t);
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CreateDef1_0_0(t);
                ;
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                {
                  ATerm l_23 = t;
                  int a_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_24 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm a_2 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = CallT_3_0(a_2, Nil_0_0, Nil_0_0, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = b_24;
                        }
                      t = CreateDef2_0_0(t);
                      ;
                      LocalPopChoice(a_24);
                    }
                  else
                    {
                      t = l_23;
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = split_2_0(_id, b_2, t);
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = unzip_1_0(y_1, t);
        if(((f_31 != NULL) && (f_31 != t)))
          _fail(t);
        else
          f_31 = t;
        t = not_null(f_31);
        if(match_cons(t, sym__2))
          {
            g_31 = ATgetArgument(t, 0);
            h_31 = ATgetArgument(t, 1);
            t = r_32(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_31), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_30), not_null(c_31), not_null(b_31)));
    }
    return(t);
  }
  ATerm j_32 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    t = not_null(i_29);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    t = not_null(j_29);
    if(((k_31 != NULL) && (k_31 != t)))
      _fail(t);
    else
      k_31 = t;
    t = not_null(k_29);
    if(((l_31 != NULL) && (l_31 != t)))
      _fail(t);
    else
      l_31 = t;
    t = not_null(h_29);
    {
      ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
      ATerm t_32 (ATerm t)
      {
        ATerm s_31 = NULL;
        ATerm u_32 (ATerm t)
        {
          t = not_null(s_31);
          if(((o_31 != NULL) && (o_31 != t)))
            _fail(t);
          else
            o_31 = t;
          t = not_null(s_31);
          {
            ATerm c_24 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_24;
              }
          }
          return(t);
        }
        t = not_null(q_31);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = not_null(r_31);
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = not_null(n_31);
        t = concat_0_0(t);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = u_32(t);
        return(t);
      }
      t = not_null(k_31);
      {
        ATerm c_2 (ATerm t)
        {
          ATerm d_2 (ATerm t)
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CallIdFun_0_0(t);
                ;
                LocalPopChoice(e_24);
              }
            else
              {
                t = d_24;
                t = CallFailFun_0_0(t);
              }
            return(t);
          }
          t = try_1_0(d_2, t);
          {
            ATerm f_24 = t;
            int g_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CreateDef1_0_0(t);
                ;
                LocalPopChoice(g_24);
              }
            else
              {
                t = f_24;
                {
                  ATerm f_25 = t;
                  int g_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_25 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm e_2 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = CallT_3_0(e_2, Nil_0_0, Nil_0_0, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = h_25;
                        }
                      t = CreateDef2_0_0(t);
                      ;
                      LocalPopChoice(g_25);
                    }
                  else
                    {
                      t = f_25;
                      {
                        ATerm f_2 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = split_2_0(_id, f_2, t);
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = unzip_1_0(c_2, t);
        if(((p_31 != NULL) && (p_31 != t)))
          _fail(t);
        else
          p_31 = t;
        t = not_null(p_31);
        if(match_cons(t, sym__2))
          {
            q_31 = ATgetArgument(t, 0);
            r_31 = ATgetArgument(t, 1);
            t = t_32(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_31), (ATerm) ATmakeAppl(sym_CallT_3, not_null(j_31), not_null(m_31), not_null(l_31)));
    }
    return(t);
  }
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  t = not_null(h_29);
  if(match_cons(t, sym_Rec_2))
    {
      i_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      t = t_31(t);
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_29 = ATgetArgument(t, 0);
          j_29 = ATgetArgument(t, 1);
          k_29 = ATgetArgument(t, 2);
          a_29 = ATgetArgument(t, 3);
          t = not_null(j_29);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(k_29);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(a_29);
                  if(match_cons(t, sym_Rec_2))
                    {
                      b_29 = ATgetArgument(t, 0);
                      c_29 = ATgetArgument(t, 1);
                      t = u_31(t);
                    }
                  else
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
          if(match_cons(t, sym_Seq_2))
            {
              i_29 = ATgetArgument(t, 0);
              j_29 = ATgetArgument(t, 1);
              t = not_null(j_29);
              if(match_cons(t, sym_Seq_2))
                {
                  f_29 = ATgetArgument(t, 0);
                  g_29 = ATgetArgument(t, 1);
                  t = not_null(i_29);
                  if(match_cons(t, sym_Where_1))
                    {
                      e_29 = ATgetArgument(t, 0);
                      t = not_null(f_29);
                      if(match_cons(t, sym_Build_1))
                        {
                          d_29 = ATgetArgument(t, 0);
                          t = v_31(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
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
                  if(match_cons(t, sym_Build_1))
                    {
                      f_29 = ATgetArgument(t, 0);
                      t = not_null(i_29);
                      if(match_cons(t, sym_Where_1))
                        {
                          e_29 = ATgetArgument(t, 0);
                          t = w_31(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_Id_0))
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
                      if(match_cons(t, sym_Id_0))
                        {
                          t = not_null(i_29);
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm i_25 = t;
                              int j_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = x_31(t);
                                  ;
                                  LocalPopChoice(j_25);
                                }
                              else
                                {
                                  t = i_25;
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
                          t = not_null(i_29);
                          if(match_cons(t, sym_Id_0))
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
              if(match_cons(t, sym_Scope_2))
                {
                  i_29 = ATgetArgument(t, 0);
                  j_29 = ATgetArgument(t, 1);
                  t = not_null(j_29);
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_29 = ATgetArgument(t, 0);
                      g_29 = ATgetArgument(t, 1);
                      t = not_null(i_29);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm k_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = z_31(t);
                              ;
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = k_25;
                              t = a_32(t);
                            }
                        }
                      else
                        {
                          t = z_31(t);
                        }
                    }
                  else
                    {
                      t = not_null(i_29);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
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
                  if(match_cons(t, sym_Thread_1))
                    {
                      i_29 = ATgetArgument(t, 0);
                      t = b_32(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_29 = ATgetArgument(t, 0);
                          t = c_32(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_29 = ATgetArgument(t, 0);
                              t = d_32(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  i_29 = ATgetArgument(t, 0);
                                  t = e_32(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      i_29 = ATgetArgument(t, 0);
                                      t = f_32(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          i_29 = ATgetArgument(t, 0);
                                          j_29 = ATgetArgument(t, 1);
                                          k_29 = ATgetArgument(t, 2);
                                          {
                                            ATerm w_25 = t;
                                            int z_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = g_32(t);
                                                ;
                                                LocalPopChoice(z_25);
                                              }
                                            else
                                              {
                                                t = w_25;
                                                t = i_32(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              i_29 = ATgetArgument(t, 0);
                                              j_29 = ATgetArgument(t, 1);
                                              k_29 = ATgetArgument(t, 2);
                                              {
                                                ATerm a_26 = t;
                                                int d_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_32(t);
                                                    ;
                                                    LocalPopChoice(d_26);
                                                  }
                                                else
                                                  {
                                                    t = a_26;
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
ATerm repeat_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm v_32 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      t = i_94(t);
      t = v_32(t);
      return(t);
    }
    t = try_1_0(g_2, t);
    return(t);
  }
  t = v_32(t);
  return(t);
}
ATerm downup2_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm t)
{
  t = l_95(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = downup2_2_0(l_95, m_95, t);
      return(t);
    }
    t = SRTS_all(h_2, t);
    t = m_95(t);
  }
  return(t);
}
ATerm _2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  ATerm q_33 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,k_33 = NULL;
    ATerm s_33 (ATerm t)
    {
      ATerm l_33 = NULL,m_33 = NULL;
      ATerm t_33 (ATerm t)
      {
        ATerm n_33 = NULL,o_33 = NULL;
        t = not_null(m_33);
        if(((n_33 != NULL) && (n_33 != t)))
          _fail(t);
        else
          n_33 = t;
        t = not_null(m_33);
        {
          ATerm p_33 = NULL;
          ATerm u_33 (ATerm t)
          {
            t = not_null(p_33);
            if(((o_33 != NULL) && (o_33 != t)))
              _fail(t);
            else
              o_33 = t;
            t = not_null(p_33);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_33), not_null(n_33)), not_null(i_33));
          if(((p_33 != NULL) && (p_33 != t)))
            _fail(t);
          else
            p_33 = t;
          t = u_33(t);
          t = not_null(o_33);
        }
        return(t);
      }
      t = not_null(k_33);
      if(((l_33 != NULL) && (l_33 != t)))
        _fail(t);
      else
        l_33 = t;
      t = not_null(h_33);
      t = u_71(t);
      if(((m_33 != NULL) && (m_33 != t)))
        _fail(t);
      else
        m_33 = t;
      t = t_33(t);
      return(t);
    }
    t = not_null(c_33);
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    t = not_null(d_33);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    t = not_null(e_33);
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = not_null(c_33);
    {
      ATerm j_33 = NULL;
      ATerm r_33 (ATerm t)
      {
        t = not_null(j_33);
        if(((i_33 != NULL) && (i_33 != t)))
          _fail(t);
        else
          i_33 = t;
        t = not_null(j_33);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_33));
      if(((j_33 != NULL) && (j_33 != t)))
        _fail(t);
      else
        j_33 = t;
      t = r_33(t);
      t = not_null(g_33);
      t = t_71(t);
      if(((k_33 != NULL) && (k_33 != t)))
        _fail(t);
      else
        k_33 = t;
      t = s_33(t);
    }
    return(t);
  }
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = not_null(c_33);
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
      t = q_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_26;
  e_26 = t;
  {
    ATerm w_33 = NULL;
    ATerm x_33 = NULL;
    ATerm y_33 (ATerm t)
    {
      t = not_null(x_33);
      if(((w_33 != NULL) && (w_33 != t)))
        _fail(t);
      else
        w_33 = t;
      t = not_null(x_33);
      return(t);
    }
    t = term_k_14;
    t = whoami_0_0(t);
    if(((x_33 != NULL) && (x_33 != t)))
      _fail(t);
    else
      x_33 = t;
    t = y_33(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_26), not_null(w_33)), term_f_26));
    t = printnl_0_0(t);
    t = term_t_26;
    t = exit_0_0(t);
  }
  t = e_26;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  ATerm g_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL;
    t = not_null(c_34);
    if(((e_34 != NULL) && (e_34 != t)))
      _fail(t);
    else
      e_34 = t;
    t = not_null(d_34);
    if(((f_34 != NULL) && (f_34 != t)))
      _fail(t);
    else
      f_34 = t;
    t = not_null(b_34);
    {
      ATerm u_26;
      u_26 = t;
      t = SSL_printnl(not_null(e_34), not_null(f_34));
      t = u_26;
    }
    return(t);
  }
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  t = not_null(b_34);
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
      t = g_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm k_34 (ATerm t)
  {
    ATerm j_34 = NULL;
    t = not_null(i_34);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = not_null(i_34);
    t = SSL_implode_string(not_null(j_34));
    return(t);
  }
  if(((i_34 != NULL) && (i_34 != t)))
    _fail(t);
  else
    i_34 = t;
  t = k_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
        ATerm n_36 (ATerm t)
        {
          ATerm q_34 = NULL,r_34 = NULL;
          t = not_null(o_34);
          if(((q_34 != NULL) && (q_34 != t)))
            _fail(t);
          else
            q_34 = t;
          t = not_null(p_34);
          if(((r_34 != NULL) && (r_34 != t)))
            _fail(t);
          else
            r_34 = t;
          t = not_null(q_34);
          {
            ATerm i_2 (ATerm t)
            {
              t = not_null(r_34);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(i_2, t);
          }
          return(t);
        }
        if(((n_34 != NULL) && (n_34 != t)))
          _fail(t);
        else
          n_34 = t;
        t = not_null(n_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_34 = ATgetFirst((ATermList) t);
            p_34 = (ATerm) ATgetNext((ATermList) t);
            t = n_36(t);
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
  ATerm t_36 = NULL;
  ATerm b_37 (ATerm t)
  {
    ATerm u_36 = NULL,v_36 = NULL;
    t = not_null(t_36);
    if(((u_36 != NULL) && (u_36 != t)))
      _fail(t);
    else
      u_36 = t;
    t = not_null(t_36);
    {
      ATerm w_36 = NULL;
      ATerm c_37 (ATerm t)
      {
        ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
        ATerm d_37 (ATerm t)
        {
          t = not_null(a_37);
          if(((v_36 != NULL) && (v_36 != t)))
            _fail(t);
          else
            v_36 = t;
          t = not_null(y_36);
          return(t);
        }
        t = not_null(w_36);
        if(((x_36 != NULL) && (x_36 != t)))
          _fail(t);
        else
          x_36 = t;
        t = not_null(w_36);
        t = SSL_explode_term(not_null(x_36));
        if(((y_36 != NULL) && (y_36 != t)))
          _fail(t);
        else
          y_36 = t;
        t = not_null(y_36);
        if(match_cons(t, sym__2))
          {
            z_36 = ATgetArgument(t, 0);
            a_37 = ATgetArgument(t, 1);
            t = not_null(z_36);
            if(match_string(t, ""))
              {
                t = d_37(t);
              }
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
      t = not_null(u_36);
      if(((w_36 != NULL) && (w_36 != t)))
        _fail(t);
      else
        w_36 = t;
      t = c_37(t);
      t = not_null(v_36);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((t_36 != NULL) && (t_36 != t)))
    _fail(t);
  else
    t_36 = t;
  t = b_37(t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm e_37 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_37, t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = Nil_0_0(t);
        t = n_101(t);
      }
    return(t);
  }
  t = e_37(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  ATerm m_37 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL;
    t = not_null(i_37);
    if(((l_37 != NULL) && (l_37 != t)))
      _fail(t);
    else
      l_37 = t;
    t = not_null(j_37);
    if(((k_37 != NULL) && (k_37 != t)))
      _fail(t);
    else
      k_37 = t;
    t = not_null(l_37);
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(k_37);
        return(t);
      }
      t = at_end_1_0(j_2, t);
    }
    return(t);
  }
  if(((h_37 != NULL) && (h_37 != t)))
    _fail(t);
  else
    h_37 = t;
  t = not_null(h_37);
  if(match_cons(t, sym__2))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
      t = m_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_37 = NULL;
  ATerm q_37 (ATerm t)
  {
    ATerm p_37 = NULL;
    t = not_null(o_37);
    if(((p_37 != NULL) && (p_37 != t)))
      _fail(t);
    else
      p_37 = t;
    t = not_null(o_37);
    t = SSL_explode_string(not_null(p_37));
    return(t);
  }
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  t = q_37(t);
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
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_2, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
              ATerm n_38 (ATerm t)
              {
                ATerm f_38 = NULL;
                t = not_null(d_38);
                if(((f_38 != NULL) && (f_38 != t)))
                  _fail(t);
                else
                  f_38 = t;
                t = not_null(f_38);
                return(t);
              }
              ATerm o_38 (ATerm t)
              {
                ATerm g_38 = NULL;
                t = not_null(d_38);
                if(((g_38 != NULL) && (g_38 != t)))
                  _fail(t);
                else
                  g_38 = t;
                t = not_null(g_38);
                {
                  ATerm p_27 = t;
                  int q_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_27);
                    }
                  else
                    {
                      t = p_27;
                      {
                        ATerm l_2 (ATerm t)
                        {
                          t = term_r_27;
                          return(t);
                        }
                        t = debug_1_0(l_2, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm u_38 (ATerm t)
              {
                ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,l_38 = NULL;
                t = not_null(d_38);
                if(((h_38 != NULL) && (h_38 != t)))
                  _fail(t);
                else
                  h_38 = t;
                t = not_null(e_38);
                if(((i_38 != NULL) && (i_38 != t)))
                  _fail(t);
                else
                  i_38 = t;
                t = not_null(c_38);
                {
                  ATerm s_27;
                  s_27 = t;
                  {
                    ATerm k_38 = NULL;
                    ATerm v_38 (ATerm t)
                    {
                      t = not_null(k_38);
                      if(((j_38 != NULL) && (j_38 != t)))
                        _fail(t);
                      else
                        j_38 = t;
                      t = not_null(k_38);
                      return(t);
                    }
                    t = not_null(h_38);
                    t = eval_config_0_0(t);
                    if(((k_38 != NULL) && (k_38 != t)))
                      _fail(t);
                    else
                      k_38 = t;
                    t = v_38(t);
                  }
                  t = s_27;
                  {
                    ATerm m_38 = NULL;
                    ATerm w_38 (ATerm t)
                    {
                      t = not_null(m_38);
                      if(((l_38 != NULL) && (l_38 != t)))
                        _fail(t);
                      else
                        l_38 = t;
                      t = not_null(m_38);
                      return(t);
                    }
                    t = not_null(i_38);
                    t = eval_config_0_0(t);
                    if(((m_38 != NULL) && (m_38 != t)))
                      _fail(t);
                    else
                      m_38 = t;
                    t = w_38(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(l_38));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((c_38 != NULL) && (c_38 != t)))
                _fail(t);
              else
                c_38 = t;
              t = not_null(c_38);
              if(match_cons(t, sym_Path_1))
                {
                  d_38 = ATgetArgument(t, 0);
                  t = n_38(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_38 = ATgetArgument(t, 0);
                      t = o_38(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_38 = ATgetArgument(t, 0);
                          e_38 = ATgetArgument(t, 1);
                          t = u_38(t);
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
  ATerm z_38 = NULL;
  ATerm d_39 (ATerm t)
  {
    ATerm a_39 = NULL;
    t = not_null(z_38);
    if(((a_39 != NULL) && (a_39 != t)))
      _fail(t);
    else
      a_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_27, not_null(a_39));
    t = table_get_0_0(t);
    {
      ATerm m_2 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm u_27;
          u_27 = t;
          {
            ATerm b_39 = NULL;
            ATerm c_39 = NULL;
            ATerm e_39 (ATerm t)
            {
              t = not_null(c_39);
              if(((b_39 != NULL) && (b_39 != t)))
                _fail(t);
              else
                b_39 = t;
              t = not_null(c_39);
              return(t);
            }
            if(((c_39 != NULL) && (c_39 != t)))
              _fail(t);
            else
              c_39 = t;
            t = e_39(t);
            t = (ATerm) ATmakeAppl(sym__3, term_t_27, not_null(a_39), not_null(b_39));
            t = table_put_0_0(t);
          }
          t = u_27;
        }
        return(t);
      }
      t = try_1_0(m_2, t);
    }
    return(t);
  }
  if(((z_38 != NULL) && (z_38 != t)))
    _fail(t);
  else
    z_38 = t;
  t = d_39(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm v_27;
    v_27 = t;
    {
      ATerm g_39 = NULL;
      ATerm h_39 = NULL;
      ATerm i_39 (ATerm t)
      {
        t = not_null(h_39);
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = not_null(h_39);
        return(t);
      }
      t = term_w_27;
      t = get_config_0_0(t);
      if(((h_39 != NULL) && (h_39 != t)))
        _fail(t);
      else
        h_39 = t;
      t = i_39(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), term_x_27);
      t = geq_0_0(t);
    }
    t = v_27;
    t = e_114(t);
    return(t);
  }
  t = try_1_0(n_2, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  ATerm v_39 (ATerm t)
  {
    ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
    t = not_null(o_39);
    if(((r_39 != NULL) && (r_39 != t)))
      _fail(t);
    else
      r_39 = t;
    t = not_null(q_39);
    if(((s_39 != NULL) && (s_39 != t)))
      _fail(t);
    else
      s_39 = t;
    t = not_null(n_39);
    t = SSL_fputc(not_null(r_39), not_null(s_39));
    {
      ATerm u_39 = NULL;
      ATerm w_39 (ATerm t)
      {
        t = not_null(u_39);
        if(((t_39 != NULL) && (t_39 != t)))
          _fail(t);
        else
          t_39 = t;
        t = not_null(u_39);
        return(t);
      }
      if(((u_39 != NULL) && (u_39 != t)))
        _fail(t);
      else
        u_39 = t;
      t = w_39(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_39));
    }
    return(t);
  }
  if(((n_39 != NULL) && (n_39 != t)))
    _fail(t);
  else
    n_39 = t;
  t = not_null(n_39);
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      t = not_null(p_39);
      if(match_cons(t, sym_Stream_1))
        {
          q_39 = ATgetArgument(t, 0);
          t = v_39(t);
        }
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
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  ATerm j_40 (ATerm t)
  {
    ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
    t = not_null(d_40);
    if(((f_40 != NULL) && (f_40 != t)))
      _fail(t);
    else
      f_40 = t;
    t = not_null(e_40);
    if(((g_40 != NULL) && (g_40 != t)))
      _fail(t);
    else
      g_40 = t;
    t = not_null(b_40);
    t = SSL_write_term_to_stream_text(not_null(f_40), not_null(g_40));
    {
      ATerm i_40 = NULL;
      ATerm k_40 (ATerm t)
      {
        t = not_null(i_40);
        if(((h_40 != NULL) && (h_40 != t)))
          _fail(t);
        else
          h_40 = t;
        t = not_null(i_40);
        return(t);
      }
      if(((i_40 != NULL) && (i_40 != t)))
        _fail(t);
      else
        i_40 = t;
      t = k_40(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_40));
    }
    return(t);
  }
  if(((b_40 != NULL) && (b_40 != t)))
    _fail(t);
  else
    b_40 = t;
  t = not_null(b_40);
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
      t = not_null(c_40);
      if(match_cons(t, sym_Stream_1))
        {
          d_40 = ATgetArgument(t, 0);
          t = j_40(t);
        }
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
  ATerm o_2 (ATerm t)
  {
    ATerm m_40 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm n_40 = NULL;
      ATerm o_40 (ATerm t)
      {
        t = not_null(n_40);
        if(((m_40 != NULL) && (m_40 != t)))
          _fail(t);
        else
          m_40 = t;
        t = not_null(n_40);
        return(t);
      }
      if(((n_40 != NULL) && (n_40 != t)))
        _fail(t);
      else
        n_40 = t;
      t = o_40(t);
      t = (ATerm) ATmakeAppl(sym__2, term_y_27, not_null(m_40));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  ATerm b_41 (ATerm t)
  {
    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
    t = not_null(v_40);
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(w_40);
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    t = not_null(t_40);
    t = SSL_write_term_to_stream_baf(not_null(x_40), not_null(y_40));
    {
      ATerm a_41 = NULL;
      ATerm c_41 (ATerm t)
      {
        t = not_null(a_41);
        if(((z_40 != NULL) && (z_40 != t)))
          _fail(t);
        else
          z_40 = t;
        t = not_null(a_41);
        return(t);
      }
      if(((a_41 != NULL) && (a_41 != t)))
        _fail(t);
      else
        a_41 = t;
      t = c_41(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_40));
    }
    return(t);
  }
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  t = not_null(t_40);
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      t = not_null(u_40);
      if(match_cons(t, sym_Stream_1))
        {
          v_40 = ATgetArgument(t, 0);
          t = b_41(t);
        }
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
ATerm WriteToFile_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  ATerm w_41 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,u_41 = NULL;
    t = not_null(o_41);
    if(((q_41 != NULL) && (q_41 != t)))
      _fail(t);
    else
      q_41 = t;
    t = not_null(p_41);
    if(((r_41 != NULL) && (r_41 != t)))
      _fail(t);
    else
      r_41 = t;
    t = not_null(q_41);
    {
      ATerm t_41 = NULL;
      ATerm x_41 (ATerm t)
      {
        t = not_null(t_41);
        if(((s_41 != NULL) && (s_41 != t)))
          _fail(t);
        else
          s_41 = t;
        t = not_null(t_41);
        return(t);
      }
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = x_41(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), term_z_27);
      t = open_stream_0_0(t);
      {
        ATerm v_41 = NULL;
        ATerm y_41 (ATerm t)
        {
          t = not_null(v_41);
          if(((u_41 != NULL) && (u_41 != t)))
            _fail(t);
          else
            u_41 = t;
          t = not_null(v_41);
          return(t);
        }
        if(((v_41 != NULL) && (v_41 != t)))
          _fail(t);
        else
          v_41 = t;
        t = y_41(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_41), not_null(r_41));
        t = a_113(t);
        t = fclose_0_0(t);
        t = not_null(r_41);
      }
    }
    return(t);
  }
  if(((n_41 != NULL) && (n_41 != t)))
    _fail(t);
  else
    n_41 = t;
  t = not_null(n_41);
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
      t = w_41(t);
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
  ATerm d_42 = NULL;
  ATerm a_28;
  a_28 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm e_42 = NULL,f_42 = NULL;
            ATerm i_42 (ATerm t)
            {
              t = not_null(f_42);
              if(((d_42 != NULL) && (d_42 != t)))
                _fail(t);
              else
                d_42 = t;
              t = not_null(e_42);
              return(t);
            }
            if(((e_42 != NULL) && (e_42 != t)))
              _fail(t);
            else
              e_42 = t;
            t = not_null(e_42);
            if(match_cons(t, sym_Output_1))
              {
                f_42 = ATgetArgument(t, 0);
                t = i_42(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(q_2, t);
          ;
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          {
            ATerm g_42 = NULL;
            ATerm j_42 (ATerm t)
            {
              t = not_null(g_42);
              if(((d_42 != NULL) && (d_42 != t)))
                _fail(t);
              else
                d_42 = t;
              t = not_null(g_42);
              return(t);
            }
            t = term_d_28;
            if(((g_42 != NULL) && (g_42 != t)))
              _fail(t);
            else
              g_42 = t;
            t = j_42(t);
          }
        }
      return(t);
    }
    t = _2_0(p_2, _id, t);
  }
  t = a_28;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(d_42);
        return(t);
      }
      t = split_2_0(s_2, _id, t);
      return(t);
    }
    t = _2_0(_id, r_2, t);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm h_42 = NULL;
              if(((h_42 != NULL) && (h_42 != t)))
                _fail(t);
              else
                h_42 = t;
              t = not_null(h_42);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(h_42);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(u_2, t);
            return(t);
          }
          t = _2_0(t_2, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
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
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  ATerm v_42 (ATerm t)
  {
    ATerm s_42 = NULL,t_42 = NULL;
    t = not_null(q_42);
    if(((s_42 != NULL) && (s_42 != t)))
      _fail(t);
    else
      s_42 = t;
    t = not_null(r_42);
    if(((t_42 != NULL) && (t_42 != t)))
      _fail(t);
    else
      t_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_42))), not_null(t_42));
    return(t);
  }
  ATerm g_28;
  g_28 = t;
  t = dtime_0_0(t);
  t = g_28;
  t = c_116(t);
  {
    ATerm h_28;
    h_28 = t;
    {
      ATerm o_42 = NULL;
      ATerm u_42 (ATerm t)
      {
        t = not_null(o_42);
        if(((n_42 != NULL) && (n_42 != t)))
          _fail(t);
        else
          n_42 = t;
        t = not_null(o_42);
        return(t);
      }
      t = dtime_0_0(t);
      if(((o_42 != NULL) && (o_42 != t)))
        _fail(t);
      else
        o_42 = t;
      t = u_42(t);
    }
    t = h_28;
    if(((p_42 != NULL) && (p_42 != t)))
      _fail(t);
    else
      p_42 = t;
    t = not_null(p_42);
    if(match_cons(t, sym__2))
      {
        q_42 = ATgetArgument(t, 0);
        r_42 = ATgetArgument(t, 1);
        t = v_42(t);
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
  ATerm z_42 = NULL,a_43 = NULL;
  ATerm k_43 (ATerm t)
  {
    ATerm b_43 = NULL;
    t = not_null(z_42);
    if(((b_43 != NULL) && (b_43 != t)))
      _fail(t);
    else
      b_43 = t;
    t = not_null(a_43);
    t = SSL_fclose(not_null(b_43));
    return(t);
  }
  ATerm l_43 (ATerm t)
  {
    ATerm j_43 = NULL;
    t = not_null(a_43);
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    t = not_null(a_43);
    t = SSL_fclose(not_null(j_43));
    return(t);
  }
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = not_null(a_43);
  if(match_cons(t, sym_Stream_1))
    {
      z_42 = ATgetArgument(t, 0);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_43(t);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  ATerm r_43 (ATerm t)
  {
    ATerm q_43 = NULL;
    t = not_null(p_43);
    if(((q_43 != NULL) && (q_43 != t)))
      _fail(t);
    else
      q_43 = t;
    t = not_null(o_43);
    t = SSL_read_term_from_stream(not_null(q_43));
    return(t);
  }
  if(((o_43 != NULL) && (o_43 != t)))
    _fail(t);
  else
    o_43 = t;
  t = not_null(o_43);
  if(match_cons(t, sym_Stream_1))
    {
      p_43 = ATgetArgument(t, 0);
      t = r_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm k_28;
  k_28 = t;
  {
    ATerm u_43 = NULL,w_43 = NULL;
    ATerm l_28;
    l_28 = t;
    {
      ATerm v_43 = NULL;
      ATerm y_43 (ATerm t)
      {
        t = not_null(v_43);
        if(((u_43 != NULL) && (u_43 != t)))
          _fail(t);
        else
          u_43 = t;
        t = not_null(v_43);
        return(t);
      }
      t = m_112(t);
      if(((v_43 != NULL) && (v_43 != t)))
        _fail(t);
      else
        v_43 = t;
      t = y_43(t);
    }
    t = l_28;
    {
      ATerm x_43 = NULL;
      ATerm z_43 (ATerm t)
      {
        t = not_null(x_43);
        if(((w_43 != NULL) && (w_43 != t)))
          _fail(t);
        else
          w_43 = t;
        t = not_null(x_43);
        return(t);
      }
      if(((x_43 != NULL) && (x_43 != t)))
        _fail(t);
      else
        x_43 = t;
      t = z_43(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_43)), not_null(u_43)));
      t = printnl_0_0(t);
    }
  }
  t = k_28;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  ATerm o_44 (ATerm t)
  {
    ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
    t = not_null(i_44);
    if(((k_44 != NULL) && (k_44 != t)))
      _fail(t);
    else
      k_44 = t;
    t = not_null(j_44);
    if(((l_44 != NULL) && (l_44 != t)))
      _fail(t);
    else
      l_44 = t;
    t = not_null(h_44);
    t = SSL_fopen(not_null(k_44), not_null(l_44));
    {
      ATerm n_44 = NULL;
      ATerm p_44 (ATerm t)
      {
        t = not_null(n_44);
        if(((m_44 != NULL) && (m_44 != t)))
          _fail(t);
        else
          m_44 = t;
        t = not_null(n_44);
        return(t);
      }
      if(((n_44 != NULL) && (n_44 != t)))
        _fail(t);
      else
        n_44 = t;
      t = p_44(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_44));
    }
    return(t);
  }
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = not_null(h_44);
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
      t = o_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm r_44 = NULL;
  ATerm t_44 (ATerm t)
  {
    ATerm s_44 = NULL;
    t = not_null(r_44);
    if(((s_44 != NULL) && (s_44 != t)))
      _fail(t);
    else
      s_44 = t;
    t = not_null(r_44);
    t = SSL_is_string(not_null(s_44));
    return(t);
  }
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = t_44(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_44 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_44 = NULL;
    ATerm x_44 (ATerm t)
    {
      t = not_null(w_44);
      if(((v_44 != NULL) && (v_44 != t)))
        _fail(t);
      else
        v_44 = t;
      t = not_null(w_44);
      return(t);
    }
    if(((w_44 != NULL) && (w_44 != t)))
      _fail(t);
    else
      w_44 = t;
    t = x_44(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_44));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_44 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm a_45 = NULL;
    ATerm b_45 (ATerm t)
    {
      t = not_null(a_45);
      if(((z_44 != NULL) && (z_44 != t)))
        _fail(t);
      else
        z_44 = t;
      t = not_null(a_45);
      return(t);
    }
    if(((a_45 != NULL) && (a_45 != t)))
      _fail(t);
    else
      a_45 = t;
    t = b_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_44));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm e_45 = NULL;
    ATerm f_45 (ATerm t)
    {
      t = not_null(e_45);
      if(((d_45 != NULL) && (d_45 != t)))
        _fail(t);
      else
        d_45 = t;
      t = not_null(e_45);
      return(t);
    }
    if(((e_45 != NULL) && (e_45 != t)))
      _fail(t);
    else
      e_45 = t;
    t = f_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_45));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  ATerm l_45 (ATerm t)
  {
    t = not_null(k_45);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm m_45 (ATerm t)
  {
    t = not_null(k_45);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm n_45 (ATerm t)
  {
    t = not_null(k_45);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((k_45 != NULL) && (k_45 != t)))
    _fail(t);
  else
    k_45 = t;
  t = not_null(k_45);
  if(match_cons(t, sym_stderr_0))
    {
      t = l_45(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_45(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = n_45(t);
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
  ATerm w_45 = NULL;
  ATerm h_46 (ATerm t)
  {
    ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
    t = not_null(w_45);
    if(((x_45 != NULL) && (x_45 != t)))
      _fail(t);
    else
      x_45 = t;
    t = not_null(w_45);
    {
      ATerm a_46 = NULL;
      ATerm i_46 (ATerm t)
      {
        ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
        ATerm j_46 (ATerm t)
        {
          t = not_null(f_46);
          if(((z_45 != NULL) && (z_45 != t)))
            _fail(t);
          else
            z_45 = t;
          t = not_null(g_46);
          if(((y_45 != NULL) && (y_45 != t)))
            _fail(t);
          else
            y_45 = t;
          t = not_null(c_46);
          return(t);
        }
        t = not_null(a_46);
        if(((b_46 != NULL) && (b_46 != t)))
          _fail(t);
        else
          b_46 = t;
        t = not_null(a_46);
        t = SSL_explode_term(not_null(b_46));
        if(((c_46 != NULL) && (c_46 != t)))
          _fail(t);
        else
          c_46 = t;
        t = not_null(c_46);
        if(match_cons(t, sym__2))
          {
            d_46 = ATgetArgument(t, 0);
            e_46 = ATgetArgument(t, 1);
            t = not_null(d_46);
            if(match_string(t, ""))
              {
                t = not_null(e_46);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_46 = ATgetFirst((ATermList) t);
                    g_46 = (ATerm) ATgetNext((ATermList) t);
                    t = j_46(t);
                  }
                else
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
      t = not_null(x_45);
      if(((a_46 != NULL) && (a_46 != t)))
        _fail(t);
      else
        a_46 = t;
      t = i_46(t);
      t = not_null(z_45);
    }
    return(t);
  }
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = h_46(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  ATerm u_46 (ATerm t)
  {
    t = not_null(o_46);
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm r_46 = NULL,s_46 = NULL;
                  ATerm v_46 (ATerm t)
                  {
                    ATerm t_46 = NULL;
                    t = not_null(s_46);
                    if(((t_46 != NULL) && (t_46 != t)))
                      _fail(t);
                    else
                      t_46 = t;
                    t = not_null(t_46);
                    return(t);
                  }
                  if(((r_46 != NULL) && (r_46 != t)))
                    _fail(t);
                  else
                    r_46 = t;
                  t = not_null(r_46);
                  if(match_cons(t, sym_Path_1))
                    {
                      s_46 = ATgetArgument(t, 0);
                      t = v_46(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(v_2, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((o_46 != NULL) && (o_46 != t)))
    _fail(t);
  else
    o_46 = t;
  t = not_null(o_46);
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
      t = u_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_47 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_46 = NULL;
      ATerm z_46 = NULL;
      ATerm c_47 (ATerm t)
      {
        t = not_null(z_46);
        if(((y_46 != NULL) && (y_46 != t)))
          _fail(t);
        else
          y_46 = t;
        t = not_null(z_46);
        return(t);
      }
      if(((z_46 != NULL) && (z_46 != t)))
        _fail(t);
      else
        z_46 = t;
      t = c_47(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_46), term_s_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_t_28;
          return(t);
        }
        t = debug_1_0(w_2, t);
        _fail(t);
      }
    }
  {
    ATerm u_28;
    u_28 = t;
    {
      ATerm b_47 = NULL;
      ATerm d_47 (ATerm t)
      {
        t = not_null(b_47);
        if(((a_47 != NULL) && (a_47 != t)))
          _fail(t);
        else
          a_47 = t;
        t = not_null(b_47);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = d_47(t);
    }
    t = u_28;
    t = fclose_0_0(t);
    t = not_null(a_47);
  }
  return(t);
}
ATerm split_2_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,i_47 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm h_47 = NULL;
    ATerm k_47 (ATerm t)
    {
      t = not_null(h_47);
      if(((g_47 != NULL) && (g_47 != t)))
        _fail(t);
      else
        g_47 = t;
      t = not_null(h_47);
      return(t);
    }
    t = n_108(t);
    if(((h_47 != NULL) && (h_47 != t)))
      _fail(t);
    else
      h_47 = t;
    t = k_47(t);
  }
  t = v_28;
  {
    ATerm j_47 = NULL;
    ATerm l_47 (ATerm t)
    {
      t = not_null(j_47);
      if(((i_47 != NULL) && (i_47 != t)))
        _fail(t);
      else
        i_47 = t;
      t = not_null(j_47);
      return(t);
    }
    t = o_108(t);
    if(((j_47 != NULL) && (j_47 != t)))
      _fail(t);
    else
      j_47 = t;
    t = l_47(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), not_null(i_47));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm p_47 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm q_47 = NULL,r_47 = NULL;
          ATerm t_47 (ATerm t)
          {
            t = not_null(r_47);
            if(((p_47 != NULL) && (p_47 != t)))
              _fail(t);
            else
              p_47 = t;
            t = not_null(q_47);
            return(t);
          }
          if(((q_47 != NULL) && (q_47 != t)))
            _fail(t);
          else
            q_47 = t;
          t = not_null(q_47);
          if(match_cons(t, sym_Input_1))
            {
              r_47 = ATgetArgument(t, 0);
              t = t_47(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(x_2, t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm s_47 = NULL;
          ATerm u_47 (ATerm t)
          {
            t = not_null(s_47);
            if(((p_47 != NULL) && (p_47 != t)))
              _fail(t);
            else
              p_47 = t;
            t = not_null(s_47);
            return(t);
          }
          t = term_z_28;
          if(((s_47 != NULL) && (s_47 != t)))
            _fail(t);
          else
            s_47 = t;
          t = u_47(t);
        }
      }
  }
  t = w_28;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(p_47);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, y_2, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_47 = NULL;
    if(((x_47 != NULL) && (x_47 != t)))
      _fail(t);
    else
      x_47 = t;
    t = not_null(x_47);
    if(match_string(t, "-k"))
      {
        t = not_null(x_47);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(x_47);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm w_32;
    w_32 = t;
    {
      ATerm y_47 = NULL;
      ATerm z_47 = NULL;
      ATerm a_48 (ATerm t)
      {
        t = not_null(z_47);
        if(((y_47 != NULL) && (y_47 != t)))
          _fail(t);
        else
          y_47 = t;
        t = not_null(z_47);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((z_47 != NULL) && (z_47 != t)))
        _fail(t);
      else
        z_47 = t;
      t = a_48(t);
      t = (ATerm) ATmakeAppl(sym__2, term_x_32, not_null(y_47));
      t = set_config_0_0(t);
    }
    t = w_32;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_y_32;
    return(t);
  }
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm c_48 = NULL;
  ATerm e_48 (ATerm t)
  {
    ATerm d_48 = NULL;
    t = not_null(c_48);
    if(((d_48 != NULL) && (d_48 != t)))
      _fail(t);
    else
      d_48 = t;
    t = not_null(c_48);
    t = SSL_string_to_int(not_null(d_48));
    return(t);
  }
  if(((c_48 != NULL) && (c_48 != t)))
    _fail(t);
  else
    c_48 = t;
  t = e_48(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm k_48 = NULL;
        if(((k_48 != NULL) && (k_48 != t)))
          _fail(t);
        else
          k_48 = t;
        t = not_null(k_48);
        if(match_string(t, "-S"))
          {
            t = not_null(k_48);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(k_48);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_v_33;
        t = set_config_0_0(t);
        t = term_z_33;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_a_34;
        return(t);
      }
      t = Option_3_0(c_3, d_3, e_3, t);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
        ATerm h_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm l_48 = NULL;
              if(((l_48 != NULL) && (l_48 != t)))
                _fail(t);
              else
                l_48 = t;
              t = not_null(l_48);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(l_48);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm o_48 = NULL;
              ATerm m_34;
              m_34 = t;
              {
                ATerm m_48 = NULL;
                ATerm n_48 = NULL;
                ATerm r_48 (ATerm t)
                {
                  t = not_null(n_48);
                  if(((m_48 != NULL) && (m_48 != t)))
                    _fail(t);
                  else
                    m_48 = t;
                  t = not_null(n_48);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((n_48 != NULL) && (n_48 != t)))
                  _fail(t);
                else
                  n_48 = t;
                t = r_48(t);
                t = (ATerm) ATmakeAppl(sym__2, term_w_27, not_null(m_48));
                t = set_config_0_0(t);
              }
              t = m_34;
              {
                ATerm p_48 = NULL;
                ATerm s_48 (ATerm t)
                {
                  t = not_null(p_48);
                  if(((o_48 != NULL) && (o_48 != t)))
                    _fail(t);
                  else
                    o_48 = t;
                  t = not_null(p_48);
                  return(t);
                }
                if(((p_48 != NULL) && (p_48 != t)))
                  _fail(t);
                else
                  p_48 = t;
                t = s_48(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_48));
              }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_s_34;
              return(t);
            }
            t = ArgOption_3_0(f_3, i_3, j_3, t);
            ;
            LocalPopChoice(l_34);
          }
        else
          {
            t = h_34;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm q_48 = NULL;
                if(((q_48 != NULL) && (q_48 != t)))
                  _fail(t);
                else
                  q_48 = t;
                t = not_null(q_48);
                if(match_string(t, "-s"))
                  {
                    t = not_null(q_48);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_u_34;
                t = set_config_0_0(t);
                t = term_v_34;
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_w_34;
                return(t);
              }
              t = Option_3_0(k_3, l_3, m_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm w_48 = NULL;
    if(((w_48 != NULL) && (w_48 != t)))
      _fail(t);
    else
      w_48 = t;
    t = not_null(w_48);
    if(match_string(t, "-o"))
      {
        t = not_null(w_48);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(w_48);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm z_48 = NULL;
    ATerm z_34;
    z_34 = t;
    {
      ATerm x_48 = NULL;
      ATerm y_48 = NULL;
      ATerm b_49 (ATerm t)
      {
        t = not_null(y_48);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = not_null(y_48);
        return(t);
      }
      if(((y_48 != NULL) && (y_48 != t)))
        _fail(t);
      else
        y_48 = t;
      t = b_49(t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_35, not_null(x_48));
      t = set_config_0_0(t);
    }
    t = z_34;
    {
      ATerm a_49 = NULL;
      ATerm c_49 (ATerm t)
      {
        t = not_null(a_49);
        if(((z_48 != NULL) && (z_48 != t)))
          _fail(t);
        else
          z_48 = t;
        t = not_null(a_49);
        return(t);
      }
      if(((a_49 != NULL) && (a_49 != t)))
        _fail(t);
      else
        a_49 = t;
      t = c_49(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_48));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_b_35;
    return(t);
  }
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm e_49 = NULL;
          if(((e_49 != NULL) && (e_49 != t)))
            _fail(t);
          else
            e_49 = t;
          t = not_null(e_49);
          if(match_string(t, "-b"))
            {
              t = not_null(e_49);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_f_35;
          t = set_config_0_0(t);
          t = term_g_35;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_h_35;
          return(t);
        }
        t = Option_3_0(q_3, r_3, s_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  ATerm u_49 (ATerm t)
  {
    t = not_null(k_49);
    t = register_usage_1_0(l_0, t);
    return(t);
  }
  ATerm v_49 (ATerm t)
  {
    ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
    t = not_null(l_49);
    if(((p_49 != NULL) && (p_49 != t)))
      _fail(t);
    else
      p_49 = t;
    t = not_null(n_49);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = not_null(o_49);
    if(((r_49 != NULL) && (r_49 != t)))
      _fail(t);
    else
      r_49 = t;
    t = not_null(k_49);
    {
      ATerm i_35;
      i_35 = t;
      t = not_null(p_49);
      t = i_0(t);
      t = i_35;
      {
        ATerm t_49 = NULL;
        ATerm w_49 (ATerm t)
        {
          t = not_null(t_49);
          if(((s_49 != NULL) && (s_49 != t)))
            _fail(t);
          else
            s_49 = t;
          t = not_null(t_49);
          return(t);
        }
        t = not_null(q_49);
        t = k_0(t);
        if(((t_49 != NULL) && (t_49 != t)))
          _fail(t);
        else
          t_49 = t;
        t = w_49(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), not_null(s_49));
      }
    }
    return(t);
  }
  if(((k_49 != NULL) && (k_49 != t)))
    _fail(t);
  else
    k_49 = t;
  t = not_null(k_49);
  if(match_string(t, "register-usage-info"))
    {
      t = u_49(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          m_49 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_49);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_49 = ATgetFirst((ATermList) t);
              o_49 = (ATerm) ATgetNext((ATermList) t);
              t = v_49(t);
            }
          else
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
  ATerm t_3 (ATerm t)
  {
    ATerm a_50 = NULL;
    if(((a_50 != NULL) && (a_50 != t)))
      _fail(t);
    else
      a_50 = t;
    t = not_null(a_50);
    if(match_string(t, "-i"))
      {
        t = not_null(a_50);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(a_50);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm d_50 = NULL;
    ATerm j_35;
    j_35 = t;
    {
      ATerm b_50 = NULL;
      ATerm c_50 = NULL;
      ATerm f_50 (ATerm t)
      {
        t = not_null(c_50);
        if(((b_50 != NULL) && (b_50 != t)))
          _fail(t);
        else
          b_50 = t;
        t = not_null(c_50);
        return(t);
      }
      if(((c_50 != NULL) && (c_50 != t)))
        _fail(t);
      else
        c_50 = t;
      t = f_50(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_35, not_null(b_50));
      t = set_config_0_0(t);
    }
    t = j_35;
    {
      ATerm e_50 = NULL;
      ATerm g_50 (ATerm t)
      {
        t = not_null(e_50);
        if(((d_50 != NULL) && (d_50 != t)))
          _fail(t);
        else
          d_50 = t;
        t = not_null(e_50);
        return(t);
      }
      if(((e_50 != NULL) && (e_50 != t)))
        _fail(t);
      else
        e_50 = t;
      t = g_50(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_50));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_l_35;
    return(t);
  }
  t = ArgOption_3_0(t_3, u_3, w_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_50 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm j_50 = NULL;
    ATerm k_50 (ATerm t)
    {
      t = not_null(j_50);
      if(((i_50 != NULL) && (i_50 != t)))
        _fail(t);
      else
        i_50 = t;
      t = not_null(j_50);
      return(t);
    }
    t = term_k_14;
    t = whoami_0_0(t);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = k_50(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_35), not_null(i_50)));
    t = printnl_0_0(t);
    t = term_t_26;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  ATerm o_50 (ATerm t)
  {
    ATerm n_50 = NULL;
    t = not_null(m_50);
    if(((n_50 != NULL) && (n_50 != t)))
      _fail(t);
    else
      n_50 = t;
    t = not_null(m_50);
    t = SSL_TicksToSeconds(not_null(n_50));
    return(t);
  }
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  t = o_50(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm r_50 = NULL,v_50 = NULL,y_50 = NULL;
  ATerm b_51 (ATerm t)
  {
    ATerm z_50 = NULL,a_51 = NULL;
    t = not_null(v_50);
    if(((z_50 != NULL) && (z_50 != t)))
      _fail(t);
    else
      z_50 = t;
    t = not_null(y_50);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = not_null(r_50);
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(z_50), not_null(a_51));
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          t = SSL_addr(not_null(z_50), not_null(a_51));
        }
    }
    return(t);
  }
  if(((r_50 != NULL) && (r_50 != t)))
    _fail(t);
  else
    r_50 = t;
  t = not_null(r_50);
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
      t = b_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = y_106(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
        ATerm m_51 (ATerm t)
        {
          ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
          t = not_null(g_51);
          if(((i_51 != NULL) && (i_51 != t)))
            _fail(t);
          else
            i_51 = t;
          t = not_null(h_51);
          if(((j_51 != NULL) && (j_51 != t)))
            _fail(t);
          else
            j_51 = t;
          t = not_null(f_51);
          {
            ATerm l_51 = NULL;
            ATerm n_51 (ATerm t)
            {
              t = not_null(l_51);
              if(((k_51 != NULL) && (k_51 != t)))
                _fail(t);
              else
                k_51 = t;
              t = not_null(l_51);
              return(t);
            }
            t = not_null(j_51);
            t = foldr_2_0(y_106, z_106, t);
            if(((l_51 != NULL) && (l_51 != t)))
              _fail(t);
            else
              l_51 = t;
            t = n_51(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_51), not_null(k_51));
            t = z_106(t);
          }
          return(t);
        }
        if(((f_51 != NULL) && (f_51 != t)))
          _fail(t);
        else
          f_51 = t;
        t = not_null(f_51);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_51 = ATgetFirst((ATermList) t);
            h_51 = (ATerm) ATgetNext((ATermList) t);
            t = m_51(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t)
{
  ATerm s_51 = NULL;
  ATerm a_52 (ATerm t)
  {
    ATerm t_51 = NULL,u_51 = NULL;
    t = not_null(s_51);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(s_51);
    {
      ATerm v_51 = NULL;
      ATerm b_52 (ATerm t)
      {
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
        ATerm c_52 (ATerm t)
        {
          t = not_null(z_51);
          if(((u_51 != NULL) && (u_51 != t)))
            _fail(t);
          else
            u_51 = t;
          t = not_null(x_51);
          return(t);
        }
        t = not_null(v_51);
        if(((w_51 != NULL) && (w_51 != t)))
          _fail(t);
        else
          w_51 = t;
        t = not_null(v_51);
        t = SSL_explode_term(not_null(w_51));
        if(((x_51 != NULL) && (x_51 != t)))
          _fail(t);
        else
          x_51 = t;
        t = not_null(x_51);
        if(match_cons(t, sym__2))
          {
            y_51 = ATgetArgument(t, 0);
            z_51 = ATgetArgument(t, 1);
            t = c_52(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(t_51);
      if(((v_51 != NULL) && (v_51 != t)))
        _fail(t);
      else
        v_51 = t;
      t = b_52(t);
      t = not_null(u_51);
      t = foldr_2_0(r_110, s_110, t);
    }
    return(t);
  }
  if(((s_51 != NULL) && (s_51 != t)))
    _fail(t);
  else
    s_51 = t;
  t = a_52(t);
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
    ATerm x_3 (ATerm t)
    {
      t = term_b_33;
      return(t);
    }
    t = crush_2_0(x_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  ATerm k_52 (ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL;
    t = not_null(g_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(h_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(f_52);
    {
      ATerm w_35;
      w_35 = t;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(i_52), not_null(j_52));
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            t = SSL_gtr(not_null(i_52), not_null(j_52));
          }
      }
      t = w_35;
    }
    return(t);
  }
  if(((f_52 != NULL) && (f_52 != t)))
    _fail(t);
  else
    f_52 = t;
  t = not_null(f_52);
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
      t = k_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_52 = NULL;
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
      ATerm s_52 (ATerm t)
      {
        t = not_null(q_52);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = not_null(r_52);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = not_null(p_52);
        return(t);
      }
      if(((p_52 != NULL) && (p_52 != t)))
        _fail(t);
      else
        p_52 = t;
      t = not_null(p_52);
      if(match_cons(t, sym__2))
        {
          q_52 = ATgetArgument(t, 0);
          r_52 = ATgetArgument(t, 1);
          t = s_52(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_114 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm b_36;
    b_36 = t;
    {
      ATerm w_52 = NULL;
      ATerm x_52 = NULL;
      ATerm y_52 (ATerm t)
      {
        t = not_null(x_52);
        if(((w_52 != NULL) && (w_52 != t)))
          _fail(t);
        else
          w_52 = t;
        t = not_null(x_52);
        return(t);
      }
      t = term_w_27;
      t = get_config_0_0(t);
      if(((x_52 != NULL) && (x_52 != t)))
        _fail(t);
      else
        x_52 = t;
      t = y_52(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), term_t_26);
      t = geq_0_0(t);
    }
    t = b_36;
    t = d_114(t);
    return(t);
  }
  t = try_1_0(y_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm b_53 = NULL,d_53 = NULL;
    ATerm c_36;
    c_36 = t;
    {
      ATerm c_53 = NULL;
      ATerm f_53 (ATerm t)
      {
        t = not_null(c_53);
        if(((b_53 != NULL) && (b_53 != t)))
          _fail(t);
        else
          b_53 = t;
        t = not_null(c_53);
        return(t);
      }
      t = run_time_0_0(t);
      if(((c_53 != NULL) && (c_53 != t)))
        _fail(t);
      else
        c_53 = t;
      t = f_53(t);
    }
    t = c_36;
    {
      ATerm e_53 = NULL;
      ATerm g_53 (ATerm t)
      {
        t = not_null(e_53);
        if(((d_53 != NULL) && (d_53 != t)))
          _fail(t);
        else
          d_53 = t;
        t = not_null(e_53);
        return(t);
      }
      t = term_k_14;
      t = whoami_0_0(t);
      if(((e_53 != NULL) && (e_53 != t)))
        _fail(t);
      else
        e_53 = t;
      t = g_53(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_36), not_null(b_53)), term_d_36), not_null(d_53)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(z_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_b_33;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm l_53 = NULL;
  ATerm r_53 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,p_53 = NULL;
    t = not_null(l_53);
    if(((m_53 != NULL) && (m_53 != t)))
      _fail(t);
    else
      m_53 = t;
    t = not_null(l_53);
    {
      ATerm f_36;
      f_36 = t;
      {
        ATerm o_53 = NULL;
        ATerm s_53 (ATerm t)
        {
          t = not_null(o_53);
          if(((n_53 != NULL) && (n_53 != t)))
            _fail(t);
          else
            n_53 = t;
          t = not_null(o_53);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_53));
        if(((o_53 != NULL) && (o_53 != t)))
          _fail(t);
        else
          o_53 = t;
        t = s_53(t);
      }
      t = f_36;
      {
        ATerm q_53 = NULL;
        ATerm v_53 (ATerm t)
        {
          t = not_null(q_53);
          if(((p_53 != NULL) && (p_53 != t)))
            _fail(t);
          else
            p_53 = t;
          t = not_null(q_53);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_53));
        if(((q_53 != NULL) && (q_53 != t)))
          _fail(t);
        else
          q_53 = t;
        t = v_53(t);
        t = not_null(p_53);
      }
    }
    return(t);
  }
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  t = not_null(l_53);
  if(match_cons(t, sym_Version_0))
    {
      t = r_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                ATerm l_36 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_36);
                  }
                else
                  {
                    t = l_36;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(a_4, t);
      }
    }
  t = a_117(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_53 = NULL;
  ATerm a_54 (ATerm t)
  {
    ATerm y_53 = NULL;
    t = not_null(x_53);
    if(((y_53 != NULL) && (y_53 != t)))
      _fail(t);
    else
      y_53 = t;
    t = not_null(x_53);
    t = SSL_table_create(not_null(y_53));
    return(t);
  }
  if(((x_53 != NULL) && (x_53 != t)))
    _fail(t);
  else
    x_53 = t;
  t = a_54(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm e_54 (ATerm t)
  {
    ATerm d_54 = NULL;
    t = not_null(c_54);
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(c_54);
    {
      ATerm o_36;
      o_36 = t;
      t = term_p_36;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_p_36, term_q_36, not_null(d_54));
      t = table_put_0_0(t);
      t = o_36;
    }
    return(t);
  }
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = e_54(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_54 = NULL;
  ATerm i_54 (ATerm t)
  {
    ATerm h_54 = NULL;
    t = not_null(g_54);
    if(((h_54 != NULL) && (h_54 != t)))
      _fail(t);
    else
      h_54 = t;
    t = not_null(g_54);
    t = SSL_table_destroy(not_null(h_54));
    return(t);
  }
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  t = i_54(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm k_54 = NULL;
  ATerm m_54 (ATerm t)
  {
    ATerm l_54 = NULL;
    t = not_null(k_54);
    if(((l_54 != NULL) && (l_54 != t)))
      _fail(t);
    else
      l_54 = t;
    t = not_null(k_54);
    t = SSL_exit(not_null(l_54));
    return(t);
  }
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  t = m_54(t);
  return(t);
}
ATerm long_description_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm n_54 (ATerm t)
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = Cons_2_0(x_100, n_54, t);
      }
    return(t);
  }
  t = n_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  ATerm f_55 (ATerm t)
  {
    ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
    t = not_null(u_54);
    if(((x_54 != NULL) && (x_54 != t)))
      _fail(t);
    else
      x_54 = t;
    t = not_null(v_54);
    if(((y_54 != NULL) && (y_54 != t)))
      _fail(t);
    else
      y_54 = t;
    t = not_null(y_54);
    {
      ATerm f_37;
      f_37 = t;
      {
        ATerm a_55 = NULL,c_55 = NULL,e_55 = NULL;
        ATerm p_55 (ATerm t)
        {
          t = not_null(e_55);
          if(((z_54 != NULL) && (z_54 != t)))
            _fail(t);
          else
            z_54 = t;
          t = not_null(e_55);
          return(t);
        }
        ATerm g_37;
        g_37 = t;
        {
          ATerm b_55 = NULL;
          ATerm h_55 (ATerm t)
          {
            t = not_null(b_55);
            if(((a_55 != NULL) && (a_55 != t)))
              _fail(t);
            else
              a_55 = t;
            t = not_null(b_55);
            return(t);
          }
          t = g_0(t);
          if(((b_55 != NULL) && (b_55 != t)))
            _fail(t);
          else
            b_55 = t;
          t = h_55(t);
        }
        t = g_37;
        {
          ATerm d_55 = NULL;
          ATerm i_55 (ATerm t)
          {
            t = not_null(d_55);
            if(((c_55 != NULL) && (c_55 != t)))
              _fail(t);
            else
              c_55 = t;
            t = not_null(d_55);
            return(t);
          }
          t = not_null(x_54);
          t = f_0(t);
          if(((d_55 != NULL) && (d_55 != t)))
            _fail(t);
          else
            d_55 = t;
          t = i_55(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(a_55)), not_null(c_55));
          if(((e_55 != NULL) && (e_55 != t)))
            _fail(t);
          else
            e_55 = t;
          t = p_55(t);
        }
      }
      t = f_37;
      {
        ATerm b_4 (ATerm t)
        {
          t = not_null(z_54);
          return(t);
        }
        t = reverse_acc_2_0(f_0, b_4, t);
      }
    }
    return(t);
  }
  ATerm g_55 (ATerm t)
  {
    t = term_k_14;
    t = g_0(t);
    return(t);
  }
  if(((w_54 != NULL) && (w_54 != t)))
    _fail(t);
  else
    w_54 = t;
  t = not_null(w_54);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_54 = ATgetFirst((ATermList) t);
      v_54 = (ATerm) ATgetNext((ATermList) t);
      t = f_55(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_55(t);
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, c_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  ATerm f_56 (ATerm t)
  {
    ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,b_56 = NULL;
    ATerm h_56 (ATerm t)
    {
      ATerm c_56 = NULL,d_56 = NULL;
      t = not_null(b_56);
      if(((c_56 != NULL) && (c_56 != t)))
        _fail(t);
      else
        c_56 = t;
      t = not_null(b_56);
      {
        ATerm e_56 = NULL;
        ATerm i_56 (ATerm t)
        {
          t = not_null(e_56);
          if(((d_56 != NULL) && (d_56 != t)))
            _fail(t);
          else
            d_56 = t;
          t = not_null(e_56);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_56)), not_null(z_55));
        if(((e_56 != NULL) && (e_56 != t)))
          _fail(t);
        else
          e_56 = t;
        t = i_56(t);
        t = not_null(d_56);
      }
      return(t);
    }
    t = not_null(v_55);
    if(((x_55 != NULL) && (x_55 != t)))
      _fail(t);
    else
      x_55 = t;
    t = not_null(w_55);
    if(((y_55 != NULL) && (y_55 != t)))
      _fail(t);
    else
      y_55 = t;
    t = not_null(v_55);
    {
      ATerm a_56 = NULL;
      ATerm g_56 (ATerm t)
      {
        t = not_null(a_56);
        if(((z_55 != NULL) && (z_55 != t)))
          _fail(t);
        else
          z_55 = t;
        t = not_null(a_56);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_55));
      if(((a_56 != NULL) && (a_56 != t)))
        _fail(t);
      else
        a_56 = t;
      t = g_56(t);
      t = not_null(y_55);
      t = u_81(t);
      if(((b_56 != NULL) && (b_56 != t)))
        _fail(t);
      else
        b_56 = t;
      t = h_56(t);
    }
    return(t);
  }
  if(((v_55 != NULL) && (v_55 != t)))
    _fail(t);
  else
    v_55 = t;
  t = not_null(v_55);
  if(match_cons(t, sym_Program_1))
    {
      w_55 = ATgetArgument(t, 0);
      t = f_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_56 = NULL;
  ATerm n_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL;
      ATerm u_56 (ATerm t)
      {
        t = not_null(o_56);
        if(((n_56 != NULL) && (n_56 != t)))
          _fail(t);
        else
          n_56 = t;
        t = not_null(o_56);
        return(t);
      }
      t = term_r_35;
      t = get_config_0_0(t);
      if(((o_56 != NULL) && (o_56 != t)))
        _fail(t);
      else
        o_56 = t;
      t = u_56(t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = n_37;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm e_4 (ATerm t)
          {
            ATerm p_56 = NULL;
            ATerm v_56 (ATerm t)
            {
              t = not_null(p_56);
              if(((n_56 != NULL) && (n_56 != t)))
                _fail(t);
              else
                n_56 = t;
              t = not_null(p_56);
              return(t);
            }
            if(((p_56 != NULL) && (p_56 != t)))
              _fail(t);
            else
              p_56 = t;
            t = v_56(t);
            return(t);
          }
          t = Program_1_0(e_4, t);
          return(t);
        }
        t = option_defined_1_0(d_4, t);
      }
    }
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(n_56);
        return(t);
      }
      t = short_description_1_0(g_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(f_4, t);
    t = term_s_37;
    t = echo_0_0(t);
    t = term_v_37;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm h_4 (ATerm t)
      {
        ATerm q_56 = NULL;
        ATerm r_56 = NULL;
        ATerm w_56 (ATerm t)
        {
          t = not_null(r_56);
          if(((q_56 != NULL) && (q_56 != t)))
            _fail(t);
          else
            q_56 = t;
          t = not_null(r_56);
          return(t);
        }
        if(((r_56 != NULL) && (r_56 != t)))
          _fail(t);
        else
          r_56 = t;
        t = w_56(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_56)), term_w_37);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(h_4, t);
      {
        ATerm i_4 (ATerm t)
        {
          ATerm s_56 = NULL;
          ATerm t_56 = NULL;
          ATerm x_56 (ATerm t)
          {
            t = not_null(t_56);
            if(((s_56 != NULL) && (s_56 != t)))
              _fail(t);
            else
              s_56 = t;
            t = not_null(t_56);
            return(t);
          }
          ATerm j_4 (ATerm t)
          {
            t = not_null(n_56);
            return(t);
          }
          t = long_description_1_0(j_4, t);
          if(((t_56 != NULL) && (t_56 != t)))
            _fail(t);
          else
            t_56 = t;
          t = x_56(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(s_56)), term_x_37);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(i_4, t);
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
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  ATerm n_57 (ATerm t)
  {
    ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL;
    ATerm p_57 (ATerm t)
    {
      ATerm k_57 = NULL,l_57 = NULL;
      t = not_null(j_57);
      if(((k_57 != NULL) && (k_57 != t)))
        _fail(t);
      else
        k_57 = t;
      t = not_null(j_57);
      {
        ATerm m_57 = NULL;
        ATerm q_57 (ATerm t)
        {
          t = not_null(m_57);
          if(((l_57 != NULL) && (l_57 != t)))
            _fail(t);
          else
            l_57 = t;
          t = not_null(m_57);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_57)), not_null(h_57));
        if(((m_57 != NULL) && (m_57 != t)))
          _fail(t);
        else
          m_57 = t;
        t = q_57(t);
        t = not_null(l_57);
      }
      return(t);
    }
    t = not_null(d_57);
    if(((f_57 != NULL) && (f_57 != t)))
      _fail(t);
    else
      f_57 = t;
    t = not_null(e_57);
    if(((g_57 != NULL) && (g_57 != t)))
      _fail(t);
    else
      g_57 = t;
    t = not_null(d_57);
    {
      ATerm i_57 = NULL;
      ATerm o_57 (ATerm t)
      {
        t = not_null(i_57);
        if(((h_57 != NULL) && (h_57 != t)))
          _fail(t);
        else
          h_57 = t;
        t = not_null(i_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_57));
      if(((i_57 != NULL) && (i_57 != t)))
        _fail(t);
      else
        i_57 = t;
      t = o_57(t);
      t = not_null(g_57);
      t = v_81(t);
      if(((j_57 != NULL) && (j_57 != t)))
        _fail(t);
      else
        j_57 = t;
      t = p_57(t);
    }
    return(t);
  }
  if(((d_57 != NULL) && (d_57 != t)))
    _fail(t);
  else
    d_57 = t;
  t = not_null(d_57);
  if(match_cons(t, sym_Undefined_1))
    {
      e_57 = ATgetArgument(t, 0);
      t = n_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm r_57 (ATerm t)
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_101, _id, t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        t = Cons_2_0(_id, r_57, t);
      }
    return(t);
  }
  t = r_57(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  t = fetch_1_0(a_118, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  if(((t_57 != NULL) && (t_57 != t)))
    _fail(t);
  else
    t_57 = t;
  t = not_null(t_57);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(t_57);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_57 = ATgetFirst((ATermList) t);
          v_57 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(t_57);
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
  ATerm p_38;
  p_38 = t;
  {
    ATerm y_57 = NULL;
    ATerm b_58 = NULL;
    ATerm d_58 (ATerm t)
    {
      t = not_null(b_58);
      if(((y_57 != NULL) && (y_57 != t)))
        _fail(t);
      else
        y_57 = t;
      t = not_null(b_58);
      return(t);
    }
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        {
          ATerm z_57 = NULL;
          ATerm a_58 = NULL;
          ATerm c_58 (ATerm t)
          {
            t = not_null(a_58);
            if(((z_57 != NULL) && (z_57 != t)))
              _fail(t);
            else
              z_57 = t;
            t = not_null(a_58);
            return(t);
          }
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
          t = c_58(t);
          t = (ATerm) ATinsert(ATempty, not_null(z_57));
        }
      }
    if(((b_58 != NULL) && (b_58 != t)))
      _fail(t);
    else
      b_58 = t;
    t = d_58(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(y_57));
    t = printnl_0_0(t);
  }
  t = p_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_35;
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
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm i_58 = NULL;
  ATerm o_58 (ATerm t)
  {
    ATerm j_58 = NULL,k_58 = NULL,m_58 = NULL;
    t = not_null(i_58);
    if(((j_58 != NULL) && (j_58 != t)))
      _fail(t);
    else
      j_58 = t;
    t = not_null(i_58);
    {
      ATerm x_38;
      x_38 = t;
      {
        ATerm l_58 = NULL;
        ATerm p_58 (ATerm t)
        {
          t = not_null(l_58);
          if(((k_58 != NULL) && (k_58 != t)))
            _fail(t);
          else
            k_58 = t;
          t = not_null(l_58);
          return(t);
        }
        t = SSLgetAnnotations(not_null(j_58));
        if(((l_58 != NULL) && (l_58 != t)))
          _fail(t);
        else
          l_58 = t;
        t = p_58(t);
      }
      t = x_38;
      {
        ATerm n_58 = NULL;
        ATerm q_58 (ATerm t)
        {
          t = not_null(n_58);
          if(((m_58 != NULL) && (m_58 != t)))
            _fail(t);
          else
            m_58 = t;
          t = not_null(n_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_58));
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = q_58(t);
        t = not_null(m_58);
      }
    }
    return(t);
  }
  if(((i_58 != NULL) && (i_58 != t)))
    _fail(t);
  else
    i_58 = t;
  t = not_null(i_58);
  if(match_cons(t, sym_Help_0))
    {
      t = o_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm y_38 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_93(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        ATerm c_59 = NULL;
        if(((c_59 != NULL) && (c_59 != t)))
          _fail(t);
        else
          c_59 = t;
        t = not_null(c_59);
        if(match_string(t, "--about"))
          {
            t = not_null(c_59);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_m_39;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_x_39;
        return(t);
      }
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm d_59 = NULL;
          if(((d_59 != NULL) && (d_59 != t)))
            _fail(t);
          else
            d_59 = t;
          t = not_null(d_59);
          if(match_string(t, "--version"))
            {
              t = not_null(d_59);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_m_39;
          t = set_config_0_0(t);
          t = term_z_39;
          t = set_config_0_0(t);
          t = term_a_40;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_l_40;
          return(t);
        }
        t = Option_3_0(n_4, o_4, p_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  ATerm l_59 (ATerm t)
  {
    ATerm j_59 = NULL,k_59 = NULL;
    t = not_null(h_59);
    if(((j_59 != NULL) && (j_59 != t)))
      _fail(t);
    else
      j_59 = t;
    t = not_null(i_59);
    if(((k_59 != NULL) && (k_59 != t)))
      _fail(t);
    else
      k_59 = t;
    t = not_null(g_59);
    t = SSL_table_get(not_null(j_59), not_null(k_59));
    return(t);
  }
  if(((g_59 != NULL) && (g_59 != t)))
    _fail(t);
  else
    g_59 = t;
  t = not_null(g_59);
  if(match_cons(t, sym__2))
    {
      h_59 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
      t = l_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  ATerm y_59 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
    t = not_null(q_59);
    if(((u_59 != NULL) && (u_59 != t)))
      _fail(t);
    else
      u_59 = t;
    t = not_null(r_59);
    if(((v_59 != NULL) && (v_59 != t)))
      _fail(t);
    else
      v_59 = t;
    t = not_null(s_59);
    if(((t_59 != NULL) && (t_59 != t)))
      _fail(t);
    else
      t_59 = t;
    t = not_null(p_59);
    {
      ATerm p_40;
      p_40 = t;
      {
        ATerm w_59 = NULL;
        ATerm x_59 = NULL;
        ATerm z_59 (ATerm t)
        {
          t = not_null(x_59);
          if(((w_59 != NULL) && (w_59 != t)))
            _fail(t);
          else
            w_59 = t;
          t = not_null(x_59);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), not_null(v_59));
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              t = (ATerm) ATempty;
            }
          if(((x_59 != NULL) && (x_59 != t)))
            _fail(t);
          else
            x_59 = t;
          t = z_59(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_59), not_null(v_59), (ATerm) ATinsert(CheckATermList(not_null(w_59)), not_null(t_59)));
        t = table_put_0_0(t);
      }
      t = p_40;
    }
    return(t);
  }
  if(((p_59 != NULL) && (p_59 != t)))
    _fail(t);
  else
    p_59 = t;
  t = not_null(p_59);
  if(match_cons(t, sym__3))
    {
      q_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
      s_59 = ATgetArgument(t, 2);
      t = y_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm d_60 = NULL;
  ATerm e_60 = NULL;
  ATerm f_60 (ATerm t)
  {
    t = not_null(e_60);
    if(((d_60 != NULL) && (d_60 != t)))
      _fail(t);
    else
      d_60 = t;
    t = not_null(e_60);
    return(t);
  }
  t = term_k_14;
  t = f_119(t);
  if(((e_60 != NULL) && (e_60 != t)))
    _fail(t);
  else
    e_60 = t;
  t = f_60(t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_37, term_u_37, not_null(d_60));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  ATerm w_60 (ATerm t)
  {
    t = not_null(p_60);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm x_60 (ATerm t)
  {
    ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
    t = not_null(q_60);
    if(((s_60 != NULL) && (s_60 != t)))
      _fail(t);
    else
      s_60 = t;
    t = not_null(r_60);
    if(((t_60 != NULL) && (t_60 != t)))
      _fail(t);
    else
      t_60 = t;
    t = not_null(p_60);
    {
      ATerm s_40;
      s_40 = t;
      t = not_null(s_60);
      t = a_0(t);
      t = s_40;
      {
        ATerm v_60 = NULL;
        ATerm y_60 (ATerm t)
        {
          t = not_null(v_60);
          if(((u_60 != NULL) && (u_60 != t)))
            _fail(t);
          else
            u_60 = t;
          t = not_null(v_60);
          return(t);
        }
        t = term_k_14;
        t = b_0(t);
        if(((v_60 != NULL) && (v_60 != t)))
          _fail(t);
        else
          v_60 = t;
        t = y_60(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(t_60)), not_null(u_60));
      }
    }
    return(t);
  }
  if(((p_60 != NULL) && (p_60 != t)))
    _fail(t);
  else
    p_60 = t;
  t = not_null(p_60);
  if(match_string(t, "register-usage-info"))
    {
      t = w_60(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_60 = ATgetFirst((ATermList) t);
          r_60 = (ATerm) ATgetNext((ATermList) t);
          t = x_60(t);
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
  ATerm o_5 (ATerm t)
  {
    ATerm a_61 = NULL;
    if(((a_61 != NULL) && (a_61 != t)))
      _fail(t);
    else
      a_61 = t;
    t = not_null(a_61);
    if(match_string(t, "--help"))
      {
        t = not_null(a_61);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(a_61);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(a_61);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_d_41;
    t = set_config_0_0(t);
    t = term_e_41;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_f_41;
    return(t);
  }
  t = Option_3_0(o_5, p_5, q_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  ATerm j_61 (ATerm t)
  {
    ATerm h_61 = NULL,i_61 = NULL;
    t = not_null(f_61);
    if(((h_61 != NULL) && (h_61 != t)))
      _fail(t);
    else
      h_61 = t;
    t = not_null(g_61);
    if(((i_61 != NULL) && (i_61 != t)))
      _fail(t);
    else
      i_61 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(i_61)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_61)));
    return(t);
  }
  if(((e_61 != NULL) && (e_61 != t)))
    _fail(t);
  else
    e_61 = t;
  t = not_null(e_61);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_61 = ATgetFirst((ATermList) t);
      g_61 = (ATerm) ATgetNext((ATermList) t);
      t = j_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,y_61 = NULL;
  ATerm l_62 (ATerm t)
  {
    ATerm z_61 = NULL,a_62 = NULL,c_62 = NULL,d_62 = NULL,f_62 = NULL;
    ATerm n_62 (ATerm t)
    {
      ATerm g_62 = NULL,h_62 = NULL;
      ATerm o_62 (ATerm t)
      {
        ATerm i_62 = NULL,j_62 = NULL;
        t = not_null(h_62);
        if(((i_62 != NULL) && (i_62 != t)))
          _fail(t);
        else
          i_62 = t;
        t = not_null(h_62);
        {
          ATerm k_62 = NULL;
          ATerm p_62 (ATerm t)
          {
            t = not_null(k_62);
            if(((j_62 != NULL) && (j_62 != t)))
              _fail(t);
            else
              j_62 = t;
            t = not_null(k_62);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_62)), not_null(g_62)), not_null(d_62));
          if(((k_62 != NULL) && (k_62 != t)))
            _fail(t);
          else
            k_62 = t;
          t = p_62(t);
          t = not_null(j_62);
        }
        return(t);
      }
      t = not_null(f_62);
      if(((g_62 != NULL) && (g_62 != t)))
        _fail(t);
      else
        g_62 = t;
      t = not_null(c_62);
      t = d_73(t);
      if(((h_62 != NULL) && (h_62 != t)))
        _fail(t);
      else
        h_62 = t;
      t = o_62(t);
      return(t);
    }
    t = not_null(q_61);
    if(((z_61 != NULL) && (z_61 != t)))
      _fail(t);
    else
      z_61 = t;
    t = not_null(r_61);
    if(((a_62 != NULL) && (a_62 != t)))
      _fail(t);
    else
      a_62 = t;
    t = not_null(y_61);
    if(((c_62 != NULL) && (c_62 != t)))
      _fail(t);
    else
      c_62 = t;
    t = not_null(q_61);
    {
      ATerm e_62 = NULL;
      ATerm m_62 (ATerm t)
      {
        t = not_null(e_62);
        if(((d_62 != NULL) && (d_62 != t)))
          _fail(t);
        else
          d_62 = t;
        t = not_null(e_62);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_61));
      if(((e_62 != NULL) && (e_62 != t)))
        _fail(t);
      else
        e_62 = t;
      t = m_62(t);
      t = not_null(a_62);
      t = c_73(t);
      if(((f_62 != NULL) && (f_62 != t)))
        _fail(t);
      else
        f_62 = t;
      t = n_62(t);
    }
    return(t);
  }
  if(((q_61 != NULL) && (q_61 != t)))
    _fail(t);
  else
    q_61 = t;
  t = not_null(q_61);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_61 = ATgetFirst((ATermList) t);
      y_61 = (ATerm) ATgetNext((ATermList) t);
      t = l_62(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm u_62 = NULL;
  ATerm a_63 (ATerm t)
  {
    ATerm v_62 = NULL,w_62 = NULL,y_62 = NULL;
    t = not_null(u_62);
    if(((v_62 != NULL) && (v_62 != t)))
      _fail(t);
    else
      v_62 = t;
    t = not_null(u_62);
    {
      ATerm g_41;
      g_41 = t;
      {
        ATerm x_62 = NULL;
        ATerm b_63 (ATerm t)
        {
          t = not_null(x_62);
          if(((w_62 != NULL) && (w_62 != t)))
            _fail(t);
          else
            w_62 = t;
          t = not_null(x_62);
          return(t);
        }
        t = SSLgetAnnotations(not_null(v_62));
        if(((x_62 != NULL) && (x_62 != t)))
          _fail(t);
        else
          x_62 = t;
        t = b_63(t);
      }
      t = g_41;
      {
        ATerm z_62 = NULL;
        ATerm c_63 (ATerm t)
        {
          t = not_null(z_62);
          if(((y_62 != NULL) && (y_62 != t)))
            _fail(t);
          else
            y_62 = t;
          t = not_null(z_62);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(w_62));
        if(((z_62 != NULL) && (z_62 != t)))
          _fail(t);
        else
          z_62 = t;
        t = c_63(t);
        t = not_null(y_62);
      }
    }
    return(t);
  }
  if(((u_62 != NULL) && (u_62 != t)))
    _fail(t);
  else
    u_62 = t;
  t = not_null(u_62);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
  ATerm k_63 (ATerm t)
  {
    ATerm i_63 = NULL,j_63 = NULL;
    t = not_null(g_63);
    if(((i_63 != NULL) && (i_63 != t)))
      _fail(t);
    else
      i_63 = t;
    t = not_null(h_63);
    if(((j_63 != NULL) && (j_63 != t)))
      _fail(t);
    else
      j_63 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_t_27, not_null(i_63), not_null(j_63));
    t = table_put_0_0(t);
    return(t);
  }
  if(((f_63 != NULL) && (f_63 != t)))
    _fail(t);
  else
    f_63 = t;
  t = not_null(f_63);
  if(match_cons(t, sym__2))
    {
      g_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
      t = k_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm h_41;
  h_41 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_i_41;
      t = d_119(t);
      return(t);
    }
    t = try_1_0(r_5, t);
  }
  t = h_41;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm p_63 = NULL;
      ATerm j_41;
      j_41 = t;
      {
        ATerm n_63 = NULL;
        ATerm o_63 = NULL;
        ATerm r_63 (ATerm t)
        {
          t = not_null(o_63);
          if(((n_63 != NULL) && (n_63 != t)))
            _fail(t);
          else
            n_63 = t;
          t = not_null(o_63);
          return(t);
        }
        if(((o_63 != NULL) && (o_63 != t)))
          _fail(t);
        else
          o_63 = t;
        t = r_63(t);
        t = (ATerm) ATmakeAppl(sym__2, term_r_35, not_null(n_63));
        t = set_config_0_0(t);
      }
      t = j_41;
      {
        ATerm q_63 = NULL;
        ATerm s_63 (ATerm t)
        {
          t = not_null(q_63);
          if(((p_63 != NULL) && (p_63 != t)))
            _fail(t);
          else
            p_63 = t;
          t = not_null(q_63);
          return(t);
        }
        if(((q_63 != NULL) && (q_63 != t)))
          _fail(t);
        else
          q_63 = t;
        t = s_63(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_63));
      }
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm k_41 = t;
      int l_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_41 = t;
          int z_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(z_41);
            }
          else
            {
              t = m_41;
              t = d_119(t);
              t = Cons_2_0(_id, t_5, t);
            }
          ;
          LocalPopChoice(l_41);
        }
      else
        {
          t = k_41;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(s_5, t_5, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  ATerm a_42;
  a_42 = t;
  {
    ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
    ATerm d_64 (ATerm t)
    {
      t = not_null(a_64);
      if(((w_63 != NULL) && (w_63 != t)))
        _fail(t);
      else
        w_63 = t;
      t = not_null(b_64);
      if(((x_63 != NULL) && (x_63 != t)))
        _fail(t);
      else
        x_63 = t;
      t = not_null(c_64);
      if(((y_63 != NULL) && (y_63 != t)))
        _fail(t);
      else
        y_63 = t;
      t = not_null(z_63);
      t = SSL_table_put(not_null(w_63), not_null(x_63), not_null(y_63));
      return(t);
    }
    if(((z_63 != NULL) && (z_63 != t)))
      _fail(t);
    else
      z_63 = t;
    t = not_null(z_63);
    if(match_cons(t, sym__3))
      {
        a_64 = ATgetArgument(t, 0);
        b_64 = ATgetArgument(t, 1);
        c_64 = ATgetArgument(t, 2);
        t = d_64(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = a_42;
  return(t);
}
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm f_64 = NULL;
  ATerm b_42;
  b_42 = t;
  t = term_c_42;
  t = table_put_0_0(t);
  t = b_42;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm k_42 = t;
      int l_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_119(t);
          ;
          LocalPopChoice(l_42);
        }
      else
        {
          t = k_42;
          {
            ATerm m_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(w_42);
              }
            else
              {
                t = m_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_6, t);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm x_42 = t;
        int y_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_43;
            c_43 = t;
            {
              ATerm d_43 = t;
              int e_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_36;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(e_43);
                }
              else
                {
                  t = d_43;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = c_43;
            t = system_usage_0_0(t);
            t = term_b_33;
            t = exit_0_0(t);
            ;
            LocalPopChoice(y_42);
          }
        else
          {
            t = x_42;
            {
              ATerm f_43 = t;
              int g_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_43;
                  h_43 = t;
                  t = term_l_39;
                  t = get_config_0_0(t);
                  t = h_43;
                  t = system_about_0_0(t);
                  t = term_b_33;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(g_43);
                }
              else
                {
                  t = f_43;
                  {
                    ATerm v_6 (ATerm t)
                    {
                      ATerm w_6 (ATerm t)
                      {
                        ATerm g_64 = NULL;
                        ATerm h_64 (ATerm t)
                        {
                          t = not_null(g_64);
                          if(((f_64 != NULL) && (f_64 != t)))
                            _fail(t);
                          else
                            f_64 = t;
                          t = not_null(g_64);
                          return(t);
                        }
                        if(((g_64 != NULL) && (g_64 != t)))
                          _fail(t);
                        else
                          g_64 = t;
                        t = h_64(t);
                        return(t);
                      }
                      t = Undefined_1_0(w_6, t);
                      return(t);
                    }
                    t = option_defined_1_0(v_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_64)), term_i_43));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_t_26;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(o_6, t);
      {
        ATerm m_43;
        m_43 = t;
        t = term_t_37;
        t = table_destroy_0_0(t);
        t = m_43;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  t = parse_options_1_0(c_117, t);
  t = store_options_0_0(t);
  t = e_117(t);
  {
    ATerm n_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_117, t);
        ;
        LocalPopChoice(s_43);
      }
    else
      {
        t = n_43;
        {
          ATerm t_43 = t;
          int a_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_44);
            }
          else
            {
              t = t_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(r_116, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_6, t_116, u_116, y_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm a_7 (ATerm t)
    {
      ATerm d_44;
      d_44 = t;
      {
        ATerm o_64 = NULL;
        ATerm p_64 = NULL;
        ATerm q_64 (ATerm t)
        {
          t = not_null(p_64);
          if(((o_64 != NULL) && (o_64 != t)))
            _fail(t);
          else
            o_64 = t;
          t = not_null(p_64);
          return(t);
        }
        t = term_r_35;
        t = get_config_0_0(t);
        if(((p_64 != NULL) && (p_64 != t)))
          _fail(t);
        else
          p_64 = t;
        t = q_64(t);
        t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, not_null(o_64)));
        t = printnl_0_0(t);
      }
      t = d_44;
      return(t);
    }
    t = if_verbose2_1_0(a_7, t);
    return(t);
  }
  t = iowrap_4_0(l_116, m_116, n_116, z_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t)
{
  t = iowrap_3_0(j_116, k_116, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = _2_0(_id, g_116, t);
    return(t);
  }
  t = iowrap_2_0(u_7, _fail, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    ATerm x_7 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    t = downup2_2_0(w_7, x_7, t);
    t = mark_fresh_vars_0_0(t);
    t = mark_bound_unbound_vars_0_0(t);
    return(t);
  }
  t = iowrap_1_0(v_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = canonicalize_0_0(t);
  return(t);
}
