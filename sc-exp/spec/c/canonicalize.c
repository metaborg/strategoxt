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
ATerm term_b_27;
ATerm term_g_26;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_x_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_v_8;
ATerm term_l_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_w_6;
ATerm term_i_6;
ATerm term_b_6;
ATerm term_o_5;
void init_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_9);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Call_2, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Call_2, term_e_11, (ATerm) ATempty);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_11);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_12);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_d_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_l_8);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_l_8);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_x_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_l_8);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_l_8);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_l_8);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__3, term_w_22, term_x_22, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_110 (ATerm));
ATerm guardedlchoice_1 (ATerm, ATerm a_120 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm lchoice_1 (ATerm, ATerm z_119 (ATerm));
ATerm LChoice_2 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm abstract_choice_2 (ATerm, ATerm b_120 (ATerm), ATerm c_120 (ATerm));
ATerm choice_1 (ATerm, ATerm y_119 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm restore_MarkVar_0 (ATerm);
ATerm Let_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_MarkVar_0 (ATerm);
ATerm isect_MarkVar_0 (ATerm);
ATerm mark_let_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_119 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_91 (ATerm), ATerm w_91 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_119 (ATerm));
ATerm scope_2 (ATerm, ATerm t_119 (ATerm), ATerm u_119 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm mark_scope_0 (ATerm);
ATerm Build_1 (ATerm, ATerm w_75 (ATerm));
ATerm mark_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_119 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_102 (ATerm), ATerm x_102 (ATerm));
ATerm union_1 (ATerm, ATerm s_102 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm));
ATerm crush_3 (ATerm, ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm));
ATerm collect_om_1 (ATerm, ATerm o_103 (ATerm));
ATerm collect_1 (ATerm, ATerm p_103 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_119 (ATerm));
ATerm MarkVar_0 (ATerm);
ATerm mark_match_0 (ATerm);
ATerm mark_buv_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_71 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_71 (ATerm));
ATerm mark_bound_unbound_vars_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm n_75 (ATerm));
ATerm Call_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm));
ATerm unzip_1 (ATerm, ATerm c_101 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_94 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm c_92 (ATerm));
ATerm downup2_2 (ATerm, ATerm f_93 (ATerm), ATerm g_93 (ATerm));
ATerm _2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_99 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_111 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm s_110 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_113 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_110 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_106 (ATerm), ATerm g_106 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm q_104 (ATerm), ATerm r_104 (ATerm));
ATerm crush_2 (ATerm, ATerm j_108 (ATerm), ATerm k_108 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_111 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_114 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_116 (ATerm));
ATerm map_1 (ATerm, ATerm r_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_116 (ATerm));
ATerm Program_1 (ATerm, ATerm p_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_115 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_91 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_116 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_116 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_116 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm x_114 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_114 (ATerm), ATerm c_114 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_113 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm n_5;
  n_5 = t;
  {
    ATerm e_3 = NULL;
    ATerm f_3 = NULL;
    f_3 = t;
    if(((e_3 != NULL) && (e_3 != f_3)))
      _fail(f_3);
    else
      e_3 = f_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATempty, not_null(e_3)));
      t = printnl_0(t);
    }
  }
  t = n_5;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm p_5;
  p_5 = t;
  {
    t = i_110(t);
    t = debug_0(t);
  }
  t = p_5;
  return(t);
}
ATerm guardedlchoice_1 (ATerm t, ATerm a_120 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = GuardedLChoice_3(t, a_120, a_120, _id);
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, a_120);
    return(t);
  }
  t = abstract_choice_2(t, c_0, e_0);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym_GuardedLChoice_3))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      r_4 = ATgetArgument(o_4, 2);
      {
        ATerm w_4 = NULL,y_4 = NULL;
        ATerm x_4 = NULL;
        t = SSLgetAnnotations(not_null(o_4));
        {
          x_4 = t;
          if(((w_4 != NULL) && (w_4 != x_4)))
            _fail(x_4);
          else
            w_4 = x_4;
        }
        {
          t = not_null(p_4);
          {
            ATerm a_5 = NULL;
            t = i_76(t);
            {
              y_4 = t;
              {
                t = not_null(q_4);
                {
                  ATerm c_5 = NULL;
                  t = j_76(t);
                  {
                    a_5 = t;
                    {
                      t = not_null(r_4);
                      {
                        ATerm e_5 = NULL;
                        t = k_76(t);
                        {
                          c_5 = t;
                          {
                            ATerm f_5 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(y_4), not_null(a_5), not_null(c_5)), not_null(w_4));
                            {
                              f_5 = t;
                              if(((e_5 != NULL) && (e_5 != f_5)))
                                _fail(f_5);
                              else
                                e_5 = f_5;
                            }
                            t = not_null(e_5);
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
ATerm lchoice_1 (ATerm t, ATerm z_119 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = LChoice_2(t, z_119, _id);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    t = LChoice_2(t, _id, z_119);
    return(t);
  }
  t = abstract_choice_2(t, f_0, n_0);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym_LChoice_2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      {
        ATerm y_5 = NULL,a_6 = NULL;
        ATerm z_5 = NULL;
        t = SSLgetAnnotations(not_null(s_5));
        {
          z_5 = t;
          if(((y_5 != NULL) && (y_5 != z_5)))
            _fail(z_5);
          else
            y_5 = z_5;
        }
        {
          t = not_null(t_5);
          {
            ATerm c_6 = NULL;
            t = e_76(t);
            {
              a_6 = t;
              {
                t = not_null(u_5);
                {
                  ATerm e_6 = NULL;
                  t = f_76(t);
                  {
                    c_6 = t;
                    {
                      ATerm f_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(a_6), not_null(c_6)), not_null(y_5));
                      {
                        f_6 = t;
                        if(((e_6 != NULL) && (e_6 != f_6)))
                          _fail(f_6);
                        else
                          e_6 = f_6;
                      }
                      t = not_null(e_6);
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
ATerm abstract_choice_2 (ATerm t, ATerm b_120 (ATerm), ATerm c_120 (ATerm))
{
  ATerm n_6 = NULL,p_6 = NULL;
  ATerm q_5;
  q_5 = t;
  {
    ATerm o_6 = NULL;
    t = save_MarkVar_0(t);
    {
      o_6 = t;
      if(((n_6 != NULL) && (n_6 != o_6)))
        _fail(o_6);
      else
        n_6 = o_6;
    }
  }
  t = q_5;
  {
    t = b_120(t);
    {
      ATerm v_5;
      v_5 = t;
      {
        ATerm q_6 = NULL;
        t = save_MarkVar_0(t);
        {
          q_6 = t;
          {
            if(((p_6 != NULL) && (p_6 != q_6)))
              _fail(q_6);
            else
              p_6 = q_6;
            {
              t = not_null(n_6);
              t = restore_MarkVar_0(t);
            }
          }
        }
      }
      t = v_5;
      {
        t = c_120(t);
        {
          ATerm w_5;
          w_5 = t;
          {
            t = not_null(p_6);
            t = isect_MarkVar_0(t);
          }
          t = w_5;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm y_119 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = Choice_2(t, y_119, _id);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = Choice_2(t, _id, y_119);
    return(t);
  }
  t = abstract_choice_2(t, o_0, p_0);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  y_6 :
  if(match_cons(z_6, sym_Choice_2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      {
        ATerm f_7 = NULL,h_7 = NULL;
        ATerm g_7 = NULL;
        t = SSLgetAnnotations(not_null(z_6));
        {
          g_7 = t;
          if(((f_7 != NULL) && (f_7 != g_7)))
            _fail(g_7);
          else
            f_7 = g_7;
        }
        {
          t = not_null(a_7);
          {
            ATerm j_7 = NULL;
            t = c_75(t);
            {
              h_7 = t;
              {
                t = not_null(b_7);
                {
                  ATerm l_7 = NULL;
                  t = d_75(t);
                  {
                    j_7 = t;
                    {
                      ATerm m_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(h_7), not_null(j_7)), not_null(f_7));
                      {
                        m_7 = t;
                        if(((l_7 != NULL) && (l_7 != m_7)))
                          _fail(m_7);
                        else
                          l_7 = m_7;
                      }
                      t = not_null(l_7);
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
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      {
        t = not_null(y_7);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
            b_8 = t;
            u_7 :
            if(match_cons(b_8, sym__2))
              {
                c_8 = ATgetArgument(b_8, 0);
                d_8 = ATgetArgument(b_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_7), not_null(c_8), not_null(d_8));
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
  ATerm j_8 = NULL;
  j_8 = t;
  {
    ATerm x_5;
    x_5 = t;
    {
      t = term_b_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(j_8));
          t = table_putlist_0(t);
        }
      }
    }
    t = x_5;
  }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_Let_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        ATerm y_8 = NULL,a_9 = NULL;
        ATerm z_8 = NULL;
        t = SSLgetAnnotations(not_null(s_8));
        {
          z_8 = t;
          if(((y_8 != NULL) && (y_8 != z_8)))
            _fail(z_8);
          else
            y_8 = z_8;
        }
        {
          t = not_null(t_8);
          {
            ATerm c_9 = NULL;
            t = o_75(t);
            {
              a_9 = t;
              {
                t = not_null(u_8);
                {
                  ATerm e_9 = NULL;
                  t = p_75(t);
                  {
                    c_9 = t;
                    {
                      ATerm f_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_9), not_null(c_9)), not_null(y_8));
                      {
                        f_9 = t;
                        if(((e_9 != NULL) && (e_9 != f_9)))
                          _fail(f_9);
                        else
                          e_9 = f_9;
                      }
                      t = not_null(e_9);
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
  ATerm m_9 = NULL;
  m_9 = t;
  t = SSL_table_keys(not_null(m_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm u_9 = NULL;
        ATerm w_9 = NULL;
        u_9 = t;
        {
          ATerm x_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(u_9));
          {
            t = table_get_0(t);
            {
              x_9 = t;
              if(((w_9 != NULL) && (w_9 != x_9)))
                _fail(x_9);
              else
                w_9 = x_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(w_9));
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
  t = term_b_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm isect_MarkVar_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
      k_10 = t;
      e_10 :
      if(match_cons(k_10, sym__2))
        {
          l_10 = ATgetArgument(k_10, 0);
          m_10 = ATgetArgument(k_10, 1);
          f_10 :
          if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
            {
              n_10 = ATgetFirst((ATermList) m_10);
              p_10 = (ATerm) ATgetNext((ATermList) m_10);
              g_10 :
              if(match_cons(n_10, sym_Defined_1))
                {
                  o_10 = ATgetArgument(n_10, 0);
                  h_10 :
                  if(!(match_cons(l_10, sym_Scopes_0)))
                    {
                      ATerm d_6 = t;
                      int g_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_6;
                          h_6 = t;
                          {
                            ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(l_10));
                            {
                              t = table_get_0(t);
                              {
                                r_10 = t;
                                c_10 :
                                if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
                                  {
                                    s_10 = ATgetFirst((ATermList) r_10);
                                    u_10 = (ATerm) ATgetNext((ATermList) r_10);
                                    d_10 :
                                    if(match_cons(s_10, sym_Defined_1))
                                      {
                                        t_10 = ATgetArgument(s_10, 0);
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
                          t = h_6;
                          ;
                          LocalPopChoice(g_6);
                        }
                      else
                        {
                          t = d_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), (ATerm) ATinsert(ATempty, term_i_6));
                        }
                    }
                }
              else
                {
                  i_10 :
                  if(!(match_cons(l_10, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              j_10 :
              if(!(match_cons(l_10, sym_Scopes_0)))
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
  ATerm y_10 = NULL,a_11 = NULL;
  t = Let_2(t, _id, _id);
  {
    ATerm j_6;
    j_6 = t;
    {
      ATerm z_10 = NULL;
      t = save_MarkVar_0(t);
      {
        z_10 = t;
        if(((y_10 != NULL) && (y_10 != z_10)))
          _fail(z_10);
        else
          y_10 = z_10;
      }
    }
    t = j_6;
    {
      t = Let_2(t, _id, mark_buv_0);
      {
        ATerm k_6;
        k_6 = t;
        {
          ATerm b_11 = NULL;
          t = not_null(y_10);
          {
            t = isect_MarkVar_0(t);
            {
              t = save_MarkVar_0(t);
              {
                b_11 = t;
                if(((a_11 != NULL) && (a_11 != b_11)))
                  _fail(b_11);
                else
                  a_11 = b_11;
              }
            }
          }
        }
        t = k_6;
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              t = mark_buv_0(t);
              {
                ATerm l_6;
                l_6 = t;
                {
                  t = not_null(a_11);
                  t = restore_MarkVar_0(t);
                }
                t = l_6;
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
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
    {
      h_11 = ATgetFirst((ATermList) g_11);
      i_11 = (ATerm) ATgetNext((ATermList) g_11);
      t = not_null(i_11);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm m_6;
        m_6 = t;
        {
          ATerm t_11 = NULL;
          ATerm u_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), not_null(q_11));
          {
            ATerm r_6 = t;
            int s_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(s_6);
              }
            else
              {
                t = r_6;
                t = (ATerm) ATempty;
              }
            {
              u_11 = t;
              if(((t_11 != NULL) && (t_11 != u_11)))
                _fail(u_11);
              else
                t_11 = u_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_11), not_null(q_11), not_null(t_11));
            t = table_put_0(t);
          }
        }
        t = m_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_119 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm e_12 = NULL;
    ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
    t = s_119(t);
    {
      e_12 = t;
      {
        if(((d_12 != NULL) && (d_12 != e_12)))
          _fail(e_12);
        else
          d_12 = e_12;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), term_w_6);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_12 = t;
            a_12 :
            if(((ATgetType(f_12) == AT_LIST) && !(ATisEmpty(f_12))))
              {
                g_12 = ATgetFirst((ATermList) f_12);
                h_12 = (ATerm) ATgetNext((ATermList) f_12);
                {
                  if(((c_12 != NULL) && (c_12 != g_12)))
                    _fail(g_12);
                  else
                    c_12 = g_12;
                  {
                    if(((b_12 != NULL) && (b_12 != h_12)))
                      _fail(h_12);
                    else
                      b_12 = h_12;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_12), term_w_6, not_null(b_12));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_12);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm i_12 = NULL;
                              i_12 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(i_12));
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
  t = t_6;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_91 (ATerm), ATerm w_91 (ATerm))
{
  ATerm x_6 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_91(t);
      t = w_91(t);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = x_6;
      {
        t = w_91(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_119 (ATerm))
{
  ATerm p_12 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm q_12 = NULL;
    ATerm r_12 = NULL;
    t = r_119(t);
    {
      q_12 = t;
      {
        if(((p_12 != NULL) && (p_12 != q_12)))
          _fail(q_12);
        else
          p_12 = q_12;
        {
          ATerm s_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), term_w_6);
          {
            ATerm e_7 = t;
            int i_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_7);
              }
            else
              {
                t = e_7;
                t = (ATerm) ATempty;
              }
            {
              s_12 = t;
              if(((r_12 != NULL) && (r_12 != s_12)))
                _fail(s_12);
              else
                r_12 = s_12;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_12), term_w_6, (ATerm) ATinsert(CheckATermList(not_null(r_12)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm t_119 (ATerm), ATerm u_119 (ATerm))
{
  t = begin_scope_1(t, t_119);
  {
    ATerm x_0 (ATerm t)
    {
      t = end_scope_1(t, t_119);
      return(t);
    }
    t = restore_always_2(t, u_119, x_0);
  }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym_Scope_2))
    {
      c_13 = ATgetArgument(b_13, 0);
      d_13 = ATgetArgument(b_13, 1);
      {
        ATerm h_13 = NULL,j_13 = NULL;
        ATerm i_13 = NULL;
        t = SSLgetAnnotations(not_null(b_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        {
          t = not_null(c_13);
          {
            ATerm l_13 = NULL;
            t = y_75(t);
            {
              j_13 = t;
              {
                t = not_null(d_13);
                {
                  ATerm n_13 = NULL;
                  t = z_75(t);
                  {
                    l_13 = t;
                    {
                      ATerm o_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_13), not_null(l_13)), not_null(h_13));
                      {
                        o_13 = t;
                        if(((n_13 != NULL) && (n_13 != o_13)))
                          _fail(o_13);
                        else
                          n_13 = o_13;
                      }
                      t = not_null(n_13);
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
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_Scope_2))
    {
      y_13 = ATgetArgument(x_13, 0);
      z_13 = ATgetArgument(x_13, 1);
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            t = term_b_6;
            return(t);
          }
          ATerm a_1 (ATerm t)
          {
            ATerm k_7;
            k_7 = t;
            {
              t = not_null(y_13);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm b_14 = NULL;
                  b_14 = t;
                  {
                    ATerm n_7;
                    n_7 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_14)), term_p_7);
                      {
                        ATerm c_1 (ATerm t)
                        {
                          t = term_b_6;
                          return(t);
                        }
                        t = assert_1(t, c_1);
                      }
                    }
                    t = n_7;
                  }
                  return(t);
                }
                t = map_1(t, b_1);
              }
            }
            t = k_7;
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
ATerm Build_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Build_1))
    {
      l_14 = ATgetArgument(k_14, 0);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(l_14);
          {
            ATerm s_14 = NULL;
            t = w_75(t);
            {
              q_14 = t;
              {
                ATerm t_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(q_14)), not_null(o_14));
                {
                  t_14 = t;
                  if(((s_14 != NULL) && (s_14 != t_14)))
                    _fail(t_14);
                  else
                    s_14 = t_14;
                }
                t = not_null(s_14);
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
ATerm assert_1 (ATerm t, ATerm v_119 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym__2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
        ATerm q_7;
        q_7 = t;
        {
          ATerm l_15 = NULL;
          ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
          t = v_119(t);
          {
            l_15 = t;
            {
              if(((i_15 != NULL) && (i_15 != l_15)))
                _fail(l_15);
              else
                i_15 = l_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_15), not_null(e_15), not_null(f_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_7 = t;
                    int s_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), term_w_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(s_7);
                      }
                    else
                      {
                        t = r_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_15 = t;
                      b_15 :
                      if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
                        {
                          n_15 = ATgetFirst((ATermList) m_15);
                          o_15 = (ATerm) ATgetNext((ATermList) m_15);
                          {
                            if(((j_15 != NULL) && (j_15 != n_15)))
                              _fail(n_15);
                            else
                              j_15 = n_15;
                            {
                              if(((k_15 != NULL) && (k_15 != o_15)))
                                _fail(o_15);
                              else
                                k_15 = o_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_15), term_w_6, (ATerm) ATinsert(CheckATermList(not_null(k_15)), (ATerm) ATinsert(CheckATermList(not_null(j_15)), not_null(e_15))));
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
        t = q_7;
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
    {
      d_16 = ATgetFirst((ATermList) c_16);
      e_16 = (ATerm) ATgetNext((ATermList) c_16);
      {
        t = x_102(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm h_16 = NULL;
            h_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(h_16));
              t = w_102(t);
            }
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(e_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_102 (ATerm))
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym__2))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      {
        t = not_null(o_16);
        {
          ATerm t_16 (ATerm t)
          {
            ATerm t_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_16);
                ;
                LocalPopChoice(z_7);
              }
            else
              {
                t = t_7;
                {
                  ATerm a_8 = t;
                  int e_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(p_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_102, f_1);
                      t = t_16(t);
                      ;
                      LocalPopChoice(e_8);
                    }
                  else
                    {
                      t = a_8;
                      t = Cons_2(t, _id, t_16);
                    }
                }
              }
            return(t);
          }
          t = t_16(t);
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
ATerm foldr_3 (ATerm t, ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm))
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_104(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
        y_16 = t;
        x_16 :
        if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
          {
            z_16 = ATgetFirst((ATermList) y_16);
            a_17 = (ATerm) ATgetNext((ATermList) y_16);
            {
              ATerm d_17 = NULL,f_17 = NULL;
              ATerm h_8;
              h_8 = t;
              {
                ATerm e_17 = NULL;
                t = not_null(z_16);
                {
                  t = u_104(t);
                  {
                    e_17 = t;
                    if(((d_17 != NULL) && (d_17 != e_17)))
                      _fail(e_17);
                    else
                      d_17 = e_17;
                  }
                }
              }
              t = h_8;
              {
                ATerm g_17 = NULL;
                t = not_null(a_17);
                {
                  t = foldr_3(t, s_104, t_104, u_104);
                  {
                    g_17 = t;
                    if(((f_17 != NULL) && (f_17 != g_17)))
                      _fail(g_17);
                    else
                      f_17 = g_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(f_17));
                  t = t_104(t);
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
ATerm crush_3 (ATerm t, ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm))
{
  ATerm o_17 = NULL;
  ATerm q_17 = NULL;
  o_17 = t;
  {
    ATerm r_17 = NULL;
    ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
    t = not_null(o_17);
    {
      r_17 = t;
      {
        t = SSL_explode_term(not_null(r_17));
        {
          t_17 = t;
          n_17 :
          if(match_cons(t_17, sym__2))
            {
              u_17 = ATgetArgument(t_17, 0);
              v_17 = ATgetArgument(t_17, 1);
              if(((q_17 != NULL) && (q_17 != v_17)))
                _fail(v_17);
              else
                q_17 = v_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_17);
      t = foldr_3(t, l_108, m_108, n_108);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm i_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18 = NULL;
      ATerm b_18 = NULL;
      t = o_103(t);
      {
        b_18 = t;
        if(((a_18 != NULL) && (a_18 != b_18)))
          _fail(b_18);
        else
          a_18 = b_18;
      }
      t = (ATerm) ATinsert(ATempty, not_null(a_18));
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = i_8;
      {
        ATerm g_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = collect_om_1(t, o_103);
          return(t);
        }
        t = crush_3(t, g_1, union_0, h_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm p_103 (ATerm))
{
  t = collect_om_1(t, p_103);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
    {
      g_18 = ATgetFirst((ATermList) f_18);
      h_18 = (ATerm) ATgetNext((ATermList) f_18);
      t = not_null(g_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym__2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(o_18));
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
ATerm rewrite_1 (ATerm t, ATerm x_119 (ATerm))
{
  ATerm u_18 = NULL;
  ATerm w_18 = NULL;
  u_18 = t;
  {
    ATerm x_18 = NULL;
    t = term_l_8;
    {
      t = x_119(t);
      {
        x_18 = t;
        if(((w_18 != NULL) && (w_18 != x_18)))
          _fail(x_18);
        else
          w_18 = x_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(u_18));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm MarkVar_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Var_1))
    {
      o_19 = ATgetArgument(n_19, 0);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_19 = NULL;
            ATerm o_8;
            o_8 = t;
            {
              ATerm r_19 = NULL,s_19 = NULL;
              t = not_null(n_19);
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_b_6;
                  return(t);
                }
                t = rewrite_1(t, i_1);
                {
                  r_19 = t;
                  c_19 :
                  if(match_cons(r_19, sym_Defined_1))
                    {
                      s_19 = ATgetArgument(r_19, 0);
                      d_19 :
                      if(!(match_string(s_19, "j_0")))
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
            t = o_8;
            {
              ATerm u_19 = NULL,w_19 = NULL,y_19 = NULL;
              ATerm p_8;
              p_8 = t;
              {
                ATerm v_19 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_19));
                {
                  v_19 = t;
                  if(((u_19 != NULL) && (u_19 != v_19)))
                    _fail(v_19);
                  else
                    u_19 = v_19;
                }
              }
              t = p_8;
              {
                ATerm q_8;
                q_8 = t;
                {
                  ATerm x_19 = NULL;
                  t = (ATerm) ATinsert(ATempty, term_v_8);
                  {
                    x_19 = t;
                    if(((w_19 != NULL) && (w_19 != x_19)))
                      _fail(x_19);
                    else
                      w_19 = x_19;
                  }
                }
                t = q_8;
                {
                  t = SSLsetAnnotations(not_null(u_19), not_null(w_19));
                  {
                    y_19 = t;
                    if(((t_19 != NULL) && (t_19 != y_19)))
                      _fail(y_19);
                    else
                      t_19 = y_19;
                  }
                }
              }
              t = not_null(t_19);
            }
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm d_20 = NULL;
              ATerm w_8;
              w_8 = t;
              {
                ATerm b_20 = NULL,c_20 = NULL;
                t = not_null(n_19);
                {
                  ATerm j_1 (ATerm t)
                  {
                    t = term_b_6;
                    return(t);
                  }
                  t = rewrite_1(t, j_1);
                  {
                    b_20 = t;
                    h_19 :
                    if(match_cons(b_20, sym_Defined_1))
                      {
                        c_20 = ATgetArgument(b_20, 0);
                        i_19 :
                        if(!(match_string(c_20, "h_0")))
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
              t = w_8;
              {
                ATerm e_20 = NULL,g_20 = NULL,i_20 = NULL;
                ATerm x_8;
                x_8 = t;
                {
                  ATerm f_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_19));
                  {
                    f_20 = t;
                    if(((e_20 != NULL) && (e_20 != f_20)))
                      _fail(f_20);
                    else
                      e_20 = f_20;
                  }
                }
                t = x_8;
                {
                  ATerm b_9;
                  b_9 = t;
                  {
                    ATerm h_20 = NULL;
                    t = (ATerm) ATinsert(ATempty, term_d_9);
                    {
                      h_20 = t;
                      if(((g_20 != NULL) && (g_20 != h_20)))
                        _fail(h_20);
                      else
                        g_20 = h_20;
                    }
                  }
                  t = b_9;
                  {
                    t = SSLsetAnnotations(not_null(e_20), not_null(g_20));
                    {
                      i_20 = t;
                      if(((d_20 != NULL) && (d_20 != i_20)))
                        _fail(i_20);
                      else
                        d_20 = i_20;
                    }
                  }
                }
                t = not_null(d_20);
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
  ATerm x_20 = NULL,y_20 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_Match_1))
    {
      y_20 = ATgetArgument(x_20, 0);
      {
        ATerm a_21 = NULL;
        ATerm b_21 = NULL;
        t = not_null(y_20);
        {
          t = alltd_1(t, MarkVar_0);
          {
            b_21 = t;
            {
              if(((a_21 != NULL) && (a_21 != b_21)))
                _fail(b_21);
              else
                a_21 = b_21;
              {
                t = not_null(y_20);
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm c_21 = NULL,d_21 = NULL;
                    c_21 = t;
                    u_20 :
                    if(match_cons(c_21, sym_Var_1))
                      {
                        d_21 = ATgetArgument(c_21, 0);
                        t = not_null(d_21);
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
                      ATerm f_21 = NULL;
                      f_21 = t;
                      {
                        ATerm g_9;
                        g_9 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_21)), term_i_9);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              t = term_b_6;
                              return(t);
                            }
                            t = assert_1(t, m_1);
                          }
                        }
                        t = g_9;
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
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(a_21));
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0(t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = l_9;
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0(t);
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  {
                    ATerm q_9 = t;
                    int r_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0(t);
                        ;
                        LocalPopChoice(r_9);
                      }
                    else
                      {
                        t = q_9;
                        {
                          ATerm t_9 = t;
                          int v_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              t = choice_1(t, mark_buv_0);
                              ;
                              LocalPopChoice(v_9);
                            }
                          else
                            {
                              t = t_9;
                              {
                                ATerm y_9 = t;
                                int z_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    t = lchoice_1(t, mark_buv_0);
                                    ;
                                    LocalPopChoice(z_9);
                                  }
                                else
                                  {
                                    t = y_9;
                                    {
                                      ATerm a_10 = t;
                                      int b_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          t = guardedlchoice_1(t, mark_buv_0);
                                          ;
                                          LocalPopChoice(b_10);
                                        }
                                      else
                                        {
                                          t = a_10;
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
ATerm Strategies_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Strategies_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(q_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(r_21);
          {
            ATerm y_21 = NULL;
            t = s_71(t);
            {
              w_21 = t;
              {
                ATerm z_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_21)), not_null(u_21));
                {
                  z_21 = t;
                  if(((y_21 != NULL) && (y_21 != z_21)))
                    _fail(z_21);
                  else
                    y_21 = z_21;
                }
                t = not_null(y_21);
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
ATerm Specification_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Specification_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm n_22 = NULL,p_22 = NULL;
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(j_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
        {
          t = not_null(k_22);
          {
            ATerm r_22 = NULL;
            t = x_71(t);
            {
              p_22 = t;
              {
                ATerm s_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(p_22)), not_null(n_22));
                {
                  s_22 = t;
                  if(((r_22 != NULL) && (r_22 != s_22)))
                    _fail(s_22);
                  else
                    r_22 = s_22;
                }
                t = not_null(r_22);
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
    t = term_q_10;
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
        t = term_v_10;
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
  ATerm z_22 = NULL;
  ATerm b_23 = NULL;
  z_22 = t;
  {
    ATerm c_23 = NULL;
    t = new_0(t);
    {
      c_23 = t;
      if(((b_23 != NULL) && (b_23 != c_23)))
        _fail(c_23);
      else
        b_23 = c_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_23)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_23), (ATerm)ATempty, not_null(z_22))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_SVar_1))
    {
      l_23 = ATgetArgument(k_23, 0);
      {
        ATerm o_23 = NULL,q_23 = NULL;
        ATerm p_23 = NULL;
        t = SSLgetAnnotations(not_null(k_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
        {
          t = not_null(l_23);
          {
            ATerm s_23 = NULL;
            t = n_75(t);
            {
              q_23 = t;
              {
                ATerm t_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_23)), not_null(o_23));
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
                t = not_null(s_23);
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
ATerm Call_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym_Call_2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        ATerm k_24 = NULL,m_24 = NULL;
        ATerm l_24 = NULL;
        t = SSLgetAnnotations(not_null(e_24));
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
        {
          t = not_null(f_24);
          {
            ATerm o_24 = NULL;
            t = q_75(t);
            {
              m_24 = t;
              {
                t = not_null(g_24);
                {
                  ATerm q_24 = NULL;
                  t = r_75(t);
                  {
                    o_24 = t;
                    {
                      ATerm r_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(m_24), not_null(o_24)), not_null(k_24));
                      {
                        r_24 = t;
                        if(((q_24 != NULL) && (q_24 != r_24)))
                          _fail(r_24);
                        else
                          q_24 = r_24;
                      }
                      t = not_null(q_24);
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
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  c_25 = t;
  y_24 :
  if(match_cons(c_25, sym_Let_2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      z_24 :
      if(match_cons(e_25, sym_Call_2))
        {
          f_25 = ATgetArgument(e_25, 0);
          h_25 = ATgetArgument(e_25, 1);
          a_25 :
          if(match_cons(f_25, sym_SVar_1))
            {
              g_25 = ATgetArgument(f_25, 0);
              b_25 :
              if(((ATgetType(h_25) == AT_LIST) && ATisEmpty(h_25)))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_25)), (ATerm) ATempty), not_null(d_25));
                }
              else
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
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Fail_0))
    {
      t = term_c_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym_Id_0))
    {
      t = term_j_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  x_25 = t;
  u_25 :
  if(match_cons(x_25, sym__2))
    {
      y_25 = ATgetArgument(x_25, 0);
      b_26 = ATgetArgument(x_25, 1);
      v_25 :
      if(match_cons(y_25, sym__2))
        {
          z_25 = ATgetArgument(y_25, 0);
          a_26 = ATgetArgument(y_25, 1);
          w_25 :
          if(match_cons(b_26, sym__2))
            {
              c_26 = ATgetArgument(b_26, 0);
              d_26 = ATgetArgument(b_26, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_26)), not_null(z_25)), (ATerm) ATinsert(CheckATermList(not_null(d_26)), not_null(a_26)));
            }
          else
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
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
    {
      m_26 = ATgetFirst((ATermList) l_26);
      n_26 = (ATerm) ATgetNext((ATermList) l_26);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), not_null(n_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  s_26 :
  if(((ATgetType(t_26) == AT_LIST) && ATisEmpty(t_26)))
    {
      t = term_k_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm v_100 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_100(t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          t = t_100(t);
          {
            t = _2(t, v_100, v_26);
            t = u_100(t);
          }
        }
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm c_101 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, c_101);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_94(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = _all(t, w_26);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  ATerm m_30 (ATerm t)
  {
    t = not_null(q_28);
    return(t);
  }
  ATerm n_30 (ATerm t)
  {
    t = not_null(r_28);
    return(t);
  }
  ATerm o_30 (ATerm t)
  {
    ATerm n_29 = NULL;
    ATerm o_29 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_28), not_null(n_28));
    {
      t = conc_0(t);
      {
        o_29 = t;
        if(((n_29 != NULL) && (n_29 != o_29)))
          _fail(o_29);
        else
          n_29 = o_29;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_29), not_null(o_28));
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    t = not_null(r_28);
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_11, (ATerm) ATinsert(ATempty, not_null(q_28)));
    return(t);
  }
  ATerm r_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_y_11, (ATerm) ATinsert(ATempty, not_null(q_28)));
    return(t);
  }
  ATerm s_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_j_12, (ATerm) ATinsert(ATempty, not_null(q_28)));
    return(t);
  }
  ATerm t_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_l_12, (ATerm) ATinsert(ATempty, not_null(q_28)));
    return(t);
  }
  ATerm u_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_n_12, (ATerm) ATinsert(ATempty, not_null(q_28)));
    return(t);
  }
  ATerm v_30 (ATerm t)
  {
    ATerm x_29 = NULL;
    ATerm y_29 = NULL;
    t = not_null(r_28);
    {
      ATerm a_31 (ATerm t)
      {
        ATerm o_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm u_12 = t;
              int v_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(v_12);
                }
              else
                {
                  t = u_12;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = try_1(t, a_31);
              return(t);
            }
            t = Cons_2(t, t_1, u_1);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = o_12;
            t = Cons_2(t, _id, a_31);
          }
        return(t);
      }
      t = a_31(t);
      {
        y_29 = t;
        if(((x_29 != NULL) && (x_29 != y_29)))
          _fail(y_29);
        else
          x_29 = y_29;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(q_28), not_null(x_29));
    return(t);
  }
  ATerm w_30 (ATerm t)
  {
    ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
    ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
    t = not_null(r_28);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, w_1);
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
              {
                ATerm e_13 = t;
                int f_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_13 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = Call_2(t, x_1, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_13;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(f_13);
                  }
                else
                  {
                    t = e_13;
                    {
                      ATerm y_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, y_1);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, v_1);
      {
        e_30 = t;
        v_27 :
        if(match_cons(e_30, sym__2))
          {
            f_30 = ATgetArgument(e_30, 0);
            g_30 = ATgetArgument(e_30, 1);
            {
              ATerm h_30 = NULL;
              if(((b_30 != NULL) && (b_30 != f_30)))
                _fail(f_30);
              else
                b_30 = f_30;
              {
                if(((c_30 != NULL) && (c_30 != g_30)))
                  _fail(g_30);
                else
                  c_30 = g_30;
                {
                  t = not_null(c_30);
                  {
                    t = concat_0(t);
                    {
                      h_30 = t;
                      {
                        if(((d_30 != NULL) && (d_30 != h_30)))
                          _fail(h_30);
                        else
                          d_30 = h_30;
                        {
                          ATerm k_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = k_13;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_30), (ATerm) ATmakeAppl(sym_Call_2, not_null(q_28), not_null(b_30)));
    return(t);
  }
  p_28 = t;
  w_27 :
  if(match_cons(p_28, sym_Rec_2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_28), (ATerm)ATempty, not_null(r_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_28)), (ATerm) ATempty));
    }
  else
    {
      if(match_cons(p_28, sym_SDef_3))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          i_28 = ATgetArgument(p_28, 2);
          x_27 :
          if(((ATgetType(r_28) == AT_LIST) && ATisEmpty(r_28)))
            {
              y_27 :
              if(match_cons(i_28, sym_Rec_2))
                {
                  j_28 = ATgetArgument(i_28, 0);
                  k_28 = ATgetArgument(i_28, 1);
                  {
                    ATerm x_28 = NULL;
                    ATerm c_29 = NULL;
                    t = not_null(k_28);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
                        y_28 = t;
                        n_27 :
                        if(match_cons(y_28, sym_Call_2))
                          {
                            z_28 = ATgetArgument(y_28, 0);
                            b_29 = ATgetArgument(y_28, 1);
                            o_27 :
                            if(match_cons(z_28, sym_SVar_1))
                              {
                                a_29 = ATgetArgument(z_28, 0);
                                p_27 :
                                if(((ATgetType(b_29) == AT_LIST) && ATisEmpty(b_29)))
                                  {
                                    {
                                      if(((j_28 != NULL) && (j_28 != a_29)))
                                        _fail(a_29);
                                      else
                                        j_28 = a_29;
                                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_28)), (ATerm) ATempty);
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
                      t = alltd_1(t, z_1);
                      {
                        c_29 = t;
                        if(((x_28 != NULL) && (x_28 != c_29)))
                          _fail(c_29);
                        else
                          x_28 = c_29;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_28), (ATerm)ATempty, not_null(x_28));
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
          if(match_cons(p_28, sym_Seq_2))
            {
              q_28 = ATgetArgument(p_28, 0);
              r_28 = ATgetArgument(p_28, 1);
              z_27 :
              if(match_cons(r_28, sym_Seq_2))
                {
                  n_28 = ATgetArgument(r_28, 0);
                  o_28 = ATgetArgument(r_28, 1);
                  a_28 :
                  if(match_cons(q_28, sym_Where_1))
                    {
                      m_28 = ATgetArgument(q_28, 0);
                      b_28 :
                      if(match_cons(n_28, sym_Build_1))
                        {
                          l_28 = ATgetArgument(n_28, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_28)), not_null(o_28)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(q_28, sym_Id_0))
                        {
                          t = n_30(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(r_28, sym_Build_1))
                    {
                      n_28 = ATgetArgument(r_28, 0);
                      c_28 :
                      if(match_cons(q_28, sym_Where_1))
                        {
                          m_28 = ATgetArgument(q_28, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_28), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_28)));
                        }
                      else
                        {
                          if(match_cons(q_28, sym_Id_0))
                            {
                              t = n_30(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(r_28, sym_Id_0))
                        {
                          d_28 :
                          if(match_cons(q_28, sym_Id_0))
                            {
                              ATerm m_13 = t;
                              int p_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_30(t);
                                  ;
                                  LocalPopChoice(p_13);
                                }
                              else
                                {
                                  t = m_13;
                                  t = n_30(t);
                                }
                            }
                          else
                            {
                              t = m_30(t);
                            }
                        }
                      else
                        {
                          e_28 :
                          if(match_cons(q_28, sym_Id_0))
                            {
                              t = n_30(t);
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
              if(match_cons(p_28, sym_Scope_2))
                {
                  q_28 = ATgetArgument(p_28, 0);
                  r_28 = ATgetArgument(p_28, 1);
                  f_28 :
                  if(match_cons(r_28, sym_Scope_2))
                    {
                      n_28 = ATgetArgument(r_28, 0);
                      o_28 = ATgetArgument(r_28, 1);
                      g_28 :
                      if(((ATgetType(q_28) == AT_LIST) && ATisEmpty(q_28)))
                        {
                          {
                            ATerm q_13 = t;
                            int r_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_30(t);
                                ;
                                LocalPopChoice(r_13);
                              }
                            else
                              {
                                t = q_13;
                                t = p_30(t);
                              }
                          }
                        }
                      else
                        {
                          t = o_30(t);
                        }
                    }
                  else
                    {
                      h_28 :
                      if(((ATgetType(q_28) == AT_LIST) && ATisEmpty(q_28)))
                        {
                          t = p_30(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(p_28, sym_Thread_1))
                    {
                      q_28 = ATgetArgument(p_28, 0);
                      t = q_30(t);
                    }
                  else
                    {
                      if(match_cons(p_28, sym_Some_1))
                        {
                          q_28 = ATgetArgument(p_28, 0);
                          t = r_30(t);
                        }
                      else
                        {
                          if(match_cons(p_28, sym_One_1))
                            {
                              q_28 = ATgetArgument(p_28, 0);
                              t = s_30(t);
                            }
                          else
                            {
                              if(match_cons(p_28, sym_All_1))
                                {
                                  q_28 = ATgetArgument(p_28, 0);
                                  t = t_30(t);
                                }
                              else
                                {
                                  if(match_cons(p_28, sym_Bagof_1))
                                    {
                                      q_28 = ATgetArgument(p_28, 0);
                                      t = u_30(t);
                                    }
                                  else
                                    {
                                      if(match_cons(p_28, sym_Call_2))
                                        {
                                          q_28 = ATgetArgument(p_28, 0);
                                          r_28 = ATgetArgument(p_28, 1);
                                          {
                                            ATerm s_13 = t;
                                            int t_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = v_30(t);
                                                ;
                                                LocalPopChoice(t_13);
                                              }
                                            else
                                              {
                                                t = s_13;
                                                t = w_30(t);
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
ATerm repeat_1 (ATerm t, ATerm c_92 (ATerm))
{
  ATerm e_31 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = c_92(t);
      t = e_31(t);
      return(t);
    }
    t = try_1(t, a_2);
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm f_93 (ATerm), ATerm g_93 (ATerm))
{
  t = f_93(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = downup2_2(t, f_93, g_93);
      return(t);
    }
    t = _all(t, b_2);
    t = g_93(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm r_31 = NULL,t_31 = NULL;
        ATerm s_31 = NULL;
        t = SSLgetAnnotations(not_null(l_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        {
          t = not_null(m_31);
          {
            ATerm v_31 = NULL;
            t = f_70(t);
            {
              t_31 = t;
              {
                t = not_null(n_31);
                {
                  ATerm x_31 = NULL;
                  t = g_70(t);
                  {
                    v_31 = t;
                    {
                      ATerm y_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_31), not_null(v_31)), not_null(r_31));
                      {
                        y_31 = t;
                        if(((x_31 != NULL) && (x_31 != y_31)))
                          _fail(y_31);
                        else
                          x_31 = y_31;
                      }
                      t = not_null(x_31);
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
  ATerm u_13;
  u_13 = t;
  {
    ATerm f_32 = NULL;
    ATerm g_32 = NULL;
    t = term_l_8;
    {
      t = whoami_0(t);
      {
        g_32 = t;
        if(((f_32 != NULL) && (f_32 != g_32)))
          _fail(g_32);
        else
          f_32 = g_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), not_null(f_32)), term_v_13));
      {
        t = printnl_0(t);
        {
          t = term_c_14;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym__2))
    {
      l_32 = ATgetArgument(k_32, 0);
      m_32 = ATgetArgument(k_32, 1);
      {
        ATerm d_14;
        d_14 = t;
        t = SSL_printnl(not_null(l_32), not_null(m_32));
        t = d_14;
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
  ATerm r_32 = NULL;
  r_32 = t;
  t = SSL_implode_string(not_null(r_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
        w_32 = t;
        v_32 :
        if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
          {
            x_32 = ATgetFirst((ATermList) w_32);
            y_32 = (ATerm) ATgetNext((ATermList) w_32);
            {
              t = not_null(x_32);
              {
                ATerm c_2 (ATerm t)
                {
                  t = not_null(y_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_2);
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
  ATerm i_33 = NULL;
  ATerm k_33 = NULL;
  i_33 = t;
  {
    ATerm l_33 = NULL;
    ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
    t = not_null(i_33);
    {
      l_33 = t;
      {
        t = SSL_explode_term(not_null(l_33));
        {
          n_33 = t;
          g_33 :
          if(match_cons(n_33, sym__2))
            {
              o_33 = ATgetArgument(n_33, 0);
              p_33 = ATgetArgument(n_33, 1);
              h_33 :
              if(match_string(o_33, ""))
                {
                  if(((k_33 != NULL) && (k_33 != p_33)))
                    _fail(p_33);
                  else
                    k_33 = p_33;
                }
              else
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
      t = not_null(k_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_99 (ATerm))
{
  ATerm t_33 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_33);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          t = Nil_0(t);
          t = g_99(t);
        }
      }
    return(t);
  }
  t = t_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  c_35 :
  if(match_cons(e_35, sym__2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      {
        t = not_null(f_35);
        {
          ATerm d_2 (ATerm t)
          {
            t = not_null(g_35);
            return(t);
          }
          t = at_end_1(t, d_2);
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
  ATerm i_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = i_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  t = SSL_explode_string(not_null(l_35));
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
  ATerm n_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = n_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_2);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
              u_35 = t;
              t_35 :
              if(match_cons(u_35, sym_Path_1))
                {
                  v_35 = ATgetArgument(u_35, 0);
                  t = not_null(v_35);
                }
              else
                {
                  if(match_cons(u_35, sym_Var_1))
                    {
                      v_35 = ATgetArgument(u_35, 0);
                      {
                        t = not_null(v_35);
                        {
                          ATerm w_14 = t;
                          int x_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(x_14);
                            }
                          else
                            {
                              t = w_14;
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = term_y_14;
                                  return(t);
                                }
                                t = debug_1(t, f_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_35, sym_Prefix_2))
                        {
                          v_35 = ATgetArgument(u_35, 0);
                          w_35 = ATgetArgument(u_35, 1);
                          {
                            ATerm b_36 = NULL,d_36 = NULL;
                            ATerm z_14;
                            z_14 = t;
                            {
                              ATerm c_36 = NULL;
                              t = not_null(v_35);
                              {
                                t = eval_config_0(t);
                                {
                                  c_36 = t;
                                  if(((b_36 != NULL) && (b_36 != c_36)))
                                    _fail(c_36);
                                  else
                                    b_36 = c_36;
                                }
                              }
                            }
                            t = z_14;
                            {
                              ATerm e_36 = NULL;
                              t = not_null(w_35);
                              {
                                t = eval_config_0(t);
                                {
                                  e_36 = t;
                                  if(((d_36 != NULL) && (d_36 != e_36)))
                                    _fail(e_36);
                                  else
                                    d_36 = e_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(d_36));
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
  ATerm m_36 = NULL;
  m_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(m_36));
    {
      t = table_get_0(t);
      {
        ATerm g_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_15;
            g_15 = t;
            {
              ATerm t_36 = NULL;
              ATerm u_36 = NULL;
              u_36 = t;
              if(((t_36 != NULL) && (t_36 != u_36)))
                _fail(u_36);
              else
                t_36 = u_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_15, not_null(m_36), not_null(t_36));
                t = table_put_0(t);
              }
            }
            t = g_15;
          }
          return(t);
        }
        t = try_1(t, g_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm h_15;
    h_15 = t;
    {
      ATerm y_36 = NULL;
      ATerm z_36 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), term_q_15);
        t = geq_0(t);
      }
    }
    t = h_15;
    t = w_111(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  f_37 = t;
  d_37 :
  if(match_cons(f_37, sym__2))
    {
      l_37 = ATgetArgument(f_37, 0);
      m_37 = ATgetArgument(f_37, 1);
      e_37 :
      if(match_cons(m_37, sym_Stream_1))
        {
          n_37 = ATgetArgument(m_37, 0);
          {
            ATerm q_37 = NULL;
            t = SSL_fputc(not_null(l_37), not_null(n_37));
            {
              ATerm r_37 = NULL;
              r_37 = t;
              if(((q_37 != NULL) && (q_37 != r_37)))
                _fail(r_37);
              else
                q_37 = r_37;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_37));
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
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  y_37 = t;
  w_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      b_38 = ATgetArgument(y_37, 1);
      x_37 :
      if(match_cons(z_37, sym_Stream_1))
        {
          a_38 = ATgetArgument(z_37, 0);
          {
            ATerm e_38 = NULL;
            t = SSL_write_term_to_stream_text(not_null(a_38), not_null(b_38));
            {
              ATerm f_38 = NULL;
              f_38 = t;
              if(((e_38 != NULL) && (e_38 != f_38)))
                _fail(f_38);
              else
                e_38 = f_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_38));
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
  ATerm i_2 (ATerm t)
  {
    ATerm j_38 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm k_38 = NULL;
      k_38 = t;
      if(((j_38 != NULL) && (j_38 != k_38)))
        _fail(k_38);
      else
        j_38 = k_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(j_38));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, i_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  q_38 = t;
  o_38 :
  if(match_cons(q_38, sym__2))
    {
      r_38 = ATgetArgument(q_38, 0);
      t_38 = ATgetArgument(q_38, 1);
      p_38 :
      if(match_cons(r_38, sym_Stream_1))
        {
          s_38 = ATgetArgument(r_38, 0);
          {
            ATerm w_38 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(s_38), not_null(t_38));
            {
              ATerm x_38 = NULL;
              x_38 = t;
              if(((w_38 != NULL) && (w_38 != x_38)))
                _fail(x_38);
              else
                w_38 = x_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_38));
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
ATerm WriteToFile_1 (ATerm t, ATerm s_110 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm j_39 = NULL,l_39 = NULL;
        t = not_null(f_39);
        {
          ATerm k_39 = NULL;
          k_39 = t;
          if(((j_39 != NULL) && (j_39 != k_39)))
            _fail(k_39);
          else
            j_39 = k_39;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), term_s_15);
            {
              t = open_stream_0(t);
              {
                ATerm m_39 = NULL;
                m_39 = t;
                if(((l_39 != NULL) && (l_39 != m_39)))
                  _fail(m_39);
                else
                  l_39 = m_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_39), not_null(g_39));
                  {
                    t = s_110(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_39);
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
  ATerm u_39 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm b_40 = NULL,c_40 = NULL;
            b_40 = t;
            r_39 :
            if(match_cons(b_40, sym_Output_1))
              {
                c_40 = ATgetArgument(b_40, 0);
                if(((u_39 != NULL) && (u_39 != c_40)))
                  _fail(c_40);
                else
                  u_39 = c_40;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_2);
          ;
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm d_40 = NULL;
            t = term_a_16;
            {
              d_40 = t;
              if(((u_39 != NULL) && (u_39 != d_40)))
                _fail(d_40);
              else
                u_39 = d_40;
            }
          }
        }
      return(t);
    }
    t = _2(t, j_2, _id);
  }
  t = x_15;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        t = not_null(u_39);
        return(t);
      }
      t = split_2(t, m_2, _id);
      return(t);
    }
    t = _2(t, _id, l_2);
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              ATerm e_40 = NULL;
              e_40 = t;
              t_39 :
              if(!(match_cons(e_40, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, o_2);
            return(t);
          }
          t = _2(t, n_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
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
ATerm apply_strategy_1 (ATerm t, ATerm u_113 (ATerm))
{
  ATerm k_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  ATerm i_16;
  i_16 = t;
  t = dtime_0(t);
  t = i_16;
  {
    t = u_113(t);
    {
      ATerm j_16;
      j_16 = t;
      {
        ATerm l_40 = NULL;
        t = dtime_0(t);
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
      }
      t = j_16;
      {
        m_40 = t;
        j_40 :
        if(match_cons(m_40, sym__2))
          {
            n_40 = ATgetArgument(m_40, 0);
            o_40 = ATgetArgument(m_40, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_40))), not_null(o_40));
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
  ATerm w_40 = NULL,x_40 = NULL;
  ATerm d_41 (ATerm t)
  {
    t = SSL_fclose(not_null(x_40));
    return(t);
  }
  x_40 = t;
  v_40 :
  if(match_cons(x_40, sym_Stream_1))
    {
      w_40 = ATgetArgument(x_40, 0);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(w_40));
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            t = d_41(t);
          }
      }
    }
  else
    {
      t = d_41(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_Stream_1))
    {
      h_41 = ATgetArgument(g_41, 0);
      t = SSL_read_term_from_stream(not_null(h_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm q_16;
  q_16 = t;
  {
    ATerm m_41 = NULL,o_41 = NULL;
    ATerm r_16;
    r_16 = t;
    {
      ATerm n_41 = NULL;
      t = e_110(t);
      {
        n_41 = t;
        if(((m_41 != NULL) && (m_41 != n_41)))
          _fail(n_41);
        else
          m_41 = n_41;
      }
    }
    t = r_16;
    {
      ATerm p_41 = NULL;
      p_41 = t;
      if(((o_41 != NULL) && (o_41 != p_41)))
        _fail(p_41);
      else
        o_41 = p_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_41)), not_null(m_41)));
        t = printnl_0(t);
      }
    }
  }
  t = q_16;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  w_41 :
  if(match_cons(a_42, sym__2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        ATerm f_42 = NULL;
        t = SSL_fopen(not_null(b_42), not_null(c_42));
        {
          ATerm g_42 = NULL;
          g_42 = t;
          if(((f_42 != NULL) && (f_42 != g_42)))
            _fail(g_42);
          else
            f_42 = g_42;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_42));
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
  ATerm k_42 = NULL;
  k_42 = t;
  t = SSL_is_string(not_null(k_42));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_42 = NULL;
    p_42 = t;
    if(((o_42 != NULL) && (o_42 != p_42)))
      _fail(p_42);
    else
      o_42 = p_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_42));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_42 = NULL;
    t_42 = t;
    if(((s_42 != NULL) && (s_42 != t_42)))
      _fail(t_42);
    else
      s_42 = t_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_42));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_43 = NULL;
    b_43 = t;
    if(((a_43 != NULL) && (a_43 != b_43)))
      _fail(b_43);
    else
      a_43 = b_43;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_43));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(h_43, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(h_43, sym_stdin_0))
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
  ATerm r_43 = NULL;
  ATerm t_43 = NULL,u_43 = NULL;
  r_43 = t;
  {
    ATerm v_43 = NULL;
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
    t = not_null(r_43);
    {
      v_43 = t;
      {
        t = SSL_explode_term(not_null(v_43));
        {
          x_43 = t;
          o_43 :
          if(match_cons(x_43, sym__2))
            {
              y_43 = ATgetArgument(x_43, 0);
              z_43 = ATgetArgument(x_43, 1);
              p_43 :
              if(match_string(y_43, ""))
                {
                  q_43 :
                  if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
                    {
                      a_44 = ATgetFirst((ATermList) z_43);
                      b_44 = (ATerm) ATgetNext((ATermList) z_43);
                      {
                        if(((u_43 != NULL) && (u_43 != a_44)))
                          _fail(a_44);
                        else
                          u_43 = a_44;
                        if(((t_43 != NULL) && (t_43 != b_44)))
                          _fail(b_44);
                        else
                          t_43 = b_44;
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
    t = not_null(u_43);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  i_44 :
  if(match_cons(l_44, sym__2))
    {
      m_44 = ATgetArgument(l_44, 0);
      n_44 = ATgetArgument(l_44, 1);
      {
        ATerm s_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = s_16;
            {
              ATerm v_16 = t;
              int w_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm o_44 = NULL,p_44 = NULL;
                    o_44 = t;
                    h_44 :
                    if(match_cons(o_44, sym_Path_1))
                      {
                        p_44 = ATgetArgument(o_44, 0);
                        t = not_null(p_44);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, p_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
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
  ATerm x_44 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_44 = NULL;
      ATerm w_44 = NULL;
      w_44 = t;
      if(((v_44 != NULL) && (v_44 != w_44)))
        _fail(w_44);
      else
        v_44 = w_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_44), term_h_17);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_i_17;
          return(t);
        }
        t = debug_1(t, q_2);
        _fail(t);
      }
    }
  {
    ATerm j_17;
    j_17 = t;
    {
      ATerm y_44 = NULL;
      t = read_from_stream_0(t);
      {
        y_44 = t;
        if(((x_44 != NULL) && (x_44 != y_44)))
          _fail(y_44);
        else
          x_44 = y_44;
      }
    }
    t = j_17;
    {
      t = fclose_0(t);
      t = not_null(x_44);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm d_45 = NULL,f_45 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm e_45 = NULL;
    t = f_106(t);
    {
      e_45 = t;
      if(((d_45 != NULL) && (d_45 != e_45)))
        _fail(e_45);
      else
        d_45 = e_45;
    }
  }
  t = k_17;
  {
    ATerm g_45 = NULL;
    t = g_106(t);
    {
      g_45 = t;
      if(((f_45 != NULL) && (f_45 != g_45)))
        _fail(g_45);
      else
        f_45 = g_45;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), not_null(f_45));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_45 = NULL;
  ATerm l_17;
  l_17 = t;
  {
    ATerm m_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          ATerm n_45 = NULL,o_45 = NULL;
          n_45 = t;
          k_45 :
          if(match_cons(n_45, sym_Input_1))
            {
              o_45 = ATgetArgument(n_45, 0);
              if(((m_45 != NULL) && (m_45 != o_45)))
                _fail(o_45);
              else
                m_45 = o_45;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_2);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = m_17;
        {
          ATerm p_45 = NULL;
          t = term_s_17;
          {
            p_45 = t;
            if(((m_45 != NULL) && (m_45 != p_45)))
              _fail(p_45);
            else
              m_45 = p_45;
          }
        }
      }
  }
  t = l_17;
  {
    ATerm s_2 (ATerm t)
    {
      t = not_null(m_45);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm u_45 = NULL;
    u_45 = t;
    s_45 :
    if(!(match_string(u_45, "-k")))
      {
        if(!(match_string(u_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm w_17;
    w_17 = t;
    {
      ATerm v_45 = NULL;
      ATerm w_45 = NULL;
      t = string_to_int_0(t);
      {
        w_45 = t;
        if(((v_45 != NULL) && (v_45 != w_45)))
          _fail(w_45);
        else
          v_45 = w_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(v_45));
        t = set_config_0(t);
      }
    }
    t = w_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  t = SSL_string_to_int(not_null(z_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_17 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm h_46 = NULL;
        h_46 = t;
        c_46 :
        if(!(match_string(h_46, "-S")))
          {
            if(!(match_string(h_46, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_i_18;
        t = set_config_0(t);
        t = term_j_18;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_k_18;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = z_17;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm i_46 = NULL;
              i_46 = t;
              d_46 :
              if(!(match_string(i_46, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm l_46 = NULL;
              ATerm r_18;
              r_18 = t;
              {
                ATerm j_46 = NULL;
                ATerm k_46 = NULL;
                t = string_to_int_0(t);
                {
                  k_46 = t;
                  if(((j_46 != NULL) && (j_46 != k_46)))
                    _fail(k_46);
                  else
                    j_46 = k_46;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(j_46));
                  t = set_config_0(t);
                }
              }
              t = r_18;
              {
                ATerm m_46 = NULL;
                m_46 = t;
                if(((l_46 != NULL) && (l_46 != m_46)))
                  _fail(m_46);
                else
                  l_46 = m_46;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_46));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_s_18;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm c_3 (ATerm t)
              {
                ATerm n_46 = NULL;
                n_46 = t;
                g_46 :
                if(!(match_string(n_46, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_v_18;
                t = set_config_0(t);
                t = term_y_18;
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = term_z_18;
                return(t);
              }
              t = Option_3(t, c_3, d_3, g_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm t_46 = NULL;
    t_46 = t;
    q_46 :
    if(!(match_string(t_46, "-o")))
      {
        if(!(match_string(t_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm w_46 = NULL;
    ATerm e_19;
    e_19 = t;
    {
      ATerm u_46 = NULL;
      ATerm v_46 = NULL;
      v_46 = t;
      if(((u_46 != NULL) && (u_46 != v_46)))
        _fail(v_46);
      else
        u_46 = v_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_19, not_null(u_46));
        t = set_config_0(t);
      }
    }
    t = e_19;
    {
      ATerm x_46 = NULL;
      x_46 = t;
      if(((w_46 != NULL) && (w_46 != x_46)))
        _fail(x_46);
      else
        w_46 = x_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_46));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_g_19;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm b_47 = NULL;
          b_47 = t;
          a_47 :
          if(!(match_string(b_47, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_p_19;
          t = set_config_0(t);
          t = term_q_19;
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_z_19;
          return(t);
        }
        t = Option_3(t, k_3, l_3, m_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  h_47 = t;
  f_47 :
  if(match_string(h_47, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
        {
          i_47 = ATgetFirst((ATermList) h_47);
          j_47 = (ATerm) ATgetNext((ATermList) h_47);
          g_47 :
          if(((ATgetType(j_47) == AT_LIST) && !(ATisEmpty(j_47))))
            {
              k_47 = ATgetFirst((ATermList) j_47);
              l_47 = (ATerm) ATgetNext((ATermList) j_47);
              {
                ATerm p_47 = NULL;
                ATerm a_20;
                a_20 = t;
                {
                  t = not_null(i_47);
                  t = k_0(t);
                }
                t = a_20;
                {
                  ATerm q_47 = NULL;
                  t = not_null(k_47);
                  {
                    t = l_0(t);
                    {
                      q_47 = t;
                      if(((p_47 != NULL) && (p_47 != q_47)))
                        _fail(q_47);
                      else
                        p_47 = q_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_47)), not_null(p_47));
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
  ATerm n_3 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    u_47 :
    if(!(match_string(x_47, "-i")))
      {
        if(!(match_string(x_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm a_48 = NULL;
    ATerm j_20;
    j_20 = t;
    {
      ATerm y_47 = NULL;
      ATerm z_47 = NULL;
      z_47 = t;
      if(((y_47 != NULL) && (y_47 != z_47)))
        _fail(z_47);
      else
        y_47 = z_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(y_47));
        t = set_config_0(t);
      }
    }
    t = j_20;
    {
      ATerm b_48 = NULL;
      b_48 = t;
      if(((a_48 != NULL) && (a_48 != b_48)))
        _fail(b_48);
      else
        a_48 = b_48;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_48));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm f_48 = NULL;
  t = report_run_time_0(t);
  {
    ATerm g_48 = NULL;
    t = term_l_8;
    {
      t = whoami_0(t);
      {
        g_48 = t;
        if(((f_48 != NULL) && (f_48 != g_48)))
          _fail(g_48);
        else
          f_48 = g_48;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, term_q_20), not_null(f_48)));
      {
        t = printnl_0(t);
        {
          t = term_c_14;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_r_20;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_TicksToSeconds(not_null(j_48));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym__2))
    {
      p_48 = ATgetArgument(o_48, 0);
      q_48 = ATgetArgument(o_48, 1);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_48), not_null(q_48));
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = SSL_addr(not_null(p_48), not_null(q_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_104 (ATerm), ATerm r_104 (ATerm))
{
  ATerm v_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_104(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = v_20;
      {
        ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
        x_48 = t;
        w_48 :
        if(((ATgetType(x_48) == AT_LIST) && !(ATisEmpty(x_48))))
          {
            y_48 = ATgetFirst((ATermList) x_48);
            z_48 = (ATerm) ATgetNext((ATermList) x_48);
            {
              ATerm c_49 = NULL;
              ATerm d_49 = NULL;
              t = not_null(z_48);
              {
                t = foldr_2(t, q_104, r_104);
                {
                  d_49 = t;
                  if(((c_49 != NULL) && (c_49 != d_49)))
                    _fail(d_49);
                  else
                    c_49 = d_49;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_48), not_null(c_49));
                t = r_104(t);
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
ATerm crush_2 (ATerm t, ATerm j_108 (ATerm), ATerm k_108 (ATerm))
{
  ATerm p_49 = NULL;
  ATerm r_49 = NULL;
  p_49 = t;
  {
    ATerm s_49 = NULL;
    ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
    t = not_null(p_49);
    {
      s_49 = t;
      {
        t = SSL_explode_term(not_null(s_49));
        {
          u_49 = t;
          m_49 :
          if(match_cons(u_49, sym__2))
            {
              v_49 = ATgetArgument(u_49, 0);
              w_49 = ATgetArgument(u_49, 1);
              if(((r_49 != NULL) && (r_49 != w_49)))
                _fail(w_49);
              else
                r_49 = w_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_49);
      t = foldr_2(t, j_108, k_108);
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
    ATerm q_3 (ATerm t)
    {
      t = term_d_18;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym__2))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      {
        ATerm e_21;
        e_21 = t;
        {
          ATerm g_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_50), not_null(e_50));
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = g_21;
              t = SSL_gtr(not_null(d_50), not_null(e_50));
            }
        }
        t = e_21;
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
  ATerm k_50 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
      l_50 = t;
      j_50 :
      if(match_cons(l_50, sym__2))
        {
          m_50 = ATgetArgument(l_50, 0);
          n_50 = ATgetArgument(l_50, 1);
          {
            if(((k_50 != NULL) && (k_50 != m_50)))
              _fail(m_50);
            else
              k_50 = m_50;
            if(((k_50 != NULL) && (k_50 != n_50)))
              _fail(n_50);
            else
              k_50 = n_50;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_111 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm k_21;
    k_21 = t;
    {
      ATerm q_50 = NULL;
      ATerm r_50 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          r_50 = t;
          if(((q_50 != NULL) && (q_50 != r_50)))
            _fail(r_50);
          else
            q_50 = r_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), term_c_14);
        t = geq_0(t);
      }
    }
    t = k_21;
    t = v_111(t);
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm v_50 = NULL,x_50 = NULL;
    ATerm l_21;
    l_21 = t;
    {
      ATerm w_50 = NULL;
      t = run_time_0(t);
      {
        w_50 = t;
        if(((v_50 != NULL) && (v_50 != w_50)))
          _fail(w_50);
        else
          v_50 = w_50;
      }
    }
    t = l_21;
    {
      ATerm y_50 = NULL;
      t = term_l_8;
      {
        t = whoami_0(t);
        {
          y_50 = t;
          if(((x_50 != NULL) && (x_50 != y_50)))
            _fail(y_50);
          else
            x_50 = y_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), not_null(v_50)), term_m_21), not_null(x_50)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_d_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  e_51 :
  if(match_cons(g_51, sym_Version_0))
    {
      ATerm i_51 = NULL,m_51 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm j_51 = NULL;
        t = SSLgetAnnotations(not_null(g_51));
        {
          j_51 = t;
          if(((i_51 != NULL) && (i_51 != j_51)))
            _fail(j_51);
          else
            i_51 = j_51;
        }
      }
      t = o_21;
      {
        ATerm n_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_51));
        {
          n_51 = t;
          if(((m_51 != NULL) && (m_51 != n_51)))
            _fail(n_51);
          else
            m_51 = n_51;
        }
        t = not_null(m_51);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_114 (ATerm))
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              {
                ATerm c_22 = t;
                int d_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(d_22);
                  }
                else
                  {
                    t = c_22;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
      }
    }
  t = s_114(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  t = SSL_table_create(not_null(s_51));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  {
    ATerm e_22;
    e_22 = t;
    {
      t = term_f_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_22, term_g_22, not_null(w_51));
          t = table_put_0(t);
        }
      }
    }
    t = e_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_52 = NULL;
  a_52 = t;
  t = SSL_table_destroy(not_null(a_52));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_52 = NULL;
  e_52 = t;
  t = SSL_exit(not_null(e_52));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm h_52 (ATerm t)
  {
    ATerm h_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = h_22;
        t = Cons_2(t, r_98, h_52);
      }
    return(t);
  }
  t = h_52(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  t_52 = t;
  p_52 :
  if(((ATgetType(t_52) == AT_LIST) && !(ATisEmpty(t_52))))
    {
      r_52 = ATgetFirst((ATermList) t_52);
      s_52 = (ATerm) ATgetNext((ATermList) t_52);
      {
        ATerm w_52 = NULL;
        t = not_null(s_52);
        {
          ATerm m_22;
          m_22 = t;
          {
            ATerm x_52 = NULL,z_52 = NULL,b_53 = NULL;
            ATerm q_22;
            q_22 = t;
            {
              ATerm y_52 = NULL;
              t = i_0(t);
              {
                y_52 = t;
                if(((x_52 != NULL) && (x_52 != y_52)))
                  _fail(y_52);
                else
                  x_52 = y_52;
              }
            }
            t = q_22;
            {
              ATerm a_53 = NULL;
              t = not_null(r_52);
              {
                t = g_0(t);
                {
                  a_53 = t;
                  if(((z_52 != NULL) && (z_52 != a_53)))
                    _fail(a_53);
                  else
                    z_52 = a_53;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_52)), not_null(z_52));
                {
                  b_53 = t;
                  if(((w_52 != NULL) && (w_52 != b_53)))
                    _fail(b_53);
                  else
                    w_52 = b_53;
                }
              }
            }
          }
          t = m_22;
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(w_52);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_52) == AT_LIST) && ATisEmpty(t_52)))
        {
          {
            t = term_l_8;
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
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Program_1))
    {
      n_53 = ATgetArgument(m_53, 0);
      {
        ATerm q_53 = NULL,s_53 = NULL;
        ATerm r_53 = NULL;
        t = SSLgetAnnotations(not_null(m_53));
        {
          r_53 = t;
          if(((q_53 != NULL) && (q_53 != r_53)))
            _fail(r_53);
          else
            q_53 = r_53;
        }
        {
          t = not_null(n_53);
          {
            ATerm u_53 = NULL;
            t = p_79(t);
            {
              s_53 = t;
              {
                ATerm v_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_53)), not_null(q_53));
                {
                  v_53 = t;
                  if(((u_53 != NULL) && (u_53 != v_53)))
                    _fail(v_53);
                  else
                    u_53 = v_53;
                }
                t = not_null(u_53);
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
  ATerm k_54 = NULL;
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_54 = NULL;
      t = term_r_20;
      {
        t = get_config_0(t);
        {
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
        }
      }
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm m_54 = NULL;
            m_54 = t;
            if(((k_54 != NULL) && (k_54 != m_54)))
              _fail(m_54);
            else
              k_54 = m_54;
            return(t);
          }
          t = Program_1(t, x_3);
          return(t);
        }
        t = option_defined_1(t, w_3);
      }
    }
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(k_54);
        return(t);
      }
      t = short_description_1(t, z_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_3);
    {
      t = term_v_22;
      {
        t = echo_0(t);
        {
          t = term_y_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm n_54 = NULL;
                  ATerm o_54 = NULL;
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_54)), term_a_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_4);
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm p_54 = NULL;
                    ATerm q_54 = NULL;
                    ATerm c_4 (ATerm t)
                    {
                      t = not_null(k_54);
                      return(t);
                    }
                    t = long_description_1(t, c_4);
                    {
                      q_54 = t;
                      if(((p_54 != NULL) && (p_54 != q_54)))
                        _fail(q_54);
                      else
                        p_54 = q_54;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_54)), term_d_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_4);
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
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym_Undefined_1))
    {
      b_55 = ATgetArgument(a_55, 0);
      {
        ATerm e_55 = NULL,g_55 = NULL;
        ATerm f_55 = NULL;
        t = SSLgetAnnotations(not_null(a_55));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        {
          t = not_null(b_55);
          {
            ATerm i_55 = NULL;
            t = q_79(t);
            {
              g_55 = t;
              {
                ATerm j_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_55)), not_null(e_55));
                {
                  j_55 = t;
                  if(((i_55 != NULL) && (i_55 != j_55)))
                    _fail(j_55);
                  else
                    i_55 = j_55;
                }
                t = not_null(i_55);
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
ATerm fetch_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm o_55 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_99, _id);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = Cons_2(t, _id, o_55);
      }
    return(t);
  }
  t = o_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_115 (ATerm))
{
  t = fetch_1(t, s_115);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  p_55 :
  if(((ATgetType(q_55) == AT_LIST) && ATisEmpty(q_55)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
        {
          r_55 = ATgetFirst((ATermList) q_55);
          s_55 = (ATerm) ATgetNext((ATermList) q_55);
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
  ATerm i_23;
  i_23 = t;
  {
    ATerm v_55 = NULL;
    ATerm y_55 = NULL;
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm w_55 = NULL;
          ATerm x_55 = NULL;
          x_55 = t;
          if(((w_55 != NULL) && (w_55 != x_55)))
            _fail(x_55);
          else
            w_55 = x_55;
          t = (ATerm) ATinsert(ATempty, not_null(w_55));
        }
      }
    {
      y_55 = t;
      if(((v_55 != NULL) && (v_55 != y_55)))
        _fail(y_55);
      else
        v_55 = y_55;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(v_55));
      t = printnl_0(t);
    }
  }
  t = i_23;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_r_20;
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
  ATerm r_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = r_23;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_56 = NULL;
  f_56 = t;
  e_56 :
  if(match_cons(f_56, sym_Help_0))
    {
      ATerm h_56 = NULL,j_56 = NULL;
      ATerm v_23;
      v_23 = t;
      {
        ATerm i_56 = NULL;
        t = SSLgetAnnotations(not_null(f_56));
        {
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
        }
      }
      t = v_23;
      {
        ATerm k_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_56));
        {
          k_56 = t;
          if(((j_56 != NULL) && (j_56 != k_56)))
            _fail(k_56);
          else
            j_56 = k_56;
        }
        t = not_null(j_56);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_91(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm q_56 = NULL;
        q_56 = t;
        o_56 :
        if(!(match_string(q_56, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_b_24;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_c_24;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm r_56 = NULL;
          r_56 = t;
          p_56 :
          if(!(match_string(r_56, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_b_24;
          {
            t = set_config_0(t);
            {
              t = term_i_24;
              t = set_config_0(t);
            }
          }
          t = term_j_24;
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_n_24;
          return(t);
        }
        t = Option_3(t, g_4, h_4, i_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  t_56 :
  if(match_cons(u_56, sym__2))
    {
      v_56 = ATgetArgument(u_56, 0);
      w_56 = ATgetArgument(u_56, 1);
      t = SSL_table_get(not_null(v_56), not_null(w_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  d_57 = t;
  c_57 :
  if(match_cons(d_57, sym__3))
    {
      e_57 = ATgetArgument(d_57, 0);
      f_57 = ATgetArgument(d_57, 1);
      g_57 = ATgetArgument(d_57, 2);
      {
        ATerm p_24;
        p_24 = t;
        {
          ATerm t_57 = NULL;
          ATerm u_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_57), not_null(f_57));
          {
            ATerm s_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_24);
              }
            else
              {
                t = s_24;
                t = (ATerm) ATempty;
              }
            {
              u_57 = t;
              if(((t_57 != NULL) && (t_57 != u_57)))
                _fail(u_57);
              else
                t_57 = u_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_57), not_null(f_57), (ATerm) ATinsert(CheckATermList(not_null(t_57)), not_null(g_57)));
            t = table_put_0(t);
          }
        }
        t = p_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_116 (ATerm))
{
  ATerm y_57 = NULL;
  ATerm z_57 = NULL;
  t = term_l_8;
  {
    t = x_116(t);
    {
      z_57 = t;
      if(((y_57 != NULL) && (y_57 != z_57)))
        _fail(z_57);
      else
        y_57 = z_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_22, term_x_22, not_null(y_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_string(f_58, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_58) == AT_LIST) && !(ATisEmpty(f_58))))
        {
          g_58 = ATgetFirst((ATermList) f_58);
          h_58 = (ATerm) ATgetNext((ATermList) f_58);
          {
            ATerm k_58 = NULL;
            ATerm u_24;
            u_24 = t;
            {
              t = not_null(g_58);
              t = a_0(t);
            }
            t = u_24;
            {
              ATerm l_58 = NULL;
              t = term_l_8;
              {
                t = b_0(t);
                {
                  l_58 = t;
                  if(((k_58 != NULL) && (k_58 != l_58)))
                    _fail(l_58);
                  else
                    k_58 = l_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_58)), not_null(k_58));
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
  ATerm j_4 (ATerm t)
  {
    ATerm q_58 = NULL;
    q_58 = t;
    p_58 :
    if(!(match_string(q_58, "--help")))
      {
        if(!(match_string(q_58, "-h")))
          {
            if(!(match_string(q_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_v_24;
    {
      t = set_config_0(t);
      t = term_w_24;
    }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = Option_3(t, j_4, k_4, l_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
    {
      w_58 = ATgetFirst((ATermList) v_58);
      x_58 = (ATerm) ATgetNext((ATermList) v_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
  m_59 = t;
  l_59 :
  if(((ATgetType(m_59) == AT_LIST) && !(ATisEmpty(m_59))))
    {
      n_59 = ATgetFirst((ATermList) m_59);
      o_59 = (ATerm) ATgetNext((ATermList) m_59);
      {
        ATerm s_59 = NULL,v_59 = NULL;
        ATerm u_59 = NULL;
        t = SSLgetAnnotations(not_null(m_59));
        {
          u_59 = t;
          if(((s_59 != NULL) && (s_59 != u_59)))
            _fail(u_59);
          else
            s_59 = u_59;
        }
        {
          t = not_null(n_59);
          {
            ATerm x_59 = NULL;
            t = o_71(t);
            {
              v_59 = t;
              {
                t = not_null(o_59);
                {
                  ATerm z_59 = NULL;
                  t = p_71(t);
                  {
                    x_59 = t;
                    {
                      ATerm a_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_59)), not_null(v_59)), not_null(s_59));
                      {
                        a_60 = t;
                        if(((z_59 != NULL) && (z_59 != a_60)))
                          _fail(a_60);
                        else
                          z_59 = a_60;
                      }
                      t = not_null(z_59);
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
  ATerm q_60 = NULL;
  q_60 = t;
  p_60 :
  if(((ATgetType(q_60) == AT_LIST) && ATisEmpty(q_60)))
    {
      {
        ATerm t_60 = NULL,v_60 = NULL;
        ATerm i_25;
        i_25 = t;
        {
          ATerm u_60 = NULL;
          t = SSLgetAnnotations(not_null(q_60));
          {
            u_60 = t;
            if(((t_60 != NULL) && (t_60 != u_60)))
              _fail(u_60);
            else
              t_60 = u_60;
          }
        }
        t = i_25;
        {
          ATerm w_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_60));
          {
            w_60 = t;
            if(((v_60 != NULL) && (v_60 != w_60)))
              _fail(w_60);
            else
              v_60 = w_60;
          }
          t = not_null(v_60);
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
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  c_61 = t;
  b_61 :
  if(match_cons(c_61, sym__2))
    {
      d_61 = ATgetArgument(c_61, 0);
      e_61 = ATgetArgument(c_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_15, not_null(d_61), not_null(e_61));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_116 (ATerm))
{
  ATerm j_25;
  j_25 = t;
  {
    ATerm m_4 (ATerm t)
    {
      t = term_k_25;
      t = v_116(t);
      return(t);
    }
    t = try_1(t, m_4);
  }
  t = j_25;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm m_61 = NULL;
      ATerm l_25;
      l_25 = t;
      {
        ATerm k_61 = NULL;
        ATerm l_61 = NULL;
        l_61 = t;
        if(((k_61 != NULL) && (k_61 != l_61)))
          _fail(l_61);
        else
          k_61 = l_61;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_20, not_null(k_61));
          t = set_config_0(t);
        }
      }
      t = l_25;
      {
        ATerm n_61 = NULL;
        n_61 = t;
        if(((m_61 != NULL) && (m_61 != n_61)))
          _fail(n_61);
        else
          m_61 = n_61;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_61));
      }
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              {
                t = v_116(t);
                t = Cons_2(t, _id, t_4);
              }
            }
          ;
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
    w_61 = t;
    s_61 :
    if(match_cons(w_61, sym__3))
      {
        x_61 = ATgetArgument(w_61, 0);
        y_61 = ATgetArgument(w_61, 1);
        z_61 = ATgetArgument(w_61, 2);
        {
          if(((t_61 != NULL) && (t_61 != x_61)))
            _fail(x_61);
          else
            t_61 = x_61;
          {
            if(((u_61 != NULL) && (u_61 != y_61)))
              _fail(y_61);
            else
              u_61 = y_61;
            {
              if(((v_61 != NULL) && (v_61 != z_61)))
                _fail(z_61);
              else
                v_61 = z_61;
              t = SSL_table_put(not_null(t_61), not_null(u_61), not_null(v_61));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_116 (ATerm))
{
  ATerm c_62 = NULL;
  ATerm f_26;
  f_26 = t;
  {
    t = term_g_26;
    t = table_put_0(t);
  }
  t = f_26;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_116(t);
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm j_26 = t;
            int o_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(o_26);
              }
            else
              {
                t = j_26;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, u_4);
    {
      ATerm v_4 (ATerm t)
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26;
            r_26 = t;
            {
              ATerm u_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_21;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_26);
                }
              else
                {
                  t = u_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_26;
            {
              t = system_usage_0(t);
              {
                t = term_d_18;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm y_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_27;
                  a_27 = t;
                  {
                    t = term_a_24;
                    t = get_config_0(t);
                  }
                  t = a_27;
                  {
                    t = system_about_0(t);
                    {
                      t = term_d_18;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = y_26;
                  {
                    ATerm z_4 (ATerm t)
                    {
                      ATerm b_5 (ATerm t)
                      {
                        ATerm d_62 = NULL;
                        d_62 = t;
                        if(((c_62 != NULL) && (c_62 != d_62)))
                          _fail(d_62);
                        else
                          c_62 = d_62;
                        return(t);
                      }
                      t = Undefined_1(t, b_5);
                      return(t);
                    }
                    t = option_defined_1(t, z_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_62)), term_b_27));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_c_14;
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
      t = try_1(t, v_4);
      {
        ATerm c_27;
        c_27 = t;
        {
          t = term_w_22;
          t = table_destroy_0(t);
        }
        t = c_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm x_114 (ATerm))
{
  t = parse_options_1(t, u_114);
  {
    t = store_options_0(t);
    {
      t = w_114(t);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_114);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_114(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_114(t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_114);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, d_5, l_114, m_114, g_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_27;
      j_27 = t;
      {
        ATerm g_62 = NULL;
        ATerm h_62 = NULL;
        t = term_r_20;
        {
          t = get_config_0(t);
          {
            h_62 = t;
            if(((g_62 != NULL) && (g_62 != h_62)))
              _fail(h_62);
            else
              g_62 = h_62;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATinsert(ATempty, not_null(g_62)));
          t = printnl_0(t);
        }
      }
      t = j_27;
      return(t);
    }
    t = if_verbose2_1(t, i_5);
    return(t);
  }
  t = iowrap_4(t, d_114, e_114, f_114, h_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_114 (ATerm), ATerm c_114 (ATerm))
{
  t = iowrap_3(t, b_114, c_114, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_113 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    t = _2(t, _id, y_113);
    return(t);
  }
  t = iowrap_2(t, j_5, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, l_5, m_5);
    {
      t = mark_fresh_vars_0(t);
      t = mark_bound_unbound_vars_0(t);
    }
    return(t);
  }
  t = iowrap_1(t, k_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
