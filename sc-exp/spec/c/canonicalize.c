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
ATerm term_a_36;
ATerm term_n_35;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_s_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_c_29;
ATerm term_q_28;
ATerm term_j_28;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_g_21;
ATerm term_c_21;
ATerm term_f_19;
ATerm term_u_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
void init_constant_terms (void)
{
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_CallT_3, term_z_6, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_CallT_3, term_c_7, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_f_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_c_15);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_c_15);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_c_15);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_c_15);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_c_15);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, (ATerm) ATempty);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm SVar_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm CreateDef1_0_0 (ATerm);
ATerm CallFailFun_0_0 (ATerm);
ATerm CallIdFun_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm h_97 (ATerm), ATerm);
ATerm Canon_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm downup2_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm _2_0 (ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_116 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm);
ATerm crush_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm Program_1_0 (ATerm d_82 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_118 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_119 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_119 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_116 (ATerm), ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
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
  ATerm t_1 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm u_1 = NULL,v_1 = NULL;
    t = not_null(t_1);
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = not_null(t_1);
    {
      ATerm g_2 = NULL;
      ATerm i_2 (ATerm t)
      {
        t = not_null(g_2);
        if(((v_1 != NULL) && (v_1 != t)))
          _fail(t);
        else
          v_1 = t;
        t = not_null(g_2);
        return(t);
      }
      t = new_0_0(t);
      if(((g_2 != NULL) && (g_2 != t)))
        _fail(t);
      else
        g_2 = t;
      t = i_2(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_1)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_1), (ATerm)ATempty, (ATerm)ATempty, not_null(u_1))));
    }
    return(t);
  }
  if(((t_1 != NULL) && (t_1 != t)))
    _fail(t);
  else
    t_1 = t;
  t = h_2(t);
  return(t);
}
ATerm SVar_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  ATerm b_3 (ATerm t)
  {
    ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL;
    ATerm d_3 (ATerm t)
    {
      ATerm y_2 = NULL,z_2 = NULL;
      t = not_null(x_2);
      if(((y_2 != NULL) && (y_2 != t)))
        _fail(t);
      else
        y_2 = t;
      t = not_null(x_2);
      {
        ATerm a_3 = NULL;
        ATerm e_3 (ATerm t)
        {
          t = not_null(a_3);
          if(((z_2 != NULL) && (z_2 != t)))
            _fail(t);
          else
            z_2 = t;
          t = not_null(a_3);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(y_2)), not_null(v_2));
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = e_3(t);
        t = not_null(z_2);
      }
      return(t);
    }
    t = not_null(r_2);
    if(((t_2 != NULL) && (t_2 != t)))
      _fail(t);
    else
      t_2 = t;
    t = not_null(s_2);
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    t = not_null(r_2);
    {
      ATerm w_2 = NULL;
      ATerm c_3 (ATerm t)
      {
        t = not_null(w_2);
        if(((v_2 != NULL) && (v_2 != t)))
          _fail(t);
        else
          v_2 = t;
        t = not_null(w_2);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_2));
      if(((w_2 != NULL) && (w_2 != t)))
        _fail(t);
      else
        w_2 = t;
      t = c_3(t);
      t = not_null(u_2);
      t = x_77(t);
      if(((x_2 != NULL) && (x_2 != t)))
        _fail(t);
      else
        x_2 = t;
      t = d_3(t);
    }
    return(t);
  }
  if(((r_2 != NULL) && (r_2 != t)))
    _fail(t);
  else
    r_2 = t;
  t = not_null(r_2);
  if(match_cons(t, sym_SVar_1))
    {
      s_2 = ATgetArgument(t, 0);
      t = b_3(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  ATerm e_4 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL;
    ATerm g_4 (ATerm t)
    {
      ATerm x_3 = NULL,y_3 = NULL;
      ATerm h_4 (ATerm t)
      {
        ATerm z_3 = NULL,a_4 = NULL;
        ATerm i_4 (ATerm t)
        {
          ATerm b_4 = NULL,c_4 = NULL;
          t = not_null(a_4);
          if(((b_4 != NULL) && (b_4 != t)))
            _fail(t);
          else
            b_4 = t;
          t = not_null(a_4);
          {
            ATerm d_4 = NULL;
            ATerm j_4 (ATerm t)
            {
              t = not_null(d_4);
              if(((c_4 != NULL) && (c_4 != t)))
                _fail(t);
              else
                c_4 = t;
              t = not_null(d_4);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(x_3), not_null(z_3), not_null(b_4)), not_null(u_3));
            if(((d_4 != NULL) && (d_4 != t)))
              _fail(t);
            else
              d_4 = t;
            t = j_4(t);
            t = not_null(c_4);
          }
          return(t);
        }
        t = not_null(y_3);
        if(((z_3 != NULL) && (z_3 != t)))
          _fail(t);
        else
          z_3 = t;
        t = not_null(t_3);
        t = e_78(t);
        if(((a_4 != NULL) && (a_4 != t)))
          _fail(t);
        else
          a_4 = t;
        t = i_4(t);
        return(t);
      }
      t = not_null(w_3);
      if(((x_3 != NULL) && (x_3 != t)))
        _fail(t);
      else
        x_3 = t;
      t = not_null(s_3);
      t = d_78(t);
      if(((y_3 != NULL) && (y_3 != t)))
        _fail(t);
      else
        y_3 = t;
      t = h_4(t);
      return(t);
    }
    t = not_null(m_3);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = not_null(n_3);
    if(((r_3 != NULL) && (r_3 != t)))
      _fail(t);
    else
      r_3 = t;
    t = not_null(o_3);
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = not_null(p_3);
    if(((t_3 != NULL) && (t_3 != t)))
      _fail(t);
    else
      t_3 = t;
    t = not_null(m_3);
    {
      ATerm v_3 = NULL;
      ATerm f_4 (ATerm t)
      {
        t = not_null(v_3);
        if(((u_3 != NULL) && (u_3 != t)))
          _fail(t);
        else
          u_3 = t;
        t = not_null(v_3);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_3));
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      t = f_4(t);
      t = not_null(r_3);
      t = c_78(t);
      if(((w_3 != NULL) && (w_3 != t)))
        _fail(t);
      else
        w_3 = t;
      t = g_4(t);
    }
    return(t);
  }
  if(((m_3 != NULL) && (m_3 != t)))
    _fail(t);
  else
    m_3 = t;
  t = not_null(m_3);
  if(match_cons(t, sym_CallT_3))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
      p_3 = ATgetArgument(t, 2);
      t = e_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CreateDef1_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm x_4 = NULL,y_4 = NULL;
    t = not_null(r_4);
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    t = not_null(u_4);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_4)), (ATerm)ATempty, (ATerm) ATempty), not_null(y_4));
    return(t);
  }
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = not_null(q_4);
  if(match_cons(t, sym_Let_2))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
      t = not_null(s_4);
      if(match_cons(t, sym_CallT_3))
        {
          t_4 = ATgetArgument(t, 0);
          v_4 = ATgetArgument(t, 1);
          w_4 = ATgetArgument(t, 2);
          t = not_null(t_4);
          if(match_cons(t, sym_SVar_1))
            {
              u_4 = ATgetArgument(t, 0);
              t = not_null(v_4);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(w_4);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_4(t);
                    }
                  else
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
  ATerm c_5 = NULL;
  ATerm d_5 (ATerm t)
  {
    t = term_a_7;
    return(t);
  }
  if(((c_5 != NULL) && (c_5 != t)))
    _fail(t);
  else
    c_5 = t;
  t = not_null(c_5);
  if(match_cons(t, sym_Fail_0))
    {
      t = d_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  ATerm h_5 (ATerm t)
  {
    t = term_d_7;
    return(t);
  }
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  t = not_null(g_5);
  if(match_cons(t, sym_Id_0))
    {
      t = h_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
  ATerm x_5 (ATerm t)
  {
    ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
    t = not_null(o_5);
    if(((t_5 != NULL) && (t_5 != t)))
      _fail(t);
    else
      t_5 = t;
    t = not_null(p_5);
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    t = not_null(r_5);
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = not_null(s_5);
    if(((w_5 != NULL) && (w_5 != t)))
      _fail(t);
    else
      w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_5)), not_null(t_5)), (ATerm) ATinsert(CheckATermList(not_null(w_5)), not_null(v_5)));
    return(t);
  }
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  t = not_null(m_5);
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      t = not_null(n_5);
      if(match_cons(t, sym__2))
        {
          o_5 = ATgetArgument(t, 0);
          p_5 = ATgetArgument(t, 1);
          t = not_null(q_5);
          if(match_cons(t, sym__2))
            {
              r_5 = ATgetArgument(t, 0);
              s_5 = ATgetArgument(t, 1);
              t = x_5(t);
            }
          else
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
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  ATerm f_6 (ATerm t)
  {
    ATerm d_6 = NULL,e_6 = NULL;
    t = not_null(b_6);
    if(((d_6 != NULL) && (d_6 != t)))
      _fail(t);
    else
      d_6 = t;
    t = not_null(c_6);
    if(((e_6 != NULL) && (e_6 != t)))
      _fail(t);
    else
      e_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(e_6));
    return(t);
  }
  if(((a_6 != NULL) && (a_6 != t)))
    _fail(t);
  else
    a_6 = t;
  t = not_null(a_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_6 = ATgetFirst((ATermList) t);
      c_6 = (ATerm) ATgetNext((ATermList) t);
      t = f_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm j_6 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  if(((i_6 != NULL) && (i_6 != t)))
    _fail(t);
  else
    i_6 = t;
  t = not_null(i_6);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_103(t);
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = k_103(t);
        t = _2_0(m_103, k_6, t);
        t = l_103(t);
      }
    return(t);
  }
  t = k_6(t);
  return(t);
}
ATerm unzip_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, t_103, t);
  return(t);
}
ATerm alltd_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_97(t);
        ;
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = SRTS_all(l_6, t);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm y_10 (ATerm t)
  {
    ATerm q_8 = NULL,r_8 = NULL;
    t = not_null(n_8);
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    t = not_null(o_8);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_8), (ATerm)ATempty, (ATerm)ATempty, not_null(q_8))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_8)), (ATerm)ATempty, (ATerm) ATempty));
    return(t);
  }
  ATerm z_10 (ATerm t)
  {
    ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
    t = not_null(n_8);
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    t = not_null(g_8);
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    t = not_null(h_8);
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    t = not_null(m_8);
    {
      ATerm b_9 = NULL;
      ATerm q_11 (ATerm t)
      {
        t = not_null(b_9);
        if(((v_8 != NULL) && (v_8 != t)))
          _fail(t);
        else
          v_8 = t;
        t = not_null(b_9);
        return(t);
      }
      t = not_null(u_8);
      {
        ATerm b_0 (ATerm t)
        {
          ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
          ATerm p_11 (ATerm t)
          {
            t = not_null(y_8);
            if(((t_8 != NULL) && (t_8 != t)))
              _fail(t);
            else
              t_8 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_8)), (ATerm)ATempty, (ATerm) ATempty);
            return(t);
          }
          if(((w_8 != NULL) && (w_8 != t)))
            _fail(t);
          else
            w_8 = t;
          t = not_null(w_8);
          if(match_cons(t, sym_CallT_3))
            {
              x_8 = ATgetArgument(t, 0);
              z_8 = ATgetArgument(t, 1);
              a_9 = ATgetArgument(t, 2);
              t = not_null(x_8);
              if(match_cons(t, sym_SVar_1))
                {
                  y_8 = ATgetArgument(t, 0);
                  t = not_null(z_8);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(a_9);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = p_11(t);
                        }
                      else
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
        t = alltd_1_0(b_0, t);
        if(((b_9 != NULL) && (b_9 != t)))
          _fail(t);
        else
          b_9 = t;
        t = q_11(t);
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(s_8), (ATerm)ATempty, (ATerm)ATempty, not_null(v_8));
    }
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
    t = not_null(j_8);
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = not_null(i_8);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(l_8);
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_9)), not_null(e_9)));
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL;
    t = not_null(j_8);
    if(((f_9 != NULL) && (f_9 != t)))
      _fail(t);
    else
      f_9 = t;
    t = not_null(k_8);
    if(((g_9 != NULL) && (g_9 != t)))
      _fail(t);
    else
      g_9 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_9), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_9)));
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    ATerm h_9 = NULL;
    t = not_null(n_8);
    if(((h_9 != NULL) && (h_9 != t)))
      _fail(t);
    else
      h_9 = t;
    t = not_null(h_9);
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm i_9 = NULL;
    t = not_null(o_8);
    if(((i_9 != NULL) && (i_9 != t)))
      _fail(t);
    else
      i_9 = t;
    t = not_null(i_9);
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
    t = not_null(n_8);
    if(((j_9 != NULL) && (j_9 != t)))
      _fail(t);
    else
      j_9 = t;
    t = not_null(k_8);
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = not_null(l_8);
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = not_null(m_8);
    {
      ATerm n_9 = NULL;
      ATerm r_11 (ATerm t)
      {
        t = not_null(n_9);
        if(((m_9 != NULL) && (m_9 != t)))
          _fail(t);
        else
          m_9 = t;
        t = not_null(n_9);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), not_null(k_9));
      t = conc_0_0(t);
      if(((n_9 != NULL) && (n_9 != t)))
        _fail(t);
      else
        n_9 = t;
      t = r_11(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_9), not_null(l_9));
    }
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    ATerm o_9 = NULL;
    t = not_null(o_8);
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    t = not_null(o_9);
    return(t);
  }
  ATerm g_11 (ATerm t)
  {
    ATerm p_9 = NULL;
    t = not_null(n_8);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_7, (ATerm)ATinsert(ATempty, not_null(p_9)), (ATerm) ATempty);
    return(t);
  }
  ATerm h_11 (ATerm t)
  {
    ATerm q_9 = NULL;
    t = not_null(n_8);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_7, (ATerm)ATinsert(ATempty, not_null(q_9)), (ATerm) ATempty);
    return(t);
  }
  ATerm i_11 (ATerm t)
  {
    ATerm r_9 = NULL;
    t = not_null(n_8);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_7, (ATerm)ATinsert(ATempty, not_null(r_9)), (ATerm) ATempty);
    return(t);
  }
  ATerm j_11 (ATerm t)
  {
    ATerm s_9 = NULL;
    t = not_null(n_8);
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_7, (ATerm)ATinsert(ATempty, not_null(s_9)), (ATerm) ATempty);
    return(t);
  }
  ATerm k_11 (ATerm t)
  {
    ATerm t_9 = NULL;
    t = not_null(n_8);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_7, (ATerm)ATinsert(ATempty, not_null(t_9)), (ATerm) ATempty);
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
    t = not_null(n_8);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = not_null(o_8);
    if(((v_9 != NULL) && (v_9 != t)))
      _fail(t);
    else
      v_9 = t;
    t = not_null(p_8);
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = not_null(m_8);
    {
      ATerm y_9 = NULL;
      ATerm t_11 (ATerm t)
      {
        t = not_null(y_9);
        if(((x_9 != NULL) && (x_9 != t)))
          _fail(t);
        else
          x_9 = t;
        t = not_null(y_9);
        return(t);
      }
      t = not_null(v_9);
      {
        ATerm s_11 (ATerm t)
        {
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_0 (ATerm t)
              {
                ATerm v_7 = t;
                int w_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallIdFun_0_0(t);
                    ;
                    LocalPopChoice(w_7);
                  }
                else
                  {
                    t = v_7;
                    t = CallFailFun_0_0(t);
                  }
                return(t);
              }
              ATerm l_0 (ATerm t)
              {
                t = try_1_0(s_11, t);
                return(t);
              }
              t = Cons_2_0(f_0, l_0, t);
              ;
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
              t = Cons_2_0(_id, s_11, t);
            }
          return(t);
        }
        t = s_11(t);
        if(((y_9 != NULL) && (y_9 != t)))
          _fail(t);
        else
          y_9 = t;
        t = t_11(t);
      }
      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(u_9), not_null(x_9), not_null(w_9));
    }
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
    t = not_null(n_8);
    if(((z_9 != NULL) && (z_9 != t)))
      _fail(t);
    else
      z_9 = t;
    t = not_null(o_8);
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(p_8);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = not_null(m_8);
    {
      ATerm d_10 = NULL;
      ATerm v_11 (ATerm t)
      {
        t = not_null(d_10);
        if(((c_10 != NULL) && (c_10 != t)))
          _fail(t);
        else
          c_10 = t;
        t = not_null(d_10);
        return(t);
      }
      t = not_null(a_10);
      {
        ATerm u_11 (ATerm t)
        {
          ATerm x_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_0 (ATerm t)
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallIdFun_0_0(t);
                    ;
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    t = CallFailFun_0_0(t);
                  }
                return(t);
              }
              ATerm o_0 (ATerm t)
              {
                t = try_1_0(u_11, t);
                return(t);
              }
              t = Cons_2_0(m_0, o_0, t);
              ;
              LocalPopChoice(y_7);
            }
          else
            {
              t = x_7;
              t = Cons_2_0(_id, u_11, t);
            }
          return(t);
        }
        t = u_11(t);
        if(((d_10 != NULL) && (d_10 != t)))
          _fail(t);
        else
          d_10 = t;
        t = v_11(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(z_9), not_null(c_10), not_null(b_10));
    }
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
    t = not_null(n_8);
    if(((e_10 != NULL) && (e_10 != t)))
      _fail(t);
    else
      e_10 = t;
    t = not_null(o_8);
    if(((f_10 != NULL) && (f_10 != t)))
      _fail(t);
    else
      f_10 = t;
    t = not_null(p_8);
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(m_8);
    {
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
      ATerm w_11 (ATerm t)
      {
        ATerm n_10 = NULL;
        ATerm x_11 (ATerm t)
        {
          t = not_null(n_10);
          if(((j_10 != NULL) && (j_10 != t)))
            _fail(t);
          else
            j_10 = t;
          t = not_null(n_10);
          {
            ATerm b_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_8;
              }
          }
          return(t);
        }
        t = not_null(l_10);
        if(((h_10 != NULL) && (h_10 != t)))
          _fail(t);
        else
          h_10 = t;
        t = not_null(m_10);
        if(((i_10 != NULL) && (i_10 != t)))
          _fail(t);
        else
          i_10 = t;
        t = not_null(i_10);
        t = concat_0_0(t);
        if(((n_10 != NULL) && (n_10 != t)))
          _fail(t);
        else
          n_10 = t;
        t = x_11(t);
        return(t);
      }
      t = not_null(f_10);
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_0 (ATerm t)
          {
            ATerm c_8 = t;
            int d_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CallIdFun_0_0(t);
                ;
                LocalPopChoice(d_8);
              }
            else
              {
                t = c_8;
                t = CallFailFun_0_0(t);
              }
            return(t);
          }
          t = try_1_0(q_0, t);
          {
            ATerm e_8 = t;
            int b_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CreateDef1_0_0(t);
                ;
                LocalPopChoice(b_12);
              }
            else
              {
                t = e_8;
                {
                  ATerm c_12 = t;
                  int d_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_12 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm r_0 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = CallT_3_0(r_0, Nil_0_0, Nil_0_0, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = e_12;
                        }
                      t = CreateDef2_0_0(t);
                      ;
                      LocalPopChoice(d_12);
                    }
                  else
                    {
                      t = c_12;
                      {
                        ATerm s_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = split_2_0(_id, s_0, t);
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = unzip_1_0(p_0, t);
        if(((k_10 != NULL) && (k_10 != t)))
          _fail(t);
        else
          k_10 = t;
        t = not_null(k_10);
        if(match_cons(t, sym__2))
          {
            l_10 = ATgetArgument(t, 0);
            m_10 = ATgetArgument(t, 1);
            t = w_11(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_10), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(e_10), not_null(h_10), not_null(g_10)));
    }
    return(t);
  }
  ATerm o_11 (ATerm t)
  {
    ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
    t = not_null(n_8);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = not_null(o_8);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = not_null(p_8);
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    t = not_null(m_8);
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
      ATerm y_11 (ATerm t)
      {
        ATerm x_10 = NULL;
        ATerm z_11 (ATerm t)
        {
          t = not_null(x_10);
          if(((t_10 != NULL) && (t_10 != t)))
            _fail(t);
          else
            t_10 = t;
          t = not_null(x_10);
          {
            ATerm f_12 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_12;
              }
          }
          return(t);
        }
        t = not_null(v_10);
        if(((r_10 != NULL) && (r_10 != t)))
          _fail(t);
        else
          r_10 = t;
        t = not_null(w_10);
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = not_null(s_10);
        t = concat_0_0(t);
        if(((x_10 != NULL) && (x_10 != t)))
          _fail(t);
        else
          x_10 = t;
        t = z_11(t);
        return(t);
      }
      t = not_null(p_10);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm g_12 = t;
            int a_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CallIdFun_0_0(t);
                ;
                LocalPopChoice(a_13);
              }
            else
              {
                t = g_12;
                t = CallFailFun_0_0(t);
              }
            return(t);
          }
          t = try_1_0(u_0, t);
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CreateDef1_0_0(t);
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                {
                  ATerm m_13 = t;
                  int q_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_13 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm v_0 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = CallT_3_0(v_0, Nil_0_0, Nil_0_0, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = r_13;
                        }
                      t = CreateDef2_0_0(t);
                      ;
                      LocalPopChoice(q_13);
                    }
                  else
                    {
                      t = m_13;
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = split_2_0(_id, w_0, t);
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = unzip_1_0(t_0, t);
        if(((u_10 != NULL) && (u_10 != t)))
          _fail(t);
        else
          u_10 = t;
        t = not_null(u_10);
        if(match_cons(t, sym__2))
          {
            v_10 = ATgetArgument(t, 0);
            w_10 = ATgetArgument(t, 1);
            t = y_11(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_10), (ATerm) ATmakeAppl(sym_CallT_3, not_null(o_10), not_null(r_10), not_null(q_10)));
    }
    return(t);
  }
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = not_null(m_8);
  if(match_cons(t, sym_Rec_2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      t = y_10(t);
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_8 = ATgetArgument(t, 0);
          o_8 = ATgetArgument(t, 1);
          p_8 = ATgetArgument(t, 2);
          f_8 = ATgetArgument(t, 3);
          t = not_null(o_8);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(p_8);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(f_8);
                  if(match_cons(t, sym_Rec_2))
                    {
                      g_8 = ATgetArgument(t, 0);
                      h_8 = ATgetArgument(t, 1);
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
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_8 = ATgetArgument(t, 0);
              o_8 = ATgetArgument(t, 1);
              t = not_null(o_8);
              if(match_cons(t, sym_Seq_2))
                {
                  k_8 = ATgetArgument(t, 0);
                  l_8 = ATgetArgument(t, 1);
                  t = not_null(n_8);
                  if(match_cons(t, sym_Where_1))
                    {
                      j_8 = ATgetArgument(t, 0);
                      t = not_null(k_8);
                      if(match_cons(t, sym_Build_1))
                        {
                          i_8 = ATgetArgument(t, 0);
                          t = a_11(t);
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
                          t = d_11(t);
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
                      k_8 = ATgetArgument(t, 0);
                      t = not_null(n_8);
                      if(match_cons(t, sym_Where_1))
                        {
                          j_8 = ATgetArgument(t, 0);
                          t = b_11(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_Id_0))
                            {
                              t = d_11(t);
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
                          t = not_null(n_8);
                          if(match_cons(t, sym_Id_0))
                            {
                              ATerm x_13 = t;
                              int z_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_11(t);
                                  ;
                                  LocalPopChoice(z_13);
                                }
                              else
                                {
                                  t = x_13;
                                  t = d_11(t);
                                }
                            }
                          else
                            {
                              t = c_11(t);
                            }
                        }
                      else
                        {
                          t = not_null(n_8);
                          if(match_cons(t, sym_Id_0))
                            {
                              t = d_11(t);
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
                  n_8 = ATgetArgument(t, 0);
                  o_8 = ATgetArgument(t, 1);
                  t = not_null(o_8);
                  if(match_cons(t, sym_Scope_2))
                    {
                      k_8 = ATgetArgument(t, 0);
                      l_8 = ATgetArgument(t, 1);
                      t = not_null(n_8);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_11(t);
                              ;
                              LocalPopChoice(b_14);
                            }
                          else
                            {
                              t = a_14;
                              t = f_11(t);
                            }
                        }
                      else
                        {
                          t = e_11(t);
                        }
                    }
                  else
                    {
                      t = not_null(n_8);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_11(t);
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
                      n_8 = ATgetArgument(t, 0);
                      t = g_11(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          n_8 = ATgetArgument(t, 0);
                          t = h_11(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              n_8 = ATgetArgument(t, 0);
                              t = i_11(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  n_8 = ATgetArgument(t, 0);
                                  t = j_11(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      n_8 = ATgetArgument(t, 0);
                                      t = k_11(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          n_8 = ATgetArgument(t, 0);
                                          o_8 = ATgetArgument(t, 1);
                                          p_8 = ATgetArgument(t, 2);
                                          {
                                            ATerm c_14 = t;
                                            int d_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = l_11(t);
                                                ;
                                                LocalPopChoice(d_14);
                                              }
                                            else
                                              {
                                                t = c_14;
                                                t = n_11(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              n_8 = ATgetArgument(t, 0);
                                              o_8 = ATgetArgument(t, 1);
                                              p_8 = ATgetArgument(t, 2);
                                              {
                                                ATerm q_14 = t;
                                                int r_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_11(t);
                                                    ;
                                                    LocalPopChoice(r_14);
                                                  }
                                                else
                                                  {
                                                    t = q_14;
                                                    t = o_11(t);
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
ATerm repeat_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = r_94(t);
      t = a_12(t);
      return(t);
    }
    t = try_1_0(x_0, t);
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm downup2_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  t = u_95(t);
  {
    ATerm y_0 (ATerm t)
    {
      t = downup2_2_0(u_95, v_95, t);
      return(t);
    }
    t = SRTS_all(y_0, t);
    t = v_95(t);
  }
  return(t);
}
ATerm _2_0 (ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  ATerm v_12 (ATerm t)
  {
    ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,p_12 = NULL;
    ATerm x_12 (ATerm t)
    {
      ATerm q_12 = NULL,r_12 = NULL;
      ATerm y_12 (ATerm t)
      {
        ATerm s_12 = NULL,t_12 = NULL;
        t = not_null(r_12);
        if(((s_12 != NULL) && (s_12 != t)))
          _fail(t);
        else
          s_12 = t;
        t = not_null(r_12);
        {
          ATerm u_12 = NULL;
          ATerm z_12 (ATerm t)
          {
            t = not_null(u_12);
            if(((t_12 != NULL) && (t_12 != t)))
              _fail(t);
            else
              t_12 = t;
            t = not_null(u_12);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_12), not_null(s_12)), not_null(n_12));
          if(((u_12 != NULL) && (u_12 != t)))
            _fail(t);
          else
            u_12 = t;
          t = z_12(t);
          t = not_null(t_12);
        }
        return(t);
      }
      t = not_null(p_12);
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      t = not_null(m_12);
      t = d_72(t);
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      t = y_12(t);
      return(t);
    }
    t = not_null(h_12);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    t = not_null(i_12);
    if(((l_12 != NULL) && (l_12 != t)))
      _fail(t);
    else
      l_12 = t;
    t = not_null(j_12);
    if(((m_12 != NULL) && (m_12 != t)))
      _fail(t);
    else
      m_12 = t;
    t = not_null(h_12);
    {
      ATerm o_12 = NULL;
      ATerm w_12 (ATerm t)
      {
        t = not_null(o_12);
        if(((n_12 != NULL) && (n_12 != t)))
          _fail(t);
        else
          n_12 = t;
        t = not_null(o_12);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_12));
      if(((o_12 != NULL) && (o_12 != t)))
        _fail(t);
      else
        o_12 = t;
      t = w_12(t);
      t = not_null(l_12);
      t = c_72(t);
      if(((p_12 != NULL) && (p_12 != t)))
        _fail(t);
      else
        p_12 = t;
      t = x_12(t);
    }
    return(t);
  }
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = not_null(h_12);
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      t = v_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_14;
  y_14 = t;
  {
    ATerm b_13 = NULL;
    ATerm c_13 = NULL;
    ATerm d_13 (ATerm t)
    {
      t = not_null(c_13);
      if(((b_13 != NULL) && (b_13 != t)))
        _fail(t);
      else
        b_13 = t;
      t = not_null(c_13);
      return(t);
    }
    t = term_c_15;
    t = whoami_0_0(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = d_13(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_15), not_null(b_13)), term_e_15));
    t = printnl_0_0(t);
    t = term_g_15;
    t = exit_0_0(t);
  }
  t = y_14;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  ATerm l_13 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL;
    t = not_null(h_13);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = not_null(i_13);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = not_null(g_13);
    {
      ATerm h_15;
      h_15 = t;
      t = SSL_printnl(not_null(j_13), not_null(k_13));
      t = h_15;
    }
    return(t);
  }
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = not_null(g_13);
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
      t = l_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm p_13 (ATerm t)
  {
    ATerm o_13 = NULL;
    t = not_null(n_13);
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = not_null(n_13);
    t = SSL_implode_string(not_null(o_13));
    return(t);
  }
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = p_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
        ATerm y_13 (ATerm t)
        {
          ATerm v_13 = NULL,w_13 = NULL;
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
          t = not_null(v_13);
          {
            ATerm z_0 (ATerm t)
            {
              t = not_null(w_13);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(z_0, t);
          }
          return(t);
        }
        if(((s_13 != NULL) && (s_13 != t)))
          _fail(t);
        else
          s_13 = t;
        t = not_null(s_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_13 = ATgetFirst((ATermList) t);
            u_13 = (ATerm) ATgetNext((ATermList) t);
            t = y_13(t);
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
  ATerm e_14 = NULL;
  ATerm m_14 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL;
    t = not_null(e_14);
    if(((f_14 != NULL) && (f_14 != t)))
      _fail(t);
    else
      f_14 = t;
    t = not_null(e_14);
    {
      ATerm h_14 = NULL;
      ATerm n_14 (ATerm t)
      {
        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
        ATerm o_14 (ATerm t)
        {
          t = not_null(l_14);
          if(((g_14 != NULL) && (g_14 != t)))
            _fail(t);
          else
            g_14 = t;
          t = not_null(j_14);
          return(t);
        }
        t = not_null(h_14);
        if(((i_14 != NULL) && (i_14 != t)))
          _fail(t);
        else
          i_14 = t;
        t = not_null(h_14);
        t = SSL_explode_term(not_null(i_14));
        if(((j_14 != NULL) && (j_14 != t)))
          _fail(t);
        else
          j_14 = t;
        t = not_null(j_14);
        if(match_cons(t, sym__2))
          {
            k_14 = ATgetArgument(t, 0);
            l_14 = ATgetArgument(t, 1);
            t = not_null(k_14);
            if(match_string(t, ""))
              {
                t = o_14(t);
              }
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
      t = not_null(f_14);
      if(((h_14 != NULL) && (h_14 != t)))
        _fail(t);
      else
        h_14 = t;
      t = n_14(t);
      t = not_null(g_14);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = m_14(t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm p_14 (ATerm t)
  {
    ATerm g_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_14, t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = g_16;
        t = Nil_0_0(t);
        t = w_101(t);
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  ATerm x_14 (ATerm t)
  {
    ATerm v_14 = NULL,w_14 = NULL;
    t = not_null(t_14);
    if(((w_14 != NULL) && (w_14 != t)))
      _fail(t);
    else
      w_14 = t;
    t = not_null(u_14);
    if(((v_14 != NULL) && (v_14 != t)))
      _fail(t);
    else
      v_14 = t;
    t = not_null(w_14);
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(v_14);
        return(t);
      }
      t = at_end_1_0(a_1, t);
    }
    return(t);
  }
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = not_null(s_14);
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      t = x_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  ATerm b_15 (ATerm t)
  {
    ATerm a_15 = NULL;
    t = not_null(z_14);
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = not_null(z_14);
    t = SSL_explode_string(not_null(a_15));
    return(t);
  }
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = b_15(t);
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
  ATerm n_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = n_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_1, t);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
              ATerm t_15 (ATerm t)
              {
                ATerm l_15 = NULL;
                t = not_null(j_15);
                if(((l_15 != NULL) && (l_15 != t)))
                  _fail(t);
                else
                  l_15 = t;
                t = not_null(l_15);
                return(t);
              }
              ATerm u_15 (ATerm t)
              {
                ATerm m_15 = NULL;
                t = not_null(j_15);
                if(((m_15 != NULL) && (m_15 != t)))
                  _fail(t);
                else
                  m_15 = t;
                t = not_null(m_15);
                {
                  ATerm b_17 = t;
                  int m_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_17);
                    }
                  else
                    {
                      t = b_17;
                      {
                        ATerm c_1 (ATerm t)
                        {
                          t = term_q_17;
                          return(t);
                        }
                        t = debug_1_0(c_1, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm v_15 (ATerm t)
              {
                ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,r_15 = NULL;
                t = not_null(j_15);
                if(((n_15 != NULL) && (n_15 != t)))
                  _fail(t);
                else
                  n_15 = t;
                t = not_null(k_15);
                if(((o_15 != NULL) && (o_15 != t)))
                  _fail(t);
                else
                  o_15 = t;
                t = not_null(i_15);
                {
                  ATerm r_17;
                  r_17 = t;
                  {
                    ATerm q_15 = NULL;
                    ATerm w_15 (ATerm t)
                    {
                      t = not_null(q_15);
                      if(((p_15 != NULL) && (p_15 != t)))
                        _fail(t);
                      else
                        p_15 = t;
                      t = not_null(q_15);
                      return(t);
                    }
                    t = not_null(n_15);
                    t = eval_config_0_0(t);
                    if(((q_15 != NULL) && (q_15 != t)))
                      _fail(t);
                    else
                      q_15 = t;
                    t = w_15(t);
                  }
                  t = r_17;
                  {
                    ATerm s_15 = NULL;
                    ATerm x_15 (ATerm t)
                    {
                      t = not_null(s_15);
                      if(((r_15 != NULL) && (r_15 != t)))
                        _fail(t);
                      else
                        r_15 = t;
                      t = not_null(s_15);
                      return(t);
                    }
                    t = not_null(o_15);
                    t = eval_config_0_0(t);
                    if(((s_15 != NULL) && (s_15 != t)))
                      _fail(t);
                    else
                      s_15 = t;
                    t = x_15(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(r_15));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((i_15 != NULL) && (i_15 != t)))
                _fail(t);
              else
                i_15 = t;
              t = not_null(i_15);
              if(match_cons(t, sym_Path_1))
                {
                  j_15 = ATgetArgument(t, 0);
                  t = t_15(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_15 = ATgetArgument(t, 0);
                      t = u_15(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_15 = ATgetArgument(t, 0);
                          k_15 = ATgetArgument(t, 1);
                          t = v_15(t);
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
  ATerm a_16 = NULL;
  ATerm e_16 (ATerm t)
  {
    ATerm b_16 = NULL;
    t = not_null(a_16);
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_17, not_null(b_16));
    t = table_get_0_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm t_17;
          t_17 = t;
          {
            ATerm c_16 = NULL;
            ATerm d_16 = NULL;
            ATerm f_16 (ATerm t)
            {
              t = not_null(d_16);
              if(((c_16 != NULL) && (c_16 != t)))
                _fail(t);
              else
                c_16 = t;
              t = not_null(d_16);
              return(t);
            }
            if(((d_16 != NULL) && (d_16 != t)))
              _fail(t);
            else
              d_16 = t;
            t = f_16(t);
            t = (ATerm) ATmakeAppl(sym__3, term_s_17, not_null(b_16), not_null(c_16));
            t = table_put_0_0(t);
          }
          t = t_17;
        }
        return(t);
      }
      t = try_1_0(d_1, t);
    }
    return(t);
  }
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = e_16(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm e_18;
    e_18 = t;
    {
      ATerm h_16 = NULL;
      ATerm i_16 = NULL;
      ATerm j_16 (ATerm t)
      {
        t = not_null(i_16);
        if(((h_16 != NULL) && (h_16 != t)))
          _fail(t);
        else
          h_16 = t;
        t = not_null(i_16);
        return(t);
      }
      t = term_f_18;
      t = get_config_0_0(t);
      if(((i_16 != NULL) && (i_16 != t)))
        _fail(t);
      else
        i_16 = t;
      t = j_16(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_g_18);
      t = geq_0_0(t);
    }
    t = e_18;
    t = n_114(t);
    return(t);
  }
  t = try_1_0(e_1, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  ATerm w_16 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
    t = not_null(p_16);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = not_null(r_16);
    if(((t_16 != NULL) && (t_16 != t)))
      _fail(t);
    else
      t_16 = t;
    t = not_null(o_16);
    t = SSL_fputc(not_null(s_16), not_null(t_16));
    {
      ATerm v_16 = NULL;
      ATerm x_16 (ATerm t)
      {
        t = not_null(v_16);
        if(((u_16 != NULL) && (u_16 != t)))
          _fail(t);
        else
          u_16 = t;
        t = not_null(v_16);
        return(t);
      }
      if(((v_16 != NULL) && (v_16 != t)))
        _fail(t);
      else
        v_16 = t;
      t = x_16(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_16));
    }
    return(t);
  }
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = not_null(o_16);
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      t = not_null(q_16);
      if(match_cons(t, sym_Stream_1))
        {
          r_16 = ATgetArgument(t, 0);
          t = w_16(t);
        }
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  ATerm k_17 (ATerm t)
  {
    ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
    t = not_null(e_17);
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    t = not_null(f_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(c_17);
    t = SSL_write_term_to_stream_text(not_null(g_17), not_null(h_17));
    {
      ATerm j_17 = NULL;
      ATerm l_17 (ATerm t)
      {
        t = not_null(j_17);
        if(((i_17 != NULL) && (i_17 != t)))
          _fail(t);
        else
          i_17 = t;
        t = not_null(j_17);
        return(t);
      }
      if(((j_17 != NULL) && (j_17 != t)))
        _fail(t);
      else
        j_17 = t;
      t = l_17(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_17));
    }
    return(t);
  }
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  t = not_null(c_17);
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      t = not_null(d_17);
      if(match_cons(t, sym_Stream_1))
        {
          e_17 = ATgetArgument(t, 0);
          t = k_17(t);
        }
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
  ATerm f_1 (ATerm t)
  {
    ATerm n_17 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm o_17 = NULL;
      ATerm p_17 (ATerm t)
      {
        t = not_null(o_17);
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        t = not_null(o_17);
        return(t);
      }
      if(((o_17 != NULL) && (o_17 != t)))
        _fail(t);
      else
        o_17 = t;
      t = p_17(t);
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(n_17));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(f_1, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  ATerm c_18 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
    t = not_null(w_17);
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    t = not_null(x_17);
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = not_null(u_17);
    t = SSL_write_term_to_stream_baf(not_null(y_17), not_null(z_17));
    {
      ATerm b_18 = NULL;
      ATerm d_18 (ATerm t)
      {
        t = not_null(b_18);
        if(((a_18 != NULL) && (a_18 != t)))
          _fail(t);
        else
          a_18 = t;
        t = not_null(b_18);
        return(t);
      }
      if(((b_18 != NULL) && (b_18 != t)))
        _fail(t);
      else
        b_18 = t;
      t = d_18(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_18));
    }
    return(t);
  }
  if(((u_17 != NULL) && (u_17 != t)))
    _fail(t);
  else
    u_17 = t;
  t = not_null(u_17);
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      t = not_null(v_17);
      if(match_cons(t, sym_Stream_1))
        {
          w_17 = ATgetArgument(t, 0);
          t = c_18(t);
        }
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
ATerm WriteToFile_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  ATerm r_18 (ATerm t)
  {
    ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL;
    t = not_null(j_18);
    if(((l_18 != NULL) && (l_18 != t)))
      _fail(t);
    else
      l_18 = t;
    t = not_null(k_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(l_18);
    {
      ATerm o_18 = NULL;
      ATerm s_18 (ATerm t)
      {
        t = not_null(o_18);
        if(((n_18 != NULL) && (n_18 != t)))
          _fail(t);
        else
          n_18 = t;
        t = not_null(o_18);
        return(t);
      }
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = s_18(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_u_18);
      t = open_stream_0_0(t);
      {
        ATerm q_18 = NULL;
        ATerm t_18 (ATerm t)
        {
          t = not_null(q_18);
          if(((p_18 != NULL) && (p_18 != t)))
            _fail(t);
          else
            p_18 = t;
          t = not_null(q_18);
          return(t);
        }
        if(((q_18 != NULL) && (q_18 != t)))
          _fail(t);
        else
          q_18 = t;
        t = t_18(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(m_18));
        t = j_113(t);
        t = fclose_0_0(t);
        t = not_null(m_18);
      }
    }
    return(t);
  }
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = not_null(i_18);
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      t = r_18(t);
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
  ATerm y_18 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm z_18 = NULL,a_19 = NULL;
            ATerm d_19 (ATerm t)
            {
              t = not_null(a_19);
              if(((y_18 != NULL) && (y_18 != t)))
                _fail(t);
              else
                y_18 = t;
              t = not_null(z_18);
              return(t);
            }
            if(((z_18 != NULL) && (z_18 != t)))
              _fail(t);
            else
              z_18 = t;
            t = not_null(z_18);
            if(match_cons(t, sym_Output_1))
              {
                a_19 = ATgetArgument(t, 0);
                t = d_19(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(h_1, t);
          ;
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          {
            ATerm b_19 = NULL;
            ATerm e_19 (ATerm t)
            {
              t = not_null(b_19);
              if(((y_18 != NULL) && (y_18 != t)))
                _fail(t);
              else
                y_18 = t;
              t = not_null(b_19);
              return(t);
            }
            t = term_f_19;
            if(((b_19 != NULL) && (b_19 != t)))
              _fail(t);
            else
              b_19 = t;
            t = e_19(t);
          }
        }
      return(t);
    }
    t = _2_0(g_1, _id, t);
  }
  t = v_18;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm j_1 (ATerm t)
      {
        t = not_null(y_18);
        return(t);
      }
      t = split_2_0(j_1, _id, t);
      return(t);
    }
    t = _2_0(_id, i_1, t);
    {
      ATerm g_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              ATerm c_19 = NULL;
              if(((c_19 != NULL) && (c_19 != t)))
                _fail(t);
              else
                c_19 = t;
              t = not_null(c_19);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(c_19);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(l_1, t);
            return(t);
          }
          t = _2_0(k_1, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(h_19);
        }
      else
        {
          t = g_19;
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
ATerm apply_strategy_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  ATerm q_19 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL;
    t = not_null(l_19);
    if(((n_19 != NULL) && (n_19 != t)))
      _fail(t);
    else
      n_19 = t;
    t = not_null(m_19);
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_19))), not_null(o_19));
    return(t);
  }
  ATerm r_19;
  r_19 = t;
  t = dtime_0_0(t);
  t = r_19;
  t = l_116(t);
  {
    ATerm s_19;
    s_19 = t;
    {
      ATerm j_19 = NULL;
      ATerm p_19 (ATerm t)
      {
        t = not_null(j_19);
        if(((i_19 != NULL) && (i_19 != t)))
          _fail(t);
        else
          i_19 = t;
        t = not_null(j_19);
        return(t);
      }
      t = dtime_0_0(t);
      if(((j_19 != NULL) && (j_19 != t)))
        _fail(t);
      else
        j_19 = t;
      t = p_19(t);
    }
    t = s_19;
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = not_null(k_19);
    if(match_cons(t, sym__2))
      {
        l_19 = ATgetArgument(t, 0);
        m_19 = ATgetArgument(t, 1);
        t = q_19(t);
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
  ATerm u_19 = NULL,v_19 = NULL;
  ATerm a_20 (ATerm t)
  {
    ATerm w_19 = NULL;
    t = not_null(u_19);
    if(((w_19 != NULL) && (w_19 != t)))
      _fail(t);
    else
      w_19 = t;
    t = not_null(v_19);
    t = SSL_fclose(not_null(w_19));
    return(t);
  }
  ATerm b_20 (ATerm t)
  {
    ATerm z_19 = NULL;
    t = not_null(v_19);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = not_null(v_19);
    t = SSL_fclose(not_null(z_19));
    return(t);
  }
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = not_null(v_19);
  if(match_cons(t, sym_Stream_1))
    {
      u_19 = ATgetArgument(t, 0);
      {
        ATerm t_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_20(t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = t_19;
            t = b_20(t);
          }
      }
    }
  else
    {
      t = b_20(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  ATerm h_20 (ATerm t)
  {
    ATerm g_20 = NULL;
    t = not_null(f_20);
    if(((g_20 != NULL) && (g_20 != t)))
      _fail(t);
    else
      g_20 = t;
    t = not_null(e_20);
    t = SSL_read_term_from_stream(not_null(g_20));
    return(t);
  }
  if(((e_20 != NULL) && (e_20 != t)))
    _fail(t);
  else
    e_20 = t;
  t = not_null(e_20);
  if(match_cons(t, sym_Stream_1))
    {
      f_20 = ATgetArgument(t, 0);
      t = h_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm y_19;
  y_19 = t;
  {
    ATerm k_20 = NULL,m_20 = NULL;
    ATerm c_20;
    c_20 = t;
    {
      ATerm l_20 = NULL;
      ATerm o_20 (ATerm t)
      {
        t = not_null(l_20);
        if(((k_20 != NULL) && (k_20 != t)))
          _fail(t);
        else
          k_20 = t;
        t = not_null(l_20);
        return(t);
      }
      t = v_112(t);
      if(((l_20 != NULL) && (l_20 != t)))
        _fail(t);
      else
        l_20 = t;
      t = o_20(t);
    }
    t = c_20;
    {
      ATerm n_20 = NULL;
      ATerm p_20 (ATerm t)
      {
        t = not_null(n_20);
        if(((m_20 != NULL) && (m_20 != t)))
          _fail(t);
        else
          m_20 = t;
        t = not_null(n_20);
        return(t);
      }
      if(((n_20 != NULL) && (n_20 != t)))
        _fail(t);
      else
        n_20 = t;
      t = p_20(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_20)), not_null(k_20)));
      t = printnl_0_0(t);
    }
  }
  t = y_19;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm a_21 (ATerm t)
  {
    ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
    t = not_null(u_20);
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    t = not_null(v_20);
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    t = not_null(t_20);
    t = SSL_fopen(not_null(w_20), not_null(x_20));
    {
      ATerm z_20 = NULL;
      ATerm b_21 (ATerm t)
      {
        t = not_null(z_20);
        if(((y_20 != NULL) && (y_20 != t)))
          _fail(t);
        else
          y_20 = t;
        t = not_null(z_20);
        return(t);
      }
      if(((z_20 != NULL) && (z_20 != t)))
        _fail(t);
      else
        z_20 = t;
      t = b_21(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_20));
    }
    return(t);
  }
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  t = not_null(t_20);
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      t = a_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  ATerm f_21 (ATerm t)
  {
    ATerm e_21 = NULL;
    t = not_null(d_21);
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    t = not_null(d_21);
    t = SSL_is_string(not_null(e_21));
    return(t);
  }
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  t = f_21(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_21 = NULL;
    ATerm j_21 (ATerm t)
    {
      t = not_null(i_21);
      if(((h_21 != NULL) && (h_21 != t)))
        _fail(t);
      else
        h_21 = t;
      t = not_null(i_21);
      return(t);
    }
    if(((i_21 != NULL) && (i_21 != t)))
      _fail(t);
    else
      i_21 = t;
    t = j_21(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_21));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_21 = NULL;
    ATerm n_21 (ATerm t)
    {
      t = not_null(m_21);
      if(((l_21 != NULL) && (l_21 != t)))
        _fail(t);
      else
        l_21 = t;
      t = not_null(m_21);
      return(t);
    }
    if(((m_21 != NULL) && (m_21 != t)))
      _fail(t);
    else
      m_21 = t;
    t = n_21(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_21));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_21 = NULL;
    ATerm r_21 (ATerm t)
    {
      t = not_null(q_21);
      if(((p_21 != NULL) && (p_21 != t)))
        _fail(t);
      else
        p_21 = t;
      t = not_null(q_21);
      return(t);
    }
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = r_21(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_21));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm w_21 = NULL;
  ATerm x_21 (ATerm t)
  {
    t = not_null(w_21);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm y_21 (ATerm t)
  {
    t = not_null(w_21);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm z_21 (ATerm t)
  {
    t = not_null(w_21);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((w_21 != NULL) && (w_21 != t)))
    _fail(t);
  else
    w_21 = t;
  t = not_null(w_21);
  if(match_cons(t, sym_stderr_0))
    {
      t = x_21(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_21(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = z_21(t);
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
  ATerm g_22 = NULL;
  ATerm r_22 (ATerm t)
  {
    ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
    t = not_null(g_22);
    if(((h_22 != NULL) && (h_22 != t)))
      _fail(t);
    else
      h_22 = t;
    t = not_null(g_22);
    {
      ATerm k_22 = NULL;
      ATerm s_22 (ATerm t)
      {
        ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
        ATerm t_22 (ATerm t)
        {
          t = not_null(p_22);
          if(((j_22 != NULL) && (j_22 != t)))
            _fail(t);
          else
            j_22 = t;
          t = not_null(q_22);
          if(((i_22 != NULL) && (i_22 != t)))
            _fail(t);
          else
            i_22 = t;
          t = not_null(m_22);
          return(t);
        }
        t = not_null(k_22);
        if(((l_22 != NULL) && (l_22 != t)))
          _fail(t);
        else
          l_22 = t;
        t = not_null(k_22);
        t = SSL_explode_term(not_null(l_22));
        if(((m_22 != NULL) && (m_22 != t)))
          _fail(t);
        else
          m_22 = t;
        t = not_null(m_22);
        if(match_cons(t, sym__2))
          {
            n_22 = ATgetArgument(t, 0);
            o_22 = ATgetArgument(t, 1);
            t = not_null(n_22);
            if(match_string(t, ""))
              {
                t = not_null(o_22);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_22 = ATgetFirst((ATermList) t);
                    q_22 = (ATerm) ATgetNext((ATermList) t);
                    t = t_22(t);
                  }
                else
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
      t = not_null(h_22);
      if(((k_22 != NULL) && (k_22 != t)))
        _fail(t);
      else
        k_22 = t;
      t = s_22(t);
      t = not_null(j_22);
    }
    return(t);
  }
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = r_22(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm e_23 (ATerm t)
  {
    t = not_null(y_22);
    {
      ATerm d_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(i_20);
        }
      else
        {
          t = d_20;
          {
            ATerm j_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm b_23 = NULL,c_23 = NULL;
                  ATerm f_23 (ATerm t)
                  {
                    ATerm d_23 = NULL;
                    t = not_null(c_23);
                    if(((d_23 != NULL) && (d_23 != t)))
                      _fail(t);
                    else
                      d_23 = t;
                    t = not_null(d_23);
                    return(t);
                  }
                  if(((b_23 != NULL) && (b_23 != t)))
                    _fail(t);
                  else
                    b_23 = t;
                  t = not_null(b_23);
                  if(match_cons(t, sym_Path_1))
                    {
                      c_23 = ATgetArgument(t, 0);
                      t = f_23(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(m_1, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = j_20;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = not_null(y_22);
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
      t = e_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      ATerm m_23 (ATerm t)
      {
        t = not_null(j_23);
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        t = not_null(j_23);
        return(t);
      }
      if(((j_23 != NULL) && (j_23 != t)))
        _fail(t);
      else
        j_23 = t;
      t = m_23(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_c_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm n_1 (ATerm t)
        {
          t = term_g_21;
          return(t);
        }
        t = debug_1_0(n_1, t);
        _fail(t);
      }
    }
  {
    ATerm k_21;
    k_21 = t;
    {
      ATerm l_23 = NULL;
      ATerm n_23 (ATerm t)
      {
        t = not_null(l_23);
        if(((k_23 != NULL) && (k_23 != t)))
          _fail(t);
        else
          k_23 = t;
        t = not_null(l_23);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((l_23 != NULL) && (l_23 != t)))
        _fail(t);
      else
        l_23 = t;
      t = n_23(t);
    }
    t = k_21;
    t = fclose_0_0(t);
    t = not_null(k_23);
  }
  return(t);
}
ATerm split_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,s_23 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm r_23 = NULL;
    ATerm u_23 (ATerm t)
    {
      t = not_null(r_23);
      if(((q_23 != NULL) && (q_23 != t)))
        _fail(t);
      else
        q_23 = t;
      t = not_null(r_23);
      return(t);
    }
    t = w_108(t);
    if(((r_23 != NULL) && (r_23 != t)))
      _fail(t);
    else
      r_23 = t;
    t = u_23(t);
  }
  t = o_21;
  {
    ATerm t_23 = NULL;
    ATerm v_23 (ATerm t)
    {
      t = not_null(t_23);
      if(((s_23 != NULL) && (s_23 != t)))
        _fail(t);
      else
        s_23 = t;
      t = not_null(t_23);
      return(t);
    }
    t = x_108(t);
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = v_23(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(s_23));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 (ATerm t)
        {
          ATerm a_24 = NULL,b_24 = NULL;
          ATerm d_24 (ATerm t)
          {
            t = not_null(b_24);
            if(((z_23 != NULL) && (z_23 != t)))
              _fail(t);
            else
              z_23 = t;
            t = not_null(a_24);
            return(t);
          }
          if(((a_24 != NULL) && (a_24 != t)))
            _fail(t);
          else
            a_24 = t;
          t = not_null(a_24);
          if(match_cons(t, sym_Input_1))
            {
              b_24 = ATgetArgument(t, 0);
              t = d_24(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(o_1, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm c_24 = NULL;
          ATerm e_24 (ATerm t)
          {
            t = not_null(c_24);
            if(((z_23 != NULL) && (z_23 != t)))
              _fail(t);
            else
              z_23 = t;
            t = not_null(c_24);
            return(t);
          }
          t = term_v_21;
          if(((c_24 != NULL) && (c_24 != t)))
            _fail(t);
          else
            c_24 = t;
          t = e_24(t);
        }
      }
  }
  t = s_21;
  {
    ATerm p_1 (ATerm t)
    {
      t = not_null(z_23);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, p_1, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm h_24 = NULL;
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(h_24);
    if(match_string(t, "-k"))
      {
        t = not_null(h_24);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(h_24);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm a_22;
    a_22 = t;
    {
      ATerm i_24 = NULL;
      ATerm j_24 = NULL;
      ATerm k_24 (ATerm t)
      {
        t = not_null(j_24);
        if(((i_24 != NULL) && (i_24 != t)))
          _fail(t);
        else
          i_24 = t;
        t = not_null(j_24);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((j_24 != NULL) && (j_24 != t)))
        _fail(t);
      else
        j_24 = t;
      t = k_24(t);
      t = (ATerm) ATmakeAppl(sym__2, term_b_22, not_null(i_24));
      t = set_config_0_0(t);
    }
    t = a_22;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_c_22;
    return(t);
  }
  t = ArgOption_3_0(q_1, r_1, s_1, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm m_24 = NULL;
  ATerm o_24 (ATerm t)
  {
    ATerm n_24 = NULL;
    t = not_null(m_24);
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
    t = not_null(m_24);
    t = SSL_string_to_int(not_null(n_24));
    return(t);
  }
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = o_24(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm u_24 = NULL;
        if(((u_24 != NULL) && (u_24 != t)))
          _fail(t);
        else
          u_24 = t;
        t = not_null(u_24);
        if(match_string(t, "-S"))
          {
            t = not_null(u_24);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(u_24);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = term_u_22;
        t = set_config_0_0(t);
        t = term_v_22;
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_w_22;
        return(t);
      }
      t = Option_3_0(w_1, x_1, y_1, t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm x_22 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm v_24 = NULL;
              if(((v_24 != NULL) && (v_24 != t)))
                _fail(t);
              else
                v_24 = t;
              t = not_null(v_24);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(v_24);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_2 (ATerm t)
            {
              ATerm y_24 = NULL;
              ATerm h_23;
              h_23 = t;
              {
                ATerm w_24 = NULL;
                ATerm x_24 = NULL;
                ATerm b_25 (ATerm t)
                {
                  t = not_null(x_24);
                  if(((w_24 != NULL) && (w_24 != t)))
                    _fail(t);
                  else
                    w_24 = t;
                  t = not_null(x_24);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((x_24 != NULL) && (x_24 != t)))
                  _fail(t);
                else
                  x_24 = t;
                t = b_25(t);
                t = (ATerm) ATmakeAppl(sym__2, term_f_18, not_null(w_24));
                t = set_config_0_0(t);
              }
              t = h_23;
              {
                ATerm z_24 = NULL;
                ATerm c_25 (ATerm t)
                {
                  t = not_null(z_24);
                  if(((y_24 != NULL) && (y_24 != t)))
                    _fail(t);
                  else
                    y_24 = t;
                  t = not_null(z_24);
                  return(t);
                }
                if(((z_24 != NULL) && (z_24 != t)))
                  _fail(t);
                else
                  z_24 = t;
                t = c_25(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_24));
              }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_o_23;
              return(t);
            }
            t = ArgOption_3_0(z_1, a_2, b_2, t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = x_22;
            {
              ATerm c_2 (ATerm t)
              {
                ATerm a_25 = NULL;
                if(((a_25 != NULL) && (a_25 != t)))
                  _fail(t);
                else
                  a_25 = t;
                t = not_null(a_25);
                if(match_string(t, "-s"))
                  {
                    t = not_null(a_25);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_2 (ATerm t)
              {
                t = term_w_23;
                t = set_config_0_0(t);
                t = term_x_23;
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_y_23;
                return(t);
              }
              t = Option_3_0(c_2, d_2, e_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_25 = NULL;
    if(((g_25 != NULL) && (g_25 != t)))
      _fail(t);
    else
      g_25 = t;
    t = not_null(g_25);
    if(match_string(t, "-o"))
      {
        t = not_null(g_25);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(g_25);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm j_25 = NULL;
    ATerm l_24;
    l_24 = t;
    {
      ATerm h_25 = NULL;
      ATerm i_25 = NULL;
      ATerm l_25 (ATerm t)
      {
        t = not_null(i_25);
        if(((h_25 != NULL) && (h_25 != t)))
          _fail(t);
        else
          h_25 = t;
        t = not_null(i_25);
        return(t);
      }
      if(((i_25 != NULL) && (i_25 != t)))
        _fail(t);
      else
        i_25 = t;
      t = l_25(t);
      t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(h_25));
      t = set_config_0_0(t);
    }
    t = l_24;
    {
      ATerm k_25 = NULL;
      ATerm m_25 (ATerm t)
      {
        t = not_null(k_25);
        if(((j_25 != NULL) && (j_25 != t)))
          _fail(t);
        else
          j_25 = t;
        t = not_null(k_25);
        return(t);
      }
      if(((k_25 != NULL) && (k_25 != t)))
        _fail(t);
      else
        k_25 = t;
      t = m_25(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_25));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  t = ArgOption_3_0(f_2, j_2, k_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm o_25 = NULL;
          if(((o_25 != NULL) && (o_25 != t)))
            _fail(t);
          else
            o_25 = t;
          t = not_null(o_25);
          if(match_string(t, "-b"))
            {
              t = not_null(o_25);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_d_25;
          t = set_config_0_0(t);
          t = term_e_25;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_f_25;
          return(t);
        }
        t = Option_3_0(l_2, m_2, n_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  ATerm e_26 (ATerm t)
  {
    t = not_null(u_25);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm f_26 (ATerm t)
  {
    ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
    t = not_null(v_25);
    if(((z_25 != NULL) && (z_25 != t)))
      _fail(t);
    else
      z_25 = t;
    t = not_null(x_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(y_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(u_25);
    {
      ATerm n_25;
      n_25 = t;
      t = not_null(z_25);
      t = i_0(t);
      t = n_25;
      {
        ATerm d_26 = NULL;
        ATerm g_26 (ATerm t)
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
        t = k_0(t);
        if(((d_26 != NULL) && (d_26 != t)))
          _fail(t);
        else
          d_26 = t;
        t = g_26(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(b_26)), not_null(c_26));
      }
    }
    return(t);
  }
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = not_null(u_25);
  if(match_string(t, "register-usage-info"))
    {
      t = e_26(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_25 = ATgetFirst((ATermList) t);
          w_25 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(w_25);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_25 = ATgetFirst((ATermList) t);
              y_25 = (ATerm) ATgetNext((ATermList) t);
              t = f_26(t);
            }
          else
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
  ATerm o_2 (ATerm t)
  {
    ATerm k_26 = NULL;
    if(((k_26 != NULL) && (k_26 != t)))
      _fail(t);
    else
      k_26 = t;
    t = not_null(k_26);
    if(match_string(t, "-i"))
      {
        t = not_null(k_26);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(k_26);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm n_26 = NULL;
    ATerm p_25;
    p_25 = t;
    {
      ATerm l_26 = NULL;
      ATerm m_26 = NULL;
      ATerm p_26 (ATerm t)
      {
        t = not_null(m_26);
        if(((l_26 != NULL) && (l_26 != t)))
          _fail(t);
        else
          l_26 = t;
        t = not_null(m_26);
        return(t);
      }
      if(((m_26 != NULL) && (m_26 != t)))
        _fail(t);
      else
        m_26 = t;
      t = p_26(t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_25, not_null(l_26));
      t = set_config_0_0(t);
    }
    t = p_25;
    {
      ATerm o_26 = NULL;
      ATerm q_26 (ATerm t)
      {
        t = not_null(o_26);
        if(((n_26 != NULL) && (n_26 != t)))
          _fail(t);
        else
          n_26 = t;
        t = not_null(o_26);
        return(t);
      }
      if(((o_26 != NULL) && (o_26 != t)))
        _fail(t);
      else
        o_26 = t;
      t = q_26(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_26));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_r_25;
    return(t);
  }
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm t_26 = NULL;
    ATerm u_26 (ATerm t)
    {
      t = not_null(t_26);
      if(((s_26 != NULL) && (s_26 != t)))
        _fail(t);
      else
        s_26 = t;
      t = not_null(t_26);
      return(t);
    }
    t = term_c_15;
    t = whoami_0_0(t);
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = u_26(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, term_j_26), not_null(s_26)));
    t = printnl_0_0(t);
    t = term_g_15;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  ATerm y_26 (ATerm t)
  {
    ATerm x_26 = NULL;
    t = not_null(w_26);
    if(((x_26 != NULL) && (x_26 != t)))
      _fail(t);
    else
      x_26 = t;
    t = not_null(w_26);
    t = SSL_TicksToSeconds(not_null(x_26));
    return(t);
  }
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = y_26(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  ATerm g_27 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL;
    t = not_null(c_27);
    if(((e_27 != NULL) && (e_27 != t)))
      _fail(t);
    else
      e_27 = t;
    t = not_null(d_27);
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    t = not_null(b_27);
    {
      ATerm v_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(e_27), not_null(f_27));
          ;
          LocalPopChoice(z_26);
        }
      else
        {
          t = v_26;
          t = SSL_addr(not_null(e_27), not_null(f_27));
        }
    }
    return(t);
  }
  if(((b_27 != NULL) && (b_27 != t)))
    _fail(t);
  else
    b_27 = t;
  t = not_null(b_27);
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
      t = g_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  ATerm a_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = h_107(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = a_27;
      {
        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
        ATerm r_27 (ATerm t)
        {
          ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
          t = not_null(l_27);
          if(((n_27 != NULL) && (n_27 != t)))
            _fail(t);
          else
            n_27 = t;
          t = not_null(m_27);
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = not_null(k_27);
          {
            ATerm q_27 = NULL;
            ATerm s_27 (ATerm t)
            {
              t = not_null(q_27);
              if(((p_27 != NULL) && (p_27 != t)))
                _fail(t);
              else
                p_27 = t;
              t = not_null(q_27);
              return(t);
            }
            t = not_null(o_27);
            t = foldr_2_0(h_107, i_107, t);
            if(((q_27 != NULL) && (q_27 != t)))
              _fail(t);
            else
              q_27 = t;
            t = s_27(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(p_27));
            t = i_107(t);
          }
          return(t);
        }
        if(((k_27 != NULL) && (k_27 != t)))
          _fail(t);
        else
          k_27 = t;
        t = not_null(k_27);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_27 = ATgetFirst((ATermList) t);
            m_27 = (ATerm) ATgetNext((ATermList) t);
            t = r_27(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t)
{
  ATerm x_27 = NULL;
  ATerm f_28 (ATerm t)
  {
    ATerm y_27 = NULL,z_27 = NULL;
    t = not_null(x_27);
    if(((y_27 != NULL) && (y_27 != t)))
      _fail(t);
    else
      y_27 = t;
    t = not_null(x_27);
    {
      ATerm a_28 = NULL;
      ATerm g_28 (ATerm t)
      {
        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
        ATerm h_28 (ATerm t)
        {
          t = not_null(e_28);
          if(((z_27 != NULL) && (z_27 != t)))
            _fail(t);
          else
            z_27 = t;
          t = not_null(c_28);
          return(t);
        }
        t = not_null(a_28);
        if(((b_28 != NULL) && (b_28 != t)))
          _fail(t);
        else
          b_28 = t;
        t = not_null(a_28);
        t = SSL_explode_term(not_null(b_28));
        if(((c_28 != NULL) && (c_28 != t)))
          _fail(t);
        else
          c_28 = t;
        t = not_null(c_28);
        if(match_cons(t, sym__2))
          {
            d_28 = ATgetArgument(t, 0);
            e_28 = ATgetArgument(t, 1);
            t = h_28(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(y_27);
      if(((a_28 != NULL) && (a_28 != t)))
        _fail(t);
      else
        a_28 = t;
      t = g_28(t);
      t = not_null(z_27);
      t = foldr_2_0(a_111, b_111, t);
    }
    return(t);
  }
  if(((x_27 != NULL) && (x_27 != t)))
    _fail(t);
  else
    x_27 = t;
  t = f_28(t);
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
    ATerm f_3 (ATerm t)
    {
      t = term_f_22;
      return(t);
    }
    t = crush_2_0(f_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  ATerm p_28 (ATerm t)
  {
    ATerm n_28 = NULL,o_28 = NULL;
    t = not_null(l_28);
    if(((n_28 != NULL) && (n_28 != t)))
      _fail(t);
    else
      n_28 = t;
    t = not_null(m_28);
    if(((o_28 != NULL) && (o_28 != t)))
      _fail(t);
    else
      o_28 = t;
    t = not_null(k_28);
    {
      ATerm i_27;
      i_27 = t;
      {
        ATerm j_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(n_28), not_null(o_28));
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = j_27;
            t = SSL_gtr(not_null(n_28), not_null(o_28));
          }
      }
      t = i_27;
    }
    return(t);
  }
  if(((k_28 != NULL) && (k_28 != t)))
    _fail(t);
  else
    k_28 = t;
  t = not_null(k_28);
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      t = p_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
      ATerm w_28 (ATerm t)
      {
        t = not_null(u_28);
        if(((s_28 != NULL) && (s_28 != t)))
          _fail(t);
        else
          s_28 = t;
        t = not_null(v_28);
        if(((s_28 != NULL) && (s_28 != t)))
          _fail(t);
        else
          s_28 = t;
        t = not_null(t_28);
        return(t);
      }
      if(((t_28 != NULL) && (t_28 != t)))
        _fail(t);
      else
        t_28 = t;
      t = not_null(t_28);
      if(match_cons(t, sym__2))
        {
          u_28 = ATgetArgument(t, 0);
          v_28 = ATgetArgument(t, 1);
          t = w_28(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm w_27;
    w_27 = t;
    {
      ATerm y_28 = NULL;
      ATerm z_28 = NULL;
      ATerm a_29 (ATerm t)
      {
        t = not_null(z_28);
        if(((y_28 != NULL) && (y_28 != t)))
          _fail(t);
        else
          y_28 = t;
        t = not_null(z_28);
        return(t);
      }
      t = term_f_18;
      t = get_config_0_0(t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = a_29(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), term_g_15);
      t = geq_0_0(t);
    }
    t = w_27;
    t = m_114(t);
    return(t);
  }
  t = try_1_0(g_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm d_29 = NULL,f_29 = NULL;
    ATerm i_28;
    i_28 = t;
    {
      ATerm e_29 = NULL;
      ATerm h_29 (ATerm t)
      {
        t = not_null(e_29);
        if(((d_29 != NULL) && (d_29 != t)))
          _fail(t);
        else
          d_29 = t;
        t = not_null(e_29);
        return(t);
      }
      t = run_time_0_0(t);
      if(((e_29 != NULL) && (e_29 != t)))
        _fail(t);
      else
        e_29 = t;
      t = h_29(t);
    }
    t = i_28;
    {
      ATerm g_29 = NULL;
      ATerm i_29 (ATerm t)
      {
        t = not_null(g_29);
        if(((f_29 != NULL) && (f_29 != t)))
          _fail(t);
        else
          f_29 = t;
        t = not_null(g_29);
        return(t);
      }
      t = term_c_15;
      t = whoami_0_0(t);
      if(((g_29 != NULL) && (g_29 != t)))
        _fail(t);
      else
        g_29 = t;
      t = i_29(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_28), not_null(d_29)), term_j_28), not_null(f_29)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_f_22;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm n_29 = NULL;
  ATerm t_29 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
    t = not_null(n_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(n_29);
    {
      ATerm r_28;
      r_28 = t;
      {
        ATerm q_29 = NULL;
        ATerm u_29 (ATerm t)
        {
          t = not_null(q_29);
          if(((p_29 != NULL) && (p_29 != t)))
            _fail(t);
          else
            p_29 = t;
          t = not_null(q_29);
          return(t);
        }
        t = SSLgetAnnotations(not_null(o_29));
        if(((q_29 != NULL) && (q_29 != t)))
          _fail(t);
        else
          q_29 = t;
        t = u_29(t);
      }
      t = r_28;
      {
        ATerm s_29 = NULL;
        ATerm v_29 (ATerm t)
        {
          t = not_null(s_29);
          if(((r_29 != NULL) && (r_29 != t)))
            _fail(t);
          else
            r_29 = t;
          t = not_null(s_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_29));
        if(((s_29 != NULL) && (s_29 != t)))
          _fail(t);
        else
          s_29 = t;
        t = v_29(t);
        t = not_null(r_29);
      }
    }
    return(t);
  }
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = not_null(n_29);
  if(match_cons(t, sym_Version_0))
    {
      t = t_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = x_28;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              {
                ATerm l_29 = t;
                int m_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_29);
                  }
                else
                  {
                    t = l_29;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(i_3, t);
      }
    }
  t = j_117(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_29 = NULL;
  ATerm z_29 (ATerm t)
  {
    ATerm y_29 = NULL;
    t = not_null(x_29);
    if(((y_29 != NULL) && (y_29 != t)))
      _fail(t);
    else
      y_29 = t;
    t = not_null(x_29);
    t = SSL_table_create(not_null(y_29));
    return(t);
  }
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  t = z_29(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm b_30 = NULL;
  ATerm d_30 (ATerm t)
  {
    ATerm c_30 = NULL;
    t = not_null(b_30);
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    t = not_null(b_30);
    {
      ATerm w_29;
      w_29 = t;
      t = term_a_30;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_a_30, term_e_30, not_null(c_30));
      t = table_put_0_0(t);
      t = w_29;
    }
    return(t);
  }
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = d_30(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  ATerm h_30 (ATerm t)
  {
    ATerm g_30 = NULL;
    t = not_null(f_30);
    if(((g_30 != NULL) && (g_30 != t)))
      _fail(t);
    else
      g_30 = t;
    t = not_null(f_30);
    t = SSL_table_destroy(not_null(g_30));
    return(t);
  }
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = h_30(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm l_30 (ATerm t)
  {
    ATerm k_30 = NULL;
    t = not_null(j_30);
    if(((k_30 != NULL) && (k_30 != t)))
      _fail(t);
    else
      k_30 = t;
    t = not_null(j_30);
    t = SSL_exit(not_null(k_30));
    return(t);
  }
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  t = l_30(t);
  return(t);
}
ATerm long_description_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm m_30 (ATerm t)
  {
    ATerm i_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = i_30;
        t = Cons_2_0(g_101, m_30, t);
      }
    return(t);
  }
  t = m_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  ATerm e_31 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
    t = not_null(t_30);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = not_null(u_30);
    if(((x_30 != NULL) && (x_30 != t)))
      _fail(t);
    else
      x_30 = t;
    t = not_null(x_30);
    {
      ATerm o_30;
      o_30 = t;
      {
        ATerm z_30 = NULL,b_31 = NULL,d_31 = NULL;
        ATerm i_31 (ATerm t)
        {
          t = not_null(d_31);
          if(((y_30 != NULL) && (y_30 != t)))
            _fail(t);
          else
            y_30 = t;
          t = not_null(d_31);
          return(t);
        }
        ATerm p_30;
        p_30 = t;
        {
          ATerm a_31 = NULL;
          ATerm g_31 (ATerm t)
          {
            t = not_null(a_31);
            if(((z_30 != NULL) && (z_30 != t)))
              _fail(t);
            else
              z_30 = t;
            t = not_null(a_31);
            return(t);
          }
          t = g_0(t);
          if(((a_31 != NULL) && (a_31 != t)))
            _fail(t);
          else
            a_31 = t;
          t = g_31(t);
        }
        t = p_30;
        {
          ATerm c_31 = NULL;
          ATerm h_31 (ATerm t)
          {
            t = not_null(c_31);
            if(((b_31 != NULL) && (b_31 != t)))
              _fail(t);
            else
              b_31 = t;
            t = not_null(c_31);
            return(t);
          }
          t = not_null(w_30);
          t = e_0(t);
          if(((c_31 != NULL) && (c_31 != t)))
            _fail(t);
          else
            c_31 = t;
          t = h_31(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(b_31));
          if(((d_31 != NULL) && (d_31 != t)))
            _fail(t);
          else
            d_31 = t;
          t = i_31(t);
        }
      }
      t = o_30;
      {
        ATerm j_3 (ATerm t)
        {
          t = not_null(y_30);
          return(t);
        }
        t = reverse_acc_2_0(e_0, j_3, t);
      }
    }
    return(t);
  }
  ATerm f_31 (ATerm t)
  {
    t = term_c_15;
    t = g_0(t);
    return(t);
  }
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = not_null(v_30);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
      t = e_31(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_31(t);
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
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, k_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm d_82 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  ATerm y_31 (ATerm t)
  {
    ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,u_31 = NULL;
    ATerm a_32 (ATerm t)
    {
      ATerm v_31 = NULL,w_31 = NULL;
      t = not_null(u_31);
      if(((v_31 != NULL) && (v_31 != t)))
        _fail(t);
      else
        v_31 = t;
      t = not_null(u_31);
      {
        ATerm x_31 = NULL;
        ATerm b_32 (ATerm t)
        {
          t = not_null(x_31);
          if(((w_31 != NULL) && (w_31 != t)))
            _fail(t);
          else
            w_31 = t;
          t = not_null(x_31);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_31)), not_null(s_31));
        if(((x_31 != NULL) && (x_31 != t)))
          _fail(t);
        else
          x_31 = t;
        t = b_32(t);
        t = not_null(w_31);
      }
      return(t);
    }
    t = not_null(o_31);
    if(((q_31 != NULL) && (q_31 != t)))
      _fail(t);
    else
      q_31 = t;
    t = not_null(p_31);
    if(((r_31 != NULL) && (r_31 != t)))
      _fail(t);
    else
      r_31 = t;
    t = not_null(o_31);
    {
      ATerm t_31 = NULL;
      ATerm z_31 (ATerm t)
      {
        t = not_null(t_31);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = not_null(t_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_31));
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      t = z_31(t);
      t = not_null(r_31);
      t = d_82(t);
      if(((u_31 != NULL) && (u_31 != t)))
        _fail(t);
      else
        u_31 = t;
      t = a_32(t);
    }
    return(t);
  }
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  t = not_null(o_31);
  if(match_cons(t, sym_Program_1))
    {
      p_31 = ATgetArgument(t, 0);
      t = y_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_32 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32 = NULL;
      ATerm n_32 (ATerm t)
      {
        t = not_null(h_32);
        if(((g_32 != NULL) && (g_32 != t)))
          _fail(t);
        else
          g_32 = t;
        t = not_null(h_32);
        return(t);
      }
      t = term_r_26;
      t = get_config_0_0(t);
      if(((h_32 != NULL) && (h_32 != t)))
        _fail(t);
      else
        h_32 = t;
      t = n_32(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            ATerm i_32 = NULL;
            ATerm o_32 (ATerm t)
            {
              t = not_null(i_32);
              if(((g_32 != NULL) && (g_32 != t)))
                _fail(t);
              else
                g_32 = t;
              t = not_null(i_32);
              return(t);
            }
            if(((i_32 != NULL) && (i_32 != t)))
              _fail(t);
            else
              i_32 = t;
            t = o_32(t);
            return(t);
          }
          t = Program_1_0(k_4, t);
          return(t);
        }
        t = option_defined_1_0(l_3, t);
      }
    }
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        t = not_null(g_32);
        return(t);
      }
      t = short_description_1_0(m_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = term_s_30;
    t = echo_0_0(t);
    t = term_l_31;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm j_32 = NULL;
        ATerm k_32 = NULL;
        ATerm p_32 (ATerm t)
        {
          t = not_null(k_32);
          if(((j_32 != NULL) && (j_32 != t)))
            _fail(t);
          else
            j_32 = t;
          t = not_null(k_32);
          return(t);
        }
        if(((k_32 != NULL) && (k_32 != t)))
          _fail(t);
        else
          k_32 = t;
        t = p_32(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_32)), term_m_31);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(n_4, t);
      {
        ATerm o_4 (ATerm t)
        {
          ATerm l_32 = NULL;
          ATerm m_32 = NULL;
          ATerm q_32 (ATerm t)
          {
            t = not_null(m_32);
            if(((l_32 != NULL) && (l_32 != t)))
              _fail(t);
            else
              l_32 = t;
            t = not_null(m_32);
            return(t);
          }
          ATerm p_4 (ATerm t)
          {
            t = not_null(g_32);
            return(t);
          }
          t = long_description_1_0(p_4, t);
          if(((m_32 != NULL) && (m_32 != t)))
            _fail(t);
          else
            m_32 = t;
          t = q_32(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(l_32)), term_n_31);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(o_4, t);
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
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  ATerm g_33 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,c_33 = NULL;
    ATerm i_33 (ATerm t)
    {
      ATerm d_33 = NULL,e_33 = NULL;
      t = not_null(c_33);
      if(((d_33 != NULL) && (d_33 != t)))
        _fail(t);
      else
        d_33 = t;
      t = not_null(c_33);
      {
        ATerm f_33 = NULL;
        ATerm j_33 (ATerm t)
        {
          t = not_null(f_33);
          if(((e_33 != NULL) && (e_33 != t)))
            _fail(t);
          else
            e_33 = t;
          t = not_null(f_33);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_33)), not_null(a_33));
        if(((f_33 != NULL) && (f_33 != t)))
          _fail(t);
        else
          f_33 = t;
        t = j_33(t);
        t = not_null(e_33);
      }
      return(t);
    }
    t = not_null(w_32);
    if(((y_32 != NULL) && (y_32 != t)))
      _fail(t);
    else
      y_32 = t;
    t = not_null(x_32);
    if(((z_32 != NULL) && (z_32 != t)))
      _fail(t);
    else
      z_32 = t;
    t = not_null(w_32);
    {
      ATerm b_33 = NULL;
      ATerm h_33 (ATerm t)
      {
        t = not_null(b_33);
        if(((a_33 != NULL) && (a_33 != t)))
          _fail(t);
        else
          a_33 = t;
        t = not_null(b_33);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_32));
      if(((b_33 != NULL) && (b_33 != t)))
        _fail(t);
      else
        b_33 = t;
      t = h_33(t);
      t = not_null(z_32);
      t = e_82(t);
      if(((c_33 != NULL) && (c_33 != t)))
        _fail(t);
      else
        c_33 = t;
      t = i_33(t);
    }
    return(t);
  }
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = not_null(w_32);
  if(match_cons(t, sym_Undefined_1))
    {
      x_32 = ATgetArgument(t, 0);
      t = g_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_101, _id, t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = Cons_2_0(_id, k_33, t);
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  t = fetch_1_0(j_118, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  t = not_null(m_33);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(m_33);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_33 = ATgetFirst((ATermList) t);
          o_33 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_33);
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
  ATerm r_32;
  r_32 = t;
  {
    ATerm r_33 = NULL;
    ATerm u_33 = NULL;
    ATerm w_33 (ATerm t)
    {
      t = not_null(u_33);
      if(((r_33 != NULL) && (r_33 != t)))
        _fail(t);
      else
        r_33 = t;
      t = not_null(u_33);
      return(t);
    }
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        {
          ATerm s_33 = NULL;
          ATerm t_33 = NULL;
          ATerm v_33 (ATerm t)
          {
            t = not_null(t_33);
            if(((s_33 != NULL) && (s_33 != t)))
              _fail(t);
            else
              s_33 = t;
            t = not_null(t_33);
            return(t);
          }
          if(((t_33 != NULL) && (t_33 != t)))
            _fail(t);
          else
            t_33 = t;
          t = v_33(t);
          t = (ATerm) ATinsert(ATempty, not_null(s_33));
        }
      }
    if(((u_33 != NULL) && (u_33 != t)))
      _fail(t);
    else
      u_33 = t;
    t = w_33(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_19, not_null(r_33));
    t = printnl_0_0(t);
  }
  t = r_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_26;
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
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm h_34 (ATerm t)
  {
    ATerm c_34 = NULL,d_34 = NULL,f_34 = NULL;
    t = not_null(b_34);
    if(((c_34 != NULL) && (c_34 != t)))
      _fail(t);
    else
      c_34 = t;
    t = not_null(b_34);
    {
      ATerm l_33;
      l_33 = t;
      {
        ATerm e_34 = NULL;
        ATerm i_34 (ATerm t)
        {
          t = not_null(e_34);
          if(((d_34 != NULL) && (d_34 != t)))
            _fail(t);
          else
            d_34 = t;
          t = not_null(e_34);
          return(t);
        }
        t = SSLgetAnnotations(not_null(c_34));
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = i_34(t);
      }
      t = l_33;
      {
        ATerm g_34 = NULL;
        ATerm j_34 (ATerm t)
        {
          t = not_null(g_34);
          if(((f_34 != NULL) && (f_34 != t)))
            _fail(t);
          else
            f_34 = t;
          t = not_null(g_34);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_34));
        if(((g_34 != NULL) && (g_34 != t)))
          _fail(t);
        else
          g_34 = t;
        t = j_34(t);
        t = not_null(f_34);
      }
    }
    return(t);
  }
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  t = not_null(b_34);
  if(match_cons(t, sym_Help_0))
    {
      t = h_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_93(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm m_34 = NULL;
        if(((m_34 != NULL) && (m_34 != t)))
          _fail(t);
        else
          m_34 = t;
        t = not_null(m_34);
        if(match_string(t, "--about"))
          {
            t = not_null(m_34);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_a_34;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_k_34;
        return(t);
      }
      t = Option_3_0(a_5, b_5, e_5, t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm f_5 (ATerm t)
        {
          ATerm n_34 = NULL;
          if(((n_34 != NULL) && (n_34 != t)))
            _fail(t);
          else
            n_34 = t;
          t = not_null(n_34);
          if(match_string(t, "--version"))
            {
              t = not_null(n_34);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = term_a_34;
          t = set_config_0_0(t);
          t = term_o_34;
          t = set_config_0_0(t);
          t = term_p_34;
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          t = term_v_34;
          return(t);
        }
        t = Option_3_0(f_5, i_5, j_5, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  ATerm o_36 (ATerm t)
  {
    ATerm t_34 = NULL,u_34 = NULL;
    t = not_null(r_34);
    if(((t_34 != NULL) && (t_34 != t)))
      _fail(t);
    else
      t_34 = t;
    t = not_null(s_34);
    if(((u_34 != NULL) && (u_34 != t)))
      _fail(t);
    else
      u_34 = t;
    t = not_null(q_34);
    t = SSL_table_get(not_null(t_34), not_null(u_34));
    return(t);
  }
  if(((q_34 != NULL) && (q_34 != t)))
    _fail(t);
  else
    q_34 = t;
  t = not_null(q_34);
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
      t = o_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  ATerm b_37 (ATerm t)
  {
    ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
    t = not_null(t_36);
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    t = not_null(u_36);
    if(((y_36 != NULL) && (y_36 != t)))
      _fail(t);
    else
      y_36 = t;
    t = not_null(v_36);
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = not_null(s_36);
    {
      ATerm w_34;
      w_34 = t;
      {
        ATerm z_36 = NULL;
        ATerm a_37 = NULL;
        ATerm c_37 (ATerm t)
        {
          t = not_null(a_37);
          if(((z_36 != NULL) && (z_36 != t)))
            _fail(t);
          else
            z_36 = t;
          t = not_null(a_37);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_36), not_null(y_36));
        {
          ATerm x_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(y_34);
            }
          else
            {
              t = x_34;
              t = (ATerm) ATempty;
            }
          if(((a_37 != NULL) && (a_37 != t)))
            _fail(t);
          else
            a_37 = t;
          t = c_37(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_36), not_null(y_36), (ATerm) ATinsert(CheckATermList(not_null(z_36)), not_null(w_36)));
        t = table_put_0_0(t);
      }
      t = w_34;
    }
    return(t);
  }
  if(((s_36 != NULL) && (s_36 != t)))
    _fail(t);
  else
    s_36 = t;
  t = not_null(s_36);
  if(match_cons(t, sym__3))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
      v_36 = ATgetArgument(t, 2);
      t = b_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm e_37 = NULL;
  ATerm f_37 = NULL;
  ATerm g_37 (ATerm t)
  {
    t = not_null(f_37);
    if(((e_37 != NULL) && (e_37 != t)))
      _fail(t);
    else
      e_37 = t;
    t = not_null(f_37);
    return(t);
  }
  t = term_c_15;
  t = o_119(t);
  if(((f_37 != NULL) && (f_37 != t)))
    _fail(t);
  else
    f_37 = t;
  t = g_37(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, not_null(e_37));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  ATerm s_37 (ATerm t)
  {
    t = not_null(l_37);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm t_37 (ATerm t)
  {
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
    t = not_null(m_37);
    if(((o_37 != NULL) && (o_37 != t)))
      _fail(t);
    else
      o_37 = t;
    t = not_null(n_37);
    if(((p_37 != NULL) && (p_37 != t)))
      _fail(t);
    else
      p_37 = t;
    t = not_null(l_37);
    {
      ATerm z_34;
      z_34 = t;
      t = not_null(o_37);
      t = a_0(t);
      t = z_34;
      {
        ATerm r_37 = NULL;
        ATerm u_37 (ATerm t)
        {
          t = not_null(r_37);
          if(((q_37 != NULL) && (q_37 != t)))
            _fail(t);
          else
            q_37 = t;
          t = not_null(r_37);
          return(t);
        }
        t = term_c_15;
        t = c_0(t);
        if(((r_37 != NULL) && (r_37 != t)))
          _fail(t);
        else
          r_37 = t;
        t = u_37(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(p_37)), not_null(q_37));
      }
    }
    return(t);
  }
  if(((l_37 != NULL) && (l_37 != t)))
    _fail(t);
  else
    l_37 = t;
  t = not_null(l_37);
  if(match_string(t, "register-usage-info"))
    {
      t = s_37(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
          t = t_37(t);
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
  ATerm k_5 (ATerm t)
  {
    ATerm w_37 = NULL;
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = not_null(w_37);
    if(match_string(t, "--help"))
      {
        t = not_null(w_37);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(w_37);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(w_37);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_a_35;
    t = set_config_0_0(t);
    t = term_b_35;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_c_35;
    return(t);
  }
  t = Option_3_0(k_5, l_5, y_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  ATerm j_38 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL;
    t = not_null(f_38);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    t = not_null(g_38);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(i_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_38)));
    return(t);
  }
  if(((e_38 != NULL) && (e_38 != t)))
    _fail(t);
  else
    e_38 = t;
  t = not_null(e_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_38 = ATgetFirst((ATermList) t);
      g_38 = (ATerm) ATgetNext((ATermList) t);
      t = j_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,v_38 = NULL;
  ATerm h_39 (ATerm t)
  {
    ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,b_39 = NULL;
    ATerm j_39 (ATerm t)
    {
      ATerm c_39 = NULL,d_39 = NULL;
      ATerm k_39 (ATerm t)
      {
        ATerm e_39 = NULL,f_39 = NULL;
        t = not_null(d_39);
        if(((e_39 != NULL) && (e_39 != t)))
          _fail(t);
        else
          e_39 = t;
        t = not_null(d_39);
        {
          ATerm g_39 = NULL;
          ATerm l_39 (ATerm t)
          {
            t = not_null(g_39);
            if(((f_39 != NULL) && (f_39 != t)))
              _fail(t);
            else
              f_39 = t;
            t = not_null(g_39);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_39)), not_null(c_39)), not_null(z_38));
          if(((g_39 != NULL) && (g_39 != t)))
            _fail(t);
          else
            g_39 = t;
          t = l_39(t);
          t = not_null(f_39);
        }
        return(t);
      }
      t = not_null(b_39);
      if(((c_39 != NULL) && (c_39 != t)))
        _fail(t);
      else
        c_39 = t;
      t = not_null(y_38);
      t = m_73(t);
      if(((d_39 != NULL) && (d_39 != t)))
        _fail(t);
      else
        d_39 = t;
      t = k_39(t);
      return(t);
    }
    t = not_null(q_38);
    if(((w_38 != NULL) && (w_38 != t)))
      _fail(t);
    else
      w_38 = t;
    t = not_null(r_38);
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    t = not_null(v_38);
    if(((y_38 != NULL) && (y_38 != t)))
      _fail(t);
    else
      y_38 = t;
    t = not_null(q_38);
    {
      ATerm a_39 = NULL;
      ATerm i_39 (ATerm t)
      {
        t = not_null(a_39);
        if(((z_38 != NULL) && (z_38 != t)))
          _fail(t);
        else
          z_38 = t;
        t = not_null(a_39);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_38));
      if(((a_39 != NULL) && (a_39 != t)))
        _fail(t);
      else
        a_39 = t;
      t = i_39(t);
      t = not_null(x_38);
      t = l_73(t);
      if(((b_39 != NULL) && (b_39 != t)))
        _fail(t);
      else
        b_39 = t;
      t = j_39(t);
    }
    return(t);
  }
  if(((q_38 != NULL) && (q_38 != t)))
    _fail(t);
  else
    q_38 = t;
  t = not_null(q_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_38 = ATgetFirst((ATermList) t);
      v_38 = (ATerm) ATgetNext((ATermList) t);
      t = h_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm q_39 = NULL;
  ATerm w_39 (ATerm t)
  {
    ATerm r_39 = NULL,s_39 = NULL,u_39 = NULL;
    t = not_null(q_39);
    if(((r_39 != NULL) && (r_39 != t)))
      _fail(t);
    else
      r_39 = t;
    t = not_null(q_39);
    {
      ATerm d_35;
      d_35 = t;
      {
        ATerm t_39 = NULL;
        ATerm x_39 (ATerm t)
        {
          t = not_null(t_39);
          if(((s_39 != NULL) && (s_39 != t)))
            _fail(t);
          else
            s_39 = t;
          t = not_null(t_39);
          return(t);
        }
        t = SSLgetAnnotations(not_null(r_39));
        if(((t_39 != NULL) && (t_39 != t)))
          _fail(t);
        else
          t_39 = t;
        t = x_39(t);
      }
      t = d_35;
      {
        ATerm v_39 = NULL;
        ATerm y_39 (ATerm t)
        {
          t = not_null(v_39);
          if(((u_39 != NULL) && (u_39 != t)))
            _fail(t);
          else
            u_39 = t;
          t = not_null(v_39);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(s_39));
        if(((v_39 != NULL) && (v_39 != t)))
          _fail(t);
        else
          v_39 = t;
        t = y_39(t);
        t = not_null(u_39);
      }
    }
    return(t);
  }
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  t = not_null(q_39);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  ATerm g_40 (ATerm t)
  {
    ATerm e_40 = NULL,f_40 = NULL;
    t = not_null(c_40);
    if(((e_40 != NULL) && (e_40 != t)))
      _fail(t);
    else
      e_40 = t;
    t = not_null(d_40);
    if(((f_40 != NULL) && (f_40 != t)))
      _fail(t);
    else
      f_40 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_s_17, not_null(e_40), not_null(f_40));
    t = table_put_0_0(t);
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
      d_40 = ATgetArgument(t, 1);
      t = g_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_119 (ATerm), ATerm t)
{
  ATerm e_35;
  e_35 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_f_35;
      t = m_119(t);
      return(t);
    }
    t = try_1_0(z_5, t);
  }
  t = e_35;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm l_40 = NULL;
      ATerm g_35;
      g_35 = t;
      {
        ATerm j_40 = NULL;
        ATerm k_40 = NULL;
        ATerm n_40 (ATerm t)
        {
          t = not_null(k_40);
          if(((j_40 != NULL) && (j_40 != t)))
            _fail(t);
          else
            j_40 = t;
          t = not_null(k_40);
          return(t);
        }
        if(((k_40 != NULL) && (k_40 != t)))
          _fail(t);
        else
          k_40 = t;
        t = n_40(t);
        t = (ATerm) ATmakeAppl(sym__2, term_r_26, not_null(j_40));
        t = set_config_0_0(t);
      }
      t = g_35;
      {
        ATerm m_40 = NULL;
        ATerm o_40 (ATerm t)
        {
          t = not_null(m_40);
          if(((l_40 != NULL) && (l_40 != t)))
            _fail(t);
          else
            l_40 = t;
          t = not_null(m_40);
          return(t);
        }
        if(((m_40 != NULL) && (m_40 != t)))
          _fail(t);
        else
          m_40 = t;
        t = o_40(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_40));
      }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm h_35 = t;
      int i_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              t = m_119(t);
              t = Cons_2_0(_id, h_6, t);
            }
          ;
          LocalPopChoice(i_35);
        }
      else
        {
          t = h_35;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(g_6, h_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  ATerm l_35;
  l_35 = t;
  {
    ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
    ATerm z_40 (ATerm t)
    {
      t = not_null(w_40);
      if(((s_40 != NULL) && (s_40 != t)))
        _fail(t);
      else
        s_40 = t;
      t = not_null(x_40);
      if(((t_40 != NULL) && (t_40 != t)))
        _fail(t);
      else
        t_40 = t;
      t = not_null(y_40);
      if(((u_40 != NULL) && (u_40 != t)))
        _fail(t);
      else
        u_40 = t;
      t = not_null(v_40);
      t = SSL_table_put(not_null(s_40), not_null(t_40), not_null(u_40));
      return(t);
    }
    if(((v_40 != NULL) && (v_40 != t)))
      _fail(t);
    else
      v_40 = t;
    t = not_null(v_40);
    if(match_cons(t, sym__3))
      {
        w_40 = ATgetArgument(t, 0);
        x_40 = ATgetArgument(t, 1);
        y_40 = ATgetArgument(t, 2);
        t = z_40(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = l_35;
  return(t);
}
ATerm parse_options_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm b_41 = NULL;
  ATerm m_35;
  m_35 = t;
  t = term_n_35;
  t = table_put_0_0(t);
  t = m_35;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_119(t);
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
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
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_35;
            u_35 = t;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_29;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = u_35;
            t = system_usage_0_0(t);
            t = term_f_22;
            t = exit_0_0(t);
            ;
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            {
              ATerm x_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_35;
                  z_35 = t;
                  t = term_z_33;
                  t = get_config_0_0(t);
                  t = z_35;
                  t = system_about_0_0(t);
                  t = term_f_22;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(y_35);
                }
              else
                {
                  t = x_35;
                  {
                    ATerm o_6 (ATerm t)
                    {
                      ATerm p_6 (ATerm t)
                      {
                        ATerm c_41 = NULL;
                        ATerm d_41 (ATerm t)
                        {
                          t = not_null(c_41);
                          if(((b_41 != NULL) && (b_41 != t)))
                            _fail(t);
                          else
                            b_41 = t;
                          t = not_null(c_41);
                          return(t);
                        }
                        if(((c_41 != NULL) && (c_41 != t)))
                          _fail(t);
                        else
                          c_41 = t;
                        t = d_41(t);
                        return(t);
                      }
                      t = Undefined_1_0(p_6, t);
                      return(t);
                    }
                    t = option_defined_1_0(o_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_a_36));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_g_15;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(n_6, t);
      {
        ATerm b_36;
        b_36 = t;
        t = term_j_31;
        t = table_destroy_0_0(t);
        t = b_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_117, t);
  t = store_options_0_0(t);
  t = n_117(t);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_117, t);
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_117(t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_117, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_6, c_117, d_117, r_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      ATerm i_36;
      i_36 = t;
      {
        ATerm f_41 = NULL;
        ATerm g_41 = NULL;
        ATerm n_41 (ATerm t)
        {
          t = not_null(g_41);
          if(((f_41 != NULL) && (f_41 != t)))
            _fail(t);
          else
            f_41 = t;
          t = not_null(g_41);
          return(t);
        }
        t = term_r_26;
        t = get_config_0_0(t);
        if(((g_41 != NULL) && (g_41 != t)))
          _fail(t);
        else
          g_41 = t;
        t = n_41(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATempty, not_null(f_41)));
        t = printnl_0_0(t);
      }
      t = i_36;
      return(t);
    }
    t = if_verbose2_1_0(t_6, t);
    return(t);
  }
  t = iowrap_4_0(u_116, v_116, w_116, s_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_116, t_116, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = _2_0(_id, p_116, t);
    return(t);
  }
  t = iowrap_2_0(u_6, _fail, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    ATerm x_6 (ATerm t)
    {
      t = repeat_1_0(Canon_0_0, t);
      return(t);
    }
    t = downup2_2_0(w_6, x_6, t);
    t = mark_fresh_vars_0_0(t);
    return(t);
  }
  t = iowrap_1_0(v_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = canonicalize_0_0(t);
  return(t);
}
