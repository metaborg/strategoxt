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
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_OctConst_1;
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
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
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
ATerm term_a_20;
ATerm term_h_19;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_k_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_c_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_x_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_t_4;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_4);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_Call_2, term_t_4, (ATerm) ATempty);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_4);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Call_2, term_i_5, (ATerm) ATempty);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_6);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_6);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_6);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_e_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_x_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_e_11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_e_11);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_e_11);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__3, term_r_16, term_s_16, (ATerm) ATempty);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_66 (ATerm));
ATerm Call_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm));
ATerm unzip_1 (ATerm, ATerm l_92 (ATerm));
ATerm alltd_1 (ATerm, ATerm b_86 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm l_83 (ATerm));
ATerm downup2_2 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm _2 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_90 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_103 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_101 (ATerm));
ATerm debug_1 (ATerm, ATerm l_100 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm crush_2 (ATerm, ATerm i_95 (ATerm), ATerm j_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_103 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_101 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_105 (ATerm));
ATerm map_1 (ATerm, ATerm a_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_105 (ATerm));
ATerm Program_1 (ATerm, ATerm t_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_100 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_104 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_105 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_105 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_105 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_102 (ATerm), ATerm e_102 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_102 (ATerm));
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
ATerm SVar_1 (ATerm t, ATerm e_66 (ATerm))
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
            t = e_66(t);
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
ATerm Call_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
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
            t = t_66(t);
            {
              q_3 = t;
              {
                t = not_null(k_3);
                {
                  ATerm u_3 = NULL;
                  t = u_66(t);
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
      t = term_w_4;
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
      t = term_j_5;
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
      t = term_k_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_92(t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = l_5;
        {
          t = c_92(t);
          {
            t = _2(t, e_92, z_5);
            t = d_92(t);
          }
        }
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm l_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_92);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm n_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_86(t);
        ;
        LocalPopChoice(s_5);
      }
    else
      {
        t = n_5;
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
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_5, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_y_5, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_c_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_e_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_g_6, (ATerm) ATinsert(ATempty, not_null(a_8)));
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
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              ATerm j_6 = t;
              int k_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  ;
                  LocalPopChoice(k_6);
                }
              else
                {
                  t = j_6;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              t = try_1(t, o_10);
              return(t);
            }
            t = Cons_2(t, b_0, e_0);
            ;
            LocalPopChoice(i_6);
          }
        else
          {
            t = h_6;
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
          ATerm l_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = l_6;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, h_0);
        {
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              ;
              LocalPopChoice(o_6);
            }
          else
            {
              t = n_6;
              {
                ATerm p_6 = t;
                int q_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_6 = t;
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
                        t = r_6;
                      }
                    t = CreateDef2_0(t);
                    ;
                    LocalPopChoice(q_6);
                  }
                else
                  {
                    t = p_6;
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
                          ATerm v_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = v_6;
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
                                  ATerm w_6 = t;
                                  int x_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_10(t);
                                      ;
                                      LocalPopChoice(x_6);
                                    }
                                  else
                                    {
                                      t = w_6;
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
                                ATerm y_6 = t;
                                int z_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = c_10(t);
                                    ;
                                    LocalPopChoice(z_6);
                                  }
                                else
                                  {
                                    t = y_6;
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
                                                ATerm c_8 = t;
                                                int d_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_10(t);
                                                    ;
                                                    LocalPopChoice(d_8);
                                                  }
                                                else
                                                  {
                                                    t = c_8;
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
ATerm repeat_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm s_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = l_83(t);
      t = s_10(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = s_10(t);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  t = o_84(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = downup2_2(t, o_84, p_84);
      return(t);
    }
    t = _all(t, q_0);
    t = p_84(t);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm))
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
            t = k_63(t);
            {
              h_11 = t;
              {
                t = not_null(b_11);
                {
                  ATerm l_11 = NULL;
                  t = l_63(t);
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
  ATerm u_11 = NULL;
  ATerm e_8;
  e_8 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm v_11 = NULL,w_11 = NULL;
      v_11 = t;
      t_11 :
      if(match_cons(v_11, sym_Program_1))
        {
          w_11 = ATgetArgument(v_11, 0);
          if(((u_11 != NULL) && (u_11 != w_11)))
            _fail(w_11);
          else
            u_11 = w_11;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, r_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), not_null(u_11)), term_g_8));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym__2))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      {
        ATerm j_8;
        j_8 = t;
        t = SSL_printnl(not_null(b_12), not_null(c_12));
        t = j_8;
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
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_implode_string(not_null(h_12));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
        m_12 = t;
        l_12 :
        if(((ATgetType(m_12) == AT_LIST) && !(ATisEmpty(m_12))))
          {
            n_12 = ATgetFirst((ATermList) m_12);
            o_12 = (ATerm) ATgetNext((ATermList) m_12);
            {
              t = not_null(n_12);
              {
                ATerm s_0 (ATerm t)
                {
                  t = not_null(o_12);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm a_13 = NULL;
  y_12 = t;
  {
    ATerm b_13 = NULL;
    ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
    t = not_null(y_12);
    {
      b_13 = t;
      {
        t = SSL_explode_term(not_null(b_13));
        {
          d_13 = t;
          w_12 :
          if(match_cons(d_13, sym__2))
            {
              e_13 = ATgetArgument(d_13, 0);
              f_13 = ATgetArgument(d_13, 1);
              x_12 :
              if(match_string(e_13, ""))
                {
                  if(((a_13 != NULL) && (a_13 != f_13)))
                    _fail(f_13);
                  else
                    a_13 = f_13;
                }
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
      t = not_null(a_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm j_13 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_13);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          t = Nil_0(t);
          t = p_90(t);
        }
      }
    return(t);
  }
  t = j_13(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        t = not_null(n_13);
        {
          ATerm t_0 (ATerm t)
          {
            t = not_null(o_13);
            return(t);
          }
          t = at_end_1(t, t_0);
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  t = SSL_explode_string(not_null(t_13));
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
  ATerm x_13 = NULL;
  x_13 = t;
  t = SSL_is_string(not_null(x_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, u_0);
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
              g_14 = t;
              f_14 :
              if(match_cons(g_14, sym_Path_1))
                {
                  h_14 = ATgetArgument(g_14, 0);
                  t = not_null(h_14);
                }
              else
                {
                  if(match_cons(g_14, sym_Var_1))
                    {
                      h_14 = ATgetArgument(g_14, 0);
                      {
                        t = not_null(h_14);
                        {
                          ATerm c_9 = t;
                          int d_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_9);
                            }
                          else
                            {
                              t = c_9;
                              {
                                ATerm v_0 (ATerm t)
                                {
                                  t = term_e_9;
                                  return(t);
                                }
                                t = debug_1(t, v_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_14, sym_Prefix_2))
                        {
                          h_14 = ATgetArgument(g_14, 0);
                          i_14 = ATgetArgument(g_14, 1);
                          {
                            ATerm n_14 = NULL,p_14 = NULL;
                            ATerm f_9;
                            f_9 = t;
                            {
                              ATerm o_14 = NULL;
                              t = not_null(h_14);
                              {
                                t = eval_config_0(t);
                                {
                                  o_14 = t;
                                  if(((n_14 != NULL) && (n_14 != o_14)))
                                    _fail(o_14);
                                  else
                                    n_14 = o_14;
                                }
                              }
                            }
                            t = f_9;
                            {
                              ATerm q_14 = NULL;
                              t = not_null(i_14);
                              {
                                t = eval_config_0(t);
                                {
                                  q_14 = t;
                                  if(((p_14 != NULL) && (p_14 != q_14)))
                                    _fail(q_14);
                                  else
                                    p_14 = q_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(p_14));
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
  ATerm y_14 = NULL;
  y_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(y_14));
    {
      t = table_get_0(t);
      {
        ATerm w_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_9;
            h_9 = t;
            {
              ATerm a_15 = NULL;
              ATerm b_15 = NULL;
              b_15 = t;
              if(((a_15 != NULL) && (a_15 != b_15)))
                _fail(b_15);
              else
                a_15 = b_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(y_14), not_null(a_15));
                t = table_put_0(t);
              }
            }
            t = h_9;
          }
          return(t);
        }
        t = try_1(t, w_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm i_9;
    i_9 = t;
    {
      ATerm f_15 = NULL;
      ATerm g_15 = NULL;
      t = term_j_9;
      {
        t = get_config_0(t);
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), term_m_9);
        t = geq_0(t);
      }
    }
    t = i_9;
    t = j_103(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      t = SSL_WriteToTextFile(not_null(l_15), not_null(m_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym__2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      t = SSL_WriteToBinaryFile(not_null(t_15), not_null(u_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm d_16 = NULL,e_16 = NULL;
            d_16 = t;
            z_15 :
            if(match_cons(d_16, sym_Output_1))
              {
                e_16 = ATgetArgument(d_16, 0);
                if(((c_16 != NULL) && (c_16 != e_16)))
                  _fail(e_16);
                else
                  c_16 = e_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          ;
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm f_16 = NULL;
            t = term_x_9;
            {
              f_16 = t;
              if(((c_16 != NULL) && (c_16 != f_16)))
                _fail(f_16);
              else
                c_16 = f_16;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = n_9;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(c_16);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm g_16 = NULL;
              g_16 = t;
              b_16 :
              if(!(match_cons(g_16, sym_Binary_0)))
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
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  ATerm l_10;
  l_10 = t;
  t = dtime_0(t);
  t = l_10;
  {
    t = q_101(t);
    {
      ATerm m_10;
      m_10 = t;
      {
        ATerm n_16 = NULL;
        t = dtime_0(t);
        {
          n_16 = t;
          if(((m_16 != NULL) && (m_16 != n_16)))
            _fail(n_16);
          else
            m_16 = n_16;
        }
      }
      t = m_10;
      {
        o_16 = t;
        l_16 :
        if(match_cons(o_16, sym__2))
          {
            p_16 = ATgetArgument(o_16, 0);
            q_16 = ATgetArgument(o_16, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_16)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_16))), not_null(q_16));
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
ATerm debug_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm n_10;
  n_10 = t;
  {
    ATerm x_16 = NULL,z_16 = NULL;
    ATerm p_10;
    p_10 = t;
    {
      ATerm y_16 = NULL;
      t = l_100(t);
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
    }
    t = p_10;
    {
      ATerm a_17 = NULL;
      a_17 = t;
      if(((z_16 != NULL) && (z_16 != a_17)))
        _fail(a_17);
      else
        z_16 = a_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), not_null(x_16)));
        t = printnl_0(t);
      }
    }
  }
  t = n_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_17 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      f_17 = t;
      {
        if(((e_17 != NULL) && (e_17 != f_17)))
          _fail(f_17);
        else
          e_17 = f_17;
        t = SSL_ReadFromFile(not_null(e_17));
      }
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = debug_1(t, f_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  ATerm j_17 = NULL,l_17 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm k_17 = NULL;
    t = z_97(t);
    {
      k_17 = t;
      if(((j_17 != NULL) && (j_17 != k_17)))
        _fail(k_17);
      else
        j_17 = k_17;
    }
  }
  t = u_10;
  {
    ATerm m_17 = NULL;
    t = a_98(t);
    {
      m_17 = t;
      if(((l_17 != NULL) && (l_17 != m_17)))
        _fail(m_17);
      else
        l_17 = m_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_17), not_null(l_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_17 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm t_17 = NULL,u_17 = NULL;
          t_17 = t;
          q_17 :
          if(match_cons(t_17, sym_Input_1))
            {
              u_17 = ATgetArgument(t_17, 0);
              if(((s_17 != NULL) && (s_17 != u_17)))
                _fail(u_17);
              else
                s_17 = u_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_1);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm v_17 = NULL;
          t = term_c_11;
          {
            v_17 = t;
            if(((s_17 != NULL) && (s_17 != v_17)))
              _fail(v_17);
            else
              s_17 = v_17;
          }
        }
      }
  }
  t = v_10;
  {
    ATerm h_1 (ATerm t)
    {
      t = not_null(s_17);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm z_17 = NULL;
    z_17 = t;
    y_17 :
    if(!(match_string(z_17, "-v")))
      {
        if(!(match_string(z_17, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_i_11;
    t = set_config_0(t);
    t = term_k_11;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  t = Option_3(t, i_1, j_1, k_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm c_18 = NULL;
    c_18 = t;
    a_18 :
    if(!(match_string(c_18, "-k")))
      {
        if(!(match_string(c_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm o_11;
    o_11 = t;
    {
      ATerm d_18 = NULL;
      ATerm e_18 = NULL;
      t = string_to_int_0(t);
      {
        e_18 = t;
        if(((d_18 != NULL) && (d_18 != e_18)))
          _fail(e_18);
        else
          d_18 = e_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(d_18));
        t = set_config_0(t);
      }
    }
    t = o_11;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, l_1, m_1, n_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = SSL_string_to_int(not_null(h_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_18 = NULL;
        p_18 = t;
        k_18 :
        if(!(match_string(p_18, "-S")))
          {
            if(!(match_string(p_18, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_y_11;
        t = set_config_0(t);
        t = term_d_12;
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = Option_3(t, o_1, p_1, q_1);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm q_18 = NULL;
              q_18 = t;
              l_18 :
              if(!(match_string(q_18, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm t_18 = NULL;
              ATerm i_12;
              i_12 = t;
              {
                ATerm r_18 = NULL;
                ATerm s_18 = NULL;
                t = string_to_int_0(t);
                {
                  s_18 = t;
                  if(((r_18 != NULL) && (r_18 != s_18)))
                    _fail(s_18);
                  else
                    r_18 = s_18;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(r_18));
                  t = set_config_0(t);
                }
              }
              t = i_12;
              {
                ATerm u_18 = NULL;
                u_18 = t;
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_18));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_j_12;
              return(t);
            }
            t = ArgOption_3(t, r_1, u_1, v_1);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm w_1 (ATerm t)
              {
                ATerm v_18 = NULL;
                v_18 = t;
                o_18 :
                if(!(match_string(v_18, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_p_12;
                t = set_config_0(t);
                t = term_q_12;
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_r_12;
                return(t);
              }
              t = Option_3(t, w_1, x_1, y_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            ;
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
  ATerm z_1 (ATerm t)
  {
    ATerm b_19 = NULL;
    b_19 = t;
    y_18 :
    if(!(match_string(b_19, "-o")))
      {
        if(!(match_string(b_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm e_19 = NULL;
    ATerm z_12;
    z_12 = t;
    {
      ATerm c_19 = NULL;
      ATerm d_19 = NULL;
      d_19 = t;
      if(((c_19 != NULL) && (c_19 != d_19)))
        _fail(d_19);
      else
        c_19 = d_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(c_19));
        t = set_config_0(t);
      }
    }
    t = z_12;
    {
      ATerm f_19 = NULL;
      f_19 = t;
      if(((e_19 != NULL) && (e_19 != f_19)))
        _fail(f_19);
      else
        e_19 = f_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_19));
    }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = ArgOption_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm j_19 = NULL;
          j_19 = t;
          i_19 :
          if(!(match_string(j_19, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = term_p_13;
          t = set_config_0(t);
          t = term_q_13;
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_r_13;
          return(t);
        }
        t = Option_3(t, c_2, d_2, e_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  p_19 = t;
  n_19 :
  if(match_string(p_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
        {
          q_19 = ATgetFirst((ATermList) p_19);
          r_19 = (ATerm) ATgetNext((ATermList) p_19);
          o_19 :
          if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
            {
              s_19 = ATgetFirst((ATermList) r_19);
              t_19 = (ATerm) ATgetNext((ATermList) r_19);
              {
                ATerm x_19 = NULL;
                ATerm s_13;
                s_13 = t;
                {
                  t = not_null(q_19);
                  t = j_0(t);
                }
                t = s_13;
                {
                  ATerm y_19 = NULL;
                  t = not_null(s_19);
                  {
                    t = k_0(t);
                    {
                      y_19 = t;
                      if(((x_19 != NULL) && (x_19 != y_19)))
                        _fail(y_19);
                      else
                        x_19 = y_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_19)), not_null(x_19));
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
  ATerm f_2 (ATerm t)
  {
    ATerm f_20 = NULL;
    f_20 = t;
    c_20 :
    if(!(match_string(f_20, "-i")))
      {
        if(!(match_string(f_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm i_20 = NULL;
    ATerm u_13;
    u_13 = t;
    {
      ATerm g_20 = NULL;
      ATerm h_20 = NULL;
      h_20 = t;
      if(((g_20 != NULL) && (g_20 != h_20)))
        _fail(h_20);
      else
        g_20 = h_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(g_20));
        t = set_config_0(t);
      }
    }
    t = u_13;
    {
      ATerm j_20 = NULL;
      j_20 = t;
      if(((i_20 != NULL) && (i_20 != j_20)))
        _fail(j_20);
      else
        i_20 = j_20;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_20));
    }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_w_13;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATempty, term_c_14));
  {
    t = printnl_0(t);
    {
      t = term_i_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_TicksToSeconds(not_null(n_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_20), not_null(u_20));
            ;
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            t = SSL_addr(not_null(t_20), not_null(u_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_96(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
        b_21 = t;
        a_21 :
        if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
          {
            c_21 = ATgetFirst((ATermList) b_21);
            d_21 = (ATerm) ATgetNext((ATermList) b_21);
            {
              ATerm g_21 = NULL;
              ATerm h_21 = NULL;
              t = not_null(d_21);
              {
                t = foldr_2(t, k_96, l_96);
                {
                  h_21 = t;
                  if(((g_21 != NULL) && (g_21 != h_21)))
                    _fail(h_21);
                  else
                    g_21 = h_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(g_21));
                t = l_96(t);
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
ATerm crush_2 (ATerm t, ATerm i_95 (ATerm), ATerm j_95 (ATerm))
{
  ATerm o_21 = NULL;
  ATerm q_21 = NULL;
  o_21 = t;
  {
    ATerm r_21 = NULL;
    ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
    t = not_null(o_21);
    {
      r_21 = t;
      {
        t = SSL_explode_term(not_null(r_21));
        {
          t_21 = t;
          n_21 :
          if(match_cons(t_21, sym__2))
            {
              u_21 = ATgetArgument(t_21, 0);
              v_21 = ATgetArgument(t_21, 1);
              if(((q_21 != NULL) && (q_21 != v_21)))
                _fail(v_21);
              else
                q_21 = v_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_21);
      t = foldr_2(t, i_95, j_95);
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
    ATerm i_2 (ATerm t)
    {
      t = term_x_11;
      return(t);
    }
    t = crush_2(t, i_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym__2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      {
        ATerm l_14;
        l_14 = t;
        {
          ATerm m_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_22), not_null(d_22));
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = m_14;
              t = SSL_gtr(not_null(c_22), not_null(d_22));
            }
        }
        t = l_14;
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
  ATerm j_22 = NULL;
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
      k_22 = t;
      i_22 :
      if(match_cons(k_22, sym__2))
        {
          l_22 = ATgetArgument(k_22, 0);
          m_22 = ATgetArgument(k_22, 1);
          {
            if(((j_22 != NULL) && (j_22 != l_22)))
              _fail(l_22);
            else
              j_22 = l_22;
            if(((j_22 != NULL) && (j_22 != m_22)))
              _fail(m_22);
            else
              j_22 = m_22;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_103 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm u_14;
    u_14 = t;
    {
      ATerm p_22 = NULL;
      ATerm q_22 = NULL;
      t = term_j_9;
      {
        t = get_config_0(t);
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), term_i_8);
        t = geq_0(t);
      }
    }
    t = u_14;
    t = i_103(t);
    return(t);
  }
  t = try_1(t, j_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm u_22 = NULL,w_22 = NULL;
    ATerm v_14;
    v_14 = t;
    {
      ATerm v_22 = NULL;
      t = run_time_0(t);
      {
        v_22 = t;
        if(((u_22 != NULL) && (u_22 != v_22)))
          _fail(v_22);
        else
          u_22 = v_22;
      }
    }
    t = v_14;
    {
      ATerm x_22 = NULL;
      t = term_w_14;
      {
        t = get_config_0(t);
        {
          x_22 = t;
          if(((w_22 != NULL) && (w_22 != x_22)))
            _fail(x_22);
          else
            w_22 = x_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), not_null(u_22)), term_x_14), not_null(w_22)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_2);
  {
    t = term_x_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  d_23 :
  if(match_cons(e_23, sym_Version_0))
    {
      ATerm g_23 = NULL,i_23 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(e_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
      }
      t = c_15;
      {
        ATerm j_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_23));
        {
          j_23 = t;
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
        }
        t = not_null(i_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_101 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_2);
  t = o_101(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_table_create(not_null(o_23));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  {
    ATerm n_15;
    n_15 = t;
    {
      t = term_o_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_15, term_p_15, not_null(s_23));
          t = table_put_0(t);
        }
      }
    }
    t = n_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  t = SSL_table_destroy(not_null(w_23));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_exit(not_null(a_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(((ATgetType(e_24) == AT_LIST) && ATisEmpty(e_24)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
        {
          f_24 = ATgetFirst((ATermList) e_24);
          g_24 = (ATerm) ATgetNext((ATermList) e_24);
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
  ATerm q_15;
  q_15 = t;
  {
    ATerm j_24 = NULL;
    ATerm m_24 = NULL;
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm k_24 = NULL;
          ATerm l_24 = NULL;
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
          t = (ATerm) ATinsert(ATempty, not_null(k_24));
        }
      }
    {
      m_24 = t;
      if(((j_24 != NULL) && (j_24 != m_24)))
        _fail(m_24);
      else
        j_24 = m_24;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(j_24));
      t = printnl_0(t);
    }
  }
  t = q_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_105 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm p_24 (ATerm t)
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = Cons_2(t, a_90, p_24);
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  y_24 = t;
  v_24 :
  if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
    {
      w_24 = ATgetFirst((ATermList) y_24);
      x_24 = (ATerm) ATgetNext((ATermList) y_24);
      {
        ATerm b_25 = NULL;
        t = not_null(x_24);
        {
          ATerm a_16;
          a_16 = t;
          {
            ATerm c_25 = NULL,e_25 = NULL,g_25 = NULL;
            ATerm h_16;
            h_16 = t;
            {
              ATerm d_25 = NULL;
              t = i_0(t);
              {
                d_25 = t;
                if(((c_25 != NULL) && (c_25 != d_25)))
                  _fail(d_25);
                else
                  c_25 = d_25;
              }
            }
            t = h_16;
            {
              ATerm f_25 = NULL;
              t = not_null(w_24);
              {
                t = g_0(t);
                {
                  f_25 = t;
                  if(((e_25 != NULL) && (e_25 != f_25)))
                    _fail(f_25);
                  else
                    e_25 = f_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_25)), not_null(e_25));
                {
                  g_25 = t;
                  if(((b_25 != NULL) && (b_25 != g_25)))
                    _fail(g_25);
                  else
                    b_25 = g_25;
                }
              }
            }
          }
          t = a_16;
          {
            ATerm m_2 (ATerm t)
            {
              t = not_null(b_25);
              return(t);
            }
            t = reverse_acc_2(t, g_0, m_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_24) == AT_LIST) && ATisEmpty(y_24)))
        {
          {
            t = term_e_11;
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
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_105 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym_Program_1))
    {
      s_25 = ATgetArgument(r_25, 0);
      {
        ATerm v_25 = NULL,x_25 = NULL;
        ATerm w_25 = NULL;
        t = SSLgetAnnotations(not_null(r_25));
        {
          w_25 = t;
          if(((v_25 != NULL) && (v_25 != w_25)))
            _fail(w_25);
          else
            v_25 = w_25;
        }
        {
          t = not_null(s_25);
          {
            ATerm z_25 = NULL;
            t = t_70(t);
            {
              x_25 = t;
              {
                ATerm a_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_25)), not_null(v_25));
                {
                  a_26 = t;
                  if(((z_25 != NULL) && (z_25 != a_26)))
                    _fail(a_26);
                  else
                    z_25 = a_26;
                }
                t = not_null(z_25);
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
  ATerm j_26 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL;
      t = term_w_14;
      {
        t = get_config_0(t);
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
      }
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm v_2 (ATerm t)
          {
            ATerm l_26 = NULL;
            l_26 = t;
            if(((j_26 != NULL) && (j_26 != l_26)))
              _fail(l_26);
            else
              j_26 = l_26;
            return(t);
          }
          t = Program_1(t, v_2);
          return(t);
        }
        t = option_defined_1(t, r_2);
      }
    }
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(j_26);
        return(t);
      }
      t = short_description_1(t, z_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_2);
    {
      t = term_k_16;
      {
        t = echo_0(t);
        {
          t = term_t_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  ATerm m_26 = NULL;
                  ATerm n_26 = NULL;
                  n_26 = t;
                  if(((m_26 != NULL) && (m_26 != n_26)))
                    _fail(n_26);
                  else
                    m_26 = n_26;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_26)), term_u_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_3);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm o_26 = NULL;
                    ATerm p_26 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      t = not_null(j_26);
                      return(t);
                    }
                    t = long_description_1(t, c_3);
                    {
                      p_26 = t;
                      if(((o_26 != NULL) && (o_26 != p_26)))
                        _fail(p_26);
                      else
                        o_26 = p_26;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_26)), term_v_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_3);
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
  ATerm w_16;
  w_16 = t;
  {
    ATerm v_26 = NULL;
    ATerm w_26 = NULL;
    w_26 = t;
    if(((v_26 != NULL) && (v_26 != w_26)))
      _fail(w_26);
    else
      v_26 = w_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATempty, not_null(v_26)));
      t = printnl_0(t);
    }
  }
  t = w_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm b_17;
  b_17 = t;
  {
    t = m_100(t);
    t = debug_0(t);
  }
  t = b_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_Undefined_1))
    {
      e_27 = ATgetArgument(d_27, 0);
      {
        ATerm h_27 = NULL,j_27 = NULL;
        ATerm i_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm l_27 = NULL;
            t = u_70(t);
            {
              j_27 = t;
              {
                ATerm m_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_27)), not_null(h_27));
                {
                  m_27 = t;
                  if(((l_27 != NULL) && (l_27 != m_27)))
                    _fail(m_27);
                  else
                    l_27 = m_27;
                }
                t = not_null(l_27);
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
ATerm fetch_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm r_27 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_90, _id);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = Cons_2(t, _id, r_27);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_104 (ATerm))
{
  t = fetch_1(t, l_104);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Help_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm g_17;
      g_17 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = g_17;
      {
        ATerm b_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        t = not_null(a_28);
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
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_82(t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      t = SSL_table_get(not_null(i_28), not_null(j_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__3))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      t_28 = ATgetArgument(q_28, 2);
      {
        ATerm n_17;
        n_17 = t;
        {
          ATerm x_28 = NULL;
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(s_28));
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), not_null(s_28), (ATerm) ATinsert(CheckATermList(not_null(x_28)), not_null(t_28)));
            t = table_put_0(t);
          }
        }
        t = n_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm c_29 = NULL;
  ATerm d_29 = NULL;
  t = term_e_11;
  {
    t = q_105(t);
    {
      d_29 = t;
      if(((c_29 != NULL) && (c_29 != d_29)))
        _fail(d_29);
      else
        c_29 = d_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_16, term_s_16, not_null(c_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_string(j_29, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
        {
          k_29 = ATgetFirst((ATermList) j_29);
          l_29 = (ATerm) ATgetNext((ATermList) j_29);
          {
            ATerm o_29 = NULL;
            ATerm r_17;
            r_17 = t;
            {
              t = not_null(k_29);
              t = a_0(t);
            }
            t = r_17;
            {
              ATerm p_29 = NULL;
              t = term_e_11;
              {
                t = c_0(t);
                {
                  p_29 = t;
                  if(((o_29 != NULL) && (o_29 != p_29)))
                    _fail(p_29);
                  else
                    o_29 = p_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_29)), not_null(o_29));
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
  ATerm d_3 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    t_29 :
    if(!(match_string(u_29, "--help")))
      {
        if(!(match_string(u_29, "-h")))
          {
            if(!(match_string(u_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_x_17;
    {
      t = set_config_0(t);
      t = term_b_18;
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  w_29 :
  if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
    {
      y_29 = ATgetFirst((ATermList) x_29);
      z_29 = (ATerm) ATgetNext((ATermList) x_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
    {
      k_30 = ATgetFirst((ATermList) j_30);
      l_30 = (ATerm) ATgetNext((ATermList) j_30);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(j_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(k_30);
          {
            ATerm t_30 = NULL;
            t = t_64(t);
            {
              r_30 = t;
              {
                t = not_null(l_30);
                {
                  ATerm v_30 = NULL;
                  t = u_64(t);
                  {
                    t_30 = t;
                    {
                      ATerm w_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_30)), not_null(r_30)), not_null(p_30));
                      {
                        w_30 = t;
                        if(((v_30 != NULL) && (v_30 != w_30)))
                          _fail(w_30);
                        else
                          v_30 = w_30;
                      }
                      t = not_null(v_30);
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
  ATerm q_32 = NULL;
  q_32 = t;
  p_32 :
  if(((ATgetType(q_32) == AT_LIST) && ATisEmpty(q_32)))
    {
      {
        ATerm s_32 = NULL,u_32 = NULL;
        ATerm g_18;
        g_18 = t;
        {
          ATerm t_32 = NULL;
          t = SSLgetAnnotations(not_null(q_32));
          {
            t_32 = t;
            if(((s_32 != NULL) && (s_32 != t_32)))
              _fail(t_32);
            else
              s_32 = t_32;
          }
        }
        t = g_18;
        {
          ATerm v_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_32));
          {
            v_32 = t;
            if(((u_32 != NULL) && (u_32 != v_32)))
              _fail(v_32);
            else
              u_32 = v_32;
          }
          t = not_null(u_32);
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
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym__2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(c_33), not_null(d_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_105 (ATerm))
{
  ATerm i_18;
  i_18 = t;
  {
    ATerm g_3 (ATerm t)
    {
      t = term_j_18;
      t = o_105(t);
      return(t);
    }
    t = try_1(t, g_3);
  }
  t = i_18;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm l_33 = NULL;
      ATerm m_18;
      m_18 = t;
      {
        ATerm j_33 = NULL;
        ATerm k_33 = NULL;
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(j_33));
          t = set_config_0(t);
        }
      }
      t = m_18;
      {
        ATerm m_33 = NULL;
        m_33 = t;
        if(((l_33 != NULL) && (l_33 != m_33)))
          _fail(m_33);
        else
          l_33 = m_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_33));
      }
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      ATerm n_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = x_18;
              {
                t = o_105(t);
                t = Cons_2(t, _id, m_3);
              }
            }
          ;
          LocalPopChoice(w_18);
        }
      else
        {
          t = n_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_3, m_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,d_34 = NULL;
    v_33 = t;
    r_33 :
    if(match_cons(v_33, sym__3))
      {
        w_33 = ATgetArgument(v_33, 0);
        x_33 = ATgetArgument(v_33, 1);
        d_34 = ATgetArgument(v_33, 2);
        {
          if(((s_33 != NULL) && (s_33 != w_33)))
            _fail(w_33);
          else
            s_33 = w_33;
          {
            if(((t_33 != NULL) && (t_33 != x_33)))
              _fail(x_33);
            else
              t_33 = x_33;
            {
              if(((u_33 != NULL) && (u_33 != d_34)))
                _fail(d_34);
              else
                u_33 = d_34;
              t = SSL_table_put(not_null(s_33), not_null(t_33), not_null(u_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_105 (ATerm))
{
  ATerm g_34 = NULL;
  ATerm g_19;
  g_19 = t;
  {
    t = term_h_19;
    t = table_put_0(t);
  }
  t = g_19;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_105(t);
          ;
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_3);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm m_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19;
            v_19 = t;
            {
              ATerm w_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = w_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_19;
            {
              t = system_usage_0(t);
              {
                t = term_x_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = m_19;
            {
              ATerm t_3 (ATerm t)
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm h_34 = NULL;
                  h_34 = t;
                  if(((g_34 != NULL) && (g_34 != h_34)))
                    _fail(h_34);
                  else
                    g_34 = h_34;
                  return(t);
                }
                t = Undefined_1(t, w_3);
                return(t);
              }
              t = option_defined_1(t, t_3);
              {
                ATerm x_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_34)), term_a_20);
                  return(t);
                }
                t = say_1(t, x_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_3);
      {
        ATerm b_20;
        b_20 = t;
        {
          t = term_r_16;
          t = table_destroy_0(t);
        }
        t = b_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm))
{
  t = parse_options_1(t, u_101);
  {
    t = store_options_0(t);
    {
      t = w_101(t);
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_101);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm k_20 = t;
              int l_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_101(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(l_20);
                }
              else
                {
                  t = k_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_102(t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = m_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_102);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_3, n_102, o_102, z_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_4 (ATerm t)
    {
      ATerm p_20;
      p_20 = t;
      {
        ATerm k_34 = NULL;
        ATerm l_34 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            l_34 = t;
            if(((k_34 != NULL) && (k_34 != l_34)))
              _fail(l_34);
            else
              k_34 = l_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATinsert(ATempty, not_null(k_34)));
          t = printnl_0(t);
        }
      }
      t = p_20;
      return(t);
    }
    t = if_verbose2_1(t, b_4);
    return(t);
  }
  t = iowrap_4(t, f_102, g_102, h_102, a_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_102 (ATerm), ATerm e_102 (ATerm))
{
  t = iowrap_3(t, d_102, e_102, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = _2(t, _id, a_102);
    return(t);
  }
  t = iowrap_2(t, m_4, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, o_4, p_4);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, n_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
