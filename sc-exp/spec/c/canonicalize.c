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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
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
  init_constant_terms();
}
ATerm term_l_33;
ATerm term_u_32;
ATerm term_k_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_f_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_r_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_h_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Op_2, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_i_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_w_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_16);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_h_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_g_18);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_g_18);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_p_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_g_18);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_g_18);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_g_18);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__3, term_m_29, term_p_29, (ATerm) ATempty);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm AsMatchWld_0 (ATerm);
ATerm MatchSimplify_0 (ATerm);
ATerm MatchBuildIdem_0 (ATerm);
ATerm BuildMatchIdem_0 (ATerm);
ATerm MatchIdem_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm f_131 (ATerm));
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm k_124 (ATerm));
ATerm LetHoist_0 (ATerm);
ATerm LetNoDefs_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm p_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm F16_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm downup_1 (ATerm, ATerm i_123 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_104 (ATerm));
ATerm CallT_3 (ATerm, ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm));
ATerm unzip_1 (ATerm, ATerm k_131 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_124 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_122 (ATerm));
ATerm downup2_2 (ATerm, ATerm l_123 (ATerm), ATerm m_123 (ATerm));
ATerm _2 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_129 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_142 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm a_141 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_144 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_140 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_136 (ATerm), ATerm o_136 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_134 (ATerm), ATerm z_134 (ATerm));
ATerm crush_2 (ATerm, ATerm r_138 (ATerm), ATerm s_138 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_142 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_145 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_147 (ATerm));
ATerm map_1 (ATerm, ATerm x_128 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_147 (ATerm));
ATerm Program_1 (ATerm, ATerm k_108 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_108 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_129 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_146 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_121 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_147 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_99 (ATerm), ATerm t_99 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_147 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_147 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_144 (ATerm), ATerm k_144 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_144 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm AsMatchWld_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
  u_1 = t;
  f_1 :
  if(match_cons(u_1, sym_As_2))
    {
      v_1 = ATgetArgument(u_1, 0);
      w_1 = ATgetArgument(u_1, 1);
      g_1 :
      if(match_cons(v_1, sym_Wld_0))
        {
          t = not_null(w_1);
        }
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
ATerm MatchSimplify_0 (ATerm t)
{
  t = AsMatchWld_0(t);
  return(t);
}
ATerm MatchBuildIdem_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  q_2 = t;
  n_2 :
  if(match_cons(q_2, sym__2))
    {
      r_2 = ATgetArgument(q_2, 0);
      t_2 = ATgetArgument(q_2, 1);
      o_2 :
      if(match_cons(r_2, sym_Match_1))
        {
          s_2 = ATgetArgument(r_2, 0);
          p_2 :
          if(match_cons(t_2, sym_Build_1))
            {
              u_2 = ATgetArgument(t_2, 0);
              {
                if(((s_2 != NULL) && (s_2 != u_2)))
                  _fail(u_2);
                else
                  s_2 = u_2;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_2));
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
ATerm BuildMatchIdem_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  b_3 = t;
  y_2 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      e_3 = ATgetArgument(b_3, 1);
      z_2 :
      if(match_cons(c_3, sym_Build_1))
        {
          d_3 = ATgetArgument(c_3, 0);
          a_3 :
          if(match_cons(e_3, sym_Match_1))
            {
              f_3 = ATgetArgument(e_3, 0);
              {
                if(((d_3 != NULL) && (d_3 != f_3)))
                  _fail(f_3);
                else
                  d_3 = f_3;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_3));
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
ATerm MatchIdem_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  j_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      k_3 :
      if(match_cons(n_3, sym_Match_1))
        {
          o_3 = ATgetArgument(n_3, 0);
          l_3 :
          if(match_cons(p_3, sym_Match_1))
            {
              q_3 = ATgetArgument(p_3, 0);
              {
                if(((o_3 != NULL) && (o_3 != q_3)))
                  _fail(q_3);
                else
                  o_3 = q_3;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_3));
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
ATerm BuildPrim_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  c_4 = t;
  w_3 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      f_4 = ATgetArgument(c_4, 1);
      x_3 :
      if(match_cons(d_4, sym_Build_1))
        {
          e_4 = ATgetArgument(d_4, 0);
          y_3 :
          if(match_cons(f_4, sym_Where_1))
            {
              g_4 = ATgetArgument(f_4, 0);
              z_3 :
              if(match_cons(g_4, sym_Prim_2))
                {
                  a_4 = ATgetArgument(g_4, 0);
                  b_4 = ATgetArgument(g_4, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_4), not_null(b_4));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_4, sym_Prim_2))
                {
                  g_4 = ATgetArgument(f_4, 0);
                  h_4 = ATgetArgument(f_4, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_4), not_null(h_4));
                }
              else
                {
                  if(match_cons(f_4, sym_PrimT_3))
                    {
                      g_4 = ATgetArgument(f_4, 0);
                      h_4 = ATgetArgument(f_4, 1);
                      i_4 = ATgetArgument(f_4, 2);
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(g_4), not_null(h_4), not_null(i_4));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  a_5 = t;
  x_4 :
  if(match_cons(a_5, sym__2))
    {
      b_5 = ATgetArgument(a_5, 0);
      d_5 = ATgetArgument(a_5, 1);
      y_4 :
      if(match_cons(b_5, sym_Build_1))
        {
          c_5 = ATgetArgument(b_5, 0);
          z_4 :
          if(match_cons(d_5, sym_Build_1))
            {
              e_5 = ATgetArgument(d_5, 0);
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_5));
            }
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
ATerm Zip3_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym__2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_5)), not_null(l_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  u_5 = t;
  r_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      y_5 = ATgetArgument(u_5, 1);
      s_5 :
      if(((ATgetType(v_5) == AT_LIST) && !(ATisEmpty(v_5))))
        {
          w_5 = ATgetFirst((ATermList) v_5);
          x_5 = (ATerm) ATgetNext((ATermList) v_5);
          t_5 :
          if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
            {
              z_5 = ATgetFirst((ATermList) y_5);
              a_6 = (ATerm) ATgetNext((ATermList) y_5);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_5), not_null(z_5)), (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(a_6)));
            }
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
ATerm Zip1_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  h_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      i_6 :
      if(((ATgetType(l_6) == AT_LIST) && ATisEmpty(l_6)))
        {
          j_6 :
          if(((ATgetType(m_6) == AT_LIST) && ATisEmpty(m_6)))
            {
              t = (ATerm) ATempty;
            }
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
ATerm zip_1 (ATerm t, ATerm f_131 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_131);
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  x_6 = t;
  s_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      c_7 = ATgetArgument(x_6, 1);
      t_6 :
      if(match_cons(y_6, sym_Build_1))
        {
          z_6 = ATgetArgument(y_6, 0);
          u_6 :
          if(match_cons(z_6, sym_Op_2))
            {
              a_7 = ATgetArgument(z_6, 0);
              b_7 = ATgetArgument(z_6, 1);
              v_6 :
              if(match_cons(c_7, sym_Match_1))
                {
                  d_7 = ATgetArgument(c_7, 0);
                  w_6 :
                  if(match_cons(d_7, sym_Op_2))
                    {
                      e_7 = ATgetArgument(d_7, 0);
                      f_7 = ATgetArgument(d_7, 1);
                      {
                        ATerm i_7 = NULL,j_7 = NULL;
                        if(((a_7 != NULL) && (a_7 != e_7)))
                          _fail(e_7);
                        else
                          a_7 = e_7;
                        {
                          if(((i_7 != NULL) && (i_7 != f_7)))
                            _fail(f_7);
                          else
                            i_7 = f_7;
                          {
                            ATerm p_7 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), not_null(i_7));
                            {
                              ATerm c_0 (ATerm t)
                              {
                                ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
                                k_7 = t;
                                q_6 :
                                if(match_cons(k_7, sym__2))
                                  {
                                    l_7 = ATgetArgument(k_7, 0);
                                    m_7 = ATgetArgument(k_7, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_7)), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_7)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, c_0);
                              {
                                p_7 = t;
                                if(((j_7 != NULL) && (j_7 != p_7)))
                                  _fail(p_7);
                                else
                                  j_7 = p_7;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_7)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(a_7), not_null(b_7))));
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
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  g_8 = t;
  b_8 :
  if(match_cons(g_8, sym__2))
    {
      h_8 = ATgetArgument(g_8, 0);
      l_8 = ATgetArgument(g_8, 1);
      c_8 :
      if(match_cons(h_8, sym_Build_1))
        {
          i_8 = ATgetArgument(h_8, 0);
          d_8 :
          if(match_cons(i_8, sym_Op_2))
            {
              j_8 = ATgetArgument(i_8, 0);
              k_8 = ATgetArgument(i_8, 1);
              e_8 :
              if(match_cons(l_8, sym_Match_1))
                {
                  m_8 = ATgetArgument(l_8, 0);
                  f_8 :
                  if(match_cons(m_8, sym_Op_2))
                    {
                      n_8 = ATgetArgument(m_8, 0);
                      o_8 = ATgetArgument(m_8, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(n_8));
                        {
                          ATerm t_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = t_7;
                            }
                        }
                        t = term_y_7;
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
ATerm BMF_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  {
                    ATerm t_8 = t;
                    int u_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0(t);
                        ;
                        LocalPopChoice(u_8);
                      }
                    else
                      {
                        t = t_8;
                        {
                          ATerm v_8 = t;
                          int w_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchIdem_0(t);
                              ;
                              LocalPopChoice(w_8);
                            }
                          else
                            {
                              t = v_8;
                              {
                                ATerm x_8 = t;
                                int f_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatchIdem_0(t);
                                    ;
                                    LocalPopChoice(f_9);
                                  }
                                else
                                  {
                                    t = x_8;
                                    t = MatchBuildIdem_0(t);
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
ATerm BuildMatch_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  ATerm p_9 (ATerm t)
  {
    ATerm m_9 = NULL;
    ATerm n_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(e_9));
    {
      t = BMF_0(t);
      {
        n_9 = t;
        if(((m_9 != NULL) && (m_9 != n_9)))
          _fail(n_9);
        else
          m_9 = n_9;
      }
    }
    t = not_null(m_9);
    return(t);
  }
  c_9 = t;
  y_8 :
  if(match_cons(c_9, sym_Seq_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      z_8 :
      if(match_cons(e_9, sym_Seq_2))
        {
          a_9 = ATgetArgument(e_9, 0);
          b_9 = ATgetArgument(e_9, 1);
          {
            ATerm g_9 = t;
            int h_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_9 = NULL;
                ATerm j_9 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(a_9));
                {
                  t = BMF_0(t);
                  {
                    j_9 = t;
                    if(((i_9 != NULL) && (i_9 != j_9)))
                      _fail(j_9);
                    else
                      i_9 = j_9;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_9), not_null(b_9));
                ;
                LocalPopChoice(h_9);
              }
            else
              {
                t = g_9;
                t = p_9(t);
              }
          }
        }
      else
        {
          t = p_9(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm k_124 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_124(t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        t = _one(t, s_9);
      }
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  j_10 = t;
  z_9 :
  if(match_cons(j_10, sym_Let_2))
    {
      k_10 = ATgetArgument(j_10, 0);
      r_10 = ATgetArgument(j_10, 1);
      a_10 :
      if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
        {
          l_10 = ATgetFirst((ATermList) k_10);
          q_10 = (ATerm) ATgetNext((ATermList) k_10);
          b_10 :
          if(match_cons(l_10, sym_SDefT_4))
            {
              m_10 = ATgetArgument(l_10, 0);
              n_10 = ATgetArgument(l_10, 1);
              o_10 = ATgetArgument(l_10, 2);
              p_10 = ATgetArgument(l_10, 3);
              c_10 :
              if(((ATgetType(n_10) == AT_LIST) && ATisEmpty(n_10)))
                {
                  d_10 :
                  if(((ATgetType(o_10) == AT_LIST) && ATisEmpty(o_10)))
                    {
                      e_10 :
                      if(((ATgetType(q_10) == AT_LIST) && ATisEmpty(q_10)))
                        {
                          f_10 :
                          if(match_cons(r_10, sym_CallT_3))
                            {
                              s_10 = ATgetArgument(r_10, 0);
                              u_10 = ATgetArgument(r_10, 1);
                              v_10 = ATgetArgument(r_10, 2);
                              g_10 :
                              if(match_cons(s_10, sym_SVar_1))
                                {
                                  t_10 = ATgetArgument(s_10, 0);
                                  h_10 :
                                  if(((ATgetType(u_10) == AT_LIST) && ATisEmpty(u_10)))
                                    {
                                      i_10 :
                                      if(((ATgetType(v_10) == AT_LIST) && ATisEmpty(v_10)))
                                        {
                                          {
                                            if(((m_10 != NULL) && (m_10 != t_10)))
                                              _fail(t_10);
                                            else
                                              m_10 = t_10;
                                            {
                                              t = not_null(p_10);
                                              {
                                                ATerm o_9 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_0 (ATerm t)
                                                    {
                                                      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
                                                      y_10 = t;
                                                      v_9 :
                                                      if(match_cons(y_10, sym_CallT_3))
                                                        {
                                                          z_10 = ATgetArgument(y_10, 0);
                                                          b_11 = ATgetArgument(y_10, 1);
                                                          c_11 = ATgetArgument(y_10, 2);
                                                          w_9 :
                                                          if(match_cons(z_10, sym_SVar_1))
                                                            {
                                                              a_11 = ATgetArgument(z_10, 0);
                                                              x_9 :
                                                              if(((ATgetType(b_11) == AT_LIST) && ATisEmpty(b_11)))
                                                                {
                                                                  y_9 :
                                                                  if(((ATgetType(c_11) == AT_LIST) && ATisEmpty(c_11)))
                                                                    {
                                                                      if(((m_10 != NULL) && (m_10 != a_11)))
                                                                        _fail(a_11);
                                                                      else
                                                                        m_10 = a_11;
                                                                    }
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
                                                    t = oncetd_1(t, e_0);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = o_9;
                                                  }
                                              }
                                              t = not_null(p_10);
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
        }
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
ATerm LetNoDefs_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  g_11 :
  if(match_cons(i_11, sym_Let_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      h_11 :
      if(((ATgetType(j_11) == AT_LIST) && ATisEmpty(j_11)))
        {
          t = not_null(k_11);
        }
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
ATerm EmptyScope_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  o_11 :
  if(match_cons(q_11, sym_Scope_2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      p_11 :
      if(((ATgetType(r_11) == AT_LIST) && ATisEmpty(r_11)))
        {
          t = not_null(s_11);
        }
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
ATerm Idempotency_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  b_12 :
  if(match_cons(o_12, sym_Where_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      c_12 :
      if(match_cons(p_12, sym_Seq_2))
        {
          n_12 = ATgetArgument(p_12, 0);
          j_12 = ATgetArgument(p_12, 1);
          d_12 :
          if(match_cons(n_12, sym_Where_1))
            {
              i_12 = ATgetArgument(n_12, 0);
              e_12 :
              if(match_cons(j_12, sym_Seq_2))
                {
                  k_12 = ATgetArgument(j_12, 0);
                  m_12 = ATgetArgument(j_12, 1);
                  f_12 :
                  if(match_cons(k_12, sym_Build_1))
                    {
                      l_12 = ATgetArgument(k_12, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_12)), not_null(m_12))));
                    }
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
          if(match_cons(p_12, sym_Where_1))
            {
              n_12 = ATgetArgument(p_12, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_12));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(o_12, sym_Test_1))
        {
          p_12 = ATgetArgument(o_12, 0);
          g_12 :
          if(match_cons(p_12, sym_Test_1))
            {
              n_12 = ATgetArgument(p_12, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_12));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_12, sym_Not_1))
            {
              p_12 = ATgetArgument(o_12, 0);
              h_12 :
              if(match_cons(p_12, sym_Not_1))
                {
                  n_12 = ATgetArgument(p_12, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_12));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(o_12, sym_LChoice_2))
                {
                  p_12 = ATgetArgument(o_12, 0);
                  q_12 = ATgetArgument(o_12, 1);
                  {
                    if(((p_12 != NULL) && (p_12 != q_12)))
                      _fail(q_12);
                    else
                      p_12 = q_12;
                    t = not_null(p_12);
                  }
                }
              else
                {
                  if(match_cons(o_12, sym_Choice_2))
                    {
                      p_12 = ATgetArgument(o_12, 0);
                      q_12 = ATgetArgument(o_12, 1);
                      {
                        if(((p_12 != NULL) && (p_12 != q_12)))
                          _fail(q_12);
                        else
                          p_12 = q_12;
                        t = not_null(p_12);
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
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  m_13 = t;
  i_13 :
  if(match_cons(m_13, sym_LChoice_2))
    {
      n_13 = ATgetArgument(m_13, 0);
      q_13 = ATgetArgument(m_13, 1);
      j_13 :
      if(match_cons(n_13, sym_LChoice_2))
        {
          o_13 = ATgetArgument(n_13, 0);
          p_13 = ATgetArgument(n_13, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_13), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_13), not_null(q_13)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_13, sym_Seq_2))
        {
          n_13 = ATgetArgument(m_13, 0);
          q_13 = ATgetArgument(m_13, 1);
          k_13 :
          if(match_cons(n_13, sym_Seq_2))
            {
              o_13 = ATgetArgument(n_13, 0);
              p_13 = ATgetArgument(n_13, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_13), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_13), not_null(q_13)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_13, sym_Choice_2))
            {
              n_13 = ATgetArgument(m_13, 0);
              q_13 = ATgetArgument(m_13, 1);
              l_13 :
              if(match_cons(n_13, sym_Choice_2))
                {
                  o_13 = ATgetArgument(n_13, 0);
                  p_13 = ATgetArgument(n_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_13), (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_13), not_null(q_13)));
                }
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
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_DefaultVarDec_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_14), term_t_9);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_DefaultVarDec_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_14), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_9), term_t_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm u_9 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, p_0, _id);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm h_0 (ATerm t)
          {
            t = map1_1(t, p_0);
            return(t);
          }
          t = try_1(t, h_0);
          return(t);
        }
        t = Cons_2(t, _id, f_0);
      }
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = u_9;
      {
        ATerm j_0 (ATerm t)
        {
          t = map1_1(t, p_0);
          return(t);
        }
        t = Cons_2(t, _id, j_0);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  k_15 :
  if(match_cons(s_15, sym_Lets_2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_15), not_null(u_15));
    }
  else
    {
      if(match_cons(s_15, sym_LChoices_1))
        {
          t_15 = ATgetArgument(s_15, 0);
          l_15 :
          if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
            {
              o_15 = ATgetFirst((ATermList) t_15);
              p_15 = (ATerm) ATgetNext((ATermList) t_15);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_15), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_15)));
            }
          else
            {
              if(((ATgetType(t_15) == AT_LIST) && ATisEmpty(t_15)))
                {
                  t = term_y_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_15, sym_Choices_1))
            {
              t_15 = ATgetArgument(s_15, 0);
              m_15 :
              if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
                {
                  o_15 = ATgetFirst((ATermList) t_15);
                  p_15 = (ATerm) ATgetNext((ATermList) t_15);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_15), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_15)));
                }
              else
                {
                  if(((ATgetType(t_15) == AT_LIST) && ATisEmpty(t_15)))
                    {
                      t = term_y_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_15, sym_Seqs_1))
                {
                  t_15 = ATgetArgument(s_15, 0);
                  n_15 :
                  if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
                    {
                      o_15 = ATgetFirst((ATermList) t_15);
                      p_15 = (ATerm) ATgetNext((ATermList) t_15);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_15), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_15)));
                    }
                  else
                    {
                      if(((ATgetType(t_15) == AT_LIST) && ATisEmpty(t_15)))
                        {
                          t = term_x_10;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_15, sym_RDefT_4))
                    {
                      t_15 = ATgetArgument(s_15, 0);
                      u_15 = ATgetArgument(s_15, 1);
                      r_15 = ATgetArgument(s_15, 2);
                      q_15 = ATgetArgument(s_15, 3);
                      {
                        ATerm h_16 = NULL,i_16 = NULL;
                        ATerm j_16 = NULL;
                        t = not_null(u_15);
                        {
                          ATerm k_16 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            j_16 = t;
                            {
                              if(((h_16 != NULL) && (h_16 != j_16)))
                                _fail(j_16);
                              else
                                h_16 = j_16;
                              {
                                t = not_null(r_15);
                                {
                                  ATerm l_0 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, l_0);
                                  {
                                    k_16 = t;
                                    if(((i_16 != NULL) && (i_16 != k_16)))
                                      _fail(k_16);
                                    else
                                      i_16 = k_16;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(t_15), not_null(h_16), not_null(i_16), not_null(q_15));
                      }
                    }
                  else
                    {
                      if(match_cons(s_15, sym_SDefT_4))
                        {
                          t_15 = ATgetArgument(s_15, 0);
                          u_15 = ATgetArgument(s_15, 1);
                          r_15 = ATgetArgument(s_15, 2);
                          q_15 = ATgetArgument(s_15, 3);
                          {
                            ATerm d_11 = t;
                            int e_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_16 = NULL,q_16 = NULL;
                                ATerm r_16 = NULL;
                                t = not_null(r_15);
                                {
                                  ATerm s_16 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    r_16 = t;
                                    {
                                      if(((p_16 != NULL) && (p_16 != r_16)))
                                        _fail(r_16);
                                      else
                                        p_16 = r_16;
                                      {
                                        t = not_null(u_15);
                                        {
                                          ATerm o_0 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, o_0);
                                          {
                                            s_16 = t;
                                            if(((q_16 != NULL) && (q_16 != s_16)))
                                              _fail(s_16);
                                            else
                                              q_16 = s_16;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_15), not_null(q_16), not_null(p_16), not_null(q_15));
                                ;
                                LocalPopChoice(e_11);
                              }
                            else
                              {
                                t = d_11;
                                {
                                  ATerm x_16 = NULL,y_16 = NULL;
                                  ATerm z_16 = NULL;
                                  t = not_null(u_15);
                                  {
                                    ATerm a_17 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      z_16 = t;
                                      {
                                        if(((x_16 != NULL) && (x_16 != z_16)))
                                          _fail(z_16);
                                        else
                                          x_16 = z_16;
                                        {
                                          t = not_null(r_15);
                                          {
                                            ATerm q_0 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, q_0);
                                            {
                                              a_17 = t;
                                              if(((y_16 != NULL) && (y_16 != a_17)))
                                                _fail(a_17);
                                              else
                                                y_16 = a_17;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_15), not_null(x_16), not_null(y_16), not_null(q_15));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(s_15, sym_InfixApp_3))
                            {
                              t_15 = ATgetArgument(s_15, 0);
                              u_15 = ATgetArgument(s_15, 1);
                              r_15 = ATgetArgument(s_15, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_15), (ATerm) ATmakeAppl(sym_Op_2, term_f_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), not_null(t_15))));
                            }
                          else
                            {
                              if(match_cons(s_15, sym_BAM_3))
                                {
                                  t_15 = ATgetArgument(s_15, 0);
                                  u_15 = ATgetArgument(s_15, 1);
                                  r_15 = ATgetArgument(s_15, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_15))), not_null(t_15)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_15))));
                                }
                              else
                                {
                                  if(match_cons(s_15, sym_AM_2))
                                    {
                                      t_15 = ATgetArgument(s_15, 0);
                                      u_15 = ATgetArgument(s_15, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_15), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_15)));
                                    }
                                  else
                                    {
                                      if(match_cons(s_15, sym_MA_2))
                                        {
                                          t_15 = ATgetArgument(s_15, 0);
                                          u_15 = ATgetArgument(s_15, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_15)), not_null(u_15));
                                        }
                                      else
                                        {
                                          if(match_cons(s_15, sym_BA_2))
                                            {
                                              t_15 = ATgetArgument(s_15, 0);
                                              u_15 = ATgetArgument(s_15, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_15)), not_null(t_15));
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
ATerm F16_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  j_18 :
  if(match_cons(l_18, sym_GuardedLChoice_3))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      o_18 = ATgetArgument(l_18, 2);
      k_18 :
      if(match_cons(o_18, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_18), not_null(n_18));
        }
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
ATerm F15_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  v_18 = t;
  t_18 :
  if(match_cons(v_18, sym_Where_1))
    {
      w_18 = ATgetArgument(v_18, 0);
      u_18 :
      if(match_cons(w_18, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F14_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  z_18 :
  if(match_cons(b_19, sym_LChoice_2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      a_19 :
      if(match_cons(d_19, sym_Fail_0))
        {
          t = not_null(c_19);
        }
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
ATerm F13_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  h_19 :
  if(match_cons(j_19, sym_LChoice_2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      i_19 :
      if(match_cons(k_19, sym_Fail_0))
        {
          t = not_null(l_19);
        }
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
ATerm F12_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  p_19 :
  if(match_cons(r_19, sym_Choice_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      q_19 :
      if(match_cons(t_19, sym_Fail_0))
        {
          t = not_null(s_19);
        }
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
ATerm F11_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  x_19 :
  if(match_cons(z_19, sym_Choice_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      y_19 :
      if(match_cons(a_20, sym_Fail_0))
        {
          t = not_null(b_20);
        }
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
ATerm F10_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_Cong_2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        t = not_null(j_20);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm m_20 = NULL;
            m_20 = t;
            f_20 :
            if(!(match_cons(m_20, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, r_0);
        }
        t = term_y_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  p_20 :
  if(match_cons(r_20, sym_Path_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      q_20 :
      if(match_cons(t_20, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F8_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  x_20 :
  if(match_cons(z_20, sym_One_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      y_20 :
      if(match_cons(a_21, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F7_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  f_21 = t;
  d_21 :
  if(match_cons(f_21, sym_Some_1))
    {
      g_21 = ATgetArgument(f_21, 0);
      e_21 :
      if(match_cons(g_21, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F6_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  j_21 :
  if(match_cons(l_21, sym_Rec_2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      k_21 :
      if(match_cons(n_21, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F5_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  r_21 :
  if(match_cons(t_21, sym_Scope_2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      s_21 :
      if(match_cons(v_21, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F3_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  z_21 :
  if(match_cons(b_22, sym_Seq_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      a_22 :
      if(match_cons(c_22, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm F2_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  h_22 :
  if(match_cons(j_22, sym_Not_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      i_22 :
      if(match_cons(k_22, sym_Fail_0))
        {
          t = term_x_10;
        }
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
ATerm F1_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  n_22 :
  if(match_cons(p_22, sym_Test_1))
    {
      q_22 = ATgetArgument(p_22, 0);
      o_22 :
      if(match_cons(q_22, sym_Fail_0))
        {
          t = term_y_7;
        }
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm n_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = n_11;
            {
              ATerm u_11 = t;
              int v_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(v_11);
                }
              else
                {
                  t = u_11;
                  {
                    ATerm w_11 = t;
                    int x_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(x_11);
                      }
                    else
                      {
                        t = w_11;
                        {
                          ATerm y_11 = t;
                          int z_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(z_11);
                            }
                          else
                            {
                              t = y_11;
                              {
                                ATerm a_12 = t;
                                int r_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(r_12);
                                  }
                                else
                                  {
                                    t = a_12;
                                    {
                                      ATerm s_12 = t;
                                      int t_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(t_12);
                                        }
                                      else
                                        {
                                          t = s_12;
                                          {
                                            ATerm u_12 = t;
                                            int v_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(v_12);
                                              }
                                            else
                                              {
                                                t = u_12;
                                                {
                                                  ATerm w_12 = t;
                                                  int x_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(x_12);
                                                    }
                                                  else
                                                    {
                                                      t = w_12;
                                                      {
                                                        ATerm y_12 = t;
                                                        int z_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(z_12);
                                                          }
                                                        else
                                                          {
                                                            t = y_12;
                                                            {
                                                              ATerm a_13 = t;
                                                              int b_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(b_13);
                                                                }
                                                              else
                                                                {
                                                                  t = a_13;
                                                                  {
                                                                    ATerm c_13 = t;
                                                                    int d_13 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(d_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_13;
                                                                        {
                                                                          ATerm e_13 = t;
                                                                          int f_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(f_13);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_13;
                                                                              {
                                                                                ATerm g_13 = t;
                                                                                int h_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(h_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_13;
                                                                                    t = F16_0(t);
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
            }
          }
      }
    }
  return(t);
}
ATerm I16_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  t_22 :
  if(match_cons(v_22, sym_Match_1))
    {
      w_22 = ATgetArgument(v_22, 0);
      u_22 :
      if(match_cons(w_22, sym_Wld_0))
        {
          t = term_x_10;
        }
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
ATerm I12_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  z_22 :
  if(match_cons(b_23, sym_Where_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      a_23 :
      if(match_cons(c_23, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm I10_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  f_23 :
  if(match_cons(h_23, sym_All_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      g_23 :
      if(match_cons(i_23, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm I9_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  l_23 :
  if(match_cons(n_23, sym_Rec_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      m_23 :
      if(match_cons(p_23, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm I8_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  t_23 :
  if(match_cons(v_23, sym_Scope_2))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      u_23 :
      if(match_cons(x_23, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm I7_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  b_24 :
  if(match_cons(d_24, sym_LChoice_2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      c_24 :
      if(match_cons(e_24, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm I4_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  j_24 :
  if(match_cons(l_24, sym_Seq_2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      k_24 :
      if(match_cons(n_24, sym_Id_0))
        {
          t = not_null(m_24);
        }
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
ATerm I3_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  r_24 :
  if(match_cons(t_24, sym_Seq_2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      s_24 :
      if(match_cons(u_24, sym_Id_0))
        {
          t = not_null(v_24);
        }
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
ATerm I2_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym_Not_1))
    {
      c_25 = ATgetArgument(b_25, 0);
      a_25 :
      if(match_cons(c_25, sym_Id_0))
        {
          t = term_y_7;
        }
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
ATerm I1_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  h_25 = t;
  f_25 :
  if(match_cons(h_25, sym_Test_1))
    {
      i_25 = ATgetArgument(h_25, 0);
      g_25 :
      if(match_cons(i_25, sym_Id_0))
        {
          t = term_x_10;
        }
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
ATerm ElimId_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm z_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(a_14);
                            }
                          else
                            {
                              t = z_13;
                              {
                                ATerm b_14 = t;
                                int c_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(c_14);
                                  }
                                else
                                  {
                                    t = b_14;
                                    {
                                      ATerm d_14 = t;
                                      int h_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(h_14);
                                        }
                                      else
                                        {
                                          t = d_14;
                                          {
                                            ATerm i_14 = t;
                                            int j_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(j_14);
                                              }
                                            else
                                              {
                                                t = i_14;
                                                {
                                                  ATerm n_14 = t;
                                                  int o_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(o_14);
                                                    }
                                                  else
                                                    {
                                                      t = n_14;
                                                      t = I16_0(t);
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
ATerm Simplify_0 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
                        {
                          ATerm x_14 = t;
                          int y_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(y_14);
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm z_14 = t;
                                int a_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(a_15);
                                  }
                                else
                                  {
                                    t = z_14;
                                    {
                                      ATerm b_15 = t;
                                      int c_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(c_15);
                                        }
                                      else
                                        {
                                          t = b_15;
                                          {
                                            ATerm d_15 = t;
                                            int e_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(e_15);
                                              }
                                            else
                                              {
                                                t = d_15;
                                                {
                                                  ATerm f_15 = t;
                                                  int g_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatch_0(t);
                                                      ;
                                                      LocalPopChoice(g_15);
                                                    }
                                                  else
                                                    {
                                                      t = f_15;
                                                      t = MatchSimplify_0(t);
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
ATerm downup_1 (ATerm t, ATerm i_123 (ATerm))
{
  t = i_123(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = downup_1(t, i_123);
      return(t);
    }
    t = _all(t, s_0);
    t = i_123(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, t_0);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm m_25 = NULL;
  ATerm o_25 = NULL;
  m_25 = t;
  {
    ATerm p_25 = NULL;
    t = new_0(t);
    {
      p_25 = t;
      if(((o_25 != NULL) && (o_25 != p_25)))
        _fail(p_25);
      else
        o_25 = p_25;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_25)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(o_25), (ATerm)ATempty, (ATerm)ATempty, not_null(m_25))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm e_104 (ATerm))
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_SVar_1))
    {
      y_25 = ATgetArgument(x_25, 0);
      {
        ATerm b_26 = NULL,d_26 = NULL;
        ATerm c_26 = NULL;
        t = SSLgetAnnotations(not_null(x_25));
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
        {
          t = not_null(y_25);
          {
            ATerm f_26 = NULL;
            t = e_104(t);
            {
              d_26 = t;
              {
                ATerm g_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(d_26)), not_null(b_26));
                {
                  g_26 = t;
                  if(((f_26 != NULL) && (f_26 != g_26)))
                    _fail(g_26);
                  else
                    f_26 = g_26;
                }
                t = not_null(f_26);
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
ATerm CallT_3 (ATerm t, ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_CallT_3))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      v_26 = ATgetArgument(s_26, 2);
      {
        ATerm a_27 = NULL,c_27 = NULL;
        ATerm b_27 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          b_27 = t;
          if(((a_27 != NULL) && (a_27 != b_27)))
            _fail(b_27);
          else
            a_27 = b_27;
        }
        {
          t = not_null(t_26);
          {
            ATerm e_27 = NULL;
            t = j_104(t);
            {
              c_27 = t;
              {
                t = not_null(u_26);
                {
                  ATerm g_27 = NULL;
                  t = k_104(t);
                  {
                    e_27 = t;
                    {
                      t = not_null(v_26);
                      {
                        ATerm i_27 = NULL;
                        t = l_104(t);
                        {
                          g_27 = t;
                          {
                            ATerm j_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(c_27), not_null(e_27), not_null(g_27)), not_null(a_27));
                            {
                              j_27 = t;
                              if(((i_27 != NULL) && (i_27 != j_27)))
                                _fail(j_27);
                              else
                                i_27 = j_27;
                            }
                            t = not_null(i_27);
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
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  w_27 = t;
  r_27 :
  if(match_cons(w_27, sym_Let_2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      s_27 :
      if(match_cons(y_27, sym_CallT_3))
        {
          z_27 = ATgetArgument(y_27, 0);
          b_28 = ATgetArgument(y_27, 1);
          c_28 = ATgetArgument(y_27, 2);
          t_27 :
          if(match_cons(z_27, sym_SVar_1))
            {
              a_28 = ATgetArgument(z_27, 0);
              u_27 :
              if(((ATgetType(b_28) == AT_LIST) && ATisEmpty(b_28)))
                {
                  v_27 :
                  if(((ATgetType(c_28) == AT_LIST) && ATisEmpty(c_28)))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_28)), (ATerm)ATempty, (ATerm) ATempty), not_null(x_27));
                    }
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
  ATerm i_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_Fail_0))
    {
      t = term_j_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Id_0))
    {
      t = term_x_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  s_28 = t;
  p_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      w_28 = ATgetArgument(s_28, 1);
      q_28 :
      if(match_cons(t_28, sym__2))
        {
          u_28 = ATgetArgument(t_28, 0);
          v_28 = ATgetArgument(t_28, 1);
          r_28 :
          if(match_cons(w_28, sym__2))
            {
              x_28 = ATgetArgument(w_28, 0);
              y_28 = ATgetArgument(w_28, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_28)), not_null(u_28)), (ATerm) ATinsert(CheckATermList(not_null(y_28)), not_null(v_28)));
            }
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
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  f_29 :
  if(((ATgetType(g_29) == AT_LIST) && !(ATisEmpty(g_29))))
    {
      h_29 = ATgetFirst((ATermList) g_29);
      i_29 = (ATerm) ATgetNext((ATermList) g_29);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(i_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  n_29 :
  if(((ATgetType(o_29) == AT_LIST) && ATisEmpty(o_29)))
    {
      t = term_y_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm))
{
  ATerm q_29 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_131(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          t = b_131(t);
          {
            t = _2(t, d_131, q_29);
            t = c_131(t);
          }
        }
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm k_131 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, k_131);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_124 (ATerm))
{
  ATerm r_29 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_124(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = _all(t, r_29);
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  ATerm i_34 (ATerm t)
  {
    t = not_null(t_31);
    return(t);
  }
  ATerm j_34 (ATerm t)
  {
    t = not_null(u_31);
    return(t);
  }
  ATerm k_34 (ATerm t)
  {
    ATerm s_32 = NULL;
    ATerm t_32 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(q_31));
    {
      t = conc_0(t);
      {
        t_32 = t;
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_32), not_null(r_31));
    return(t);
  }
  ATerm l_34 (ATerm t)
  {
    t = not_null(u_31);
    return(t);
  }
  ATerm m_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_16, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATempty);
    return(t);
  }
  ATerm n_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_16, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATempty);
    return(t);
  }
  ATerm o_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_16, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATempty);
    return(t);
  }
  ATerm p_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_16, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATempty);
    return(t);
  }
  ATerm q_34 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_16, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATempty);
    return(t);
  }
  ATerm r_34 (ATerm t)
  {
    ATerm d_33 = NULL;
    ATerm e_33 = NULL;
    t = not_null(u_31);
    {
      ATerm y_34 (ATerm t)
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              ATerm b_17 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = b_17;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, y_34);
              return(t);
            }
            t = Cons_2(t, u_0, v_0);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = Cons_2(t, _id, y_34);
          }
        return(t);
      }
      t = y_34(t);
      {
        e_33 = t;
        if(((d_33 != NULL) && (d_33 != e_33)))
          _fail(e_33);
        else
          d_33 = e_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(t_31), not_null(d_33), not_null(v_31));
    return(t);
  }
  ATerm s_34 (ATerm t)
  {
    ATerm i_33 = NULL;
    ATerm j_33 = NULL;
    t = not_null(u_31);
    {
      ATerm a_35 (ATerm t)
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              t = try_1(t, a_35);
              return(t);
            }
            t = Cons_2(t, w_0, x_0);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = Cons_2(t, _id, a_35);
          }
        return(t);
      }
      t = a_35(t);
      {
        j_33 = t;
        if(((i_33 != NULL) && (i_33 != j_33)))
          _fail(j_33);
        else
          i_33 = j_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(t_31), not_null(i_33), not_null(v_31));
    return(t);
  }
  ATerm t_34 (ATerm t)
  {
    ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
    ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
    t = not_null(u_31);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, z_0);
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
              {
                ATerm l_17 = t;
                int m_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_17 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, a_1, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = n_17;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(m_17);
                  }
                else
                  {
                    t = l_17;
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, b_1);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, y_0);
      {
        q_33 = t;
        u_30 :
        if(match_cons(q_33, sym__2))
          {
            r_33 = ATgetArgument(q_33, 0);
            s_33 = ATgetArgument(q_33, 1);
            {
              ATerm t_33 = NULL;
              if(((n_33 != NULL) && (n_33 != r_33)))
                _fail(r_33);
              else
                n_33 = r_33;
              {
                if(((o_33 != NULL) && (o_33 != s_33)))
                  _fail(s_33);
                else
                  o_33 = s_33;
                {
                  t = not_null(o_33);
                  {
                    t = concat_0(t);
                    {
                      t_33 = t;
                      {
                        if(((p_33 != NULL) && (p_33 != t_33)))
                          _fail(t_33);
                        else
                          p_33 = t_33;
                        {
                          ATerm o_17 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = o_17;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_33), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(t_31), not_null(n_33), not_null(v_31)));
    return(t);
  }
  ATerm u_34 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
    t = not_null(u_31);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, d_1);
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              {
                ATerm t_17 = t;
                int u_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_17 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, e_1, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = v_17;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(u_17);
                  }
                else
                  {
                    t = t_17;
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, h_1);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, c_1);
      {
        a_34 = t;
        x_30 :
        if(match_cons(a_34, sym__2))
          {
            b_34 = ATgetArgument(a_34, 0);
            c_34 = ATgetArgument(a_34, 1);
            {
              ATerm d_34 = NULL;
              if(((x_33 != NULL) && (x_33 != b_34)))
                _fail(b_34);
              else
                x_33 = b_34;
              {
                if(((y_33 != NULL) && (y_33 != c_34)))
                  _fail(c_34);
                else
                  y_33 = c_34;
                {
                  t = not_null(y_33);
                  {
                    t = concat_0(t);
                    {
                      d_34 = t;
                      {
                        if(((z_33 != NULL) && (z_33 != d_34)))
                          _fail(d_34);
                        else
                          z_33 = d_34;
                        {
                          ATerm w_17 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = w_17;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_33), (ATerm) ATmakeAppl(sym_CallT_3, not_null(t_31), not_null(x_33), not_null(v_31)));
    return(t);
  }
  s_31 = t;
  y_30 :
  if(match_cons(s_31, sym_Rec_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_31), (ATerm)ATempty, (ATerm)ATempty, not_null(u_31))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_31)), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(s_31, sym_SDefT_4))
        {
          t_31 = ATgetArgument(s_31, 0);
          u_31 = ATgetArgument(s_31, 1);
          v_31 = ATgetArgument(s_31, 2);
          l_31 = ATgetArgument(s_31, 3);
          z_30 :
          if(((ATgetType(u_31) == AT_LIST) && ATisEmpty(u_31)))
            {
              a_31 :
              if(((ATgetType(v_31) == AT_LIST) && ATisEmpty(v_31)))
                {
                  b_31 :
                  if(match_cons(l_31, sym_Rec_2))
                    {
                      m_31 = ATgetArgument(l_31, 0);
                      n_31 = ATgetArgument(l_31, 1);
                      {
                        ATerm b_32 = NULL;
                        ATerm h_32 = NULL;
                        t = not_null(n_31);
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
                            c_32 = t;
                            k_30 :
                            if(match_cons(c_32, sym_CallT_3))
                              {
                                d_32 = ATgetArgument(c_32, 0);
                                f_32 = ATgetArgument(c_32, 1);
                                g_32 = ATgetArgument(c_32, 2);
                                l_30 :
                                if(match_cons(d_32, sym_SVar_1))
                                  {
                                    e_32 = ATgetArgument(d_32, 0);
                                    m_30 :
                                    if(((ATgetType(f_32) == AT_LIST) && ATisEmpty(f_32)))
                                      {
                                        n_30 :
                                        if(((ATgetType(g_32) == AT_LIST) && ATisEmpty(g_32)))
                                          {
                                            {
                                              if(((m_31 != NULL) && (m_31 != e_32)))
                                                _fail(e_32);
                                              else
                                                m_31 = e_32;
                                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_31)), (ATerm)ATempty, (ATerm) ATempty);
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
                          t = alltd_1(t, i_1);
                          {
                            h_32 = t;
                            if(((b_32 != NULL) && (b_32 != h_32)))
                              _fail(h_32);
                            else
                              b_32 = h_32;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_31), (ATerm)ATempty, (ATerm)ATempty, not_null(b_32));
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
          if(match_cons(s_31, sym_Seq_2))
            {
              t_31 = ATgetArgument(s_31, 0);
              u_31 = ATgetArgument(s_31, 1);
              c_31 :
              if(match_cons(u_31, sym_Seq_2))
                {
                  q_31 = ATgetArgument(u_31, 0);
                  r_31 = ATgetArgument(u_31, 1);
                  d_31 :
                  if(match_cons(t_31, sym_Where_1))
                    {
                      p_31 = ATgetArgument(t_31, 0);
                      e_31 :
                      if(match_cons(q_31, sym_Build_1))
                        {
                          o_31 = ATgetArgument(q_31, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_31)), not_null(r_31)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(t_31, sym_Id_0))
                        {
                          t = j_34(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(u_31, sym_Build_1))
                    {
                      q_31 = ATgetArgument(u_31, 0);
                      f_31 :
                      if(match_cons(t_31, sym_Where_1))
                        {
                          p_31 = ATgetArgument(t_31, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_31), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_31)));
                        }
                      else
                        {
                          if(match_cons(t_31, sym_Id_0))
                            {
                              t = j_34(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(u_31, sym_Id_0))
                        {
                          g_31 :
                          if(match_cons(t_31, sym_Id_0))
                            {
                              ATerm x_17 = t;
                              int y_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_34(t);
                                  ;
                                  LocalPopChoice(y_17);
                                }
                              else
                                {
                                  t = x_17;
                                  t = j_34(t);
                                }
                            }
                          else
                            {
                              t = i_34(t);
                            }
                        }
                      else
                        {
                          h_31 :
                          if(match_cons(t_31, sym_Id_0))
                            {
                              t = j_34(t);
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
              if(match_cons(s_31, sym_Scope_2))
                {
                  t_31 = ATgetArgument(s_31, 0);
                  u_31 = ATgetArgument(s_31, 1);
                  i_31 :
                  if(match_cons(u_31, sym_Scope_2))
                    {
                      q_31 = ATgetArgument(u_31, 0);
                      r_31 = ATgetArgument(u_31, 1);
                      j_31 :
                      if(((ATgetType(t_31) == AT_LIST) && ATisEmpty(t_31)))
                        {
                          {
                            ATerm z_17 = t;
                            int a_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_34(t);
                                ;
                                LocalPopChoice(a_18);
                              }
                            else
                              {
                                t = z_17;
                                t = l_34(t);
                              }
                          }
                        }
                      else
                        {
                          t = k_34(t);
                        }
                    }
                  else
                    {
                      k_31 :
                      if(((ATgetType(t_31) == AT_LIST) && ATisEmpty(t_31)))
                        {
                          t = l_34(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_31, sym_Thread_1))
                    {
                      t_31 = ATgetArgument(s_31, 0);
                      t = m_34(t);
                    }
                  else
                    {
                      if(match_cons(s_31, sym_Some_1))
                        {
                          t_31 = ATgetArgument(s_31, 0);
                          t = n_34(t);
                        }
                      else
                        {
                          if(match_cons(s_31, sym_One_1))
                            {
                              t_31 = ATgetArgument(s_31, 0);
                              t = o_34(t);
                            }
                          else
                            {
                              if(match_cons(s_31, sym_All_1))
                                {
                                  t_31 = ATgetArgument(s_31, 0);
                                  t = p_34(t);
                                }
                              else
                                {
                                  if(match_cons(s_31, sym_Bagof_1))
                                    {
                                      t_31 = ATgetArgument(s_31, 0);
                                      t = q_34(t);
                                    }
                                  else
                                    {
                                      if(match_cons(s_31, sym_PrimT_3))
                                        {
                                          t_31 = ATgetArgument(s_31, 0);
                                          u_31 = ATgetArgument(s_31, 1);
                                          v_31 = ATgetArgument(s_31, 2);
                                          {
                                            ATerm b_18 = t;
                                            int c_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = r_34(t);
                                                ;
                                                LocalPopChoice(c_18);
                                              }
                                            else
                                              {
                                                t = b_18;
                                                t = t_34(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(s_31, sym_CallT_3))
                                            {
                                              t_31 = ATgetArgument(s_31, 0);
                                              u_31 = ATgetArgument(s_31, 1);
                                              v_31 = ATgetArgument(s_31, 2);
                                              {
                                                ATerm d_18 = t;
                                                int e_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = s_34(t);
                                                    ;
                                                    LocalPopChoice(e_18);
                                                  }
                                                else
                                                  {
                                                    t = d_18;
                                                    t = u_34(t);
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
ATerm repeat_1 (ATerm t, ATerm i_122 (ATerm))
{
  ATerm g_35 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = i_122(t);
      t = g_35(t);
      return(t);
    }
    t = try_1(t, j_1);
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm l_123 (ATerm), ATerm m_123 (ATerm))
{
  t = l_123(t);
  {
    ATerm k_1 (ATerm t)
    {
      t = downup2_2(t, l_123, m_123);
      return(t);
    }
    t = _all(t, k_1);
    t = m_123(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym__2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      {
        ATerm t_35 = NULL,v_35 = NULL;
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(n_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
        {
          t = not_null(o_35);
          {
            ATerm x_35 = NULL;
            t = j_98(t);
            {
              v_35 = t;
              {
                t = not_null(p_35);
                {
                  ATerm z_35 = NULL;
                  t = k_98(t);
                  {
                    x_35 = t;
                    {
                      ATerm a_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_35), not_null(x_35)), not_null(t_35));
                      {
                        a_36 = t;
                        if(((z_35 != NULL) && (z_35 != a_36)))
                          _fail(a_36);
                        else
                          z_35 = a_36;
                      }
                      t = not_null(z_35);
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
  ATerm f_18;
  f_18 = t;
  {
    ATerm h_36 = NULL;
    ATerm i_36 = NULL;
    t = term_g_18;
    {
      t = whoami_0(t);
      {
        i_36 = t;
        if(((h_36 != NULL) && (h_36 != i_36)))
          _fail(i_36);
        else
          h_36 = i_36;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_18), not_null(h_36)), term_i_18));
      {
        t = printnl_0(t);
        {
          t = term_q_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_18;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm r_18;
        r_18 = t;
        t = SSL_printnl(not_null(n_36), not_null(o_36));
        t = r_18;
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
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_implode_string(not_null(t_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = s_18;
      {
        ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
        y_36 = t;
        x_36 :
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            z_36 = ATgetFirst((ATermList) y_36);
            a_37 = (ATerm) ATgetNext((ATermList) y_36);
            {
              t = not_null(z_36);
              {
                ATerm l_1 (ATerm t)
                {
                  t = not_null(a_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_1);
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
  ATerm k_37 = NULL;
  ATerm m_37 = NULL;
  k_37 = t;
  {
    ATerm n_37 = NULL;
    ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
    t = not_null(k_37);
    {
      n_37 = t;
      {
        t = SSL_explode_term(not_null(n_37));
        {
          p_37 = t;
          i_37 :
          if(match_cons(p_37, sym__2))
            {
              q_37 = ATgetArgument(p_37, 0);
              r_37 = ATgetArgument(p_37, 1);
              j_37 :
              if(match_string(q_37, ""))
                {
                  if(((m_37 != NULL) && (m_37 != r_37)))
                    _fail(r_37);
                  else
                    m_37 = r_37;
                }
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
      t = not_null(m_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_129 (ATerm))
{
  ATerm v_37 (ATerm t)
  {
    ATerm y_18 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_37);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = y_18;
        {
          t = Nil_0(t);
          t = n_129(t);
        }
      }
    return(t);
  }
  t = v_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        t = not_null(z_37);
        {
          ATerm m_1 (ATerm t)
          {
            t = not_null(a_38);
            return(t);
          }
          t = at_end_1(t, m_1);
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
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  t = SSL_explode_string(not_null(f_38));
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
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_1);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = o_19;
            {
              ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
              o_38 = t;
              n_38 :
              if(match_cons(o_38, sym_Path_1))
                {
                  p_38 = ATgetArgument(o_38, 0);
                  t = not_null(p_38);
                }
              else
                {
                  if(match_cons(o_38, sym_Var_1))
                    {
                      p_38 = ATgetArgument(o_38, 0);
                      {
                        t = not_null(p_38);
                        {
                          ATerm v_19 = t;
                          int w_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(w_19);
                            }
                          else
                            {
                              t = v_19;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_c_20;
                                  return(t);
                                }
                                t = debug_1(t, o_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_38, sym_Prefix_2))
                        {
                          p_38 = ATgetArgument(o_38, 0);
                          q_38 = ATgetArgument(o_38, 1);
                          {
                            ATerm v_38 = NULL,x_38 = NULL;
                            ATerm d_20;
                            d_20 = t;
                            {
                              ATerm w_38 = NULL;
                              t = not_null(p_38);
                              {
                                t = eval_config_0(t);
                                {
                                  w_38 = t;
                                  if(((v_38 != NULL) && (v_38 != w_38)))
                                    _fail(w_38);
                                  else
                                    v_38 = w_38;
                                }
                              }
                            }
                            t = d_20;
                            {
                              ATerm y_38 = NULL;
                              t = not_null(q_38);
                              {
                                t = eval_config_0(t);
                                {
                                  y_38 = t;
                                  if(((x_38 != NULL) && (x_38 != y_38)))
                                    _fail(y_38);
                                  else
                                    x_38 = y_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_38), not_null(x_38));
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
  ATerm g_39 = NULL;
  g_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(g_39));
    {
      t = table_get_0(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_20;
            k_20 = t;
            {
              ATerm i_39 = NULL;
              ATerm j_39 = NULL;
              j_39 = t;
              if(((i_39 != NULL) && (i_39 != j_39)))
                _fail(j_39);
              else
                i_39 = j_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_20, not_null(g_39), not_null(i_39));
                t = table_put_0(t);
              }
            }
            t = k_20;
          }
          return(t);
        }
        t = try_1(t, p_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_142 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm l_20;
    l_20 = t;
    {
      ATerm n_39 = NULL;
      ATerm o_39 = NULL;
      t = term_n_20;
      {
        t = get_config_0(t);
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_39), term_o_20);
        t = geq_0(t);
      }
    }
    t = l_20;
    t = e_142(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  u_39 = t;
  s_39 :
  if(match_cons(u_39, sym__2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      t_39 :
      if(match_cons(w_39, sym_Stream_1))
        {
          x_39 = ATgetArgument(w_39, 0);
          {
            ATerm a_40 = NULL;
            t = SSL_fputc(not_null(v_39), not_null(x_39));
            {
              ATerm b_40 = NULL;
              b_40 = t;
              if(((a_40 != NULL) && (a_40 != b_40)))
                _fail(b_40);
              else
                a_40 = b_40;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_40));
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
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  g_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      l_40 = ATgetArgument(i_40, 1);
      h_40 :
      if(match_cons(j_40, sym_Stream_1))
        {
          k_40 = ATgetArgument(j_40, 0);
          {
            ATerm o_40 = NULL;
            t = SSL_write_term_to_stream_text(not_null(k_40), not_null(l_40));
            {
              ATerm p_40 = NULL;
              p_40 = t;
              if(((o_40 != NULL) && (o_40 != p_40)))
                _fail(p_40);
              else
                o_40 = p_40;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_40));
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
  ATerm r_1 (ATerm t)
  {
    ATerm t_40 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm u_40 = NULL;
      u_40 = t;
      if(((t_40 != NULL) && (t_40 != u_40)))
        _fail(u_40);
      else
        t_40 = u_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(t_40));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, r_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  a_41 = t;
  y_40 :
  if(match_cons(a_41, sym__2))
    {
      b_41 = ATgetArgument(a_41, 0);
      d_41 = ATgetArgument(a_41, 1);
      z_40 :
      if(match_cons(b_41, sym_Stream_1))
        {
          c_41 = ATgetArgument(b_41, 0);
          {
            ATerm g_41 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(c_41), not_null(d_41));
            {
              ATerm h_41 = NULL;
              h_41 = t;
              if(((g_41 != NULL) && (g_41 != h_41)))
                _fail(h_41);
              else
                g_41 = h_41;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_41));
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
ATerm WriteToFile_1 (ATerm t, ATerm a_141 (ATerm))
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        ATerm t_41 = NULL,v_41 = NULL;
        t = not_null(p_41);
        {
          ATerm u_41 = NULL;
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), term_v_20);
            {
              t = open_stream_0(t);
              {
                ATerm w_41 = NULL;
                w_41 = t;
                if(((v_41 != NULL) && (v_41 != w_41)))
                  _fail(w_41);
                else
                  v_41 = w_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(q_41));
                  {
                    t = a_141(t);
                    {
                      t = fclose_0(t);
                      t = not_null(q_41);
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
  ATerm e_42 = NULL;
  ATerm w_20;
  w_20 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm b_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm f_42 = NULL,g_42 = NULL;
            f_42 = t;
            b_42 :
            if(match_cons(f_42, sym_Output_1))
              {
                g_42 = ATgetArgument(f_42, 0);
                if(((e_42 != NULL) && (e_42 != g_42)))
                  _fail(g_42);
                else
                  e_42 = g_42;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_1);
          ;
          LocalPopChoice(c_21);
        }
      else
        {
          t = b_21;
          {
            ATerm h_42 = NULL;
            t = term_h_21;
            {
              h_42 = t;
              if(((e_42 != NULL) && (e_42 != h_42)))
                _fail(h_42);
              else
                e_42 = h_42;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = w_20;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        t = not_null(e_42);
        return(t);
      }
      t = split_2(t, y_1, _id);
      return(t);
    }
    t = _2(t, _id, x_1);
    {
      ATerm i_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            ATerm a_2 (ATerm t)
            {
              ATerm i_42 = NULL;
              i_42 = t;
              d_42 :
              if(!(match_cons(i_42, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_2);
            return(t);
          }
          t = _2(t, z_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(o_21);
        }
      else
        {
          t = i_21;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_144 (ATerm))
{
  ATerm o_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  ATerm p_21;
  p_21 = t;
  t = dtime_0(t);
  t = p_21;
  {
    t = c_144(t);
    {
      ATerm q_21;
      q_21 = t;
      {
        ATerm p_42 = NULL;
        t = dtime_0(t);
        {
          p_42 = t;
          if(((o_42 != NULL) && (o_42 != p_42)))
            _fail(p_42);
          else
            o_42 = p_42;
        }
      }
      t = q_21;
      {
        q_42 = t;
        n_42 :
        if(match_cons(q_42, sym__2))
          {
            r_42 = ATgetArgument(q_42, 0);
            s_42 = ATgetArgument(q_42, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_42))), not_null(s_42));
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
  ATerm a_43 = NULL,b_43 = NULL;
  ATerm h_43 (ATerm t)
  {
    t = SSL_fclose(not_null(b_43));
    return(t);
  }
  b_43 = t;
  z_42 :
  if(match_cons(b_43, sym_Stream_1))
    {
      a_43 = ATgetArgument(b_43, 0);
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(a_43));
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = h_43(t);
          }
      }
    }
  else
    {
      t = h_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  k_43 = t;
  j_43 :
  if(match_cons(k_43, sym_Stream_1))
    {
      l_43 = ATgetArgument(k_43, 0);
      t = SSL_read_term_from_stream(not_null(l_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_140 (ATerm))
{
  ATerm y_21;
  y_21 = t;
  {
    ATerm q_43 = NULL,s_43 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm r_43 = NULL;
      t = m_140(t);
      {
        r_43 = t;
        if(((q_43 != NULL) && (q_43 != r_43)))
          _fail(r_43);
        else
          q_43 = r_43;
      }
    }
    t = e_22;
    {
      ATerm t_43 = NULL;
      t_43 = t;
      if(((s_43 != NULL) && (s_43 != t_43)))
        _fail(t_43);
      else
        s_43 = t_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_43)), not_null(q_43)));
        t = printnl_0(t);
      }
    }
  }
  t = y_21;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(match_cons(z_43, sym__2))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      {
        ATerm e_44 = NULL;
        t = SSL_fopen(not_null(a_44), not_null(b_44));
        {
          ATerm f_44 = NULL;
          f_44 = t;
          if(((e_44 != NULL) && (e_44 != f_44)))
            _fail(f_44);
          else
            e_44 = f_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_44));
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
  ATerm d_46 = NULL;
  d_46 = t;
  t = SSL_is_string(not_null(d_46));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_46 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_46 = NULL;
    i_46 = t;
    if(((h_46 != NULL) && (h_46 != i_46)))
      _fail(i_46);
    else
      h_46 = i_46;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_46));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_46 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_46 = NULL;
    m_46 = t;
    if(((l_46 != NULL) && (l_46 != m_46)))
      _fail(m_46);
    else
      l_46 = m_46;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_46));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_46 = NULL;
    q_46 = t;
    if(((p_46 != NULL) && (p_46 != q_46)))
      _fail(q_46);
    else
      p_46 = q_46;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_46));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_46, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_46, sym_stdin_0))
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
  ATerm g_47 = NULL;
  ATerm i_47 = NULL,j_47 = NULL;
  g_47 = t;
  {
    ATerm k_47 = NULL;
    ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
    t = not_null(g_47);
    {
      k_47 = t;
      {
        t = SSL_explode_term(not_null(k_47));
        {
          r_47 = t;
          d_47 :
          if(match_cons(r_47, sym__2))
            {
              s_47 = ATgetArgument(r_47, 0);
              t_47 = ATgetArgument(r_47, 1);
              e_47 :
              if(match_string(s_47, ""))
                {
                  f_47 :
                  if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
                    {
                      u_47 = ATgetFirst((ATermList) t_47);
                      v_47 = (ATerm) ATgetNext((ATermList) t_47);
                      {
                        if(((j_47 != NULL) && (j_47 != u_47)))
                          _fail(u_47);
                        else
                          j_47 = u_47;
                        if(((i_47 != NULL) && (i_47 != v_47)))
                          _fail(v_47);
                        else
                          i_47 = v_47;
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
    t = not_null(j_47);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm d_48 = NULL,h_48 = NULL,i_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym__2))
    {
      h_48 = ATgetArgument(d_48, 0);
      i_48 = ATgetArgument(d_48, 1);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm l_22 = t;
              int m_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm j_48 = NULL,k_48 = NULL;
                    j_48 = t;
                    b_48 :
                    if(match_cons(j_48, sym_Path_1))
                      {
                        k_48 = ATgetArgument(j_48, 0);
                        t = not_null(k_48);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, b_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(m_22);
                }
              else
                {
                  t = l_22;
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
  ATerm s_48 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_48 = NULL;
      ATerm r_48 = NULL;
      r_48 = t;
      if(((q_48 != NULL) && (q_48 != r_48)))
        _fail(r_48);
      else
        q_48 = r_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_48), term_x_22);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_y_22;
          return(t);
        }
        t = debug_1(t, c_2);
        _fail(t);
      }
    }
  {
    ATerm d_23;
    d_23 = t;
    {
      ATerm t_48 = NULL;
      t = read_from_stream_0(t);
      {
        t_48 = t;
        if(((s_48 != NULL) && (s_48 != t_48)))
          _fail(t_48);
        else
          s_48 = t_48;
      }
    }
    t = d_23;
    {
      t = fclose_0(t);
      t = not_null(s_48);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_136 (ATerm), ATerm o_136 (ATerm))
{
  ATerm y_48 = NULL,a_49 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    ATerm z_48 = NULL;
    t = n_136(t);
    {
      z_48 = t;
      if(((y_48 != NULL) && (y_48 != z_48)))
        _fail(z_48);
      else
        y_48 = z_48;
    }
  }
  t = e_23;
  {
    ATerm b_49 = NULL;
    t = o_136(t);
    {
      b_49 = t;
      if(((a_49 != NULL) && (a_49 != b_49)))
        _fail(b_49);
      else
        a_49 = b_49;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_48), not_null(a_49));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_49 = NULL;
  ATerm j_23;
  j_23 = t;
  {
    ATerm k_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm i_49 = NULL,j_49 = NULL;
          i_49 = t;
          f_49 :
          if(match_cons(i_49, sym_Input_1))
            {
              j_49 = ATgetArgument(i_49, 0);
              if(((h_49 != NULL) && (h_49 != j_49)))
                _fail(j_49);
              else
                h_49 = j_49;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_2);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = k_23;
        {
          ATerm k_49 = NULL;
          t = term_r_23;
          {
            k_49 = t;
            if(((h_49 != NULL) && (h_49 != k_49)))
              _fail(k_49);
            else
              h_49 = k_49;
          }
        }
      }
  }
  t = j_23;
  {
    ATerm e_2 (ATerm t)
    {
      t = not_null(h_49);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm p_49 = NULL;
    p_49 = t;
    n_49 :
    if(!(match_string(p_49, "-k")))
      {
        if(!(match_string(p_49, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm s_23;
    s_23 = t;
    {
      ATerm q_49 = NULL;
      ATerm r_49 = NULL;
      t = string_to_int_0(t);
      {
        r_49 = t;
        if(((q_49 != NULL) && (q_49 != r_49)))
          _fail(r_49);
        else
          q_49 = r_49;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_23, not_null(q_49));
        t = set_config_0(t);
      }
    }
    t = s_23;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_z_23;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t = SSL_string_to_int(not_null(u_49));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm c_50 = NULL;
        c_50 = t;
        x_49 :
        if(!(match_string(c_50, "-S")))
          {
            if(!(match_string(c_50, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_i_24;
        t = set_config_0(t);
        t = term_o_24;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_p_24;
        return(t);
      }
      t = Option_3(t, i_2, j_2, k_2);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = a_24;
      {
        ATerm q_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm d_50 = NULL;
              d_50 = t;
              y_49 :
              if(!(match_string(d_50, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              ATerm g_50 = NULL;
              ATerm x_24;
              x_24 = t;
              {
                ATerm e_50 = NULL;
                ATerm f_50 = NULL;
                t = string_to_int_0(t);
                {
                  f_50 = t;
                  if(((e_50 != NULL) && (e_50 != f_50)))
                    _fail(f_50);
                  else
                    e_50 = f_50;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(e_50));
                  t = set_config_0(t);
                }
              }
              t = x_24;
              {
                ATerm l_50 = NULL;
                l_50 = t;
                if(((g_50 != NULL) && (g_50 != l_50)))
                  _fail(l_50);
                else
                  g_50 = l_50;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_50));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_y_24;
              return(t);
            }
            t = ArgOption_3(t, l_2, m_2, v_2);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = q_24;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm m_50 = NULL;
                m_50 = t;
                b_50 :
                if(!(match_string(m_50, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_e_25;
                t = set_config_0(t);
                t = term_j_25;
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = term_k_25;
                return(t);
              }
              t = Option_3(t, w_2, x_2, g_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = l_25;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm a_51 = NULL;
    a_51 = t;
    p_50 :
    if(!(match_string(a_51, "-o")))
      {
        if(!(match_string(a_51, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm d_51 = NULL;
    ATerm q_25;
    q_25 = t;
    {
      ATerm b_51 = NULL;
      ATerm c_51 = NULL;
      c_51 = t;
      if(((b_51 != NULL) && (b_51 != c_51)))
        _fail(c_51);
      else
        b_51 = c_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_25, not_null(b_51));
        t = set_config_0(t);
      }
    }
    t = q_25;
    {
      ATerm e_51 = NULL;
      e_51 = t;
      if(((d_51 != NULL) && (d_51 != e_51)))
        _fail(e_51);
      else
        d_51 = e_51;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_51));
    }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_s_25;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, r_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm i_51 = NULL;
          i_51 = t;
          h_51 :
          if(!(match_string(i_51, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_z_25;
          t = set_config_0(t);
          t = term_a_26;
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_e_26;
          return(t);
        }
        t = Option_3(t, s_3, t_3, u_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  o_51 = t;
  m_51 :
  if(match_string(o_51, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
        {
          p_51 = ATgetFirst((ATermList) o_51);
          q_51 = (ATerm) ATgetNext((ATermList) o_51);
          n_51 :
          if(((ATgetType(q_51) == AT_LIST) && !(ATisEmpty(q_51))))
            {
              r_51 = ATgetFirst((ATermList) q_51);
              s_51 = (ATerm) ATgetNext((ATermList) q_51);
              {
                ATerm w_51 = NULL;
                ATerm h_26;
                h_26 = t;
                {
                  t = not_null(p_51);
                  t = k_0(t);
                }
                t = h_26;
                {
                  ATerm x_51 = NULL;
                  t = not_null(r_51);
                  {
                    t = m_0(t);
                    {
                      x_51 = t;
                      if(((w_51 != NULL) && (w_51 != x_51)))
                        _fail(x_51);
                      else
                        w_51 = x_51;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_51)), not_null(w_51));
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
  ATerm v_3 (ATerm t)
  {
    ATerm e_52 = NULL;
    e_52 = t;
    b_52 :
    if(!(match_string(e_52, "-i")))
      {
        if(!(match_string(e_52, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm h_52 = NULL;
    ATerm i_26;
    i_26 = t;
    {
      ATerm f_52 = NULL;
      ATerm g_52 = NULL;
      g_52 = t;
      if(((f_52 != NULL) && (f_52 != g_52)))
        _fail(g_52);
      else
        f_52 = g_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(f_52));
        t = set_config_0(t);
      }
    }
    t = i_26;
    {
      ATerm i_52 = NULL;
      i_52 = t;
      if(((h_52 != NULL) && (h_52 != i_52)))
        _fail(i_52);
      else
        h_52 = i_52;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_52));
    }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = ArgOption_3(t, v_3, j_4, k_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_52 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_52 = NULL;
    t = term_g_18;
    {
      t = whoami_0(t);
      {
        n_52 = t;
        if(((m_52 != NULL) && (m_52 != n_52)))
          _fail(n_52);
        else
          m_52 = n_52;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, term_p_26), not_null(m_52)));
      {
        t = printnl_0(t);
        {
          t = term_q_18;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_q_26;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  t = SSL_TicksToSeconds(not_null(q_52));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym__2))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_52), not_null(x_52));
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = SSL_addr(not_null(w_52), not_null(x_52));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_134 (ATerm), ATerm z_134 (ATerm))
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_134(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
        e_53 = t;
        d_53 :
        if(((ATgetType(e_53) == AT_LIST) && !(ATisEmpty(e_53))))
          {
            f_53 = ATgetFirst((ATermList) e_53);
            g_53 = (ATerm) ATgetNext((ATermList) e_53);
            {
              ATerm j_53 = NULL;
              ATerm k_53 = NULL;
              t = not_null(g_53);
              {
                t = foldr_2(t, y_134, z_134);
                {
                  k_53 = t;
                  if(((j_53 != NULL) && (j_53 != k_53)))
                    _fail(k_53);
                  else
                    j_53 = k_53;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_53), not_null(j_53));
                t = z_134(t);
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
ATerm crush_2 (ATerm t, ATerm r_138 (ATerm), ATerm s_138 (ATerm))
{
  ATerm r_53 = NULL;
  ATerm v_53 = NULL;
  r_53 = t;
  {
    ATerm w_53 = NULL;
    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
    t = not_null(r_53);
    {
      w_53 = t;
      {
        t = SSL_explode_term(not_null(w_53));
        {
          y_53 = t;
          q_53 :
          if(match_cons(y_53, sym__2))
            {
              z_53 = ATgetArgument(y_53, 0);
              a_54 = ATgetArgument(y_53, 1);
              if(((v_53 != NULL) && (v_53 != a_54)))
                _fail(a_54);
              else
                v_53 = a_54;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_53);
      t = foldr_2(t, r_138, s_138);
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
    ATerm l_4 (ATerm t)
    {
      t = term_h_24;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym__2))
    {
      h_54 = ATgetArgument(g_54, 0);
      i_54 = ATgetArgument(g_54, 1);
      {
        ATerm d_27;
        d_27 = t;
        {
          ATerm f_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_54), not_null(i_54));
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = f_27;
              t = SSL_gtr(not_null(h_54), not_null(i_54));
            }
        }
        t = d_27;
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
  ATerm o_54 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
      p_54 = t;
      n_54 :
      if(match_cons(p_54, sym__2))
        {
          q_54 = ATgetArgument(p_54, 0);
          r_54 = ATgetArgument(p_54, 1);
          {
            if(((o_54 != NULL) && (o_54 != q_54)))
              _fail(q_54);
            else
              o_54 = q_54;
            if(((o_54 != NULL) && (o_54 != r_54)))
              _fail(r_54);
            else
              o_54 = r_54;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_142 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm m_27;
    m_27 = t;
    {
      ATerm u_54 = NULL;
      ATerm v_54 = NULL;
      t = term_n_20;
      {
        t = get_config_0(t);
        {
          v_54 = t;
          if(((u_54 != NULL) && (u_54 != v_54)))
            _fail(v_54);
          else
            u_54 = v_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), term_q_18);
        t = geq_0(t);
      }
    }
    t = m_27;
    t = d_142(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm z_54 = NULL,b_55 = NULL;
    ATerm n_27;
    n_27 = t;
    {
      ATerm a_55 = NULL;
      t = run_time_0(t);
      {
        a_55 = t;
        if(((z_54 != NULL) && (z_54 != a_55)))
          _fail(a_55);
        else
          z_54 = a_55;
      }
    }
    t = n_27;
    {
      ATerm c_55 = NULL;
      t = term_g_18;
      {
        t = whoami_0(t);
        {
          c_55 = t;
          if(((b_55 != NULL) && (b_55 != c_55)))
            _fail(c_55);
          else
            b_55 = c_55;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_27), not_null(z_54)), term_o_27), not_null(b_55)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_24;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  k_55 :
  if(match_cons(l_55, sym_Version_0))
    {
      ATerm n_55 = NULL,p_55 = NULL;
      ATerm q_27;
      q_27 = t;
      {
        ATerm o_55 = NULL;
        t = SSLgetAnnotations(not_null(l_55));
        {
          o_55 = t;
          if(((n_55 != NULL) && (n_55 != o_55)))
            _fail(o_55);
          else
            n_55 = o_55;
        }
      }
      t = q_27;
      {
        ATerm q_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_55));
        {
          q_55 = t;
          if(((p_55 != NULL) && (p_55 != q_55)))
            _fail(q_55);
          else
            p_55 = q_55;
        }
        t = not_null(p_55);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_145 (ATerm))
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_28;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm g_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(j_28);
            }
          else
            {
              t = g_28;
              {
                ATerm k_28 = t;
                int n_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(n_28);
                  }
                else
                  {
                    t = k_28;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_4);
      }
    }
  t = a_145(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  t = SSL_table_create(not_null(v_55));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_55 = NULL;
  z_55 = t;
  {
    ATerm o_28;
    o_28 = t;
    {
      t = term_z_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_28, term_a_29, not_null(z_55));
          t = table_put_0(t);
        }
      }
    }
    t = o_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  t = SSL_table_destroy(not_null(d_56));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_56 = NULL;
  h_56 = t;
  t = SSL_exit(not_null(h_56));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_147 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_128 (ATerm))
{
  ATerm k_56 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = Cons_2(t, x_128, k_56);
      }
    return(t);
  }
  t = k_56(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  t_56 = t;
  q_56 :
  if(((ATgetType(t_56) == AT_LIST) && !(ATisEmpty(t_56))))
    {
      r_56 = ATgetFirst((ATermList) t_56);
      s_56 = (ATerm) ATgetNext((ATermList) t_56);
      {
        ATerm w_56 = NULL;
        t = not_null(s_56);
        {
          ATerm d_29;
          d_29 = t;
          {
            ATerm x_56 = NULL,z_56 = NULL,b_57 = NULL;
            ATerm e_29;
            e_29 = t;
            {
              ATerm y_56 = NULL;
              t = i_0(t);
              {
                y_56 = t;
                if(((x_56 != NULL) && (x_56 != y_56)))
                  _fail(y_56);
                else
                  x_56 = y_56;
              }
            }
            t = e_29;
            {
              ATerm a_57 = NULL;
              t = not_null(r_56);
              {
                t = g_0(t);
                {
                  a_57 = t;
                  if(((z_56 != NULL) && (z_56 != a_57)))
                    _fail(a_57);
                  else
                    z_56 = a_57;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_56)), not_null(z_56));
                {
                  b_57 = t;
                  if(((w_56 != NULL) && (w_56 != b_57)))
                    _fail(b_57);
                  else
                    w_56 = b_57;
                }
              }
            }
          }
          t = d_29;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(w_56);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_56) == AT_LIST) && ATisEmpty(t_56)))
        {
          {
            t = term_g_18;
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
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_147 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm m_57 = NULL,n_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym_Program_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      {
        ATerm q_57 = NULL,s_57 = NULL;
        ATerm r_57 = NULL;
        t = SSLgetAnnotations(not_null(m_57));
        {
          r_57 = t;
          if(((q_57 != NULL) && (q_57 != r_57)))
            _fail(r_57);
          else
            q_57 = r_57;
        }
        {
          t = not_null(n_57);
          {
            ATerm u_57 = NULL;
            t = k_108(t);
            {
              s_57 = t;
              {
                ATerm v_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_57)), not_null(q_57));
                {
                  v_57 = t;
                  if(((u_57 != NULL) && (u_57 != v_57)))
                    _fail(v_57);
                  else
                    u_57 = v_57;
                }
                t = not_null(u_57);
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
  ATerm e_58 = NULL;
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_58 = NULL;
      t = term_q_26;
      {
        t = get_config_0(t);
        {
          f_58 = t;
          if(((e_58 != NULL) && (e_58 != f_58)))
            _fail(f_58);
          else
            e_58 = f_58;
        }
      }
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm g_58 = NULL;
            g_58 = t;
            if(((e_58 != NULL) && (e_58 != g_58)))
              _fail(g_58);
            else
              e_58 = g_58;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = option_defined_1(t, r_4);
      }
    }
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = not_null(e_58);
        return(t);
      }
      t = short_description_1(t, u_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_4);
    {
      t = term_l_29;
      {
        t = echo_0(t);
        {
          t = term_s_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm h_58 = NULL;
                  ATerm i_58 = NULL;
                  i_58 = t;
                  if(((h_58 != NULL) && (h_58 != i_58)))
                    _fail(i_58);
                  else
                    h_58 = i_58;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_58)), term_t_29);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    ATerm j_58 = NULL;
                    ATerm k_58 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(e_58);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      k_58 = t;
                      if(((j_58 != NULL) && (j_58 != k_58)))
                        _fail(k_58);
                      else
                        j_58 = k_58;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), term_u_29);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_4);
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
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_108 (ATerm))
{
  ATerm u_58 = NULL,v_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Undefined_1))
    {
      v_58 = ATgetArgument(u_58, 0);
      {
        ATerm y_58 = NULL,a_59 = NULL;
        ATerm z_58 = NULL;
        t = SSLgetAnnotations(not_null(u_58));
        {
          z_58 = t;
          if(((y_58 != NULL) && (y_58 != z_58)))
            _fail(z_58);
          else
            y_58 = z_58;
        }
        {
          t = not_null(v_58);
          {
            ATerm c_59 = NULL;
            t = l_108(t);
            {
              a_59 = t;
              {
                ATerm d_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_59)), not_null(y_58));
                {
                  d_59 = t;
                  if(((c_59 != NULL) && (c_59 != d_59)))
                    _fail(d_59);
                  else
                    c_59 = d_59;
                }
                t = not_null(c_59);
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
ATerm fetch_1 (ATerm t, ATerm h_129 (ATerm))
{
  ATerm i_59 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_129, _id);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = Cons_2(t, _id, i_59);
      }
    return(t);
  }
  t = i_59(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_146 (ATerm))
{
  t = fetch_1(t, a_146);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  j_59 :
  if(((ATgetType(k_59) == AT_LIST) && ATisEmpty(k_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
        {
          l_59 = ATgetFirst((ATermList) k_59);
          m_59 = (ATerm) ATgetNext((ATermList) k_59);
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
  ATerm z_29;
  z_29 = t;
  {
    ATerm p_59 = NULL;
    ATerm s_59 = NULL;
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm q_59 = NULL;
          ATerm r_59 = NULL;
          r_59 = t;
          if(((q_59 != NULL) && (q_59 != r_59)))
            _fail(r_59);
          else
            q_59 = r_59;
          t = (ATerm) ATinsert(ATempty, not_null(q_59));
        }
      }
    {
      s_59 = t;
      if(((p_59 != NULL) && (p_59 != s_59)))
        _fail(s_59);
      else
        p_59 = s_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(p_59));
      t = printnl_0(t);
    }
  }
  t = z_29;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_q_26;
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
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_59 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym_Help_0))
    {
      ATerm b_60 = NULL,d_60 = NULL;
      ATerm e_30;
      e_30 = t;
      {
        ATerm c_60 = NULL;
        t = SSLgetAnnotations(not_null(z_59));
        {
          c_60 = t;
          if(((b_60 != NULL) && (b_60 != c_60)))
            _fail(c_60);
          else
            b_60 = c_60;
        }
      }
      t = e_30;
      {
        ATerm e_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_60));
        {
          e_60 = t;
          if(((d_60 != NULL) && (d_60 != e_60)))
            _fail(e_60);
          else
            d_60 = e_60;
        }
        t = not_null(d_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_121 (ATerm))
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_121(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm o_60 = NULL;
        o_60 = t;
        m_60 :
        if(!(match_string(o_60, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_o_30;
        t = set_config_0(t);
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = term_p_30;
        return(t);
      }
      t = Option_3(t, g_5, h_5, i_5);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm p_60 = NULL;
          p_60 = t;
          n_60 :
          if(!(match_string(p_60, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_o_30;
          {
            t = set_config_0(t);
            {
              t = term_r_30;
              t = set_config_0(t);
            }
          }
          t = term_s_30;
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_t_30;
          return(t);
        }
        t = Option_3(t, n_5, o_5, p_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  s_60 = t;
  r_60 :
  if(match_cons(s_60, sym__2))
    {
      t_60 = ATgetArgument(s_60, 0);
      u_60 = ATgetArgument(s_60, 1);
      t = SSL_table_get(not_null(t_60), not_null(u_60));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  b_61 = t;
  a_61 :
  if(match_cons(b_61, sym__3))
    {
      c_61 = ATgetArgument(b_61, 0);
      d_61 = ATgetArgument(b_61, 1);
      e_61 = ATgetArgument(b_61, 2);
      {
        ATerm v_30;
        v_30 = t;
        {
          ATerm i_61 = NULL;
          ATerm j_61 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_61), not_null(d_61));
          {
            ATerm w_30 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_31);
              }
            else
              {
                t = w_30;
                t = (ATerm) ATempty;
              }
            {
              j_61 = t;
              if(((i_61 != NULL) && (i_61 != j_61)))
                _fail(j_61);
              else
                i_61 = j_61;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_61), not_null(d_61), (ATerm) ATinsert(CheckATermList(not_null(i_61)), not_null(e_61)));
            t = table_put_0(t);
          }
        }
        t = v_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_147 (ATerm))
{
  ATerm n_61 = NULL;
  ATerm o_61 = NULL;
  t = term_g_18;
  {
    t = f_147(t);
    {
      o_61 = t;
      if(((n_61 != NULL) && (n_61 != o_61)))
        _fail(o_61);
      else
        n_61 = o_61;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_29, term_p_29, not_null(n_61));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t_61 :
  if(match_string(u_61, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(u_61) == AT_LIST) && !(ATisEmpty(u_61))))
        {
          v_61 = ATgetFirst((ATermList) u_61);
          w_61 = (ATerm) ATgetNext((ATermList) u_61);
          {
            ATerm z_61 = NULL;
            ATerm x_31;
            x_31 = t;
            {
              t = not_null(v_61);
              t = a_0(t);
            }
            t = x_31;
            {
              ATerm a_62 = NULL;
              t = term_g_18;
              {
                t = b_0(t);
                {
                  a_62 = t;
                  if(((z_61 != NULL) && (z_61 != a_62)))
                    _fail(a_62);
                  else
                    z_61 = a_62;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_61)), not_null(z_61));
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
  ATerm q_5 (ATerm t)
  {
    ATerm g_62 = NULL;
    g_62 = t;
    f_62 :
    if(!(match_string(g_62, "--help")))
      {
        if(!(match_string(g_62, "-h")))
          {
            if(!(match_string(g_62, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_y_31;
    {
      t = set_config_0(t);
      t = term_z_31;
    }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_a_32;
    return(t);
  }
  t = Option_3(t, q_5, b_6, c_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  k_62 :
  if(((ATgetType(l_62) == AT_LIST) && !(ATisEmpty(l_62))))
    {
      m_62 = ATgetFirst((ATermList) l_62);
      n_62 = (ATerm) ATgetNext((ATermList) l_62);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_62)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_62)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_99 (ATerm), ATerm t_99 (ATerm))
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  w_62 :
  if(((ATgetType(x_62) == AT_LIST) && !(ATisEmpty(x_62))))
    {
      y_62 = ATgetFirst((ATermList) x_62);
      z_62 = (ATerm) ATgetNext((ATermList) x_62);
      {
        ATerm d_63 = NULL,f_63 = NULL;
        ATerm e_63 = NULL;
        t = SSLgetAnnotations(not_null(x_62));
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
        {
          t = not_null(y_62);
          {
            ATerm h_63 = NULL;
            t = s_99(t);
            {
              f_63 = t;
              {
                t = not_null(z_62);
                {
                  ATerm l_63 = NULL;
                  t = t_99(t);
                  {
                    h_63 = t;
                    {
                      ATerm m_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_63)), not_null(f_63)), not_null(d_63));
                      {
                        m_63 = t;
                        if(((l_63 != NULL) && (l_63 != m_63)))
                          _fail(m_63);
                        else
                          l_63 = m_63;
                      }
                      t = not_null(l_63);
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
  ATerm x_63 = NULL;
  x_63 = t;
  w_63 :
  if(((ATgetType(x_63) == AT_LIST) && ATisEmpty(x_63)))
    {
      {
        ATerm z_63 = NULL,b_64 = NULL;
        ATerm i_32;
        i_32 = t;
        {
          ATerm a_64 = NULL;
          t = SSLgetAnnotations(not_null(x_63));
          {
            a_64 = t;
            if(((z_63 != NULL) && (z_63 != a_64)))
              _fail(a_64);
            else
              z_63 = a_64;
          }
        }
        t = i_32;
        {
          ATerm c_64 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_63));
          {
            c_64 = t;
            if(((b_64 != NULL) && (b_64 != c_64)))
              _fail(c_64);
            else
              b_64 = c_64;
          }
          t = not_null(b_64);
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
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym__2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_20, not_null(j_64), not_null(k_64));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_147 (ATerm))
{
  ATerm j_32;
  j_32 = t;
  {
    ATerm d_6 (ATerm t)
    {
      t = term_k_32;
      t = d_147(t);
      return(t);
    }
    t = try_1(t, d_6);
  }
  t = j_32;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm s_64 = NULL;
      ATerm l_32;
      l_32 = t;
      {
        ATerm q_64 = NULL;
        ATerm r_64 = NULL;
        r_64 = t;
        if(((q_64 != NULL) && (q_64 != r_64)))
          _fail(r_64);
        else
          q_64 = r_64;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(q_64));
          t = set_config_0(t);
        }
      }
      t = l_32;
      {
        ATerm t_64 = NULL;
        t_64 = t;
        if(((s_64 != NULL) && (s_64 != t_64)))
          _fail(t_64);
        else
          s_64 = t_64;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_64));
      }
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_32);
            }
          else
            {
              t = o_32;
              {
                t = d_147(t);
                t = Cons_2(t, _id, f_6);
              }
            }
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_6, f_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  ATerm q_32;
  q_32 = t;
  {
    ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
    i_65 = t;
    e_65 :
    if(match_cons(i_65, sym__3))
      {
        j_65 = ATgetArgument(i_65, 0);
        k_65 = ATgetArgument(i_65, 1);
        l_65 = ATgetArgument(i_65, 2);
        {
          if(((f_65 != NULL) && (f_65 != j_65)))
            _fail(j_65);
          else
            f_65 = j_65;
          {
            if(((g_65 != NULL) && (g_65 != k_65)))
              _fail(k_65);
            else
              g_65 = k_65;
            {
              if(((h_65 != NULL) && (h_65 != l_65)))
                _fail(l_65);
              else
                h_65 = l_65;
              t = SSL_table_put(not_null(f_65), not_null(g_65), not_null(h_65));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_147 (ATerm))
{
  ATerm o_65 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    t = term_u_32;
    t = table_put_0(t);
  }
  t = r_32;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_147(t);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm x_32 = t;
            int y_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(y_32);
              }
            else
              {
                t = x_32;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, g_6);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_33;
            b_33 = t;
            {
              ATerm c_33 = t;
              int f_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_28;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_33);
                }
              else
                {
                  t = c_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_33;
            {
              t = system_usage_0(t);
              {
                t = term_h_24;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm g_33 = t;
              int h_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_33;
                  k_33 = t;
                  {
                    t = term_j_30;
                    t = get_config_0(t);
                  }
                  t = k_33;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_24;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(h_33);
                }
              else
                {
                  t = g_33;
                  {
                    ATerm o_6 (ATerm t)
                    {
                      ATerm p_6 (ATerm t)
                      {
                        ATerm p_65 = NULL;
                        p_65 = t;
                        if(((o_65 != NULL) && (o_65 != p_65)))
                          _fail(p_65);
                        else
                          o_65 = p_65;
                        return(t);
                      }
                      t = Undefined_1(t, p_6);
                      return(t);
                    }
                    t = option_defined_1(t, o_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_65)), term_l_33));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_q_18;
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
      t = try_1(t, n_6);
      {
        ATerm m_33;
        m_33 = t;
        {
          t = term_m_29;
          t = table_destroy_0(t);
        }
        t = m_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm))
{
  t = parse_options_1(t, c_145);
  {
    t = store_options_0(t);
    {
      t = e_145(t);
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_145);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm w_33 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_145(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_34);
                }
              else
                {
                  t = w_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_144 (ATerm), ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_144(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_144);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, r_6, t_144, u_144, g_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm h_34;
      h_34 = t;
      {
        ATerm s_65 = NULL;
        ATerm t_65 = NULL;
        t = term_q_26;
        {
          t = get_config_0(t);
          {
            t_65 = t;
            if(((s_65 != NULL) && (s_65 != t_65)))
              _fail(t_65);
            else
              s_65 = t_65;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATempty, not_null(s_65)));
          t = printnl_0(t);
        }
      }
      t = h_34;
      return(t);
    }
    t = if_verbose2_1(t, n_7);
    return(t);
  }
  t = iowrap_4(t, l_144, m_144, n_144, h_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_144 (ATerm), ATerm k_144 (ATerm))
{
  t = iowrap_3(t, j_144, k_144, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_144 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    t = _2(t, _id, g_144);
    return(t);
  }
  t = iowrap_2(t, o_7, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm s_7 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, r_7, s_7);
    t = simplify0_0(t);
    return(t);
  }
  t = iowrap_1(t, q_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
