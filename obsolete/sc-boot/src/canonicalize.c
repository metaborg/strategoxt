#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_Operations_1;
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
Symbol sym_TNil_0;
Symbol sym_TCons_2;
Symbol sym_Pair_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
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
  sym_Operations_1 = ATmakeSymbol("Operations", 1, ATfalse);
  ATprotectSymbol(sym_Operations_1);
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
  sym_TNil_0 = ATmakeSymbol("TNil", 0, ATfalse);
  ATprotectSymbol(sym_TNil_0);
  sym_TCons_2 = ATmakeSymbol("TCons", 2, ATfalse);
  ATprotectSymbol(sym_TCons_2);
  sym_Pair_2 = ATmakeSymbol("Pair", 2, ATfalse);
  ATprotectSymbol(sym_Pair_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm mark_fresh_vars_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_74 (ATerm));
ATerm conc_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm n_55 (ATerm));
ATerm Call_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm));
ATerm unzip_1 (ATerm, ATerm b_69 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_75 (ATerm));
ATerm downup2_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_76 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_52 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm o_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_60 (ATerm));
ATerm need_help_1 (ATerm, ATerm u_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm u_60 (ATerm), ATerm v_60 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_61 (ATerm), ATerm f_61 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_61 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm t)
{
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm x_1 = t;
    if(PushChoice()==0)
      {
        t = w_74(t);
        PopChoice();
      }
    else
      {
        t = x_1;
        t = _all(t, q_0);
      }
    return(t);
  }
  t = q_0(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  v_0 = t;
  s_0 :
  if(match_cons(v_0, sym_TCons_2))
    {
      w_0 = ATgetArgument(v_0, 0);
      x_0 = ATgetArgument(v_0, 1);
      t_0 :
      if(match_cons(x_0, sym_TCons_2))
        {
          y_0 = ATgetArgument(x_0, 0);
          z_0 = ATgetArgument(x_0, 1);
          u_0 :
          if(match_cons(z_0, sym_TNil_0))
            {
              t = not_null(w_0);
              {
                ATerm a_0 (ATerm t)
                {
                  t = not_null(y_0);
                  return(t);
                }
                t = at_end_1(t, a_0);
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
ATerm CallFailFun_0 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  e_1 :
  if(match_cons(f_1, sym_Fail_0))
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0));
  else
    _fail(t);
  return(t);
}
ATerm CallIdFun_0 (ATerm t)
{
  ATerm j_1 = NULL;
  j_1 = t;
  i_1 :
  if(match_cons(j_1, sym_Id_0))
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Nil_0));
  else
    _fail(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm z_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, o_1);
        PopChoice();
      }
    else
      {
        t = z_5;
        {
          ATerm n_1 = NULL;
          n_1 = t;
          m_1 :
          if(match_cons(n_1, sym_Nil_0))
            t = u_70(t);
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = o_1(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  r_1 :
  if(!(match_cons(s_1, sym_Nil_0)))
    {
      if(match_cons(s_1, sym_Cons_2))
        {
          t_1 = ATgetArgument(s_1, 0);
          u_1 = ATgetArgument(s_1, 1);
          t = not_null(t_1);
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(u_1);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, b_0);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm CreateDef2_0 (ATerm t)
{
  ATerm b_2 = NULL;
  ATerm d_2 = NULL;
  b_2 = t;
  {
    ATerm e_2 = NULL;
    t = new_0(t);
    e_2 = t;
    if(d_2 != NULL && d_2 != e_2)
      _fail(e_2);
    else
      d_2 = e_2;
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_2)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(d_2), (ATerm)ATmakeAppl(sym_Nil_0), not_null(b_2)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm k_2 = NULL,l_2 = NULL;
  k_2 = t;
  j_2 :
  if(match_cons(k_2, sym_SVar_1))
    {
      l_2 = ATgetArgument(k_2, 0);
      {
        ATerm n_2 = NULL;
        t = not_null(l_2);
        t = n_55(t);
        n_2 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  u_2 :
  if(match_cons(v_2, sym_Call_2))
    {
      w_2 = ATgetArgument(v_2, 0);
      x_2 = ATgetArgument(v_2, 1);
      {
        ATerm a_3 = NULL;
        t = not_null(w_2);
        {
          ATerm c_3 = NULL;
          t = c_56(t);
          a_3 = t;
          t = not_null(x_2);
          t = d_56(t);
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_3), not_null(c_3));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CreateDef1_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  m_3 = t;
  i_3 :
  if(match_cons(m_3, sym_Let_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      j_3 :
      if(match_cons(o_3, sym_Call_2))
        {
          p_3 = ATgetArgument(o_3, 0);
          r_3 = ATgetArgument(o_3, 1);
          k_3 :
          if(match_cons(p_3, sym_SVar_1))
            {
              q_3 = ATgetArgument(p_3, 0);
              l_3 :
              if(match_cons(r_3, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_3)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_3), (ATerm) ATmakeAppl(sym_TNil_0)));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  f_4 = t;
  w_3 :
  if(match_cons(f_4, sym_TCons_2))
    {
      g_4 = ATgetArgument(f_4, 0);
      l_4 = ATgetArgument(f_4, 1);
      x_3 :
      if(match_cons(g_4, sym_TCons_2))
        {
          h_4 = ATgetArgument(g_4, 0);
          i_4 = ATgetArgument(g_4, 1);
          y_3 :
          if(match_cons(i_4, sym_TCons_2))
            {
              j_4 = ATgetArgument(i_4, 0);
              k_4 = ATgetArgument(i_4, 1);
              z_3 :
              if(match_cons(k_4, sym_TNil_0))
                {
                  a_4 :
                  if(match_cons(l_4, sym_TCons_2))
                    {
                      m_4 = ATgetArgument(l_4, 0);
                      r_4 = ATgetArgument(l_4, 1);
                      b_4 :
                      if(match_cons(m_4, sym_TCons_2))
                        {
                          n_4 = ATgetArgument(m_4, 0);
                          o_4 = ATgetArgument(m_4, 1);
                          c_4 :
                          if(match_cons(o_4, sym_TCons_2))
                            {
                              p_4 = ATgetArgument(o_4, 0);
                              q_4 = ATgetArgument(o_4, 1);
                              d_4 :
                              if(match_cons(q_4, sym_TNil_0))
                                {
                                  e_4 :
                                  if(match_cons(r_4, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_4), not_null(n_4)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(j_4), not_null(p_4)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(match_cons(z_4, sym_Cons_2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(a_5), (ATerm) ATmakeAppl(sym_TCons_2, not_null(b_5), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm a_6 = t;
    if(PushChoice()==0)
      {
        t = r_68(t);
        PopChoice();
      }
    else
      {
        t = a_6;
        t = s_68(t);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm d_0 (ATerm t)
            {
              ATerm k_5 = NULL;
              k_5 = t;
              j_5 :
              if(!(match_cons(k_5, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, l_5, d_0);
            return(t);
          }
          t = TCons_2(t, u_68, c_0);
          t = t_68(t);
        }
      }
    return(t);
  }
  t = l_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_69 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_69);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  ATerm s_9 (ATerm t)
  {
    t = not_null(n_7);
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    ATerm p_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(e_7), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = conc_0(t);
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_8), not_null(g_7));
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    t = not_null(n_7);
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    t = not_null(k_7);
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_7)));
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_7)), not_null(g_7)));
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    ATerm f_9 = NULL;
    t = not_null(i_7);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
        b_9 = t;
        l_6 :
        if(match_cons(b_9, sym_Call_2))
          {
            c_9 = ATgetArgument(b_9, 0);
            e_9 = ATgetArgument(b_9, 1);
            m_6 :
            if(match_cons(c_9, sym_SVar_1))
              {
                d_9 = ATgetArgument(c_9, 0);
                n_6 :
                if(match_cons(e_9, sym_Nil_0))
                  {
                    if(h_7 != NULL && h_7 != d_9)
                      _fail(d_9);
                    else
                      h_7 = d_9;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_7)), (ATerm) ATmakeAppl(sym_Nil_0));
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
      t = alltd_1(t, e_0);
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(f_9));
    }
    return(t);
  }
  ATerm z_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(k_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(n_7)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_7)), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  ATerm a_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_7), not_null(o_7), not_null(p_7));
    return(t);
  }
  j_7 = t;
  p_6 :
  if(match_cons(j_7, sym_Call_2))
    {
      k_7 = ATgetArgument(j_7, 0);
      n_7 = ATgetArgument(j_7, 1);
      {
        ATerm c_6 = t;
        if(PushChoice()==0)
          {
            ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
            ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
            t = not_null(n_7);
            {
              ATerm f_0 (ATerm t)
              {
                ATerm d_6 = t;
                if(PushChoice()==0)
                  {
                    ATerm i_6 = t;
                    if(PushChoice()==0)
                      {
                        t = CallIdFun_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_6;
                        t = CallFailFun_0(t);
                      }
                    PopChoice();
                  }
                else
                  t = d_6;
                {
                  ATerm j_6 = t;
                  if(PushChoice()==0)
                    {
                      t = CreateDef1_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = j_6;
                      {
                        ATerm k_6 = t;
                        if(PushChoice()==0)
                          {
                            ATerm o_6 = t;
                            if(PushChoice()==0)
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = SVar_1(t, _id);
                                  return(t);
                                }
                                ATerm h_0 (ATerm t)
                                {
                                  ATerm v_7 = NULL;
                                  v_7 = t;
                                  b_6 :
                                  if(!(match_cons(v_7, sym_Nil_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = Call_2(t, g_0, h_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = o_6;
                            t = CreateDef2_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = k_6;
                            {
                              ATerm i_0 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Nil_0);
                                return(t);
                              }
                              t = split_2(t, _id, i_0);
                            }
                          }
                      }
                    }
                }
                return(t);
              }
              t = unzip_1(t, f_0);
              w_7 = t;
              f_6 :
              if(match_cons(w_7, sym_TCons_2))
                {
                  x_7 = ATgetArgument(w_7, 0);
                  y_7 = ATgetArgument(w_7, 1);
                  g_6 :
                  if(match_cons(y_7, sym_TCons_2))
                    {
                      z_7 = ATgetArgument(y_7, 0);
                      a_8 = ATgetArgument(y_7, 1);
                      h_6 :
                      if(match_cons(a_8, sym_TNil_0))
                        {
                          ATerm b_8 = NULL;
                          if(s_7 != NULL && s_7 != x_7)
                            _fail(x_7);
                          else
                            s_7 = x_7;
                          if(t_7 != NULL && t_7 != z_7)
                            _fail(z_7);
                          else
                            t_7 = z_7;
                          t = not_null(t_7);
                          t = concat_0(t);
                          b_8 = t;
                          if(u_7 != NULL && u_7 != b_8)
                            _fail(b_8);
                          else
                            u_7 = b_8;
                          {
                            ATerm q_7 = t;
                            if(PushChoice()==0)
                              {
                                ATerm c_8 = NULL;
                                c_8 = t;
                                e_6 :
                                if(!(match_cons(c_8, sym_Nil_0)))
                                  _fail(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = q_7;
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
            }
            t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_7), (ATerm) ATmakeAppl(sym_Call_2, not_null(k_7), not_null(s_7)));
            PopChoice();
          }
        else
          {
            t = c_6;
            {
              ATerm f_8 = NULL;
              ATerm g_8 = NULL;
              t = not_null(n_7);
              {
                ATerm d_10 (ATerm t)
                {
                  ATerm r_7 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_0 (ATerm t)
                      {
                        ATerm d_8 = t;
                        if(PushChoice()==0)
                          {
                            t = CallIdFun_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = d_8;
                            t = CallFailFun_0(t);
                          }
                        return(t);
                      }
                      ATerm k_0 (ATerm t)
                      {
                        ATerm e_8 = t;
                        if(PushChoice()==0)
                          {
                            t = d_10(t);
                            PopChoice();
                          }
                        else
                          t = e_8;
                        return(t);
                      }
                      t = Cons_2(t, j_0, k_0);
                      PopChoice();
                    }
                  else
                    {
                      t = r_7;
                      t = Cons_2(t, _id, d_10);
                    }
                  return(t);
                }
                t = d_10(t);
                g_8 = t;
                if(f_8 != NULL && f_8 != g_8)
                  _fail(g_8);
                else
                  f_8 = g_8;
              }
              t = (ATerm) ATmakeAppl(sym_Call_2, not_null(k_7), not_null(f_8));
            }
          }
      }
    }
  else
    {
      if(match_cons(j_7, sym_All_1))
        {
          k_7 = ATgetArgument(j_7, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(j_7, sym_One_1))
            {
              k_7 = ATgetArgument(j_7, 0);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          else
            {
              if(match_cons(j_7, sym_Some_1))
                {
                  k_7 = ATgetArgument(j_7, 0);
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              else
                {
                  if(match_cons(j_7, sym_Thread_1))
                    {
                      k_7 = ATgetArgument(j_7, 0);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(k_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  else
                    {
                      if(match_cons(j_7, sym_Scope_2))
                        {
                          k_7 = ATgetArgument(j_7, 0);
                          n_7 = ATgetArgument(j_7, 1);
                          q_6 :
                          if(match_cons(n_7, sym_Scope_2))
                            {
                              e_7 = ATgetArgument(n_7, 0);
                              g_7 = ATgetArgument(n_7, 1);
                              r_6 :
                              if(match_cons(k_7, sym_Nil_0))
                                {
                                  ATerm h_8 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = s_9(t);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = h_8;
                                      t = t_9(t);
                                    }
                                }
                              else
                                t = t_9(t);
                            }
                          else
                            {
                              s_6 :
                              if(match_cons(k_7, sym_Nil_0))
                                t = s_9(t);
                              else
                                _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(j_7, sym_Seq_2))
                            {
                              k_7 = ATgetArgument(j_7, 0);
                              n_7 = ATgetArgument(j_7, 1);
                              t_6 :
                              if(match_cons(n_7, sym_Id_0))
                                {
                                  u_6 :
                                  if(match_cons(k_7, sym_Id_0))
                                    {
                                      ATerm i_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = u_9(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = i_8;
                                          t = v_9(t);
                                        }
                                    }
                                  else
                                    t = v_9(t);
                                }
                              else
                                {
                                  if(match_cons(n_7, sym_Build_1))
                                    {
                                      e_7 = ATgetArgument(n_7, 0);
                                      v_6 :
                                      if(match_cons(k_7, sym_Id_0))
                                        t = u_9(t);
                                      else
                                        {
                                          if(match_cons(k_7, sym_Where_1))
                                            {
                                              l_7 = ATgetArgument(k_7, 0);
                                              t = w_9(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(n_7, sym_Seq_2))
                                        {
                                          e_7 = ATgetArgument(n_7, 0);
                                          g_7 = ATgetArgument(n_7, 1);
                                          w_6 :
                                          if(match_cons(k_7, sym_Id_0))
                                            t = u_9(t);
                                          else
                                            {
                                              if(match_cons(k_7, sym_Where_1))
                                                {
                                                  l_7 = ATgetArgument(k_7, 0);
                                                  x_6 :
                                                  if(match_cons(e_7, sym_Build_1))
                                                    {
                                                      f_7 = ATgetArgument(e_7, 0);
                                                      t = x_9(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          y_6 :
                                          if(match_cons(k_7, sym_Id_0))
                                            t = u_9(t);
                                          else
                                            _fail(t);
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(j_7, sym_SDef_3))
                                {
                                  k_7 = ATgetArgument(j_7, 0);
                                  n_7 = ATgetArgument(j_7, 1);
                                  o_7 = ATgetArgument(j_7, 2);
                                  z_6 :
                                  if(match_cons(n_7, sym_Nil_0))
                                    {
                                      a_7 :
                                      if(match_cons(o_7, sym_Rec_2))
                                        {
                                          h_7 = ATgetArgument(o_7, 0);
                                          i_7 = ATgetArgument(o_7, 1);
                                          t = y_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(j_7, sym_Rec_2))
                                    {
                                      k_7 = ATgetArgument(j_7, 0);
                                      n_7 = ATgetArgument(j_7, 1);
                                      t = z_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(j_7, sym_SDef_4))
                                        {
                                          k_7 = ATgetArgument(j_7, 0);
                                          n_7 = ATgetArgument(j_7, 1);
                                          o_7 = ATgetArgument(j_7, 2);
                                          p_7 = ATgetArgument(j_7, 3);
                                          b_7 :
                                          if(match_cons(k_7, sym_Cons_2))
                                            {
                                              l_7 = ATgetArgument(k_7, 0);
                                              m_7 = ATgetArgument(k_7, 1);
                                              c_7 :
                                              if(match_cons(l_7, sym_DontInline_0))
                                                {
                                                  d_7 :
                                                  if(match_cons(m_7, sym_Nil_0))
                                                    t = a_10(t);
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
ATerm repeat_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm i_10 (ATerm t)
  {
    ATerm j_8 = t;
    if(PushChoice()==0)
      {
        t = w_75(t);
        t = i_10(t);
        PopChoice();
      }
    else
      {
        t = j_8;
        t = x_75(t);
      }
    return(t);
  }
  t = i_10(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_75 (ATerm))
{
  t = repeat_2(t, z_75, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm j_10 (ATerm t)
  {
    t = e_73(t);
    t = _all(t, j_10);
    t = f_73(t);
    return(t);
  }
  t = j_10(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  k_10 :
  if(!(match_cons(l_10, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_TCons_2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        ATerm v_10 = NULL;
        t = not_null(r_10);
        {
          ATerm x_10 = NULL;
          t = x_56(t);
          v_10 = t;
          t = not_null(s_10);
          t = y_56(t);
          x_10 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(v_10), not_null(x_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm k_8;
  k_8 = t;
  {
    ATerm l_0 (ATerm t)
    {
      ATerm f_11 = NULL,g_11 = NULL;
      f_11 = t;
      d_11 :
      if(match_cons(f_11, sym_Program_1))
        {
          g_11 = ATgetArgument(f_11, 0);
          if(e_11 != NULL && e_11 != g_11)
            _fail(g_11);
          else
            e_11 = g_11;
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1(t, l_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(e_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = k_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  t = printnl_0(t);
  t = (ATerm) ATmakeInt(1);
  t = exit_0(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  j_11 :
  if(!(match_cons(k_11, sym_exit_0)))
    t = SSL_exit(not_null(k_11));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  r_11 = t;
  o_11 :
  if(match_cons(r_11, sym_TCons_2))
    {
      s_11 = ATgetArgument(r_11, 0);
      t_11 = ATgetArgument(r_11, 1);
      p_11 :
      if(match_cons(t_11, sym_TCons_2))
        {
          u_11 = ATgetArgument(t_11, 0);
          v_11 = ATgetArgument(t_11, 1);
          q_11 :
          if(match_cons(v_11, sym_TNil_0))
            {
              ATerm l_8;
              l_8 = t;
              t = SSL_printnl(not_null(s_11), not_null(u_11));
              t = l_8;
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
ATerm try_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm m_8 = t;
  if(PushChoice()==0)
    {
      t = t_76(t);
      PopChoice();
    }
  else
    t = m_8;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  ATerm n_8 = t;
  if(PushChoice()==0)
    {
      ATerm m_0 (ATerm t)
      {
        ATerm o_8 = t;
        if(PushChoice()==0)
          {
            ATerm o_0 (ATerm t)
            {
              ATerm j_12 = NULL;
              j_12 = t;
              z_11 :
              if(!(match_cons(j_12, sym_Silent_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, o_0);
            PopChoice();
            _fail(t);
          }
        else
          t = o_8;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm p_0 (ATerm t)
        {
          ATerm k_12 = NULL;
          k_12 = t;
          a_12 :
          if(!(match_cons(k_12, sym_TNil_0)))
            _fail(t);
          return(t);
        }
        t = TCons_2(t, _id, p_0);
        return(t);
      }
      t = TCons_2(t, m_0, n_0);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL;
            l_12 = t;
            c_12 :
            if(match_cons(l_12, sym_Runtime_1))
              {
                m_12 = ATgetArgument(l_12, 0);
                if(i_12 != NULL && i_12 != m_12)
                  _fail(m_12);
                else
                  i_12 = m_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, b_1);
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm n_12 = NULL;
            n_12 = t;
            d_12 :
            if(!(match_cons(n_12, sym_TNil_0)))
              _fail(t);
            return(t);
          }
          t = TCons_2(t, _id, c_1);
          return(t);
        }
        t = TCons_2(t, r_0, a_1);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm o_12 = NULL,p_12 = NULL;
              o_12 = t;
              f_12 :
              if(match_cons(o_12, sym_Program_1))
                {
                  p_12 = ATgetArgument(o_12, 0);
                  if(h_12 != NULL && h_12 != p_12)
                    _fail(p_12);
                  else
                    h_12 = p_12;
                }
              else
                _fail(t);
              return(t);
            }
            t = fetch_1(t, h_1);
            return(t);
          }
          ATerm g_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm q_12 = NULL;
              q_12 = t;
              g_12 :
              if(!(match_cons(q_12, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, _id, k_1);
            return(t);
          }
          t = TCons_2(t, d_1, g_1);
          t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(h_12), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(i_12), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
          t = printnl_0(t);
        }
      }
      PopChoice();
    }
  else
    t = n_8;
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  x_12 = t;
  u_12 :
  if(match_cons(x_12, sym_TCons_2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      v_12 :
      if(match_cons(z_12, sym_TCons_2))
        {
          a_13 = ATgetArgument(z_12, 0);
          b_13 = ATgetArgument(z_12, 1);
          w_12 :
          if(match_cons(b_13, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(y_12), not_null(a_13));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  j_13 = t;
  g_13 :
  if(match_cons(j_13, sym_TCons_2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      h_13 :
      if(match_cons(l_13, sym_TCons_2))
        {
          m_13 = ATgetArgument(l_13, 0);
          n_13 = ATgetArgument(l_13, 1);
          i_13 :
          if(match_cons(n_13, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(k_13), not_null(m_13));
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
ATerm output_file_0 (ATerm t)
{
  ATerm z_13 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm r_8 = t;
      if(PushChoice()==0)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm a_14 = NULL,b_14 = NULL;
            a_14 = t;
            s_13 :
            if(match_cons(a_14, sym_Output_1))
              {
                b_14 = ATgetArgument(a_14, 0);
                if(z_13 != NULL && z_13 != b_14)
                  _fail(b_14);
                else
                  z_13 = b_14;
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1(t, q_1);
          PopChoice();
        }
      else
        {
          t = r_8;
          {
            ATerm c_14 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            c_14 = t;
            if(z_13 != NULL && z_13 != c_14)
              _fail(c_14);
            else
              z_13 = c_14;
          }
        }
      return(t);
    }
    ATerm p_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm d_14 = NULL;
        d_14 = t;
        u_13 :
        if(!(match_cons(d_14, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, _id, v_1);
      return(t);
    }
    t = TCons_2(t, l_1, p_1);
  }
  t = q_8;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = not_null(z_13);
          return(t);
        }
        t = split_2(t, a_2, _id);
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm e_14 = NULL;
        e_14 = t;
        v_13 :
        if(!(match_cons(e_14, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, y_1, z_1);
      return(t);
    }
    t = TCons_2(t, _id, w_1);
    {
      ATerm s_8 = t;
      if(PushChoice()==0)
        {
          ATerm c_2 (ATerm t)
          {
            ATerm g_2 (ATerm t)
            {
              ATerm f_14 = NULL;
              f_14 = t;
              w_13 :
              if(!(match_cons(f_14, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1(t, g_2);
            return(t);
          }
          ATerm f_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              ATerm g_14 = NULL;
              g_14 = t;
              x_13 :
              if(!(match_cons(g_14, sym_TNil_0)))
                _fail(t);
              return(t);
            }
            t = TCons_2(t, WriteToBinaryFile_0, h_2);
            return(t);
          }
          t = TCons_2(t, c_2, f_2);
          PopChoice();
        }
      else
        {
          t = s_8;
          {
            ATerm i_2 (ATerm t)
            {
              ATerm m_2 (ATerm t)
              {
                ATerm h_14 = NULL;
                h_14 = t;
                y_13 :
                if(!(match_cons(h_14, sym_TNil_0)))
                  _fail(t);
                return(t);
              }
              t = TCons_2(t, WriteToTextFile_0, m_2);
              return(t);
            }
            t = TCons_2(t, _id, i_2);
          }
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
ATerm apply_strategy_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  ATerm t_8;
  t_8 = t;
  t = dtime_0(t);
  t = t_8;
  t = v_61(t);
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm q_14 = NULL;
      t = dtime_0(t);
      q_14 = t;
      if(p_14 != NULL && p_14 != q_14)
        _fail(q_14);
      else
        p_14 = q_14;
    }
    t = u_8;
    r_14 = t;
    m_14 :
    if(match_cons(r_14, sym_TCons_2))
      {
        s_14 = ATgetArgument(r_14, 0);
        t_14 = ATgetArgument(r_14, 1);
        n_14 :
        if(match_cons(t_14, sym_TCons_2))
          {
            u_14 = ATgetArgument(t_14, 0);
            v_14 = ATgetArgument(t_14, 1);
            o_14 :
            if(match_cons(v_14, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(p_14)), not_null(s_14)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(u_14), (ATerm) ATmakeAppl(sym_TNil_0)));
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  t = SSL_ReadFromFile(not_null(b_15));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm h_15 = NULL;
  ATerm j_15 = NULL;
  h_15 = t;
  {
    ATerm l_15 = NULL;
    t = v_63(t);
    j_15 = t;
    t = not_null(h_15);
    t = w_63(t);
    l_15 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_15), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_15), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_15 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm w_8 = t;
    if(PushChoice()==0)
      {
        ATerm o_2 (ATerm t)
        {
          ATerm u_15 = NULL,v_15 = NULL;
          u_15 = t;
          r_15 :
          if(match_cons(u_15, sym_Input_1))
            {
              v_15 = ATgetArgument(u_15, 0);
              if(t_15 != NULL && t_15 != v_15)
                _fail(v_15);
              else
                t_15 = v_15;
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1(t, o_2);
        PopChoice();
      }
    else
      {
        t = w_8;
        {
          ATerm w_15 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          w_15 = t;
          if(t_15 != NULL && t_15 != w_15)
            _fail(w_15);
          else
            t_15 = w_15;
        }
      }
  }
  t = v_8;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(t_15);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  z_15 :
  if(!(match_cons(a_16, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_52 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_Undefined_1))
    {
      f_16 = ATgetArgument(e_16, 0);
      {
        ATerm h_16 = NULL;
        t = not_null(f_16);
        t = g_52(t);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  l_16 :
  if(!(match_cons(m_16, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm n_16 (ATerm t)
  {
    ATerm x_8 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, o_70, _id);
        PopChoice();
      }
    else
      {
        t = x_8;
        t = Cons_2(t, _id, n_16);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_60 (ATerm))
{
  t = fetch_1(t, z_60);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        ATerm q_16 = NULL;
        q_16 = t;
        o_16 :
        if(!(match_cons(q_16, sym_Help_0)))
          _fail(t);
        PopChoice();
      }
    else
      {
        t = y_8;
        {
          ATerm z_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_8;
              {
                ATerm r_16 = NULL;
                r_16 = t;
                p_16 :
                if(!(match_cons(r_16, sym_Version_0)))
                  _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, q_2);
  t = u_61(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
    a_17 = t;
    t_16 :
    if(match_cons(a_17, sym_TCons_2))
      {
        b_17 = ATgetArgument(a_17, 0);
        c_17 = ATgetArgument(a_17, 1);
        u_16 :
        if(match_cons(c_17, sym_TCons_2))
          {
            d_17 = ATgetArgument(c_17, 0);
            e_17 = ATgetArgument(c_17, 1);
            v_16 :
            if(match_cons(e_17, sym_TCons_2))
              {
                f_17 = ATgetArgument(e_17, 0);
                g_17 = ATgetArgument(e_17, 1);
                w_16 :
                if(match_cons(g_17, sym_TNil_0))
                  {
                    if(x_16 != NULL && x_16 != b_17)
                      _fail(b_17);
                    else
                      x_16 = b_17;
                    if(y_16 != NULL && y_16 != d_17)
                      _fail(d_17);
                    else
                      y_16 = d_17;
                    if(z_16 != NULL && z_16 != f_17)
                      _fail(f_17);
                    else
                      z_16 = f_17;
                    t = SSL_table_put(not_null(x_16), not_null(y_16), not_null(z_16));
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
  }
  t = a_9;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_17 = NULL;
  j_17 = t;
  t = SSL_table_create(not_null(j_17));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  {
    ATerm g_9;
    g_9 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_17), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = g_9;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_Cons_2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm y_17 = NULL;
        t = not_null(u_17);
        t = s_60(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = t_60(t);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(y_17), not_null(v_17));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm u_60 (ATerm), ATerm v_60 (ATerm))
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  g_18 = t;
  e_18 :
  if(match_cons(g_18, sym_Cons_2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      f_18 :
      if(match_cons(i_18, sym_Cons_2))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          {
            ATerm o_18 = NULL;
            t = not_null(h_18);
            t = u_60(t);
            t = not_null(j_18);
            t = v_60(t);
            o_18 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(o_18), not_null(k_18));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_9 = t;
  if(PushChoice()==0)
    {
      ATerm r_2 (ATerm t)
      {
        ATerm m_19 = NULL;
        m_19 = t;
        s_18 :
        if(!(match_string(m_19, "-S")))
          _fail(t);
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, r_2, s_2);
      PopChoice();
    }
  else
    {
      t = h_9;
      {
        ATerm i_9 = t;
        if(PushChoice()==0)
          {
            ATerm t_2 (ATerm t)
            {
              ATerm n_19 = NULL;
              n_19 = t;
              t_18 :
              if(!(match_string(n_19, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, t_2, y_2);
            PopChoice();
          }
        else
          {
            t = i_9;
            {
              ATerm j_9 = t;
              if(PushChoice()==0)
                {
                  ATerm z_2 (ATerm t)
                  {
                    ATerm o_19 = NULL;
                    o_19 = t;
                    u_18 :
                    if(!(match_string(o_19, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm b_3 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, z_2, b_3);
                  PopChoice();
                }
              else
                {
                  t = j_9;
                  {
                    ATerm k_9 = t;
                    if(PushChoice()==0)
                      {
                        ATerm d_3 (ATerm t)
                        {
                          ATerm p_19 = NULL;
                          p_19 = t;
                          v_18 :
                          if(!(match_string(p_19, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_3 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, d_3, e_3);
                        PopChoice();
                      }
                    else
                      {
                        t = k_9;
                        {
                          ATerm l_9 = t;
                          if(PushChoice()==0)
                            {
                              ATerm f_3 (ATerm t)
                              {
                                ATerm q_19 = NULL;
                                q_19 = t;
                                w_18 :
                                if(!(match_string(q_19, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm g_3 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, f_3, g_3);
                              PopChoice();
                            }
                          else
                            {
                              t = l_9;
                              {
                                ATerm m_9 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm h_3 (ATerm t)
                                    {
                                      ATerm r_19 = NULL;
                                      r_19 = t;
                                      x_18 :
                                      if(!(match_string(r_19, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm s_19 = NULL;
                                      s_19 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_19));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, h_3, s_3);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = m_9;
                                    {
                                      ATerm n_9 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm t_3 (ATerm t)
                                          {
                                            ATerm u_19 = NULL;
                                            u_19 = t;
                                            z_18 :
                                            if(!(match_string(u_19, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm u_3 (ATerm t)
                                          {
                                            ATerm v_19 = NULL;
                                            v_19 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_19));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, t_3, u_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = n_9;
                                          {
                                            ATerm o_9 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm v_3 (ATerm t)
                                                {
                                                  ATerm x_19 = NULL;
                                                  x_19 = t;
                                                  b_19 :
                                                  if(!(match_string(x_19, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm s_4 (ATerm t)
                                                {
                                                  ATerm y_19 = NULL;
                                                  y_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_19));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, v_3, s_4);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = o_9;
                                                {
                                                  ATerm p_9 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm t_4 (ATerm t)
                                                      {
                                                        ATerm a_20 = NULL;
                                                        a_20 = t;
                                                        d_19 :
                                                        if(!(match_string(a_20, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm u_4 (ATerm t)
                                                      {
                                                        ATerm b_20 = NULL;
                                                        b_20 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_20));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, t_4, u_4);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = p_9;
                                                      {
                                                        ATerm q_9 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm v_4 (ATerm t)
                                                            {
                                                              ATerm d_20 = NULL;
                                                              d_20 = t;
                                                              f_19 :
                                                              if(!(match_string(d_20, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm w_4 (ATerm t)
                                                            {
                                                              ATerm e_20 = NULL;
                                                              e_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_20));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, v_4, w_4);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = q_9;
                                                            {
                                                              ATerm r_9 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm x_4 (ATerm t)
                                                                  {
                                                                    ATerm g_20 = NULL;
                                                                    g_20 = t;
                                                                    h_19 :
                                                                    if(!(match_string(g_20, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm c_5 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, x_4, c_5);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = r_9;
                                                                  {
                                                                    ATerm b_10 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm d_5 (ATerm t)
                                                                        {
                                                                          ATerm h_20 = NULL;
                                                                          h_20 = t;
                                                                          i_19 :
                                                                          if(!(match_string(h_20, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm e_5 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, d_5, e_5);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_10;
                                                                        {
                                                                          ATerm c_10 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm f_5 (ATerm t)
                                                                              {
                                                                                ATerm i_20 = NULL;
                                                                                i_20 = t;
                                                                                j_19 :
                                                                                if(!(match_string(i_20, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm i_5 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, f_5, i_5);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_10;
                                                                              {
                                                                                ATerm e_10 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm m_5 (ATerm t)
                                                                                    {
                                                                                      ATerm k_20 = NULL;
                                                                                      k_20 = t;
                                                                                      k_19 :
                                                                                      if(!(match_string(k_20, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm n_5 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, m_5, n_5);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_10;
                                                                                    {
                                                                                      ATerm o_5 (ATerm t)
                                                                                      {
                                                                                        ATerm o_20 = NULL;
                                                                                        o_20 = t;
                                                                                        l_19 :
                                                                                        if(!(match_string(o_20, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm p_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, o_5, p_5);
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
    }
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_Cons_2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_20)), not_null(y_20));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Cons_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm l_21 = NULL;
        t = not_null(h_21);
        {
          ATerm n_21 = NULL;
          t = b_57(t);
          l_21 = t;
          t = not_null(i_21);
          t = c_57(t);
          n_21 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(l_21), not_null(n_21));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  s_21 :
  if(!(match_cons(t_21, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm x_21 = NULL;
    x_21 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_21));
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm f_10 = t;
    if(PushChoice()==0)
      {
        ATerm g_10 = t;
        if(PushChoice()==0)
          {
            ATerm z_21 = NULL;
            z_21 = t;
            w_21 :
            if(!(match_cons(z_21, sym_Nil_0)))
              _fail(t);
            PopChoice();
          }
        else
          {
            t = g_10;
            t = q_60(t);
            t = Cons_2(t, _id, r_5);
          }
        PopChoice();
      }
    else
      {
        t = f_10;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, q_5, r_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_10 = t;
    if(PushChoice()==0)
      {
        t = k_61(t);
        PopChoice();
      }
    else
      {
        t = h_10;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_5);
  t = store_options_0(t);
  {
    ATerm m_10 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, l_61);
        PopChoice();
      }
    else
      {
        t = m_10;
        {
          ATerm n_10 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, j_61);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = n_10;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_61 (ATerm), ATerm f_61 (ATerm))
{
  t = iowrap_3(t, e_61, f_61, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm v_5 (ATerm t)
      {
        ATerm d_22 = NULL;
        d_22 = t;
        c_22 :
        if(!(match_cons(d_22, sym_TNil_0)))
          _fail(t);
        return(t);
      }
      t = TCons_2(t, b_61, v_5);
      return(t);
    }
    t = TCons_2(t, _id, u_5);
    return(t);
  }
  t = iowrap_2(t, t_5, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, x_5, y_5);
    return(t);
  }
  t = iowrap_1(t, w_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
