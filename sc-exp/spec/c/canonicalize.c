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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
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
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
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
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
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
ATerm term_n_21;
ATerm term_h_20;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_y_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_4);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Call_2, term_i_5, (ATerm) ATempty);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_5);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_Call_2, term_l_5, (ATerm) ATempty);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_6);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_6);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_6);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_i_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_j_8);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_j_8);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_j_8);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_j_8);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_j_8);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__3, term_e_17, term_l_17, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm q_74 (ATerm));
ATerm Call_2 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm));
ATerm unzip_1 (ATerm, ATerm f_100 (ATerm));
ATerm alltd_1 (ATerm, ATerm v_93 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm f_91 (ATerm));
ATerm downup2_2 (ATerm, ATerm i_92 (ATerm), ATerm j_92 (ATerm));
ATerm _2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_110 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm v_109 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_112 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_109 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm));
ATerm crush_2 (ATerm, ATerm m_107 (ATerm), ATerm n_107 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_110 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_113 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_115 (ATerm));
ATerm map_1 (ATerm, ATerm u_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_115 (ATerm));
ATerm Program_1 (ATerm, ATerm s_78 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_114 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_90 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_116 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_115 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_115 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm a_114 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_113 (ATerm), ATerm f_113 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_113 (ATerm));
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
  ATerm d_1 = NULL;
  ATerm s_1 = NULL;
  d_1 = t;
  {
    ATerm t_1 = NULL;
    t = new_0(t);
    {
      t_1 = t;
      if(((s_1 != NULL) && (s_1 != t_1)))
        _fail(t_1);
      else
        s_1 = t_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_1)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_1), (ATerm)ATempty, not_null(d_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm o_2 = NULL,p_2 = NULL;
  o_2 = t;
  n_2 :
  if(match_cons(o_2, sym_SVar_1))
    {
      p_2 = ATgetArgument(o_2, 0);
      {
        ATerm s_2 = NULL,u_2 = NULL;
        ATerm t_2 = NULL;
        t = SSLgetAnnotations(not_null(o_2));
        {
          t_2 = t;
          if(((s_2 != NULL) && (s_2 != t_2)))
            _fail(t_2);
          else
            s_2 = t_2;
        }
        {
          t = not_null(p_2);
          {
            ATerm w_2 = NULL;
            t = q_74(t);
            {
              u_2 = t;
              {
                ATerm x_2 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_2)), not_null(s_2));
                {
                  x_2 = t;
                  if(((w_2 != NULL) && (w_2 != x_2)))
                    _fail(x_2);
                  else
                    w_2 = x_2;
                }
                t = not_null(w_2);
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
ATerm Call_2 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym_Call_2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      {
        ATerm o_3 = NULL,q_3 = NULL;
        ATerm p_3 = NULL;
        t = SSLgetAnnotations(not_null(i_3));
        {
          p_3 = t;
          if(((o_3 != NULL) && (o_3 != p_3)))
            _fail(p_3);
          else
            o_3 = p_3;
        }
        {
          t = not_null(j_3);
          {
            ATerm s_3 = NULL;
            t = t_74(t);
            {
              q_3 = t;
              {
                t = not_null(k_3);
                {
                  ATerm u_3 = NULL;
                  t = u_74(t);
                  {
                    s_3 = t;
                    {
                      ATerm v_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(q_3), not_null(s_3)), not_null(o_3));
                      {
                        v_3 = t;
                        if(((u_3 != NULL) && (u_3 != v_3)))
                          _fail(v_3);
                        else
                          u_3 = v_3;
                      }
                      t = not_null(u_3);
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
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  g_4 = t;
  c_4 :
  if(match_cons(g_4, sym_Let_2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      d_4 :
      if(match_cons(i_4, sym_Call_2))
        {
          j_4 = ATgetArgument(i_4, 0);
          l_4 = ATgetArgument(i_4, 1);
          e_4 :
          if(match_cons(j_4, sym_SVar_1))
            {
              k_4 = ATgetArgument(j_4, 0);
              f_4 :
              if(((ATgetType(l_4) == AT_LIST) && ATisEmpty(l_4)))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_4)), (ATerm) ATempty), not_null(h_4));
                }
              else
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
  ATerm r_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym_Fail_0))
    {
      t = term_j_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym_Id_0))
    {
      t = term_m_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
  b_5 = t;
  y_4 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      f_5 = ATgetArgument(b_5, 1);
      z_4 :
      if(match_cons(c_5, sym__2))
        {
          d_5 = ATgetArgument(c_5, 0);
          e_5 = ATgetArgument(c_5, 1);
          a_5 :
          if(match_cons(f_5, sym__2))
            {
              g_5 = ATgetArgument(f_5, 0);
              h_5 = ATgetArgument(f_5, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_5)), not_null(d_5)), (ATerm) ATinsert(CheckATermList(not_null(h_5)), not_null(e_5)));
            }
          else
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
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
    {
      q_5 = ATgetFirst((ATermList) p_5);
      r_5 = (ATerm) ATgetNext((ATermList) p_5);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(r_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  w_5 :
  if(((ATgetType(x_5) == AT_LIST) && ATisEmpty(x_5)))
    {
      t = term_n_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_99(t);
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          t = w_99(t);
          {
            t = _2(t, y_99, z_5);
            t = x_99(t);
          }
        }
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm f_100 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, f_100);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_93(t);
        ;
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
        t = _all(t, a_6);
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  ATerm q_9 (ATerm t)
  {
    t = not_null(u_7);
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    t = not_null(v_7);
    return(t);
  }
  ATerm s_9 (ATerm t)
  {
    ATerm r_8 = NULL;
    ATerm s_8 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(r_7));
    {
      t = conc_0(t);
      {
        s_8 = t;
        if(((r_8 != NULL) && (r_8 != s_8)))
          _fail(s_8);
        else
          r_8 = s_8;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_8), not_null(s_7));
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    t = not_null(v_7);
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATinsert(ATempty, not_null(u_7)));
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_d_6, (ATerm) ATinsert(ATempty, not_null(u_7)));
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_6, (ATerm) ATinsert(ATempty, not_null(u_7)));
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(ATempty, not_null(u_7)));
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_j_6, (ATerm) ATinsert(ATempty, not_null(u_7)));
    return(t);
  }
  ATerm z_9 (ATerm t)
  {
    ATerm b_9 = NULL;
    ATerm c_9 = NULL;
    t = not_null(v_7);
    {
      ATerm e_10 (ATerm t)
      {
        ATerm k_6 = t;
        int l_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              ATerm m_6 = t;
              int n_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(n_6);
                }
              else
                {
                  t = m_6;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              t = try_1(t, e_10);
              return(t);
            }
            t = Cons_2(t, c_0, e_0);
            ;
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            t = Cons_2(t, _id, e_10);
          }
        return(t);
      }
      t = e_10(t);
      {
        c_9 = t;
        if(((b_9 != NULL) && (b_9 != c_9)))
          _fail(c_9);
        else
          b_9 = c_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(u_7), not_null(b_9));
    return(t);
  }
  ATerm a_10 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
    ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
    t = not_null(v_7);
    {
      ATerm f_0 (ATerm t)
      {
        ATerm h_0 (ATerm t)
        {
          ATerm o_6 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, h_0);
        {
          ATerm q_6 = t;
          int u_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(u_6);
            }
          else
            {
              t = q_6;
              {
                ATerm v_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = Call_2(t, m_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_6;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = v_6;
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, n_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, f_0);
      {
        i_9 = t;
        z_6 :
        if(match_cons(i_9, sym__2))
          {
            j_9 = ATgetArgument(i_9, 0);
            k_9 = ATgetArgument(i_9, 1);
            {
              ATerm l_9 = NULL;
              if(((f_9 != NULL) && (f_9 != j_9)))
                _fail(j_9);
              else
                f_9 = j_9;
              {
                if(((g_9 != NULL) && (g_9 != k_9)))
                  _fail(k_9);
                else
                  g_9 = k_9;
                {
                  t = not_null(g_9);
                  {
                    t = concat_0(t);
                    {
                      l_9 = t;
                      {
                        if(((h_9 != NULL) && (h_9 != l_9)))
                          _fail(l_9);
                        else
                          h_9 = l_9;
                        {
                          ATerm y_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = y_6;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_9), (ATerm) ATmakeAppl(sym_Call_2, not_null(u_7), not_null(f_9)));
    return(t);
  }
  t_7 = t;
  a_7 :
  if(match_cons(t_7, sym_Rec_2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_7), (ATerm)ATempty, not_null(v_7))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_7)), (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t_7, sym_SDef_3))
        {
          u_7 = ATgetArgument(t_7, 0);
          v_7 = ATgetArgument(t_7, 1);
          m_7 = ATgetArgument(t_7, 2);
          b_7 :
          if(((ATgetType(v_7) == AT_LIST) && ATisEmpty(v_7)))
            {
              c_7 :
              if(match_cons(m_7, sym_Rec_2))
                {
                  n_7 = ATgetArgument(m_7, 0);
                  o_7 = ATgetArgument(m_7, 1);
                  {
                    ATerm b_8 = NULL;
                    ATerm g_8 = NULL;
                    t = not_null(o_7);
                    {
                      ATerm o_0 (ATerm t)
                      {
                        ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
                        c_8 = t;
                        r_6 :
                        if(match_cons(c_8, sym_Call_2))
                          {
                            d_8 = ATgetArgument(c_8, 0);
                            f_8 = ATgetArgument(c_8, 1);
                            s_6 :
                            if(match_cons(d_8, sym_SVar_1))
                              {
                                e_8 = ATgetArgument(d_8, 0);
                                t_6 :
                                if(((ATgetType(f_8) == AT_LIST) && ATisEmpty(f_8)))
                                  {
                                    {
                                      if(((n_7 != NULL) && (n_7 != e_8)))
                                        _fail(e_8);
                                      else
                                        n_7 = e_8;
                                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_7)), (ATerm) ATempty);
                                    }
                                  }
                                else
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
                      t = alltd_1(t, o_0);
                      {
                        g_8 = t;
                        if(((b_8 != NULL) && (b_8 != g_8)))
                          _fail(g_8);
                        else
                          b_8 = g_8;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_7), (ATerm)ATempty, not_null(b_8));
                  }
                }
              else
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
          if(match_cons(t_7, sym_Seq_2))
            {
              u_7 = ATgetArgument(t_7, 0);
              v_7 = ATgetArgument(t_7, 1);
              d_7 :
              if(match_cons(v_7, sym_Seq_2))
                {
                  r_7 = ATgetArgument(v_7, 0);
                  s_7 = ATgetArgument(v_7, 1);
                  e_7 :
                  if(match_cons(u_7, sym_Where_1))
                    {
                      q_7 = ATgetArgument(u_7, 0);
                      f_7 :
                      if(match_cons(r_7, sym_Build_1))
                        {
                          p_7 = ATgetArgument(r_7, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_7)), not_null(s_7)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(u_7, sym_Id_0))
                        {
                          t = r_9(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(v_7, sym_Build_1))
                    {
                      r_7 = ATgetArgument(v_7, 0);
                      g_7 :
                      if(match_cons(u_7, sym_Where_1))
                        {
                          q_7 = ATgetArgument(u_7, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_7)));
                        }
                      else
                        {
                          if(match_cons(u_7, sym_Id_0))
                            {
                              t = r_9(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(v_7, sym_Id_0))
                        {
                          h_7 :
                          if(match_cons(u_7, sym_Id_0))
                            {
                              ATerm w_7 = t;
                              int x_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = q_9(t);
                                  ;
                                  LocalPopChoice(x_7);
                                }
                              else
                                {
                                  t = w_7;
                                  t = r_9(t);
                                }
                            }
                          else
                            {
                              t = q_9(t);
                            }
                        }
                      else
                        {
                          i_7 :
                          if(match_cons(u_7, sym_Id_0))
                            {
                              t = r_9(t);
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
              if(match_cons(t_7, sym_Scope_2))
                {
                  u_7 = ATgetArgument(t_7, 0);
                  v_7 = ATgetArgument(t_7, 1);
                  j_7 :
                  if(match_cons(v_7, sym_Scope_2))
                    {
                      r_7 = ATgetArgument(v_7, 0);
                      s_7 = ATgetArgument(v_7, 1);
                      k_7 :
                      if(((ATgetType(u_7) == AT_LIST) && ATisEmpty(u_7)))
                        {
                          {
                            ATerm y_7 = t;
                            int z_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_9(t);
                                ;
                                LocalPopChoice(z_7);
                              }
                            else
                              {
                                t = y_7;
                                t = t_9(t);
                              }
                          }
                        }
                      else
                        {
                          t = s_9(t);
                        }
                    }
                  else
                    {
                      l_7 :
                      if(((ATgetType(u_7) == AT_LIST) && ATisEmpty(u_7)))
                        {
                          t = t_9(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(t_7, sym_Thread_1))
                    {
                      u_7 = ATgetArgument(t_7, 0);
                      t = u_9(t);
                    }
                  else
                    {
                      if(match_cons(t_7, sym_Some_1))
                        {
                          u_7 = ATgetArgument(t_7, 0);
                          t = v_9(t);
                        }
                      else
                        {
                          if(match_cons(t_7, sym_One_1))
                            {
                              u_7 = ATgetArgument(t_7, 0);
                              t = w_9(t);
                            }
                          else
                            {
                              if(match_cons(t_7, sym_All_1))
                                {
                                  u_7 = ATgetArgument(t_7, 0);
                                  t = x_9(t);
                                }
                              else
                                {
                                  if(match_cons(t_7, sym_Bagof_1))
                                    {
                                      u_7 = ATgetArgument(t_7, 0);
                                      t = y_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t_7, sym_Call_2))
                                        {
                                          u_7 = ATgetArgument(t_7, 0);
                                          v_7 = ATgetArgument(t_7, 1);
                                          {
                                            ATerm a_8 = t;
                                            int h_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_9(t);
                                                ;
                                                LocalPopChoice(h_8);
                                              }
                                            else
                                              {
                                                t = a_8;
                                                t = a_10(t);
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
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm i_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = f_91(t);
      t = i_10(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = i_10(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm i_92 (ATerm), ATerm j_92 (ATerm))
{
  t = i_92(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = downup2_2(t, i_92, j_92);
      return(t);
    }
    t = _all(t, q_0);
    t = j_92(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym__2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        ATerm v_10 = NULL,x_10 = NULL;
        ATerm w_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm z_10 = NULL;
            t = i_69(t);
            {
              x_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm b_11 = NULL;
                  t = j_69(t);
                  {
                    z_10 = t;
                    {
                      ATerm c_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_10), not_null(z_10)), not_null(v_10));
                      {
                        c_11 = t;
                        if(((b_11 != NULL) && (b_11 != c_11)))
                          _fail(c_11);
                        else
                          b_11 = c_11;
                      }
                      t = not_null(b_11);
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
  ATerm i_8;
  i_8 = t;
  {
    ATerm j_11 = NULL;
    ATerm k_11 = NULL;
    t = term_j_8;
    {
      t = whoami_0(t);
      {
        k_11 = t;
        if(((j_11 != NULL) && (j_11 != k_11)))
          _fail(k_11);
        else
          j_11 = k_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), not_null(j_11)), term_l_8));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm o_8;
        o_8 = t;
        t = SSL_printnl(not_null(p_11), not_null(q_11));
        t = o_8;
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
  ATerm v_11 = NULL;
  v_11 = t;
  t = SSL_implode_string(not_null(v_11));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
        a_12 = t;
        z_11 :
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            b_12 = ATgetFirst((ATermList) a_12);
            c_12 = (ATerm) ATgetNext((ATermList) a_12);
            {
              t = not_null(b_12);
              {
                ATerm r_0 (ATerm t)
                {
                  t = not_null(c_12);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_0);
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
  ATerm m_12 = NULL;
  ATerm o_12 = NULL;
  m_12 = t;
  {
    ATerm p_12 = NULL;
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
    t = not_null(m_12);
    {
      p_12 = t;
      {
        t = SSL_explode_term(not_null(p_12));
        {
          r_12 = t;
          k_12 :
          if(match_cons(r_12, sym__2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              l_12 :
              if(match_string(s_12, ""))
                {
                  if(((o_12 != NULL) && (o_12 != t_12)))
                    _fail(t_12);
                  else
                    o_12 = t_12;
                }
              else
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
      t = not_null(o_12);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm x_12 (ATerm t)
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_12);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          t = Nil_0(t);
          t = j_98(t);
        }
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      {
        t = not_null(b_13);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(c_13);
            return(t);
          }
          t = at_end_1(t, s_0);
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
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_explode_string(not_null(h_13));
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            {
              ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
              q_13 = t;
              p_13 :
              if(match_cons(q_13, sym_Path_1))
                {
                  r_13 = ATgetArgument(q_13, 0);
                  t = not_null(r_13);
                }
              else
                {
                  if(match_cons(q_13, sym_Var_1))
                    {
                      r_13 = ATgetArgument(q_13, 0);
                      {
                        t = not_null(r_13);
                        {
                          ATerm d_9 = t;
                          int e_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_9);
                            }
                          else
                            {
                              t = d_9;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_m_9;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_13, sym_Prefix_2))
                        {
                          r_13 = ATgetArgument(q_13, 0);
                          s_13 = ATgetArgument(q_13, 1);
                          {
                            ATerm x_13 = NULL,z_13 = NULL;
                            ATerm n_9;
                            n_9 = t;
                            {
                              ATerm y_13 = NULL;
                              t = not_null(r_13);
                              {
                                t = eval_config_0(t);
                                {
                                  y_13 = t;
                                  if(((x_13 != NULL) && (x_13 != y_13)))
                                    _fail(y_13);
                                  else
                                    x_13 = y_13;
                                }
                              }
                            }
                            t = n_9;
                            {
                              ATerm a_14 = NULL;
                              t = not_null(s_13);
                              {
                                t = eval_config_0(t);
                                {
                                  a_14 = t;
                                  if(((z_13 != NULL) && (z_13 != a_14)))
                                    _fail(a_14);
                                  else
                                    z_13 = a_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), not_null(z_13));
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
  ATerm i_14 = NULL;
  i_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(i_14));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_9;
            p_9 = t;
            {
              ATerm k_14 = NULL;
              ATerm l_14 = NULL;
              l_14 = t;
              if(((k_14 != NULL) && (k_14 != l_14)))
                _fail(l_14);
              else
                k_14 = l_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(i_14), not_null(k_14));
                t = table_put_0(t);
              }
            }
            t = p_9;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_110 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm p_14 = NULL;
      ATerm q_14 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_d_10);
        t = geq_0(t);
      }
    }
    t = b_10;
    t = z_110(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  w_14 = t;
  u_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      v_14 :
      if(match_cons(y_14, sym_Stream_1))
        {
          z_14 = ATgetArgument(y_14, 0);
          {
            ATerm c_15 = NULL;
            t = SSL_fputc(not_null(x_14), not_null(z_14));
            {
              ATerm d_15 = NULL;
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_15));
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
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  k_15 = t;
  i_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      n_15 = ATgetArgument(k_15, 1);
      j_15 :
      if(match_cons(l_15, sym_Stream_1))
        {
          m_15 = ATgetArgument(l_15, 0);
          {
            ATerm q_15 = NULL;
            t = SSL_write_term_to_stream_text(not_null(m_15), not_null(n_15));
            {
              ATerm r_15 = NULL;
              r_15 = t;
              if(((q_15 != NULL) && (q_15 != r_15)))
                _fail(r_15);
              else
                q_15 = r_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_15));
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
  ATerm x_0 (ATerm t)
  {
    ATerm v_15 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm w_15 = NULL;
      w_15 = t;
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(v_15));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, x_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  c_16 = t;
  a_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      f_16 = ATgetArgument(c_16, 1);
      b_16 :
      if(match_cons(d_16, sym_Stream_1))
        {
          e_16 = ATgetArgument(d_16, 0);
          {
            ATerm i_16 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(e_16), not_null(f_16));
            {
              ATerm j_16 = NULL;
              j_16 = t;
              if(((i_16 != NULL) && (i_16 != j_16)))
                _fail(j_16);
              else
                i_16 = j_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_16));
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
ATerm WriteToFile_1 (ATerm t, ATerm v_109 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      {
        ATerm v_16 = NULL,x_16 = NULL;
        t = not_null(r_16);
        {
          ATerm w_16 = NULL;
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), term_g_10);
            {
              t = open_stream_0(t);
              {
                ATerm y_16 = NULL;
                y_16 = t;
                if(((x_16 != NULL) && (x_16 != y_16)))
                  _fail(y_16);
                else
                  x_16 = y_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), not_null(s_16));
                  {
                    t = v_109(t);
                    {
                      t = fclose_0(t);
                      t = not_null(s_16);
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
  ATerm g_17 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_17 = NULL,i_17 = NULL;
            h_17 = t;
            d_17 :
            if(match_cons(h_17, sym_Output_1))
              {
                i_17 = ATgetArgument(h_17, 0);
                if(((g_17 != NULL) && (g_17 != i_17)))
                  _fail(i_17);
                else
                  g_17 = i_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm j_17 = NULL;
            t = term_l_10;
            {
              j_17 = t;
              if(((g_17 != NULL) && (g_17 != j_17)))
                _fail(j_17);
              else
                g_17 = j_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = h_10;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(g_17);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm k_17 = NULL;
              k_17 = t;
              f_17 :
              if(!(match_cons(k_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, e_1);
            return(t);
          }
          t = _2(t, c_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  ATerm s_10;
  s_10 = t;
  t = dtime_0(t);
  t = s_10;
  {
    t = x_112(t);
    {
      ATerm t_10;
      t_10 = t;
      {
        ATerm r_17 = NULL;
        t = dtime_0(t);
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
      }
      t = t_10;
      {
        s_17 = t;
        p_17 :
        if(match_cons(s_17, sym__2))
          {
            t_17 = ATgetArgument(s_17, 0);
            u_17 = ATgetArgument(s_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_17))), not_null(u_17));
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
  ATerm c_18 = NULL,d_18 = NULL;
  ATerm j_18 (ATerm t)
  {
    t = SSL_fclose(not_null(d_18));
    return(t);
  }
  d_18 = t;
  b_18 :
  if(match_cons(d_18, sym_Stream_1))
    {
      c_18 = ATgetArgument(d_18, 0);
      {
        ATerm u_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(c_18));
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = u_10;
            t = j_18(t);
          }
      }
    }
  else
    {
      t = j_18(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Stream_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      t = SSL_read_term_from_stream(not_null(n_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_109 (ATerm))
{
  ATerm a_11;
  a_11 = t;
  {
    ATerm s_18 = NULL,u_18 = NULL;
    ATerm d_11;
    d_11 = t;
    {
      ATerm t_18 = NULL;
      t = h_109(t);
      {
        t_18 = t;
        if(((s_18 != NULL) && (s_18 != t_18)))
          _fail(t_18);
        else
          s_18 = t_18;
      }
    }
    t = d_11;
    {
      ATerm v_18 = NULL;
      v_18 = t;
      if(((u_18 != NULL) && (u_18 != v_18)))
        _fail(v_18);
      else
        u_18 = v_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_18)), not_null(s_18)));
        t = printnl_0(t);
      }
    }
  }
  t = a_11;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm g_19 = NULL;
        t = SSL_fopen(not_null(c_19), not_null(d_19));
        {
          ATerm h_19 = NULL;
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_19));
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
  ATerm l_19 = NULL;
  l_19 = t;
  t = SSL_is_string(not_null(l_19));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm p_19 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm q_19 = NULL;
    q_19 = t;
    if(((p_19 != NULL) && (p_19 != q_19)))
      _fail(q_19);
    else
      p_19 = q_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_19));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm u_19 = NULL;
    u_19 = t;
    if(((t_19 != NULL) && (t_19 != u_19)))
      _fail(u_19);
    else
      t_19 = u_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_19));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm x_19 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm y_19 = NULL;
    y_19 = t;
    if(((x_19 != NULL) && (x_19 != y_19)))
      _fail(y_19);
    else
      x_19 = y_19;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_19));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(e_20, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(e_20, sym_stdin_0))
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
  ATerm o_20 = NULL;
  ATerm q_20 = NULL,r_20 = NULL;
  o_20 = t;
  {
    ATerm s_20 = NULL;
    ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
    t = not_null(o_20);
    {
      s_20 = t;
      {
        t = SSL_explode_term(not_null(s_20));
        {
          u_20 = t;
          l_20 :
          if(match_cons(u_20, sym__2))
            {
              v_20 = ATgetArgument(u_20, 0);
              w_20 = ATgetArgument(u_20, 1);
              m_20 :
              if(match_string(v_20, ""))
                {
                  n_20 :
                  if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
                    {
                      x_20 = ATgetFirst((ATermList) w_20);
                      y_20 = (ATerm) ATgetNext((ATermList) w_20);
                      {
                        if(((r_20 != NULL) && (r_20 != x_20)))
                          _fail(x_20);
                        else
                          r_20 = x_20;
                        if(((q_20 != NULL) && (q_20 != y_20)))
                          _fail(y_20);
                        else
                          q_20 = y_20;
                      }
                    }
                  else
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
    t = not_null(r_20);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm g_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    ATerm j_21 = NULL,k_21 = NULL;
                    j_21 = t;
                    e_21 :
                    if(match_cons(j_21, sym_Path_1))
                      {
                        k_21 = ATgetArgument(j_21, 0);
                        t = not_null(k_21);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, f_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = g_11;
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
  ATerm s_21 = NULL;
  ATerm i_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL;
      ATerm r_21 = NULL;
      r_21 = t;
      if(((q_21 != NULL) && (q_21 != r_21)))
        _fail(r_21);
      else
        q_21 = r_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), term_m_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = i_11;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_r_11;
          return(t);
        }
        t = debug_1(t, g_1);
        _fail(t);
      }
    }
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm t_21 = NULL;
      t = read_from_stream_0(t);
      {
        t_21 = t;
        if(((s_21 != NULL) && (s_21 != t_21)))
          _fail(t_21);
        else
          s_21 = t_21;
      }
    }
    t = s_11;
    {
      t = fclose_0(t);
      t = not_null(s_21);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  ATerm y_21 = NULL,a_22 = NULL;
  ATerm t_11;
  t_11 = t;
  {
    ATerm z_21 = NULL;
    t = i_105(t);
    {
      z_21 = t;
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
    }
  }
  t = t_11;
  {
    ATerm b_22 = NULL;
    t = j_105(t);
    {
      b_22 = t;
      if(((a_22 != NULL) && (a_22 != b_22)))
        _fail(b_22);
      else
        a_22 = b_22;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), not_null(a_22));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_22 = NULL;
  ATerm u_11;
  u_11 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          ATerm i_22 = NULL,j_22 = NULL;
          i_22 = t;
          f_22 :
          if(match_cons(i_22, sym_Input_1))
            {
              j_22 = ATgetArgument(i_22, 0);
              if(((h_22 != NULL) && (h_22 != j_22)))
                _fail(j_22);
              else
                h_22 = j_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_1);
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        {
          ATerm k_22 = NULL;
          t = term_y_11;
          {
            k_22 = t;
            if(((h_22 != NULL) && (h_22 != k_22)))
              _fail(k_22);
            else
              h_22 = k_22;
          }
        }
      }
  }
  t = u_11;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(h_22);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm p_22 = NULL;
    p_22 = t;
    n_22 :
    if(!(match_string(p_22, "-k")))
      {
        if(!(match_string(p_22, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm d_12;
    d_12 = t;
    {
      ATerm q_22 = NULL;
      ATerm r_22 = NULL;
      t = string_to_int_0(t);
      {
        r_22 = t;
        if(((q_22 != NULL) && (q_22 != r_22)))
          _fail(r_22);
        else
          q_22 = r_22;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(q_22));
        t = set_config_0(t);
      }
    }
    t = d_12;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_f_12;
    return(t);
  }
  t = ArgOption_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_string_to_int(not_null(u_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm c_23 = NULL;
        c_23 = t;
        x_22 :
        if(!(match_string(c_23, "-S")))
          {
            if(!(match_string(c_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_j_12;
        t = set_config_0(t);
        t = term_n_12;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_q_12;
        return(t);
      }
      t = Option_3(t, m_1, n_1, o_1);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm d_23 = NULL;
              d_23 = t;
              y_22 :
              if(!(match_string(d_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm g_23 = NULL;
              ATerm w_12;
              w_12 = t;
              {
                ATerm e_23 = NULL;
                ATerm f_23 = NULL;
                t = string_to_int_0(t);
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(e_23));
                  t = set_config_0(t);
                }
              }
              t = w_12;
              {
                ATerm h_23 = NULL;
                h_23 = t;
                if(((g_23 != NULL) && (g_23 != h_23)))
                  _fail(h_23);
                else
                  g_23 = h_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_23));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_y_12;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm i_23 = NULL;
                i_23 = t;
                b_23 :
                if(!(match_string(i_23, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = term_e_13;
                t = set_config_0(t);
                t = term_f_13;
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_g_13;
                return(t);
              }
              t = Option_3(t, u_1, v_1, w_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm o_23 = NULL;
    o_23 = t;
    l_23 :
    if(!(match_string(o_23, "-o")))
      {
        if(!(match_string(o_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm r_23 = NULL;
    ATerm k_13;
    k_13 = t;
    {
      ATerm p_23 = NULL;
      ATerm q_23 = NULL;
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(p_23));
        t = set_config_0(t);
      }
    }
    t = k_13;
    {
      ATerm s_23 = NULL;
      s_23 = t;
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_23));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm w_23 = NULL;
          w_23 = t;
          v_23 :
          if(!(match_string(w_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_2 (ATerm t)
        {
          t = term_u_13;
          t = set_config_0(t);
          t = term_v_13;
          return(t);
        }
        ATerm c_2 (ATerm t)
        {
          t = term_w_13;
          return(t);
        }
        t = Option_3(t, a_2, b_2, c_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  c_24 = t;
  a_24 :
  if(match_string(c_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
        {
          d_24 = ATgetFirst((ATermList) c_24);
          e_24 = (ATerm) ATgetNext((ATermList) c_24);
          b_24 :
          if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
            {
              f_24 = ATgetFirst((ATermList) e_24);
              g_24 = (ATerm) ATgetNext((ATermList) e_24);
              {
                ATerm k_24 = NULL;
                ATerm b_14;
                b_14 = t;
                {
                  t = not_null(d_24);
                  t = j_0(t);
                }
                t = b_14;
                {
                  ATerm l_24 = NULL;
                  t = not_null(f_24);
                  {
                    t = k_0(t);
                    {
                      l_24 = t;
                      if(((k_24 != NULL) && (k_24 != l_24)))
                        _fail(l_24);
                      else
                        k_24 = l_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_24)), not_null(k_24));
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
  ATerm d_2 (ATerm t)
  {
    ATerm s_24 = NULL;
    s_24 = t;
    p_24 :
    if(!(match_string(s_24, "-i")))
      {
        if(!(match_string(s_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm v_24 = NULL;
    ATerm c_14;
    c_14 = t;
    {
      ATerm t_24 = NULL;
      ATerm u_24 = NULL;
      u_24 = t;
      if(((t_24 != NULL) && (t_24 != u_24)))
        _fail(u_24);
      else
        t_24 = u_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_14, not_null(t_24));
        t = set_config_0(t);
      }
    }
    t = c_14;
    {
      ATerm w_24 = NULL;
      w_24 = t;
      if(((v_24 != NULL) && (v_24 != w_24)))
        _fail(w_24);
      else
        v_24 = w_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_24));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_e_14;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm h_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = h_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = report_run_time_0(t);
  {
    ATerm b_25 = NULL;
    t = term_j_8;
    {
      t = whoami_0(t);
      {
        b_25 = t;
        if(((a_25 != NULL) && (a_25 != b_25)))
          _fail(b_25);
        else
          a_25 = b_25;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_m_14), not_null(a_25)));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_n_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_TicksToSeconds(not_null(e_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym__2))
    {
      k_25 = ATgetArgument(j_25, 0);
      l_25 = ATgetArgument(j_25, 1);
      {
        ATerm o_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_25), not_null(l_25));
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = o_14;
            t = SSL_addr(not_null(k_25), not_null(l_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm))
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_103(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
        s_25 = t;
        r_25 :
        if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
          {
            t_25 = ATgetFirst((ATermList) s_25);
            u_25 = (ATerm) ATgetNext((ATermList) s_25);
            {
              ATerm x_25 = NULL;
              ATerm y_25 = NULL;
              t = not_null(u_25);
              {
                t = foldr_2(t, t_103, u_103);
                {
                  y_25 = t;
                  if(((x_25 != NULL) && (x_25 != y_25)))
                    _fail(y_25);
                  else
                    x_25 = y_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(x_25));
                t = u_103(t);
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
ATerm crush_2 (ATerm t, ATerm m_107 (ATerm), ATerm n_107 (ATerm))
{
  ATerm f_26 = NULL;
  ATerm h_26 = NULL;
  f_26 = t;
  {
    ATerm i_26 = NULL;
    ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
    t = not_null(f_26);
    {
      i_26 = t;
      {
        t = SSL_explode_term(not_null(i_26));
        {
          k_26 = t;
          e_26 :
          if(match_cons(k_26, sym__2))
            {
              l_26 = ATgetArgument(k_26, 0);
              m_26 = ATgetArgument(k_26, 1);
              if(((h_26 != NULL) && (h_26 != m_26)))
                _fail(m_26);
              else
                h_26 = m_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_26);
      t = foldr_2(t, m_107, n_107);
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
    ATerm g_2 (ATerm t)
    {
      t = term_i_12;
      return(t);
    }
    t = crush_2(t, g_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym__2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      {
        ATerm a_15;
        a_15 = t;
        {
          ATerm b_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_26), not_null(u_26));
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = b_15;
              t = SSL_gtr(not_null(t_26), not_null(u_26));
            }
        }
        t = a_15;
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
  ATerm a_27 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
      b_27 = t;
      z_26 :
      if(match_cons(b_27, sym__2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          {
            if(((a_27 != NULL) && (a_27 != c_27)))
              _fail(c_27);
            else
              a_27 = c_27;
            if(((a_27 != NULL) && (a_27 != d_27)))
              _fail(d_27);
            else
              a_27 = d_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_110 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm h_15;
    h_15 = t;
    {
      ATerm g_27 = NULL;
      ATerm h_27 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), term_n_8);
        t = geq_0(t);
      }
    }
    t = h_15;
    t = y_110(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm l_27 = NULL,n_27 = NULL;
    ATerm o_15;
    o_15 = t;
    {
      ATerm m_27 = NULL;
      t = run_time_0(t);
      {
        m_27 = t;
        if(((l_27 != NULL) && (l_27 != m_27)))
          _fail(m_27);
        else
          l_27 = m_27;
      }
    }
    t = o_15;
    {
      ATerm o_27 = NULL;
      t = term_j_8;
      {
        t = whoami_0(t);
        {
          o_27 = t;
          if(((n_27 != NULL) && (n_27 != o_27)))
            _fail(o_27);
          else
            n_27 = o_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_15), not_null(l_27)), term_p_15), not_null(n_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_i_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Version_0))
    {
      ATerm x_27 = NULL,z_27 = NULL;
      ATerm t_15;
      t_15 = t;
      {
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
      }
      t = t_15;
      {
        ATerm a_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_27));
        {
          a_28 = t;
          if(((z_27 != NULL) && (z_27 != a_28)))
            _fail(a_28);
          else
            z_27 = a_28;
        }
        t = not_null(z_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_113 (ATerm))
{
  ATerm u_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = u_15;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm z_15 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = z_15;
              {
                ATerm h_16 = t;
                int k_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(k_16);
                  }
                else
                  {
                    t = h_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, j_2);
      }
    }
  t = v_113(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = SSL_table_create(not_null(f_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  {
    ATerm l_16;
    l_16 = t;
    {
      t = term_m_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_16, term_n_16, not_null(j_28));
          t = table_put_0(t);
        }
      }
    }
    t = l_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_table_destroy(not_null(n_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = SSL_exit(not_null(r_28));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm u_28 (ATerm t)
  {
    ATerm o_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = o_16;
        t = Cons_2(t, u_97, u_28);
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  d_29 = t;
  a_29 :
  if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
    {
      b_29 = ATgetFirst((ATermList) d_29);
      c_29 = (ATerm) ATgetNext((ATermList) d_29);
      {
        ATerm g_29 = NULL;
        t = not_null(c_29);
        {
          ATerm u_16;
          u_16 = t;
          {
            ATerm h_29 = NULL,j_29 = NULL,l_29 = NULL;
            ATerm z_16;
            z_16 = t;
            {
              ATerm i_29 = NULL;
              t = i_0(t);
              {
                i_29 = t;
                if(((h_29 != NULL) && (h_29 != i_29)))
                  _fail(i_29);
                else
                  h_29 = i_29;
              }
            }
            t = z_16;
            {
              ATerm k_29 = NULL;
              t = not_null(b_29);
              {
                t = g_0(t);
                {
                  k_29 = t;
                  if(((j_29 != NULL) && (j_29 != k_29)))
                    _fail(k_29);
                  else
                    j_29 = k_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_29)), not_null(j_29));
                {
                  l_29 = t;
                  if(((g_29 != NULL) && (g_29 != l_29)))
                    _fail(l_29);
                  else
                    g_29 = l_29;
                }
              }
            }
          }
          t = u_16;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(g_29);
              return(t);
            }
            t = reverse_acc_2(t, g_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_29) == AT_LIST) && ATisEmpty(d_29)))
        {
          {
            t = term_j_8;
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
  ATerm l_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_115 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  v_29 :
  if(match_cons(w_29, sym_Program_1))
    {
      x_29 = ATgetArgument(w_29, 0);
      {
        ATerm a_30 = NULL,c_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(w_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(x_29);
          {
            ATerm e_30 = NULL;
            t = s_78(t);
            {
              c_30 = t;
              {
                ATerm f_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_30)), not_null(a_30));
                {
                  f_30 = t;
                  if(((e_30 != NULL) && (e_30 != f_30)))
                    _fail(f_30);
                  else
                    e_30 = f_30;
                }
                t = not_null(e_30);
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
  ATerm o_30 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      t = term_n_14;
      {
        t = get_config_0(t);
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
      }
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm q_30 = NULL;
            q_30 = t;
            if(((o_30 != NULL) && (o_30 != q_30)))
              _fail(q_30);
            else
              o_30 = q_30;
            return(t);
          }
          t = Program_1(t, q_2);
          return(t);
        }
        t = option_defined_1(t, m_2);
      }
    }
  {
    ATerm r_2 (ATerm t)
    {
      ATerm v_2 (ATerm t)
      {
        t = not_null(o_30);
        return(t);
      }
      t = short_description_1(t, v_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, r_2);
    {
      t = term_c_17;
      {
        t = echo_0(t);
        {
          t = term_m_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm r_30 = NULL;
                  ATerm s_30 = NULL;
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), term_n_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_2);
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm t_30 = NULL;
                    ATerm u_30 = NULL;
                    ATerm a_3 (ATerm t)
                    {
                      t = not_null(o_30);
                      return(t);
                    }
                    t = long_description_1(t, a_3);
                    {
                      u_30 = t;
                      if(((t_30 != NULL) && (t_30 != u_30)))
                        _fail(u_30);
                      else
                        t_30 = u_30;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), term_o_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_2);
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
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_78 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_Undefined_1))
    {
      f_31 = ATgetArgument(e_31, 0);
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm j_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm m_31 = NULL;
            t = t_78(t);
            {
              k_31 = t;
              {
                ATerm n_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_31)), not_null(i_31));
                {
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                }
                t = not_null(m_31);
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
ATerm fetch_1 (ATerm t, ATerm d_98 (ATerm))
{
  ATerm s_31 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_98, _id);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = Cons_2(t, _id, s_31);
      }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_114 (ATerm))
{
  t = fetch_1(t, v_114);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(((ATgetType(u_31) == AT_LIST) && ATisEmpty(u_31)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
        {
          v_31 = ATgetFirst((ATermList) u_31);
          w_31 = (ATerm) ATgetNext((ATermList) u_31);
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
  ATerm z_17;
  z_17 = t;
  {
    ATerm z_31 = NULL;
    ATerm c_32 = NULL;
    ATerm a_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = a_18;
        {
          ATerm a_32 = NULL;
          ATerm b_32 = NULL;
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
          t = (ATerm) ATinsert(ATempty, not_null(a_32));
        }
      }
    {
      c_32 = t;
      if(((z_31 != NULL) && (z_31 != c_32)))
        _fail(c_32);
      else
        z_31 = c_32;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(z_31));
      t = printnl_0(t);
    }
  }
  t = z_17;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_n_14;
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
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Help_0))
    {
      ATerm l_32 = NULL,n_32 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(j_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
      }
      t = h_18;
      {
        ATerm o_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_32));
        {
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
        }
        t = not_null(n_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm i_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_90(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = i_18;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm u_32 = NULL;
        u_32 = t;
        s_32 :
        if(!(match_string(u_32, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_r_18;
        t = set_config_0(t);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_w_18;
        return(t);
      }
      t = Option_3(t, b_3, c_3, d_3);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm v_32 = NULL;
          v_32 = t;
          t_32 :
          if(!(match_string(v_32, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_r_18;
          {
            t = set_config_0(t);
            {
              t = term_y_18;
              t = set_config_0(t);
            }
          }
          t = term_z_18;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_e_19;
          return(t);
        }
        t = Option_3(t, e_3, f_3, g_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym__2))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      t = SSL_table_get(not_null(z_32), not_null(a_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym__3))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      k_33 = ATgetArgument(h_33, 2);
      {
        ATerm f_19;
        f_19 = t;
        {
          ATerm v_34 = NULL;
          ATerm w_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_33), not_null(j_33));
          {
            ATerm i_19 = t;
            int j_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_19);
              }
            else
              {
                t = i_19;
                t = (ATerm) ATempty;
              }
            {
              w_34 = t;
              if(((v_34 != NULL) && (v_34 != w_34)))
                _fail(w_34);
              else
                v_34 = w_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_33), not_null(j_33), (ATerm) ATinsert(CheckATermList(not_null(v_34)), not_null(k_33)));
            t = table_put_0(t);
          }
        }
        t = f_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_116 (ATerm))
{
  ATerm a_35 = NULL;
  ATerm b_35 = NULL;
  t = term_j_8;
  {
    t = a_116(t);
    {
      b_35 = t;
      if(((a_35 != NULL) && (a_35 != b_35)))
        _fail(b_35);
      else
        a_35 = b_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_l_17, not_null(a_35));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  g_35 :
  if(match_string(h_35, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
        {
          i_35 = ATgetFirst((ATermList) h_35);
          j_35 = (ATerm) ATgetNext((ATermList) h_35);
          {
            ATerm m_35 = NULL;
            ATerm k_19;
            k_19 = t;
            {
              t = not_null(i_35);
              t = a_0(t);
            }
            t = k_19;
            {
              ATerm n_35 = NULL;
              t = term_j_8;
              {
                t = b_0(t);
                {
                  n_35 = t;
                  if(((m_35 != NULL) && (m_35 != n_35)))
                    _fail(n_35);
                  else
                    m_35 = n_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_35)), not_null(m_35));
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
  ATerm l_3 (ATerm t)
  {
    ATerm s_35 = NULL;
    s_35 = t;
    r_35 :
    if(!(match_string(s_35, "--help")))
      {
        if(!(match_string(s_35, "-h")))
          {
            if(!(match_string(s_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_m_19;
    {
      t = set_config_0(t);
      t = term_n_19;
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = Option_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
    {
      w_35 = ATgetFirst((ATermList) v_35);
      x_35 = (ATerm) ATgetNext((ATermList) v_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_35)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
    {
      n_36 = ATgetFirst((ATermList) m_36);
      o_36 = (ATerm) ATgetNext((ATermList) m_36);
      {
        ATerm s_36 = NULL,u_36 = NULL;
        ATerm t_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          t_36 = t;
          if(((s_36 != NULL) && (s_36 != t_36)))
            _fail(t_36);
          else
            s_36 = t_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm w_36 = NULL;
            t = r_70(t);
            {
              u_36 = t;
              {
                t = not_null(o_36);
                {
                  ATerm y_36 = NULL;
                  t = s_70(t);
                  {
                    w_36 = t;
                    {
                      ATerm c_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_36)), not_null(u_36)), not_null(s_36));
                      {
                        c_37 = t;
                        if(((y_36 != NULL) && (y_36 != c_37)))
                          _fail(c_37);
                        else
                          y_36 = c_37;
                      }
                      t = not_null(y_36);
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
  ATerm m_37 = NULL;
  m_37 = t;
  l_37 :
  if(((ATgetType(m_37) == AT_LIST) && ATisEmpty(m_37)))
    {
      {
        ATerm o_37 = NULL,q_37 = NULL;
        ATerm r_19;
        r_19 = t;
        {
          ATerm p_37 = NULL;
          t = SSLgetAnnotations(not_null(m_37));
          {
            p_37 = t;
            if(((o_37 != NULL) && (o_37 != p_37)))
              _fail(p_37);
            else
              o_37 = p_37;
          }
        }
        t = r_19;
        {
          ATerm r_37 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_37));
          {
            r_37 = t;
            if(((q_37 != NULL) && (q_37 != r_37)))
              _fail(r_37);
            else
              q_37 = r_37;
          }
          t = not_null(q_37);
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
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  w_37 :
  if(match_cons(x_37, sym__2))
    {
      y_37 = ATgetArgument(x_37, 0);
      z_37 = ATgetArgument(x_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(y_37), not_null(z_37));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_115 (ATerm))
{
  ATerm s_19;
  s_19 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_v_19;
      t = y_115(t);
      return(t);
    }
    t = try_1(t, r_3);
  }
  t = s_19;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm h_38 = NULL;
      ATerm w_19;
      w_19 = t;
      {
        ATerm f_38 = NULL;
        ATerm g_38 = NULL;
        g_38 = t;
        if(((f_38 != NULL) && (f_38 != g_38)))
          _fail(g_38);
        else
          f_38 = g_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_14, not_null(f_38));
          t = set_config_0(t);
        }
      }
      t = w_19;
      {
        ATerm i_38 = NULL;
        i_38 = t;
        if(((h_38 != NULL) && (h_38 != i_38)))
          _fail(i_38);
        else
          h_38 = i_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_38));
      }
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                t = y_115(t);
                t = Cons_2(t, _id, w_3);
              }
            }
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_3, w_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  ATerm f_20;
  f_20 = t;
  {
    ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
    r_38 = t;
    n_38 :
    if(match_cons(r_38, sym__3))
      {
        s_38 = ATgetArgument(r_38, 0);
        t_38 = ATgetArgument(r_38, 1);
        u_38 = ATgetArgument(r_38, 2);
        {
          if(((o_38 != NULL) && (o_38 != s_38)))
            _fail(s_38);
          else
            o_38 = s_38;
          {
            if(((p_38 != NULL) && (p_38 != t_38)))
              _fail(t_38);
            else
              p_38 = t_38;
            {
              if(((q_38 != NULL) && (q_38 != u_38)))
                _fail(u_38);
              else
                q_38 = u_38;
              t = SSL_table_put(not_null(o_38), not_null(p_38), not_null(q_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_115 (ATerm))
{
  ATerm x_38 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    t = term_h_20;
    t = table_put_0(t);
  }
  t = g_20;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_115(t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm k_20 = t;
            int p_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(p_20);
              }
            else
              {
                t = k_20;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, x_3);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm t_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21;
            a_21 = t;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_21;
            {
              t = system_usage_0(t);
              {
                t = term_i_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = t_20;
            {
              ATerm d_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_21;
                  m_21 = t;
                  {
                    t = term_q_18;
                    t = get_config_0(t);
                  }
                  t = m_21;
                  {
                    t = system_about_0(t);
                    {
                      t = term_i_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = d_21;
                  {
                    ATerm z_3 (ATerm t)
                    {
                      ATerm a_4 (ATerm t)
                      {
                        ATerm y_38 = NULL;
                        y_38 = t;
                        if(((x_38 != NULL) && (x_38 != y_38)))
                          _fail(y_38);
                        else
                          x_38 = y_38;
                        return(t);
                      }
                      t = Undefined_1(t, a_4);
                      return(t);
                    }
                    t = option_defined_1(t, z_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_n_21));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_8;
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
      t = try_1(t, y_3);
      {
        ATerm o_21;
        o_21 = t;
        {
          t = term_e_17;
          t = table_destroy_0(t);
        }
        t = o_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm a_114 (ATerm))
{
  t = parse_options_1(t, x_113);
  {
    t = store_options_0(t);
    {
      t = z_113(t);
      {
        ATerm p_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_113);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = p_21;
            {
              ATerm v_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_114(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_21);
                }
              else
                {
                  t = v_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm p_113 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm x_21 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_113(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = x_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_113);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_4, o_113, p_113, m_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm d_22;
      d_22 = t;
      {
        ATerm b_39 = NULL;
        ATerm c_39 = NULL;
        t = term_n_14;
        {
          t = get_config_0(t);
          {
            c_39 = t;
            if(((b_39 != NULL) && (b_39 != c_39)))
              _fail(c_39);
            else
              b_39 = c_39;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(b_39)));
          t = printnl_0(t);
        }
      }
      t = d_22;
      return(t);
    }
    t = if_verbose2_1(t, o_4);
    return(t);
  }
  t = iowrap_4(t, g_113, h_113, i_113, n_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_113 (ATerm), ATerm f_113 (ATerm))
{
  t = iowrap_3(t, e_113, f_113, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_113 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = _2(t, _id, b_113);
    return(t);
  }
  t = iowrap_2(t, p_4, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, t_4, w_4);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, s_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
