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
ATerm term_d_17;
ATerm term_t_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_x_10;
ATerm term_w_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_j_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_5);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_Call_2, term_b_5, (ATerm) ATempty);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_5);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_Call_2, term_e_5, (ATerm) ATempty);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_6);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_bagof", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATinsert(ATempty, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATinsert(ATempty, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATinsert(ATempty, term_k_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATinsert(ATempty, term_k_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__3, term_d_15, term_e_15, (ATerm) ATempty);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm o_58 (ATerm));
ATerm Call_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm unzip_1 (ATerm, ATerm e_73 (ATerm));
ATerm conc_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm g_79 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_80 (ATerm));
ATerm downup2_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm _2 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_63 (ATerm));
ATerm map_1 (ATerm, ATerm h_74 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_63 (ATerm));
ATerm Program_1 (ATerm, ATerm a_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_63 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_64 (ATerm));
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
  ATerm b_1 = NULL;
  ATerm d_1 = NULL;
  b_1 = t;
  {
    ATerm e_1 = NULL;
    t = new_0(t);
    {
      e_1 = t;
      if(((d_1 != NULL) && (d_1 != e_1)))
        _fail(e_1);
      else
        d_1 = e_1;
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_1)), (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_1), (ATerm)ATempty, not_null(b_1))));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  j_1 :
  if(match_cons(k_1, sym_SVar_1))
    {
      l_1 = ATgetArgument(k_1, 0);
      {
        ATerm n_1 = NULL;
        t = not_null(l_1);
        {
          t = o_58(t);
          {
            n_1 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_1));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  u_1 :
  if(match_cons(v_1, sym_Call_2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        ATerm a_2 = NULL;
        t = not_null(w_1);
        {
          ATerm c_2 = NULL;
          t = d_59(t);
          {
            a_2 = t;
            {
              t = not_null(x_1);
              {
                t = e_59(t);
                {
                  c_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_2), not_null(c_2));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CreateDef1_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  m_2 = t;
  i_2 :
  if(match_cons(m_2, sym_Let_2))
    {
      n_2 = ATgetArgument(m_2, 0);
      o_2 = ATgetArgument(m_2, 1);
      j_2 :
      if(match_cons(o_2, sym_Call_2))
        {
          p_2 = ATgetArgument(o_2, 0);
          r_2 = ATgetArgument(o_2, 1);
          k_2 :
          if(match_cons(p_2, sym_SVar_1))
            {
              q_2 = ATgetArgument(p_2, 0);
              l_2 :
              if(((ATermList) r_2 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_2)), (ATerm) ATempty), not_null(n_2));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm CallFailFun_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  w_2 :
  if(match_cons(x_2, sym_Fail_0))
    t = term_c_5;
  else
    _fail(t);
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym_Id_0))
    t = term_f_5;
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  h_3 = t;
  e_3 :
  if(match_cons(h_3, sym__2))
    {
      i_3 = ATgetArgument(h_3, 0);
      l_3 = ATgetArgument(h_3, 1);
      f_3 :
      if(match_cons(i_3, sym__2))
        {
          j_3 = ATgetArgument(i_3, 0);
          k_3 = ATgetArgument(i_3, 1);
          g_3 :
          if(match_cons(l_3, sym__2))
            {
              m_3 = ATgetArgument(l_3, 0);
              n_3 = ATgetArgument(l_3, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_3)), not_null(j_3)), (ATerm) ATinsert(CheckATermList(not_null(n_3)), not_null(k_3)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(((ATgetType(v_3) == AT_LIST) && ((ATermList) v_3 != ATempty)))
    {
      w_3 = ATgetFirst((ATermList) v_3);
      x_3 = (ATerm) ATgetNext((ATermList) v_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_3), not_null(x_3));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  c_4 :
  if(((ATermList) d_4 == ATempty))
    {
      t = term_j_5;
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_72(t);
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        {
          t = v_72(t);
          {
            t = _2(t, x_72, f_4);
            t = w_72(t);
          }
        }
      }
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_73 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_73);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      {
        t = not_null(j_4);
        {
          ATerm b_0 (ATerm t)
          {
            t = not_null(k_4);
            return(t);
          }
          t = at_end_1(t, b_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_79(t);
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
        t = _all(t, o_4);
      }
    return(t);
  }
  t = o_4(t);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  ATerm o_8 (ATerm t)
  {
    t = not_null(o_6);
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = not_null(p_6);
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    ATerm o_7 = NULL;
    ATerm p_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(l_6));
    {
      t = conc_0(t);
      {
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_7), not_null(m_6));
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = not_null(p_6);
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(ATempty, not_null(o_6)));
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_t_6, (ATerm) ATinsert(ATempty, not_null(o_6)));
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_v_6, (ATerm) ATinsert(ATempty, not_null(o_6)));
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATinsert(ATempty, not_null(o_6)));
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATinsert(ATempty, not_null(o_6)));
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    ATerm y_7 = NULL;
    ATerm z_7 = NULL;
    t = not_null(p_6);
    {
      ATerm c_9 (ATerm t)
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              ATerm i_7 = t;
              int j_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CallIdFun_0(t);
                  LocalPopChoice(j_7);
                }
              else
                {
                  t = i_7;
                  t = CallFailFun_0(t);
                }
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              t = try_1(t, c_9);
              return(t);
            }
            t = Cons_2(t, c_0, e_0);
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            t = Cons_2(t, _id, c_9);
          }
        return(t);
      }
      t = c_9(t);
      {
        z_7 = t;
        if(((y_7 != NULL) && (y_7 != z_7)))
          _fail(z_7);
        else
          y_7 = z_7;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(o_6), not_null(y_7));
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
    ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
    t = not_null(p_6);
    {
      ATerm k_0 (ATerm t)
      {
        ATerm l_0 (ATerm t)
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CallIdFun_0(t);
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              t = CallFailFun_0(t);
            }
          return(t);
        }
        t = try_1(t, l_0);
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CreateDef1_0(t);
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              {
                ATerm q_7 = t;
                int r_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_7 = t;
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
                      t = s_7;
                    t = CreateDef2_0(t);
                    LocalPopChoice(r_7);
                  }
                else
                  {
                    t = q_7;
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
      t = unzip_1(t, k_0);
      {
        f_8 = t;
        o_5 :
        if(match_cons(f_8, sym__2))
          {
            g_8 = ATgetArgument(f_8, 0);
            h_8 = ATgetArgument(f_8, 1);
            {
              ATerm i_8 = NULL;
              if(((c_8 != NULL) && (c_8 != g_8)))
                _fail(g_8);
              else
                c_8 = g_8;
              {
                if(((d_8 != NULL) && (d_8 != h_8)))
                  _fail(h_8);
                else
                  d_8 = h_8;
                {
                  t = not_null(d_8);
                  {
                    t = concat_0(t);
                    {
                      i_8 = t;
                      {
                        if(((e_8 != NULL) && (e_8 != i_8)))
                          _fail(i_8);
                        else
                          e_8 = i_8;
                        {
                          ATerm t_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = Nil_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = t_7;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_8), (ATerm) ATmakeAppl(sym_Call_2, not_null(o_6), not_null(c_8)));
    return(t);
  }
  n_6 = t;
  p_5 :
  if(match_cons(n_6, sym_SDef_4))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      g_6 = ATgetArgument(n_6, 2);
      f_6 = ATgetArgument(n_6, 3);
      q_5 :
      if(((ATgetType(o_6) == AT_LIST) && ((ATermList) o_6 != ATempty)))
        {
          k_6 = ATgetFirst((ATermList) o_6);
          e_6 = (ATerm) ATgetNext((ATermList) o_6);
          r_5 :
          if(match_cons(k_6, sym_DontInline_0))
            {
              s_5 :
              if(((ATermList) e_6 == ATempty))
                {
                  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_6), not_null(g_6), not_null(f_6));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(n_6, sym_Rec_2))
        {
          o_6 = ATgetArgument(n_6, 0);
          p_6 = ATgetArgument(n_6, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_6), (ATerm)ATempty, not_null(p_6))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_6)), (ATerm) ATempty));
        }
      else
        {
          if(match_cons(n_6, sym_SDef_3))
            {
              o_6 = ATgetArgument(n_6, 0);
              p_6 = ATgetArgument(n_6, 1);
              g_6 = ATgetArgument(n_6, 2);
              t_5 :
              if(((ATermList) p_6 == ATempty))
                {
                  u_5 :
                  if(match_cons(g_6, sym_Rec_2))
                    {
                      h_6 = ATgetArgument(g_6, 0);
                      i_6 = ATgetArgument(g_6, 1);
                      {
                        ATerm y_6 = NULL;
                        ATerm d_7 = NULL;
                        t = not_null(i_6);
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
                            z_6 = t;
                            g_5 :
                            if(match_cons(z_6, sym_Call_2))
                              {
                                a_7 = ATgetArgument(z_6, 0);
                                c_7 = ATgetArgument(z_6, 1);
                                h_5 :
                                if(match_cons(a_7, sym_SVar_1))
                                  {
                                    b_7 = ATgetArgument(a_7, 0);
                                    i_5 :
                                    if(((ATermList) c_7 == ATempty))
                                      {
                                        {
                                          if(((h_6 != NULL) && (h_6 != b_7)))
                                            _fail(b_7);
                                          else
                                            h_6 = b_7;
                                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_6)), (ATerm) ATempty);
                                        }
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = alltd_1(t, o_0);
                          {
                            d_7 = t;
                            if(((y_6 != NULL) && (y_6 != d_7)))
                              _fail(d_7);
                            else
                              y_6 = d_7;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_6), (ATerm)ATempty, not_null(y_6));
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(n_6, sym_Seq_2))
                {
                  o_6 = ATgetArgument(n_6, 0);
                  p_6 = ATgetArgument(n_6, 1);
                  v_5 :
                  if(match_cons(p_6, sym_Seq_2))
                    {
                      l_6 = ATgetArgument(p_6, 0);
                      m_6 = ATgetArgument(p_6, 1);
                      w_5 :
                      if(match_cons(o_6, sym_Where_1))
                        {
                          k_6 = ATgetArgument(o_6, 0);
                          x_5 :
                          if(match_cons(l_6, sym_Build_1))
                            {
                              j_6 = ATgetArgument(l_6, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_6)), not_null(m_6)));
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(o_6, sym_Id_0))
                            t = p_8(t);
                          else
                            _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(p_6, sym_Build_1))
                        {
                          l_6 = ATgetArgument(p_6, 0);
                          y_5 :
                          if(match_cons(o_6, sym_Where_1))
                            {
                              k_6 = ATgetArgument(o_6, 0);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_6), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_6)));
                            }
                          else
                            {
                              if(match_cons(o_6, sym_Id_0))
                                t = p_8(t);
                              else
                                _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(p_6, sym_Id_0))
                            {
                              z_5 :
                              if(match_cons(o_6, sym_Id_0))
                                {
                                  ATerm u_7 = t;
                                  int v_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_8(t);
                                      LocalPopChoice(v_7);
                                    }
                                  else
                                    {
                                      t = u_7;
                                      t = p_8(t);
                                    }
                                }
                              else
                                t = o_8(t);
                            }
                          else
                            {
                              a_6 :
                              if(match_cons(o_6, sym_Id_0))
                                t = p_8(t);
                              else
                                _fail(t);
                            }
                        }
                    }
                }
              else
                {
                  if(match_cons(n_6, sym_Scope_2))
                    {
                      o_6 = ATgetArgument(n_6, 0);
                      p_6 = ATgetArgument(n_6, 1);
                      b_6 :
                      if(match_cons(p_6, sym_Scope_2))
                        {
                          l_6 = ATgetArgument(p_6, 0);
                          m_6 = ATgetArgument(p_6, 1);
                          c_6 :
                          if(((ATermList) o_6 == ATempty))
                            {
                              {
                                ATerm w_7 = t;
                                int x_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_8(t);
                                    LocalPopChoice(x_7);
                                  }
                                else
                                  {
                                    t = w_7;
                                    t = r_8(t);
                                  }
                              }
                            }
                          else
                            t = q_8(t);
                        }
                      else
                        {
                          d_6 :
                          if(((ATermList) o_6 == ATempty))
                            {
                              t = r_8(t);
                            }
                          else
                            _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(n_6, sym_Thread_1))
                        {
                          o_6 = ATgetArgument(n_6, 0);
                          t = s_8(t);
                        }
                      else
                        {
                          if(match_cons(n_6, sym_Some_1))
                            {
                              o_6 = ATgetArgument(n_6, 0);
                              t = t_8(t);
                            }
                          else
                            {
                              if(match_cons(n_6, sym_One_1))
                                {
                                  o_6 = ATgetArgument(n_6, 0);
                                  t = u_8(t);
                                }
                              else
                                {
                                  if(match_cons(n_6, sym_All_1))
                                    {
                                      o_6 = ATgetArgument(n_6, 0);
                                      t = v_8(t);
                                    }
                                  else
                                    {
                                      if(match_cons(n_6, sym_Bagof_1))
                                        {
                                          o_6 = ATgetArgument(n_6, 0);
                                          t = w_8(t);
                                        }
                                      else
                                        {
                                          if(match_cons(n_6, sym_Call_2))
                                            {
                                              o_6 = ATgetArgument(n_6, 0);
                                              p_6 = ATgetArgument(n_6, 1);
                                              {
                                                ATerm a_8 = t;
                                                int b_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_8(t);
                                                    LocalPopChoice(b_8);
                                                  }
                                                else
                                                  {
                                                    t = a_8;
                                                    t = y_8(t);
                                                  }
                                              }
                                            }
                                          else
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
ATerm repeat_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm g_9 (ATerm t)
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        t = g_9(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = k_80(t);
      }
    return(t);
  }
  t = g_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_80 (ATerm))
{
  t = repeat_2(t, m_80, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm h_9 (ATerm t)
  {
    t = j_77(t);
    {
      t = _all(t, h_9);
      t = k_77(t);
    }
    return(t);
  }
  t = h_9(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym__2))
    {
      n_9 = ATgetArgument(m_9, 0);
      o_9 = ATgetArgument(m_9, 1);
      {
        ATerm r_9 = NULL;
        t = not_null(n_9);
        {
          ATerm t_9 = NULL;
          t = i_42(t);
          {
            r_9 = t;
            {
              t = not_null(o_9);
              {
                t = j_42(t);
                {
                  t_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(t_9));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm b_10 = NULL,c_10 = NULL;
      b_10 = t;
      z_9 :
      if(match_cons(b_10, sym_Program_1))
        {
          c_10 = ATgetArgument(b_10, 0);
          if(((a_10 != NULL) && (a_10 != c_10)))
            _fail(c_10);
          else
            a_10 = c_10;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, p_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(CheckATermList(term_a_9), not_null(a_10)), term_n_8));
      {
        t = printnl_0(t);
        {
          t = term_b_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_f_9;
  {
    t = printnl_0(t);
    {
      t = term_b_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm i_9 = t;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm l_10 = NULL;
            l_10 = t;
            e_10 :
            if(!(match_cons(l_10, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_0);
          PopChoice();
          _fail(t);
        }
      else
        t = i_9;
      return(t);
    }
    t = _2(t, r_0, _id);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm m_10 = NULL,n_10 = NULL;
          m_10 = t;
          g_10 :
          if(match_cons(m_10, sym_Runtime_1))
            {
              n_10 = ATgetArgument(m_10, 0);
              if(((k_10 != NULL) && (k_10 != n_10)))
                _fail(n_10);
              else
                k_10 = n_10;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_0);
        return(t);
      }
      t = _2(t, t_0, _id);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            ATerm o_10 = NULL,p_10 = NULL;
            o_10 = t;
            i_10 :
            if(match_cons(o_10, sym_Program_1))
              {
                p_10 = ATgetArgument(o_10, 0);
                if(((j_10 != NULL) && (j_10 != p_10)))
                  _fail(p_10);
                else
                  j_10 = p_10;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, w_0);
          return(t);
        }
        t = _2(t, v_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_p_9), not_null(k_10)), term_j_9), not_null(j_10)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, q_0);
  {
    t = term_q_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__2))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      t = SSL_WriteToTextFile(not_null(v_10), not_null(w_10));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym__2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      t = SSL_WriteToBinaryFile(not_null(d_11), not_null(e_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm n_11 = NULL,o_11 = NULL;
            n_11 = t;
            j_11 :
            if(match_cons(n_11, sym_Output_1))
              {
                o_11 = ATgetArgument(n_11, 0);
                if(((m_11 != NULL) && (m_11 != o_11)))
                  _fail(o_11);
                else
                  m_11 = o_11;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_0);
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            ATerm p_11 = NULL;
            t = term_w_9;
            {
              p_11 = t;
              if(((m_11 != NULL) && (m_11 != p_11)))
                _fail(p_11);
              else
                m_11 = p_11;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = s_9;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(m_11);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm q_11 = NULL;
              q_11 = t;
              l_11 :
              if(!(match_cons(q_11, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, f_1);
            return(t);
          }
          t = _2(t, c_1, WriteToBinaryFile_0);
          LocalPopChoice(y_9);
        }
      else
        {
          t = x_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm w_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  ATerm d_10;
  d_10 = t;
  t = dtime_0(t);
  t = d_10;
  {
    t = n_65(t);
    {
      ATerm f_10;
      f_10 = t;
      {
        ATerm x_11 = NULL;
        t = dtime_0(t);
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
      }
      t = f_10;
      {
        y_11 = t;
        v_11 :
        if(match_cons(y_11, sym__2))
          {
            z_11 = ATgetArgument(y_11, 0);
            a_12 = ATgetArgument(y_11, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_11)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_11))), not_null(a_12));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = SSL_ReadFromFile(not_null(g_12));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm l_12 = NULL,n_12 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm m_12 = NULL;
    t = v_67(t);
    {
      m_12 = t;
      if(((l_12 != NULL) && (l_12 != m_12)))
        _fail(m_12);
      else
        l_12 = m_12;
    }
  }
  t = h_10;
  {
    ATerm o_12 = NULL;
    t = w_67(t);
    {
      o_12 = t;
      if(((n_12 != NULL) && (n_12 != o_12)))
        _fail(o_12);
      else
        n_12 = o_12;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(n_12));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm v_12 = NULL,w_12 = NULL;
          v_12 = t;
          s_12 :
          if(match_cons(v_12, sym_Input_1))
            {
              w_12 = ATgetArgument(v_12, 0);
              if(((u_12 != NULL) && (u_12 != w_12)))
                _fail(w_12);
              else
                u_12 = w_12;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, g_1);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm x_12 = NULL;
          t = term_x_10;
          {
            x_12 = t;
            if(((u_12 != NULL) && (u_12 != x_12)))
              _fail(x_12);
            else
              u_12 = x_12;
          }
        }
      }
  }
  t = q_10;
  {
    ATerm h_1 (ATerm t)
    {
      t = not_null(u_12);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  a_13 :
  if(!(match_cons(b_13, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm i_1 (ATerm t)
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        {
          ATerm a_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_11);
            }
          else
            {
              t = a_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_1);
  t = m_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = SSL_table_create(not_null(d_13));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm g_11;
    g_11 = t;
    {
      t = term_h_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_11, term_i_11, not_null(h_13));
          t = table_put_0(t);
        }
      }
    }
    t = g_11;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  n_13 :
  if(match_string(p_13, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(p_13) == AT_LIST) && ((ATermList) p_13 != ATempty)))
        {
          q_13 = ATgetFirst((ATermList) p_13);
          r_13 = (ATerm) ATgetNext((ATermList) p_13);
          o_13 :
          if(((ATgetType(r_13) == AT_LIST) && ((ATermList) r_13 != ATempty)))
            {
              s_13 = ATgetFirst((ATermList) r_13);
              t_13 = (ATerm) ATgetNext((ATermList) r_13);
              {
                ATerm x_13 = NULL;
                ATerm k_11;
                k_11 = t;
                {
                  t = not_null(q_13);
                  t = h_0(t);
                }
                t = k_11;
                {
                  ATerm y_13 = NULL;
                  t = not_null(s_13);
                  {
                    t = i_0(t);
                    {
                      y_13 = t;
                      if(((x_13 != NULL) && (x_13 != y_13)))
                        _fail(y_13);
                      else
                        x_13 = y_13;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_13)), not_null(x_13));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_14 = NULL;
        n_14 = t;
        c_14 :
        if(!(match_string(n_14, "-S")))
          {
            if(!(match_string(n_14, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_u_11;
        return(t);
      }
      t = Option_3(t, m_1, o_1, p_1);
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
            ATerm q_1 (ATerm t)
            {
              ATerm o_14 = NULL;
              o_14 = t;
              d_14 :
              if(!(match_string(o_14, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = Option_3(t, q_1, r_1, s_1);
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm f_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm p_14 = NULL;
                    p_14 = t;
                    e_14 :
                    if(!(match_string(p_14, "-v")))
                      {
                        if(!(match_string(p_14, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_i_12;
                    return(t);
                  }
                  ATerm z_1 (ATerm t)
                  {
                    t = term_j_12;
                    return(t);
                  }
                  t = Option_3(t, t_1, y_1, z_1);
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = f_12;
                  {
                    ATerm k_12 = t;
                    int p_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_2 (ATerm t)
                        {
                          ATerm q_14 = NULL;
                          q_14 = t;
                          f_14 :
                          if(!(match_string(q_14, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          ATerm r_14 = NULL;
                          ATerm s_14 = NULL;
                          s_14 = t;
                          if(((r_14 != NULL) && (r_14 != s_14)))
                            _fail(s_14);
                          else
                            r_14 = s_14;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_14));
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          t = term_q_12;
                          return(t);
                        }
                        t = ArgOption_3(t, b_2, d_2, e_2);
                        LocalPopChoice(p_12);
                      }
                    else
                      {
                        t = k_12;
                        {
                          ATerm r_12 = t;
                          int t_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 (ATerm t)
                              {
                                ATerm t_14 = NULL;
                                t_14 = t;
                                h_14 :
                                if(!(match_string(t_14, "-i")))
                                  {
                                    if(!(match_string(t_14, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                ATerm u_14 = NULL;
                                ATerm v_14 = NULL;
                                v_14 = t;
                                if(((u_14 != NULL) && (u_14 != v_14)))
                                  _fail(v_14);
                                else
                                  u_14 = v_14;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_14));
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                t = term_y_12;
                                return(t);
                              }
                              t = ArgOption_3(t, f_2, g_2, h_2);
                              LocalPopChoice(t_12);
                            }
                          else
                            {
                              t = r_12;
                              {
                                ATerm z_12 = t;
                                int c_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_2 (ATerm t)
                                    {
                                      ATerm w_14 = NULL;
                                      w_14 = t;
                                      j_14 :
                                      if(!(match_string(w_14, "-o")))
                                        {
                                          if(!(match_string(w_14, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      ATerm x_14 = NULL;
                                      ATerm y_14 = NULL;
                                      y_14 = t;
                                      if(((x_14 != NULL) && (x_14 != y_14)))
                                        _fail(y_14);
                                      else
                                        x_14 = y_14;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_14));
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = term_e_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_2, t_2, u_2);
                                    LocalPopChoice(c_13);
                                  }
                                else
                                  {
                                    t = z_12;
                                    {
                                      ATerm f_13 = t;
                                      int g_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_2 (ATerm t)
                                          {
                                            ATerm z_14 = NULL;
                                            z_14 = t;
                                            l_14 :
                                            if(!(match_string(z_14, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = term_i_13;
                                            return(t);
                                          }
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_j_13;
                                            return(t);
                                          }
                                          t = Option_3(t, v_2, y_2, z_2);
                                          LocalPopChoice(g_13);
                                        }
                                      else
                                        {
                                          t = f_13;
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              ATerm a_15 = NULL;
                                              a_15 = t;
                                              m_14 :
                                              if(!(match_string(a_15, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_k_13;
                                              return(t);
                                            }
                                            ATerm o_3 (ATerm t)
                                            {
                                              t = term_l_13;
                                              return(t);
                                            }
                                            t = Option_3(t, c_3, d_3, o_3);
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
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_table_destroy(not_null(f_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm m_15 (ATerm t)
  {
    t = SSL_exit(not_null(k_15));
    return(t);
  }
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_exit_0))
    {
      ATerm m_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_15(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = m_13;
          {
          }
        }
    }
  else
    t = m_15(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = SSL_implode_string(not_null(o_15));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_15);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          t = Nil_0(t);
          t = v_74(t);
        }
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
        u_15 = t;
        t_15 :
        if(((ATgetType(u_15) == AT_LIST) && ((ATermList) u_15 != ATempty)))
          {
            v_15 = ATgetFirst((ATermList) u_15);
            w_15 = (ATerm) ATgetNext((ATermList) u_15);
            {
              t = not_null(v_15);
              {
                ATerm p_3 (ATerm t)
                {
                  t = not_null(w_15);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_3);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_explode_string(not_null(c_16));
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
ATerm long_description_1 (ATerm t, ATerm t_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm f_16 (ATerm t)
  {
    ATerm b_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = b_14;
        t = Cons_2(t, h_74, f_16);
      }
    return(t);
  }
  t = f_16(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  m_16 = t;
  j_16 :
  if(((ATgetType(m_16) == AT_LIST) && ((ATermList) m_16 != ATempty)))
    {
      k_16 = ATgetFirst((ATermList) m_16);
      l_16 = (ATerm) ATgetNext((ATermList) m_16);
      {
        t = not_null(l_16);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm p_16 = NULL;
            ATerm q_16 = NULL;
            t = g_0(t);
            {
              q_16 = t;
              if(((p_16 != NULL) && (p_16 != q_16)))
                _fail(q_16);
              else
                p_16 = q_16;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(p_16)), not_null(k_16));
            return(t);
          }
          t = reverse_1(t, q_3);
        }
      }
    }
  else
    {
      if(((ATermList) m_16 == ATempty))
        {
          {
            t = term_i_14;
            t = g_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, r_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_Program_1))
    {
      y_16 = ATgetArgument(x_16, 0);
      {
        ATerm a_17 = NULL;
        t = not_null(y_16);
        {
          t = a_55(t);
          {
            a_17 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm j_17 = NULL;
      j_17 = t;
      if(((i_17 != NULL) && (i_17 != j_17)))
        _fail(j_17);
      else
        i_17 = j_17;
      return(t);
    }
    t = Program_1(t, t_3);
    return(t);
  }
  t = option_defined_1(t, s_3);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm k_17 = NULL;
      ATerm l_17 = NULL;
      t = term_i_14;
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(i_17);
          return(t);
        }
        t = short_description_1(t, z_3);
        {
          t = concat_strings_0(t);
          {
            l_17 = t;
            if(((k_17 != NULL) && (k_17 != l_17)))
              _fail(l_17);
            else
              k_17 = l_17;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATempty, not_null(k_17)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_3);
    {
      t = term_c_15;
      {
        t = printnl_0(t);
        {
          t = term_g_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm m_17 = NULL;
                  m_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_17)), term_h_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_4);
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm o_17 = NULL;
                    ATerm p_17 = NULL;
                    t = term_i_14;
                    {
                      ATerm e_4 (ATerm t)
                      {
                        t = not_null(i_17);
                        return(t);
                      }
                      t = long_description_1(t, e_4);
                      {
                        t = concat_strings_0(t);
                        {
                          p_17 = t;
                          if(((o_17 != NULL) && (o_17 != p_17)))
                            _fail(p_17);
                          else
                            o_17 = p_17;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_17)), term_i_15));
                      t = printnl_0(t);
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
ATerm printnl_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      {
        ATerm l_15;
        l_15 = t;
        t = SSL_printnl(not_null(x_17), not_null(y_17));
        t = l_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_Undefined_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      {
        ATerm i_18 = NULL;
        t = not_null(g_18);
        {
          t = b_55(t);
          {
            i_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_18));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm m_18 (ATerm t)
  {
    ATerm n_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_74, _id);
        LocalPopChoice(p_15);
      }
    else
      {
        t = n_15;
        t = Cons_2(t, _id, m_18);
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_64 (ATerm))
{
  t = fetch_1(t, r_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  n_18 :
  if(!(match_cons(o_18, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm q_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = q_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      t = SSL_table_get(not_null(s_18), not_null(t_18));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym__3))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      d_19 = ATgetArgument(a_19, 2);
      {
        ATerm x_15;
        x_15 = t;
        {
          ATerm h_19 = NULL;
          ATerm i_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(c_19));
          {
            ATerm y_15 = t;
            int z_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_15);
              }
            else
              {
                t = y_15;
                t = (ATerm) ATempty;
              }
            {
              i_19 = t;
              if(((h_19 != NULL) && (h_19 != i_19)))
                _fail(i_19);
              else
                h_19 = i_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_19), not_null(c_19), (ATerm) ATinsert(CheckATermList(not_null(h_19)), not_null(d_19)));
            t = table_put_0(t);
          }
        }
        t = x_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm m_19 = NULL;
  ATerm n_19 = NULL;
  t = term_i_14;
  {
    t = x_63(t);
    {
      n_19 = t;
      if(((m_19 != NULL) && (m_19 != n_19)))
        _fail(n_19);
      else
        m_19 = n_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_15, term_e_15, not_null(m_19));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_string(t_19, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(t_19) == AT_LIST) && ((ATermList) t_19 != ATempty)))
        {
          u_19 = ATgetFirst((ATermList) t_19);
          v_19 = (ATerm) ATgetNext((ATermList) t_19);
          {
            ATerm y_19 = NULL;
            ATerm a_16;
            a_16 = t;
            {
              t = not_null(u_19);
              t = a_0(t);
            }
            t = a_16;
            {
              ATerm z_19 = NULL;
              t = term_i_14;
              {
                t = d_0(t);
                {
                  z_19 = t;
                  if(((y_19 != NULL) && (y_19 != z_19)))
                    _fail(z_19);
                  else
                    y_19 = z_19;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_19)), not_null(y_19));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm e_20 = NULL;
    e_20 = t;
    d_20 :
    if(!(match_string(e_20, "--help")))
      {
        if(!(match_string(e_20, "-h")))
          {
            if(!(match_string(e_20, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = Option_3(t, g_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  g_20 :
  if(((ATgetType(h_20) == AT_LIST) && ((ATermList) h_20 != ATempty)))
    {
      i_20 = ATgetFirst((ATermList) h_20);
      j_20 = (ATerm) ATgetNext((ATermList) h_20);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_20)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(((ATgetType(r_20) == AT_LIST) && ((ATermList) r_20 != ATempty)))
    {
      s_20 = ATgetFirst((ATermList) r_20);
      t_20 = (ATerm) ATgetNext((ATermList) r_20);
      {
        ATerm w_20 = NULL;
        t = not_null(s_20);
        {
          ATerm y_20 = NULL;
          t = y_59(t);
          {
            w_20 = t;
            {
              t = not_null(t_20);
              {
                t = z_59(t);
                {
                  y_20 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_20)), not_null(w_20));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  d_21 :
  if(((ATermList) e_21 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm e_16;
  e_16 = t;
  {
    ATerm n_4 (ATerm t)
    {
      t = term_g_16;
      t = v_63(t);
      return(t);
    }
    t = try_1(t, n_4);
  }
  t = e_16;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm g_21 = NULL;
      g_21 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_21));
      return(t);
    }
    ATerm q_4 (ATerm t)
    {
      ATerm h_16 = t;
      int i_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              {
                t = v_63(t);
                t = Cons_2(t, _id, q_4);
              }
            }
          LocalPopChoice(i_16);
        }
      else
        {
          t = h_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_4, q_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  ATerm r_16;
  r_16 = t;
  {
    ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
    p_21 = t;
    l_21 :
    if(match_cons(p_21, sym__3))
      {
        q_21 = ATgetArgument(p_21, 0);
        r_21 = ATgetArgument(p_21, 1);
        s_21 = ATgetArgument(p_21, 2);
        {
          if(((m_21 != NULL) && (m_21 != q_21)))
            _fail(q_21);
          else
            m_21 = q_21;
          {
            if(((n_21 != NULL) && (n_21 != r_21)))
              _fail(r_21);
            else
              n_21 = r_21;
            {
              if(((o_21 != NULL) && (o_21 != s_21)))
                _fail(s_21);
              else
                o_21 = s_21;
              t = SSL_table_put(not_null(m_21), not_null(n_21), not_null(o_21));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = r_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm v_21 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    t = term_t_16;
    t = table_put_0(t);
  }
  t = s_16;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_63(t);
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_4);
    {
      ATerm s_4 (ATerm t)
      {
        ATerm z_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_17);
          }
        else
          {
            t = z_16;
            {
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm w_21 = NULL;
                  w_21 = t;
                  if(((v_21 != NULL) && (v_21 != w_21)))
                    _fail(w_21);
                  else
                    v_21 = w_21;
                  return(t);
                }
                t = Undefined_1(t, u_4);
                return(t);
              }
              t = option_defined_1(t, t_4);
              {
                ATerm c_17;
                c_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_21)), term_d_17));
                  t = printnl_0(t);
                }
                t = c_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_4);
      {
        ATerm e_17;
        e_17 = t;
        {
          t = term_d_15;
          t = table_destroy_0(t);
        }
        t = e_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_65(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_4);
  {
    t = store_options_0(t);
    {
      ATerm h_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, d_65);
          LocalPopChoice(n_17);
        }
      else
        {
          t = h_17;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, b_65);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  t = iowrap_3(t, w_64, x_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    t = _2(t, _id, t_64);
    return(t);
  }
  t = iowrap_2(t, w_4, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm z_4 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, y_4, z_4);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, x_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
