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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_PpIf_4;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_FunDef_3;
Symbol sym_TypeQualifiers_1;
Symbol sym_OldFun_2;
Symbol sym_TranslationUnit_1;
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
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_StringLit_1;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
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
Symbol sym_ParamDecl_2;
Symbol sym_ParamDeclTD_2;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
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
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_TypeQualifiers_1 = ATmakeSymbol("TypeQualifiers", 1, ATfalse);
  ATprotectSymbol(sym_TypeQualifiers_1);
  sym_OldFun_2 = ATmakeSymbol("OldFun", 2, ATfalse);
  ATprotectSymbol(sym_OldFun_2);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
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
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
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
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
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
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDeclTD_2 = ATmakeSymbol("ParamDeclTD", 2, ATfalse);
  ATprotectSymbol(sym_ParamDeclTD_2);
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
ATerm term_d_20;
ATerm term_k_19;
ATerm term_m_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_q_10;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_7;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_z_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
void init_constant_terms (void)
{
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_4);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(sym_Call_2, term_q_4, (ATerm) ATempty);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_4);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_Call_2, term_v_4, (ATerm) ATempty);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_5);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_5);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_a_11);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_a_11);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_a_11);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__3, term_o_16, term_v_16, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_66 (ATerm));
ATerm Call_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm));
ATerm unzip_1 (ATerm, ATerm y_92 (ATerm));
ATerm alltd_1 (ATerm, ATerm n_86 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm l_83 (ATerm));
ATerm downup2_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm _2 (ATerm, ATerm j_63 (ATerm), ATerm k_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_91 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_103 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_102 (ATerm));
ATerm debug_1 (ATerm, ATerm c_101 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm));
ATerm crush_2 (ATerm, ATerm z_95 (ATerm), ATerm a_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_103 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_102 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_106 (ATerm));
ATerm map_1 (ATerm, ATerm n_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_106 (ATerm));
ATerm Program_1 (ATerm, ATerm s_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_101 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_105 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_102 (ATerm));
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
  ATerm i_1 = NULL;
  d_1 = t;
  {
    ATerm j_1 = NULL;
    t = new_0(t);
    {
      j_1 = t;
      if(((i_1 != NULL) && (i_1 != j_1)))
        _fail(j_1);
      else
        i_1 = j_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_1)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_1), (ATerm)ATempty, not_null(d_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym_SVar_1))
    {
      s_2 = ATgetArgument(r_2, 0);
      {
        ATerm v_2 = NULL,x_2 = NULL;
        ATerm w_2 = NULL;
        t = SSLgetAnnotations(not_null(r_2));
        {
          w_2 = t;
          if(((v_2 != NULL) && (v_2 != w_2)))
            _fail(w_2);
          else
            v_2 = w_2;
        }
        {
          t = not_null(s_2);
          {
            ATerm z_2 = NULL;
            t = d_66(t);
            {
              x_2 = t;
              {
                ATerm a_3 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(x_2)), not_null(v_2));
                {
                  a_3 = t;
                  if(((z_2 != NULL) && (z_2 != a_3)))
                    _fail(a_3);
                  else
                    z_2 = a_3;
                }
                t = not_null(z_2);
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
ATerm Call_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym_Call_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      {
        ATerm r_3 = NULL,t_3 = NULL;
        ATerm s_3 = NULL;
        t = SSLgetAnnotations(not_null(l_3));
        {
          s_3 = t;
          if(((r_3 != NULL) && (r_3 != s_3)))
            _fail(s_3);
          else
            r_3 = s_3;
        }
        {
          t = not_null(m_3);
          {
            ATerm v_3 = NULL;
            t = s_66(t);
            {
              t_3 = t;
              {
                t = not_null(n_3);
                {
                  ATerm x_3 = NULL;
                  t = t_66(t);
                  {
                    v_3 = t;
                    {
                      ATerm y_3 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(t_3), not_null(v_3)), not_null(r_3));
                      {
                        y_3 = t;
                        if(((x_3 != NULL) && (x_3 != y_3)))
                          _fail(y_3);
                        else
                          x_3 = y_3;
                      }
                      t = not_null(x_3);
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
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  j_4 = t;
  f_4 :
  if(match_cons(j_4, sym_Let_2))
    {
      k_4 = ATgetArgument(j_4, 0);
      l_4 = ATgetArgument(j_4, 1);
      g_4 :
      if(match_cons(l_4, sym_Call_2))
        {
          m_4 = ATgetArgument(l_4, 0);
          o_4 = ATgetArgument(l_4, 1);
          h_4 :
          if(match_cons(m_4, sym_SVar_1))
            {
              n_4 = ATgetArgument(m_4, 0);
              i_4 :
              if(((ATgetType(o_4) == AT_LIST) && ATisEmpty(o_4)))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_4)), (ATerm) ATempty), not_null(k_4));
                }
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
  ATerm u_4 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym_Fail_0))
    {
      t = term_r_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Id_0))
    {
      t = term_w_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  e_5 = t;
  b_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      i_5 = ATgetArgument(e_5, 1);
      c_5 :
      if(match_cons(f_5, sym__2))
        {
          g_5 = ATgetArgument(f_5, 0);
          h_5 = ATgetArgument(f_5, 1);
          d_5 :
          if(match_cons(i_5, sym__2))
            {
              j_5 = ATgetArgument(i_5, 0);
              k_5 = ATgetArgument(i_5, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_5)), not_null(g_5)), (ATerm) ATinsert(CheckATermList(not_null(k_5)), not_null(h_5)));
            }
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(((ATgetType(s_5) == AT_LIST) && !(ATisEmpty(s_5))))
    {
      t_5 = ATgetFirst((ATermList) s_5);
      u_5 = (ATerm) ATgetNext((ATermList) s_5);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(u_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  z_5 :
  if(((ATgetType(a_6) == AT_LIST) && ATisEmpty(a_6)))
    {
      t = term_z_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm a_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_92(t);
        LocalPopChoice(l_5);
      }
    else
      {
        t = a_5;
        {
          t = p_92(t);
          {
            t = _2(t, r_92, c_6);
            t = q_92(t);
          }
        }
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_92);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_86(t);
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
        t = _all(t, d_6);
      }
    return(t);
  }
  t = d_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm d_10 (ATerm t)
  {
    t = not_null(d_8);
    return(t);
  }
  ATerm e_10 (ATerm t)
  {
    t = not_null(e_8);
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    ATerm d_9 = NULL;
    ATerm e_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(a_8));
    {
      t = conc_0(t);
      {
        e_9 = t;
        if(((d_9 != NULL) && (d_9 != e_9)))
          _fail(e_9);
        else
          d_9 = e_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_9), not_null(b_8));
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = not_null(e_8);
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_p_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_x_5, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_6, (ATerm) ATinsert(ATempty, not_null(d_8)));
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    ATerm n_9 = NULL;
    ATerm o_9 = NULL;
    t = not_null(e_8);
    {
      ATerm r_10 (ATerm t)
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              ATerm i_6 = t;
              int j_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  LocalPopChoice(j_6);
                }
              else
                {
                  t = i_6;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, r_10);
              return(t);
            }
            t = Cons_2(t, b_0, c_0);
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
            t = Cons_2(t, _id, r_10);
          }
        return(t);
      }
      t = r_10(t);
      {
        o_9 = t;
        if(((n_9 != NULL) && (n_9 != o_9)))
          _fail(o_9);
        else
          n_9 = o_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(d_8), not_null(n_9));
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
    ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
    t = not_null(e_8);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm f_0 (ATerm t)
        {
          ATerm k_6 = t;
          int l_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              LocalPopChoice(l_6);
            }
          else
            {
              t = k_6;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, f_0);
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
              {
                ATerm o_6 = t;
                int p_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_6 = t;
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
                        t = q_6;
                      }
                    t = CreateDef2_0(t);
                    LocalPopChoice(p_6);
                  }
                else
                  {
                    t = o_6;
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
      t = unzip_1(t, e_0);
      {
        u_9 = t;
        d_7 :
        if(match_cons(u_9, sym__2))
          {
            v_9 = ATgetArgument(u_9, 0);
            w_9 = ATgetArgument(u_9, 1);
            {
              ATerm x_9 = NULL;
              if(((r_9 != NULL) && (r_9 != v_9)))
                _fail(v_9);
              else
                r_9 = v_9;
              {
                if(((s_9 != NULL) && (s_9 != w_9)))
                  _fail(w_9);
                else
                  s_9 = w_9;
                {
                  t = not_null(s_9);
                  {
                    t = concat_0(t);
                    {
                      x_9 = t;
                      {
                        if(((t_9 != NULL) && (t_9 != x_9)))
                          _fail(x_9);
                        else
                          t_9 = x_9;
                        {
                          ATerm r_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = r_6;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_9), (ATerm) ATmakeAppl(sym_Call_2, not_null(d_8), not_null(r_9)));
    return(t);
  }
  c_8 = t;
  e_7 :
  if(match_cons(c_8, sym_SDef_4))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      v_7 = ATgetArgument(c_8, 2);
      u_7 = ATgetArgument(c_8, 3);
      f_7 :
      if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
        {
          z_7 = ATgetFirst((ATermList) d_8);
          t_7 = (ATerm) ATgetNext((ATermList) d_8);
          g_7 :
          if(match_cons(z_7, sym_DontInline_0))
            {
              h_7 :
              if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_8), not_null(v_7), not_null(u_7));
                }
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
      if(match_cons(c_8, sym_Rec_2))
        {
          d_8 = ATgetArgument(c_8, 0);
          e_8 = ATgetArgument(c_8, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_8), (ATerm)ATempty, not_null(e_8))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(c_8, sym_SDef_3))
            {
              d_8 = ATgetArgument(c_8, 0);
              e_8 = ATgetArgument(c_8, 1);
              v_7 = ATgetArgument(c_8, 2);
              i_7 :
              if(((ATgetType(e_8) == AT_LIST) && ATisEmpty(e_8)))
                {
                  j_7 :
                  if(match_cons(v_7, sym_Rec_2))
                    {
                      w_7 = ATgetArgument(v_7, 0);
                      x_7 = ATgetArgument(v_7, 1);
                      {
                        ATerm n_8 = NULL;
                        ATerm s_8 = NULL;
                        t = not_null(x_7);
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
                            o_8 = t;
                            v_6 :
                            if(match_cons(o_8, sym_Call_2))
                              {
                                p_8 = ATgetArgument(o_8, 0);
                                r_8 = ATgetArgument(o_8, 1);
                                w_6 :
                                if(match_cons(p_8, sym_SVar_1))
                                  {
                                    q_8 = ATgetArgument(p_8, 0);
                                    x_6 :
                                    if(((ATgetType(r_8) == AT_LIST) && ATisEmpty(r_8)))
                                      {
                                        {
                                          if(((w_7 != NULL) && (w_7 != q_8)))
                                            _fail(q_8);
                                          else
                                            w_7 = q_8;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_8)), (ATerm) ATempty);
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
                            s_8 = t;
                            if(((n_8 != NULL) && (n_8 != s_8)))
                              _fail(s_8);
                            else
                              n_8 = s_8;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_8), (ATerm)ATempty, not_null(n_8));
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
              if(match_cons(c_8, sym_Seq_2))
                {
                  d_8 = ATgetArgument(c_8, 0);
                  e_8 = ATgetArgument(c_8, 1);
                  k_7 :
                  if(match_cons(e_8, sym_Seq_2))
                    {
                      a_8 = ATgetArgument(e_8, 0);
                      b_8 = ATgetArgument(e_8, 1);
                      l_7 :
                      if(match_cons(d_8, sym_Where_1))
                        {
                          z_7 = ATgetArgument(d_8, 0);
                          m_7 :
                          if(match_cons(a_8, sym_Build_1))
                            {
                              y_7 = ATgetArgument(a_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_7)), not_null(b_8)));
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(d_8, sym_Id_0))
                            {
                              t = e_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(e_8, sym_Build_1))
                        {
                          a_8 = ATgetArgument(e_8, 0);
                          n_7 :
                          if(match_cons(d_8, sym_Where_1))
                            {
                              z_7 = ATgetArgument(d_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_8)));
                            }
                          else
                            {
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  t = e_10(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(e_8, sym_Id_0))
                            {
                              o_7 :
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  ATerm s_6 = t;
                                  int t_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_10(t);
                                      LocalPopChoice(t_6);
                                    }
                                  else
                                    {
                                      t = s_6;
                                      t = e_10(t);
                                    }
                                }
                              else
                                {
                                  t = d_10(t);
                                }
                            }
                          else
                            {
                              p_7 :
                              if(match_cons(d_8, sym_Id_0))
                                {
                                  t = e_10(t);
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
                  if(match_cons(c_8, sym_Scope_2))
                    {
                      d_8 = ATgetArgument(c_8, 0);
                      e_8 = ATgetArgument(c_8, 1);
                      q_7 :
                      if(match_cons(e_8, sym_Scope_2))
                        {
                          a_8 = ATgetArgument(e_8, 0);
                          b_8 = ATgetArgument(e_8, 1);
                          r_7 :
                          if(((ATgetType(d_8) == AT_LIST) && ATisEmpty(d_8)))
                            {
                              {
                                ATerm u_6 = t;
                                int y_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_10(t);
                                    LocalPopChoice(y_6);
                                  }
                                else
                                  {
                                    t = u_6;
                                    t = g_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = f_10(t);
                            }
                        }
                      else
                        {
                          s_7 :
                          if(((ATgetType(d_8) == AT_LIST) && ATisEmpty(d_8)))
                            {
                              t = g_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(c_8, sym_Thread_1))
                        {
                          d_8 = ATgetArgument(c_8, 0);
                          t = h_10(t);
                        }
                      else
                        {
                          if(match_cons(c_8, sym_Some_1))
                            {
                              d_8 = ATgetArgument(c_8, 0);
                              t = i_10(t);
                            }
                          else
                            {
                              if(match_cons(c_8, sym_One_1))
                                {
                                  d_8 = ATgetArgument(c_8, 0);
                                  t = j_10(t);
                                }
                              else
                                {
                                  if(match_cons(c_8, sym_All_1))
                                    {
                                      d_8 = ATgetArgument(c_8, 0);
                                      t = k_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(c_8, sym_Bagof_1))
                                        {
                                          d_8 = ATgetArgument(c_8, 0);
                                          t = l_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(c_8, sym_Call_2))
                                            {
                                              d_8 = ATgetArgument(c_8, 0);
                                              e_8 = ATgetArgument(c_8, 1);
                                              {
                                                ATerm z_6 = t;
                                                int a_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_10(t);
                                                    LocalPopChoice(a_7);
                                                  }
                                                else
                                                  {
                                                    t = z_6;
                                                    t = n_10(t);
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
ATerm repeat_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm v_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = l_83(t);
      t = v_10(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    t = q_84(t);
    {
      t = _all(t, w_10);
      t = r_84(t);
    }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm j_63 (ATerm), ATerm k_63 (ATerm))
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
  d_11 = t;
  c_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      {
        ATerm j_11 = NULL,l_11 = NULL;
        ATerm k_11 = NULL;
        t = SSLgetAnnotations(not_null(d_11));
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
        {
          t = not_null(e_11);
          {
            ATerm n_11 = NULL;
            t = j_63(t);
            {
              l_11 = t;
              {
                t = not_null(f_11);
                {
                  ATerm p_11 = NULL;
                  t = k_63(t);
                  {
                    n_11 = t;
                    {
                      ATerm q_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_11), not_null(n_11)), not_null(j_11));
                      {
                        q_11 = t;
                        if(((p_11 != NULL) && (p_11 != q_11)))
                          _fail(q_11);
                        else
                          p_11 = q_11;
                      }
                      t = not_null(p_11);
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
  ATerm y_11 = NULL;
  ATerm b_7;
  b_7 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm z_11 = NULL,a_12 = NULL;
      z_11 = t;
      x_11 :
      if(match_cons(z_11, sym_Program_1))
        {
          a_12 = ATgetArgument(z_11, 0);
          if(((y_11 != NULL) && (y_11 != a_12)))
            _fail(a_12);
          else
            y_11 = a_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_8), not_null(y_11)), term_f_8));
      {
        t = printnl_0(t);
        {
          t = term_h_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm i_8;
        i_8 = t;
        t = SSL_printnl(not_null(f_12), not_null(g_12));
        t = i_8;
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
  ATerm l_12 = NULL;
  l_12 = t;
  t = SSL_implode_string(not_null(l_12));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
        q_12 = t;
        p_12 :
        if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
          {
            r_12 = ATgetFirst((ATermList) q_12);
            s_12 = (ATerm) ATgetNext((ATermList) q_12);
            {
              t = not_null(r_12);
              {
                ATerm r_0 (ATerm t)
                {
                  t = not_null(s_12);
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
  ATerm c_13 = NULL;
  ATerm e_13 = NULL;
  c_13 = t;
  {
    ATerm f_13 = NULL;
    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
    t = not_null(c_13);
    {
      f_13 = t;
      {
        t = SSL_explode_term(not_null(f_13));
        {
          h_13 = t;
          a_13 :
          if(match_cons(h_13, sym__2))
            {
              i_13 = ATgetArgument(h_13, 0);
              j_13 = ATgetArgument(h_13, 1);
              b_13 :
              if(match_string(i_13, ""))
                {
                  if(((e_13 != NULL) && (e_13 != j_13)))
                    _fail(j_13);
                  else
                    e_13 = j_13;
                }
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
      t = not_null(e_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm n_13 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_13);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          t = Nil_0(t);
          t = c_91(t);
        }
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym__2))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      {
        t = not_null(r_13);
        {
          ATerm s_0 (ATerm t)
          {
            t = not_null(s_13);
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
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  t = SSL_explode_string(not_null(x_13));
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
ATerm is_string_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = SSL_is_string(not_null(b_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
              k_14 = t;
              j_14 :
              if(match_cons(k_14, sym_Path_1))
                {
                  l_14 = ATgetArgument(k_14, 0);
                  t = not_null(l_14);
                }
              else
                {
                  if(match_cons(k_14, sym_Var_1))
                    {
                      l_14 = ATgetArgument(k_14, 0);
                      {
                        t = not_null(l_14);
                        {
                          ATerm z_8 = t;
                          int a_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_9);
                            }
                          else
                            {
                              t = z_8;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_b_9;
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
                      if(match_cons(k_14, sym_Prefix_2))
                        {
                          l_14 = ATgetArgument(k_14, 0);
                          m_14 = ATgetArgument(k_14, 1);
                          {
                            ATerm r_14 = NULL,t_14 = NULL;
                            ATerm c_9;
                            c_9 = t;
                            {
                              ATerm s_14 = NULL;
                              t = not_null(l_14);
                              {
                                t = eval_config_0(t);
                                {
                                  s_14 = t;
                                  if(((r_14 != NULL) && (r_14 != s_14)))
                                    _fail(s_14);
                                  else
                                    r_14 = s_14;
                                }
                              }
                            }
                            t = c_9;
                            {
                              ATerm u_14 = NULL;
                              t = not_null(m_14);
                              {
                                t = eval_config_0(t);
                                {
                                  u_14 = t;
                                  if(((t_14 != NULL) && (t_14 != u_14)))
                                    _fail(u_14);
                                  else
                                    t_14 = u_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(t_14));
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
  ATerm c_15 = NULL;
  c_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_9, not_null(c_15));
    {
      t = table_get_0(t);
      {
        ATerm v_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_9;
            g_9 = t;
            {
              ATerm e_15 = NULL;
              ATerm f_15 = NULL;
              f_15 = t;
              if(((e_15 != NULL) && (e_15 != f_15)))
                _fail(f_15);
              else
                e_15 = f_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_9, not_null(c_15), not_null(e_15));
                t = table_put_0(t);
              }
            }
            t = g_9;
          }
          return(t);
        }
        t = try_1(t, v_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_103 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm h_9;
    h_9 = t;
    {
      ATerm j_15 = NULL;
      ATerm k_15 = NULL;
      t = term_i_9;
      {
        t = get_config_0(t);
        {
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), term_j_9);
        t = geq_0(t);
      }
    }
    t = h_9;
    t = z_103(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  n_15 :
  if(match_cons(o_15, sym__2))
    {
      p_15 = ATgetArgument(o_15, 0);
      q_15 = ATgetArgument(o_15, 1);
      t = SSL_WriteToTextFile(not_null(p_15), not_null(q_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      t = SSL_WriteToBinaryFile(not_null(x_15), not_null(y_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_16 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm l_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm h_16 = NULL,i_16 = NULL;
            h_16 = t;
            d_16 :
            if(match_cons(h_16, sym_Output_1))
              {
                i_16 = ATgetArgument(h_16, 0);
                if(((g_16 != NULL) && (g_16 != i_16)))
                  _fail(i_16);
                else
                  g_16 = i_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          LocalPopChoice(m_9);
        }
      else
        {
          t = l_9;
          {
            ATerm j_16 = NULL;
            t = term_p_9;
            {
              j_16 = t;
              if(((g_16 != NULL) && (g_16 != j_16)))
                _fail(j_16);
              else
                g_16 = j_16;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = k_9;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(g_16);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm q_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm k_16 = NULL;
              k_16 = t;
              f_16 :
              if(!(match_cons(k_16, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_1);
            return(t);
          }
          t = _2(t, b_1, WriteToBinaryFile_0);
          LocalPopChoice(y_9);
        }
      else
        {
          t = q_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_102 (ATerm))
{
  ATerm q_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  ATerm z_9;
  z_9 = t;
  t = dtime_0(t);
  t = z_9;
  {
    t = g_102(t);
    {
      ATerm a_10;
      a_10 = t;
      {
        ATerm r_16 = NULL;
        t = dtime_0(t);
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
      }
      t = a_10;
      {
        s_16 = t;
        p_16 :
        if(match_cons(s_16, sym__2))
          {
            t_16 = ATgetArgument(s_16, 0);
            u_16 = ATgetArgument(s_16, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_16)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_16))), not_null(u_16));
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
ATerm debug_1 (ATerm t, ATerm c_101 (ATerm))
{
  ATerm b_10;
  b_10 = t;
  {
    ATerm b_17 = NULL,d_17 = NULL;
    ATerm c_10;
    c_10 = t;
    {
      ATerm c_17 = NULL;
      t = c_101(t);
      {
        c_17 = t;
        if(((b_17 != NULL) && (b_17 != c_17)))
          _fail(c_17);
        else
          b_17 = c_17;
      }
    }
    t = c_10;
    {
      ATerm e_17 = NULL;
      e_17 = t;
      if(((d_17 != NULL) && (d_17 != e_17)))
        _fail(e_17);
      else
        d_17 = e_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_17)), not_null(b_17)));
        t = printnl_0(t);
      }
    }
  }
  t = b_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 = NULL;
      j_17 = t;
      {
        if(((i_17 != NULL) && (i_17 != j_17)))
          _fail(j_17);
        else
          i_17 = j_17;
        t = SSL_ReadFromFile(not_null(i_17));
      }
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_q_10;
          return(t);
        }
        t = debug_1(t, e_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  ATerm n_17 = NULL,p_17 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm o_17 = NULL;
    t = q_98(t);
    {
      o_17 = t;
      if(((n_17 != NULL) && (n_17 != o_17)))
        _fail(o_17);
      else
        n_17 = o_17;
    }
  }
  t = s_10;
  {
    ATerm q_17 = NULL;
    t = r_98(t);
    {
      q_17 = t;
      if(((p_17 != NULL) && (p_17 != q_17)))
        _fail(q_17);
      else
        p_17 = q_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(p_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm t_10;
  t_10 = t;
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          ATerm x_17 = NULL,y_17 = NULL;
          x_17 = t;
          u_17 :
          if(match_cons(x_17, sym_Input_1))
            {
              y_17 = ATgetArgument(x_17, 0);
              if(((w_17 != NULL) && (w_17 != y_17)))
                _fail(y_17);
              else
                w_17 = y_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_1);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        {
          ATerm z_17 = NULL;
          t = term_y_10;
          {
            z_17 = t;
            if(((w_17 != NULL) && (w_17 != z_17)))
              _fail(z_17);
            else
              w_17 = z_17;
          }
        }
      }
  }
  t = t_10;
  {
    ATerm g_1 (ATerm t)
    {
      t = not_null(w_17);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm d_18 = NULL;
    d_18 = t;
    c_18 :
    if(!(match_string(d_18, "-v")))
      {
        if(!(match_string(d_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_b_11;
    t = set_config_0(t);
    t = term_g_11;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_h_11;
    return(t);
  }
  t = Option_3(t, h_1, k_1, l_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm g_18 = NULL;
    g_18 = t;
    e_18 :
    if(!(match_string(g_18, "-k")))
      {
        if(!(match_string(g_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm h_18 = NULL;
      ATerm i_18 = NULL;
      t = string_to_int_0(t);
      {
        i_18 = t;
        if(((h_18 != NULL) && (h_18 != i_18)))
          _fail(i_18);
        else
          h_18 = i_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(h_18));
        t = set_config_0(t);
      }
    }
    t = i_11;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  t = SSL_string_to_int(not_null(l_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm t_18 = NULL;
        t_18 = t;
        o_18 :
        if(!(match_string(t_18, "-S")))
          {
            if(!(match_string(t_18, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_u_11;
        t = set_config_0(t);
        t = term_v_11;
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      t = Option_3(t, p_1, q_1, r_1);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm u_18 = NULL;
              u_18 = t;
              p_18 :
              if(!(match_string(u_18, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_1 (ATerm t)
            {
              ATerm x_18 = NULL;
              ATerm h_12;
              h_12 = t;
              {
                ATerm v_18 = NULL;
                ATerm w_18 = NULL;
                t = string_to_int_0(t);
                {
                  w_18 = t;
                  if(((v_18 != NULL) && (v_18 != w_18)))
                    _fail(w_18);
                  else
                    v_18 = w_18;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(v_18));
                  t = set_config_0(t);
                }
              }
              t = h_12;
              {
                ATerm y_18 = NULL;
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_18));
              }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_i_12;
              return(t);
            }
            t = ArgOption_3(t, s_1, t_1, u_1);
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm v_1 (ATerm t)
              {
                ATerm z_18 = NULL;
                z_18 = t;
                s_18 :
                if(!(match_string(z_18, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_k_12;
                t = set_config_0(t);
                t = term_m_12;
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_n_12;
                return(t);
              }
              t = Option_3(t, v_1, w_1, x_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = o_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm f_19 = NULL;
    f_19 = t;
    c_19 :
    if(!(match_string(f_19, "-o")))
      {
        if(!(match_string(f_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm i_19 = NULL;
    ATerm w_12;
    w_12 = t;
    {
      ATerm g_19 = NULL;
      ATerm h_19 = NULL;
      h_19 = t;
      if(((g_19 != NULL) && (g_19 != h_19)))
        _fail(h_19);
      else
        g_19 = h_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_12, not_null(g_19));
        t = set_config_0(t);
      }
    }
    t = w_12;
    {
      ATerm j_19 = NULL;
      j_19 = t;
      if(((i_19 != NULL) && (i_19 != j_19)))
        _fail(j_19);
      else
        i_19 = j_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_19));
    }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_y_12;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_12 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(d_13);
    }
  else
    {
      t = z_12;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm n_19 = NULL;
          n_19 = t;
          m_19 :
          if(!(match_string(n_19, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_2 (ATerm t)
        {
          t = term_k_13;
          t = set_config_0(t);
          t = term_l_13;
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = term_m_13;
          return(t);
        }
        t = Option_3(t, b_2, c_2, d_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  t_19 = t;
  r_19 :
  if(match_string(t_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
        {
          u_19 = ATgetFirst((ATermList) t_19);
          v_19 = (ATerm) ATgetNext((ATermList) t_19);
          s_19 :
          if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
            {
              w_19 = ATgetFirst((ATermList) v_19);
              x_19 = (ATerm) ATgetNext((ATermList) v_19);
              {
                ATerm b_20 = NULL;
                ATerm o_13;
                o_13 = t;
                {
                  t = not_null(u_19);
                  t = j_0(t);
                }
                t = o_13;
                {
                  ATerm c_20 = NULL;
                  t = not_null(w_19);
                  {
                    t = k_0(t);
                    {
                      c_20 = t;
                      if(((b_20 != NULL) && (b_20 != c_20)))
                        _fail(c_20);
                      else
                        b_20 = c_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_19)), not_null(b_20));
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
  ATerm e_2 (ATerm t)
  {
    ATerm j_20 = NULL;
    j_20 = t;
    g_20 :
    if(!(match_string(j_20, "-i")))
      {
        if(!(match_string(j_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm m_20 = NULL;
    ATerm t_13;
    t_13 = t;
    {
      ATerm k_20 = NULL;
      ATerm l_20 = NULL;
      l_20 = t;
      if(((k_20 != NULL) && (k_20 != l_20)))
        _fail(l_20);
      else
        k_20 = l_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_13, not_null(k_20));
        t = set_config_0(t);
      }
    }
    t = t_13;
    {
      ATerm n_20 = NULL;
      n_20 = t;
      if(((m_20 != NULL) && (m_20 != n_20)))
        _fail(n_20);
      else
        m_20 = n_20;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_20));
    }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_v_13;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = w_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_c_14));
  {
    t = printnl_0(t);
    {
      t = term_h_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  t = SSL_TicksToSeconds(not_null(r_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym__2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_20), not_null(y_20));
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            t = SSL_addr(not_null(x_20), not_null(y_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_97(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
        f_21 = t;
        e_21 :
        if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
          {
            g_21 = ATgetFirst((ATermList) f_21);
            h_21 = (ATerm) ATgetNext((ATermList) f_21);
            {
              ATerm k_21 = NULL;
              ATerm l_21 = NULL;
              t = not_null(h_21);
              {
                t = foldr_2(t, b_97, c_97);
                {
                  l_21 = t;
                  if(((k_21 != NULL) && (k_21 != l_21)))
                    _fail(l_21);
                  else
                    k_21 = l_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(k_21));
                t = c_97(t);
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
ATerm crush_2 (ATerm t, ATerm z_95 (ATerm), ATerm a_96 (ATerm))
{
  ATerm s_21 = NULL;
  ATerm u_21 = NULL;
  s_21 = t;
  {
    ATerm v_21 = NULL;
    ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
    t = not_null(s_21);
    {
      v_21 = t;
      {
        t = SSL_explode_term(not_null(v_21));
        {
          x_21 = t;
          r_21 :
          if(match_cons(x_21, sym__2))
            {
              y_21 = ATgetArgument(x_21, 0);
              z_21 = ATgetArgument(x_21, 1);
              if(((u_21 != NULL) && (u_21 != z_21)))
                _fail(z_21);
              else
                u_21 = z_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_21);
      t = foldr_2(t, z_95, a_96);
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
    ATerm h_2 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    t = crush_2(t, h_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm h_14;
        h_14 = t;
        {
          ATerm i_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_22), not_null(h_22));
              LocalPopChoice(n_14);
            }
          else
            {
              t = i_14;
              t = SSL_gtr(not_null(g_22), not_null(h_22));
            }
        }
        t = h_14;
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
  ATerm n_22 = NULL;
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
      o_22 = t;
      m_22 :
      if(match_cons(o_22, sym__2))
        {
          p_22 = ATgetArgument(o_22, 0);
          q_22 = ATgetArgument(o_22, 1);
          {
            if(((n_22 != NULL) && (n_22 != p_22)))
              _fail(p_22);
            else
              n_22 = p_22;
            if(((n_22 != NULL) && (n_22 != q_22)))
              _fail(q_22);
            else
              n_22 = q_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_103 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm q_14;
    q_14 = t;
    {
      ATerm t_22 = NULL;
      ATerm u_22 = NULL;
      t = term_i_9;
      {
        t = get_config_0(t);
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), term_h_8);
        t = geq_0(t);
      }
    }
    t = q_14;
    t = y_103(t);
    return(t);
  }
  t = try_1(t, i_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm y_22 = NULL,a_23 = NULL;
    ATerm v_14;
    v_14 = t;
    {
      ATerm z_22 = NULL;
      t = run_time_0(t);
      {
        z_22 = t;
        if(((y_22 != NULL) && (y_22 != z_22)))
          _fail(z_22);
        else
          y_22 = z_22;
      }
    }
    t = v_14;
    {
      ATerm b_23 = NULL;
      t = term_w_14;
      {
        t = get_config_0(t);
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_14), not_null(y_22)), term_x_14), not_null(a_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_2);
  {
    t = term_t_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Version_0))
    {
      ATerm k_23 = NULL,m_23 = NULL;
      ATerm z_14;
      z_14 = t;
      {
        ATerm l_23 = NULL;
        t = SSLgetAnnotations(not_null(i_23));
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
      }
      t = z_14;
      {
        ATerm n_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_23));
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
        t = not_null(m_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm d_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_15);
            }
          else
            {
              t = d_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_2);
  t = e_102(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  t = SSL_table_create(not_null(s_23));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm h_15;
    h_15 = t;
    {
      t = term_i_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_15, term_l_15, not_null(w_23));
          t = table_put_0(t);
        }
      }
    }
    t = h_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_table_destroy(not_null(a_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_24 = NULL;
  ATerm p_24 (ATerm t)
  {
    t = SSL_exit(not_null(i_24));
    return(t);
  }
  ATerm q_24 (ATerm t)
  {
    ATerm l_24 = NULL,n_24 = NULL;
    ATerm m_15;
    m_15 = t;
    {
      ATerm m_24 = NULL;
      t = SSLgetAnnotations(not_null(i_24));
      {
        m_24 = t;
        if(((l_24 != NULL) && (l_24 != m_24)))
          _fail(m_24);
        else
          l_24 = m_24;
      }
    }
    t = m_15;
    {
      ATerm o_24 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(l_24));
      {
        o_24 = t;
        if(((n_24 != NULL) && (n_24 != o_24)))
          _fail(o_24);
        else
          n_24 = o_24;
      }
      t = not_null(n_24);
    }
    return(t);
  }
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym_exit_0))
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_24(t);
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = q_24(t);
        }
    }
  else
    {
      t = p_24(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(((ATgetType(u_24) == AT_LIST) && ATisEmpty(u_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
        {
          v_24 = ATgetFirst((ATermList) u_24);
          w_24 = (ATerm) ATgetNext((ATermList) u_24);
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
  ATerm t_15;
  t_15 = t;
  {
    ATerm z_24 = NULL;
    ATerm c_25 = NULL;
    ATerm u_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = u_15;
        {
          ATerm a_25 = NULL;
          ATerm b_25 = NULL;
          b_25 = t;
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
          t = (ATerm) ATinsert(ATempty, not_null(a_25));
        }
      }
    {
      c_25 = t;
      if(((z_24 != NULL) && (z_24 != c_25)))
        _fail(c_25);
      else
        z_24 = c_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(z_24));
      t = printnl_0(t);
    }
  }
  t = t_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm f_25 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = Cons_2(t, n_90, f_25);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  o_25 = t;
  l_25 :
  if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
    {
      m_25 = ATgetFirst((ATermList) o_25);
      n_25 = (ATerm) ATgetNext((ATermList) o_25);
      {
        ATerm r_25 = NULL;
        t = not_null(n_25);
        {
          ATerm c_16;
          c_16 = t;
          {
            ATerm s_25 = NULL,u_25 = NULL,w_25 = NULL;
            ATerm e_16;
            e_16 = t;
            {
              ATerm t_25 = NULL;
              t = i_0(t);
              {
                t_25 = t;
                if(((s_25 != NULL) && (s_25 != t_25)))
                  _fail(t_25);
                else
                  s_25 = t_25;
              }
            }
            t = e_16;
            {
              ATerm v_25 = NULL;
              t = not_null(m_25);
              {
                t = h_0(t);
                {
                  v_25 = t;
                  if(((u_25 != NULL) && (u_25 != v_25)))
                    _fail(v_25);
                  else
                    u_25 = v_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_25)), not_null(u_25));
                {
                  w_25 = t;
                  if(((r_25 != NULL) && (r_25 != w_25)))
                    _fail(w_25);
                  else
                    r_25 = w_25;
                }
              }
            }
          }
          t = c_16;
          {
            ATerm l_2 (ATerm t)
            {
              t = not_null(r_25);
              return(t);
            }
            t = reverse_acc_2(t, h_0, l_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_25) == AT_LIST) && ATisEmpty(o_25)))
        {
          {
            t = term_a_11;
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
  ATerm m_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Program_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm l_26 = NULL,n_26 = NULL;
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(h_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
        {
          t = not_null(i_26);
          {
            ATerm p_26 = NULL;
            t = s_70(t);
            {
              n_26 = t;
              {
                ATerm q_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_26)), not_null(l_26));
                {
                  q_26 = t;
                  if(((p_26 != NULL) && (p_26 != q_26)))
                    _fail(q_26);
                  else
                    p_26 = q_26;
                }
                t = not_null(p_26);
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
ATerm system_usage_0 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_27 = NULL;
      t = term_w_14;
      {
        t = get_config_0(t);
        {
          a_27 = t;
          if(((z_26 != NULL) && (z_26 != a_27)))
            _fail(a_27);
          else
            z_26 = a_27;
        }
      }
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm b_27 = NULL;
            b_27 = t;
            if(((z_26 != NULL) && (z_26 != b_27)))
              _fail(b_27);
            else
              z_26 = b_27;
            return(t);
          }
          t = Program_1(t, o_2);
          return(t);
        }
        t = option_defined_1(t, n_2);
      }
    }
  {
    ATerm p_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(z_26);
        return(t);
      }
      t = short_description_1(t, t_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_2);
    {
      t = term_n_16;
      {
        t = echo_0(t);
        {
          t = term_w_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm c_27 = NULL;
                  ATerm d_27 = NULL;
                  d_27 = t;
                  if(((c_27 != NULL) && (c_27 != d_27)))
                    _fail(d_27);
                  else
                    c_27 = d_27;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_27)), term_x_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_2);
                {
                  ATerm y_2 (ATerm t)
                  {
                    ATerm e_27 = NULL;
                    ATerm f_27 = NULL;
                    ATerm b_3 (ATerm t)
                    {
                      t = not_null(z_26);
                      return(t);
                    }
                    t = long_description_1(t, b_3);
                    {
                      f_27 = t;
                      if(((e_27 != NULL) && (e_27 != f_27)))
                        _fail(f_27);
                      else
                        e_27 = f_27;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), term_y_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_2);
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
ATerm debug_0 (ATerm t)
{
  ATerm z_16;
  z_16 = t;
  {
    ATerm l_27 = NULL;
    ATerm m_27 = NULL;
    m_27 = t;
    if(((l_27 != NULL) && (l_27 != m_27)))
      _fail(m_27);
    else
      l_27 = m_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(l_27)));
      t = printnl_0(t);
    }
  }
  t = z_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm a_17;
  a_17 = t;
  {
    t = d_101(t);
    t = debug_0(t);
  }
  t = a_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_Undefined_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      {
        ATerm x_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(t_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        {
          t = not_null(u_27);
          {
            ATerm b_28 = NULL;
            t = t_70(t);
            {
              z_27 = t;
              {
                ATerm c_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_27)), not_null(x_27));
                {
                  c_28 = t;
                  if(((b_28 != NULL) && (b_28 != c_28)))
                    _fail(c_28);
                  else
                    b_28 = c_28;
                }
                t = not_null(b_28);
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
ATerm fetch_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm h_28 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_90, _id);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = Cons_2(t, _id, h_28);
      }
    return(t);
  }
  t = h_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_105 (ATerm))
{
  t = fetch_1(t, b_105);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym_Help_0))
    {
      ATerm o_28 = NULL,q_28 = NULL;
      ATerm h_17;
      h_17 = t;
      {
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      t = h_17;
      {
        ATerm r_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_28));
        {
          r_28 = t;
          if(((q_28 != NULL) && (q_28 != r_28)))
            _fail(r_28);
          else
            q_28 = r_28;
        }
        t = not_null(q_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_82(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym__2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      t = SSL_table_get(not_null(y_28), not_null(z_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym__3))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      j_29 = ATgetArgument(g_29, 2);
      {
        ATerm m_17;
        m_17 = t;
        {
          ATerm n_29 = NULL;
          ATerm o_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(i_29));
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
                t = (ATerm) ATempty;
              }
            {
              o_29 = t;
              if(((n_29 != NULL) && (n_29 != o_29)))
                _fail(o_29);
              else
                n_29 = o_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_29), not_null(i_29), (ATerm) ATinsert(CheckATermList(not_null(n_29)), not_null(j_29)));
            t = table_put_0(t);
          }
        }
        t = m_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_106 (ATerm))
{
  ATerm s_29 = NULL;
  ATerm t_29 = NULL;
  t = term_a_11;
  {
    t = g_106(t);
    {
      t_29 = t;
      if(((s_29 != NULL) && (s_29 != t_29)))
        _fail(t_29);
      else
        s_29 = t_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_16, term_v_16, not_null(s_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_string(z_29, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
        {
          a_30 = ATgetFirst((ATermList) z_29);
          b_30 = (ATerm) ATgetNext((ATermList) z_29);
          {
            ATerm e_30 = NULL;
            ATerm t_17;
            t_17 = t;
            {
              t = not_null(a_30);
              t = a_0(t);
            }
            t = t_17;
            {
              ATerm f_30 = NULL;
              t = term_a_11;
              {
                t = d_0(t);
                {
                  f_30 = t;
                  if(((e_30 != NULL) && (e_30 != f_30)))
                    _fail(f_30);
                  else
                    e_30 = f_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_30)), not_null(e_30));
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
  ATerm c_3 (ATerm t)
  {
    ATerm k_30 = NULL;
    k_30 = t;
    j_30 :
    if(!(match_string(k_30, "--help")))
      {
        if(!(match_string(k_30, "-h")))
          {
            if(!(match_string(k_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_a_18;
    {
      t = set_config_0(t);
      t = term_b_18;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
    {
      o_30 = ATgetFirst((ATermList) n_30);
      p_30 = (ATerm) ATgetNext((ATermList) n_30);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_30)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_30)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
    {
      a_31 = ATgetFirst((ATermList) z_30);
      b_31 = (ATerm) ATgetNext((ATermList) z_30);
      {
        ATerm p_32 = NULL,r_32 = NULL;
        ATerm q_32 = NULL;
        t = SSLgetAnnotations(not_null(z_30));
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
        {
          t = not_null(a_31);
          {
            ATerm t_32 = NULL;
            t = s_64(t);
            {
              r_32 = t;
              {
                t = not_null(b_31);
                {
                  ATerm v_32 = NULL;
                  t = t_64(t);
                  {
                    t_32 = t;
                    {
                      ATerm w_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_32)), not_null(r_32)), not_null(p_32));
                      {
                        w_32 = t;
                        if(((v_32 != NULL) && (v_32 != w_32)))
                          _fail(w_32);
                        else
                          v_32 = w_32;
                      }
                      t = not_null(v_32);
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
  ATerm g_33 = NULL;
  g_33 = t;
  f_33 :
  if(((ATgetType(g_33) == AT_LIST) && ATisEmpty(g_33)))
    {
      {
        ATerm i_33 = NULL,k_33 = NULL;
        ATerm j_18;
        j_18 = t;
        {
          ATerm j_33 = NULL;
          t = SSLgetAnnotations(not_null(g_33));
          {
            j_33 = t;
            if(((i_33 != NULL) && (i_33 != j_33)))
              _fail(j_33);
            else
              i_33 = j_33;
          }
        }
        t = j_18;
        {
          ATerm l_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_33));
          {
            l_33 = t;
            if(((k_33 != NULL) && (k_33 != l_33)))
              _fail(l_33);
            else
              k_33 = l_33;
          }
          t = not_null(k_33);
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
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym__2))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_9, not_null(s_33), not_null(t_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_106 (ATerm))
{
  ATerm k_18;
  k_18 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_m_18;
      t = e_106(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = k_18;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm g_34 = NULL;
      ATerm n_18;
      n_18 = t;
      {
        ATerm e_34 = NULL;
        ATerm f_34 = NULL;
        f_34 = t;
        if(((e_34 != NULL) && (e_34 != f_34)))
          _fail(f_34);
        else
          e_34 = f_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(e_34));
          t = set_config_0(t);
        }
      }
      t = n_18;
      {
        ATerm h_34 = NULL;
        h_34 = t;
        if(((g_34 != NULL) && (g_34 != h_34)))
          _fail(h_34);
        else
          g_34 = h_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_34));
      }
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                t = e_106(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  ATerm d_19;
  d_19 = t;
  {
    ATerm q_34 = NULL,r_34 = NULL,v_34 = NULL,w_34 = NULL;
    q_34 = t;
    m_34 :
    if(match_cons(q_34, sym__3))
      {
        r_34 = ATgetArgument(q_34, 0);
        v_34 = ATgetArgument(q_34, 1);
        w_34 = ATgetArgument(q_34, 2);
        {
          if(((n_34 != NULL) && (n_34 != r_34)))
            _fail(r_34);
          else
            n_34 = r_34;
          {
            if(((o_34 != NULL) && (o_34 != v_34)))
              _fail(v_34);
            else
              o_34 = v_34;
            {
              if(((p_34 != NULL) && (p_34 != w_34)))
                _fail(w_34);
              else
                p_34 = w_34;
              t = SSL_table_put(not_null(n_34), not_null(o_34), not_null(p_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_106 (ATerm))
{
  ATerm z_34 = NULL;
  ATerm e_19;
  e_19 = t;
  {
    t = term_k_19;
    t = table_put_0(t);
  }
  t = e_19;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm l_19 = t;
      int o_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_106(t);
          LocalPopChoice(o_19);
        }
      else
        {
          t = l_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19;
            y_19 = t;
            {
              ATerm z_19 = t;
              int a_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_17;
                  t = get_config_0(t);
                  LocalPopChoice(a_20);
                }
              else
                {
                  t = z_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_19;
            {
              t = system_usage_0(t);
              {
                t = term_t_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm a_35 = NULL;
                  a_35 = t;
                  if(((z_34 != NULL) && (z_34 != a_35)))
                    _fail(a_35);
                  else
                    z_34 = a_35;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm q_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_34)), term_d_20);
                  return(t);
                }
                t = say_1(t, q_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_3);
      {
        ATerm e_20;
        e_20 = t;
        {
          t = term_o_16;
          t = table_destroy_0(t);
        }
        t = e_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm))
{
  t = parse_options_1(t, k_102);
  {
    t = store_options_0(t);
    {
      t = m_102(t);
      {
        ATerm f_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_102);
            LocalPopChoice(h_20);
          }
        else
          {
            t = f_20;
            {
              ATerm i_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_102(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = i_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_103(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_103);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, d_103, e_103, w_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm s_20;
      s_20 = t;
      {
        ATerm d_35 = NULL;
        ATerm e_35 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            e_35 = t;
            if(((d_35 != NULL) && (d_35 != e_35)))
              _fail(e_35);
            else
              d_35 = e_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(d_35)));
          t = printnl_0(t);
        }
      }
      t = s_20;
      return(t);
    }
    t = if_verbose2_1(t, a_4);
    return(t);
  }
  t = iowrap_4(t, v_102, w_102, x_102, z_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  t = iowrap_3(t, t_102, u_102, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _2(t, _id, q_102);
    return(t);
  }
  t = iowrap_2(t, b_4, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, d_4, e_4);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, c_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
