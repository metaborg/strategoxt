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
ATerm alltd_1 (ATerm, ATerm a_76 (ATerm));
ATerm conc_0 (ATerm);
ATerm CallFailFun_0 (ATerm);
ATerm CallIdFun_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_71 (ATerm));
ATerm concat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm CreateDef2_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_56 (ATerm));
ATerm Call_2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm CreateDef1_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm));
ATerm unzip_1 (ATerm, ATerm b_70 (ATerm));
ATerm Canon_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_77 (ATerm));
ATerm downup2_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm TNil_0 (ATerm);
ATerm TCons_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_77 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_62 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_52 (ATerm));
ATerm Help_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm p_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_61 (ATerm));
ATerm need_help_1 (ATerm, ATerm p_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm Option_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm io_options_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm g_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_61 (ATerm), ATerm a_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_61 (ATerm));
ATerm canonicalize_0 (ATerm);
ATerm main_0 (ATerm);
ATerm mark_fresh_vars_0 (ATerm t)
{
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    ATerm t_1 = t;
    if(PushChoice()==0)
      {
        t = a_76(t);
        PopChoice();
      }
    else
      {
        t = t_1;
        t = _all(t, c_0);
      }
    return(t);
  }
  t = c_0(t);
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
ATerm at_end_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_5 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, _id, l_1);
        PopChoice();
      }
    else
      {
        t = m_5;
        t = Nil_0(t);
        t = v_71(t);
      }
    return(t);
  }
  t = l_1(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_5 = t;
  if(PushChoice()==0)
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_5;
      {
        ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
        o_1 = t;
        n_1 :
        if(match_cons(o_1, sym_Cons_2))
          {
            p_1 = ATgetArgument(o_1, 0);
            q_1 = ATgetArgument(o_1, 1);
            t = not_null(p_1);
            {
              ATerm b_0 (ATerm t)
              {
                t = not_null(q_1);
                t = concat_0(t);
                return(t);
              }
              t = at_end_1(t, b_0);
            }
          }
        else
          _fail(t);
      }
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
  ATerm x_1 = NULL;
  ATerm z_1 = NULL;
  x_1 = t;
  t = new_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_1)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(z_1), (ATerm)ATmakeAppl(sym_Nil_0), not_null(x_1)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TNil_0)));
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  f_2 :
  if(match_cons(g_2, sym_SVar_1))
    {
      h_2 = ATgetArgument(g_2, 0);
      {
        ATerm j_2 = NULL;
        t = not_null(h_2);
        t = f_56(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(j_2));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym_Call_2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        ATerm w_2 = NULL;
        t = not_null(s_2);
        {
          ATerm y_2 = NULL;
          t = u_56(t);
          w_2 = t;
          t = not_null(t_2);
          t = v_56(t);
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, not_null(w_2), not_null(y_2));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CreateDef1_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  i_3 = t;
  e_3 :
  if(match_cons(i_3, sym_Let_2))
    {
      j_3 = ATgetArgument(i_3, 0);
      k_3 = ATgetArgument(i_3, 1);
      f_3 :
      if(match_cons(k_3, sym_Call_2))
        {
          l_3 = ATgetArgument(k_3, 0);
          n_3 = ATgetArgument(k_3, 1);
          g_3 :
          if(match_cons(l_3, sym_SVar_1))
            {
              m_3 = ATgetArgument(l_3, 0);
              h_3 :
              if(match_cons(n_3, sym_Nil_0))
                t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_3)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(j_3), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  b_4 = t;
  s_3 :
  if(match_cons(b_4, sym_TCons_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      h_4 = ATgetArgument(b_4, 1);
      t_3 :
      if(match_cons(c_4, sym_TCons_2))
        {
          d_4 = ATgetArgument(c_4, 0);
          e_4 = ATgetArgument(c_4, 1);
          u_3 :
          if(match_cons(e_4, sym_TCons_2))
            {
              f_4 = ATgetArgument(e_4, 0);
              g_4 = ATgetArgument(e_4, 1);
              v_3 :
              if(match_cons(g_4, sym_TNil_0))
                {
                  w_3 :
                  if(match_cons(h_4, sym_TCons_2))
                    {
                      i_4 = ATgetArgument(h_4, 0);
                      n_4 = ATgetArgument(h_4, 1);
                      x_3 :
                      if(match_cons(i_4, sym_TCons_2))
                        {
                          j_4 = ATgetArgument(i_4, 0);
                          k_4 = ATgetArgument(i_4, 1);
                          y_3 :
                          if(match_cons(k_4, sym_TCons_2))
                            {
                              l_4 = ATgetArgument(k_4, 0);
                              m_4 = ATgetArgument(k_4, 1);
                              z_3 :
                              if(match_cons(m_4, sym_TNil_0))
                                {
                                  a_4 :
                                  if(match_cons(n_4, sym_TNil_0))
                                    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(d_4), not_null(j_4)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(f_4), not_null(l_4)), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym_Cons_2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_4), (ATerm) ATmakeAppl(sym_TCons_2, not_null(x_4), (ATerm) ATmakeAppl(sym_TNil_0)));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym_Nil_0))
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Nil_0), (ATerm) ATmakeAppl(sym_TNil_0)));
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm o_5 = t;
    if(PushChoice()==0)
      {
        t = r_69(t);
        PopChoice();
      }
    else
      {
        t = o_5;
        t = s_69(t);
        {
          ATerm d_0 (ATerm t)
          {
            t = TCons_2(t, f_5, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_69, d_0);
          t = t_69(t);
        }
      }
    return(t);
  }
  t = f_5(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_70 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_70);
  return(t);
}
ATerm Canon_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  ATerm i_9 (ATerm t)
  {
    t = not_null(f_7);
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    ATerm f_8 = NULL;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_6), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = conc_0(t);
    f_8 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_8), not_null(y_6));
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = not_null(f_7);
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = not_null(c_7);
    return(t);
  }
  ATerm m_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_6)));
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_6)), not_null(y_6)));
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    ATerm v_8 = NULL;
    t = not_null(a_7);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
        r_8 = t;
        d_6 :
        if(match_cons(r_8, sym_Call_2))
          {
            s_8 = ATgetArgument(r_8, 0);
            u_8 = ATgetArgument(r_8, 1);
            e_6 :
            if(match_cons(s_8, sym_SVar_1))
              {
                t_8 = ATgetArgument(s_8, 0);
                f_6 :
                if(match_cons(u_8, sym_Nil_0))
                  {
                    if(z_6 != NULL && z_6 != t_8)
                      _fail(t_8);
                    else
                      z_6 = t_8;
                    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_7)), (ATerm) ATmakeAppl(sym_Nil_0));
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
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(v_8));
    }
    return(t);
  }
  ATerm p_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_SDef_3, not_null(c_7), (ATerm)ATmakeAppl(sym_Nil_0), not_null(f_7)), (ATerm) ATmakeAppl(sym_Nil_0)), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_7)), (ATerm) ATmakeAppl(sym_Nil_0)));
    return(t);
  }
  ATerm q_9 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_7), not_null(g_7), not_null(h_7));
    return(t);
  }
  b_7 = t;
  h_6 :
  if(match_cons(b_7, sym_Call_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      f_7 = ATgetArgument(b_7, 1);
      {
        ATerm p_5 = t;
        if(PushChoice()==0)
          {
            ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
            t = not_null(f_7);
            {
              ATerm f_0 (ATerm t)
              {
                ATerm g_0 (ATerm t)
                {
                  ATerm q_5 = t;
                  if(PushChoice()==0)
                    {
                      t = CallIdFun_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_5;
                      t = CallFailFun_0(t);
                    }
                  return(t);
                }
                t = try_1(t, g_0);
                {
                  ATerm r_5 = t;
                  if(PushChoice()==0)
                    {
                      t = CreateDef1_0(t);
                      PopChoice();
                    }
                  else
                    {
                      t = r_5;
                      {
                        ATerm s_5 = t;
                        if(PushChoice()==0)
                          {
                            ATerm t_5 = t;
                            if(PushChoice()==0)
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = SVar_1(t, _id);
                                  return(t);
                                }
                                t = Call_2(t, h_0, Nil_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = t_5;
                            t = CreateDef2_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = s_5;
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
              k_7 = t;
              x_5 :
              if(match_cons(k_7, sym_TCons_2))
                {
                  l_7 = ATgetArgument(k_7, 0);
                  m_7 = ATgetArgument(k_7, 1);
                  y_5 :
                  if(match_cons(m_7, sym_TCons_2))
                    {
                      n_7 = ATgetArgument(m_7, 0);
                      o_7 = ATgetArgument(m_7, 1);
                      z_5 :
                      if(match_cons(o_7, sym_TNil_0))
                        {
                          ATerm r_7 = NULL;
                          t = not_null(n_7);
                          t = concat_0(t);
                          r_7 = t;
                          {
                            ATerm u_5 = t;
                            if(PushChoice()==0)
                              {
                                t = Nil_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = u_5;
                            t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_7), (ATerm) ATmakeAppl(sym_Call_2, not_null(c_7), not_null(l_7)));
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
            PopChoice();
          }
        else
          {
            t = p_5;
            {
              ATerm v_7 = NULL;
              t = not_null(f_7);
              {
                ATerm t_9 (ATerm t)
                {
                  ATerm v_5 = t;
                  if(PushChoice()==0)
                    {
                      ATerm j_0 (ATerm t)
                      {
                        ATerm w_5 = t;
                        if(PushChoice()==0)
                          {
                            t = CallIdFun_0(t);
                            PopChoice();
                          }
                        else
                          {
                            t = w_5;
                            t = CallFailFun_0(t);
                          }
                        return(t);
                      }
                      ATerm k_0 (ATerm t)
                      {
                        t = try_1(t, t_9);
                        return(t);
                      }
                      t = Cons_2(t, j_0, k_0);
                      PopChoice();
                    }
                  else
                    {
                      t = v_5;
                      t = Cons_2(t, _id, t_9);
                    }
                  return(t);
                }
                t = t_9(t);
                v_7 = t;
                t = (ATerm) ATmakeAppl(sym_Call_2, not_null(c_7), not_null(v_7));
              }
            }
          }
      }
    }
  else
    {
      if(match_cons(b_7, sym_All_1))
        {
          c_7 = ATgetArgument(b_7, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_all", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Nil_0)));
        }
      else
        {
          if(match_cons(b_7, sym_One_1))
            {
              c_7 = ATgetArgument(b_7, 0);
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_one", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Nil_0)));
            }
          else
            {
              if(match_cons(b_7, sym_Some_1))
                {
                  c_7 = ATgetArgument(b_7, 0);
                  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_some", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                }
              else
                {
                  if(match_cons(b_7, sym_Thread_1))
                    {
                      c_7 = ATgetArgument(b_7, 0);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("_thread", 0, ATtrue))), (ATerm) ATmakeAppl(sym_Cons_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Nil_0)));
                    }
                  else
                    {
                      if(match_cons(b_7, sym_Scope_2))
                        {
                          c_7 = ATgetArgument(b_7, 0);
                          f_7 = ATgetArgument(b_7, 1);
                          i_6 :
                          if(match_cons(f_7, sym_Scope_2))
                            {
                              w_6 = ATgetArgument(f_7, 0);
                              y_6 = ATgetArgument(f_7, 1);
                              j_6 :
                              if(match_cons(c_7, sym_Nil_0))
                                {
                                  ATerm a_6 = t;
                                  if(PushChoice()==0)
                                    {
                                      t = i_9(t);
                                      PopChoice();
                                    }
                                  else
                                    {
                                      t = a_6;
                                      t = j_9(t);
                                    }
                                }
                              else
                                t = j_9(t);
                            }
                          else
                            {
                              k_6 :
                              if(match_cons(c_7, sym_Nil_0))
                                t = i_9(t);
                              else
                                _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(b_7, sym_Seq_2))
                            {
                              c_7 = ATgetArgument(b_7, 0);
                              f_7 = ATgetArgument(b_7, 1);
                              l_6 :
                              if(match_cons(f_7, sym_Id_0))
                                {
                                  m_6 :
                                  if(match_cons(c_7, sym_Id_0))
                                    {
                                      ATerm b_6 = t;
                                      if(PushChoice()==0)
                                        {
                                          t = k_9(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = b_6;
                                          t = l_9(t);
                                        }
                                    }
                                  else
                                    t = l_9(t);
                                }
                              else
                                {
                                  if(match_cons(f_7, sym_Build_1))
                                    {
                                      w_6 = ATgetArgument(f_7, 0);
                                      n_6 :
                                      if(match_cons(c_7, sym_Id_0))
                                        t = k_9(t);
                                      else
                                        {
                                          if(match_cons(c_7, sym_Where_1))
                                            {
                                              d_7 = ATgetArgument(c_7, 0);
                                              t = m_9(t);
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(f_7, sym_Seq_2))
                                        {
                                          w_6 = ATgetArgument(f_7, 0);
                                          y_6 = ATgetArgument(f_7, 1);
                                          o_6 :
                                          if(match_cons(c_7, sym_Id_0))
                                            t = k_9(t);
                                          else
                                            {
                                              if(match_cons(c_7, sym_Where_1))
                                                {
                                                  d_7 = ATgetArgument(c_7, 0);
                                                  p_6 :
                                                  if(match_cons(w_6, sym_Build_1))
                                                    {
                                                      x_6 = ATgetArgument(w_6, 0);
                                                      t = n_9(t);
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
                                          q_6 :
                                          if(match_cons(c_7, sym_Id_0))
                                            t = k_9(t);
                                          else
                                            _fail(t);
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(b_7, sym_SDef_3))
                                {
                                  c_7 = ATgetArgument(b_7, 0);
                                  f_7 = ATgetArgument(b_7, 1);
                                  g_7 = ATgetArgument(b_7, 2);
                                  r_6 :
                                  if(match_cons(f_7, sym_Nil_0))
                                    {
                                      s_6 :
                                      if(match_cons(g_7, sym_Rec_2))
                                        {
                                          z_6 = ATgetArgument(g_7, 0);
                                          a_7 = ATgetArgument(g_7, 1);
                                          t = o_9(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(b_7, sym_Rec_2))
                                    {
                                      c_7 = ATgetArgument(b_7, 0);
                                      f_7 = ATgetArgument(b_7, 1);
                                      t = p_9(t);
                                    }
                                  else
                                    {
                                      if(match_cons(b_7, sym_SDef_4))
                                        {
                                          c_7 = ATgetArgument(b_7, 0);
                                          f_7 = ATgetArgument(b_7, 1);
                                          g_7 = ATgetArgument(b_7, 2);
                                          h_7 = ATgetArgument(b_7, 3);
                                          t_6 :
                                          if(match_cons(c_7, sym_Cons_2))
                                            {
                                              d_7 = ATgetArgument(c_7, 0);
                                              e_7 = ATgetArgument(c_7, 1);
                                              u_6 :
                                              if(match_cons(d_7, sym_DontInline_0))
                                                {
                                                  v_6 :
                                                  if(match_cons(e_7, sym_Nil_0))
                                                    t = q_9(t);
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
ATerm repeat_2 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm y_9 (ATerm t)
  {
    ATerm c_6 = t;
    if(PushChoice()==0)
      {
        t = a_77(t);
        t = y_9(t);
        PopChoice();
      }
    else
      {
        t = c_6;
        t = b_77(t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_77 (ATerm))
{
  t = repeat_2(t, d_77, _id);
  return(t);
}
ATerm downup2_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm z_9 (ATerm t)
  {
    t = f_74(t);
    t = _all(t, z_9);
    t = g_74(t);
    return(t);
  }
  t = z_9(t);
  return(t);
}
ATerm TNil_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  a_10 :
  if(!(match_cons(b_10, sym_TNil_0)))
    _fail(t);
  return(t);
}
ATerm TCons_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_TCons_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm l_10 = NULL;
        t = not_null(h_10);
        {
          ATerm n_10 = NULL;
          t = p_57(t);
          l_10 = t;
          t = not_null(i_10);
          t = q_57(t);
          n_10 = t;
          t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_10), not_null(n_10));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm g_6;
  g_6 = t;
  {
    ATerm l_0 (ATerm t)
    {
      ATerm v_10 = NULL,w_10 = NULL;
      v_10 = t;
      t_10 :
      if(match_cons(v_10, sym_Program_1))
        {
          w_10 = ATgetArgument(v_10, 0);
          if(u_10 != NULL && u_10 != w_10)
            _fail(w_10);
          else
            u_10 = w_10;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, l_0);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(u_10), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0)))), (ATerm) ATmakeAppl(sym_TNil_0)));
    t = printnl_0(t);
    t = (ATerm) ATmakeInt(1);
    t = exit_0(t);
  }
  t = g_6;
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
  ATerm a_11 = NULL;
  a_11 = t;
  z_10 :
  if(!(match_cons(a_11, sym_exit_0)))
    t = SSL_exit(not_null(a_11));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  e_11 :
  if(match_cons(h_11, sym_TCons_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      f_11 :
      if(match_cons(j_11, sym_TCons_2))
        {
          k_11 = ATgetArgument(j_11, 0);
          l_11 = ATgetArgument(j_11, 1);
          g_11 :
          if(match_cons(l_11, sym_TNil_0))
            {
              ATerm i_7;
              i_7 = t;
              t = SSL_printnl(not_null(i_11), not_null(k_11));
              t = i_7;
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
ATerm try_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm j_7 = t;
  if(PushChoice()==0)
    {
      t = x_77(t);
      PopChoice();
    }
  else
    t = j_7;
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm p_7 = t;
      if(PushChoice()==0)
        {
          ATerm p_0 (ATerm t)
          {
            ATerm w_11 = NULL;
            w_11 = t;
            p_11 :
            if(!(match_cons(w_11, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_0);
          PopChoice();
          _fail(t);
        }
      else
        t = p_7;
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, n_0, o_0);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm x_11 = NULL,y_11 = NULL;
          x_11 = t;
          r_11 :
          if(match_cons(x_11, sym_Runtime_1))
            {
              y_11 = ATgetArgument(x_11, 0);
              if(v_11 != NULL && v_11 != y_11)
                _fail(y_11);
              else
                v_11 = y_11;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_1);
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        t = TCons_2(t, _id, TNil_0);
        return(t);
      }
      t = TCons_2(t, q_0, r_0);
      {
        ATerm b_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm z_11 = NULL,a_12 = NULL;
            z_11 = t;
            t_11 :
            if(match_cons(z_11, sym_Program_1))
              {
                a_12 = ATgetArgument(z_11, 0);
                if(u_11 != NULL && u_11 != a_12)
                  _fail(a_12);
                else
                  u_11 = a_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_1);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = TCons_2(t, _id, TNil_0);
          return(t);
        }
        t = TCons_2(t, b_1, c_1);
        t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, not_null(u_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Cons_2, not_null(v_11), (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Nil_0))))), (ATerm) ATmakeAppl(sym_TNil_0)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, m_0);
  t = (ATerm) ATmakeInt(0);
  t = exit_0(t);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  h_12 = t;
  e_12 :
  if(match_cons(h_12, sym_TCons_2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      f_12 :
      if(match_cons(j_12, sym_TCons_2))
        {
          k_12 = ATgetArgument(j_12, 0);
          l_12 = ATgetArgument(j_12, 1);
          g_12 :
          if(match_cons(l_12, sym_TNil_0))
            t = SSL_WriteToTextFile(not_null(i_12), not_null(k_12));
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
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  t_12 = t;
  q_12 :
  if(match_cons(t_12, sym_TCons_2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      r_12 :
      if(match_cons(v_12, sym_TCons_2))
        {
          w_12 = ATgetArgument(v_12, 0);
          x_12 = ATgetArgument(v_12, 1);
          s_12 :
          if(match_cons(x_12, sym_TNil_0))
            t = SSL_WriteToBinaryFile(not_null(u_12), not_null(w_12));
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
  ATerm f_13 = NULL;
  ATerm q_7;
  q_7 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm s_7 = t;
      if(PushChoice()==0)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm g_13 = NULL,h_13 = NULL;
            g_13 = t;
            c_13 :
            if(match_cons(g_13, sym_Output_1))
              {
                h_13 = ATgetArgument(g_13, 0);
                if(f_13 != NULL && f_13 != h_13)
                  _fail(h_13);
                else
                  f_13 = h_13;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_1);
          PopChoice();
        }
      else
        {
          t = s_7;
          {
            ATerm i_13 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            i_13 = t;
            if(f_13 != NULL && f_13 != i_13)
              _fail(i_13);
            else
              f_13 = i_13;
          }
        }
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      t = TCons_2(t, _id, TNil_0);
      return(t);
    }
    t = TCons_2(t, g_1, h_1);
  }
  t = q_7;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = not_null(f_13);
          return(t);
        }
        t = split_2(t, s_1, _id);
        return(t);
      }
      t = TCons_2(t, r_1, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, m_1);
    {
      ATerm t_7 = t;
      if(PushChoice()==0)
        {
          ATerm u_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm j_13 = NULL;
              j_13 = t;
              e_13 :
              if(!(match_cons(j_13, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, w_1);
            return(t);
          }
          ATerm v_1 (ATerm t)
          {
            t = TCons_2(t, WriteToBinaryFile_0, TNil_0);
            return(t);
          }
          t = TCons_2(t, u_1, v_1);
          PopChoice();
        }
      else
        {
          t = t_7;
          {
            ATerm y_1 (ATerm t)
            {
              t = TCons_2(t, WriteToTextFile_0, TNil_0);
              return(t);
            }
            t = TCons_2(t, _id, y_1);
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
ATerm apply_strategy_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm r_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  ATerm u_7;
  u_7 = t;
  t = dtime_0(t);
  t = u_7;
  t = q_62(t);
  {
    ATerm w_7;
    w_7 = t;
    {
      ATerm s_13 = NULL;
      t = dtime_0(t);
      s_13 = t;
      if(r_13 != NULL && r_13 != s_13)
        _fail(s_13);
      else
        r_13 = s_13;
    }
    t = w_7;
    t_13 = t;
    o_13 :
    if(match_cons(t_13, sym_TCons_2))
      {
        u_13 = ATgetArgument(t_13, 0);
        v_13 = ATgetArgument(t_13, 1);
        p_13 :
        if(match_cons(v_13, sym_TCons_2))
          {
            w_13 = ATgetArgument(v_13, 0);
            x_13 = ATgetArgument(v_13, 1);
            q_13 :
            if(match_cons(x_13, sym_TNil_0))
              t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Runtime_1, not_null(r_13)), not_null(u_13)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(w_13), (ATerm) ATmakeAppl(sym_TNil_0)));
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
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_ReadFromFile(not_null(d_14));
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm j_14 = NULL;
  ATerm l_14 = NULL;
  j_14 = t;
  {
    ATerm n_14 = NULL;
    t = u_64(t);
    l_14 = t;
    t = not_null(j_14);
    t = v_64(t);
    n_14 = t;
    t = (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_14), (ATerm) ATmakeAppl(sym_TCons_2, not_null(n_14), (ATerm) ATmakeAppl(sym_TNil_0)));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_14 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm y_7 = t;
    if(PushChoice()==0)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm w_14 = NULL,x_14 = NULL;
          w_14 = t;
          t_14 :
          if(match_cons(w_14, sym_Input_1))
            {
              x_14 = ATgetArgument(w_14, 0);
              if(v_14 != NULL && v_14 != x_14)
                _fail(x_14);
              else
                v_14 = x_14;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_2);
        PopChoice();
      }
    else
      {
        t = y_7;
        {
          ATerm y_14 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          y_14 = t;
          if(v_14 != NULL && v_14 != y_14)
            _fail(y_14);
          else
            v_14 = y_14;
        }
      }
  }
  t = x_7;
  {
    ATerm b_2 (ATerm t)
    {
      t = not_null(v_14);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  b_15 :
  if(!(match_cons(c_15, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Undefined_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm j_15 = NULL;
        t = not_null(h_15);
        t = y_52(t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_15));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  n_15 :
  if(!(match_cons(o_15, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm p_15 (ATerm t)
  {
    ATerm z_7 = t;
    if(PushChoice()==0)
      {
        t = Cons_2(t, p_71, _id);
        PopChoice();
      }
    else
      {
        t = z_7;
        t = Cons_2(t, _id, p_15);
      }
    return(t);
  }
  t = p_15(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_61 (ATerm))
{
  t = fetch_1(t, u_61);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm a_8 = t;
    if(PushChoice()==0)
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = a_8;
        {
          ATerm b_8 = t;
          if(PushChoice()==0)
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = b_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_2);
  t = p_62(t);
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm c_8;
  c_8 = t;
  {
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
    y_15 = t;
    r_15 :
    if(match_cons(y_15, sym_TCons_2))
      {
        z_15 = ATgetArgument(y_15, 0);
        a_16 = ATgetArgument(y_15, 1);
        s_15 :
        if(match_cons(a_16, sym_TCons_2))
          {
            b_16 = ATgetArgument(a_16, 0);
            c_16 = ATgetArgument(a_16, 1);
            t_15 :
            if(match_cons(c_16, sym_TCons_2))
              {
                d_16 = ATgetArgument(c_16, 0);
                e_16 = ATgetArgument(c_16, 1);
                u_15 :
                if(match_cons(e_16, sym_TNil_0))
                  {
                    if(v_15 != NULL && v_15 != z_15)
                      _fail(z_15);
                    else
                      v_15 = z_15;
                    if(w_15 != NULL && w_15 != b_16)
                      _fail(b_16);
                    else
                      w_15 = b_16;
                    if(x_15 != NULL && x_15 != d_16)
                      _fail(d_16);
                    else
                      x_15 = d_16;
                    t = SSL_table_put(not_null(v_15), not_null(w_15), not_null(x_15));
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
  t = c_8;
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_table_create(not_null(h_16));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  {
    ATerm d_8;
    d_8 = t;
    t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
    t = table_create_0(t);
    t = (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), (ATerm) ATmakeAppl(sym_TCons_2, not_null(l_16), (ATerm) ATmakeAppl(sym_TNil_0))));
    t = table_put_0(t);
    t = d_8;
  }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Cons_2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      {
        ATerm w_16 = NULL;
        t = not_null(s_16);
        t = n_61(t);
        t = (ATerm) ATmakeAppl(sym_TNil_0);
        t = o_61(t);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(w_16), not_null(t_16));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  e_17 = t;
  c_17 :
  if(match_cons(e_17, sym_Cons_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      d_17 :
      if(match_cons(g_17, sym_Cons_2))
        {
          h_17 = ATgetArgument(g_17, 0);
          i_17 = ATgetArgument(g_17, 1);
          {
            ATerm m_17 = NULL;
            t = not_null(f_17);
            t = p_61(t);
            t = not_null(h_17);
            t = q_61(t);
            m_17 = t;
            t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(m_17), not_null(i_17));
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
  ATerm e_8 = t;
  if(PushChoice()==0)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm k_18 = NULL;
        k_18 = t;
        q_17 :
        if(!(match_string(k_18, "-S")))
          _fail(t);
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      t = Option_2(t, d_2, e_2);
      PopChoice();
    }
  else
    {
      t = e_8;
      {
        ATerm g_8 = t;
        if(PushChoice()==0)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm l_18 = NULL;
              l_18 = t;
              r_17 :
              if(!(match_string(l_18, "--silent")))
                _fail(t);
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Silent_0);
              return(t);
            }
            t = Option_2(t, i_2, k_2);
            PopChoice();
          }
        else
          {
            t = g_8;
            {
              ATerm h_8 = t;
              if(PushChoice()==0)
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm m_18 = NULL;
                    m_18 = t;
                    s_17 :
                    if(!(match_string(m_18, "--verbose")))
                      _fail(t);
                    return(t);
                  }
                  ATerm m_2 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Verbose_0);
                    return(t);
                  }
                  t = Option_2(t, l_2, m_2);
                  PopChoice();
                }
              else
                {
                  t = h_8;
                  {
                    ATerm i_8 = t;
                    if(PushChoice()==0)
                      {
                        ATerm n_2 (ATerm t)
                        {
                          ATerm n_18 = NULL;
                          n_18 = t;
                          t_17 :
                          if(!(match_string(n_18, "-v")))
                            _fail(t);
                          return(t);
                        }
                        ATerm o_2 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(sym_Version_0);
                          return(t);
                        }
                        t = Option_2(t, n_2, o_2);
                        PopChoice();
                      }
                    else
                      {
                        t = i_8;
                        {
                          ATerm j_8 = t;
                          if(PushChoice()==0)
                            {
                              ATerm p_2 (ATerm t)
                              {
                                ATerm o_18 = NULL;
                                o_18 = t;
                                u_17 :
                                if(!(match_string(o_18, "--version")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm u_2 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(sym_Version_0);
                                return(t);
                              }
                              t = Option_2(t, p_2, u_2);
                              PopChoice();
                            }
                          else
                            {
                              t = j_8;
                              {
                                ATerm k_8 = t;
                                if(PushChoice()==0)
                                  {
                                    ATerm v_2 (ATerm t)
                                    {
                                      ATerm p_18 = NULL;
                                      p_18 = t;
                                      v_17 :
                                      if(!(match_string(p_18, "@version")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm x_2 (ATerm t)
                                    {
                                      ATerm q_18 = NULL;
                                      q_18 = t;
                                      t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_18));
                                      return(t);
                                    }
                                    t = ArgOption_2(t, v_2, x_2);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_8;
                                    {
                                      ATerm l_8 = t;
                                      if(PushChoice()==0)
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            ATerm s_18 = NULL;
                                            s_18 = t;
                                            x_17 :
                                            if(!(match_string(s_18, "-i")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm a_3 (ATerm t)
                                          {
                                            ATerm t_18 = NULL;
                                            t_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_18));
                                            return(t);
                                          }
                                          t = ArgOption_2(t, z_2, a_3);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_8;
                                          {
                                            ATerm m_8 = t;
                                            if(PushChoice()==0)
                                              {
                                                ATerm b_3 (ATerm t)
                                                {
                                                  ATerm v_18 = NULL;
                                                  v_18 = t;
                                                  z_17 :
                                                  if(!(match_string(v_18, "--input")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm c_3 (ATerm t)
                                                {
                                                  ATerm w_18 = NULL;
                                                  w_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_18));
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, b_3, c_3);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_8;
                                                {
                                                  ATerm n_8 = t;
                                                  if(PushChoice()==0)
                                                    {
                                                      ATerm d_3 (ATerm t)
                                                      {
                                                        ATerm y_18 = NULL;
                                                        y_18 = t;
                                                        b_18 :
                                                        if(!(match_string(y_18, "-o")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_3 (ATerm t)
                                                      {
                                                        ATerm z_18 = NULL;
                                                        z_18 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_18));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, d_3, o_3);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_8;
                                                      {
                                                        ATerm o_8 = t;
                                                        if(PushChoice()==0)
                                                          {
                                                            ATerm p_3 (ATerm t)
                                                            {
                                                              ATerm b_19 = NULL;
                                                              b_19 = t;
                                                              d_18 :
                                                              if(!(match_string(b_19, "--output")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm q_3 (ATerm t)
                                                            {
                                                              ATerm c_19 = NULL;
                                                              c_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_19));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, p_3, q_3);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = o_8;
                                                            {
                                                              ATerm p_8 = t;
                                                              if(PushChoice()==0)
                                                                {
                                                                  ATerm r_3 (ATerm t)
                                                                  {
                                                                    ATerm e_19 = NULL;
                                                                    e_19 = t;
                                                                    f_18 :
                                                                    if(!(match_string(e_19, "-b")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_4 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Binary_0);
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_3, o_4);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = p_8;
                                                                  {
                                                                    ATerm q_8 = t;
                                                                    if(PushChoice()==0)
                                                                      {
                                                                        ATerm p_4 (ATerm t)
                                                                        {
                                                                          ATerm f_19 = NULL;
                                                                          f_19 = t;
                                                                          g_18 :
                                                                          if(!(match_string(f_19, "-s")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm q_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, p_4, q_4);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_8;
                                                                        {
                                                                          ATerm w_8 = t;
                                                                          if(PushChoice()==0)
                                                                            {
                                                                              ATerm r_4 (ATerm t)
                                                                              {
                                                                                ATerm g_19 = NULL;
                                                                                g_19 = t;
                                                                                h_18 :
                                                                                if(!(match_string(g_19, "--help")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm s_4 (ATerm t)
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, r_4, s_4);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_8;
                                                                              {
                                                                                ATerm x_8 = t;
                                                                                if(PushChoice()==0)
                                                                                  {
                                                                                    ATerm t_4 (ATerm t)
                                                                                    {
                                                                                      ATerm h_19 = NULL;
                                                                                      h_19 = t;
                                                                                      i_18 :
                                                                                      if(!(match_string(h_19, "-h")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_4 (ATerm t)
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, t_4, y_4);
                                                                                    PopChoice();
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_8;
                                                                                    {
                                                                                      ATerm z_4 (ATerm t)
                                                                                      {
                                                                                        ATerm i_19 = NULL;
                                                                                        i_19 = t;
                                                                                        j_18 :
                                                                                        if(!(match_string(i_19, "-?")))
                                                                                          _fail(t);
                                                                                        return(t);
                                                                                      }
                                                                                      ATerm a_5 (ATerm t)
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Help_0);
                                                                                        return(t);
                                                                                      }
                                                                                      t = Option_2(t, z_4, a_5);
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
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_Cons_2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      t = (ATerm) ATmakeAppl(sym_Cons_2, (ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_19)), not_null(s_19));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm))
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_Cons_2))
    {
      b_20 = ATgetArgument(a_20, 0);
      c_20 = ATgetArgument(a_20, 1);
      {
        ATerm f_20 = NULL;
        t = not_null(b_20);
        {
          ATerm h_20 = NULL;
          t = t_57(t);
          f_20 = t;
          t = not_null(c_20);
          t = u_57(t);
          h_20 = t;
          t = (ATerm) ATmakeAppl(sym_Cons_2, not_null(f_20), not_null(h_20));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  q_20 :
  if(!(match_cons(r_20, sym_Nil_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm t_20 = NULL;
    t_20 = t;
    t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_20));
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    ATerm y_8 = t;
    if(PushChoice()==0)
      {
        ATerm z_8 = t;
        if(PushChoice()==0)
          {
            t = Nil_0(t);
            PopChoice();
          }
        else
          {
            t = z_8;
            t = l_61(t);
            t = Cons_2(t, _id, e_5);
          }
        PopChoice();
      }
    else
      {
        t = y_8;
        t = UndefinedOption_0(t);
      }
    return(t);
  }
  t = Cons_2(t, b_5, e_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm g_62 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm a_9 = t;
    if(PushChoice()==0)
      {
        t = f_62(t);
        PopChoice();
      }
    else
      {
        t = a_9;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_5);
  t = store_options_0(t);
  {
    ATerm b_9 = t;
    if(PushChoice()==0)
      {
        t = need_help_1(t, g_62);
        PopChoice();
      }
    else
      {
        t = b_9;
        {
          ATerm c_9 = t;
          if(PushChoice()==0)
            {
              t = input_file_0(t);
              t = apply_strategy_1(t, e_62);
              t = output_file_0(t);
              t = report_success_0(t);
              PopChoice();
            }
          else
            {
              t = c_9;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_61 (ATerm), ATerm a_62 (ATerm))
{
  t = iowrap_3(t, z_61, a_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = TCons_2(t, w_61, TNil_0);
      return(t);
    }
    t = TCons_2(t, _id, i_5);
    return(t);
  }
  t = iowrap_2(t, h_5, _fail);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      t = repeat_1(t, Canon_0);
      return(t);
    }
    t = downup2_2(t, k_5, l_5);
    t = mark_fresh_vars_0(t);
    return(t);
  }
  t = iowrap_1(t, j_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = canonicalize_0(t);
  return(t);
}
