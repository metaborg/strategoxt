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
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
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
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
ATerm term_l_21;
ATerm term_k_20;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_q_16;
ATerm term_j_16;
ATerm term_z_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_p_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_i_8;
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
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_i_8);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_i_8);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_i_8);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_i_8);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_i_8);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__3, term_e_17, term_j_17, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm q_70 (ATerm));
ATerm Call_2 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm));
ATerm unzip_1 (ATerm, ATerm d_97 (ATerm));
ATerm alltd_1 (ATerm, ATerm t_90 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm d_88 (ATerm));
ATerm downup2_2 (ATerm, ATerm g_89 (ATerm), ATerm h_89 (ATerm));
ATerm _2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_95 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_107 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm t_106 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_109 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_106 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_102 (ATerm), ATerm h_102 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_100 (ATerm), ATerm s_100 (ATerm));
ATerm crush_2 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_107 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_110 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_112 (ATerm));
ATerm map_1 (ATerm, ATerm s_94 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_112 (ATerm));
ATerm Program_1 (ATerm, ATerm q_75 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_95 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_111 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_87 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_112 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_112 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_112 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_110 (ATerm), ATerm d_110 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_109 (ATerm));
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
ATerm SVar_1 (ATerm t, ATerm q_70 (ATerm))
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
            t = q_70(t);
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
ATerm Call_2 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm))
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
            t = f_71(t);
            {
              q_3 = t;
              {
                t = not_null(k_3);
                {
                  ATerm u_3 = NULL;
                  t = g_71(t);
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
ATerm genzip_4 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        ;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          t = u_96(t);
          {
            t = _2(t, w_96, z_5);
            t = v_96(t);
          }
        }
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm d_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, d_97);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm t_90 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_90(t);
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  ATerm a_10 (ATerm t)
  {
    t = not_null(a_8);
    return(t);
  }
  ATerm b_10 (ATerm t)
  {
    t = not_null(b_8);
    return(t);
  }
  ATerm c_10 (ATerm t)
  {
    ATerm a_9 = NULL;
    ATerm b_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(x_7));
    {
      t = conc_0(t);
      {
        b_9 = t;
        if(((a_9 != NULL) && (a_9 != b_9)))
          _fail(b_9);
        else
          a_9 = b_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_9), not_null(y_7));
    return(t);
  }
  ATerm d_10 (ATerm t)
  {
    t = not_null(b_8);
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_d_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_j_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    ATerm k_9 = NULL;
    ATerm l_9 = NULL;
    t = not_null(b_8);
    {
      ATerm o_10 (ATerm t)
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
              t = try_1(t, o_10);
              return(t);
            }
            t = Cons_2(t, c_0, e_0);
            ;
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            t = Cons_2(t, _id, o_10);
          }
        return(t);
      }
      t = o_10(t);
      {
        l_9 = t;
        if(((k_9 != NULL) && (k_9 != l_9)))
          _fail(l_9);
        else
          k_9 = l_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_8), not_null(k_9));
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
    ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
    t = not_null(b_8);
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
          int r_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(r_6);
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
        r_9 = t;
        a_7 :
        if(match_cons(r_9, sym__2))
          {
            s_9 = ATgetArgument(r_9, 0);
            t_9 = ATgetArgument(r_9, 1);
            {
              ATerm u_9 = NULL;
              if(((o_9 != NULL) && (o_9 != s_9)))
                _fail(s_9);
              else
                o_9 = s_9;
              {
                if(((p_9 != NULL) && (p_9 != t_9)))
                  _fail(t_9);
                else
                  p_9 = t_9;
                {
                  t = not_null(p_9);
                  {
                    t = concat_0(t);
                    {
                      u_9 = t;
                      {
                        if(((q_9 != NULL) && (q_9 != u_9)))
                          _fail(u_9);
                        else
                          q_9 = u_9;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_9), (ATerm) ATmakeAppl(sym_Call_2, not_null(a_8), not_null(o_9)));
    return(t);
  }
  z_7 = t;
  b_7 :
  if(match_cons(z_7, sym_SDef_4))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      s_7 = ATgetArgument(z_7, 2);
      r_7 = ATgetArgument(z_7, 3);
      c_7 :
      if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
        {
          w_7 = ATgetFirst((ATermList) a_8);
          q_7 = (ATerm) ATgetNext((ATermList) a_8);
          d_7 :
          if(match_cons(w_7, sym_DontInline_0))
            {
              e_7 :
              if(((ATgetType(q_7) == AT_LIST) && ATisEmpty(q_7)))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_8), not_null(s_7), not_null(r_7));
                }
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
      if(match_cons(z_7, sym_Rec_2))
        {
          a_8 = ATgetArgument(z_7, 0);
          b_8 = ATgetArgument(z_7, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_8), (ATerm)ATempty, not_null(b_8))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_8)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(z_7, sym_SDef_3))
            {
              a_8 = ATgetArgument(z_7, 0);
              b_8 = ATgetArgument(z_7, 1);
              s_7 = ATgetArgument(z_7, 2);
              f_7 :
              if(((ATgetType(b_8) == AT_LIST) && ATisEmpty(b_8)))
                {
                  g_7 :
                  if(match_cons(s_7, sym_Rec_2))
                    {
                      t_7 = ATgetArgument(s_7, 0);
                      u_7 = ATgetArgument(s_7, 1);
                      {
                        ATerm k_8 = NULL;
                        ATerm p_8 = NULL;
                        t = not_null(u_7);
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
                            l_8 = t;
                            s_6 :
                            if(match_cons(l_8, sym_Call_2))
                              {
                                m_8 = ATgetArgument(l_8, 0);
                                o_8 = ATgetArgument(l_8, 1);
                                t_6 :
                                if(match_cons(m_8, sym_SVar_1))
                                  {
                                    n_8 = ATgetArgument(m_8, 0);
                                    u_6 :
                                    if(((ATgetType(o_8) == AT_LIST) && ATisEmpty(o_8)))
                                      {
                                        {
                                          if(((t_7 != NULL) && (t_7 != n_8)))
                                            _fail(n_8);
                                          else
                                            t_7 = n_8;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_8)), (ATerm) ATempty);
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
                            p_8 = t;
                            if(((k_8 != NULL) && (k_8 != p_8)))
                              _fail(p_8);
                            else
                              k_8 = p_8;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_8), (ATerm)ATempty, not_null(k_8));
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
              if(match_cons(z_7, sym_Seq_2))
                {
                  a_8 = ATgetArgument(z_7, 0);
                  b_8 = ATgetArgument(z_7, 1);
                  h_7 :
                  if(match_cons(b_8, sym_Seq_2))
                    {
                      x_7 = ATgetArgument(b_8, 0);
                      y_7 = ATgetArgument(b_8, 1);
                      i_7 :
                      if(match_cons(a_8, sym_Where_1))
                        {
                          w_7 = ATgetArgument(a_8, 0);
                          j_7 :
                          if(match_cons(x_7, sym_Build_1))
                            {
                              v_7 = ATgetArgument(x_7, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_7)), not_null(y_7)));
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(a_8, sym_Id_0))
                            {
                              t = b_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(b_8, sym_Build_1))
                        {
                          x_7 = ATgetArgument(b_8, 0);
                          k_7 :
                          if(match_cons(a_8, sym_Where_1))
                            {
                              w_7 = ATgetArgument(a_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_7)));
                            }
                          else
                            {
                              if(match_cons(a_8, sym_Id_0))
                                {
                                  t = b_10(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(b_8, sym_Id_0))
                            {
                              l_7 :
                              if(match_cons(a_8, sym_Id_0))
                                {
                                  ATerm z_6 = t;
                                  int c_8 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_10(t);
                                      ;
                                      LocalPopChoice(c_8);
                                    }
                                  else
                                    {
                                      t = z_6;
                                      t = b_10(t);
                                    }
                                }
                              else
                                {
                                  t = a_10(t);
                                }
                            }
                          else
                            {
                              m_7 :
                              if(match_cons(a_8, sym_Id_0))
                                {
                                  t = b_10(t);
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
                  if(match_cons(z_7, sym_Scope_2))
                    {
                      a_8 = ATgetArgument(z_7, 0);
                      b_8 = ATgetArgument(z_7, 1);
                      n_7 :
                      if(match_cons(b_8, sym_Scope_2))
                        {
                          x_7 = ATgetArgument(b_8, 0);
                          y_7 = ATgetArgument(b_8, 1);
                          o_7 :
                          if(((ATgetType(a_8) == AT_LIST) && ATisEmpty(a_8)))
                            {
                              {
                                ATerm d_8 = t;
                                int e_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = c_10(t);
                                    ;
                                    LocalPopChoice(e_8);
                                  }
                                else
                                  {
                                    t = d_8;
                                    t = d_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = c_10(t);
                            }
                        }
                      else
                        {
                          p_7 :
                          if(((ATgetType(a_8) == AT_LIST) && ATisEmpty(a_8)))
                            {
                              t = d_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(z_7, sym_Thread_1))
                        {
                          a_8 = ATgetArgument(z_7, 0);
                          t = e_10(t);
                        }
                      else
                        {
                          if(match_cons(z_7, sym_Some_1))
                            {
                              a_8 = ATgetArgument(z_7, 0);
                              t = f_10(t);
                            }
                          else
                            {
                              if(match_cons(z_7, sym_One_1))
                                {
                                  a_8 = ATgetArgument(z_7, 0);
                                  t = g_10(t);
                                }
                              else
                                {
                                  if(match_cons(z_7, sym_All_1))
                                    {
                                      a_8 = ATgetArgument(z_7, 0);
                                      t = h_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(z_7, sym_Bagof_1))
                                        {
                                          a_8 = ATgetArgument(z_7, 0);
                                          t = i_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(z_7, sym_Call_2))
                                            {
                                              a_8 = ATgetArgument(z_7, 0);
                                              b_8 = ATgetArgument(z_7, 1);
                                              {
                                                ATerm f_8 = t;
                                                int g_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_10(t);
                                                    ;
                                                    LocalPopChoice(g_8);
                                                  }
                                                else
                                                  {
                                                    t = f_8;
                                                    t = k_10(t);
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
ATerm repeat_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm s_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = d_88(t);
      t = s_10(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = s_10(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm g_89 (ATerm), ATerm h_89 (ATerm))
{
  t = g_89(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = downup2_2(t, g_89, h_89);
      return(t);
    }
    t = _all(t, q_0);
    t = h_89(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym__2))
    {
      a_11 = ATgetArgument(z_10, 0);
      b_11 = ATgetArgument(z_10, 1);
      {
        ATerm f_11 = NULL,h_11 = NULL;
        ATerm g_11 = NULL;
        t = SSLgetAnnotations(not_null(z_10));
        {
          g_11 = t;
          if(((f_11 != NULL) && (f_11 != g_11)))
            _fail(g_11);
          else
            f_11 = g_11;
        }
        {
          t = not_null(a_11);
          {
            ATerm j_11 = NULL;
            t = w_67(t);
            {
              h_11 = t;
              {
                t = not_null(b_11);
                {
                  ATerm l_11 = NULL;
                  t = x_67(t);
                  {
                    j_11 = t;
                    {
                      ATerm m_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_11), not_null(j_11)), not_null(f_11));
                      {
                        m_11 = t;
                        if(((l_11 != NULL) && (l_11 != m_11)))
                          _fail(m_11);
                        else
                          l_11 = m_11;
                      }
                      t = not_null(l_11);
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
  ATerm h_8;
  h_8 = t;
  {
    ATerm t_11 = NULL;
    ATerm u_11 = NULL;
    t = term_i_8;
    {
      t = whoami_0(t);
      {
        u_11 = t;
        if(((t_11 != NULL) && (t_11 != u_11)))
          _fail(u_11);
        else
          t_11 = u_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(t_11)), term_q_8));
      {
        t = printnl_0(t);
        {
          t = term_s_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym__2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm t_8;
        t_8 = t;
        t = SSL_printnl(not_null(z_11), not_null(a_12));
        t = t_8;
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
  ATerm f_12 = NULL;
  f_12 = t;
  t = SSL_implode_string(not_null(f_12));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
        k_12 = t;
        j_12 :
        if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
          {
            l_12 = ATgetFirst((ATermList) k_12);
            m_12 = (ATerm) ATgetNext((ATermList) k_12);
            {
              t = not_null(l_12);
              {
                ATerm r_0 (ATerm t)
                {
                  t = not_null(m_12);
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
  ATerm w_12 = NULL;
  ATerm y_12 = NULL;
  w_12 = t;
  {
    ATerm z_12 = NULL;
    ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
    t = not_null(w_12);
    {
      z_12 = t;
      {
        t = SSL_explode_term(not_null(z_12));
        {
          b_13 = t;
          u_12 :
          if(match_cons(b_13, sym__2))
            {
              c_13 = ATgetArgument(b_13, 0);
              d_13 = ATgetArgument(b_13, 1);
              v_12 :
              if(match_string(c_13, ""))
                {
                  if(((y_12 != NULL) && (y_12 != d_13)))
                    _fail(d_13);
                  else
                    y_12 = d_13;
                }
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
      t = not_null(y_12);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_13);
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          t = Nil_0(t);
          t = h_95(t);
        }
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym__2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(m_13);
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
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  t = SSL_explode_string(not_null(r_13));
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
              a_14 = t;
              z_13 :
              if(match_cons(a_14, sym_Path_1))
                {
                  b_14 = ATgetArgument(a_14, 0);
                  t = not_null(b_14);
                }
              else
                {
                  if(match_cons(a_14, sym_Var_1))
                    {
                      b_14 = ATgetArgument(a_14, 0);
                      {
                        t = not_null(b_14);
                        {
                          ATerm g_9 = t;
                          int h_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(h_9);
                            }
                          else
                            {
                              t = g_9;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_i_9;
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
                      if(match_cons(a_14, sym_Prefix_2))
                        {
                          b_14 = ATgetArgument(a_14, 0);
                          c_14 = ATgetArgument(a_14, 1);
                          {
                            ATerm h_14 = NULL,j_14 = NULL;
                            ATerm j_9;
                            j_9 = t;
                            {
                              ATerm i_14 = NULL;
                              t = not_null(b_14);
                              {
                                t = eval_config_0(t);
                                {
                                  i_14 = t;
                                  if(((h_14 != NULL) && (h_14 != i_14)))
                                    _fail(i_14);
                                  else
                                    h_14 = i_14;
                                }
                              }
                            }
                            t = j_9;
                            {
                              ATerm k_14 = NULL;
                              t = not_null(c_14);
                              {
                                t = eval_config_0(t);
                                {
                                  k_14 = t;
                                  if(((j_14 != NULL) && (j_14 != k_14)))
                                    _fail(k_14);
                                  else
                                    j_14 = k_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), not_null(j_14));
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
  ATerm s_14 = NULL;
  s_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(s_14));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_9;
            n_9 = t;
            {
              ATerm u_14 = NULL;
              ATerm v_14 = NULL;
              v_14 = t;
              if(((u_14 != NULL) && (u_14 != v_14)))
                _fail(v_14);
              else
                u_14 = v_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(s_14), not_null(u_14));
                t = table_put_0(t);
              }
            }
            t = n_9;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_107 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm v_9;
    v_9 = t;
    {
      ATerm z_14 = NULL;
      ATerm a_15 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          a_15 = t;
          if(((z_14 != NULL) && (z_14 != a_15)))
            _fail(a_15);
          else
            z_14 = a_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), term_x_9);
        t = geq_0(t);
      }
    }
    t = v_9;
    t = x_107(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  g_15 = t;
  e_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      f_15 :
      if(match_cons(i_15, sym_Stream_1))
        {
          j_15 = ATgetArgument(i_15, 0);
          {
            ATerm m_15 = NULL;
            t = SSL_fputc(not_null(h_15), not_null(j_15));
            {
              ATerm n_15 = NULL;
              n_15 = t;
              if(((m_15 != NULL) && (m_15 != n_15)))
                _fail(n_15);
              else
                m_15 = n_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_15));
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  u_15 = t;
  s_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      x_15 = ATgetArgument(u_15, 1);
      t_15 :
      if(match_cons(v_15, sym_Stream_1))
        {
          w_15 = ATgetArgument(v_15, 0);
          {
            ATerm a_16 = NULL;
            t = SSL_write_term_to_stream_text(not_null(w_15), not_null(x_15));
            {
              ATerm b_16 = NULL;
              b_16 = t;
              if(((a_16 != NULL) && (a_16 != b_16)))
                _fail(b_16);
              else
                a_16 = b_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_16));
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
    ATerm f_16 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm g_16 = NULL;
      g_16 = t;
      if(((f_16 != NULL) && (f_16 != g_16)))
        _fail(g_16);
      else
        f_16 = g_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(f_16));
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  m_16 = t;
  k_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      p_16 = ATgetArgument(m_16, 1);
      l_16 :
      if(match_cons(n_16, sym_Stream_1))
        {
          o_16 = ATgetArgument(n_16, 0);
          {
            ATerm s_16 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(o_16), not_null(p_16));
            {
              ATerm t_16 = NULL;
              t_16 = t;
              if(((s_16 != NULL) && (s_16 != t_16)))
                _fail(t_16);
              else
                s_16 = t_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_16));
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
ATerm WriteToFile_1 (ATerm t, ATerm t_106 (ATerm))
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        t = not_null(b_17);
        {
          ATerm g_17 = NULL;
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), term_z_9);
            {
              t = open_stream_0(t);
              {
                ATerm i_17 = NULL;
                i_17 = t;
                if(((h_17 != NULL) && (h_17 != i_17)))
                  _fail(i_17);
                else
                  h_17 = i_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(c_17));
                  {
                    t = t_106(t);
                    {
                      t = fclose_0(t);
                      t = not_null(c_17);
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
  ATerm q_17 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm r_17 = NULL,s_17 = NULL;
            r_17 = t;
            n_17 :
            if(match_cons(r_17, sym_Output_1))
              {
                s_17 = ATgetArgument(r_17, 0);
                if(((q_17 != NULL) && (q_17 != s_17)))
                  _fail(s_17);
                else
                  q_17 = s_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          ;
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm t_17 = NULL;
            t = term_p_10;
            {
              t_17 = t;
              if(((q_17 != NULL) && (q_17 != t_17)))
                _fail(t_17);
              else
                q_17 = t_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = l_10;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(q_17);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm u_17 = NULL;
              u_17 = t;
              p_17 :
              if(!(match_cons(u_17, sym_Binary_0)))
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
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_109 (ATerm))
{
  ATerm a_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  ATerm t_10;
  t_10 = t;
  t = dtime_0(t);
  t = t_10;
  {
    t = v_109(t);
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm b_18 = NULL;
        t = dtime_0(t);
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
      }
      t = u_10;
      {
        c_18 = t;
        z_17 :
        if(match_cons(c_18, sym__2))
          {
            d_18 = ATgetArgument(c_18, 0);
            e_18 = ATgetArgument(c_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_18))), not_null(e_18));
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
  ATerm m_18 = NULL,n_18 = NULL;
  ATerm t_18 (ATerm t)
  {
    t = SSL_fclose(not_null(n_18));
    return(t);
  }
  n_18 = t;
  l_18 :
  if(match_cons(n_18, sym_Stream_1))
    {
      m_18 = ATgetArgument(n_18, 0);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(m_18));
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = t_18(t);
          }
      }
    }
  else
    {
      t = t_18(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym_Stream_1))
    {
      x_18 = ATgetArgument(w_18, 0);
      t = SSL_read_term_from_stream(not_null(x_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_106 (ATerm))
{
  ATerm x_10;
  x_10 = t;
  {
    ATerm c_19 = NULL,e_19 = NULL;
    ATerm c_11;
    c_11 = t;
    {
      ATerm d_19 = NULL;
      t = f_106(t);
      {
        d_19 = t;
        if(((c_19 != NULL) && (c_19 != d_19)))
          _fail(d_19);
        else
          c_19 = d_19;
      }
    }
    t = c_11;
    {
      ATerm f_19 = NULL;
      f_19 = t;
      if(((e_19 != NULL) && (e_19 != f_19)))
        _fail(f_19);
      else
        e_19 = f_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_19)), not_null(c_19)));
        t = printnl_0(t);
      }
    }
  }
  t = x_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm q_19 = NULL;
        t = SSL_fopen(not_null(m_19), not_null(n_19));
        {
          ATerm r_19 = NULL;
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_19));
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
  ATerm v_19 = NULL;
  v_19 = t;
  t = SSL_is_string(not_null(v_19));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm z_19 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm a_20 = NULL;
    a_20 = t;
    if(((z_19 != NULL) && (z_19 != a_20)))
      _fail(a_20);
    else
      z_19 = a_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_19));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm d_20 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm e_20 = NULL;
    e_20 = t;
    if(((d_20 != NULL) && (d_20 != e_20)))
      _fail(e_20);
    else
      d_20 = e_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_20));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm h_20 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm i_20 = NULL;
    i_20 = t;
    if(((h_20 != NULL) && (h_20 != i_20)))
      _fail(i_20);
    else
      h_20 = i_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_20));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(o_20, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(o_20, sym_stdin_0))
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
  ATerm y_20 = NULL;
  ATerm a_21 = NULL,b_21 = NULL;
  y_20 = t;
  {
    ATerm c_21 = NULL;
    ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
    t = not_null(y_20);
    {
      c_21 = t;
      {
        t = SSL_explode_term(not_null(c_21));
        {
          e_21 = t;
          v_20 :
          if(match_cons(e_21, sym__2))
            {
              f_21 = ATgetArgument(e_21, 0);
              g_21 = ATgetArgument(e_21, 1);
              w_20 :
              if(match_string(f_21, ""))
                {
                  x_20 :
                  if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
                    {
                      h_21 = ATgetFirst((ATermList) g_21);
                      i_21 = (ATerm) ATgetNext((ATermList) g_21);
                      {
                        if(((b_21 != NULL) && (b_21 != h_21)))
                          _fail(h_21);
                        else
                          b_21 = h_21;
                        if(((a_21 != NULL) && (a_21 != i_21)))
                          _fail(i_21);
                        else
                          a_21 = i_21;
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
    t = not_null(b_21);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm i_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    ATerm t_21 = NULL,u_21 = NULL;
                    t_21 = t;
                    o_21 :
                    if(match_cons(t_21, sym_Path_1))
                      {
                        u_21 = ATgetArgument(t_21, 0);
                        t = not_null(u_21);
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
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = i_11;
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
  ATerm c_22 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL;
      ATerm b_22 = NULL;
      b_22 = t;
      if(((a_22 != NULL) && (a_22 != b_22)))
        _fail(b_22);
      else
        a_22 = b_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), term_p_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_q_11;
          return(t);
        }
        t = debug_1(t, g_1);
        _fail(t);
      }
    }
  {
    ATerm r_11;
    r_11 = t;
    {
      ATerm d_22 = NULL;
      t = read_from_stream_0(t);
      {
        d_22 = t;
        if(((c_22 != NULL) && (c_22 != d_22)))
          _fail(d_22);
        else
          c_22 = d_22;
      }
    }
    t = r_11;
    {
      t = fclose_0(t);
      t = not_null(c_22);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_102 (ATerm), ATerm h_102 (ATerm))
{
  ATerm i_22 = NULL,k_22 = NULL;
  ATerm s_11;
  s_11 = t;
  {
    ATerm j_22 = NULL;
    t = g_102(t);
    {
      j_22 = t;
      if(((i_22 != NULL) && (i_22 != j_22)))
        _fail(j_22);
      else
        i_22 = j_22;
    }
  }
  t = s_11;
  {
    ATerm l_22 = NULL;
    t = h_102(t);
    {
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(k_22));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_22 = NULL;
  ATerm v_11;
  v_11 = t;
  {
    ATerm w_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          ATerm s_22 = NULL,t_22 = NULL;
          s_22 = t;
          p_22 :
          if(match_cons(s_22, sym_Input_1))
            {
              t_22 = ATgetArgument(s_22, 0);
              if(((r_22 != NULL) && (r_22 != t_22)))
                _fail(t_22);
              else
                r_22 = t_22;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_1);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = w_11;
        {
          ATerm u_22 = NULL;
          t = term_c_12;
          {
            u_22 = t;
            if(((r_22 != NULL) && (r_22 != u_22)))
              _fail(u_22);
            else
              r_22 = u_22;
          }
        }
      }
  }
  t = v_11;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(r_22);
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
    ATerm z_22 = NULL;
    z_22 = t;
    x_22 :
    if(!(match_string(z_22, "-k")))
      {
        if(!(match_string(z_22, "--keep")))
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
      ATerm a_23 = NULL;
      ATerm b_23 = NULL;
      t = string_to_int_0(t);
      {
        b_23 = t;
        if(((a_23 != NULL) && (a_23 != b_23)))
          _fail(b_23);
        else
          a_23 = b_23;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(a_23));
        t = set_config_0(t);
      }
    }
    t = d_12;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  t = ArgOption_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  t = SSL_string_to_int(not_null(e_23));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm m_23 = NULL;
        m_23 = t;
        h_23 :
        if(!(match_string(m_23, "-S")))
          {
            if(!(match_string(m_23, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_o_12;
        t = set_config_0(t);
        t = term_p_12;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_q_12;
        return(t);
      }
      t = Option_3(t, m_1, n_1, o_1);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm n_23 = NULL;
              n_23 = t;
              i_23 :
              if(!(match_string(n_23, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm q_23 = NULL;
              ATerm t_12;
              t_12 = t;
              {
                ATerm o_23 = NULL;
                ATerm p_23 = NULL;
                t = string_to_int_0(t);
                {
                  p_23 = t;
                  if(((o_23 != NULL) && (o_23 != p_23)))
                    _fail(p_23);
                  else
                    o_23 = p_23;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(o_23));
                  t = set_config_0(t);
                }
              }
              t = t_12;
              {
                ATerm r_23 = NULL;
                r_23 = t;
                if(((q_23 != NULL) && (q_23 != r_23)))
                  _fail(r_23);
                else
                  q_23 = r_23;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_23));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_x_12;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm s_23 = NULL;
                s_23 = t;
                l_23 :
                if(!(match_string(s_23, "-s")))
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
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_13);
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
    ATerm y_23 = NULL;
    y_23 = t;
    v_23 :
    if(!(match_string(y_23, "-o")))
      {
        if(!(match_string(y_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm b_24 = NULL;
    ATerm o_13;
    o_13 = t;
    {
      ATerm z_23 = NULL;
      ATerm a_24 = NULL;
      a_24 = t;
      if(((z_23 != NULL) && (z_23 != a_24)))
        _fail(a_24);
      else
        z_23 = a_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(z_23));
        t = set_config_0(t);
      }
    }
    t = o_13;
    {
      ATerm c_24 = NULL;
      c_24 = t;
      if(((b_24 != NULL) && (b_24 != c_24)))
        _fail(c_24);
      else
        b_24 = c_24;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_24));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm g_24 = NULL;
          g_24 = t;
          f_24 :
          if(!(match_string(g_24, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_2 (ATerm t)
        {
          t = term_v_13;
          t = set_config_0(t);
          t = term_w_13;
          return(t);
        }
        ATerm c_2 (ATerm t)
        {
          t = term_x_13;
          return(t);
        }
        t = Option_3(t, a_2, b_2, c_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  m_24 = t;
  k_24 :
  if(match_string(m_24, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(m_24) == AT_LIST) && !(ATisEmpty(m_24))))
        {
          n_24 = ATgetFirst((ATermList) m_24);
          o_24 = (ATerm) ATgetNext((ATermList) m_24);
          l_24 :
          if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
            {
              p_24 = ATgetFirst((ATermList) o_24);
              q_24 = (ATerm) ATgetNext((ATermList) o_24);
              {
                ATerm u_24 = NULL;
                ATerm y_13;
                y_13 = t;
                {
                  t = not_null(n_24);
                  t = j_0(t);
                }
                t = y_13;
                {
                  ATerm v_24 = NULL;
                  t = not_null(p_24);
                  {
                    t = k_0(t);
                    {
                      v_24 = t;
                      if(((u_24 != NULL) && (u_24 != v_24)))
                        _fail(v_24);
                      else
                        u_24 = v_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_24)), not_null(u_24));
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
    ATerm c_25 = NULL;
    c_25 = t;
    z_24 :
    if(!(match_string(c_25, "-i")))
      {
        if(!(match_string(c_25, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm f_25 = NULL;
    ATerm d_14;
    d_14 = t;
    {
      ATerm d_25 = NULL;
      ATerm e_25 = NULL;
      e_25 = t;
      if(((d_25 != NULL) && (d_25 != e_25)))
        _fail(e_25);
      else
        d_25 = e_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, not_null(d_25));
        t = set_config_0(t);
      }
    }
    t = d_14;
    {
      ATerm g_25 = NULL;
      g_25 = t;
      if(((f_25 != NULL) && (f_25 != g_25)))
        _fail(g_25);
      else
        f_25 = g_25;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_25));
    }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = g_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm k_25 = NULL;
  t = report_run_time_0(t);
  {
    ATerm l_25 = NULL;
    t = term_i_8;
    {
      t = whoami_0(t);
      {
        l_25 = t;
        if(((k_25 != NULL) && (k_25 != l_25)))
          _fail(l_25);
        else
          k_25 = l_25;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATempty, term_o_14), not_null(k_25)));
      {
        t = printnl_0(t);
        {
          t = term_s_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_p_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_TicksToSeconds(not_null(o_25));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym__2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_25), not_null(v_25));
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = SSL_addr(not_null(u_25), not_null(v_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_100 (ATerm), ATerm s_100 (ATerm))
{
  ATerm t_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_100(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = t_14;
      {
        ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
        c_26 = t;
        b_26 :
        if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
          {
            d_26 = ATgetFirst((ATermList) c_26);
            e_26 = (ATerm) ATgetNext((ATermList) c_26);
            {
              ATerm h_26 = NULL;
              ATerm i_26 = NULL;
              t = not_null(e_26);
              {
                t = foldr_2(t, r_100, s_100);
                {
                  i_26 = t;
                  if(((h_26 != NULL) && (h_26 != i_26)))
                    _fail(i_26);
                  else
                    h_26 = i_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), not_null(h_26));
                t = s_100(t);
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
ATerm crush_2 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm p_26 = NULL;
  ATerm r_26 = NULL;
  p_26 = t;
  {
    ATerm s_26 = NULL;
    ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
    t = not_null(p_26);
    {
      s_26 = t;
      {
        t = SSL_explode_term(not_null(s_26));
        {
          u_26 = t;
          o_26 :
          if(match_cons(u_26, sym__2))
            {
              v_26 = ATgetArgument(u_26, 0);
              w_26 = ATgetArgument(u_26, 1);
              if(((r_26 != NULL) && (r_26 != w_26)))
                _fail(w_26);
              else
                r_26 = w_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_26);
      t = foldr_2(t, k_104, l_104);
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
      t = term_n_12;
      return(t);
    }
    t = crush_2(t, g_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym__2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      {
        ATerm x_14;
        x_14 = t;
        {
          ATerm y_14 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_27), not_null(e_27));
              ;
              LocalPopChoice(b_15);
            }
          else
            {
              t = y_14;
              t = SSL_gtr(not_null(d_27), not_null(e_27));
            }
        }
        t = x_14;
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
  ATerm k_27 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
      l_27 = t;
      j_27 :
      if(match_cons(l_27, sym__2))
        {
          m_27 = ATgetArgument(l_27, 0);
          n_27 = ATgetArgument(l_27, 1);
          {
            if(((k_27 != NULL) && (k_27 != m_27)))
              _fail(m_27);
            else
              k_27 = m_27;
            if(((k_27 != NULL) && (k_27 != n_27)))
              _fail(n_27);
            else
              k_27 = n_27;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_107 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    ATerm k_15;
    k_15 = t;
    {
      ATerm q_27 = NULL;
      ATerm r_27 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_27), term_s_8);
        t = geq_0(t);
      }
    }
    t = k_15;
    t = w_107(t);
    return(t);
  }
  t = try_1(t, h_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm v_27 = NULL,x_27 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm w_27 = NULL;
      t = run_time_0(t);
      {
        w_27 = t;
        if(((v_27 != NULL) && (v_27 != w_27)))
          _fail(w_27);
        else
          v_27 = w_27;
      }
    }
    t = l_15;
    {
      ATerm y_27 = NULL;
      t = term_i_8;
      {
        t = whoami_0(t);
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_15), not_null(v_27)), term_o_15), not_null(x_27)));
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
    t = term_n_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_Version_0))
    {
      ATerm h_28 = NULL,j_28 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm i_28 = NULL;
        t = SSLgetAnnotations(not_null(f_28));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
      }
      t = q_15;
      {
        ATerm k_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_28));
        {
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
        }
        t = not_null(j_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_110 (ATerm))
{
  ATerm r_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = r_15;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              {
                ATerm e_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = e_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, j_2);
      }
    }
  t = t_110(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = SSL_table_create(not_null(p_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  {
    ATerm i_16;
    i_16 = t;
    {
      t = term_j_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_q_16, not_null(t_28));
          t = table_put_0(t);
        }
      }
    }
    t = i_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  t = SSL_table_destroy(not_null(x_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  t = SSL_exit(not_null(b_29));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm e_29 (ATerm t)
  {
    ATerm r_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = r_16;
        t = Cons_2(t, s_94, e_29);
      }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  n_29 = t;
  k_29 :
  if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
    {
      l_29 = ATgetFirst((ATermList) n_29);
      m_29 = (ATerm) ATgetNext((ATermList) n_29);
      {
        ATerm q_29 = NULL;
        t = not_null(m_29);
        {
          ATerm v_16;
          v_16 = t;
          {
            ATerm r_29 = NULL,t_29 = NULL,v_29 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              ATerm s_29 = NULL;
              t = i_0(t);
              {
                s_29 = t;
                if(((r_29 != NULL) && (r_29 != s_29)))
                  _fail(s_29);
                else
                  r_29 = s_29;
              }
            }
            t = w_16;
            {
              ATerm u_29 = NULL;
              t = not_null(l_29);
              {
                t = g_0(t);
                {
                  u_29 = t;
                  if(((t_29 != NULL) && (t_29 != u_29)))
                    _fail(u_29);
                  else
                    t_29 = u_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_29)), not_null(t_29));
                {
                  v_29 = t;
                  if(((q_29 != NULL) && (q_29 != v_29)))
                    _fail(v_29);
                  else
                    q_29 = v_29;
                }
              }
            }
          }
          t = v_16;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(q_29);
              return(t);
            }
            t = reverse_acc_2(t, g_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_29) == AT_LIST) && ATisEmpty(n_29)))
        {
          {
            t = term_i_8;
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
ATerm short_description_1 (ATerm t, ATerm t_112 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm g_30 = NULL,h_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym_Program_1))
    {
      h_30 = ATgetArgument(g_30, 0);
      {
        ATerm k_30 = NULL,m_30 = NULL;
        ATerm l_30 = NULL;
        t = SSLgetAnnotations(not_null(g_30));
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
        {
          t = not_null(h_30);
          {
            ATerm o_30 = NULL;
            t = q_75(t);
            {
              m_30 = t;
              {
                ATerm p_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_30)), not_null(k_30));
                {
                  p_30 = t;
                  if(((o_30 != NULL) && (o_30 != p_30)))
                    _fail(p_30);
                  else
                    o_30 = p_30;
                }
                t = not_null(o_30);
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
  ATerm y_30 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL;
      t = term_p_14;
      {
        t = get_config_0(t);
        {
          z_30 = t;
          if(((y_30 != NULL) && (y_30 != z_30)))
            _fail(z_30);
          else
            y_30 = z_30;
        }
      }
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm a_31 = NULL;
            a_31 = t;
            if(((y_30 != NULL) && (y_30 != a_31)))
              _fail(a_31);
            else
              y_30 = a_31;
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
        t = not_null(y_30);
        return(t);
      }
      t = short_description_1(t, v_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, r_2);
    {
      t = term_d_17;
      {
        t = echo_0(t);
        {
          t = term_k_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm b_31 = NULL;
                  ATerm c_31 = NULL;
                  c_31 = t;
                  if(((b_31 != NULL) && (b_31 != c_31)))
                    _fail(c_31);
                  else
                    b_31 = c_31;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), term_l_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_2);
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm d_31 = NULL;
                    ATerm e_31 = NULL;
                    ATerm a_3 (ATerm t)
                    {
                      t = not_null(y_30);
                      return(t);
                    }
                    t = long_description_1(t, a_3);
                    {
                      e_31 = t;
                      if(((d_31 != NULL) && (d_31 != e_31)))
                        _fail(e_31);
                      else
                        d_31 = e_31;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_31)), term_m_17);
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
  ATerm o_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = o_17;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym_Undefined_1))
    {
      p_31 = ATgetArgument(o_31, 0);
      {
        ATerm s_31 = NULL,u_31 = NULL;
        ATerm t_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm w_31 = NULL;
            t = r_75(t);
            {
              u_31 = t;
              {
                ATerm x_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_31)), not_null(s_31));
                {
                  x_31 = t;
                  if(((w_31 != NULL) && (w_31 != x_31)))
                    _fail(x_31);
                  else
                    w_31 = x_31;
                }
                t = not_null(w_31);
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
ATerm fetch_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm m_33 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_95, _id);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = Cons_2(t, _id, m_33);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_111 (ATerm))
{
  t = fetch_1(t, t_111);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(((ATgetType(o_33) == AT_LIST) && ATisEmpty(o_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
        {
          p_33 = ATgetFirst((ATermList) o_33);
          q_33 = (ATerm) ATgetNext((ATermList) o_33);
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
  ATerm y_17;
  y_17 = t;
  {
    ATerm t_33 = NULL;
    ATerm w_33 = NULL;
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm u_33 = NULL;
          ATerm v_33 = NULL;
          v_33 = t;
          if(((u_33 != NULL) && (u_33 != v_33)))
            _fail(v_33);
          else
            u_33 = v_33;
          t = (ATerm) ATinsert(ATempty, not_null(u_33));
        }
      }
    {
      w_33 = t;
      if(((t_33 != NULL) && (t_33 != w_33)))
        _fail(w_33);
      else
        t_33 = w_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(t_33));
      t = printnl_0(t);
    }
  }
  t = y_17;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_p_14;
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
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  c_34 :
  if(match_cons(d_34, sym_Help_0))
    {
      ATerm f_34 = NULL,h_34 = NULL;
      ATerm j_18;
      j_18 = t;
      {
        ATerm g_34 = NULL;
        t = SSLgetAnnotations(not_null(d_34));
        {
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
        }
      }
      t = j_18;
      {
        ATerm i_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_34));
        {
          i_34 = t;
          if(((h_34 != NULL) && (h_34 != i_34)))
            _fail(i_34);
          else
            h_34 = i_34;
        }
        t = not_null(h_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm k_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = k_18;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm o_34 = NULL;
        o_34 = t;
        m_34 :
        if(!(match_string(o_34, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_s_18;
        t = set_config_0(t);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = Option_3(t, b_3, c_3, d_3);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm p_34 = NULL;
          p_34 = t;
          n_34 :
          if(!(match_string(p_34, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_s_18;
          {
            t = set_config_0(t);
            {
              t = term_z_18;
              t = set_config_0(t);
            }
          }
          t = term_a_19;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_b_19;
          return(t);
        }
        t = Option_3(t, e_3, f_3, g_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,z_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      z_34 = ATgetArgument(s_34, 1);
      t = SSL_table_get(not_null(t_34), not_null(z_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym__3))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      j_35 = ATgetArgument(g_35, 2);
      {
        ATerm g_19;
        g_19 = t;
        {
          ATerm q_35 = NULL;
          ATerm r_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_35), not_null(i_35));
          {
            ATerm h_19 = t;
            int i_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_19);
              }
            else
              {
                t = h_19;
                t = (ATerm) ATempty;
              }
            {
              r_35 = t;
              if(((q_35 != NULL) && (q_35 != r_35)))
                _fail(r_35);
              else
                q_35 = r_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_35), not_null(i_35), (ATerm) ATinsert(CheckATermList(not_null(q_35)), not_null(j_35)));
            t = table_put_0(t);
          }
        }
        t = g_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_112 (ATerm))
{
  ATerm v_35 = NULL;
  ATerm w_35 = NULL;
  t = term_i_8;
  {
    t = y_112(t);
    {
      w_35 = t;
      if(((v_35 != NULL) && (v_35 != w_35)))
        _fail(w_35);
      else
        v_35 = w_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_j_17, not_null(v_35));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_string(c_36, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
        {
          d_36 = ATgetFirst((ATermList) c_36);
          e_36 = (ATerm) ATgetNext((ATermList) c_36);
          {
            ATerm h_36 = NULL;
            ATerm j_19;
            j_19 = t;
            {
              t = not_null(d_36);
              t = a_0(t);
            }
            t = j_19;
            {
              ATerm i_36 = NULL;
              t = term_i_8;
              {
                t = b_0(t);
                {
                  i_36 = t;
                  if(((h_36 != NULL) && (h_36 != i_36)))
                    _fail(i_36);
                  else
                    h_36 = i_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_36)), not_null(h_36));
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
    ATerm n_36 = NULL;
    n_36 = t;
    m_36 :
    if(!(match_string(n_36, "--help")))
      {
        if(!(match_string(n_36, "-h")))
          {
            if(!(match_string(n_36, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_o_19;
    {
      t = set_config_0(t);
      t = term_p_19;
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  t = Option_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  p_36 :
  if(((ATgetType(q_36) == AT_LIST) && !(ATisEmpty(q_36))))
    {
      r_36 = ATgetFirst((ATermList) q_36);
      s_36 = (ATerm) ATgetNext((ATermList) q_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_36)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm))
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
    {
      d_37 = ATgetFirst((ATermList) c_37);
      e_37 = (ATerm) ATgetNext((ATermList) c_37);
      {
        ATerm i_37 = NULL,k_37 = NULL;
        ATerm j_37 = NULL;
        t = SSLgetAnnotations(not_null(c_37));
        {
          j_37 = t;
          if(((i_37 != NULL) && (i_37 != j_37)))
            _fail(j_37);
          else
            i_37 = j_37;
        }
        {
          t = not_null(d_37);
          {
            ATerm m_37 = NULL;
            t = f_69(t);
            {
              k_37 = t;
              {
                t = not_null(e_37);
                {
                  ATerm o_37 = NULL;
                  t = g_69(t);
                  {
                    m_37 = t;
                    {
                      ATerm p_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_37)), not_null(k_37)), not_null(i_37));
                      {
                        p_37 = t;
                        if(((o_37 != NULL) && (o_37 != p_37)))
                          _fail(p_37);
                        else
                          o_37 = p_37;
                      }
                      t = not_null(o_37);
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
  ATerm z_37 = NULL;
  z_37 = t;
  y_37 :
  if(((ATgetType(z_37) == AT_LIST) && ATisEmpty(z_37)))
    {
      {
        ATerm b_38 = NULL,j_38 = NULL;
        ATerm t_19;
        t_19 = t;
        {
          ATerm i_38 = NULL;
          t = SSLgetAnnotations(not_null(z_37));
          {
            i_38 = t;
            if(((b_38 != NULL) && (b_38 != i_38)))
              _fail(i_38);
            else
              b_38 = i_38;
          }
        }
        t = t_19;
        {
          ATerm k_38 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_38));
          {
            k_38 = t;
            if(((j_38 != NULL) && (j_38 != k_38)))
              _fail(k_38);
            else
              j_38 = k_38;
          }
          t = not_null(j_38);
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym__2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(r_38), not_null(s_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm u_19;
  u_19 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_w_19;
      t = w_112(t);
      return(t);
    }
    t = try_1(t, r_3);
  }
  t = u_19;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm a_39 = NULL;
      ATerm x_19;
      x_19 = t;
      {
        ATerm y_38 = NULL;
        ATerm z_38 = NULL;
        z_38 = t;
        if(((y_38 != NULL) && (y_38 != z_38)))
          _fail(z_38);
        else
          y_38 = z_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(y_38));
          t = set_config_0(t);
        }
      }
      t = x_19;
      {
        ATerm b_39 = NULL;
        b_39 = t;
        if(((a_39 != NULL) && (a_39 != b_39)))
          _fail(b_39);
        else
          a_39 = b_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_39));
      }
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm y_19 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = c_20;
              {
                t = w_112(t);
                t = Cons_2(t, _id, w_3);
              }
            }
          ;
          LocalPopChoice(b_20);
        }
      else
        {
          t = y_19;
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
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
    k_39 = t;
    g_39 :
    if(match_cons(k_39, sym__3))
      {
        l_39 = ATgetArgument(k_39, 0);
        m_39 = ATgetArgument(k_39, 1);
        n_39 = ATgetArgument(k_39, 2);
        {
          if(((h_39 != NULL) && (h_39 != l_39)))
            _fail(l_39);
          else
            h_39 = l_39;
          {
            if(((i_39 != NULL) && (i_39 != m_39)))
              _fail(m_39);
            else
              i_39 = m_39;
            {
              if(((j_39 != NULL) && (j_39 != n_39)))
                _fail(n_39);
              else
                j_39 = n_39;
              t = SSL_table_put(not_null(h_39), not_null(i_39), not_null(j_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm q_39 = NULL;
  ATerm j_20;
  j_20 = t;
  {
    t = term_k_20;
    t = table_put_0(t);
  }
  t = j_20;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_112(t);
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
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
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20;
            t_20 = t;
            {
              ATerm u_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = u_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = t_20;
            {
              t = system_usage_0(t);
              {
                t = term_n_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm d_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_21;
                  k_21 = t;
                  {
                    t = term_r_18;
                    t = get_config_0(t);
                  }
                  t = k_21;
                  {
                    t = system_about_0(t);
                    {
                      t = term_n_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = d_21;
                  {
                    ATerm z_3 (ATerm t)
                    {
                      ATerm a_4 (ATerm t)
                      {
                        ATerm r_39 = NULL;
                        r_39 = t;
                        if(((q_39 != NULL) && (q_39 != r_39)))
                          _fail(r_39);
                        else
                          q_39 = r_39;
                        return(t);
                      }
                      t = Undefined_1(t, a_4);
                      return(t);
                    }
                    t = option_defined_1(t, z_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_l_21));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_s_8;
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
        ATerm m_21;
        m_21 = t;
        {
          t = term_e_17;
          t = table_destroy_0(t);
        }
        t = m_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm))
{
  t = parse_options_1(t, v_110);
  {
    t = store_options_0(t);
    {
      t = x_110(t);
      {
        ATerm n_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_110);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = n_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_110(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, k_110);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_4, m_110, n_110, m_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm e_22;
      e_22 = t;
      {
        ATerm u_39 = NULL;
        ATerm v_39 = NULL;
        t = term_p_14;
        {
          t = get_config_0(t);
          {
            v_39 = t;
            if(((u_39 != NULL) && (u_39 != v_39)))
              _fail(v_39);
            else
              u_39 = v_39;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATempty, not_null(u_39)));
          t = printnl_0(t);
        }
      }
      t = e_22;
      return(t);
    }
    t = if_verbose2_1(t, o_4);
    return(t);
  }
  t = iowrap_4(t, e_110, f_110, g_110, n_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_110 (ATerm), ATerm d_110 (ATerm))
{
  t = iowrap_3(t, c_110, d_110, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = _2(t, _id, z_109);
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
