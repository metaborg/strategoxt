#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Scopes_0;
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
Symbol sym_PointerOf_1;
Symbol sym_Pointer_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_ArrayDecl_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket1_1;
Symbol sym_DeclBracket2_1;
Symbol sym_FunType_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDecl2_2;
Symbol sym_TypeName_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_Enumerator_2;
Symbol sym_EnumVal_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl1_2;
Symbol sym_BitFieldSize_2;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_StringLit_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
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
Symbol sym_TypeCast_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_And_2;
Symbol sym_ExOr_2;
Symbol sym_IncOr_2;
Symbol sym_LAnd_2;
Symbol sym_LOr_2;
Symbol sym_IfExp_3;
Symbol sym_Assign_3;
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
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_TypeSpec_3;
Symbol sym_DQualifiers_3;
Symbol sym_DeclSpec_5;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Compound_2;
Symbol sym_Stat_1;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_FunDef_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_TranslationUnit_1;
Symbol sym_Include_1;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_PpIf_4;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
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
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
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
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket1_1 = ATmakeSymbol("DeclBracket1", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket1_1);
  sym_DeclBracket2_1 = ATmakeSymbol("DeclBracket2", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket2_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl2_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl1_2 = ATmakeSymbol("MemDecl1", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl1_2);
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
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
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
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
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
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
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
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
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
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
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
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
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_17;
ATerm term_v_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_k_9;
ATerm term_b_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
void init_constant_terms (void)
{
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_4);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_Call_2, term_b_4, (ATerm) ATempty);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_4);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym_Call_2, term_e_4, (ATerm) ATempty);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_4);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_5);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_5);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_j_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_j_10);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_j_10);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_j_10);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_j_10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__3, term_u_14, term_v_14, (ATerm) ATempty);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm w_72 (ATerm));
ATerm Call_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm));
ATerm unzip_1 (ATerm, ATerm a_89 (ATerm));
ATerm conc_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm j_95 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_96 (ATerm), ATerm n_96 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_96 (ATerm));
ATerm downup2_2 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm _2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_84 (ATerm), ATerm w_84 (ATerm));
ATerm crush_2 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_80 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_80 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_90 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_78 (ATerm));
ATerm map_1 (ATerm, ATerm d_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_78 (ATerm));
ATerm Program_1 (ATerm, ATerm w_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_97 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_78 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_79 (ATerm));
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
ATerm SVar_1 (ATerm t, ATerm w_72 (ATerm))
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
            t = w_72(t);
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
ATerm Call_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm))
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
            t = l_73(t);
            {
              t_3 = t;
              {
                t = not_null(n_3);
                {
                  ATerm x_3 = NULL;
                  t = m_73(t);
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
              if(((ATermList) o_4 == ATempty))
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
      t = term_c_4;
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
      t = term_p_4;
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
  if(((ATgetType(s_5) == AT_LIST) && ((ATermList) s_5 != ATempty)))
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
  if(((ATermList) a_6 == ATempty))
    {
      t = term_q_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm r_4 = t;
    int s_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_88(t);
        LocalPopChoice(s_4);
      }
    else
      {
        t = r_4;
        {
          t = r_88(t);
          {
            t = _2(t, t_88, c_6);
            t = s_88(t);
          }
        }
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm a_89 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, a_89);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym__2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      {
        t = not_null(g_6);
        {
          ATerm c_0 (ATerm t)
          {
            t = not_null(h_6);
            return(t);
          }
          t = at_end_1(t, c_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm v_4 = t;
    int w_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_95(t);
        LocalPopChoice(w_4);
      }
    else
      {
        t = v_4;
        t = _all(t, l_6);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  ATerm l_10 (ATerm t)
  {
    t = not_null(l_8);
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    t = not_null(m_8);
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    ATerm l_9 = NULL;
    ATerm m_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), not_null(i_8));
    {
      t = conc_0(t);
      {
        m_9 = t;
        if(((l_9 != NULL) && (l_9 != m_9)))
          _fail(m_9);
        else
          l_9 = m_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_9), not_null(j_8));
    return(t);
  }
  ATerm o_10 (ATerm t)
  {
    t = not_null(m_8);
    return(t);
  }
  ATerm p_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_a_5, (ATerm) ATinsert(ATempty, not_null(l_8)));
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_m_5, (ATerm) ATinsert(ATempty, not_null(l_8)));
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_o_5, (ATerm) ATinsert(ATempty, not_null(l_8)));
    return(t);
  }
  ATerm s_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_q_5, (ATerm) ATinsert(ATempty, not_null(l_8)));
    return(t);
  }
  ATerm t_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_w_5, (ATerm) ATinsert(ATempty, not_null(l_8)));
    return(t);
  }
  ATerm u_10 (ATerm t)
  {
    ATerm v_9 = NULL;
    ATerm w_9 = NULL;
    t = not_null(m_8);
    {
      ATerm z_10 (ATerm t)
      {
        ATerm x_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              ATerm b_6 = t;
              int d_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  LocalPopChoice(d_6);
                }
              else
                {
                  t = b_6;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm g_0 (ATerm t)
            {
              t = try_1(t, z_10);
              return(t);
            }
            t = Cons_2(t, d_0, g_0);
            LocalPopChoice(y_5);
          }
        else
          {
            t = x_5;
            t = Cons_2(t, _id, z_10);
          }
        return(t);
      }
      t = z_10(t);
      {
        w_9 = t;
        if(((v_9 != NULL) && (v_9 != w_9)))
          _fail(w_9);
        else
          v_9 = w_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(l_8), not_null(v_9));
    return(t);
  }
  ATerm v_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
    ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
    t = not_null(m_8);
    {
      ATerm h_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
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
        t = try_1(t, m_0);
        {
          ATerm k_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              LocalPopChoice(m_6);
            }
          else
            {
              t = k_6;
              {
                ATerm n_6 = t;
                int o_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_6 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm n_0 (ATerm t)
                        {
                          t = SVar_1(t, _id);
                          return(t);
                        }
                        t = Call_2(t, n_0, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_6;
                      }
                    t = CreateDef2_0(t);
                    LocalPopChoice(o_6);
                  }
                else
                  {
                    t = n_6;
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = split_2(t, _id, o_0);
                    }
                  }
              }
            }
        }
        return(t);
      }
      t = unzip_1(t, h_0);
      {
        c_10 = t;
        l_7 :
        if(match_cons(c_10, sym__2))
          {
            d_10 = ATgetArgument(c_10, 0);
            e_10 = ATgetArgument(c_10, 1);
            {
              ATerm f_10 = NULL;
              if(((z_9 != NULL) && (z_9 != d_10)))
                _fail(d_10);
              else
                z_9 = d_10;
              {
                if(((a_10 != NULL) && (a_10 != e_10)))
                  _fail(e_10);
                else
                  a_10 = e_10;
                {
                  t = not_null(a_10);
                  {
                    t = concat_0(t);
                    {
                      f_10 = t;
                      {
                        if(((b_10 != NULL) && (b_10 != f_10)))
                          _fail(f_10);
                        else
                          b_10 = f_10;
                        {
                          ATerm q_6 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = q_6;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_10), (ATerm) ATmakeAppl(sym_Call_2, not_null(l_8), not_null(z_9)));
    return(t);
  }
  k_8 = t;
  m_7 :
  if(match_cons(k_8, sym_SDef_4))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      d_8 = ATgetArgument(k_8, 2);
      c_8 = ATgetArgument(k_8, 3);
      n_7 :
      if(((ATgetType(l_8) == AT_LIST) && ((ATermList) l_8 != ATempty)))
        {
          h_8 = ATgetFirst((ATermList) l_8);
          b_8 = (ATerm) ATgetNext((ATermList) l_8);
          o_7 :
          if(match_cons(h_8, sym_DontInline_0))
            {
              p_7 :
              if(((ATermList) b_8 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_8), not_null(d_8), not_null(c_8));
                }
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
      if(match_cons(k_8, sym_Rec_2))
        {
          l_8 = ATgetArgument(k_8, 0);
          m_8 = ATgetArgument(k_8, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_8), (ATerm)ATempty, not_null(m_8))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_8)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(k_8, sym_SDef_3))
            {
              l_8 = ATgetArgument(k_8, 0);
              m_8 = ATgetArgument(k_8, 1);
              d_8 = ATgetArgument(k_8, 2);
              q_7 :
              if(((ATermList) m_8 == ATempty))
                {
                  r_7 :
                  if(match_cons(d_8, sym_Rec_2))
                    {
                      e_8 = ATgetArgument(d_8, 0);
                      f_8 = ATgetArgument(d_8, 1);
                      {
                        ATerm v_8 = NULL;
                        ATerm a_9 = NULL;
                        t = not_null(f_8);
                        {
                          ATerm p_0 (ATerm t)
                          {
                            ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
                            w_8 = t;
                            d_7 :
                            if(match_cons(w_8, sym_Call_2))
                              {
                                x_8 = ATgetArgument(w_8, 0);
                                z_8 = ATgetArgument(w_8, 1);
                                e_7 :
                                if(match_cons(x_8, sym_SVar_1))
                                  {
                                    y_8 = ATgetArgument(x_8, 0);
                                    f_7 :
                                    if(((ATermList) z_8 == ATempty))
                                      {
                                        {
                                          if(((e_8 != NULL) && (e_8 != y_8)))
                                            _fail(y_8);
                                          else
                                            e_8 = y_8;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_8)), (ATerm) ATempty);
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
                          t = alltd_1(t, p_0);
                          {
                            a_9 = t;
                            if(((v_8 != NULL) && (v_8 != a_9)))
                              _fail(a_9);
                            else
                              v_8 = a_9;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_8), (ATerm)ATempty, not_null(v_8));
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
              if(match_cons(k_8, sym_Seq_2))
                {
                  l_8 = ATgetArgument(k_8, 0);
                  m_8 = ATgetArgument(k_8, 1);
                  s_7 :
                  if(match_cons(m_8, sym_Seq_2))
                    {
                      i_8 = ATgetArgument(m_8, 0);
                      j_8 = ATgetArgument(m_8, 1);
                      t_7 :
                      if(match_cons(l_8, sym_Where_1))
                        {
                          h_8 = ATgetArgument(l_8, 0);
                          u_7 :
                          if(match_cons(i_8, sym_Build_1))
                            {
                              g_8 = ATgetArgument(i_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_8)), not_null(j_8)));
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(l_8, sym_Id_0))
                            {
                              t = m_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(m_8, sym_Build_1))
                        {
                          i_8 = ATgetArgument(m_8, 0);
                          v_7 :
                          if(match_cons(l_8, sym_Where_1))
                            {
                              h_8 = ATgetArgument(l_8, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_8), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_8)));
                            }
                          else
                            {
                              if(match_cons(l_8, sym_Id_0))
                                {
                                  t = m_10(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(m_8, sym_Id_0))
                            {
                              w_7 :
                              if(match_cons(l_8, sym_Id_0))
                                {
                                  ATerm r_6 = t;
                                  int s_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = l_10(t);
                                      LocalPopChoice(s_6);
                                    }
                                  else
                                    {
                                      t = r_6;
                                      t = m_10(t);
                                    }
                                }
                              else
                                {
                                  t = l_10(t);
                                }
                            }
                          else
                            {
                              x_7 :
                              if(match_cons(l_8, sym_Id_0))
                                {
                                  t = m_10(t);
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
                  if(match_cons(k_8, sym_Scope_2))
                    {
                      l_8 = ATgetArgument(k_8, 0);
                      m_8 = ATgetArgument(k_8, 1);
                      y_7 :
                      if(match_cons(m_8, sym_Scope_2))
                        {
                          i_8 = ATgetArgument(m_8, 0);
                          j_8 = ATgetArgument(m_8, 1);
                          z_7 :
                          if(((ATermList) l_8 == ATempty))
                            {
                              {
                                ATerm t_6 = t;
                                int u_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_10(t);
                                    LocalPopChoice(u_6);
                                  }
                                else
                                  {
                                    t = t_6;
                                    t = o_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = n_10(t);
                            }
                        }
                      else
                        {
                          a_8 :
                          if(((ATermList) l_8 == ATempty))
                            {
                              t = o_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(k_8, sym_Thread_1))
                        {
                          l_8 = ATgetArgument(k_8, 0);
                          t = p_10(t);
                        }
                      else
                        {
                          if(match_cons(k_8, sym_Some_1))
                            {
                              l_8 = ATgetArgument(k_8, 0);
                              t = q_10(t);
                            }
                          else
                            {
                              if(match_cons(k_8, sym_One_1))
                                {
                                  l_8 = ATgetArgument(k_8, 0);
                                  t = r_10(t);
                                }
                              else
                                {
                                  if(match_cons(k_8, sym_All_1))
                                    {
                                      l_8 = ATgetArgument(k_8, 0);
                                      t = s_10(t);
                                    }
                                  else
                                    {
                                      if(match_cons(k_8, sym_Bagof_1))
                                        {
                                          l_8 = ATgetArgument(k_8, 0);
                                          t = t_10(t);
                                        }
                                      else
                                        {
                                          if(match_cons(k_8, sym_Call_2))
                                            {
                                              l_8 = ATgetArgument(k_8, 0);
                                              m_8 = ATgetArgument(k_8, 1);
                                              {
                                                ATerm v_6 = t;
                                                int w_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_10(t);
                                                    LocalPopChoice(w_6);
                                                  }
                                                else
                                                  {
                                                    t = v_6;
                                                    t = v_10(t);
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
ATerm repeat_2 (ATerm t, ATerm m_96 (ATerm), ATerm n_96 (ATerm))
{
  ATerm d_11 (ATerm t)
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_96(t);
        t = d_11(t);
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = n_96(t);
      }
    return(t);
  }
  t = d_11(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_96 (ATerm))
{
  t = repeat_2(t, p_96, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  ATerm e_11 (ATerm t)
  {
    t = m_93(t);
    {
      t = _all(t, e_11);
      t = n_93(t);
    }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        ATerm r_11 = NULL,t_11 = NULL;
        ATerm s_11 = NULL;
        t = SSLgetAnnotations(not_null(l_11));
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
        {
          t = not_null(m_11);
          {
            ATerm v_11 = NULL;
            t = e_56(t);
            {
              t_11 = t;
              {
                t = not_null(n_11);
                {
                  ATerm x_11 = NULL;
                  t = f_56(t);
                  {
                    v_11 = t;
                    {
                      ATerm y_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_11), not_null(v_11)), not_null(r_11));
                      {
                        y_11 = t;
                        if(((x_11 != NULL) && (x_11 != y_11)))
                          _fail(y_11);
                        else
                          x_11 = y_11;
                      }
                      t = not_null(x_11);
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
  ATerm g_12 = NULL;
  ATerm z_6;
  z_6 = t;
  {
    ATerm q_0 (ATerm t)
    {
      ATerm h_12 = NULL,i_12 = NULL;
      h_12 = t;
      f_12 :
      if(match_cons(h_12, sym_Program_1))
        {
          i_12 = ATgetArgument(h_12, 0);
          if(((g_12 != NULL) && (g_12 != i_12)))
            _fail(i_12);
          else
            g_12 = i_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(g_12)), term_b_7));
      {
        t = printnl_0(t);
        {
          t = term_g_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_6;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, term_h_7));
  {
    t = printnl_0(t);
    {
      t = term_g_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  t = SSL_TicksToSeconds(not_null(l_12));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_12), not_null(s_12));
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = SSL_addr(not_null(r_12), not_null(s_12));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_84 (ATerm), ATerm w_84 (ATerm))
{
  ATerm k_7 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_84(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = k_7;
      {
        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
        z_12 = t;
        y_12 :
        if(((ATgetType(z_12) == AT_LIST) && ((ATermList) z_12 != ATempty)))
          {
            a_13 = ATgetFirst((ATermList) z_12);
            b_13 = (ATerm) ATgetNext((ATermList) z_12);
            {
              ATerm e_13 = NULL;
              ATerm f_13 = NULL;
              t = not_null(b_13);
              {
                t = foldr_2(t, v_84, w_84);
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(e_13));
                t = w_84(t);
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
ATerm crush_2 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm m_13 = NULL;
  ATerm o_13 = NULL;
  m_13 = t;
  {
    ATerm p_13 = NULL;
    ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
    t = not_null(m_13);
    {
      p_13 = t;
      {
        t = SSL_explode_term(not_null(p_13));
        {
          r_13 = t;
          l_13 :
          if(match_cons(r_13, sym__2))
            {
              s_13 = ATgetArgument(r_13, 0);
              t_13 = ATgetArgument(r_13, 1);
              if(((o_13 != NULL) && (o_13 != t_13)))
                _fail(t_13);
              else
                o_13 = t_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_13);
      t = foldr_2(t, j_86, k_86);
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
    ATerm r_0 (ATerm t)
    {
      t = term_o_8;
      return(t);
    }
    t = crush_2(t, r_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm k_14 = NULL;
    ATerm t_0 (ATerm t)
    {
      ATerm p_8 = t;
      if((PushChoice() == 0))
        {
          ATerm u_0 (ATerm t)
          {
            ATerm f_14 = NULL;
            f_14 = t;
            x_13 :
            if(!(match_cons(f_14, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_8;
        }
      return(t);
    }
    t = _2(t, t_0, _id);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm g_14 = NULL,h_14 = NULL;
          g_14 = t;
          z_13 :
          if(match_cons(g_14, sym_Runtime_1))
            {
              h_14 = ATgetArgument(g_14, 0);
              if(((d_14 != NULL) && (d_14 != h_14)))
                _fail(h_14);
              else
                d_14 = h_14;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_0);
        return(t);
      }
      t = _2(t, v_0, _id);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm i_14 = NULL,j_14 = NULL;
            i_14 = t;
            b_14 :
            if(match_cons(i_14, sym_Program_1))
              {
                j_14 = ATgetArgument(i_14, 0);
                if(((e_14 != NULL) && (e_14 != j_14)))
                  _fail(j_14);
                else
                  e_14 = j_14;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          return(t);
        }
        t = _2(t, x_0, _id);
        {
          ATerm l_14 = NULL;
          t = run_time_0(t);
          {
            l_14 = t;
            if(((k_14 != NULL) && (k_14 != l_14)))
              _fail(l_14);
            else
              k_14 = l_14;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(k_14)), term_q_8), not_null(e_14)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_0);
  {
    t = term_o_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      t = SSL_WriteToTextFile(not_null(s_14), not_null(t_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym__2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      t = SSL_WriteToBinaryFile(not_null(a_15), not_null(b_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm s_8;
  s_8 = t;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            ATerm k_15 = NULL,l_15 = NULL;
            k_15 = t;
            g_15 :
            if(match_cons(k_15, sym_Output_1))
              {
                l_15 = ATgetArgument(k_15, 0);
                if(((j_15 != NULL) && (j_15 != l_15)))
                  _fail(l_15);
                else
                  j_15 = l_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, a_1);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm m_15 = NULL;
            t = term_b_9;
            {
              m_15 = t;
              if(((j_15 != NULL) && (j_15 != m_15)))
                _fail(m_15);
              else
                j_15 = m_15;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_0, _id);
  }
  t = s_8;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm c_1 (ATerm t)
      {
        t = not_null(j_15);
        return(t);
      }
      t = split_2(t, c_1, _id);
      return(t);
    }
    t = _2(t, _id, b_1);
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm n_15 = NULL;
              n_15 = t;
              i_15 :
              if(!(match_cons(n_15, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_1);
            return(t);
          }
          t = _2(t, e_1, WriteToBinaryFile_0);
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm e_9;
  e_9 = t;
  t = dtime_0(t);
  t = e_9;
  {
    t = t_80(t);
    {
      ATerm f_9;
      f_9 = t;
      {
        ATerm u_15 = NULL;
        t = dtime_0(t);
        {
          u_15 = t;
          if(((t_15 != NULL) && (t_15 != u_15)))
            _fail(u_15);
          else
            t_15 = u_15;
        }
      }
      t = f_9;
      {
        v_15 = t;
        s_15 :
        if(match_cons(v_15, sym__2))
          {
            w_15 = ATgetArgument(v_15, 0);
            x_15 = ATgetArgument(v_15, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_15)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_15))), not_null(x_15));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = SSL_ReadFromFile(not_null(d_16));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  ATerm i_16 = NULL,k_16 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm j_16 = NULL;
    t = j_83(t);
    {
      j_16 = t;
      if(((i_16 != NULL) && (i_16 != j_16)))
        _fail(j_16);
      else
        i_16 = j_16;
    }
  }
  t = g_9;
  {
    ATerm l_16 = NULL;
    t = k_83(t);
    {
      l_16 = t;
      if(((k_16 != NULL) && (k_16 != l_16)))
        _fail(l_16);
      else
        k_16 = l_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(k_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_16 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm s_16 = NULL,t_16 = NULL;
          s_16 = t;
          p_16 :
          if(match_cons(s_16, sym_Input_1))
            {
              t_16 = ATgetArgument(s_16, 0);
              if(((r_16 != NULL) && (r_16 != t_16)))
                _fail(t_16);
              else
                r_16 = t_16;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_1);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        {
          ATerm u_16 = NULL;
          t = term_k_9;
          {
            u_16 = t;
            if(((r_16 != NULL) && (r_16 != u_16)))
              _fail(u_16);
            else
              r_16 = u_16;
          }
        }
      }
  }
  t = h_9;
  {
    ATerm h_1 (ATerm t)
    {
      t = not_null(r_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym_Version_0))
    {
      ATerm d_17 = NULL,f_17 = NULL;
      ATerm n_9;
      n_9 = t;
      {
        ATerm e_17 = NULL;
        t = SSLgetAnnotations(not_null(b_17));
        {
          e_17 = t;
          if(((d_17 != NULL) && (d_17 != e_17)))
            _fail(e_17);
          else
            d_17 = e_17;
        }
      }
      t = n_9;
      {
        ATerm g_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_17));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        t = not_null(f_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_1);
  t = r_80(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_table_create(not_null(l_17));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  {
    ATerm s_9;
    s_9 = t;
    {
      t = term_t_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_9, term_u_9, not_null(p_17));
          t = table_put_0(t);
        }
      }
    }
    t = s_9;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_9, not_null(v_17), not_null(w_17));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  f_18 = t;
  d_18 :
  if(match_string(f_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_18) == AT_LIST) && ((ATermList) f_18 != ATempty)))
        {
          g_18 = ATgetFirst((ATermList) f_18);
          h_18 = (ATerm) ATgetNext((ATermList) f_18);
          e_18 :
          if(((ATgetType(h_18) == AT_LIST) && ((ATermList) h_18 != ATempty)))
            {
              i_18 = ATgetFirst((ATermList) h_18);
              j_18 = (ATerm) ATgetNext((ATermList) h_18);
              {
                ATerm n_18 = NULL;
                ATerm y_9;
                y_9 = t;
                {
                  t = not_null(g_18);
                  t = j_0(t);
                }
                t = y_9;
                {
                  ATerm o_18 = NULL;
                  t = not_null(i_18);
                  {
                    t = k_0(t);
                    {
                      o_18 = t;
                      if(((n_18 != NULL) && (n_18 != o_18)))
                        _fail(o_18);
                      else
                        n_18 = o_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_18)), not_null(n_18));
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
ATerm io_options_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm g_19 = NULL;
        g_19 = t;
        s_18 :
        if(!(match_string(g_19, "-S")))
          {
            if(!(match_string(g_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_k_10;
        t = set_config_0(t);
        t = term_w_10;
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_x_10;
        return(t);
      }
      t = Option_3(t, l_1, m_1, n_1);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm y_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm h_19 = NULL;
              h_19 = t;
              t_18 :
              if(!(match_string(h_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_c_11;
              t = set_config_0(t);
              t = term_f_11;
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = Option_3(t, o_1, p_1, q_1);
            LocalPopChoice(a_11);
          }
        else
          {
            t = y_10;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm i_19 = NULL;
                    i_19 = t;
                    u_18 :
                    if(!(match_string(i_19, "-v")))
                      {
                        if(!(match_string(i_19, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_o_11;
                    t = set_config_0(t);
                    t = term_p_11;
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_q_11;
                    return(t);
                  }
                  t = Option_3(t, r_1, s_1, t_1);
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm u_11 = t;
                    int w_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm j_19 = NULL;
                          j_19 = t;
                          v_18 :
                          if(!(match_string(j_19, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          ATerm m_19 = NULL;
                          ATerm z_11;
                          z_11 = t;
                          {
                            ATerm k_19 = NULL;
                            ATerm l_19 = NULL;
                            l_19 = t;
                            if(((k_19 != NULL) && (k_19 != l_19)))
                              _fail(l_19);
                            else
                              k_19 = l_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(k_19));
                              t = set_config_0(t);
                            }
                          }
                          t = z_11;
                          {
                            ATerm n_19 = NULL;
                            n_19 = t;
                            if(((m_19 != NULL) && (m_19 != n_19)))
                              _fail(n_19);
                            else
                              m_19 = n_19;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_19));
                          }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = term_b_12;
                          return(t);
                        }
                        t = ArgOption_3(t, u_1, v_1, w_1);
                        LocalPopChoice(w_11);
                      }
                    else
                      {
                        t = u_11;
                        {
                          ATerm c_12 = t;
                          int d_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm o_19 = NULL;
                                o_19 = t;
                                y_18 :
                                if(!(match_string(o_19, "-i")))
                                  {
                                    if(!(match_string(o_19, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                ATerm r_19 = NULL;
                                ATerm e_12;
                                e_12 = t;
                                {
                                  ATerm p_19 = NULL;
                                  ATerm q_19 = NULL;
                                  q_19 = t;
                                  if(((p_19 != NULL) && (p_19 != q_19)))
                                    _fail(q_19);
                                  else
                                    p_19 = q_19;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_j_12, not_null(p_19));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_12;
                                {
                                  ATerm s_19 = NULL;
                                  s_19 = t;
                                  if(((r_19 != NULL) && (r_19 != s_19)))
                                    _fail(s_19);
                                  else
                                    r_19 = s_19;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_19));
                                }
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = term_k_12;
                                return(t);
                              }
                              t = ArgOption_3(t, x_1, y_1, z_1);
                              LocalPopChoice(d_12);
                            }
                          else
                            {
                              t = c_12;
                              {
                                ATerm m_12 = t;
                                int n_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_2 (ATerm t)
                                    {
                                      ATerm t_19 = NULL;
                                      t_19 = t;
                                      b_19 :
                                      if(!(match_string(t_19, "-o")))
                                        {
                                          if(!(match_string(t_19, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      ATerm w_19 = NULL;
                                      ATerm o_12;
                                      o_12 = t;
                                      {
                                        ATerm u_19 = NULL;
                                        ATerm v_19 = NULL;
                                        v_19 = t;
                                        if(((u_19 != NULL) && (u_19 != v_19)))
                                          _fail(v_19);
                                        else
                                          u_19 = v_19;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(u_19));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = o_12;
                                      {
                                        ATerm x_19 = NULL;
                                        x_19 = t;
                                        if(((w_19 != NULL) && (w_19 != x_19)))
                                          _fail(x_19);
                                        else
                                          w_19 = x_19;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_19));
                                      }
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_u_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, a_2, b_2, c_2);
                                    LocalPopChoice(n_12);
                                  }
                                else
                                  {
                                    t = m_12;
                                    {
                                      ATerm v_12 = t;
                                      int w_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_2 (ATerm t)
                                          {
                                            ATerm y_19 = NULL;
                                            y_19 = t;
                                            e_19 :
                                            if(!(match_string(y_19, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_2 (ATerm t)
                                          {
                                            t = term_c_13;
                                            t = set_config_0(t);
                                            t = term_d_13;
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_g_13;
                                            return(t);
                                          }
                                          t = Option_3(t, d_2, e_2, f_2);
                                          LocalPopChoice(w_12);
                                        }
                                      else
                                        {
                                          t = v_12;
                                          {
                                            ATerm g_2 (ATerm t)
                                            {
                                              ATerm z_19 = NULL;
                                              z_19 = t;
                                              f_19 :
                                              if(!(match_string(z_19, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm h_2 (ATerm t)
                                            {
                                              t = term_i_13;
                                              t = set_config_0(t);
                                              t = term_j_13;
                                              return(t);
                                            }
                                            ATerm i_2 (ATerm t)
                                            {
                                              t = term_k_13;
                                              return(t);
                                            }
                                            t = Option_3(t, g_2, h_2, i_2);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  t = SSL_table_destroy(not_null(h_20));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_20 = NULL;
  ATerm w_20 (ATerm t)
  {
    t = SSL_exit(not_null(p_20));
    return(t);
  }
  ATerm x_20 (ATerm t)
  {
    ATerm s_20 = NULL,u_20 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm t_20 = NULL;
      t = SSLgetAnnotations(not_null(p_20));
      {
        t_20 = t;
        if(((s_20 != NULL) && (s_20 != t_20)))
          _fail(t_20);
        else
          s_20 = t_20;
      }
    }
    t = n_13;
    {
      ATerm v_20 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(s_20));
      {
        v_20 = t;
        if(((u_20 != NULL) && (u_20 != v_20)))
          _fail(v_20);
        else
          u_20 = v_20;
      }
      t = not_null(u_20);
    }
    return(t);
  }
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_exit_0))
    {
      ATerm q_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_20(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = q_13;
          t = x_20(t);
        }
    }
  else
    {
      t = w_20(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_implode_string(not_null(b_21));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm e_21 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_21);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          t = Nil_0(t);
          t = r_90(t);
        }
      }
    return(t);
  }
  t = e_21(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = y_13;
      {
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
        h_21 = t;
        g_21 :
        if(((ATgetType(h_21) == AT_LIST) && ((ATermList) h_21 != ATempty)))
          {
            i_21 = ATgetFirst((ATermList) h_21);
            j_21 = (ATerm) ATgetNext((ATermList) h_21);
            {
              t = not_null(i_21);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(j_21);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  t = SSL_explode_string(not_null(p_21));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm s_21 (ATerm t)
  {
    ATerm c_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = c_14;
        t = Cons_2(t, d_90, s_21);
      }
    return(t);
  }
  t = s_21(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  b_22 = t;
  y_21 :
  if(((ATgetType(b_22) == AT_LIST) && ((ATermList) b_22 != ATempty)))
    {
      z_21 = ATgetFirst((ATermList) b_22);
      a_22 = (ATerm) ATgetNext((ATermList) b_22);
      {
        ATerm e_22 = NULL;
        t = not_null(a_22);
        {
          ATerm n_14;
          n_14 = t;
          {
            ATerm f_22 = NULL,h_22 = NULL,j_22 = NULL;
            ATerm o_14;
            o_14 = t;
            {
              ATerm g_22 = NULL;
              t = i_0(t);
              {
                g_22 = t;
                if(((f_22 != NULL) && (f_22 != g_22)))
                  _fail(g_22);
                else
                  f_22 = g_22;
              }
            }
            t = o_14;
            {
              ATerm i_22 = NULL;
              t = not_null(z_21);
              {
                t = f_0(t);
                {
                  i_22 = t;
                  if(((h_22 != NULL) && (h_22 != i_22)))
                    _fail(i_22);
                  else
                    h_22 = i_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_22)), not_null(h_22));
                {
                  j_22 = t;
                  if(((e_22 != NULL) && (e_22 != j_22)))
                    _fail(j_22);
                  else
                    e_22 = j_22;
                }
              }
            }
          }
          t = n_14;
          {
            ATerm k_2 (ATerm t)
            {
              t = not_null(e_22);
              return(t);
            }
            t = reverse_acc_2(t, f_0, k_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_22 == ATempty))
        {
          {
            t = term_j_10;
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
ATerm short_description_1 (ATerm t, ATerm j_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_68 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_Program_1))
    {
      v_22 = ATgetArgument(u_22, 0);
      {
        ATerm y_22 = NULL,a_23 = NULL;
        ATerm z_22 = NULL;
        t = SSLgetAnnotations(not_null(u_22));
        {
          z_22 = t;
          if(((y_22 != NULL) && (y_22 != z_22)))
            _fail(z_22);
          else
            y_22 = z_22;
        }
        {
          t = not_null(v_22);
          {
            ATerm c_23 = NULL;
            t = w_68(t);
            {
              a_23 = t;
              {
                ATerm d_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_23)), not_null(y_22));
                {
                  d_23 = t;
                  if(((c_23 != NULL) && (c_23 != d_23)))
                    _fail(d_23);
                  else
                    c_23 = d_23;
                }
                t = not_null(c_23);
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
  ATerm m_23 = NULL;
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm n_23 = NULL;
      n_23 = t;
      if(((m_23 != NULL) && (m_23 != n_23)))
        _fail(n_23);
      else
        m_23 = n_23;
      return(t);
    }
    t = Program_1(t, n_2);
    return(t);
  }
  t = option_defined_1(t, m_2);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm o_23 = NULL;
      ATerm p_23 = NULL;
      t = term_j_10;
      {
        ATerm p_2 (ATerm t)
        {
          t = not_null(m_23);
          return(t);
        }
        t = short_description_1(t, p_2);
        {
          t = concat_strings_0(t);
          {
            p_23 = t;
            if(((o_23 != NULL) && (o_23 != p_23)))
              _fail(p_23);
            else
              o_23 = p_23;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(o_23)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, term_p_14));
      {
        t = printnl_0(t);
        {
          t = term_w_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm q_23 = NULL;
                  q_23 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_23)), term_x_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_2);
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm s_23 = NULL;
                    ATerm t_23 = NULL;
                    t = term_j_10;
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(m_23);
                        return(t);
                      }
                      t = long_description_1(t, y_2);
                      {
                        t = concat_strings_0(t);
                        {
                          t_23 = t;
                          if(((s_23 != NULL) && (s_23 != t_23)))
                            _fail(t_23);
                          else
                            s_23 = t_23;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_23)), term_c_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_2);
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
ATerm printnl_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        ATerm d_15;
        d_15 = t;
        t = SSL_printnl(not_null(b_24), not_null(c_24));
        t = d_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym_Undefined_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      {
        ATerm p_24 = NULL,r_24 = NULL;
        ATerm q_24 = NULL;
        t = SSLgetAnnotations(not_null(l_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
        {
          t = not_null(m_24);
          {
            ATerm t_24 = NULL;
            t = x_68(t);
            {
              r_24 = t;
              {
                ATerm u_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_24)), not_null(p_24));
                {
                  u_24 = t;
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                }
                t = not_null(t_24);
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
ATerm fetch_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm z_24 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_90, _id);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = Cons_2(t, _id, z_24);
      }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_79 (ATerm))
{
  t = fetch_1(t, i_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_Help_0))
    {
      ATerm g_25 = NULL,i_25 = NULL;
      ATerm h_15;
      h_15 = t;
      {
        ATerm h_25 = NULL;
        t = SSLgetAnnotations(not_null(e_25));
        {
          h_25 = t;
          if(((g_25 != NULL) && (g_25 != h_25)))
            _fail(h_25);
          else
            g_25 = h_25;
        }
      }
      t = h_15;
      {
        ATerm j_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_25));
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
        t = not_null(i_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_97 (ATerm))
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_97(t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__2))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      t = SSL_table_get(not_null(q_25), not_null(r_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__3))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      b_26 = ATgetArgument(y_25, 2);
      {
        ATerm q_15;
        q_15 = t;
        {
          ATerm f_26 = NULL;
          ATerm g_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_25), not_null(a_26));
          {
            ATerm r_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_15);
              }
            else
              {
                t = r_15;
                t = (ATerm) ATempty;
              }
            {
              g_26 = t;
              if(((f_26 != NULL) && (f_26 != g_26)))
                _fail(g_26);
              else
                f_26 = g_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_25), not_null(a_26), (ATerm) ATinsert(CheckATermList(not_null(f_26)), not_null(b_26)));
            t = table_put_0(t);
          }
        }
        t = q_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm k_26 = NULL;
  ATerm l_26 = NULL;
  t = term_j_10;
  {
    t = o_78(t);
    {
      l_26 = t;
      if(((k_26 != NULL) && (k_26 != l_26)))
        _fail(l_26);
      else
        k_26 = l_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_v_14, not_null(k_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_string(r_26, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_26) == AT_LIST) && ((ATermList) r_26 != ATempty)))
        {
          s_26 = ATgetFirst((ATermList) r_26);
          t_26 = (ATerm) ATgetNext((ATermList) r_26);
          {
            ATerm w_26 = NULL;
            ATerm z_15;
            z_15 = t;
            {
              t = not_null(s_26);
              t = a_0(t);
            }
            t = z_15;
            {
              ATerm x_26 = NULL;
              t = term_j_10;
              {
                t = b_0(t);
                {
                  x_26 = t;
                  if(((w_26 != NULL) && (w_26 != x_26)))
                    _fail(x_26);
                  else
                    w_26 = x_26;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(w_26));
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
  ATerm b_3 (ATerm t)
  {
    ATerm c_27 = NULL;
    c_27 = t;
    b_27 :
    if(!(match_string(c_27, "--help")))
      {
        if(!(match_string(c_27, "-h")))
          {
            if(!(match_string(c_27, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_a_16;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = Option_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  e_27 :
  if(((ATgetType(f_27) == AT_LIST) && ((ATermList) f_27 != ATempty)))
    {
      g_27 = ATgetFirst((ATermList) f_27);
      h_27 = (ATerm) ATgetNext((ATermList) f_27);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(((ATgetType(r_27) == AT_LIST) && ((ATermList) r_27 != ATempty)))
    {
      s_27 = ATgetFirst((ATermList) r_27);
      t_27 = (ATerm) ATgetNext((ATermList) r_27);
      {
        ATerm x_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          y_27 = t;
          if(((x_27 != NULL) && (x_27 != y_27)))
            _fail(y_27);
          else
            x_27 = y_27;
        }
        {
          t = not_null(s_27);
          {
            ATerm b_28 = NULL;
            t = g_74(t);
            {
              z_27 = t;
              {
                t = not_null(t_27);
                {
                  ATerm d_28 = NULL;
                  t = h_74(t);
                  {
                    b_28 = t;
                    {
                      ATerm e_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_28)), not_null(z_27)), not_null(x_27));
                      {
                        e_28 = t;
                        if(((d_28 != NULL) && (d_28 != e_28)))
                          _fail(e_28);
                        else
                          d_28 = e_28;
                      }
                      t = not_null(d_28);
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
  ATerm o_28 = NULL;
  o_28 = t;
  n_28 :
  if(((ATermList) o_28 == ATempty))
    {
      {
        ATerm q_28 = NULL,s_28 = NULL;
        ATerm c_16;
        c_16 = t;
        {
          ATerm r_28 = NULL;
          t = SSLgetAnnotations(not_null(o_28));
          {
            r_28 = t;
            if(((q_28 != NULL) && (q_28 != r_28)))
              _fail(r_28);
            else
              q_28 = r_28;
          }
        }
        t = c_16;
        {
          ATerm t_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_28));
          {
            t_28 = t;
            if(((s_28 != NULL) && (s_28 != t_28)))
              _fail(t_28);
            else
              s_28 = t_28;
          }
          t = not_null(s_28);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm e_16;
  e_16 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = term_f_16;
      t = m_78(t);
      return(t);
    }
    t = try_1(t, e_3);
  }
  t = e_16;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm y_28 = NULL;
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_28));
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_16);
            }
          else
            {
              t = m_16;
              {
                t = m_78(t);
                t = Cons_2(t, _id, g_3);
              }
            }
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_3, g_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
    h_29 = t;
    d_29 :
    if(match_cons(h_29, sym__3))
      {
        i_29 = ATgetArgument(h_29, 0);
        j_29 = ATgetArgument(h_29, 1);
        k_29 = ATgetArgument(h_29, 2);
        {
          if(((e_29 != NULL) && (e_29 != i_29)))
            _fail(i_29);
          else
            e_29 = i_29;
          {
            if(((f_29 != NULL) && (f_29 != j_29)))
              _fail(j_29);
            else
              f_29 = j_29;
            {
              if(((g_29 != NULL) && (g_29 != k_29)))
                _fail(k_29);
              else
                g_29 = k_29;
              t = SSL_table_put(not_null(e_29), not_null(f_29), not_null(g_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm n_29 = NULL;
  ATerm q_16;
  q_16 = t;
  {
    t = term_v_16;
    t = table_put_0(t);
  }
  t = q_16;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_78(t);
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_3);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm j_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm o_29 = NULL;
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, j_3);
              {
                ATerm c_17;
                c_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_29)), term_h_17));
                  t = printnl_0(t);
                }
                t = c_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_3);
      {
        ATerm i_17;
        i_17 = t;
        {
          t = term_u_14;
          t = table_destroy_0(t);
        }
        t = i_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      ATerm m_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_80);
          LocalPopChoice(n_17);
        }
      else
        {
          t = m_17;
          {
            ATerm o_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, g_80);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(q_17);
              }
            else
              {
                t = o_17;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  t = iowrap_3(t, b_80, c_80, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, y_79);
    return(t);
  }
  t = iowrap_2(t, q_3, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, w_3, z_3);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, u_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
