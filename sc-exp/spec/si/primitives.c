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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  init_constant_terms();
}
ATerm term_c_34;
ATerm term_v_32;
ATerm term_l_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_h_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_u_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_r_23;
ATerm term_k_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_p_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_w_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_m_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_l_8;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Call_2, term_l_8, (ATerm) ATempty);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Op_2, term_z_8, (ATerm) ATempty);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Var_1, term_p_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_a_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_y_11);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_y_11);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_j_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_y_11);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_y_11);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_y_11);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, (ATerm) ATempty);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm EvalPrimitive_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm);
ATerm crush_3_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm z_86 (ATerm), ATerm);
ATerm collect_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm get_primitives_0_0 (ATerm);
ATerm _2_0 (ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm Program_1_0 (ATerm c_67 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_67 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm r_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_100 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm o_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm u_1 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
    t = not_null(u_1);
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    t = not_null(u_1);
    {
      ATerm c_2 = NULL;
      ATerm m_2 (ATerm t)
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
        ATerm n_2 (ATerm t)
        {
          t = not_null(h_2);
          if(((z_1 != NULL) && (z_1 != t)))
            _fail(t);
          else
            z_1 = t;
          t = not_null(j_2);
          if(((b_2 != NULL) && (b_2 != t)))
            _fail(t);
          else
            b_2 = t;
          t = not_null(k_2);
          if(((a_2 != NULL) && (a_2 != t)))
            _fail(t);
          else
            a_2 = t;
          t = not_null(e_2);
          return(t);
        }
        t = not_null(c_2);
        if(((d_2 != NULL) && (d_2 != t)))
          _fail(t);
        else
          d_2 = t;
        t = not_null(c_2);
        t = SSL_explode_term(not_null(d_2));
        if(((e_2 != NULL) && (e_2 != t)))
          _fail(t);
        else
          e_2 = t;
        t = not_null(e_2);
        if(match_cons(t, sym__2))
          {
            f_2 = ATgetArgument(t, 0);
            g_2 = ATgetArgument(t, 1);
            t = not_null(f_2);
            if(match_string(t, ""))
              {
                t = not_null(g_2);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_2 = ATgetFirst((ATermList) t);
                    i_2 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(i_2);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        j_2 = ATgetFirst((ATermList) t);
                        k_2 = (ATerm) ATgetNext((ATermList) t);
                        t = n_2(t);
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
      t = not_null(y_1);
      if(((c_2 != NULL) && (c_2 != t)))
        _fail(t);
      else
        c_2 = t;
      t = m_2(t);
      t = not_null(b_2);
    }
    return(t);
  }
  if(((u_1 != NULL) && (u_1 != t)))
    _fail(t);
  else
    u_1 = t;
  t = l_2(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm EvalPrimitive_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
    t = not_null(y_2);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    t = not_null(z_2);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    t = not_null(x_2);
    {
      ATerm h_3 = NULL;
      ATerm s_3 (ATerm t)
      {
        ATerm m_3 = NULL;
        ATerm v_3 (ATerm t)
        {
          ATerm p_3 = NULL;
          ATerm x_3 (ATerm t)
          {
            t = not_null(p_3);
            if(((e_3 != NULL) && (e_3 != t)))
              _fail(t);
            else
              e_3 = t;
            t = not_null(p_3);
            return(t);
          }
          t = not_null(m_3);
          if(((c_3 != NULL) && (c_3 != t)))
            _fail(t);
          else
            c_3 = t;
          t = not_null(d_3);
          {
            ATerm c_0 (ATerm t)
            {
              ATerm n_3 = NULL;
              ATerm o_3 = NULL;
              ATerm w_3 (ATerm t)
              {
                t = not_null(o_3);
                if(((n_3 != NULL) && (n_3 != t)))
                  _fail(t);
                else
                  n_3 = t;
                t = not_null(o_3);
                return(t);
              }
              if(((o_3 != NULL) && (o_3 != t)))
                _fail(t);
              else
                o_3 = t;
              t = w_3(t);
              t = (ATerm) ATmakeAppl(sym_App_2, term_y_8, not_null(n_3));
              return(t);
            }
            t = map_1_0(c_0, t);
            if(((p_3 != NULL) && (p_3 != t)))
              _fail(t);
            else
              p_3 = t;
            t = x_3(t);
          }
          return(t);
        }
        t = not_null(h_3);
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        t = not_null(d_3);
        {
          ATerm e_0 (ATerm t)
          {
            t = term_g_9;
            return(t);
          }
          ATerm l_0 (ATerm t)
          {
            ATerm i_3 = NULL,k_3 = NULL;
            ATerm k_9;
            k_9 = t;
            {
              ATerm j_3 = NULL;
              ATerm t_3 (ATerm t)
              {
                t = not_null(j_3);
                if(((i_3 != NULL) && (i_3 != t)))
                  _fail(t);
                else
                  i_3 = t;
                t = not_null(j_3);
                return(t);
              }
              t = Fst_0_0(t);
              if(((j_3 != NULL) && (j_3 != t)))
                _fail(t);
              else
                j_3 = t;
              t = t_3(t);
            }
            t = k_9;
            {
              ATerm l_3 = NULL;
              ATerm u_3 (ATerm t)
              {
                t = not_null(l_3);
                if(((k_3 != NULL) && (k_3 != t)))
                  _fail(t);
                else
                  k_3 = t;
                t = not_null(l_3);
                return(t);
              }
              t = Snd_0_0(t);
              if(((l_3 != NULL) && (l_3 != t)))
                _fail(t);
              else
                l_3 = t;
              t = u_3(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_3)), not_null(i_3)));
            }
            return(t);
          }
          t = foldr_2_0(e_0, l_0, t);
          if(((m_3 != NULL) && (m_3 != t)))
            _fail(t);
          else
            m_3 = t;
          t = v_3(t);
        }
        return(t);
      }
      t = not_null(b_3);
      {
        ATerm m_0 (ATerm t)
        {
          ATerm f_3 = NULL;
          ATerm g_3 = NULL;
          ATerm r_3 (ATerm t)
          {
            t = not_null(g_3);
            if(((f_3 != NULL) && (f_3 != t)))
              _fail(t);
            else
              f_3 = t;
            t = not_null(g_3);
            return(t);
          }
          t = new_0_0(t);
          if(((g_3 != NULL) && (g_3 != t)))
            _fail(t);
          else
            g_3 = t;
          t = r_3(t);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_3));
          return(t);
        }
        t = map_1_0(m_0, t);
        if(((h_3 != NULL) && (h_3 != t)))
          _fail(t);
        else
          h_3 = t;
        t = s_3(t);
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, term_m_9, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, term_g_10), (ATerm) ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_3)), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_3)))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, not_null(a_3), not_null(e_3)), term_g_10), term_h_10));
    }
    return(t);
  }
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = not_null(x_2);
  if(match_cons(t, sym_Prim_2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      t = q_3(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
  ATerm e_4 (ATerm t)
  {
    ATerm d_4 = NULL;
    t = not_null(b_4);
    if(((d_4 != NULL) && (d_4 != t)))
      _fail(t);
    else
      d_4 = t;
    t = not_null(c_4);
    if(((d_4 != NULL) && (d_4 != t)))
      _fail(t);
    else
      d_4 = t;
    t = not_null(a_4);
    return(t);
  }
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  t = not_null(a_4);
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
      t = e_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  ATerm p_4 (ATerm t)
  {
    ATerm l_4 = NULL,m_4 = NULL;
    t = not_null(j_4);
    if(((m_4 != NULL) && (m_4 != t)))
      _fail(t);
    else
      m_4 = t;
    t = not_null(k_4);
    if(((l_4 != NULL) && (l_4 != t)))
      _fail(t);
    else
      l_4 = t;
    t = not_null(i_4);
    t = i_86(t);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm n_4 = NULL;
        ATerm q_4 (ATerm t)
        {
          ATerm o_4 = NULL;
          t = not_null(n_4);
          if(((o_4 != NULL) && (o_4 != t)))
            _fail(t);
          else
            o_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), not_null(o_4));
          t = h_86(t);
          return(t);
        }
        if(((n_4 != NULL) && (n_4 != t)))
          _fail(t);
        else
          n_4 = t;
        t = q_4(t);
        return(t);
      }
      t = fetch_1_0(n_0, t);
    }
    t = not_null(l_4);
    return(t);
  }
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  t = not_null(i_4);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_4 = ATgetFirst((ATermList) t);
      k_4 = (ATerm) ATgetNext((ATermList) t);
      t = p_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  ATerm y_4 (ATerm t)
  {
    ATerm w_4 = NULL,x_4 = NULL;
    t = not_null(u_4);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    t = not_null(v_4);
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    t = not_null(x_4);
    {
      ATerm z_4 (ATerm t)
      {
        ATerm o_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(w_4);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = o_10;
            {
              ATerm t_10 = t;
              int u_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(w_4);
                    return(t);
                  }
                  t = HdMember_p__2_0(d_86, o_0, t);
                  t = z_4(t);
                  ;
                  LocalPopChoice(u_10);
                }
              else
                {
                  t = t_10;
                  t = Cons_2_0(_id, z_4, t);
                }
            }
          }
        return(t);
      }
      t = z_4(t);
    }
    return(t);
  }
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  t = not_null(t_4);
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
      t = y_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = d_88(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = v_10;
      {
        ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
        ATerm n_5 (ATerm t)
        {
          ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL;
          t = not_null(f_5);
          if(((h_5 != NULL) && (h_5 != t)))
            _fail(t);
          else
            h_5 = t;
          t = not_null(g_5);
          if(((i_5 != NULL) && (i_5 != t)))
            _fail(t);
          else
            i_5 = t;
          t = not_null(e_5);
          {
            ATerm h_11;
            h_11 = t;
            {
              ATerm k_5 = NULL;
              ATerm o_5 (ATerm t)
              {
                t = not_null(k_5);
                if(((j_5 != NULL) && (j_5 != t)))
                  _fail(t);
                else
                  j_5 = t;
                t = not_null(k_5);
                return(t);
              }
              t = not_null(h_5);
              t = f_88(t);
              if(((k_5 != NULL) && (k_5 != t)))
                _fail(t);
              else
                k_5 = t;
              t = o_5(t);
            }
            t = h_11;
            {
              ATerm m_5 = NULL;
              ATerm p_5 (ATerm t)
              {
                t = not_null(m_5);
                if(((l_5 != NULL) && (l_5 != t)))
                  _fail(t);
                else
                  l_5 = t;
                t = not_null(m_5);
                return(t);
              }
              t = not_null(i_5);
              t = foldr_3_0(d_88, e_88, f_88, t);
              if(((m_5 != NULL) && (m_5 != t)))
                _fail(t);
              else
                m_5 = t;
              t = p_5(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(l_5));
              t = e_88(t);
            }
          }
          return(t);
        }
        if(((e_5 != NULL) && (e_5 != t)))
          _fail(t);
        else
          e_5 = t;
        t = not_null(e_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            g_5 = (ATerm) ATgetNext((ATermList) t);
            t = n_5(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm t)
{
  ATerm u_5 = NULL;
  ATerm c_6 (ATerm t)
  {
    ATerm v_5 = NULL,w_5 = NULL;
    t = not_null(u_5);
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    t = not_null(u_5);
    {
      ATerm x_5 = NULL;
      ATerm d_6 (ATerm t)
      {
        ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
        ATerm e_6 (ATerm t)
        {
          t = not_null(b_6);
          if(((w_5 != NULL) && (w_5 != t)))
            _fail(t);
          else
            w_5 = t;
          t = not_null(z_5);
          return(t);
        }
        t = not_null(x_5);
        if(((y_5 != NULL) && (y_5 != t)))
          _fail(t);
        else
          y_5 = t;
        t = not_null(x_5);
        t = SSL_explode_term(not_null(y_5));
        if(((z_5 != NULL) && (z_5 != t)))
          _fail(t);
        else
          z_5 = t;
        t = not_null(z_5);
        if(match_cons(t, sym__2))
          {
            a_6 = ATgetArgument(t, 0);
            b_6 = ATgetArgument(t, 1);
            t = e_6(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(v_5);
      if(((x_5 != NULL) && (x_5 != t)))
        _fail(t);
      else
        x_5 = t;
      t = d_6(t);
      t = not_null(w_5);
      t = foldr_3_0(w_91, x_91, y_91, t);
    }
    return(t);
  }
  if(((u_5 != NULL) && (u_5 != t)))
    _fail(t);
  else
    u_5 = t;
  t = c_6(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6 = NULL;
      ATerm h_6 = NULL;
      ATerm i_6 (ATerm t)
      {
        t = not_null(h_6);
        if(((g_6 != NULL) && (g_6 != t)))
          _fail(t);
        else
          g_6 = t;
        t = not_null(h_6);
        return(t);
      }
      t = z_86(t);
      if(((h_6 != NULL) && (h_6 != t)))
        _fail(t);
      else
        h_6 = t;
      t = i_6(t);
      t = (ATerm) ATinsert(ATempty, not_null(g_6));
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm p_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm q_0 (ATerm t)
        {
          t = collect_om_1_0(z_86, t);
          return(t);
        }
        t = crush_3_0(p_0, union_0_0, q_0, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  t = collect_om_1_0(a_87, t);
  return(t);
}
ATerm get_primitives_0_0 (ATerm t)
{
  t = collect_1_0(EvalPrimitive_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm c_60 (ATerm), ATerm d_60 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  ATerm d_7 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL;
    ATerm f_7 (ATerm t)
    {
      ATerm y_6 = NULL,z_6 = NULL;
      ATerm g_7 (ATerm t)
      {
        ATerm a_7 = NULL,b_7 = NULL;
        t = not_null(z_6);
        if(((a_7 != NULL) && (a_7 != t)))
          _fail(t);
        else
          a_7 = t;
        t = not_null(z_6);
        {
          ATerm c_7 = NULL;
          ATerm h_7 (ATerm t)
          {
            t = not_null(c_7);
            if(((b_7 != NULL) && (b_7 != t)))
              _fail(t);
            else
              b_7 = t;
            t = not_null(c_7);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_6), not_null(a_7)), not_null(v_6));
          if(((c_7 != NULL) && (c_7 != t)))
            _fail(t);
          else
            c_7 = t;
          t = h_7(t);
          t = not_null(b_7);
        }
        return(t);
      }
      t = not_null(x_6);
      if(((y_6 != NULL) && (y_6 != t)))
        _fail(t);
      else
        y_6 = t;
      t = not_null(u_6);
      t = d_60(t);
      if(((z_6 != NULL) && (z_6 != t)))
        _fail(t);
      else
        z_6 = t;
      t = g_7(t);
      return(t);
    }
    t = not_null(p_6);
    if(((s_6 != NULL) && (s_6 != t)))
      _fail(t);
    else
      s_6 = t;
    t = not_null(q_6);
    if(((t_6 != NULL) && (t_6 != t)))
      _fail(t);
    else
      t_6 = t;
    t = not_null(r_6);
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    t = not_null(p_6);
    {
      ATerm w_6 = NULL;
      ATerm e_7 (ATerm t)
      {
        t = not_null(w_6);
        if(((v_6 != NULL) && (v_6 != t)))
          _fail(t);
        else
          v_6 = t;
        t = not_null(w_6);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_6));
      if(((w_6 != NULL) && (w_6 != t)))
        _fail(t);
      else
        w_6 = t;
      t = e_7(t);
      t = not_null(t_6);
      t = c_60(t);
      if(((x_6 != NULL) && (x_6 != t)))
        _fail(t);
      else
        x_6 = t;
      t = f_7(t);
    }
    return(t);
  }
  if(((p_6 != NULL) && (p_6 != t)))
    _fail(t);
  else
    p_6 = t;
  t = not_null(p_6);
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
      t = d_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_11;
  u_11 = t;
  {
    ATerm j_7 = NULL;
    ATerm k_7 = NULL;
    ATerm l_7 (ATerm t)
    {
      t = not_null(k_7);
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      t = not_null(k_7);
      return(t);
    }
    t = term_y_11;
    t = whoami_0_0(t);
    if(((k_7 != NULL) && (k_7 != t)))
      _fail(t);
    else
      k_7 = t;
    t = l_7(t);
    t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), not_null(j_7)), term_a_12));
    t = printnl_0_0(t);
    t = term_m_12;
    t = exit_0_0(t);
  }
  t = u_11;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  ATerm t_7 (ATerm t)
  {
    ATerm r_7 = NULL,s_7 = NULL;
    t = not_null(p_7);
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    t = not_null(q_7);
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    t = not_null(o_7);
    {
      ATerm n_12;
      n_12 = t;
      t = SSL_printnl(not_null(r_7), not_null(s_7));
      t = n_12;
    }
    return(t);
  }
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(o_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
      t = t_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm x_7 (ATerm t)
  {
    ATerm w_7 = NULL;
    t = not_null(v_7);
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    t = not_null(v_7);
    t = SSL_implode_string(not_null(w_7));
    return(t);
  }
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = x_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
        ATerm g_8 (ATerm t)
        {
          ATerm d_8 = NULL,e_8 = NULL;
          t = not_null(b_8);
          if(((d_8 != NULL) && (d_8 != t)))
            _fail(t);
          else
            d_8 = t;
          t = not_null(c_8);
          if(((e_8 != NULL) && (e_8 != t)))
            _fail(t);
          else
            e_8 = t;
          t = not_null(d_8);
          {
            ATerm r_0 (ATerm t)
            {
              t = not_null(e_8);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(r_0, t);
          }
          return(t);
        }
        if(((a_8 != NULL) && (a_8 != t)))
          _fail(t);
        else
          a_8 = t;
        t = not_null(a_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_8 = ATgetFirst((ATermList) t);
            c_8 = (ATerm) ATgetNext((ATermList) t);
            t = g_8(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm n_8 = NULL,o_8 = NULL;
    t = not_null(m_8);
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = not_null(m_8);
    {
      ATerm p_8 = NULL;
      ATerm v_8 (ATerm t)
      {
        ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
        ATerm w_8 (ATerm t)
        {
          t = not_null(t_8);
          if(((o_8 != NULL) && (o_8 != t)))
            _fail(t);
          else
            o_8 = t;
          t = not_null(r_8);
          return(t);
        }
        t = not_null(p_8);
        if(((q_8 != NULL) && (q_8 != t)))
          _fail(t);
        else
          q_8 = t;
        t = not_null(p_8);
        t = SSL_explode_term(not_null(q_8));
        if(((r_8 != NULL) && (r_8 != t)))
          _fail(t);
        else
          r_8 = t;
        t = not_null(r_8);
        if(match_cons(t, sym__2))
          {
            s_8 = ATgetArgument(t, 0);
            t_8 = ATgetArgument(t, 1);
            t = not_null(s_8);
            if(match_string(t, ""))
              {
                t = w_8(t);
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
      t = not_null(n_8);
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      t = v_8(t);
      t = not_null(o_8);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = u_8(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_8, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Nil_0_0(t);
        t = q_82(t);
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  ATerm f_9 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL;
    t = not_null(b_9);
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    t = not_null(c_9);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(e_9);
    {
      ATerm s_0 (ATerm t)
      {
        t = not_null(d_9);
        return(t);
      }
      t = at_end_1_0(s_0, t);
    }
    return(t);
  }
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  t = not_null(a_9);
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
      t = f_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm h_9 = NULL;
  ATerm j_9 (ATerm t)
  {
    ATerm i_9 = NULL;
    t = not_null(h_9);
    if(((i_9 != NULL) && (i_9 != t)))
      _fail(t);
    else
      i_9 = t;
    t = not_null(h_9);
    t = SSL_explode_string(not_null(i_9));
    return(t);
  }
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = j_9(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(t_0, t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = p_13;
            {
              ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
              ATerm b_10 (ATerm t)
              {
                ATerm t_9 = NULL;
                t = not_null(r_9);
                if(((t_9 != NULL) && (t_9 != t)))
                  _fail(t);
                else
                  t_9 = t;
                t = not_null(t_9);
                return(t);
              }
              ATerm c_10 (ATerm t)
              {
                ATerm u_9 = NULL;
                t = not_null(r_9);
                if(((u_9 != NULL) && (u_9 != t)))
                  _fail(t);
                else
                  u_9 = t;
                t = not_null(u_9);
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      {
                        ATerm u_0 (ATerm t)
                        {
                          t = term_f_14;
                          return(t);
                        }
                        t = debug_1_0(u_0, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm d_10 (ATerm t)
              {
                ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL;
                t = not_null(r_9);
                if(((v_9 != NULL) && (v_9 != t)))
                  _fail(t);
                else
                  v_9 = t;
                t = not_null(s_9);
                if(((w_9 != NULL) && (w_9 != t)))
                  _fail(t);
                else
                  w_9 = t;
                t = not_null(q_9);
                {
                  ATerm g_14;
                  g_14 = t;
                  {
                    ATerm y_9 = NULL;
                    ATerm e_10 (ATerm t)
                    {
                      t = not_null(y_9);
                      if(((x_9 != NULL) && (x_9 != t)))
                        _fail(t);
                      else
                        x_9 = t;
                      t = not_null(y_9);
                      return(t);
                    }
                    t = not_null(v_9);
                    t = eval_config_0_0(t);
                    if(((y_9 != NULL) && (y_9 != t)))
                      _fail(t);
                    else
                      y_9 = t;
                    t = e_10(t);
                  }
                  t = g_14;
                  {
                    ATerm a_10 = NULL;
                    ATerm f_10 (ATerm t)
                    {
                      t = not_null(a_10);
                      if(((z_9 != NULL) && (z_9 != t)))
                        _fail(t);
                      else
                        z_9 = t;
                      t = not_null(a_10);
                      return(t);
                    }
                    t = not_null(w_9);
                    t = eval_config_0_0(t);
                    if(((a_10 != NULL) && (a_10 != t)))
                      _fail(t);
                    else
                      a_10 = t;
                    t = f_10(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(z_9));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((q_9 != NULL) && (q_9 != t)))
                _fail(t);
              else
                q_9 = t;
              t = not_null(q_9);
              if(match_cons(t, sym_Path_1))
                {
                  r_9 = ATgetArgument(t, 0);
                  t = b_10(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_9 = ATgetArgument(t, 0);
                      t = c_10(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_9 = ATgetArgument(t, 0);
                          s_9 = ATgetArgument(t, 1);
                          t = d_10(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm m_10 (ATerm t)
  {
    ATerm j_10 = NULL;
    t = not_null(i_10);
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(j_10));
    t = table_get_0_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm l_14;
          l_14 = t;
          {
            ATerm k_10 = NULL;
            ATerm l_10 = NULL;
            ATerm n_10 (ATerm t)
            {
              t = not_null(l_10);
              if(((k_10 != NULL) && (k_10 != t)))
                _fail(t);
              else
                k_10 = t;
              t = not_null(l_10);
              return(t);
            }
            if(((l_10 != NULL) && (l_10 != t)))
              _fail(t);
            else
              l_10 = t;
            t = n_10(t);
            t = (ATerm) ATmakeAppl(sym__3, term_k_14, not_null(j_10), not_null(k_10));
            t = table_put_0_0(t);
          }
          t = l_14;
        }
        return(t);
      }
      t = try_1_0(v_0, t);
    }
    return(t);
  }
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = m_10(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm q_14;
    q_14 = t;
    {
      ATerm p_10 = NULL;
      ATerm q_10 = NULL;
      ATerm r_10 (ATerm t)
      {
        t = not_null(q_10);
        if(((p_10 != NULL) && (p_10 != t)))
          _fail(t);
        else
          p_10 = t;
        t = not_null(q_10);
        return(t);
      }
      t = term_r_14;
      t = get_config_0_0(t);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = r_10(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), term_y_14);
      t = geq_0_0(t);
    }
    t = q_14;
    t = q_95(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  ATerm e_11 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
    t = not_null(x_10);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = not_null(z_10);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = not_null(w_10);
    t = SSL_fputc(not_null(a_11), not_null(b_11));
    {
      ATerm d_11 = NULL;
      ATerm f_11 (ATerm t)
      {
        t = not_null(d_11);
        if(((c_11 != NULL) && (c_11 != t)))
          _fail(t);
        else
          c_11 = t;
        t = not_null(d_11);
        return(t);
      }
      if(((d_11 != NULL) && (d_11 != t)))
        _fail(t);
      else
        d_11 = t;
      t = f_11(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_11));
    }
    return(t);
  }
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = not_null(w_10);
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      t = not_null(y_10);
      if(match_cons(t, sym_Stream_1))
        {
          z_10 = ATgetArgument(t, 0);
          t = e_11(t);
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
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  ATerm s_11 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
    t = not_null(m_11);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = not_null(n_11);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = not_null(k_11);
    t = SSL_write_term_to_stream_text(not_null(o_11), not_null(p_11));
    {
      ATerm r_11 = NULL;
      ATerm t_11 (ATerm t)
      {
        t = not_null(r_11);
        if(((q_11 != NULL) && (q_11 != t)))
          _fail(t);
        else
          q_11 = t;
        t = not_null(r_11);
        return(t);
      }
      if(((r_11 != NULL) && (r_11 != t)))
        _fail(t);
      else
        r_11 = t;
      t = t_11(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_11));
    }
    return(t);
  }
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = not_null(k_11);
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      t = not_null(l_11);
      if(match_cons(t, sym_Stream_1))
        {
          m_11 = ATgetArgument(t, 0);
          t = s_11(t);
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
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm v_11 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm w_11 = NULL;
      ATerm x_11 (ATerm t)
      {
        t = not_null(w_11);
        if(((v_11 != NULL) && (v_11 != t)))
          _fail(t);
        else
          v_11 = t;
        t = not_null(w_11);
        return(t);
      }
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      t = x_11(t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(v_11));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(x_0, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  ATerm k_12 (ATerm t)
  {
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
    t = not_null(e_12);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    t = not_null(f_12);
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    t = not_null(c_12);
    t = SSL_write_term_to_stream_baf(not_null(g_12), not_null(h_12));
    {
      ATerm j_12 = NULL;
      ATerm l_12 (ATerm t)
      {
        t = not_null(j_12);
        if(((i_12 != NULL) && (i_12 != t)))
          _fail(t);
        else
          i_12 = t;
        t = not_null(j_12);
        return(t);
      }
      if(((j_12 != NULL) && (j_12 != t)))
        _fail(t);
      else
        j_12 = t;
      t = l_12(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_12));
    }
    return(t);
  }
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = not_null(c_12);
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
      t = not_null(d_12);
      if(match_cons(t, sym_Stream_1))
        {
          e_12 = ATgetArgument(t, 0);
          t = k_12(t);
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
ATerm WriteToFile_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  ATerm z_12 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL;
    t = not_null(r_12);
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    t = not_null(s_12);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = not_null(t_12);
    {
      ATerm w_12 = NULL;
      ATerm a_13 (ATerm t)
      {
        t = not_null(w_12);
        if(((v_12 != NULL) && (v_12 != t)))
          _fail(t);
        else
          v_12 = t;
        t = not_null(w_12);
        return(t);
      }
      if(((w_12 != NULL) && (w_12 != t)))
        _fail(t);
      else
        w_12 = t;
      t = a_13(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), term_a_15);
      t = open_stream_0_0(t);
      {
        ATerm y_12 = NULL;
        ATerm b_13 (ATerm t)
        {
          t = not_null(y_12);
          if(((x_12 != NULL) && (x_12 != t)))
            _fail(t);
          else
            x_12 = t;
          t = not_null(y_12);
          return(t);
        }
        if(((y_12 != NULL) && (y_12 != t)))
          _fail(t);
        else
          y_12 = t;
        t = b_13(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_12), not_null(u_12));
        t = m_94(t);
        t = fclose_0_0(t);
        t = not_null(u_12);
      }
    }
    return(t);
  }
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = not_null(q_12);
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
      t = z_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm o_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_13 = NULL,i_13 = NULL;
            ATerm l_13 (ATerm t)
            {
              t = not_null(i_13);
              if(((g_13 != NULL) && (g_13 != t)))
                _fail(t);
              else
                g_13 = t;
              t = not_null(h_13);
              return(t);
            }
            if(((h_13 != NULL) && (h_13 != t)))
              _fail(t);
            else
              h_13 = t;
            t = not_null(h_13);
            if(match_cons(t, sym_Output_1))
              {
                i_13 = ATgetArgument(t, 0);
                t = l_13(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(z_0, t);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = o_15;
          {
            ATerm j_13 = NULL;
            ATerm m_13 (ATerm t)
            {
              t = not_null(j_13);
              if(((g_13 != NULL) && (g_13 != t)))
                _fail(t);
              else
                g_13 = t;
              t = not_null(j_13);
              return(t);
            }
            t = term_w_15;
            if(((j_13 != NULL) && (j_13 != t)))
              _fail(t);
            else
              j_13 = t;
            t = m_13(t);
          }
        }
      return(t);
    }
    t = _2_0(y_0, _id, t);
  }
  t = k_15;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(g_13);
        return(t);
      }
      t = split_2_0(b_1, _id, t);
      return(t);
    }
    t = _2_0(_id, a_1, t);
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm k_13 = NULL;
              if(((k_13 != NULL) && (k_13 != t)))
                _fail(t);
              else
                k_13 = t;
              t = not_null(k_13);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(k_13);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(d_1, t);
            return(t);
          }
          t = _2_0(c_1, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = _2_0(_id, WriteToTextFile_0_0, t);
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  ATerm y_13 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL;
    t = not_null(t_13);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = not_null(u_13);
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_13)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_13))), not_null(w_13));
    return(t);
  }
  ATerm c_16;
  c_16 = t;
  t = dtime_0_0(t);
  t = c_16;
  t = o_97(t);
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm r_13 = NULL;
      ATerm x_13 (ATerm t)
      {
        t = not_null(r_13);
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        t = not_null(r_13);
        return(t);
      }
      t = dtime_0_0(t);
      if(((r_13 != NULL) && (r_13 != t)))
        _fail(t);
      else
        r_13 = t;
      t = x_13(t);
    }
    t = d_16;
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(s_13);
    if(match_cons(t, sym__2))
      {
        t_13 = ATgetArgument(t, 0);
        u_13 = ATgetArgument(t, 1);
        t = y_13(t);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  ATerm i_14 (ATerm t)
  {
    ATerm e_14 = NULL;
    t = not_null(c_14);
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    t = not_null(d_14);
    t = SSL_fclose(not_null(e_14));
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    ATerm h_14 = NULL;
    t = not_null(d_14);
    if(((h_14 != NULL) && (h_14 != t)))
      _fail(t);
    else
      h_14 = t;
    t = not_null(d_14);
    t = SSL_fclose(not_null(h_14));
    return(t);
  }
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = not_null(d_14);
  if(match_cons(t, sym_Stream_1))
    {
      c_14 = ATgetArgument(t, 0);
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_14(t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = j_14(t);
          }
      }
    }
  else
    {
      t = j_14(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  ATerm p_14 (ATerm t)
  {
    ATerm o_14 = NULL;
    t = not_null(n_14);
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = not_null(m_14);
    t = SSL_read_term_from_stream(not_null(o_14));
    return(t);
  }
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = not_null(m_14);
  if(match_cons(t, sym_Stream_1))
    {
      n_14 = ATgetArgument(t, 0);
      t = p_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm k_16;
  k_16 = t;
  {
    ATerm s_14 = NULL,u_14 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm t_14 = NULL;
      ATerm w_14 (ATerm t)
      {
        t = not_null(t_14);
        if(((s_14 != NULL) && (s_14 != t)))
          _fail(t);
        else
          s_14 = t;
        t = not_null(t_14);
        return(t);
      }
      t = y_93(t);
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = w_14(t);
    }
    t = l_16;
    {
      ATerm v_14 = NULL;
      ATerm x_14 (ATerm t)
      {
        t = not_null(v_14);
        if(((u_14 != NULL) && (u_14 != t)))
          _fail(t);
        else
          u_14 = t;
        t = not_null(v_14);
        return(t);
      }
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = x_14(t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(s_14)));
      t = printnl_0_0(t);
    }
  }
  t = k_16;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  ATerm i_15 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
    t = not_null(c_15);
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = not_null(d_15);
    if(((f_15 != NULL) && (f_15 != t)))
      _fail(t);
    else
      f_15 = t;
    t = not_null(b_15);
    t = SSL_fopen(not_null(e_15), not_null(f_15));
    {
      ATerm h_15 = NULL;
      ATerm j_15 (ATerm t)
      {
        t = not_null(h_15);
        if(((g_15 != NULL) && (g_15 != t)))
          _fail(t);
        else
          g_15 = t;
        t = not_null(h_15);
        return(t);
      }
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = j_15(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_15));
    }
    return(t);
  }
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(b_15);
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      t = i_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm n_15 (ATerm t)
  {
    ATerm m_15 = NULL;
    t = not_null(l_15);
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = not_null(l_15);
    t = SSL_is_string(not_null(m_15));
    return(t);
  }
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = n_15(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_15 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm q_15 = NULL;
    ATerm r_15 (ATerm t)
    {
      t = not_null(q_15);
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = not_null(q_15);
      return(t);
    }
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    t = r_15(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_15));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm u_15 = NULL;
    ATerm v_15 (ATerm t)
    {
      t = not_null(u_15);
      if(((t_15 != NULL) && (t_15 != t)))
        _fail(t);
      else
        t_15 = t;
      t = not_null(u_15);
      return(t);
    }
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = v_15(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_15));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm y_15 = NULL;
    ATerm z_15 (ATerm t)
    {
      t = not_null(y_15);
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      t = not_null(y_15);
      return(t);
    }
    if(((y_15 != NULL) && (y_15 != t)))
      _fail(t);
    else
      y_15 = t;
    t = z_15(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_15));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm e_16 = NULL;
  ATerm f_16 (ATerm t)
  {
    t = not_null(e_16);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm g_16 (ATerm t)
  {
    t = not_null(e_16);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm h_16 (ATerm t)
  {
    t = not_null(e_16);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  t = not_null(e_16);
  if(match_cons(t, sym_stderr_0))
    {
      t = f_16(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_16(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = h_16(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm o_16 = NULL;
  ATerm z_16 (ATerm t)
  {
    ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
    t = not_null(o_16);
    if(((p_16 != NULL) && (p_16 != t)))
      _fail(t);
    else
      p_16 = t;
    t = not_null(o_16);
    {
      ATerm s_16 = NULL;
      ATerm a_17 (ATerm t)
      {
        ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
        ATerm b_17 (ATerm t)
        {
          t = not_null(x_16);
          if(((r_16 != NULL) && (r_16 != t)))
            _fail(t);
          else
            r_16 = t;
          t = not_null(y_16);
          if(((q_16 != NULL) && (q_16 != t)))
            _fail(t);
          else
            q_16 = t;
          t = not_null(u_16);
          return(t);
        }
        t = not_null(s_16);
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
        t = not_null(s_16);
        t = SSL_explode_term(not_null(t_16));
        if(((u_16 != NULL) && (u_16 != t)))
          _fail(t);
        else
          u_16 = t;
        t = not_null(u_16);
        if(match_cons(t, sym__2))
          {
            v_16 = ATgetArgument(t, 0);
            w_16 = ATgetArgument(t, 1);
            t = not_null(v_16);
            if(match_string(t, ""))
              {
                t = not_null(w_16);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_16 = ATgetFirst((ATermList) t);
                    y_16 = (ATerm) ATgetNext((ATermList) t);
                    t = b_17(t);
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
      t = not_null(p_16);
      if(((s_16 != NULL) && (s_16 != t)))
        _fail(t);
      else
        s_16 = t;
      t = a_17(t);
      t = not_null(r_16);
    }
    return(t);
  }
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = z_16(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  ATerm m_17 (ATerm t)
  {
    t = not_null(g_17);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm j_17 = NULL,k_17 = NULL;
                  ATerm n_17 (ATerm t)
                  {
                    ATerm l_17 = NULL;
                    t = not_null(k_17);
                    if(((l_17 != NULL) && (l_17 != t)))
                      _fail(t);
                    else
                      l_17 = t;
                    t = not_null(l_17);
                    return(t);
                  }
                  if(((j_17 != NULL) && (j_17 != t)))
                    _fail(t);
                  else
                    j_17 = t;
                  t = not_null(j_17);
                  if(match_cons(t, sym_Path_1))
                    {
                      k_17 = ATgetArgument(t, 0);
                      t = n_17(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(e_1, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((g_17 != NULL) && (g_17 != t)))
    _fail(t);
  else
    g_17 = t;
  t = not_null(g_17);
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      t = m_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL;
      ATerm r_17 = NULL;
      ATerm u_17 (ATerm t)
      {
        t = not_null(r_17);
        if(((q_17 != NULL) && (q_17 != t)))
          _fail(t);
        else
          q_17 = t;
        t = not_null(r_17);
        return(t);
      }
      if(((r_17 != NULL) && (r_17 != t)))
        _fail(t);
      else
        r_17 = t;
      t = u_17(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), term_o_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_p_17;
          return(t);
        }
        t = debug_1_0(f_1, t);
        _fail(t);
      }
    }
  {
    ATerm w_17;
    w_17 = t;
    {
      ATerm t_17 = NULL;
      ATerm v_17 (ATerm t)
      {
        t = not_null(t_17);
        if(((s_17 != NULL) && (s_17 != t)))
          _fail(t);
        else
          s_17 = t;
        t = not_null(t_17);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((t_17 != NULL) && (t_17 != t)))
        _fail(t);
      else
        t_17 = t;
      t = v_17(t);
    }
    t = w_17;
    t = fclose_0_0(t);
    t = not_null(s_17);
  }
  return(t);
}
ATerm split_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,a_18 = NULL;
  ATerm x_17;
  x_17 = t;
  {
    ATerm z_17 = NULL;
    ATerm c_18 (ATerm t)
    {
      t = not_null(z_17);
      if(((y_17 != NULL) && (y_17 != t)))
        _fail(t);
      else
        y_17 = t;
      t = not_null(z_17);
      return(t);
    }
    t = q_89(t);
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = c_18(t);
  }
  t = x_17;
  {
    ATerm b_18 = NULL;
    ATerm d_18 (ATerm t)
    {
      t = not_null(b_18);
      if(((a_18 != NULL) && (a_18 != t)))
        _fail(t);
      else
        a_18 = t;
      t = not_null(b_18);
      return(t);
    }
    t = r_89(t);
    if(((b_18 != NULL) && (b_18 != t)))
      _fail(t);
    else
      b_18 = t;
    t = d_18(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(a_18));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  ATerm e_18;
  e_18 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 (ATerm t)
        {
          ATerm i_18 = NULL,j_18 = NULL;
          ATerm l_18 (ATerm t)
          {
            t = not_null(j_18);
            if(((h_18 != NULL) && (h_18 != t)))
              _fail(t);
            else
              h_18 = t;
            t = not_null(i_18);
            return(t);
          }
          if(((i_18 != NULL) && (i_18 != t)))
            _fail(t);
          else
            i_18 = t;
          t = not_null(i_18);
          if(match_cons(t, sym_Input_1))
            {
              j_18 = ATgetArgument(t, 0);
              t = l_18(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(g_1, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm k_18 = NULL;
          ATerm m_18 (ATerm t)
          {
            t = not_null(k_18);
            if(((h_18 != NULL) && (h_18 != t)))
              _fail(t);
            else
              h_18 = t;
            t = not_null(k_18);
            return(t);
          }
          t = term_n_18;
          if(((k_18 != NULL) && (k_18 != t)))
            _fail(t);
          else
            k_18 = t;
          t = m_18(t);
        }
      }
  }
  t = e_18;
  {
    ATerm h_1 (ATerm t)
    {
      t = not_null(h_18);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, h_1, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm p_18 = NULL;
    if(((p_18 != NULL) && (p_18 != t)))
      _fail(t);
    else
      p_18 = t;
    t = not_null(p_18);
    if(match_string(t, "-k"))
      {
        t = not_null(p_18);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(p_18);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm o_18;
    o_18 = t;
    {
      ATerm q_18 = NULL;
      ATerm r_18 = NULL;
      ATerm s_18 (ATerm t)
      {
        t = not_null(r_18);
        if(((q_18 != NULL) && (q_18 != t)))
          _fail(t);
        else
          q_18 = t;
        t = not_null(r_18);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((r_18 != NULL) && (r_18 != t)))
        _fail(t);
      else
        r_18 = t;
      t = s_18(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(q_18));
      t = set_config_0_0(t);
    }
    t = o_18;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  t = ArgOption_3_0(i_1, j_1, k_1, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm w_18 (ATerm t)
  {
    ATerm v_18 = NULL;
    t = not_null(u_18);
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(u_18);
    t = SSL_string_to_int(not_null(v_18));
    return(t);
  }
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  t = w_18(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != t)))
          _fail(t);
        else
          c_19 = t;
        t = not_null(c_19);
        if(match_string(t, "-S"))
          {
            t = not_null(c_19);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(c_19);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_b_19;
        t = set_config_0_0(t);
        t = term_l_19;
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_m_19;
        return(t);
      }
      t = Option_3_0(l_1, m_1, n_1, t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm n_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm d_19 = NULL;
              if(((d_19 != NULL) && (d_19 != t)))
                _fail(t);
              else
                d_19 = t;
              t = not_null(d_19);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(d_19);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm g_19 = NULL;
              ATerm x_19;
              x_19 = t;
              {
                ATerm e_19 = NULL;
                ATerm f_19 = NULL;
                ATerm j_19 (ATerm t)
                {
                  t = not_null(f_19);
                  if(((e_19 != NULL) && (e_19 != t)))
                    _fail(t);
                  else
                    e_19 = t;
                  t = not_null(f_19);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((f_19 != NULL) && (f_19 != t)))
                  _fail(t);
                else
                  f_19 = t;
                t = j_19(t);
                t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(e_19));
                t = set_config_0_0(t);
              }
              t = x_19;
              {
                ATerm h_19 = NULL;
                ATerm k_19 (ATerm t)
                {
                  t = not_null(h_19);
                  if(((g_19 != NULL) && (g_19 != t)))
                    _fail(t);
                  else
                    g_19 = t;
                  t = not_null(h_19);
                  return(t);
                }
                if(((h_19 != NULL) && (h_19 != t)))
                  _fail(t);
                else
                  h_19 = t;
                t = k_19(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_19));
              }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_y_19;
              return(t);
            }
            t = ArgOption_3_0(o_1, p_1, q_1, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = n_19;
            {
              ATerm r_1 (ATerm t)
              {
                ATerm i_19 = NULL;
                if(((i_19 != NULL) && (i_19 != t)))
                  _fail(t);
                else
                  i_19 = t;
                t = not_null(i_19);
                if(match_string(t, "-s"))
                  {
                    t = not_null(i_19);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm s_1 (ATerm t)
              {
                t = term_a_20;
                t = set_config_0_0(t);
                t = term_b_20;
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = term_p_20;
                return(t);
              }
              t = Option_3_0(r_1, s_1, t_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm o_19 = NULL;
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = not_null(o_19);
    if(match_string(t, "-o"))
      {
        t = not_null(o_19);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(o_19);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm r_19 = NULL;
    ATerm z_20;
    z_20 = t;
    {
      ATerm p_19 = NULL;
      ATerm q_19 = NULL;
      ATerm t_19 (ATerm t)
      {
        t = not_null(q_19);
        if(((p_19 != NULL) && (p_19 != t)))
          _fail(t);
        else
          p_19 = t;
        t = not_null(q_19);
        return(t);
      }
      if(((q_19 != NULL) && (q_19 != t)))
        _fail(t);
      else
        q_19 = t;
      t = t_19(t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(p_19));
      t = set_config_0_0(t);
    }
    t = z_20;
    {
      ATerm s_19 = NULL;
      ATerm u_19 (ATerm t)
      {
        t = not_null(s_19);
        if(((r_19 != NULL) && (r_19 != t)))
          _fail(t);
        else
          r_19 = t;
        t = not_null(s_19);
        return(t);
      }
      if(((s_19 != NULL) && (s_19 != t)))
        _fail(t);
      else
        s_19 = t;
      t = u_19(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_19));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_h_21;
    return(t);
  }
  t = ArgOption_3_0(v_1, w_1, x_1, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = i_21;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm w_19 = NULL;
          if(((w_19 != NULL) && (w_19 != t)))
            _fail(t);
          else
            w_19 = t;
          t = not_null(w_19);
          if(match_string(t, "-b"))
            {
              t = not_null(w_19);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_r_21;
          t = set_config_0_0(t);
          t = term_b_22;
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = term_c_22;
          return(t);
        }
        t = Option_3_0(o_2, p_2, q_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm m_20 (ATerm t)
  {
    t = not_null(c_20);
    t = register_usage_1_0(k_0, t);
    return(t);
  }
  ATerm n_20 (ATerm t)
  {
    ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
    t = not_null(d_20);
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    t = not_null(f_20);
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    t = not_null(g_20);
    if(((j_20 != NULL) && (j_20 != t)))
      _fail(t);
    else
      j_20 = t;
    t = not_null(c_20);
    {
      ATerm d_22;
      d_22 = t;
      t = not_null(h_20);
      t = h_0(t);
      t = d_22;
      {
        ATerm l_20 = NULL;
        ATerm o_20 (ATerm t)
        {
          t = not_null(l_20);
          if(((k_20 != NULL) && (k_20 != t)))
            _fail(t);
          else
            k_20 = t;
          t = not_null(l_20);
          return(t);
        }
        t = not_null(i_20);
        t = i_0(t);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = o_20(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(k_20));
      }
    }
    return(t);
  }
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  t = not_null(c_20);
  if(match_string(t, "register-usage-info"))
    {
      t = m_20(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_20 = ATgetFirst((ATermList) t);
          e_20 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(e_20);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_20 = ATgetFirst((ATermList) t);
              g_20 = (ATerm) ATgetNext((ATermList) t);
              t = n_20(t);
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
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm s_20 = NULL;
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(s_20);
    if(match_string(t, "-i"))
      {
        t = not_null(s_20);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(s_20);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm v_20 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm t_20 = NULL;
      ATerm u_20 = NULL;
      ATerm x_20 (ATerm t)
      {
        t = not_null(u_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(u_20);
        return(t);
      }
      if(((u_20 != NULL) && (u_20 != t)))
        _fail(t);
      else
        u_20 = t;
      t = x_20(t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(t_20));
      t = set_config_0_0(t);
    }
    t = e_22;
    {
      ATerm w_20 = NULL;
      ATerm y_20 (ATerm t)
      {
        t = not_null(w_20);
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = not_null(w_20);
        return(t);
      }
      if(((w_20 != NULL) && (w_20 != t)))
        _fail(t);
      else
        w_20 = t;
      t = y_20(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_20));
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_r_22;
    return(t);
  }
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm f_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = f_23;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm b_21 = NULL;
    ATerm c_21 (ATerm t)
    {
      t = not_null(b_21);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = not_null(b_21);
      return(t);
    }
    t = term_y_11;
    t = whoami_0_0(t);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = c_21(t);
    t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), not_null(a_21)));
    t = printnl_0_0(t);
    t = term_m_12;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  ATerm g_21 (ATerm t)
  {
    ATerm f_21 = NULL;
    t = not_null(e_21);
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = not_null(e_21);
    t = SSL_TicksToSeconds(not_null(f_21));
    return(t);
  }
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  t = g_21(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  ATerm o_21 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL;
    t = not_null(k_21);
    if(((m_21 != NULL) && (m_21 != t)))
      _fail(t);
    else
      m_21 = t;
    t = not_null(l_21);
    if(((n_21 != NULL) && (n_21 != t)))
      _fail(t);
    else
      n_21 = t;
    t = not_null(j_21);
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(m_21), not_null(n_21));
          ;
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          t = SSL_addr(not_null(m_21), not_null(n_21));
        }
    }
    return(t);
  }
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = not_null(j_21);
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      t = o_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = b_88(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = u_23;
      {
        ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
        ATerm z_21 (ATerm t)
        {
          ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
          t = not_null(t_21);
          if(((v_21 != NULL) && (v_21 != t)))
            _fail(t);
          else
            v_21 = t;
          t = not_null(u_21);
          if(((w_21 != NULL) && (w_21 != t)))
            _fail(t);
          else
            w_21 = t;
          t = not_null(s_21);
          {
            ATerm y_21 = NULL;
            ATerm a_22 (ATerm t)
            {
              t = not_null(y_21);
              if(((x_21 != NULL) && (x_21 != t)))
                _fail(t);
              else
                x_21 = t;
              t = not_null(y_21);
              return(t);
            }
            t = not_null(w_21);
            t = foldr_2_0(b_88, c_88, t);
            if(((y_21 != NULL) && (y_21 != t)))
              _fail(t);
            else
              y_21 = t;
            t = a_22(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(x_21));
            t = c_88(t);
          }
          return(t);
        }
        if(((s_21 != NULL) && (s_21 != t)))
          _fail(t);
        else
          s_21 = t;
        t = not_null(s_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_21 = ATgetFirst((ATermList) t);
            u_21 = (ATerm) ATgetNext((ATermList) t);
            t = z_21(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm f_22 = NULL;
  ATerm n_22 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL;
    t = not_null(f_22);
    if(((g_22 != NULL) && (g_22 != t)))
      _fail(t);
    else
      g_22 = t;
    t = not_null(f_22);
    {
      ATerm i_22 = NULL;
      ATerm o_22 (ATerm t)
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
        ATerm p_22 (ATerm t)
        {
          t = not_null(m_22);
          if(((h_22 != NULL) && (h_22 != t)))
            _fail(t);
          else
            h_22 = t;
          t = not_null(k_22);
          return(t);
        }
        t = not_null(i_22);
        if(((j_22 != NULL) && (j_22 != t)))
          _fail(t);
        else
          j_22 = t;
        t = not_null(i_22);
        t = SSL_explode_term(not_null(j_22));
        if(((k_22 != NULL) && (k_22 != t)))
          _fail(t);
        else
          k_22 = t;
        t = not_null(k_22);
        if(match_cons(t, sym__2))
          {
            l_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
            t = p_22(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(g_22);
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = o_22(t);
      t = not_null(h_22);
      t = foldr_2_0(u_91, v_91, t);
    }
    return(t);
  }
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  t = n_22(t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm u_2 (ATerm t)
    {
      t = term_a_19;
      return(t);
    }
    t = crush_2_0(u_2, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  ATerm x_22 (ATerm t)
  {
    ATerm v_22 = NULL,w_22 = NULL;
    t = not_null(t_22);
    if(((v_22 != NULL) && (v_22 != t)))
      _fail(t);
    else
      v_22 = t;
    t = not_null(u_22);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = not_null(s_22);
    {
      ATerm i_24;
      i_24 = t;
      {
        ATerm m_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(v_22), not_null(w_22));
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = m_24;
            t = SSL_gtr(not_null(v_22), not_null(w_22));
          }
      }
      t = i_24;
    }
    return(t);
  }
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(s_22);
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      t = x_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
      ATerm e_23 (ATerm t)
      {
        t = not_null(c_23);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = not_null(d_23);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = not_null(b_23);
        return(t);
      }
      if(((b_23 != NULL) && (b_23 != t)))
        _fail(t);
      else
        b_23 = t;
      t = not_null(b_23);
      if(match_cons(t, sym__2))
        {
          c_23 = ATgetArgument(t, 0);
          d_23 = ATgetArgument(t, 1);
          t = e_23(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm x_24;
    x_24 = t;
    {
      ATerm g_23 = NULL;
      ATerm h_23 = NULL;
      ATerm i_23 (ATerm t)
      {
        t = not_null(h_23);
        if(((g_23 != NULL) && (g_23 != t)))
          _fail(t);
        else
          g_23 = t;
        t = not_null(h_23);
        return(t);
      }
      t = term_r_14;
      t = get_config_0_0(t);
      if(((h_23 != NULL) && (h_23 != t)))
        _fail(t);
      else
        h_23 = t;
      t = i_23(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), term_m_12);
      t = geq_0_0(t);
    }
    t = x_24;
    t = p_95(t);
    return(t);
  }
  t = try_1_0(v_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm l_23 = NULL,n_23 = NULL;
    ATerm y_24;
    y_24 = t;
    {
      ATerm m_23 = NULL;
      ATerm p_23 (ATerm t)
      {
        t = not_null(m_23);
        if(((l_23 != NULL) && (l_23 != t)))
          _fail(t);
        else
          l_23 = t;
        t = not_null(m_23);
        return(t);
      }
      t = run_time_0_0(t);
      if(((m_23 != NULL) && (m_23 != t)))
        _fail(t);
      else
        m_23 = t;
      t = p_23(t);
    }
    t = y_24;
    {
      ATerm o_23 = NULL;
      ATerm q_23 (ATerm t)
      {
        t = not_null(o_23);
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        t = not_null(o_23);
        return(t);
      }
      t = term_y_11;
      t = whoami_0_0(t);
      if(((o_23 != NULL) && (o_23 != t)))
        _fail(t);
      else
        o_23 = t;
      t = q_23(t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_25), not_null(l_23)), term_z_24), not_null(n_23)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(w_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_a_19;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm b_24 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL,z_23 = NULL;
    t = not_null(v_23);
    if(((w_23 != NULL) && (w_23 != t)))
      _fail(t);
    else
      w_23 = t;
    t = not_null(v_23);
    {
      ATerm r_25;
      r_25 = t;
      {
        ATerm y_23 = NULL;
        ATerm c_24 (ATerm t)
        {
          t = not_null(y_23);
          if(((x_23 != NULL) && (x_23 != t)))
            _fail(t);
          else
            x_23 = t;
          t = not_null(y_23);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_23));
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = c_24(t);
      }
      t = r_25;
      {
        ATerm a_24 = NULL;
        ATerm d_24 (ATerm t)
        {
          t = not_null(a_24);
          if(((z_23 != NULL) && (z_23 != t)))
            _fail(t);
          else
            z_23 = t;
          t = not_null(a_24);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_23));
        if(((a_24 != NULL) && (a_24 != t)))
          _fail(t);
        else
          a_24 = t;
        t = d_24(t);
        t = not_null(z_23);
      }
    }
    return(t);
  }
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = not_null(v_23);
  if(match_cons(t, sym_Version_0))
    {
      t = b_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm v_25 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = v_25;
              {
                ATerm f_26 = t;
                int g_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_26);
                  }
                else
                  {
                    t = f_26;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(y_3, t);
      }
    }
  t = m_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm h_24 (ATerm t)
  {
    ATerm g_24 = NULL;
    t = not_null(f_24);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    t = not_null(f_24);
    t = SSL_table_create(not_null(g_24));
    return(t);
  }
  if(((f_24 != NULL) && (f_24 != t)))
    _fail(t);
  else
    f_24 = t;
  t = h_24(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  ATerm l_24 (ATerm t)
  {
    ATerm k_24 = NULL;
    t = not_null(j_24);
    if(((k_24 != NULL) && (k_24 != t)))
      _fail(t);
    else
      k_24 = t;
    t = not_null(j_24);
    {
      ATerm h_26;
      h_26 = t;
      t = term_i_26;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, not_null(k_24));
      t = table_put_0_0(t);
      t = h_26;
    }
    return(t);
  }
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = l_24(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_24 = NULL;
  ATerm p_24 (ATerm t)
  {
    ATerm o_24 = NULL;
    t = not_null(n_24);
    if(((o_24 != NULL) && (o_24 != t)))
      _fail(t);
    else
      o_24 = t;
    t = not_null(n_24);
    t = SSL_table_destroy(not_null(o_24));
    return(t);
  }
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  t = p_24(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  ATerm t_24 (ATerm t)
  {
    ATerm s_24 = NULL;
    t = not_null(r_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(r_24);
    t = SSL_exit(not_null(s_24));
    return(t);
  }
  if(((r_24 != NULL) && (r_24 != t)))
    _fail(t);
  else
    r_24 = t;
  t = t_24(t);
  return(t);
}
ATerm long_description_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm u_24 (ATerm t)
  {
    ATerm l_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = l_26;
        t = Cons_2_0(a_82, u_24, t);
      }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  ATerm m_25 (ATerm t)
  {
    ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
    t = not_null(b_25);
    if(((e_25 != NULL) && (e_25 != t)))
      _fail(t);
    else
      e_25 = t;
    t = not_null(c_25);
    if(((f_25 != NULL) && (f_25 != t)))
      _fail(t);
    else
      f_25 = t;
    t = not_null(f_25);
    {
      ATerm s_26;
      s_26 = t;
      {
        ATerm h_25 = NULL,j_25 = NULL,l_25 = NULL;
        ATerm q_25 (ATerm t)
        {
          t = not_null(l_25);
          if(((g_25 != NULL) && (g_25 != t)))
            _fail(t);
          else
            g_25 = t;
          t = not_null(l_25);
          return(t);
        }
        ATerm t_26;
        t_26 = t;
        {
          ATerm i_25 = NULL;
          ATerm o_25 (ATerm t)
          {
            t = not_null(i_25);
            if(((h_25 != NULL) && (h_25 != t)))
              _fail(t);
            else
              h_25 = t;
            t = not_null(i_25);
            return(t);
          }
          t = g_0(t);
          if(((i_25 != NULL) && (i_25 != t)))
            _fail(t);
          else
            i_25 = t;
          t = o_25(t);
        }
        t = t_26;
        {
          ATerm k_25 = NULL;
          ATerm p_25 (ATerm t)
          {
            t = not_null(k_25);
            if(((j_25 != NULL) && (j_25 != t)))
              _fail(t);
            else
              j_25 = t;
            t = not_null(k_25);
            return(t);
          }
          t = not_null(e_25);
          t = f_0(t);
          if(((k_25 != NULL) && (k_25 != t)))
            _fail(t);
          else
            k_25 = t;
          t = p_25(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(h_25)), not_null(j_25));
          if(((l_25 != NULL) && (l_25 != t)))
            _fail(t);
          else
            l_25 = t;
          t = q_25(t);
        }
      }
      t = s_26;
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(g_25);
          return(t);
        }
        t = reverse_acc_2_0(f_0, z_3, t);
      }
    }
    return(t);
  }
  ATerm n_25 (ATerm t)
  {
    t = term_y_11;
    t = g_0(t);
    return(t);
  }
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = not_null(d_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
      t = m_25(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_25(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, f_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  ATerm n_26 (ATerm t)
  {
    ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL;
    ATerm p_26 (ATerm t)
    {
      ATerm d_26 = NULL,k_26 = NULL;
      t = not_null(c_26);
      if(((d_26 != NULL) && (d_26 != t)))
        _fail(t);
      else
        d_26 = t;
      t = not_null(c_26);
      {
        ATerm m_26 = NULL;
        ATerm q_26 (ATerm t)
        {
          t = not_null(m_26);
          if(((k_26 != NULL) && (k_26 != t)))
            _fail(t);
          else
            k_26 = t;
          t = not_null(m_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_26)), not_null(a_26));
        if(((m_26 != NULL) && (m_26 != t)))
          _fail(t);
        else
          m_26 = t;
        t = q_26(t);
        t = not_null(k_26);
      }
      return(t);
    }
    t = not_null(w_25);
    if(((y_25 != NULL) && (y_25 != t)))
      _fail(t);
    else
      y_25 = t;
    t = not_null(x_25);
    if(((z_25 != NULL) && (z_25 != t)))
      _fail(t);
    else
      z_25 = t;
    t = not_null(w_25);
    {
      ATerm b_26 = NULL;
      ATerm o_26 (ATerm t)
      {
        t = not_null(b_26);
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = not_null(b_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_25));
      if(((b_26 != NULL) && (b_26 != t)))
        _fail(t);
      else
        b_26 = t;
      t = o_26(t);
      t = not_null(z_25);
      t = c_67(t);
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = p_26(t);
    }
    return(t);
  }
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  t = not_null(w_25);
  if(match_cons(t, sym_Program_1))
    {
      x_25 = ATgetArgument(t, 0);
      t = n_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_26 = NULL;
  ATerm u_26 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_26 = NULL;
      ATerm c_27 (ATerm t)
      {
        t = not_null(w_26);
        if(((v_26 != NULL) && (v_26 != t)))
          _fail(t);
        else
          v_26 = t;
        t = not_null(w_26);
        return(t);
      }
      t = term_r_23;
      t = get_config_0_0(t);
      if(((w_26 != NULL) && (w_26 != t)))
        _fail(t);
      else
        w_26 = t;
      t = c_27(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = u_26;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm x_26 = NULL;
            ATerm d_27 (ATerm t)
            {
              t = not_null(x_26);
              if(((v_26 != NULL) && (v_26 != t)))
                _fail(t);
              else
                v_26 = t;
              t = not_null(x_26);
              return(t);
            }
            if(((x_26 != NULL) && (x_26 != t)))
              _fail(t);
            else
              x_26 = t;
            t = d_27(t);
            return(t);
          }
          t = Program_1_0(h_4, t);
          return(t);
        }
        t = option_defined_1_0(g_4, t);
      }
    }
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = not_null(v_26);
        return(t);
      }
      t = short_description_1_0(s_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(r_4, t);
    t = term_h_27;
    t = echo_0_0(t);
    t = term_k_27;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm y_26 = NULL;
        ATerm z_26 = NULL;
        ATerm e_27 (ATerm t)
        {
          t = not_null(z_26);
          if(((y_26 != NULL) && (y_26 != t)))
            _fail(t);
          else
            y_26 = t;
          t = not_null(z_26);
          return(t);
        }
        if(((z_26 != NULL) && (z_26 != t)))
          _fail(t);
        else
          z_26 = t;
        t = e_27(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_26)), term_v_27);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(a_5, t);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm a_27 = NULL;
          ATerm b_27 = NULL;
          ATerm f_27 (ATerm t)
          {
            t = not_null(b_27);
            if(((a_27 != NULL) && (a_27 != t)))
              _fail(t);
            else
              a_27 = t;
            t = not_null(b_27);
            return(t);
          }
          ATerm c_5 (ATerm t)
          {
            t = not_null(v_26);
            return(t);
          }
          t = long_description_1_0(c_5, t);
          if(((b_27 != NULL) && (b_27 != t)))
            _fail(t);
          else
            b_27 = t;
          t = f_27(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(a_27)), term_w_27);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(b_5, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm d_67 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  ATerm a_28 (ATerm t)
  {
    ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL;
    ATerm c_28 (ATerm t)
    {
      ATerm s_27 = NULL,t_27 = NULL;
      t = not_null(r_27);
      if(((s_27 != NULL) && (s_27 != t)))
        _fail(t);
      else
        s_27 = t;
      t = not_null(r_27);
      {
        ATerm u_27 = NULL;
        ATerm d_28 (ATerm t)
        {
          t = not_null(u_27);
          if(((t_27 != NULL) && (t_27 != t)))
            _fail(t);
          else
            t_27 = t;
          t = not_null(u_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_27)), not_null(p_27));
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        t = d_28(t);
        t = not_null(t_27);
      }
      return(t);
    }
    t = not_null(l_27);
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    t = not_null(m_27);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(l_27);
    {
      ATerm q_27 = NULL;
      ATerm b_28 (ATerm t)
      {
        t = not_null(q_27);
        if(((p_27 != NULL) && (p_27 != t)))
          _fail(t);
        else
          p_27 = t;
        t = not_null(q_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_27));
      if(((q_27 != NULL) && (q_27 != t)))
        _fail(t);
      else
        q_27 = t;
      t = b_28(t);
      t = not_null(o_27);
      t = d_67(t);
      if(((r_27 != NULL) && (r_27 != t)))
        _fail(t);
      else
        r_27 = t;
      t = c_28(t);
    }
    return(t);
  }
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = not_null(l_27);
  if(match_cons(t, sym_Undefined_1))
    {
      m_27 = ATgetArgument(t, 0);
      t = a_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm e_28 (ATerm t)
  {
    ATerm z_27 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_82, _id, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = z_27;
        t = Cons_2_0(_id, e_28, t);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  t = fetch_1_0(m_99, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  t = not_null(g_28);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(g_28);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_28 = ATgetFirst((ATermList) t);
          i_28 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(g_28);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_28;
  j_28 = t;
  {
    ATerm l_28 = NULL;
    ATerm r_28 = NULL;
    ATerm t_28 (ATerm t)
    {
      t = not_null(r_28);
      if(((l_28 != NULL) && (l_28 != t)))
        _fail(t);
      else
        l_28 = t;
      t = not_null(r_28);
      return(t);
    }
    ATerm k_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = k_28;
        {
          ATerm m_28 = NULL;
          ATerm n_28 = NULL;
          ATerm s_28 (ATerm t)
          {
            t = not_null(n_28);
            if(((m_28 != NULL) && (m_28 != t)))
              _fail(t);
            else
              m_28 = t;
            t = not_null(n_28);
            return(t);
          }
          if(((n_28 != NULL) && (n_28 != t)))
            _fail(t);
          else
            n_28 = t;
          t = s_28(t);
          t = (ATerm) ATinsert(ATempty, not_null(m_28));
        }
      }
    if(((r_28 != NULL) && (r_28 != t)))
      _fail(t);
    else
      r_28 = t;
    t = t_28(t);
    t = (ATerm) ATmakeAppl(sym__2, term_w_15, not_null(l_28));
    t = printnl_0_0(t);
  }
  t = j_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  ATerm e_29 (ATerm t)
  {
    ATerm z_28 = NULL,a_29 = NULL,c_29 = NULL;
    t = not_null(y_28);
    if(((z_28 != NULL) && (z_28 != t)))
      _fail(t);
    else
      z_28 = t;
    t = not_null(y_28);
    {
      ATerm u_28;
      u_28 = t;
      {
        ATerm b_29 = NULL;
        ATerm f_29 (ATerm t)
        {
          t = not_null(b_29);
          if(((a_29 != NULL) && (a_29 != t)))
            _fail(t);
          else
            a_29 = t;
          t = not_null(b_29);
          return(t);
        }
        t = SSLgetAnnotations(not_null(z_28));
        if(((b_29 != NULL) && (b_29 != t)))
          _fail(t);
        else
          b_29 = t;
        t = f_29(t);
      }
      t = u_28;
      {
        ATerm d_29 = NULL;
        ATerm g_29 (ATerm t)
        {
          t = not_null(d_29);
          if(((c_29 != NULL) && (c_29 != t)))
            _fail(t);
          else
            c_29 = t;
          t = not_null(d_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_29));
        if(((d_29 != NULL) && (d_29 != t)))
          _fail(t);
        else
          d_29 = t;
        t = g_29(t);
        t = not_null(c_29);
      }
    }
    return(t);
  }
  if(((y_28 != NULL) && (y_28 != t)))
    _fail(t);
  else
    y_28 = t;
  t = not_null(y_28);
  if(match_cons(t, sym_Help_0))
    {
      t = e_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_74(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 (ATerm t)
      {
        ATerm j_29 = NULL;
        if(((j_29 != NULL) && (j_29 != t)))
          _fail(t);
        else
          j_29 = t;
        t = not_null(j_29);
        if(match_string(t, "--about"))
          {
            t = not_null(j_29);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = term_l_29;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_m_29;
        return(t);
      }
      t = Option_3_0(d_5, q_5, r_5, t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = x_28;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm k_29 = NULL;
          if(((k_29 != NULL) && (k_29 != t)))
            _fail(t);
          else
            k_29 = t;
          t = not_null(k_29);
          if(match_string(t, "--version"))
            {
              t = not_null(k_29);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = term_l_29;
          t = set_config_0_0(t);
          t = term_u_29;
          t = set_config_0_0(t);
          t = term_v_29;
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_h_30;
          return(t);
        }
        t = Option_3_0(s_5, t_5, f_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  ATerm s_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL;
    t = not_null(o_29);
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = not_null(p_29);
    if(((r_29 != NULL) && (r_29 != t)))
      _fail(t);
    else
      r_29 = t;
    t = not_null(n_29);
    t = SSL_table_get(not_null(q_29), not_null(r_29));
    return(t);
  }
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = not_null(n_29);
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
      t = s_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  ATerm f_30 (ATerm t)
  {
    ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
    t = not_null(x_29);
    if(((b_30 != NULL) && (b_30 != t)))
      _fail(t);
    else
      b_30 = t;
    t = not_null(y_29);
    if(((c_30 != NULL) && (c_30 != t)))
      _fail(t);
    else
      c_30 = t;
    t = not_null(z_29);
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    t = not_null(w_29);
    {
      ATerm l_30;
      l_30 = t;
      {
        ATerm d_30 = NULL;
        ATerm e_30 = NULL;
        ATerm g_30 (ATerm t)
        {
          t = not_null(e_30);
          if(((d_30 != NULL) && (d_30 != t)))
            _fail(t);
          else
            d_30 = t;
          t = not_null(e_30);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(c_30));
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(n_30);
            }
          else
            {
              t = m_30;
              t = (ATerm) ATempty;
            }
          if(((e_30 != NULL) && (e_30 != t)))
            _fail(t);
          else
            e_30 = t;
          t = g_30(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(b_30), not_null(c_30), (ATerm) ATinsert(CheckATermList(not_null(d_30)), not_null(a_30)));
        t = table_put_0_0(t);
      }
      t = l_30;
    }
    return(t);
  }
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = not_null(w_29);
  if(match_cons(t, sym__3))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
      z_29 = ATgetArgument(t, 2);
      t = f_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm i_30 = NULL;
  ATerm j_30 = NULL;
  ATerm k_30 (ATerm t)
  {
    t = not_null(j_30);
    if(((i_30 != NULL) && (i_30 != t)))
      _fail(t);
    else
      i_30 = t;
    t = not_null(j_30);
    return(t);
  }
  t = term_y_11;
  t = r_100(t);
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  t = k_30(t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, not_null(i_30));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  ATerm w_30 (ATerm t)
  {
    t = not_null(p_30);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm x_30 (ATerm t)
  {
    ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
    t = not_null(q_30);
    if(((s_30 != NULL) && (s_30 != t)))
      _fail(t);
    else
      s_30 = t;
    t = not_null(r_30);
    if(((t_30 != NULL) && (t_30 != t)))
      _fail(t);
    else
      t_30 = t;
    t = not_null(p_30);
    {
      ATerm o_30;
      o_30 = t;
      t = not_null(s_30);
      t = a_0(t);
      t = o_30;
      {
        ATerm v_30 = NULL;
        ATerm y_30 (ATerm t)
        {
          t = not_null(v_30);
          if(((u_30 != NULL) && (u_30 != t)))
            _fail(t);
          else
            u_30 = t;
          t = not_null(v_30);
          return(t);
        }
        t = term_y_11;
        t = b_0(t);
        if(((v_30 != NULL) && (v_30 != t)))
          _fail(t);
        else
          v_30 = t;
        t = y_30(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), not_null(u_30));
      }
    }
    return(t);
  }
  if(((p_30 != NULL) && (p_30 != t)))
    _fail(t);
  else
    p_30 = t;
  t = not_null(p_30);
  if(match_string(t, "register-usage-info"))
    {
      t = w_30(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_30 = ATgetFirst((ATermList) t);
          r_30 = (ATerm) ATgetNext((ATermList) t);
          t = x_30(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm a_31 = NULL;
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = not_null(a_31);
    if(match_string(t, "--help"))
      {
        t = not_null(a_31);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(a_31);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(a_31);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_z_30;
    t = set_config_0_0(t);
    t = term_b_31;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  t = Option_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  ATerm i_31 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL;
    t = not_null(e_31);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = not_null(f_31);
    if(((h_31 != NULL) && (h_31 != t)))
      _fail(t);
    else
      h_31 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(h_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_31)));
    return(t);
  }
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  t = not_null(d_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_31 = ATgetFirst((ATermList) t);
      f_31 = (ATerm) ATgetNext((ATermList) t);
      t = i_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  ATerm d_32 (ATerm t)
  {
    ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL;
    ATerm f_32 (ATerm t)
    {
      ATerm y_31 = NULL,z_31 = NULL;
      ATerm g_32 (ATerm t)
      {
        ATerm a_32 = NULL,b_32 = NULL;
        t = not_null(z_31);
        if(((a_32 != NULL) && (a_32 != t)))
          _fail(t);
        else
          a_32 = t;
        t = not_null(z_31);
        {
          ATerm c_32 = NULL;
          ATerm h_32 (ATerm t)
          {
            t = not_null(c_32);
            if(((b_32 != NULL) && (b_32 != t)))
              _fail(t);
            else
              b_32 = t;
            t = not_null(c_32);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_32)), not_null(y_31)), not_null(v_31));
          if(((c_32 != NULL) && (c_32 != t)))
            _fail(t);
          else
            c_32 = t;
          t = h_32(t);
          t = not_null(b_32);
        }
        return(t);
      }
      t = not_null(x_31);
      if(((y_31 != NULL) && (y_31 != t)))
        _fail(t);
      else
        y_31 = t;
      t = not_null(u_31);
      t = m_61(t);
      if(((z_31 != NULL) && (z_31 != t)))
        _fail(t);
      else
        z_31 = t;
      t = g_32(t);
      return(t);
    }
    t = not_null(p_31);
    if(((s_31 != NULL) && (s_31 != t)))
      _fail(t);
    else
      s_31 = t;
    t = not_null(q_31);
    if(((t_31 != NULL) && (t_31 != t)))
      _fail(t);
    else
      t_31 = t;
    t = not_null(r_31);
    if(((u_31 != NULL) && (u_31 != t)))
      _fail(t);
    else
      u_31 = t;
    t = not_null(p_31);
    {
      ATerm w_31 = NULL;
      ATerm e_32 (ATerm t)
      {
        t = not_null(w_31);
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = not_null(w_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_31));
      if(((w_31 != NULL) && (w_31 != t)))
        _fail(t);
      else
        w_31 = t;
      t = e_32(t);
      t = not_null(t_31);
      t = l_61(t);
      if(((x_31 != NULL) && (x_31 != t)))
        _fail(t);
      else
        x_31 = t;
      t = f_32(t);
    }
    return(t);
  }
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = not_null(p_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_31 = ATgetFirst((ATermList) t);
      r_31 = (ATerm) ATgetNext((ATermList) t);
      t = d_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm m_32 = NULL;
  ATerm s_32 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,q_32 = NULL;
    t = not_null(m_32);
    if(((n_32 != NULL) && (n_32 != t)))
      _fail(t);
    else
      n_32 = t;
    t = not_null(m_32);
    {
      ATerm j_31;
      j_31 = t;
      {
        ATerm p_32 = NULL;
        ATerm t_32 (ATerm t)
        {
          t = not_null(p_32);
          if(((o_32 != NULL) && (o_32 != t)))
            _fail(t);
          else
            o_32 = t;
          t = not_null(p_32);
          return(t);
        }
        t = SSLgetAnnotations(not_null(n_32));
        if(((p_32 != NULL) && (p_32 != t)))
          _fail(t);
        else
          p_32 = t;
        t = t_32(t);
      }
      t = j_31;
      {
        ATerm r_32 = NULL;
        ATerm u_32 (ATerm t)
        {
          t = not_null(r_32);
          if(((q_32 != NULL) && (q_32 != t)))
            _fail(t);
          else
            q_32 = t;
          t = not_null(r_32);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(o_32));
        if(((r_32 != NULL) && (r_32 != t)))
          _fail(t);
        else
          r_32 = t;
        t = u_32(t);
        t = not_null(q_32);
      }
    }
    return(t);
  }
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  t = not_null(m_32);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  ATerm e_33 (ATerm t)
  {
    ATerm a_33 = NULL,d_33 = NULL;
    t = not_null(y_32);
    if(((a_33 != NULL) && (a_33 != t)))
      _fail(t);
    else
      a_33 = t;
    t = not_null(z_32);
    if(((d_33 != NULL) && (d_33 != t)))
      _fail(t);
    else
      d_33 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_k_14, not_null(a_33), not_null(d_33));
    t = table_put_0_0(t);
    return(t);
  }
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  t = not_null(x_32);
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
      t = e_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm k_31;
  k_31 = t;
  {
    ATerm m_6 (ATerm t)
    {
      t = term_l_31;
      t = p_100(t);
      return(t);
    }
    t = try_1_0(m_6, t);
  }
  t = k_31;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm m_33 = NULL;
      ATerm m_31;
      m_31 = t;
      {
        ATerm k_33 = NULL;
        ATerm l_33 = NULL;
        ATerm o_33 (ATerm t)
        {
          t = not_null(l_33);
          if(((k_33 != NULL) && (k_33 != t)))
            _fail(t);
          else
            k_33 = t;
          t = not_null(l_33);
          return(t);
        }
        if(((l_33 != NULL) && (l_33 != t)))
          _fail(t);
        else
          l_33 = t;
        t = o_33(t);
        t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(k_33));
        t = set_config_0_0(t);
      }
      t = m_31;
      {
        ATerm n_33 = NULL;
        ATerm p_33 (ATerm t)
        {
          t = not_null(n_33);
          if(((m_33 != NULL) && (m_33 != t)))
            _fail(t);
          else
            m_33 = t;
          t = not_null(n_33);
          return(t);
        }
        if(((n_33 != NULL) && (n_33 != t)))
          _fail(t);
        else
          n_33 = t;
        t = p_33(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_33));
      }
      return(t);
    }
    ATerm o_6 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = p_100(t);
              t = Cons_2_0(_id, o_6, t);
            }
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(n_6, o_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  ATerm k_32;
  k_32 = t;
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
    ATerm a_34 (ATerm t)
    {
      t = not_null(x_33);
      if(((t_33 != NULL) && (t_33 != t)))
        _fail(t);
      else
        t_33 = t;
      t = not_null(y_33);
      if(((u_33 != NULL) && (u_33 != t)))
        _fail(t);
      else
        u_33 = t;
      t = not_null(z_33);
      if(((v_33 != NULL) && (v_33 != t)))
        _fail(t);
      else
        v_33 = t;
      t = not_null(w_33);
      t = SSL_table_put(not_null(t_33), not_null(u_33), not_null(v_33));
      return(t);
    }
    if(((w_33 != NULL) && (w_33 != t)))
      _fail(t);
    else
      w_33 = t;
    t = not_null(w_33);
    if(match_cons(t, sym__3))
      {
        x_33 = ATgetArgument(t, 0);
        y_33 = ATgetArgument(t, 1);
        z_33 = ATgetArgument(t, 2);
        t = a_34(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = k_32;
  return(t);
}
ATerm parse_options_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm g_34 = NULL;
  ATerm l_32;
  l_32 = t;
  t = term_v_32;
  t = table_put_0_0(t);
  t = l_32;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm w_32 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_100(t);
          ;
          LocalPopChoice(b_33);
        }
      else
        {
          t = w_32;
          {
            ATerm c_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(f_33);
              }
            else
              {
                t = c_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
    {
      ATerm m_7 (ATerm t)
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_33;
            i_33 = t;
            {
              ATerm j_33 = t;
              int q_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_25;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(q_33);
                }
              else
                {
                  t = j_33;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = i_33;
            t = system_usage_0_0(t);
            t = term_a_19;
            t = exit_0_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_34;
                  b_34 = t;
                  t = term_i_29;
                  t = get_config_0_0(t);
                  t = b_34;
                  t = system_about_0_0(t);
                  t = term_a_19;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  {
                    ATerm n_7 (ATerm t)
                    {
                      ATerm u_7 (ATerm t)
                      {
                        ATerm h_34 = NULL;
                        ATerm i_34 (ATerm t)
                        {
                          t = not_null(h_34);
                          if(((g_34 != NULL) && (g_34 != t)))
                            _fail(t);
                          else
                            g_34 = t;
                          t = not_null(h_34);
                          return(t);
                        }
                        if(((h_34 != NULL) && (h_34 != t)))
                          _fail(t);
                        else
                          h_34 = t;
                        t = i_34(t);
                        return(t);
                      }
                      t = Undefined_1_0(u_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(n_7, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_34)), term_c_34));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_m_12;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(m_7, t);
      {
        ATerm d_34;
        d_34 = t;
        t = term_i_27;
        t = table_destroy_0_0(t);
        t = d_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  t = parse_options_1_0(o_98, t);
  t = store_options_0_0(t);
  t = q_98(t);
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_98, t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        {
          ATerm j_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_34);
            }
          else
            {
              t = j_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_98(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(d_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_7, f_98, g_98, z_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm t_34;
      t_34 = t;
      {
        ATerm k_34 = NULL;
        ATerm l_34 = NULL;
        ATerm m_34 (ATerm t)
        {
          t = not_null(l_34);
          if(((k_34 != NULL) && (k_34 != t)))
            _fail(t);
          else
            k_34 = t;
          t = not_null(l_34);
          return(t);
        }
        t = term_r_23;
        t = get_config_0_0(t);
        if(((l_34 != NULL) && (l_34 != t)))
          _fail(t);
        else
          l_34 = t;
        t = m_34(t);
        t = (ATerm) ATmakeAppl(sym__2, term_z_11, (ATerm) ATinsert(ATempty, not_null(k_34)));
        t = printnl_0_0(t);
      }
      t = t_34;
      return(t);
    }
    t = if_verbose2_1_0(i_8, t);
    return(t);
  }
  t = iowrap_4_0(x_97, y_97, z_97, h_8, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(v_97, w_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    t = _2_0(_id, s_97, t);
    return(t);
  }
  t = iowrap_2_0(j_8, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm o_34 = NULL;
    ATerm q_34 (ATerm t)
    {
      ATerm p_34 = NULL;
      t = not_null(o_34);
      if(((p_34 != NULL) && (p_34 != t)))
        _fail(t);
      else
        p_34 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, not_null(p_34))));
      return(t);
    }
    t = get_primitives_0_0(t);
    if(((o_34 != NULL) && (o_34 != t)))
      _fail(t);
    else
      o_34 = t;
    t = q_34(t);
    return(t);
  }
  t = iowrap_1_0(k_8, t);
  return(t);
}
