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
ATerm term_m_33;
ATerm term_a_32;
ATerm term_e_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_q_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_c_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Op_2, term_l_9, (ATerm) ATempty);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_s_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_16);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_r_19);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_r_19);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_d_28);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_r_19);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_r_19);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_r_19);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, (ATerm) ATempty);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm g_131 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_101 (ATerm), ATerm o_101 (ATerm));
ATerm PrimT_3 (ATerm, ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm));
ATerm Explode_2 (ATerm, ATerm g_101 (ATerm), ATerm h_101 (ATerm));
ATerm Op_2 (ATerm, ATerm c_101 (ATerm), ATerm d_101 (ATerm));
ATerm pat_td_1 (ATerm, ATerm i_150 (ATerm));
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm l_124 (ATerm));
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
ATerm downup_1 (ATerm, ATerm j_123 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_104 (ATerm));
ATerm CallT_3 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm));
ATerm unzip_1 (ATerm, ATerm l_131 (ATerm));
ATerm alltd_1 (ATerm, ATerm z_124 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm j_122 (ATerm));
ATerm downup2_2 (ATerm, ATerm m_123 (ATerm), ATerm n_123 (ATerm));
ATerm _2 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_129 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_142 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm b_141 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_144 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_140 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_136 (ATerm), ATerm p_136 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_134 (ATerm), ATerm a_135 (ATerm));
ATerm crush_2 (ATerm, ATerm s_138 (ATerm), ATerm t_138 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_142 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_145 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_147 (ATerm));
ATerm map_1 (ATerm, ATerm y_128 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_147 (ATerm));
ATerm Program_1 (ATerm, ATerm l_108 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_108 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_129 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_146 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_121 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_147 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_99 (ATerm), ATerm u_99 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_147 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_147 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm g_145 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm), ATerm v_144 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_144 (ATerm), ATerm l_144 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_144 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym_Cong_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      {
        ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL;
        ATerm k_6;
        k_6 = t;
        {
          ATerm k_4 = NULL;
          t = not_null(b_4);
          {
            ATerm n_4 = NULL;
            t = map_1(t, new_0);
            {
              k_4 = t;
              {
                if(((h_4 != NULL) && (h_4 != k_4)))
                  _fail(k_4);
                else
                  h_4 = k_4;
                {
                  t = not_null(h_4);
                  {
                    ATerm o_4 = NULL;
                    ATerm c_0 (ATerm t)
                    {
                      ATerm l_4 = NULL;
                      ATerm m_4 = NULL;
                      m_4 = t;
                      if(((l_4 != NULL) && (l_4 != m_4)))
                        _fail(m_4);
                      else
                        l_4 = m_4;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_4));
                      return(t);
                    }
                    t = map_1(t, c_0);
                    {
                      n_4 = t;
                      {
                        if(((e_4 != NULL) && (e_4 != n_4)))
                          _fail(n_4);
                        else
                          e_4 = n_4;
                        {
                          ATerm p_4 = NULL;
                          t = new_0(t);
                          {
                            o_4 = t;
                            {
                              if(((f_4 != NULL) && (f_4 != o_4)))
                                _fail(o_4);
                              else
                                f_4 = o_4;
                              {
                                t = not_null(b_4);
                                {
                                  ATerm s_4 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    p_4 = t;
                                    {
                                      if(((i_4 != NULL) && (i_4 != p_4)))
                                        _fail(p_4);
                                      else
                                        i_4 = p_4;
                                      {
                                        t = not_null(i_4);
                                        {
                                          ATerm t_4 = NULL,d_5 = NULL;
                                          ATerm e_0 (ATerm t)
                                          {
                                            ATerm q_4 = NULL;
                                            ATerm r_4 = NULL;
                                            r_4 = t;
                                            if(((q_4 != NULL) && (q_4 != r_4)))
                                              _fail(r_4);
                                            else
                                              q_4 = r_4;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_4));
                                            return(t);
                                          }
                                          t = map_1(t, e_0);
                                          {
                                            s_4 = t;
                                            {
                                              if(((g_4 != NULL) && (g_4 != s_4)))
                                                _fail(s_4);
                                              else
                                                g_4 = s_4;
                                              {
                                                ATerm u_4 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(i_4));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    u_4 = t;
                                                    if(((t_4 != NULL) && (t_4 != u_4)))
                                                      _fail(u_4);
                                                    else
                                                      t_4 = u_4;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(b_4));
                                                  {
                                                    ATerm f_0 (ATerm t)
                                                    {
                                                      ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
                                                      v_4 = t;
                                                      s_3 :
                                                      if(match_cons(v_4, sym__2))
                                                        {
                                                          w_4 = ATgetArgument(v_4, 0);
                                                          z_4 = ATgetArgument(v_4, 1);
                                                          t_3 :
                                                          if(match_cons(w_4, sym__2))
                                                            {
                                                              x_4 = ATgetArgument(w_4, 0);
                                                              y_4 = ATgetArgument(w_4, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_4))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_4)))));
                                                            }
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
                                                    t = zip_1(t, f_0);
                                                    {
                                                      d_5 = t;
                                                      if(((j_4 != NULL) && (j_4 != d_5)))
                                                        _fail(d_5);
                                                      else
                                                        j_4 = d_5;
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
        t = k_6;
        {
          ATerm m_6;
          m_6 = t;
          {
            ATerm f_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(i_4));
            {
              t = conc_0(t);
              {
                f_5 = t;
                if(((e_5 != NULL) && (e_5 != f_5)))
                  _fail(f_5);
                else
                  e_5 = f_5;
              }
            }
          }
          t = m_6;
          {
            ATerm q_6;
            q_6 = t;
            {
              ATerm h_5 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_4), not_null(e_4)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_4))));
              {
                t = Mapp2_0(t);
                {
                  h_5 = t;
                  if(((g_5 != NULL) && (g_5 != h_5)))
                    _fail(h_5);
                  else
                    g_5 = h_5;
                }
              }
            }
            t = q_6;
            {
              ATerm j_5 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(a_4), not_null(g_4)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_4))));
              {
                t = Bapp2_0(t);
                {
                  j_5 = t;
                  if(((i_5 != NULL) && (i_5 != j_5)))
                    _fail(j_5);
                  else
                    i_5 = j_5;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_5)), not_null(f_4)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_4)), not_null(i_5))));
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
ATerm Bapp2_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_Build_1))
    {
      p_6 = ATgetArgument(o_6, 0);
      {
        ATerm a_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
            ATerm v_6 = NULL;
            ATerm z_6 = NULL;
            t = new_0(t);
            {
              v_6 = t;
              {
                if(((t_6 != NULL) && (t_6 != v_6)))
                  _fail(v_6);
                else
                  t_6 = v_6;
                {
                  t = not_null(p_6);
                  {
                    ATerm h_0 (ATerm t)
                    {
                      ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
                      w_6 = t;
                      d_6 :
                      if(match_cons(w_6, sym_Anno_2))
                        {
                          x_6 = ATgetArgument(w_6, 0);
                          y_6 = ATgetArgument(w_6, 1);
                          {
                            if(((r_6 != NULL) && (r_6 != x_6)))
                              _fail(x_6);
                            else
                              r_6 = x_6;
                            {
                              if(((s_6 != NULL) && (s_6 != y_6)))
                                _fail(y_6);
                              else
                                s_6 = y_6;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_6));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, h_0);
                    {
                      z_6 = t;
                      if(((u_6 != NULL) && (u_6 != z_6)))
                        _fail(z_6);
                      else
                        u_6 = z_6;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_7, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_6)), not_null(r_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_6))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_6))));
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = a_7;
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
                  ATerm e_7 = NULL;
                  ATerm h_7 = NULL;
                  t = new_0(t);
                  {
                    e_7 = t;
                    {
                      if(((c_7 != NULL) && (c_7 != e_7)))
                        _fail(e_7);
                      else
                        c_7 = e_7;
                      {
                        t = not_null(p_6);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm f_7 = NULL,g_7 = NULL;
                            f_7 = t;
                            h_6 :
                            if(match_cons(f_7, sym_RootApp_1))
                              {
                                g_7 = ATgetArgument(f_7, 0);
                                {
                                  if(((b_7 != NULL) && (b_7 != g_7)))
                                    _fail(g_7);
                                  else
                                    b_7 = g_7;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_7));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, j_0);
                          {
                            h_7 = t;
                            if(((d_7 != NULL) && (d_7 != h_7)))
                              _fail(h_7);
                            else
                              d_7 = h_7;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_7))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_7))));
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  {
                    ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
                    ATerm n_7 = NULL;
                    ATerm r_7 = NULL;
                    t = new_0(t);
                    {
                      n_7 = t;
                      {
                        if(((l_7 != NULL) && (l_7 != n_7)))
                          _fail(n_7);
                        else
                          l_7 = n_7;
                        {
                          t = not_null(p_6);
                          {
                            ATerm l_0 (ATerm t)
                            {
                              ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                              o_7 = t;
                              l_6 :
                              if(match_cons(o_7, sym_App_2))
                                {
                                  p_7 = ATgetArgument(o_7, 0);
                                  q_7 = ATgetArgument(o_7, 1);
                                  {
                                    if(((j_7 != NULL) && (j_7 != p_7)))
                                      _fail(p_7);
                                    else
                                      j_7 = p_7;
                                    {
                                      if(((k_7 != NULL) && (k_7 != q_7)))
                                        _fail(q_7);
                                      else
                                        k_7 = q_7;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_7));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_0);
                            {
                              r_7 = t;
                              if(((m_7 != NULL) && (m_7 != r_7)))
                                _fail(r_7);
                              else
                                m_7 = r_7;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), not_null(k_7), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_7)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_7))));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym__2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), not_null(h_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  q_8 = t;
  n_8 :
  if(match_cons(q_8, sym__2))
    {
      r_8 = ATgetArgument(q_8, 0);
      u_8 = ATgetArgument(q_8, 1);
      o_8 :
      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
        {
          s_8 = ATgetFirst((ATermList) r_8);
          t_8 = (ATerm) ATgetNext((ATermList) r_8);
          p_8 :
          if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
            {
              v_8 = ATgetFirst((ATermList) u_8);
              w_8 = (ATerm) ATgetNext((ATermList) u_8);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_8), not_null(v_8)), (ATerm) ATmakeAppl(sym__2, not_null(t_8), not_null(w_8)));
            }
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
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  d_9 :
  if(match_cons(g_9, sym__2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      e_9 :
      if(((ATgetType(h_9) == AT_LIST) && ATisEmpty(h_9)))
        {
          f_9 :
          if(((ATgetType(i_9) == AT_LIST) && ATisEmpty(i_9)))
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
ATerm zip_1 (ATerm t, ATerm g_131 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_131);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  i_10 = t;
  b_10 :
  if(match_cons(i_10, sym_Call_2))
    {
      j_10 = ATgetArgument(i_10, 0);
      l_10 = ATgetArgument(i_10, 1);
      c_10 :
      if(match_cons(j_10, sym_SVar_1))
        {
          k_10 = ATgetArgument(j_10, 0);
          d_10 :
          if(match_string(k_10, "Anno_Cong__"))
            {
              e_10 :
              if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
                {
                  m_10 = ATgetFirst((ATermList) l_10);
                  p_10 = (ATerm) ATgetNext((ATermList) l_10);
                  f_10 :
                  if(match_cons(m_10, sym_Cong_2))
                    {
                      n_10 = ATgetArgument(m_10, 0);
                      o_10 = ATgetArgument(m_10, 1);
                      g_10 :
                      if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
                        {
                          q_10 = ATgetFirst((ATermList) p_10);
                          r_10 = (ATerm) ATgetNext((ATermList) p_10);
                          h_10 :
                          if(((ATgetType(r_10) == AT_LIST) && ATisEmpty(r_10)))
                            {
                              {
                                ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,z_11 = NULL,b_12 = NULL,d_12 = NULL;
                                ATerm v_7;
                                v_7 = t;
                                {
                                  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(o_10)), not_null(q_10));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      c_11 = t;
                                      x_9 :
                                      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
                                        {
                                          d_11 = ATgetFirst((ATermList) c_11);
                                          e_11 = (ATerm) ATgetNext((ATermList) c_11);
                                          {
                                            ATerm h_11 = NULL;
                                            if(((v_10 != NULL) && (v_10 != d_11)))
                                              _fail(d_11);
                                            else
                                              v_10 = d_11;
                                            {
                                              if(((z_10 != NULL) && (z_10 != e_11)))
                                                _fail(e_11);
                                              else
                                                z_10 = e_11;
                                              {
                                                ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
                                                ATerm o_0 (ATerm t)
                                                {
                                                  ATerm f_11 = NULL;
                                                  ATerm g_11 = NULL;
                                                  g_11 = t;
                                                  if(((f_11 != NULL) && (f_11 != g_11)))
                                                    _fail(g_11);
                                                  else
                                                    f_11 = g_11;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_11));
                                                  return(t);
                                                }
                                                t = map_1(t, o_0);
                                                {
                                                  h_11 = t;
                                                  {
                                                    if(((w_10 != NULL) && (w_10 != h_11)))
                                                      _fail(h_11);
                                                    else
                                                      w_10 = h_11;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(o_10)), not_null(q_10));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          i_11 = t;
                                                          w_9 :
                                                          if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
                                                            {
                                                              j_11 = ATgetFirst((ATermList) i_11);
                                                              k_11 = (ATerm) ATgetNext((ATermList) i_11);
                                                              {
                                                                ATerm n_11 = NULL;
                                                                if(((x_10 != NULL) && (x_10 != j_11)))
                                                                  _fail(j_11);
                                                                else
                                                                  x_10 = j_11;
                                                                {
                                                                  if(((a_11 != NULL) && (a_11 != k_11)))
                                                                    _fail(k_11);
                                                                  else
                                                                    a_11 = k_11;
                                                                  {
                                                                    ATerm o_11 = NULL,y_11 = NULL;
                                                                    ATerm q_0 (ATerm t)
                                                                    {
                                                                      ATerm l_11 = NULL;
                                                                      ATerm m_11 = NULL;
                                                                      m_11 = t;
                                                                      if(((l_11 != NULL) && (l_11 != m_11)))
                                                                        _fail(m_11);
                                                                      else
                                                                        l_11 = m_11;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_11));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, q_0);
                                                                    {
                                                                      n_11 = t;
                                                                      {
                                                                        if(((y_10 != NULL) && (y_10 != n_11)))
                                                                          _fail(n_11);
                                                                        else
                                                                          y_10 = n_11;
                                                                        {
                                                                          ATerm p_11 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), not_null(a_11));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              p_11 = t;
                                                                              if(((o_11 != NULL) && (o_11 != p_11)))
                                                                                _fail(p_11);
                                                                              else
                                                                                o_11 = p_11;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), (ATerm) ATinsert(CheckATermList(not_null(o_10)), not_null(q_10)));
                                                                            {
                                                                              ATerm r_0 (ATerm t)
                                                                              {
                                                                                ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
                                                                                q_11 = t;
                                                                                t_9 :
                                                                                if(match_cons(q_11, sym__2))
                                                                                  {
                                                                                    r_11 = ATgetArgument(q_11, 0);
                                                                                    u_11 = ATgetArgument(q_11, 1);
                                                                                    u_9 :
                                                                                    if(match_cons(r_11, sym__2))
                                                                                      {
                                                                                        s_11 = ATgetArgument(r_11, 0);
                                                                                        t_11 = ATgetArgument(r_11, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_11))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11)))));
                                                                                      }
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
                                                                              t = zip_1(t, r_0);
                                                                              {
                                                                                y_11 = t;
                                                                                if(((b_11 != NULL) && (b_11 != y_11)))
                                                                                  _fail(y_11);
                                                                                else
                                                                                  b_11 = y_11;
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
                                }
                                t = v_7;
                                {
                                  ATerm w_7;
                                  w_7 = t;
                                  {
                                    ATerm a_12 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), not_null(a_11));
                                    {
                                      t = conc_0(t);
                                      {
                                        a_12 = t;
                                        if(((z_11 != NULL) && (z_11 != a_12)))
                                          _fail(a_12);
                                        else
                                          z_11 = a_12;
                                      }
                                    }
                                  }
                                  t = w_7;
                                  {
                                    ATerm x_7;
                                    x_7 = t;
                                    {
                                      ATerm c_12 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_10), not_null(w_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_10))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          c_12 = t;
                                          if(((b_12 != NULL) && (b_12 != c_12)))
                                            _fail(c_12);
                                          else
                                            b_12 = c_12;
                                        }
                                      }
                                    }
                                    t = x_7;
                                    {
                                      ATerm e_12 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(n_10), not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_10))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          e_12 = t;
                                          if(((d_12 != NULL) && (d_12 != e_12)))
                                            _fail(e_12);
                                          else
                                            d_12 = e_12;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(z_11)), not_null(x_10)), not_null(v_10)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_11)), not_null(d_12))));
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
                    }
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
ATerm As_2 (ATerm t, ATerm n_101 (ATerm), ATerm o_101 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_As_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(y_12));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(z_12);
          {
            ATerm i_13 = NULL;
            t = n_101(t);
            {
              g_13 = t;
              {
                t = not_null(a_13);
                {
                  ATerm k_13 = NULL;
                  t = o_101(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_13), not_null(i_13)), not_null(e_13));
                      {
                        l_13 = t;
                        if(((k_13 != NULL) && (k_13 != l_13)))
                          _fail(l_13);
                        else
                          k_13 = l_13;
                      }
                      t = not_null(k_13);
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
ATerm PrimT_3 (ATerm t, ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm))
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym_PrimT_3))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      b_14 = ATgetArgument(y_13, 2);
      {
        ATerm g_14 = NULL,i_14 = NULL;
        ATerm h_14 = NULL;
        t = SSLgetAnnotations(not_null(y_13));
        {
          h_14 = t;
          if(((g_14 != NULL) && (g_14 != h_14)))
            _fail(h_14);
          else
            g_14 = h_14;
        }
        {
          t = not_null(z_13);
          {
            ATerm k_14 = NULL;
            t = m_105(t);
            {
              i_14 = t;
              {
                t = not_null(a_14);
                {
                  ATerm m_14 = NULL;
                  t = n_105(t);
                  {
                    k_14 = t;
                    {
                      t = not_null(b_14);
                      {
                        ATerm o_14 = NULL;
                        t = o_105(t);
                        {
                          m_14 = t;
                          {
                            ATerm p_14 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(i_14), not_null(k_14), not_null(m_14)), not_null(g_14));
                            {
                              p_14 = t;
                              if(((o_14 != NULL) && (o_14 != p_14)))
                                _fail(p_14);
                              else
                                o_14 = p_14;
                            }
                            t = not_null(o_14);
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
ATerm Explode_2 (ATerm t, ATerm g_101 (ATerm), ATerm h_101 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_Explode_2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        ATerm i_15 = NULL,k_15 = NULL;
        ATerm j_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
        {
          t = not_null(d_15);
          {
            ATerm m_15 = NULL;
            t = g_101(t);
            {
              k_15 = t;
              {
                t = not_null(e_15);
                {
                  ATerm o_15 = NULL;
                  t = h_101(t);
                  {
                    m_15 = t;
                    {
                      ATerm p_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(k_15), not_null(m_15)), not_null(i_15));
                      {
                        p_15 = t;
                        if(((o_15 != NULL) && (o_15 != p_15)))
                          _fail(p_15);
                        else
                          o_15 = p_15;
                      }
                      t = not_null(o_15);
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
ATerm Op_2 (ATerm t, ATerm c_101 (ATerm), ATerm d_101 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(match_cons(b_16, sym_Op_2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      {
        ATerm h_16 = NULL,j_16 = NULL;
        ATerm i_16 = NULL;
        t = SSLgetAnnotations(not_null(b_16));
        {
          i_16 = t;
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
        }
        {
          t = not_null(c_16);
          {
            ATerm l_16 = NULL;
            t = c_101(t);
            {
              j_16 = t;
              {
                t = not_null(d_16);
                {
                  ATerm n_16 = NULL;
                  t = d_101(t);
                  {
                    l_16 = t;
                    {
                      ATerm o_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_16), not_null(l_16)), not_null(h_16));
                      {
                        o_16 = t;
                        if(((n_16 != NULL) && (n_16 != o_16)))
                          _fail(o_16);
                        else
                          n_16 = o_16;
                      }
                      t = not_null(n_16);
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
ATerm pat_td_1 (ATerm t, ATerm i_150 (ATerm))
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_150(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = pat_td_1(t, i_150);
                return(t);
              }
              t = fetch_1(t, t_0);
              return(t);
            }
            t = Op_2(t, _id, s_0);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = pat_td_1(t, i_150);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_0);
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  {
                    ATerm e_8 = t;
                    int j_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_0 (ATerm t)
                        {
                          t = pat_td_1(t, i_150);
                          return(t);
                        }
                        t = Explode_2(t, v_0, _id);
                        ;
                        LocalPopChoice(j_8);
                      }
                    else
                      {
                        t = e_8;
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_0 (ATerm t)
                              {
                                ATerm x_0 (ATerm t)
                                {
                                  t = pat_td_1(t, i_150);
                                  return(t);
                                }
                                t = fetch_1(t, x_0);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, w_0);
                              ;
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm y_0 (ATerm t)
                                {
                                  t = pat_td_1(t, i_150);
                                  return(t);
                                }
                                t = As_2(t, _id, y_0);
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym_Match_1))
    {
      l_17 = ATgetArgument(k_17, 0);
      {
        ATerm m_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
            ATerm r_17 = NULL;
            ATerm v_17 = NULL;
            t = new_0(t);
            {
              r_17 = t;
              {
                if(((p_17 != NULL) && (p_17 != r_17)))
                  _fail(r_17);
                else
                  p_17 = r_17;
                {
                  t = not_null(l_17);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
                      s_17 = t;
                      z_16 :
                      if(match_cons(s_17, sym_Anno_2))
                        {
                          t_17 = ATgetArgument(s_17, 0);
                          u_17 = ATgetArgument(s_17, 1);
                          {
                            if(((n_17 != NULL) && (n_17 != t_17)))
                              _fail(t_17);
                            else
                              n_17 = t_17;
                            {
                              if(((o_17 != NULL) && (o_17 != u_17)))
                                _fail(u_17);
                              else
                                o_17 = u_17;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_17)), not_null(n_17));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, z_0);
                    {
                      v_17 = t;
                      if(((q_17 != NULL) && (q_17 != v_17)))
                        _fail(v_17);
                      else
                        q_17 = v_17;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_17)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_8, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_17)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_17))))));
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = m_8;
            {
              ATerm z_8 = t;
              int a_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
                  ATerm a_18 = NULL;
                  ATerm d_18 = NULL;
                  t = new_0(t);
                  {
                    a_18 = t;
                    {
                      if(((y_17 != NULL) && (y_17 != a_18)))
                        _fail(a_18);
                      else
                        y_17 = a_18;
                      {
                        t = not_null(l_17);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_18 = NULL,c_18 = NULL;
                            b_18 = t;
                            d_17 :
                            if(match_cons(b_18, sym_RootApp_1))
                              {
                                c_18 = ATgetArgument(b_18, 0);
                                {
                                  if(((x_17 != NULL) && (x_17 != c_18)))
                                    _fail(c_18);
                                  else
                                    x_17 = c_18;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_17));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, a_1);
                          {
                            d_18 = t;
                            if(((z_17 != NULL) && (z_17 != d_18)))
                              _fail(d_18);
                            else
                              z_17 = d_18;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_17))), not_null(x_17))));
                  ;
                  LocalPopChoice(a_9);
                }
              else
                {
                  t = z_8;
                  {
                    ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
                    ATerm j_18 = NULL;
                    ATerm n_18 = NULL;
                    t = new_0(t);
                    {
                      j_18 = t;
                      {
                        if(((h_18 != NULL) && (h_18 != j_18)))
                          _fail(j_18);
                        else
                          h_18 = j_18;
                        {
                          t = not_null(l_17);
                          {
                            ATerm b_1 (ATerm t)
                            {
                              ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
                              k_18 = t;
                              h_17 :
                              if(match_cons(k_18, sym_App_2))
                                {
                                  l_18 = ATgetArgument(k_18, 0);
                                  m_18 = ATgetArgument(k_18, 1);
                                  {
                                    if(((g_18 != NULL) && (g_18 != l_18)))
                                      _fail(l_18);
                                    else
                                      g_18 = l_18;
                                    {
                                      if(((f_18 != NULL) && (f_18 != m_18)))
                                        _fail(m_18);
                                      else
                                        f_18 = m_18;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_18));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, b_1);
                            {
                              n_18 = t;
                              if(((i_18 != NULL) && (i_18 != n_18)))
                                _fail(n_18);
                              else
                                i_18 = n_18;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_18)), not_null(g_18)))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Cong_2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      {
        ATerm l_19 = NULL;
        ATerm p_19 = NULL;
        t = not_null(i_19);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm m_19 = NULL,n_19 = NULL;
            n_19 = t;
            d_19 :
            if(match_cons(n_19, sym_Match_1))
              {
                m_19 = ATgetArgument(n_19, 0);
                t = not_null(m_19);
              }
            else
              {
                if(match_cons(n_19, sym_Id_0))
                  {
                    t = term_b_9;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, c_1);
          {
            p_19 = t;
            if(((l_19 != NULL) && (l_19 != p_19)))
              _fail(p_19);
            else
              l_19 = p_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_19), not_null(l_19)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm l_124 (ATerm))
{
  ATerm u_19 (ATerm t)
  {
    ATerm c_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_124(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = c_9;
        t = _one(t, u_19);
      }
    return(t);
  }
  t = u_19(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  l_20 = t;
  b_20 :
  if(match_cons(l_20, sym_Let_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      t_20 = ATgetArgument(l_20, 1);
      c_20 :
      if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
        {
          n_20 = ATgetFirst((ATermList) m_20);
          s_20 = (ATerm) ATgetNext((ATermList) m_20);
          d_20 :
          if(match_cons(n_20, sym_SDefT_4))
            {
              o_20 = ATgetArgument(n_20, 0);
              p_20 = ATgetArgument(n_20, 1);
              q_20 = ATgetArgument(n_20, 2);
              r_20 = ATgetArgument(n_20, 3);
              e_20 :
              if(((ATgetType(p_20) == AT_LIST) && ATisEmpty(p_20)))
                {
                  f_20 :
                  if(((ATgetType(q_20) == AT_LIST) && ATisEmpty(q_20)))
                    {
                      g_20 :
                      if(((ATgetType(s_20) == AT_LIST) && ATisEmpty(s_20)))
                        {
                          h_20 :
                          if(match_cons(t_20, sym_CallT_3))
                            {
                              u_20 = ATgetArgument(t_20, 0);
                              w_20 = ATgetArgument(t_20, 1);
                              x_20 = ATgetArgument(t_20, 2);
                              i_20 :
                              if(match_cons(u_20, sym_SVar_1))
                                {
                                  v_20 = ATgetArgument(u_20, 0);
                                  j_20 :
                                  if(((ATgetType(w_20) == AT_LIST) && ATisEmpty(w_20)))
                                    {
                                      k_20 :
                                      if(((ATgetType(x_20) == AT_LIST) && ATisEmpty(x_20)))
                                        {
                                          {
                                            if(((o_20 != NULL) && (o_20 != v_20)))
                                              _fail(v_20);
                                            else
                                              o_20 = v_20;
                                            {
                                              t = not_null(r_20);
                                              {
                                                ATerm k_9 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_1 (ATerm t)
                                                    {
                                                      ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
                                                      a_21 = t;
                                                      x_19 :
                                                      if(match_cons(a_21, sym_CallT_3))
                                                        {
                                                          b_21 = ATgetArgument(a_21, 0);
                                                          d_21 = ATgetArgument(a_21, 1);
                                                          e_21 = ATgetArgument(a_21, 2);
                                                          y_19 :
                                                          if(match_cons(b_21, sym_SVar_1))
                                                            {
                                                              c_21 = ATgetArgument(b_21, 0);
                                                              z_19 :
                                                              if(((ATgetType(d_21) == AT_LIST) && ATisEmpty(d_21)))
                                                                {
                                                                  a_20 :
                                                                  if(((ATgetType(e_21) == AT_LIST) && ATisEmpty(e_21)))
                                                                    {
                                                                      if(((o_20 != NULL) && (o_20 != c_21)))
                                                                        _fail(c_21);
                                                                      else
                                                                        o_20 = c_21;
                                                                    }
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
                                                    t = oncetd_1(t, d_1);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = k_9;
                                                  }
                                              }
                                              t = not_null(r_20);
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  i_21 :
  if(match_cons(k_21, sym_Let_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      j_21 :
      if(((ATgetType(l_21) == AT_LIST) && ATisEmpty(l_21)))
        {
          t = not_null(m_21);
        }
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
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  q_21 :
  if(match_cons(s_21, sym_Scope_2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      r_21 :
      if(((ATgetType(t_21) == AT_LIST) && ATisEmpty(t_21)))
        {
          t = not_null(u_21);
        }
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  d_22 :
  if(match_cons(q_22, sym_Where_1))
    {
      r_22 = ATgetArgument(q_22, 0);
      e_22 :
      if(match_cons(r_22, sym_Seq_2))
        {
          p_22 = ATgetArgument(r_22, 0);
          l_22 = ATgetArgument(r_22, 1);
          f_22 :
          if(match_cons(p_22, sym_Where_1))
            {
              k_22 = ATgetArgument(p_22, 0);
              g_22 :
              if(match_cons(l_22, sym_Seq_2))
                {
                  m_22 = ATgetArgument(l_22, 0);
                  o_22 = ATgetArgument(l_22, 1);
                  h_22 :
                  if(match_cons(m_22, sym_Build_1))
                    {
                      n_22 = ATgetArgument(m_22, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_22)), not_null(o_22))));
                    }
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
          if(match_cons(r_22, sym_Where_1))
            {
              p_22 = ATgetArgument(r_22, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_22));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(q_22, sym_Test_1))
        {
          r_22 = ATgetArgument(q_22, 0);
          i_22 :
          if(match_cons(r_22, sym_Test_1))
            {
              p_22 = ATgetArgument(r_22, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_22));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_22, sym_Not_1))
            {
              r_22 = ATgetArgument(q_22, 0);
              j_22 :
              if(match_cons(r_22, sym_Not_1))
                {
                  p_22 = ATgetArgument(r_22, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_22));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_22, sym_LChoice_2))
                {
                  r_22 = ATgetArgument(q_22, 0);
                  s_22 = ATgetArgument(q_22, 1);
                  {
                    if(((r_22 != NULL) && (r_22 != s_22)))
                      _fail(s_22);
                    else
                      r_22 = s_22;
                    t = not_null(r_22);
                  }
                }
              else
                {
                  if(match_cons(q_22, sym_Choice_2))
                    {
                      r_22 = ATgetArgument(q_22, 0);
                      s_22 = ATgetArgument(q_22, 1);
                      {
                        if(((r_22 != NULL) && (r_22 != s_22)))
                          _fail(s_22);
                        else
                          r_22 = s_22;
                        t = not_null(r_22);
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
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  k_23 :
  if(match_cons(o_23, sym_LChoice_2))
    {
      p_23 = ATgetArgument(o_23, 0);
      s_23 = ATgetArgument(o_23, 1);
      l_23 :
      if(match_cons(p_23, sym_LChoice_2))
        {
          q_23 = ATgetArgument(p_23, 0);
          r_23 = ATgetArgument(p_23, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_23), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_23), not_null(s_23)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(o_23, sym_Seq_2))
        {
          p_23 = ATgetArgument(o_23, 0);
          s_23 = ATgetArgument(o_23, 1);
          m_23 :
          if(match_cons(p_23, sym_Seq_2))
            {
              q_23 = ATgetArgument(p_23, 0);
              r_23 = ATgetArgument(p_23, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_23), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_23), not_null(s_23)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_23, sym_Choice_2))
            {
              p_23 = ATgetArgument(o_23, 0);
              s_23 = ATgetArgument(o_23, 1);
              n_23 :
              if(match_cons(p_23, sym_Choice_2))
                {
                  q_23 = ATgetArgument(p_23, 0);
                  r_23 = ATgetArgument(p_23, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_23), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_23), not_null(s_23)));
                }
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
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_DefaultVarDec_1))
    {
      i_24 = ATgetArgument(h_24, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_24), term_n_9);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_DefaultVarDec_1))
    {
      o_24 = ATgetArgument(n_24, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_24), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_9), term_n_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, p_0, _id);
      {
        ATerm e_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            t = map1_1(t, p_0);
            return(t);
          }
          t = try_1(t, f_1);
          return(t);
        }
        t = Cons_2(t, _id, e_1);
      }
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm g_1 (ATerm t)
        {
          t = map1_1(t, p_0);
          return(t);
        }
        t = Cons_2(t, _id, g_1);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  m_25 :
  if(match_cons(u_25, sym_Lets_2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_25), not_null(w_25));
    }
  else
    {
      if(match_cons(u_25, sym_LChoices_1))
        {
          v_25 = ATgetArgument(u_25, 0);
          n_25 :
          if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
            {
              q_25 = ATgetFirst((ATermList) v_25);
              r_25 = (ATerm) ATgetNext((ATermList) v_25);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_25), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_25)));
            }
          else
            {
              if(((ATgetType(v_25) == AT_LIST) && ATisEmpty(v_25)))
                {
                  t = term_q_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(u_25, sym_Choices_1))
            {
              v_25 = ATgetArgument(u_25, 0);
              o_25 :
              if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
                {
                  q_25 = ATgetFirst((ATermList) v_25);
                  r_25 = (ATerm) ATgetNext((ATermList) v_25);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_25), (ATerm) ATmakeAppl(sym_Choices_1, not_null(r_25)));
                }
              else
                {
                  if(((ATgetType(v_25) == AT_LIST) && ATisEmpty(v_25)))
                    {
                      t = term_q_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(u_25, sym_Seqs_1))
                {
                  v_25 = ATgetArgument(u_25, 0);
                  p_25 :
                  if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
                    {
                      q_25 = ATgetFirst((ATermList) v_25);
                      r_25 = (ATerm) ATgetNext((ATermList) v_25);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_25), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_25)));
                    }
                  else
                    {
                      if(((ATgetType(v_25) == AT_LIST) && ATisEmpty(v_25)))
                        {
                          t = term_r_9;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(u_25, sym_RDefT_4))
                    {
                      v_25 = ATgetArgument(u_25, 0);
                      w_25 = ATgetArgument(u_25, 1);
                      t_25 = ATgetArgument(u_25, 2);
                      s_25 = ATgetArgument(u_25, 3);
                      {
                        ATerm j_26 = NULL,k_26 = NULL;
                        ATerm l_26 = NULL;
                        t = not_null(w_25);
                        {
                          ATerm m_26 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            l_26 = t;
                            {
                              if(((j_26 != NULL) && (j_26 != l_26)))
                                _fail(l_26);
                              else
                                j_26 = l_26;
                              {
                                t = not_null(t_25);
                                {
                                  ATerm h_1 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, h_1);
                                  {
                                    m_26 = t;
                                    if(((k_26 != NULL) && (k_26 != m_26)))
                                      _fail(m_26);
                                    else
                                      k_26 = m_26;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(v_25), not_null(j_26), not_null(k_26), not_null(s_25));
                      }
                    }
                  else
                    {
                      if(match_cons(u_25, sym_SDefT_4))
                        {
                          v_25 = ATgetArgument(u_25, 0);
                          w_25 = ATgetArgument(u_25, 1);
                          t_25 = ATgetArgument(u_25, 2);
                          s_25 = ATgetArgument(u_25, 3);
                          {
                            ATerm s_9 = t;
                            int v_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_26 = NULL,s_26 = NULL;
                                ATerm t_26 = NULL;
                                t = not_null(t_25);
                                {
                                  ATerm u_26 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    t_26 = t;
                                    {
                                      if(((r_26 != NULL) && (r_26 != t_26)))
                                        _fail(t_26);
                                      else
                                        r_26 = t_26;
                                      {
                                        t = not_null(w_25);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            u_26 = t;
                                            if(((s_26 != NULL) && (s_26 != u_26)))
                                              _fail(u_26);
                                            else
                                              s_26 = u_26;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_25), not_null(s_26), not_null(r_26), not_null(s_25));
                                ;
                                LocalPopChoice(v_9);
                              }
                            else
                              {
                                t = s_9;
                                {
                                  ATerm z_26 = NULL,a_27 = NULL;
                                  ATerm b_27 = NULL;
                                  t = not_null(w_25);
                                  {
                                    ATerm c_27 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      b_27 = t;
                                      {
                                        if(((z_26 != NULL) && (z_26 != b_27)))
                                          _fail(b_27);
                                        else
                                          z_26 = b_27;
                                        {
                                          t = not_null(t_25);
                                          {
                                            ATerm j_1 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, j_1);
                                            {
                                              c_27 = t;
                                              if(((a_27 != NULL) && (a_27 != c_27)))
                                                _fail(c_27);
                                              else
                                                a_27 = c_27;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_25), not_null(z_26), not_null(a_27), not_null(s_25));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(u_25, sym_InfixApp_3))
                            {
                              v_25 = ATgetArgument(u_25, 0);
                              w_25 = ATgetArgument(u_25, 1);
                              t_25 = ATgetArgument(u_25, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_25), (ATerm) ATmakeAppl(sym_Op_2, term_y_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_25)), not_null(v_25))));
                            }
                          else
                            {
                              if(match_cons(u_25, sym_BAM_3))
                                {
                                  v_25 = ATgetArgument(u_25, 0);
                                  w_25 = ATgetArgument(u_25, 1);
                                  t_25 = ATgetArgument(u_25, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(t_25))), not_null(v_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_25))));
                                }
                              else
                                {
                                  if(match_cons(u_25, sym_AM_2))
                                    {
                                      v_25 = ATgetArgument(u_25, 0);
                                      w_25 = ATgetArgument(u_25, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_25), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_25)));
                                    }
                                  else
                                    {
                                      if(match_cons(u_25, sym_MA_2))
                                        {
                                          v_25 = ATgetArgument(u_25, 0);
                                          w_25 = ATgetArgument(u_25, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), not_null(w_25));
                                        }
                                      else
                                        {
                                          if(match_cons(u_25, sym_BA_2))
                                            {
                                              v_25 = ATgetArgument(u_25, 0);
                                              w_25 = ATgetArgument(u_25, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_25)), not_null(v_25));
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
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  n_28 = t;
  l_28 :
  if(match_cons(n_28, sym_GuardedLChoice_3))
    {
      o_28 = ATgetArgument(n_28, 0);
      p_28 = ATgetArgument(n_28, 1);
      q_28 = ATgetArgument(n_28, 2);
      m_28 :
      if(match_cons(q_28, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_28), not_null(p_28));
        }
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
  ATerm x_28 = NULL,y_28 = NULL;
  x_28 = t;
  v_28 :
  if(match_cons(x_28, sym_Where_1))
    {
      y_28 = ATgetArgument(x_28, 0);
      w_28 :
      if(match_cons(y_28, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  b_29 :
  if(match_cons(d_29, sym_LChoice_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      c_29 :
      if(match_cons(f_29, sym_Fail_0))
        {
          t = not_null(e_29);
        }
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
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  j_29 :
  if(match_cons(l_29, sym_LChoice_2))
    {
      m_29 = ATgetArgument(l_29, 0);
      n_29 = ATgetArgument(l_29, 1);
      k_29 :
      if(match_cons(m_29, sym_Fail_0))
        {
          t = not_null(n_29);
        }
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
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t_29 = t;
  r_29 :
  if(match_cons(t_29, sym_Choice_2))
    {
      u_29 = ATgetArgument(t_29, 0);
      v_29 = ATgetArgument(t_29, 1);
      s_29 :
      if(match_cons(v_29, sym_Fail_0))
        {
          t = not_null(u_29);
        }
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
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  z_29 :
  if(match_cons(b_30, sym_Choice_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      a_30 :
      if(match_cons(c_30, sym_Fail_0))
        {
          t = not_null(d_30);
        }
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
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_Cong_2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      {
        t = not_null(l_30);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm o_30 = NULL;
            o_30 = t;
            h_30 :
            if(!(match_cons(o_30, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, k_1);
        }
        t = term_q_9;
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
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  r_30 :
  if(match_cons(t_30, sym_Path_2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      s_30 :
      if(match_cons(v_30, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm b_31 = NULL,c_31 = NULL;
  b_31 = t;
  z_30 :
  if(match_cons(b_31, sym_One_1))
    {
      c_31 = ATgetArgument(b_31, 0);
      a_31 :
      if(match_cons(c_31, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm h_31 = NULL,i_31 = NULL;
  h_31 = t;
  f_31 :
  if(match_cons(h_31, sym_Some_1))
    {
      i_31 = ATgetArgument(h_31, 0);
      g_31 :
      if(match_cons(i_31, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  l_31 :
  if(match_cons(n_31, sym_Rec_2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      m_31 :
      if(match_cons(p_31, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  t_31 :
  if(match_cons(v_31, sym_Scope_2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      u_31 :
      if(match_cons(x_31, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  b_32 :
  if(match_cons(d_32, sym_Seq_2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      c_32 :
      if(match_cons(e_32, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  j_32 :
  if(match_cons(l_32, sym_Not_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      k_32 :
      if(match_cons(m_32, sym_Fail_0))
        {
          t = term_r_9;
        }
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
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  p_32 :
  if(match_cons(r_32, sym_Test_1))
    {
      s_32 = ATgetArgument(r_32, 0);
      q_32 :
      if(match_cons(s_32, sym_Fail_0))
        {
          t = term_q_9;
        }
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
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            {
              ATerm u_10 = t;
              int v_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(v_11);
                }
              else
                {
                  t = u_10;
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
                          ATerm f_12 = t;
                          int g_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
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
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(i_12);
                                  }
                                else
                                  {
                                    t = h_12;
                                    {
                                      ATerm j_12 = t;
                                      int k_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(k_12);
                                        }
                                      else
                                        {
                                          t = j_12;
                                          {
                                            ATerm l_12 = t;
                                            int m_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(m_12);
                                              }
                                            else
                                              {
                                                t = l_12;
                                                {
                                                  ATerm n_12 = t;
                                                  int o_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(o_12);
                                                    }
                                                  else
                                                    {
                                                      t = n_12;
                                                      {
                                                        ATerm p_12 = t;
                                                        int q_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(q_12);
                                                          }
                                                        else
                                                          {
                                                            t = p_12;
                                                            {
                                                              ATerm r_12 = t;
                                                              int s_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_12);
                                                                }
                                                              else
                                                                {
                                                                  t = r_12;
                                                                  {
                                                                    ATerm t_12 = t;
                                                                    int u_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(u_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_12;
                                                                        {
                                                                          ATerm v_12 = t;
                                                                          int w_12 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(w_12);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_12;
                                                                              {
                                                                                ATerm b_13 = t;
                                                                                int c_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(c_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_13;
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
  ATerm x_32 = NULL,y_32 = NULL;
  x_32 = t;
  v_32 :
  if(match_cons(x_32, sym_Match_1))
    {
      y_32 = ATgetArgument(x_32, 0);
      w_32 :
      if(match_cons(y_32, sym_Wld_0))
        {
          t = term_r_9;
        }
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
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  b_33 :
  if(match_cons(d_33, sym_Where_1))
    {
      e_33 = ATgetArgument(d_33, 0);
      c_33 :
      if(match_cons(e_33, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm j_33 = NULL,k_33 = NULL;
  j_33 = t;
  h_33 :
  if(match_cons(j_33, sym_All_1))
    {
      k_33 = ATgetArgument(j_33, 0);
      i_33 :
      if(match_cons(k_33, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  n_33 :
  if(match_cons(p_33, sym_Rec_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      o_33 :
      if(match_cons(r_33, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  v_33 :
  if(match_cons(x_33, sym_Scope_2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      w_33 :
      if(match_cons(z_33, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  d_34 :
  if(match_cons(f_34, sym_LChoice_2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      e_34 :
      if(match_cons(g_34, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  l_34 :
  if(match_cons(n_34, sym_Seq_2))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      m_34 :
      if(match_cons(p_34, sym_Id_0))
        {
          t = not_null(o_34);
        }
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
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t_34 :
  if(match_cons(v_34, sym_Seq_2))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      u_34 :
      if(match_cons(w_34, sym_Id_0))
        {
          t = not_null(x_34);
        }
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
  ATerm d_35 = NULL,e_35 = NULL;
  d_35 = t;
  b_35 :
  if(match_cons(d_35, sym_Not_1))
    {
      e_35 = ATgetArgument(d_35, 0);
      c_35 :
      if(match_cons(e_35, sym_Id_0))
        {
          t = term_q_9;
        }
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
  ATerm j_35 = NULL,k_35 = NULL;
  j_35 = t;
  h_35 :
  if(match_cons(j_35, sym_Test_1))
    {
      k_35 = ATgetArgument(j_35, 0);
      i_35 :
      if(match_cons(k_35, sym_Id_0))
        {
          t = term_r_9;
        }
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
  ATerm d_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = d_13;
      {
        ATerm j_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = j_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
                  {
                    ATerm p_13 = t;
                    int q_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(q_13);
                      }
                    else
                      {
                        t = p_13;
                        {
                          ATerm r_13 = t;
                          int s_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
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
                                    t = I8_0(t);
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
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(w_13);
                                        }
                                      else
                                        {
                                          t = v_13;
                                          {
                                            ATerm c_14 = t;
                                            int d_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(d_14);
                                              }
                                            else
                                              {
                                                t = c_14;
                                                {
                                                  ATerm e_14 = t;
                                                  int f_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(f_14);
                                                    }
                                                  else
                                                    {
                                                      t = e_14;
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
  ATerm j_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = j_14;
      {
        ATerm n_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = n_14;
            {
              ATerm r_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = AssociateR_0(t);
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
                              t = Idempotency_0(t);
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
                                    t = EmptyScope_0(t);
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
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(a_15);
                                        }
                                      else
                                        {
                                          t = z_14;
                                          {
                                            ATerm f_15 = t;
                                            int g_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(g_15);
                                              }
                                            else
                                              {
                                                t = f_15;
                                                {
                                                  ATerm h_15 = t;
                                                  int l_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = MatchingCongruence_0(t);
                                                      ;
                                                      LocalPopChoice(l_15);
                                                    }
                                                  else
                                                    {
                                                      t = h_15;
                                                      {
                                                        ATerm n_15 = t;
                                                        int q_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = TransformingAnnoCongruence_0(t);
                                                            ;
                                                            LocalPopChoice(q_15);
                                                          }
                                                        else
                                                          {
                                                            t = n_15;
                                                            t = TransformingCongruence_0(t);
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
ATerm downup_1 (ATerm t, ATerm j_123 (ATerm))
{
  t = j_123(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = downup_1(t, j_123);
      return(t);
    }
    t = _all(t, l_1);
    t = j_123(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, m_1);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm o_35 = NULL;
  ATerm q_35 = NULL;
  o_35 = t;
  {
    ATerm r_35 = NULL;
    t = new_0(t);
    {
      r_35 = t;
      if(((q_35 != NULL) && (q_35 != r_35)))
        _fail(r_35);
      else
        q_35 = r_35;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_35)), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_35), (ATerm)ATempty, (ATerm)ATempty, not_null(o_35))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm z_35 = NULL,a_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_SVar_1))
    {
      a_36 = ATgetArgument(z_35, 0);
      {
        ATerm d_36 = NULL,f_36 = NULL;
        ATerm e_36 = NULL;
        t = SSLgetAnnotations(not_null(z_35));
        {
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
        }
        {
          t = not_null(a_36);
          {
            ATerm h_36 = NULL;
            t = f_104(t);
            {
              f_36 = t;
              {
                ATerm i_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(f_36)), not_null(d_36));
                {
                  i_36 = t;
                  if(((h_36 != NULL) && (h_36 != i_36)))
                    _fail(i_36);
                  else
                    h_36 = i_36;
                }
                t = not_null(h_36);
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
ATerm CallT_3 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_CallT_3))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      x_36 = ATgetArgument(u_36, 2);
      {
        ATerm c_37 = NULL,e_37 = NULL;
        ATerm d_37 = NULL;
        t = SSLgetAnnotations(not_null(u_36));
        {
          d_37 = t;
          if(((c_37 != NULL) && (c_37 != d_37)))
            _fail(d_37);
          else
            c_37 = d_37;
        }
        {
          t = not_null(v_36);
          {
            ATerm g_37 = NULL;
            t = k_104(t);
            {
              e_37 = t;
              {
                t = not_null(w_36);
                {
                  ATerm i_37 = NULL;
                  t = l_104(t);
                  {
                    g_37 = t;
                    {
                      t = not_null(x_36);
                      {
                        ATerm k_37 = NULL;
                        t = m_104(t);
                        {
                          i_37 = t;
                          {
                            ATerm l_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(e_37), not_null(g_37), not_null(i_37)), not_null(c_37));
                            {
                              l_37 = t;
                              if(((k_37 != NULL) && (k_37 != l_37)))
                                _fail(l_37);
                              else
                                k_37 = l_37;
                            }
                            t = not_null(k_37);
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
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  y_37 = t;
  t_37 :
  if(match_cons(y_37, sym_Let_2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      u_37 :
      if(match_cons(a_38, sym_CallT_3))
        {
          b_38 = ATgetArgument(a_38, 0);
          d_38 = ATgetArgument(a_38, 1);
          e_38 = ATgetArgument(a_38, 2);
          v_37 :
          if(match_cons(b_38, sym_SVar_1))
            {
              c_38 = ATgetArgument(b_38, 0);
              w_37 :
              if(((ATgetType(d_38) == AT_LIST) && ATisEmpty(d_38)))
                {
                  x_37 :
                  if(((ATgetType(e_38) == AT_LIST) && ATisEmpty(e_38)))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_38)), (ATerm)ATempty, (ATerm) ATempty), not_null(z_37));
                    }
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
  ATerm k_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Fail_0))
    {
      t = term_t_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym_Id_0))
    {
      t = term_w_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  u_38 = t;
  r_38 :
  if(match_cons(u_38, sym__2))
    {
      v_38 = ATgetArgument(u_38, 0);
      y_38 = ATgetArgument(u_38, 1);
      s_38 :
      if(match_cons(v_38, sym__2))
        {
          w_38 = ATgetArgument(v_38, 0);
          x_38 = ATgetArgument(v_38, 1);
          t_38 :
          if(match_cons(y_38, sym__2))
            {
              z_38 = ATgetArgument(y_38, 0);
              a_39 = ATgetArgument(y_38, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_38)), not_null(w_38)), (ATerm) ATinsert(CheckATermList(not_null(a_39)), not_null(x_38)));
            }
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
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
    {
      j_39 = ATgetFirst((ATermList) i_39);
      k_39 = (ATerm) ATgetNext((ATermList) i_39);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), not_null(k_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  p_39 :
  if(((ATgetType(q_39) == AT_LIST) && ATisEmpty(q_39)))
    {
      t = term_x_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm e_131 (ATerm))
{
  ATerm s_39 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_131(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        {
          t = c_131(t);
          {
            t = _2(t, e_131, s_39);
            t = d_131(t);
          }
        }
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm l_131 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_131);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm z_124 (ATerm))
{
  ATerm t_39 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_124(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = _all(t, t_39);
      }
    return(t);
  }
  t = t_39(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  ATerm d_46 (ATerm t)
  {
    t = not_null(v_41);
    return(t);
  }
  ATerm e_46 (ATerm t)
  {
    t = not_null(w_41);
    return(t);
  }
  ATerm f_46 (ATerm t)
  {
    ATerm u_42 = NULL;
    ATerm v_42 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(s_41));
    {
      t = conc_0(t);
      {
        v_42 = t;
        if(((u_42 != NULL) && (u_42 != v_42)))
          _fail(v_42);
        else
          u_42 = v_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_42), not_null(t_41));
    return(t);
  }
  ATerm g_46 (ATerm t)
  {
    t = not_null(w_41);
    return(t);
  }
  ATerm h_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_16, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATempty);
    return(t);
  }
  ATerm i_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_16, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATempty);
    return(t);
  }
  ATerm j_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_16, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATempty);
    return(t);
  }
  ATerm k_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_16, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATempty);
    return(t);
  }
  ATerm l_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_16, (ATerm)ATinsert(ATempty, not_null(v_41)), (ATerm) ATempty);
    return(t);
  }
  ATerm m_46 (ATerm t)
  {
    ATerm f_43 = NULL;
    ATerm g_43 = NULL;
    t = not_null(w_41);
    {
      ATerm t_46 (ATerm t)
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm y_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = y_16;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = try_1(t, t_46);
              return(t);
            }
            t = Cons_2(t, n_1, o_1);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = Cons_2(t, _id, t_46);
          }
        return(t);
      }
      t = t_46(t);
      {
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(v_41), not_null(f_43), not_null(x_41));
    return(t);
  }
  ATerm n_46 (ATerm t)
  {
    ATerm k_43 = NULL;
    ATerm l_43 = NULL;
    t = not_null(w_41);
    {
      ATerm v_46 (ATerm t)
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = try_1(t, v_46);
              return(t);
            }
            t = Cons_2(t, p_1, q_1);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = Cons_2(t, _id, v_46);
          }
        return(t);
      }
      t = v_46(t);
      {
        l_43 = t;
        if(((k_43 != NULL) && (k_43 != l_43)))
          _fail(l_43);
        else
          k_43 = l_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(v_41), not_null(k_43), not_null(x_41));
    return(t);
  }
  ATerm o_46 (ATerm t)
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
    t = not_null(w_41);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm g_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = g_17;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, s_1);
        {
          ATerm m_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = m_17;
              {
                ATerm e_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, t_1, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_18;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = e_18;
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, u_1);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, r_1);
      {
        s_43 = t;
        w_40 :
        if(match_cons(s_43, sym__2))
          {
            t_43 = ATgetArgument(s_43, 0);
            u_43 = ATgetArgument(s_43, 1);
            {
              ATerm v_43 = NULL;
              if(((p_43 != NULL) && (p_43 != t_43)))
                _fail(t_43);
              else
                p_43 = t_43;
              {
                if(((q_43 != NULL) && (q_43 != u_43)))
                  _fail(u_43);
                else
                  q_43 = u_43;
                {
                  t = not_null(q_43);
                  {
                    t = concat_0(t);
                    {
                      v_43 = t;
                      {
                        if(((r_43 != NULL) && (r_43 != v_43)))
                          _fail(v_43);
                        else
                          r_43 = v_43;
                        {
                          ATerm q_18 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = q_18;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_43), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(v_41), not_null(p_43), not_null(x_41)));
    return(t);
  }
  ATerm p_46 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
    ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
    t = not_null(w_41);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, w_1);
        {
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(u_18);
            }
          else
            {
              t = t_18;
              {
                ATerm v_18 = t;
                int w_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = CallT_3(t, x_1, Nil_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_18;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(w_18);
                  }
                else
                  {
                    t = v_18;
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
        c_44 = t;
        z_40 :
        if(match_cons(c_44, sym__2))
          {
            d_44 = ATgetArgument(c_44, 0);
            e_44 = ATgetArgument(c_44, 1);
            {
              ATerm f_44 = NULL;
              if(((z_43 != NULL) && (z_43 != d_44)))
                _fail(d_44);
              else
                z_43 = d_44;
              {
                if(((a_44 != NULL) && (a_44 != e_44)))
                  _fail(e_44);
                else
                  a_44 = e_44;
                {
                  t = not_null(a_44);
                  {
                    t = concat_0(t);
                    {
                      f_44 = t;
                      {
                        if(((b_44 != NULL) && (b_44 != f_44)))
                          _fail(f_44);
                        else
                          b_44 = f_44;
                        {
                          ATerm y_18 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = y_18;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_44), (ATerm) ATmakeAppl(sym_CallT_3, not_null(v_41), not_null(z_43), not_null(x_41)));
    return(t);
  }
  u_41 = t;
  a_41 :
  if(match_cons(u_41, sym_Rec_2))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_41), (ATerm)ATempty, (ATerm)ATempty, not_null(w_41))), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_41)), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(u_41, sym_SDefT_4))
        {
          v_41 = ATgetArgument(u_41, 0);
          w_41 = ATgetArgument(u_41, 1);
          x_41 = ATgetArgument(u_41, 2);
          n_41 = ATgetArgument(u_41, 3);
          b_41 :
          if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
            {
              c_41 :
              if(((ATgetType(x_41) == AT_LIST) && ATisEmpty(x_41)))
                {
                  d_41 :
                  if(match_cons(n_41, sym_Rec_2))
                    {
                      o_41 = ATgetArgument(n_41, 0);
                      p_41 = ATgetArgument(n_41, 1);
                      {
                        ATerm d_42 = NULL;
                        ATerm j_42 = NULL;
                        t = not_null(p_41);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
                            e_42 = t;
                            m_40 :
                            if(match_cons(e_42, sym_CallT_3))
                              {
                                f_42 = ATgetArgument(e_42, 0);
                                h_42 = ATgetArgument(e_42, 1);
                                i_42 = ATgetArgument(e_42, 2);
                                n_40 :
                                if(match_cons(f_42, sym_SVar_1))
                                  {
                                    g_42 = ATgetArgument(f_42, 0);
                                    o_40 :
                                    if(((ATgetType(h_42) == AT_LIST) && ATisEmpty(h_42)))
                                      {
                                        p_40 :
                                        if(((ATgetType(i_42) == AT_LIST) && ATisEmpty(i_42)))
                                          {
                                            {
                                              if(((o_41 != NULL) && (o_41 != g_42)))
                                                _fail(g_42);
                                              else
                                                o_41 = g_42;
                                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_41)), (ATerm)ATempty, (ATerm) ATempty);
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
                          t = alltd_1(t, z_1);
                          {
                            j_42 = t;
                            if(((d_42 != NULL) && (d_42 != j_42)))
                              _fail(j_42);
                            else
                              d_42 = j_42;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_41), (ATerm)ATempty, (ATerm)ATempty, not_null(d_42));
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
          if(match_cons(u_41, sym_Seq_2))
            {
              v_41 = ATgetArgument(u_41, 0);
              w_41 = ATgetArgument(u_41, 1);
              e_41 :
              if(match_cons(w_41, sym_Seq_2))
                {
                  s_41 = ATgetArgument(w_41, 0);
                  t_41 = ATgetArgument(w_41, 1);
                  f_41 :
                  if(match_cons(v_41, sym_Where_1))
                    {
                      r_41 = ATgetArgument(v_41, 0);
                      g_41 :
                      if(match_cons(s_41, sym_Build_1))
                        {
                          q_41 = ATgetArgument(s_41, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_41)), not_null(t_41)));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(v_41, sym_Id_0))
                        {
                          t = e_46(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_41, sym_Build_1))
                    {
                      s_41 = ATgetArgument(w_41, 0);
                      h_41 :
                      if(match_cons(v_41, sym_Where_1))
                        {
                          r_41 = ATgetArgument(v_41, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_41)));
                        }
                      else
                        {
                          if(match_cons(v_41, sym_Id_0))
                            {
                              t = e_46(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(w_41, sym_Id_0))
                        {
                          i_41 :
                          if(match_cons(v_41, sym_Id_0))
                            {
                              ATerm z_18 = t;
                              int a_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_46(t);
                                  ;
                                  LocalPopChoice(a_19);
                                }
                              else
                                {
                                  t = z_18;
                                  t = e_46(t);
                                }
                            }
                          else
                            {
                              t = d_46(t);
                            }
                        }
                      else
                        {
                          j_41 :
                          if(match_cons(v_41, sym_Id_0))
                            {
                              t = e_46(t);
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
              if(match_cons(u_41, sym_Scope_2))
                {
                  v_41 = ATgetArgument(u_41, 0);
                  w_41 = ATgetArgument(u_41, 1);
                  k_41 :
                  if(match_cons(w_41, sym_Scope_2))
                    {
                      s_41 = ATgetArgument(w_41, 0);
                      t_41 = ATgetArgument(w_41, 1);
                      l_41 :
                      if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
                        {
                          {
                            ATerm b_19 = t;
                            int c_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_46(t);
                                ;
                                LocalPopChoice(c_19);
                              }
                            else
                              {
                                t = b_19;
                                t = g_46(t);
                              }
                          }
                        }
                      else
                        {
                          t = f_46(t);
                        }
                    }
                  else
                    {
                      m_41 :
                      if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
                        {
                          t = g_46(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(u_41, sym_Thread_1))
                    {
                      v_41 = ATgetArgument(u_41, 0);
                      t = h_46(t);
                    }
                  else
                    {
                      if(match_cons(u_41, sym_Some_1))
                        {
                          v_41 = ATgetArgument(u_41, 0);
                          t = i_46(t);
                        }
                      else
                        {
                          if(match_cons(u_41, sym_One_1))
                            {
                              v_41 = ATgetArgument(u_41, 0);
                              t = j_46(t);
                            }
                          else
                            {
                              if(match_cons(u_41, sym_All_1))
                                {
                                  v_41 = ATgetArgument(u_41, 0);
                                  t = k_46(t);
                                }
                              else
                                {
                                  if(match_cons(u_41, sym_Bagof_1))
                                    {
                                      v_41 = ATgetArgument(u_41, 0);
                                      t = l_46(t);
                                    }
                                  else
                                    {
                                      if(match_cons(u_41, sym_PrimT_3))
                                        {
                                          v_41 = ATgetArgument(u_41, 0);
                                          w_41 = ATgetArgument(u_41, 1);
                                          x_41 = ATgetArgument(u_41, 2);
                                          {
                                            ATerm e_19 = t;
                                            int j_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = m_46(t);
                                                ;
                                                LocalPopChoice(j_19);
                                              }
                                            else
                                              {
                                                t = e_19;
                                                t = o_46(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_41, sym_CallT_3))
                                            {
                                              v_41 = ATgetArgument(u_41, 0);
                                              w_41 = ATgetArgument(u_41, 1);
                                              x_41 = ATgetArgument(u_41, 2);
                                              {
                                                ATerm k_19 = t;
                                                int o_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_46(t);
                                                    ;
                                                    LocalPopChoice(o_19);
                                                  }
                                                else
                                                  {
                                                    t = k_19;
                                                    t = p_46(t);
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
ATerm repeat_1 (ATerm t, ATerm j_122 (ATerm))
{
  ATerm b_47 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      t = j_122(t);
      t = b_47(t);
      return(t);
    }
    t = try_1(t, a_2);
    return(t);
  }
  t = b_47(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm m_123 (ATerm), ATerm n_123 (ATerm))
{
  t = m_123(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = downup2_2(t, m_123, n_123);
      return(t);
    }
    t = _all(t, b_2);
    t = n_123(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm))
{
  ATerm i_47 = NULL,j_47 = NULL,p_47 = NULL;
  i_47 = t;
  h_47 :
  if(match_cons(i_47, sym__2))
    {
      j_47 = ATgetArgument(i_47, 0);
      p_47 = ATgetArgument(i_47, 1);
      {
        ATerm t_47 = NULL,v_47 = NULL;
        ATerm u_47 = NULL;
        t = SSLgetAnnotations(not_null(i_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        {
          t = not_null(j_47);
          {
            ATerm x_47 = NULL;
            t = k_98(t);
            {
              v_47 = t;
              {
                t = not_null(p_47);
                {
                  ATerm z_47 = NULL;
                  t = l_98(t);
                  {
                    x_47 = t;
                    {
                      ATerm a_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_47), not_null(x_47)), not_null(t_47));
                      {
                        a_48 = t;
                        if(((z_47 != NULL) && (z_47 != a_48)))
                          _fail(a_48);
                        else
                          z_47 = a_48;
                      }
                      t = not_null(z_47);
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
  ATerm q_19;
  q_19 = t;
  {
    ATerm k_48 = NULL;
    ATerm l_48 = NULL;
    t = term_r_19;
    {
      t = whoami_0(t);
      {
        l_48 = t;
        if(((k_48 != NULL) && (k_48 != l_48)))
          _fail(l_48);
        else
          k_48 = l_48;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), not_null(k_48)), term_t_19));
      {
        t = printnl_0(t);
        {
          t = term_w_19;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_19;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym__2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      {
        ATerm y_20;
        y_20 = t;
        t = SSL_printnl(not_null(q_48), not_null(r_48));
        t = y_20;
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
  ATerm w_48 = NULL;
  w_48 = t;
  t = SSL_implode_string(not_null(w_48));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_20 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = z_20;
      {
        ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
        b_49 = t;
        a_49 :
        if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
          {
            c_49 = ATgetFirst((ATermList) b_49);
            d_49 = (ATerm) ATgetNext((ATermList) b_49);
            {
              t = not_null(c_49);
              {
                ATerm c_2 (ATerm t)
                {
                  t = not_null(d_49);
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
  ATerm n_49 = NULL;
  ATerm p_49 = NULL;
  n_49 = t;
  {
    ATerm q_49 = NULL;
    ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
    t = not_null(n_49);
    {
      q_49 = t;
      {
        t = SSL_explode_term(not_null(q_49));
        {
          s_49 = t;
          l_49 :
          if(match_cons(s_49, sym__2))
            {
              t_49 = ATgetArgument(s_49, 0);
              u_49 = ATgetArgument(s_49, 1);
              m_49 :
              if(match_string(t_49, ""))
                {
                  if(((p_49 != NULL) && (p_49 != u_49)))
                    _fail(u_49);
                  else
                    p_49 = u_49;
                }
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
      t = not_null(p_49);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_129 (ATerm))
{
  ATerm y_49 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_49);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          t = Nil_0(t);
          t = o_129(t);
        }
      }
    return(t);
  }
  t = y_49(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym__2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      {
        t = not_null(c_50);
        {
          ATerm d_2 (ATerm t)
          {
            t = not_null(d_50);
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
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_50 = NULL;
  m_50 = t;
  t = SSL_explode_string(not_null(m_50));
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
  ATerm p_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = p_21;
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_2);
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            {
              ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
              d_51 = t;
              c_51 :
              if(match_cons(d_51, sym_Path_1))
                {
                  e_51 = ATgetArgument(d_51, 0);
                  t = not_null(e_51);
                }
              else
                {
                  if(match_cons(d_51, sym_Var_1))
                    {
                      e_51 = ATgetArgument(d_51, 0);
                      {
                        t = not_null(e_51);
                        {
                          ATerm y_21 = t;
                          int z_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_21);
                            }
                          else
                            {
                              t = y_21;
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = term_a_22;
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
                      if(match_cons(d_51, sym_Prefix_2))
                        {
                          e_51 = ATgetArgument(d_51, 0);
                          f_51 = ATgetArgument(d_51, 1);
                          {
                            ATerm k_51 = NULL,m_51 = NULL;
                            ATerm b_22;
                            b_22 = t;
                            {
                              ATerm l_51 = NULL;
                              t = not_null(e_51);
                              {
                                t = eval_config_0(t);
                                {
                                  l_51 = t;
                                  if(((k_51 != NULL) && (k_51 != l_51)))
                                    _fail(l_51);
                                  else
                                    k_51 = l_51;
                                }
                              }
                            }
                            t = b_22;
                            {
                              ATerm n_51 = NULL;
                              t = not_null(f_51);
                              {
                                t = eval_config_0(t);
                                {
                                  n_51 = t;
                                  if(((m_51 != NULL) && (m_51 != n_51)))
                                    _fail(n_51);
                                  else
                                    m_51 = n_51;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_51), not_null(m_51));
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
  ATerm v_51 = NULL;
  v_51 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(v_51));
    {
      t = table_get_0(t);
      {
        ATerm g_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_22;
            t_22 = t;
            {
              ATerm x_51 = NULL;
              ATerm y_51 = NULL;
              y_51 = t;
              if(((x_51 != NULL) && (x_51 != y_51)))
                _fail(y_51);
              else
                x_51 = y_51;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(v_51), not_null(x_51));
                t = table_put_0(t);
              }
            }
            t = t_22;
          }
          return(t);
        }
        t = try_1(t, g_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_142 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm u_22;
    u_22 = t;
    {
      ATerm c_52 = NULL;
      ATerm d_52 = NULL;
      t = term_v_22;
      {
        t = get_config_0(t);
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_52), term_w_22);
        t = geq_0(t);
      }
    }
    t = u_22;
    t = f_142(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  j_52 = t;
  h_52 :
  if(match_cons(j_52, sym__2))
    {
      k_52 = ATgetArgument(j_52, 0);
      l_52 = ATgetArgument(j_52, 1);
      i_52 :
      if(match_cons(l_52, sym_Stream_1))
        {
          m_52 = ATgetArgument(l_52, 0);
          {
            ATerm p_52 = NULL;
            t = SSL_fputc(not_null(k_52), not_null(m_52));
            {
              ATerm q_52 = NULL;
              q_52 = t;
              if(((p_52 != NULL) && (p_52 != q_52)))
                _fail(q_52);
              else
                p_52 = q_52;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_52));
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
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  x_52 = t;
  v_52 :
  if(match_cons(x_52, sym__2))
    {
      y_52 = ATgetArgument(x_52, 0);
      a_53 = ATgetArgument(x_52, 1);
      w_52 :
      if(match_cons(y_52, sym_Stream_1))
        {
          z_52 = ATgetArgument(y_52, 0);
          {
            ATerm d_53 = NULL;
            t = SSL_write_term_to_stream_text(not_null(z_52), not_null(a_53));
            {
              ATerm e_53 = NULL;
              e_53 = t;
              if(((d_53 != NULL) && (d_53 != e_53)))
                _fail(e_53);
              else
                d_53 = e_53;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_53));
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
    ATerm i_53 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm j_53 = NULL;
      j_53 = t;
      if(((i_53 != NULL) && (i_53 != j_53)))
        _fail(j_53);
      else
        i_53 = j_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_22, not_null(i_53));
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
  ATerm p_53 = NULL,q_53 = NULL,t_53 = NULL,u_53 = NULL;
  p_53 = t;
  n_53 :
  if(match_cons(p_53, sym__2))
    {
      q_53 = ATgetArgument(p_53, 0);
      u_53 = ATgetArgument(p_53, 1);
      o_53 :
      if(match_cons(q_53, sym_Stream_1))
        {
          t_53 = ATgetArgument(q_53, 0);
          {
            ATerm x_53 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(t_53), not_null(u_53));
            {
              ATerm y_53 = NULL;
              y_53 = t;
              if(((x_53 != NULL) && (x_53 != y_53)))
                _fail(y_53);
              else
                x_53 = y_53;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_53));
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
ATerm WriteToFile_1 (ATerm t, ATerm b_141 (ATerm))
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      {
        ATerm k_54 = NULL,m_54 = NULL;
        t = not_null(g_54);
        {
          ATerm l_54 = NULL;
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_54), term_y_22);
            {
              t = open_stream_0(t);
              {
                ATerm n_54 = NULL;
                n_54 = t;
                if(((m_54 != NULL) && (m_54 != n_54)))
                  _fail(n_54);
                else
                  m_54 = n_54;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_54), not_null(h_54));
                  {
                    t = b_141(t);
                    {
                      t = fclose_0(t);
                      t = not_null(h_54);
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
  ATerm v_54 = NULL;
  ATerm z_22;
  z_22 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm w_54 = NULL,x_54 = NULL;
            w_54 = t;
            s_54 :
            if(match_cons(w_54, sym_Output_1))
              {
                x_54 = ATgetArgument(w_54, 0);
                if(((v_54 != NULL) && (v_54 != x_54)))
                  _fail(x_54);
                else
                  v_54 = x_54;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_2);
          ;
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          {
            ATerm y_54 = NULL;
            t = term_c_23;
            {
              y_54 = t;
              if(((v_54 != NULL) && (v_54 != y_54)))
                _fail(y_54);
              else
                v_54 = y_54;
            }
          }
        }
      return(t);
    }
    t = _2(t, j_2, _id);
  }
  t = z_22;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        t = not_null(v_54);
        return(t);
      }
      t = split_2(t, m_2, _id);
      return(t);
    }
    t = _2(t, _id, l_2);
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              ATerm z_54 = NULL;
              z_54 = t;
              u_54 :
              if(!(match_cons(z_54, sym_Binary_0)))
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
          LocalPopChoice(e_23);
        }
      else
        {
          t = d_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_144 (ATerm))
{
  ATerm f_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  ATerm f_23;
  f_23 = t;
  t = dtime_0(t);
  t = f_23;
  {
    t = d_144(t);
    {
      ATerm g_23;
      g_23 = t;
      {
        ATerm i_55 = NULL;
        t = dtime_0(t);
        {
          i_55 = t;
          if(((f_55 != NULL) && (f_55 != i_55)))
            _fail(i_55);
          else
            f_55 = i_55;
        }
      }
      t = g_23;
      {
        j_55 = t;
        e_55 :
        if(match_cons(j_55, sym__2))
          {
            k_55 = ATgetArgument(j_55, 0);
            l_55 = ATgetArgument(j_55, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_55)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_55))), not_null(l_55));
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
  ATerm t_55 = NULL,u_55 = NULL;
  ATerm a_56 (ATerm t)
  {
    t = SSL_fclose(not_null(u_55));
    return(t);
  }
  u_55 = t;
  s_55 :
  if(match_cons(u_55, sym_Stream_1))
    {
      t_55 = ATgetArgument(u_55, 0);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(t_55));
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = a_56(t);
          }
      }
    }
  else
    {
      t = a_56(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym_Stream_1))
    {
      e_56 = ATgetArgument(d_56, 0);
      t = SSL_read_term_from_stream(not_null(e_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm n_140 (ATerm))
{
  ATerm j_23;
  j_23 = t;
  {
    ATerm j_56 = NULL,l_56 = NULL;
    ATerm t_23;
    t_23 = t;
    {
      ATerm k_56 = NULL;
      t = n_140(t);
      {
        k_56 = t;
        if(((j_56 != NULL) && (j_56 != k_56)))
          _fail(k_56);
        else
          j_56 = k_56;
      }
    }
    t = t_23;
    {
      ATerm m_56 = NULL;
      m_56 = t;
      if(((l_56 != NULL) && (l_56 != m_56)))
        _fail(m_56);
      else
        l_56 = m_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_56)), not_null(j_56)));
        t = printnl_0(t);
      }
    }
  }
  t = j_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  r_56 :
  if(match_cons(s_56, sym__2))
    {
      t_56 = ATgetArgument(s_56, 0);
      u_56 = ATgetArgument(s_56, 1);
      {
        ATerm x_56 = NULL;
        t = SSL_fopen(not_null(t_56), not_null(u_56));
        {
          ATerm y_56 = NULL;
          y_56 = t;
          if(((x_56 != NULL) && (x_56 != y_56)))
            _fail(y_56);
          else
            x_56 = y_56;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_56));
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
  ATerm c_57 = NULL;
  c_57 = t;
  t = SSL_is_string(not_null(c_57));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_57 = NULL;
    h_57 = t;
    if(((g_57 != NULL) && (g_57 != h_57)))
      _fail(h_57);
    else
      g_57 = h_57;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_57));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_57 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_57 = NULL;
    l_57 = t;
    if(((k_57 != NULL) && (k_57 != l_57)))
      _fail(l_57);
    else
      k_57 = l_57;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_57));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_57 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_57 = NULL;
    p_57 = t;
    if(((o_57 != NULL) && (o_57 != p_57)))
      _fail(p_57);
    else
      o_57 = p_57;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_57));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  u_57 :
  if(match_cons(v_57, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_57, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_57, sym_stdin_0))
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
  ATerm f_58 = NULL;
  ATerm h_58 = NULL,i_58 = NULL;
  f_58 = t;
  {
    ATerm j_58 = NULL;
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
    t = not_null(f_58);
    {
      j_58 = t;
      {
        t = SSL_explode_term(not_null(j_58));
        {
          l_58 = t;
          c_58 :
          if(match_cons(l_58, sym__2))
            {
              m_58 = ATgetArgument(l_58, 0);
              n_58 = ATgetArgument(l_58, 1);
              d_58 :
              if(match_string(m_58, ""))
                {
                  e_58 :
                  if(((ATgetType(n_58) == AT_LIST) && !(ATisEmpty(n_58))))
                    {
                      o_58 = ATgetFirst((ATermList) n_58);
                      p_58 = (ATerm) ATgetNext((ATermList) n_58);
                      {
                        if(((i_58 != NULL) && (i_58 != o_58)))
                          _fail(o_58);
                        else
                          i_58 = o_58;
                        if(((h_58 != NULL) && (h_58 != p_58)))
                          _fail(p_58);
                        else
                          h_58 = p_58;
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
    t = not_null(i_58);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  w_58 :
  if(match_cons(x_58, sym__2))
    {
      y_58 = ATgetArgument(x_58, 0);
      z_58 = ATgetArgument(x_58, 1);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm a_59 = NULL,b_59 = NULL;
                    a_59 = t;
                    v_58 :
                    if(match_cons(a_59, sym_Path_1))
                      {
                        b_59 = ATgetArgument(a_59, 0);
                        t = not_null(b_59);
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
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
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
  ATerm j_59 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_59 = NULL;
      ATerm i_59 = NULL;
      i_59 = t;
      if(((h_59 != NULL) && (h_59 != i_59)))
        _fail(i_59);
      else
        h_59 = i_59;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), term_a_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm q_2 (ATerm t)
        {
          t = term_b_24;
          return(t);
        }
        t = debug_1(t, q_2);
        _fail(t);
      }
    }
  {
    ATerm c_24;
    c_24 = t;
    {
      ATerm k_59 = NULL;
      t = read_from_stream_0(t);
      {
        k_59 = t;
        if(((j_59 != NULL) && (j_59 != k_59)))
          _fail(k_59);
        else
          j_59 = k_59;
      }
    }
    t = c_24;
    {
      t = fclose_0(t);
      t = not_null(j_59);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_136 (ATerm), ATerm p_136 (ATerm))
{
  ATerm p_59 = NULL,r_59 = NULL;
  ATerm d_24;
  d_24 = t;
  {
    ATerm q_59 = NULL;
    t = o_136(t);
    {
      q_59 = t;
      if(((p_59 != NULL) && (p_59 != q_59)))
        _fail(q_59);
      else
        p_59 = q_59;
    }
  }
  t = d_24;
  {
    ATerm s_59 = NULL;
    t = p_136(t);
    {
      s_59 = t;
      if(((r_59 != NULL) && (r_59 != s_59)))
        _fail(s_59);
      else
        r_59 = s_59;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(r_59));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_59 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    ATerm f_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          ATerm z_59 = NULL,a_60 = NULL;
          z_59 = t;
          w_59 :
          if(match_cons(z_59, sym_Input_1))
            {
              a_60 = ATgetArgument(z_59, 0);
              if(((y_59 != NULL) && (y_59 != a_60)))
                _fail(a_60);
              else
                y_59 = a_60;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_2);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = f_24;
        {
          ATerm b_60 = NULL;
          t = term_k_24;
          {
            b_60 = t;
            if(((y_59 != NULL) && (y_59 != b_60)))
              _fail(b_60);
            else
              y_59 = b_60;
          }
        }
      }
  }
  t = e_24;
  {
    ATerm s_2 (ATerm t)
    {
      t = not_null(y_59);
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
    ATerm j_60 = NULL;
    j_60 = t;
    e_60 :
    if(!(match_string(j_60, "-k")))
      {
        if(!(match_string(j_60, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm l_24;
    l_24 = t;
    {
      ATerm l_60 = NULL;
      ATerm m_60 = NULL;
      t = string_to_int_0(t);
      {
        m_60 = t;
        if(((l_60 != NULL) && (l_60 != m_60)))
          _fail(m_60);
        else
          l_60 = m_60;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(l_60));
        t = set_config_0(t);
      }
    }
    t = l_24;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  t = SSL_string_to_int(not_null(p_60));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm x_60 = NULL;
        x_60 = t;
        s_60 :
        if(!(match_string(x_60, "-S")))
          {
            if(!(match_string(x_60, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_u_24;
        t = set_config_0(t);
        t = term_v_24;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_w_24;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm y_60 = NULL;
              y_60 = t;
              t_60 :
              if(!(match_string(y_60, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm b_61 = NULL;
              ATerm z_24;
              z_24 = t;
              {
                ATerm z_60 = NULL;
                ATerm a_61 = NULL;
                t = string_to_int_0(t);
                {
                  a_61 = t;
                  if(((z_60 != NULL) && (z_60 != a_61)))
                    _fail(a_61);
                  else
                    z_60 = a_61;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(z_60));
                  t = set_config_0(t);
                }
              }
              t = z_24;
              {
                ATerm c_61 = NULL;
                c_61 = t;
                if(((b_61 != NULL) && (b_61 != c_61)))
                  _fail(c_61);
                else
                  b_61 = c_61;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_61));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_a_25;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm c_3 (ATerm t)
              {
                ATerm d_61 = NULL;
                d_61 = t;
                w_60 :
                if(!(match_string(d_61, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_c_25;
                t = set_config_0(t);
                t = term_d_25;
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_e_25;
                return(t);
              }
              t = Option_3(t, c_3, d_3, e_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm j_61 = NULL;
    j_61 = t;
    g_61 :
    if(!(match_string(j_61, "-o")))
      {
        if(!(match_string(j_61, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm m_61 = NULL;
    ATerm h_25;
    h_25 = t;
    {
      ATerm k_61 = NULL;
      ATerm l_61 = NULL;
      l_61 = t;
      if(((k_61 != NULL) && (k_61 != l_61)))
        _fail(l_61);
      else
        k_61 = l_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_25, not_null(k_61));
        t = set_config_0(t);
      }
    }
    t = h_25;
    {
      ATerm n_61 = NULL;
      n_61 = t;
      if(((m_61 != NULL) && (m_61 != n_61)))
        _fail(n_61);
      else
        m_61 = n_61;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_61));
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_j_25;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm r_61 = NULL;
          r_61 = t;
          q_61 :
          if(!(match_string(r_61, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_y_25;
          t = set_config_0(t);
          t = term_z_25;
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_a_26;
          return(t);
        }
        t = Option_3(t, i_3, j_3, k_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  x_61 = t;
  v_61 :
  if(match_string(x_61, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_61) == AT_LIST) && !(ATisEmpty(x_61))))
        {
          y_61 = ATgetFirst((ATermList) x_61);
          z_61 = (ATerm) ATgetNext((ATermList) x_61);
          w_61 :
          if(((ATgetType(z_61) == AT_LIST) && !(ATisEmpty(z_61))))
            {
              a_62 = ATgetFirst((ATermList) z_61);
              b_62 = (ATerm) ATgetNext((ATermList) z_61);
              {
                ATerm g_62 = NULL;
                ATerm b_26;
                b_26 = t;
                {
                  t = not_null(y_61);
                  t = k_0(t);
                }
                t = b_26;
                {
                  ATerm j_62 = NULL;
                  t = not_null(a_62);
                  {
                    t = m_0(t);
                    {
                      j_62 = t;
                      if(((g_62 != NULL) && (g_62 != j_62)))
                        _fail(j_62);
                      else
                        g_62 = j_62;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_62)), not_null(g_62));
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
  ATerm l_3 (ATerm t)
  {
    ATerm q_62 = NULL;
    q_62 = t;
    n_62 :
    if(!(match_string(q_62, "-i")))
      {
        if(!(match_string(q_62, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm t_62 = NULL;
    ATerm c_26;
    c_26 = t;
    {
      ATerm r_62 = NULL;
      ATerm s_62 = NULL;
      s_62 = t;
      if(((r_62 != NULL) && (r_62 != s_62)))
        _fail(s_62);
      else
        r_62 = s_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(r_62));
        t = set_config_0(t);
      }
    }
    t = c_26;
    {
      ATerm u_62 = NULL;
      u_62 = t;
      if(((t_62 != NULL) && (t_62 != u_62)))
        _fail(u_62);
      else
        t_62 = u_62;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_62));
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = ArgOption_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm y_62 = NULL;
  t = report_run_time_0(t);
  {
    ATerm z_62 = NULL;
    t = term_r_19;
    {
      t = whoami_0(t);
      {
        z_62 = t;
        if(((y_62 != NULL) && (y_62 != z_62)))
          _fail(z_62);
        else
          y_62 = z_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, term_n_26), not_null(y_62)));
      {
        t = printnl_0(t);
        {
          t = term_w_19;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_26;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_63 = NULL;
  c_63 = t;
  t = SSL_TicksToSeconds(not_null(c_63));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  g_63 :
  if(match_cons(j_63, sym__2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_63), not_null(l_63));
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = SSL_addr(not_null(k_63), not_null(l_63));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_134 (ATerm), ATerm a_135 (ATerm))
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_134(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
        t_63 = t;
        s_63 :
        if(((ATgetType(t_63) == AT_LIST) && !(ATisEmpty(t_63))))
          {
            u_63 = ATgetFirst((ATermList) t_63);
            v_63 = (ATerm) ATgetNext((ATermList) t_63);
            {
              ATerm y_63 = NULL;
              ATerm z_63 = NULL;
              t = not_null(v_63);
              {
                t = foldr_2(t, z_134, a_135);
                {
                  z_63 = t;
                  if(((y_63 != NULL) && (y_63 != z_63)))
                    _fail(z_63);
                  else
                    y_63 = z_63;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), not_null(y_63));
                t = a_135(t);
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
ATerm crush_2 (ATerm t, ATerm s_138 (ATerm), ATerm t_138 (ATerm))
{
  ATerm g_64 = NULL;
  ATerm i_64 = NULL;
  g_64 = t;
  {
    ATerm j_64 = NULL;
    ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
    t = not_null(g_64);
    {
      j_64 = t;
      {
        t = SSL_explode_term(not_null(j_64));
        {
          l_64 = t;
          f_64 :
          if(match_cons(l_64, sym__2))
            {
              m_64 = ATgetArgument(l_64, 0);
              n_64 = ATgetArgument(l_64, 1);
              if(((i_64 != NULL) && (i_64 != n_64)))
                _fail(n_64);
              else
                i_64 = n_64;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_64);
      t = foldr_2(t, s_138, t_138);
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
    ATerm o_3 (ATerm t)
    {
      t = term_t_24;
      return(t);
    }
    t = crush_2(t, o_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  s_64 :
  if(match_cons(t_64, sym__2))
    {
      u_64 = ATgetArgument(t_64, 0);
      v_64 = ATgetArgument(t_64, 1);
      {
        ATerm x_26;
        x_26 = t;
        {
          ATerm y_26 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_64), not_null(v_64));
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = y_26;
              t = SSL_gtr(not_null(u_64), not_null(v_64));
            }
        }
        t = x_26;
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
  ATerm h_65 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
      i_65 = t;
      g_65 :
      if(match_cons(i_65, sym__2))
        {
          j_65 = ATgetArgument(i_65, 0);
          k_65 = ATgetArgument(i_65, 1);
          {
            if(((h_65 != NULL) && (h_65 != j_65)))
              _fail(j_65);
            else
              h_65 = j_65;
            if(((h_65 != NULL) && (h_65 != k_65)))
              _fail(k_65);
            else
              h_65 = k_65;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_142 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm g_27;
    g_27 = t;
    {
      ATerm n_65 = NULL;
      ATerm o_65 = NULL;
      t = term_v_22;
      {
        t = get_config_0(t);
        {
          o_65 = t;
          if(((n_65 != NULL) && (n_65 != o_65)))
            _fail(o_65);
          else
            n_65 = o_65;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_65), term_w_19);
        t = geq_0(t);
      }
    }
    t = g_27;
    t = e_142(t);
    return(t);
  }
  t = try_1(t, p_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm s_65 = NULL,u_65 = NULL;
    ATerm h_27;
    h_27 = t;
    {
      ATerm t_65 = NULL;
      t = run_time_0(t);
      {
        t_65 = t;
        if(((s_65 != NULL) && (s_65 != t_65)))
          _fail(t_65);
        else
          s_65 = t_65;
      }
    }
    t = h_27;
    {
      ATerm v_65 = NULL;
      t = term_r_19;
      {
        t = whoami_0(t);
        {
          v_65 = t;
          if(((u_65 != NULL) && (u_65 != v_65)))
            _fail(v_65);
          else
            u_65 = v_65;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), not_null(s_65)), term_i_27), not_null(u_65)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_t_24;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym_Version_0))
    {
      ATerm e_66 = NULL,g_66 = NULL;
      ATerm k_27;
      k_27 = t;
      {
        ATerm f_66 = NULL;
        t = SSLgetAnnotations(not_null(c_66));
        {
          f_66 = t;
          if(((e_66 != NULL) && (e_66 != f_66)))
            _fail(f_66);
          else
            e_66 = f_66;
        }
      }
      t = k_27;
      {
        ATerm h_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_66));
        {
          h_66 = t;
          if(((g_66 != NULL) && (g_66 != h_66)))
            _fail(h_66);
          else
            g_66 = h_66;
        }
        t = not_null(g_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_145 (ATerm))
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_27;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              {
                ATerm q_27 = t;
                int r_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_27);
                  }
                else
                  {
                    t = q_27;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, r_3);
      }
    }
  t = b_145(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_66 = NULL;
  m_66 = t;
  t = SSL_table_create(not_null(m_66));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_66 = NULL;
  q_66 = t;
  {
    ATerm s_27;
    s_27 = t;
    {
      t = term_t_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, not_null(q_66));
          t = table_put_0(t);
        }
      }
    }
    t = s_27;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_table_destroy(not_null(u_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  t = SSL_exit(not_null(y_66));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_147 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_128 (ATerm))
{
  ATerm b_67 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = Cons_2(t, y_128, b_67);
      }
    return(t);
  }
  t = b_67(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  k_67 = t;
  h_67 :
  if(((ATgetType(k_67) == AT_LIST) && !(ATisEmpty(k_67))))
    {
      i_67 = ATgetFirst((ATermList) k_67);
      j_67 = (ATerm) ATgetNext((ATermList) k_67);
      {
        ATerm n_67 = NULL;
        t = not_null(j_67);
        {
          ATerm x_27;
          x_27 = t;
          {
            ATerm o_67 = NULL,q_67 = NULL,s_67 = NULL;
            ATerm y_27;
            y_27 = t;
            {
              ATerm p_67 = NULL;
              t = i_0(t);
              {
                p_67 = t;
                if(((o_67 != NULL) && (o_67 != p_67)))
                  _fail(p_67);
                else
                  o_67 = p_67;
              }
            }
            t = y_27;
            {
              ATerm r_67 = NULL;
              t = not_null(i_67);
              {
                t = g_0(t);
                {
                  r_67 = t;
                  if(((q_67 != NULL) && (q_67 != r_67)))
                    _fail(r_67);
                  else
                    q_67 = r_67;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_67)), not_null(q_67));
                {
                  s_67 = t;
                  if(((n_67 != NULL) && (n_67 != s_67)))
                    _fail(s_67);
                  else
                    n_67 = s_67;
                }
              }
            }
          }
          t = x_27;
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(n_67);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_67) == AT_LIST) && ATisEmpty(k_67)))
        {
          {
            t = term_r_19;
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
ATerm short_description_1 (ATerm t, ATerm b_147 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_108 (ATerm))
{
  ATerm d_68 = NULL,e_68 = NULL;
  d_68 = t;
  c_68 :
  if(match_cons(d_68, sym_Program_1))
    {
      e_68 = ATgetArgument(d_68, 0);
      {
        ATerm q_68 = NULL,s_68 = NULL;
        ATerm r_68 = NULL;
        t = SSLgetAnnotations(not_null(d_68));
        {
          r_68 = t;
          if(((q_68 != NULL) && (q_68 != r_68)))
            _fail(r_68);
          else
            q_68 = r_68;
        }
        {
          t = not_null(e_68);
          {
            ATerm u_68 = NULL;
            t = l_108(t);
            {
              s_68 = t;
              {
                ATerm v_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_68)), not_null(q_68));
                {
                  v_68 = t;
                  if(((u_68 != NULL) && (u_68 != v_68)))
                    _fail(v_68);
                  else
                    u_68 = v_68;
                }
                t = not_null(u_68);
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
  ATerm e_69 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_69 = NULL;
      t = term_o_26;
      {
        t = get_config_0(t);
        {
          f_69 = t;
          if(((e_69 != NULL) && (e_69 != f_69)))
            _fail(f_69);
          else
            e_69 = f_69;
        }
      }
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm g_69 = NULL;
            g_69 = t;
            if(((e_69 != NULL) && (e_69 != g_69)))
              _fail(g_69);
            else
              e_69 = g_69;
            return(t);
          }
          t = Program_1(t, x_3);
          return(t);
        }
        t = option_defined_1(t, w_3);
      }
    }
  {
    ATerm c_4 (ATerm t)
    {
      ATerm d_4 (ATerm t)
      {
        t = not_null(e_69);
        return(t);
      }
      t = short_description_1(t, d_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_4);
    {
      t = term_b_28;
      {
        t = echo_0(t);
        {
          t = term_e_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm h_69 = NULL;
                  ATerm i_69 = NULL;
                  i_69 = t;
                  if(((h_69 != NULL) && (h_69 != i_69)))
                    _fail(i_69);
                  else
                    h_69 = i_69;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_69)), term_f_28);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm j_69 = NULL;
                    ATerm k_69 = NULL;
                    ATerm c_5 (ATerm t)
                    {
                      t = not_null(e_69);
                      return(t);
                    }
                    t = long_description_1(t, c_5);
                    {
                      k_69 = t;
                      if(((j_69 != NULL) && (j_69 != k_69)))
                        _fail(k_69);
                      else
                        j_69 = k_69;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_69)), term_g_28);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_108 (ATerm))
{
  ATerm w_69 = NULL,c_70 = NULL;
  w_69 = t;
  v_69 :
  if(match_cons(w_69, sym_Undefined_1))
    {
      c_70 = ATgetArgument(w_69, 0);
      {
        ATerm f_70 = NULL,h_70 = NULL;
        ATerm g_70 = NULL;
        t = SSLgetAnnotations(not_null(w_69));
        {
          g_70 = t;
          if(((f_70 != NULL) && (f_70 != g_70)))
            _fail(g_70);
          else
            f_70 = g_70;
        }
        {
          t = not_null(c_70);
          {
            ATerm j_70 = NULL;
            t = m_108(t);
            {
              h_70 = t;
              {
                ATerm k_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_70)), not_null(f_70));
                {
                  k_70 = t;
                  if(((j_70 != NULL) && (j_70 != k_70)))
                    _fail(k_70);
                  else
                    j_70 = k_70;
                }
                t = not_null(j_70);
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
ATerm fetch_1 (ATerm t, ATerm i_129 (ATerm))
{
  ATerm p_70 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_129, _id);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = Cons_2(t, _id, p_70);
      }
    return(t);
  }
  t = p_70(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_146 (ATerm))
{
  t = fetch_1(t, b_146);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  r_70 :
  if(((ATgetType(s_70) == AT_LIST) && ATisEmpty(s_70)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_70) == AT_LIST) && !(ATisEmpty(s_70))))
        {
          t_70 = ATgetFirst((ATermList) s_70);
          u_70 = (ATerm) ATgetNext((ATermList) s_70);
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
  ATerm r_28;
  r_28 = t;
  {
    ATerm x_70 = NULL;
    ATerm a_71 = NULL;
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        {
          ATerm y_70 = NULL;
          ATerm z_70 = NULL;
          z_70 = t;
          if(((y_70 != NULL) && (y_70 != z_70)))
            _fail(z_70);
          else
            y_70 = z_70;
          t = (ATerm) ATinsert(ATempty, not_null(y_70));
        }
      }
    {
      a_71 = t;
      if(((x_70 != NULL) && (x_70 != a_71)))
        _fail(a_71);
      else
        x_70 = a_71;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_23, not_null(x_70));
      t = printnl_0(t);
    }
  }
  t = r_28;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_o_26;
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
  ATerm u_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = u_28;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_71 = NULL;
  n_71 = t;
  m_71 :
  if(match_cons(n_71, sym_Help_0))
    {
      ATerm q_71 = NULL,s_71 = NULL;
      ATerm a_29;
      a_29 = t;
      {
        ATerm r_71 = NULL;
        t = SSLgetAnnotations(not_null(n_71));
        {
          r_71 = t;
          if(((q_71 != NULL) && (q_71 != r_71)))
            _fail(r_71);
          else
            q_71 = r_71;
        }
      }
      t = a_29;
      {
        ATerm t_71 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_71));
        {
          t_71 = t;
          if(((s_71 != NULL) && (s_71 != t_71)))
            _fail(t_71);
          else
            s_71 = t_71;
        }
        t = not_null(s_71);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_121 (ATerm))
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_121(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm i_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 (ATerm t)
      {
        ATerm z_71 = NULL;
        z_71 = t;
        x_71 :
        if(!(match_string(z_71, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_q_29;
        t = set_config_0(t);
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_w_29;
        return(t);
      }
      t = Option_3(t, k_5, l_5, m_5);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = i_29;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm a_72 = NULL;
          a_72 = t;
          y_71 :
          if(!(match_string(a_72, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_q_29;
          {
            t = set_config_0(t);
            {
              t = term_y_29;
              t = set_config_0(t);
            }
          }
          t = term_e_30;
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_f_30;
          return(t);
        }
        t = Option_3(t, n_5, o_5, p_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym__2))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      t = SSL_table_get(not_null(e_72), not_null(f_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  m_72 = t;
  l_72 :
  if(match_cons(m_72, sym__3))
    {
      n_72 = ATgetArgument(m_72, 0);
      o_72 = ATgetArgument(m_72, 1);
      p_72 = ATgetArgument(m_72, 2);
      {
        ATerm g_30;
        g_30 = t;
        {
          ATerm t_72 = NULL;
          ATerm u_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_72), not_null(o_72));
          {
            ATerm m_30 = t;
            int n_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_30);
              }
            else
              {
                t = m_30;
                t = (ATerm) ATempty;
              }
            {
              u_72 = t;
              if(((t_72 != NULL) && (t_72 != u_72)))
                _fail(u_72);
              else
                t_72 = u_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_72), not_null(o_72), (ATerm) ATinsert(CheckATermList(not_null(t_72)), not_null(p_72)));
            t = table_put_0(t);
          }
        }
        t = g_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_147 (ATerm))
{
  ATerm y_72 = NULL;
  ATerm z_72 = NULL;
  t = term_r_19;
  {
    t = g_147(t);
    {
      z_72 = t;
      if(((y_72 != NULL) && (y_72 != z_72)))
        _fail(z_72);
      else
        y_72 = z_72;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, not_null(y_72));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  e_73 :
  if(match_string(f_73, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_73) == AT_LIST) && !(ATisEmpty(f_73))))
        {
          g_73 = ATgetFirst((ATermList) f_73);
          h_73 = (ATerm) ATgetNext((ATermList) f_73);
          {
            ATerm k_73 = NULL;
            ATerm p_30;
            p_30 = t;
            {
              t = not_null(g_73);
              t = a_0(t);
            }
            t = p_30;
            {
              ATerm l_73 = NULL;
              t = term_r_19;
              {
                t = b_0(t);
                {
                  l_73 = t;
                  if(((k_73 != NULL) && (k_73 != l_73)))
                    _fail(l_73);
                  else
                    k_73 = l_73;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_73)), not_null(k_73));
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
    ATerm q_73 = NULL;
    q_73 = t;
    p_73 :
    if(!(match_string(q_73, "--help")))
      {
        if(!(match_string(q_73, "-h")))
          {
            if(!(match_string(q_73, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_q_30;
    {
      t = set_config_0(t);
      t = term_w_30;
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_x_30;
    return(t);
  }
  t = Option_3(t, q_5, r_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  s_73 :
  if(((ATgetType(t_73) == AT_LIST) && !(ATisEmpty(t_73))))
    {
      u_73 = ATgetFirst((ATermList) t_73);
      v_73 = (ATerm) ATgetNext((ATermList) t_73);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_73)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_73)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_99 (ATerm), ATerm u_99 (ATerm))
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  q_74 :
  if(((ATgetType(r_74) == AT_LIST) && !(ATisEmpty(r_74))))
    {
      s_74 = ATgetFirst((ATermList) r_74);
      t_74 = (ATerm) ATgetNext((ATermList) r_74);
      {
        ATerm x_74 = NULL,z_74 = NULL;
        ATerm y_74 = NULL;
        t = SSLgetAnnotations(not_null(r_74));
        {
          y_74 = t;
          if(((x_74 != NULL) && (x_74 != y_74)))
            _fail(y_74);
          else
            x_74 = y_74;
        }
        {
          t = not_null(s_74);
          {
            ATerm b_75 = NULL;
            t = t_99(t);
            {
              z_74 = t;
              {
                t = not_null(t_74);
                {
                  ATerm d_75 = NULL;
                  t = u_99(t);
                  {
                    b_75 = t;
                    {
                      ATerm e_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_75)), not_null(z_74)), not_null(x_74));
                      {
                        e_75 = t;
                        if(((d_75 != NULL) && (d_75 != e_75)))
                          _fail(e_75);
                        else
                          d_75 = e_75;
                      }
                      t = not_null(d_75);
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
  ATerm o_75 = NULL;
  o_75 = t;
  n_75 :
  if(((ATgetType(o_75) == AT_LIST) && ATisEmpty(o_75)))
    {
      {
        ATerm q_75 = NULL,s_75 = NULL;
        ATerm y_30;
        y_30 = t;
        {
          ATerm r_75 = NULL;
          t = SSLgetAnnotations(not_null(o_75));
          {
            r_75 = t;
            if(((q_75 != NULL) && (q_75 != r_75)))
              _fail(r_75);
            else
              q_75 = r_75;
          }
        }
        t = y_30;
        {
          ATerm t_75 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_75));
          {
            t_75 = t;
            if(((s_75 != NULL) && (s_75 != t_75)))
              _fail(t_75);
            else
              s_75 = t_75;
          }
          t = not_null(s_75);
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym__2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_22, not_null(h_76), not_null(i_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_147 (ATerm))
{
  ATerm d_31;
  d_31 = t;
  {
    ATerm t_5 (ATerm t)
    {
      t = term_e_31;
      t = e_147(t);
      return(t);
    }
    t = try_1(t, t_5);
  }
  t = d_31;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm q_76 = NULL;
      ATerm j_31;
      j_31 = t;
      {
        ATerm o_76 = NULL;
        ATerm p_76 = NULL;
        p_76 = t;
        if(((o_76 != NULL) && (o_76 != p_76)))
          _fail(p_76);
        else
          o_76 = p_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_26, not_null(o_76));
          t = set_config_0(t);
        }
      }
      t = j_31;
      {
        ATerm r_76 = NULL;
        r_76 = t;
        if(((q_76 != NULL) && (q_76 != r_76)))
          _fail(r_76);
        else
          q_76 = r_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_76));
      }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm k_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              {
                t = e_147(t);
                t = Cons_2(t, _id, v_5);
              }
            }
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = k_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_5, v_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  ATerm y_31;
  y_31 = t;
  {
    ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
    a_77 = t;
    w_76 :
    if(match_cons(a_77, sym__3))
      {
        b_77 = ATgetArgument(a_77, 0);
        c_77 = ATgetArgument(a_77, 1);
        d_77 = ATgetArgument(a_77, 2);
        {
          if(((x_76 != NULL) && (x_76 != b_77)))
            _fail(b_77);
          else
            x_76 = b_77;
          {
            if(((y_76 != NULL) && (y_76 != c_77)))
              _fail(c_77);
            else
              y_76 = c_77;
            {
              if(((z_76 != NULL) && (z_76 != d_77)))
                _fail(d_77);
              else
                z_76 = d_77;
              t = SSL_table_put(not_null(x_76), not_null(y_76), not_null(z_76));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_147 (ATerm))
{
  ATerm g_77 = NULL;
  ATerm z_31;
  z_31 = t;
  {
    t = term_a_32;
    t = table_put_0(t);
  }
  t = z_31;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_147(t);
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          {
            ATerm i_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = i_32;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, w_5);
    {
      ATerm x_5 (ATerm t)
      {
        ATerm o_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32;
            u_32 = t;
            {
              ATerm z_32 = t;
              int a_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_27;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(a_33);
                }
              else
                {
                  t = z_32;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = u_32;
            {
              t = system_usage_0(t);
              {
                t = term_t_24;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(t_32);
          }
        else
          {
            t = o_32;
            {
              ATerm f_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_33;
                  l_33 = t;
                  {
                    t = term_p_29;
                    t = get_config_0(t);
                  }
                  t = l_33;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_24;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm y_5 (ATerm t)
                    {
                      ATerm z_5 (ATerm t)
                      {
                        ATerm h_77 = NULL;
                        h_77 = t;
                        if(((g_77 != NULL) && (g_77 != h_77)))
                          _fail(h_77);
                        else
                          g_77 = h_77;
                        return(t);
                      }
                      t = Undefined_1(t, z_5);
                      return(t);
                    }
                    t = option_defined_1(t, y_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_77)), term_m_33));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_w_19;
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
      t = try_1(t, x_5);
      {
        ATerm s_33;
        s_33 = t;
        {
          t = term_c_28;
          t = table_destroy_0(t);
        }
        t = s_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm g_145 (ATerm))
{
  t = parse_options_1(t, d_145);
  {
    t = store_options_0(t);
    {
      t = f_145(t);
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_145);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            {
              ATerm a_34 = t;
              int b_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_145(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(b_34);
                }
              else
                {
                  t = a_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm), ATerm v_144 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm c_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_144(t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = c_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_144);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_6, u_144, v_144, b_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm j_34;
      j_34 = t;
      {
        ATerm k_77 = NULL;
        ATerm l_77 = NULL;
        t = term_o_26;
        {
          t = get_config_0(t);
          {
            l_77 = t;
            if(((k_77 != NULL) && (k_77 != l_77)))
              _fail(l_77);
            else
              k_77 = l_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATempty, not_null(k_77)));
          t = printnl_0(t);
        }
      }
      t = j_34;
      return(t);
    }
    t = if_verbose2_1(t, e_6);
    return(t);
  }
  t = iowrap_4(t, m_144, n_144, o_144, c_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_144 (ATerm), ATerm l_144 (ATerm))
{
  t = iowrap_3(t, k_144, l_144, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_144 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    t = _2(t, _id, h_144);
    return(t);
  }
  t = iowrap_2(t, f_6, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm j_6 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, i_6, j_6);
    t = simplify0_0(t);
    return(t);
  }
  t = iowrap_1(t, g_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
