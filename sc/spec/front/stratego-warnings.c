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
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
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
Symbol sym_Cong_2;
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
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
ATerm term_u_23;
ATerm term_r_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_z_8;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_b_6;
ATerm term_a_6;
void init_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_n_6);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_6);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_f_6);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_f_6);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_f_6);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_f_6);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_f_6);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__3, term_s_19, term_t_19, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm extend_config_0 (ATerm);
ATerm stratego_warnings_options_0 (ATerm);
ATerm print_0 (ATerm);
ATerm length_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm y_92 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm mk_warning_0 (ATerm);
ATerm print_warnings_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm s_72 (ATerm));
ATerm CallT_3 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm caller_1 (ATerm, ATerm w_75 (ATerm));
ATerm get_strategy_callers_0 (ATerm);
ATerm map_apply_1 (ATerm, ATerm y_75 (ATerm));
ATerm strategy_invokation_warning_1 (ATerm, ATerm u_75 (ATerm));
ATerm obsolete_def_0 (ATerm);
ATerm Str_1 (ATerm, ATerm n_69 (ATerm));
ATerm oncetd_1 (ATerm, ATerm y_78 (ATerm));
ATerm Build_1 (ATerm, ATerm b_73 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm sdef_with_property_1 (ATerm, ATerm x_75 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm s_87 (ATerm), ATerm t_87 (ATerm));
ATerm union_1 (ATerm, ATerm o_87 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm));
ATerm crush_3 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm));
ATerm collect_om_1 (ATerm, ATerm k_88 (ATerm));
ATerm collect_1 (ATerm, ATerm l_88 (ATerm));
ATerm strategy_argument_warning_1 (ATerm, ATerm v_75 (ATerm));
ATerm debug_with_incorrect_string_0 (ATerm);
ATerm Warning_1 (ATerm, ATerm t_75 (ATerm));
ATerm filter_1 (ATerm, ATerm p_90 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm x_83 (ATerm));
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm u_84 (ATerm));
ATerm uniq_0 (ATerm);
ATerm Stratego_warnings_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_84 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_97 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_95 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_98 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_95 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_61 (ATerm), ATerm d_61 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm));
ATerm crush_2 (ATerm, ATerm f_93 (ATerm), ATerm g_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_97 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_101 (ATerm));
ATerm map_1 (ATerm, ATerm l_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_101 (ATerm));
ATerm Program_1 (ATerm, ATerm e_68 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_100 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_76 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_102 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_62 (ATerm), ATerm m_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_102 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_101 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm));
ATerm stratego_warnings_0 (ATerm);
ATerm main_0 (ATerm);
ATerm extend_config_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,z_2 = NULL;
  n_2 = t;
  m_2 :
  if(match_cons(n_2, sym__2))
    {
      o_2 = ATgetArgument(n_2, 0);
      z_2 = ATgetArgument(n_2, 1);
      {
        ATerm f_3 = NULL;
        ATerm g_3 = NULL,i_3 = NULL;
        ATerm h_3 = NULL;
        t = not_null(o_2);
        {
          ATerm y_5 = t;
          int z_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(z_5);
            }
          else
            {
              t = y_5;
              t = (ATerm) ATempty;
            }
          {
            h_3 = t;
            if(((g_3 != NULL) && (g_3 != h_3)))
              _fail(h_3);
            else
              g_3 = h_3;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), not_null(g_3));
          {
            t = conc_0(t);
            {
              i_3 = t;
              if(((f_3 != NULL) && (f_3 != i_3)))
                _fail(i_3);
              else
                f_3 = i_3;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_6, not_null(o_2), not_null(f_3));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_warnings_options_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm o_3 = NULL;
    o_3 = t;
    m_3 :
    if(!(match_string(o_3, "--warning")))
      {
        if(!(match_string(o_3, "-W")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm p_3 = NULL;
    ATerm q_3 = NULL;
    q_3 = t;
    if(((p_3 != NULL) && (p_3 != q_3)))
      _fail(q_3);
    else
      p_3 = q_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(p_3)));
      t = extend_config_0(t);
    }
    t = term_f_6;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = term_g_6;
    return(t);
  }
  t = ArgOption_3(t, c_0, e_0, f_0);
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
  u_3 = t;
  t_3 :
  if(match_cons(u_3, sym__2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      {
        ATerm k_6;
        k_6 = t;
        t = SSL_print(not_null(v_3), not_null(w_3));
        t = k_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_n_6;
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    t = term_o_6;
    return(t);
  }
  t = foldr_3(t, h_0, add_0, m_0);
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      e_4 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_4)), not_null(d_4)), (ATerm) ATinsert(ATempty, not_null(d_4)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm j_4 = NULL;
  ATerm k_4 = NULL;
  k_4 = t;
  if(((j_4 != NULL) && (j_4 != k_4)))
    _fail(k_4);
  else
    j_4 = k_4;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(j_4));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_92 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_92(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm mk_warning_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  v_4 = t;
  r_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      s_4 :
      if(match_cons(x_4, sym_DebugWarning_1))
        {
          u_4 = ATgetArgument(x_4, 0);
          {
            ATerm c_5 = NULL;
            ATerm d_5 = NULL,f_5 = NULL;
            ATerm e_5 = NULL;
            t = not_null(u_4);
            {
              t = double_quote_0(t);
              {
                e_5 = t;
                if(((d_5 != NULL) && (d_5 != e_5)))
                  _fail(e_5);
                else
                  d_5 = e_5;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_6), not_null(d_5)), term_s_6), term_r_6), not_null(w_4)), term_q_6);
              {
                t = concat_strings_0(t);
                {
                  f_5 = t;
                  if(((c_5 != NULL) && (c_5 != f_5)))
                    _fail(f_5);
                  else
                    c_5 = f_5;
                }
              }
            }
            t = not_null(c_5);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(v_4, sym__3))
        {
          w_4 = ATgetArgument(v_4, 0);
          x_4 = ATgetArgument(v_4, 1);
          y_4 = ATgetArgument(v_4, 2);
          t_4 :
          if(match_cons(y_4, sym_ObsoleteWarning_1))
            {
              z_4 = ATgetArgument(y_4, 0);
              {
                ATerm j_5 = NULL;
                ATerm k_5 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_6), not_null(z_4)), term_w_6), not_null(x_4)), term_v_6), not_null(w_4)), term_u_6);
                {
                  t = concat_strings_0(t);
                  {
                    k_5 = t;
                    if(((j_5 != NULL) && (j_5 != k_5)))
                      _fail(k_5);
                    else
                      j_5 = k_5;
                  }
                }
                t = not_null(j_5);
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
ATerm print_warnings_0 (ATerm t)
{
  ATerm s_5 = NULL;
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm u_5 = NULL;
        t = map_1(t, mk_warning_0);
        {
          ATerm e_7;
          e_7 = t;
          {
            ATerm t_5 = NULL;
            t = length_0(t);
            {
              t_5 = t;
              if(((s_5 != NULL) && (s_5 != t_5)))
                _fail(t_5);
              else
                s_5 = t_5;
            }
          }
          t = e_7;
          {
            ATerm v_5 = NULL;
            v_5 = t;
            if(((u_5 != NULL) && (u_5 != v_5)))
              _fail(v_5);
            else
              u_5 = v_5;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(u_5));
              {
                t = print_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(s_5)), term_j_7));
                  t = print_0(t);
                }
              }
            }
          }
        }
      }
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm s_72 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_SVar_1))
    {
      e_6 = ATgetArgument(d_6, 0);
      {
        ATerm h_6 = NULL,j_6 = NULL;
        ATerm i_6 = NULL;
        t = SSLgetAnnotations(not_null(d_6));
        {
          i_6 = t;
          if(((h_6 != NULL) && (h_6 != i_6)))
            _fail(i_6);
          else
            h_6 = i_6;
        }
        {
          t = not_null(e_6);
          {
            ATerm l_6 = NULL;
            t = s_72(t);
            {
              j_6 = t;
              {
                ATerm m_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(j_6)), not_null(h_6));
                {
                  m_6 = t;
                  if(((l_6 != NULL) && (l_6 != m_6)))
                    _fail(m_6);
                  else
                    l_6 = m_6;
                }
                t = not_null(l_6);
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
ATerm CallT_3 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_CallT_3))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      b_7 = ATgetArgument(y_6, 2);
      {
        ATerm g_7 = NULL,i_7 = NULL;
        ATerm h_7 = NULL;
        t = SSLgetAnnotations(not_null(y_6));
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
        {
          t = not_null(z_6);
          {
            ATerm k_7 = NULL;
            t = x_72(t);
            {
              i_7 = t;
              {
                t = not_null(a_7);
                {
                  ATerm m_7 = NULL;
                  t = y_72(t);
                  {
                    k_7 = t;
                    {
                      t = not_null(b_7);
                      {
                        ATerm o_7 = NULL;
                        t = z_72(t);
                        {
                          m_7 = t;
                          {
                            ATerm p_7 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(i_7), not_null(k_7), not_null(m_7)), not_null(g_7));
                            {
                              p_7 = t;
                              if(((o_7 != NULL) && (o_7 != p_7)))
                                _fail(p_7);
                              else
                                o_7 = p_7;
                            }
                            t = not_null(o_7);
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
ATerm caller_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_SDef_3))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      d_8 = ATgetArgument(a_8, 2);
      {
        ATerm g_8 = NULL;
        t = w_75(t);
        {
          g_8 = t;
          {
            t = not_null(d_8);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm o_0 (ATerm t)
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm i_8 = NULL;
                    i_8 = t;
                    if(((g_8 != NULL) && (g_8 != i_8)))
                      _fail(i_8);
                    else
                      g_8 = i_8;
                    return(t);
                  }
                  t = SVar_1(t, p_0);
                  return(t);
                }
                t = CallT_3(t, o_0, _id, _id);
                t = not_null(g_8);
                return(t);
              }
              t = collect_1(t, n_0);
              {
                ATerm n_7 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_7;
                  }
                t = not_null(b_8);
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
ATerm get_strategy_callers_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  q_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      r_8 :
      if(match_cons(u_8, sym__2))
        {
          v_8 = ATgetArgument(u_8, 0);
          w_8 = ATgetArgument(u_8, 1);
          {
            ATerm a_9 = NULL;
            ATerm e_9 = NULL;
            t = not_null(t_8);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm c_9 = NULL;
                ATerm r_0 (ATerm t)
                {
                  t = not_null(v_8);
                  return(t);
                }
                t = caller_1(t, r_0);
                {
                  ATerm q_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_9 = NULL;
                      b_9 = t;
                      if(((v_8 != NULL) && (v_8 != b_9)))
                        _fail(b_9);
                      else
                        v_8 = b_9;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_7;
                    }
                  {
                    ATerm d_9 = NULL;
                    d_9 = t;
                    if(((c_9 != NULL) && (c_9 != d_9)))
                      _fail(d_9);
                    else
                      c_9 = d_9;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(c_9), not_null(v_8), not_null(w_8));
                  }
                }
                return(t);
              }
              t = collect_1(t, q_0);
              {
                e_9 = t;
                if(((a_9 != NULL) && (a_9 != e_9)))
                  _fail(e_9);
                else
                  a_9 = e_9;
              }
            }
            t = not_null(a_9);
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
ATerm map_apply_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm x_9 (ATerm t)
  {
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, _id, Nil_0);
        t = Fst_0(t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
          q_9 = t;
          l_9 :
          if(match_cons(q_9, sym__2))
            {
              r_9 = ATgetArgument(q_9, 0);
              s_9 = ATgetArgument(q_9, 1);
              m_9 :
              if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
                {
                  t_9 = ATgetFirst((ATermList) s_9);
                  u_9 = (ATerm) ATgetNext((ATermList) s_9);
                  {
                    ATerm v_9 = NULL;
                    if(((p_9 != NULL) && (p_9 != r_9)))
                      _fail(r_9);
                    else
                      p_9 = r_9;
                    {
                      if(((n_9 != NULL) && (n_9 != t_9)))
                        _fail(t_9);
                      else
                        n_9 = t_9;
                      {
                        if(((o_9 != NULL) && (o_9 != u_9)))
                          _fail(u_9);
                        else
                          o_9 = u_9;
                        {
                          ATerm w_9 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(n_9));
                          {
                            t = y_75(t);
                            {
                              w_9 = t;
                              if(((v_9 != NULL) && (v_9 != w_9)))
                                _fail(w_9);
                              else
                                v_9 = w_9;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(o_9));
                            t = x_9(t);
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
          else
            {
              _fail(t);
            }
        }
      }
    return(t);
  }
  t = x_9(t);
  return(t);
}
ATerm strategy_invokation_warning_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        t = collect_1(t, u_75);
        {
          t = concat_0(t);
          {
            ATerm v_7 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_7;
              }
          }
        }
        return(t);
      }
      t = split_2(t, _id, s_0);
      t = map_apply_1(t, get_strategy_callers_0);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm obsolete_def_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      j_10 = t;
      b_10 :
      if(match_cons(j_10, sym_CallT_3))
        {
          k_10 = ATgetArgument(j_10, 0);
          m_10 = ATgetArgument(j_10, 1);
          r_10 = ATgetArgument(j_10, 2);
          c_10 :
          if(match_cons(k_10, sym_SVar_1))
            {
              l_10 = ATgetArgument(k_10, 0);
              d_10 :
              if(match_string(l_10, "obsolete"))
                {
                  e_10 :
                  if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
                    {
                      n_10 = ATgetFirst((ATermList) m_10);
                      q_10 = (ATerm) ATgetNext((ATermList) m_10);
                      f_10 :
                      if(match_cons(n_10, sym_Build_1))
                        {
                          o_10 = ATgetArgument(n_10, 0);
                          g_10 :
                          if(match_cons(o_10, sym_Str_1))
                            {
                              p_10 = ATgetArgument(o_10, 0);
                              h_10 :
                              if(((ATgetType(q_10) == AT_LIST) && ATisEmpty(q_10)))
                                {
                                  i_10 :
                                  if(((ATgetType(r_10) == AT_LIST) && ATisEmpty(r_10)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, not_null(p_10));
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
    t = sdef_with_property_1(t, u_0);
    return(t);
  }
  t = strategy_invokation_warning_1(t, t_0);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym_Str_1))
    {
      a_11 = ATgetArgument(z_10, 0);
      {
        ATerm d_11 = NULL,f_11 = NULL;
        ATerm e_11 = NULL;
        t = SSLgetAnnotations(not_null(z_10));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
        {
          t = not_null(a_11);
          {
            ATerm h_11 = NULL;
            t = n_69(t);
            {
              f_11 = t;
              {
                ATerm i_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_11)), not_null(d_11));
                {
                  i_11 = t;
                  if(((h_11 != NULL) && (h_11 != i_11)))
                    _fail(i_11);
                  else
                    h_11 = i_11;
                }
                t = not_null(h_11);
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
ATerm oncetd_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm n_11 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = _one(t, n_11);
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Build_1))
    {
      u_11 = ATgetArgument(t_11, 0);
      {
        ATerm x_11 = NULL,z_11 = NULL;
        ATerm y_11 = NULL;
        t = SSLgetAnnotations(not_null(t_11));
        {
          y_11 = t;
          if(((x_11 != NULL) && (x_11 != y_11)))
            _fail(y_11);
          else
            x_11 = y_11;
        }
        {
          t = not_null(u_11);
          {
            ATerm b_12 = NULL;
            t = b_73(t);
            {
              z_11 = t;
              {
                ATerm c_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(z_11)), not_null(x_11));
                {
                  c_12 = t;
                  if(((b_12 != NULL) && (b_12 != c_12)))
                    _fail(c_12);
                  else
                    b_12 = c_12;
                }
                t = not_null(b_12);
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
ATerm SDef_3 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_SDef_3))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      r_12 = ATgetArgument(o_12, 2);
      {
        ATerm w_12 = NULL,y_12 = NULL;
        ATerm x_12 = NULL;
        t = SSLgetAnnotations(not_null(o_12));
        {
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
        }
        {
          t = not_null(p_12);
          {
            ATerm a_13 = NULL;
            t = i_75(t);
            {
              y_12 = t;
              {
                t = not_null(q_12);
                {
                  ATerm c_13 = NULL;
                  t = j_75(t);
                  {
                    a_13 = t;
                    {
                      t = not_null(r_12);
                      {
                        ATerm e_13 = NULL;
                        t = k_75(t);
                        {
                          c_13 = t;
                          {
                            ATerm f_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_12), not_null(a_13), not_null(c_13)), not_null(w_12));
                            {
                              f_13 = t;
                              if(((e_13 != NULL) && (e_13 != f_13)))
                                _fail(f_13);
                              else
                                e_13 = f_13;
                            }
                            t = not_null(e_13);
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
ATerm sdef_with_property_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm r_13 = NULL;
    r_13 = t;
    if(((q_13 != NULL) && (q_13 != r_13)))
      _fail(r_13);
    else
      q_13 = r_13;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    ATerm s_13 = NULL;
    s_13 = t;
    if(((p_13 != NULL) && (p_13 != s_13)))
      _fail(s_13);
    else
      p_13 = s_13;
    return(t);
  }
  t = SDef_3(t, v_0, _id, w_0);
  {
    t = not_null(p_13);
    {
      t = collect_1(t, x_75);
      {
        ATerm y_7 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_7;
          }
        {
          ATerm x_0 (ATerm t)
          {
            ATerm t_13 = NULL;
            t_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), not_null(t_13));
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym__2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      if(((b_14 != NULL) && (b_14 != c_14)))
        _fail(c_14);
      else
        b_14 = c_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm s_87 (ATerm), ATerm t_87 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
    {
      j_14 = ATgetFirst((ATermList) i_14);
      k_14 = (ATerm) ATgetNext((ATermList) i_14);
      {
        t = t_87(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm n_14 = NULL;
            n_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(n_14));
              t = s_87(t);
            }
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(k_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym__2))
    {
      u_14 = ATgetArgument(t_14, 0);
      v_14 = ATgetArgument(t_14, 1);
      {
        t = not_null(u_14);
        {
          ATerm z_14 (ATerm t)
          {
            ATerm e_8 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_14);
                ;
                LocalPopChoice(f_8);
              }
            else
              {
                t = e_8;
                {
                  ATerm h_8 = t;
                  int j_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(v_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_87, z_0);
                      t = z_14(t);
                      ;
                      LocalPopChoice(j_8);
                    }
                  else
                    {
                      t = h_8;
                      t = Cons_2(t, _id, z_14);
                    }
                }
              }
            return(t);
          }
          t = z_14(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm))
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_89(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
        e_15 = t;
        d_15 :
        if(((ATgetType(e_15) == AT_LIST) && !(ATisEmpty(e_15))))
          {
            f_15 = ATgetFirst((ATermList) e_15);
            g_15 = (ATerm) ATgetNext((ATermList) e_15);
            {
              ATerm j_15 = NULL,l_15 = NULL;
              ATerm m_8;
              m_8 = t;
              {
                ATerm k_15 = NULL;
                t = not_null(f_15);
                {
                  t = q_89(t);
                  {
                    k_15 = t;
                    if(((j_15 != NULL) && (j_15 != k_15)))
                      _fail(k_15);
                    else
                      j_15 = k_15;
                  }
                }
              }
              t = m_8;
              {
                ATerm m_15 = NULL;
                t = not_null(g_15);
                {
                  t = foldr_3(t, o_89, p_89, q_89);
                  {
                    m_15 = t;
                    if(((l_15 != NULL) && (l_15 != m_15)))
                      _fail(m_15);
                    else
                      l_15 = m_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(l_15));
                  t = p_89(t);
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
  return(t);
}
ATerm crush_3 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm))
{
  ATerm u_15 = NULL;
  ATerm w_15 = NULL;
  u_15 = t;
  {
    ATerm x_15 = NULL;
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = not_null(u_15);
    {
      x_15 = t;
      {
        t = SSL_explode_term(not_null(x_15));
        {
          z_15 = t;
          t_15 :
          if(match_cons(z_15, sym__2))
            {
              a_16 = ATgetArgument(z_15, 0);
              b_16 = ATgetArgument(z_15, 1);
              if(((w_15 != NULL) && (w_15 != b_16)))
                _fail(b_16);
              else
                w_15 = b_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_15);
      t = foldr_3(t, h_93, i_93, j_93);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_16 = NULL;
      ATerm h_16 = NULL;
      t = k_88(t);
      {
        h_16 = t;
        if(((g_16 != NULL) && (g_16 != h_16)))
          _fail(h_16);
        else
          g_16 = h_16;
      }
      t = (ATerm) ATinsert(ATempty, not_null(g_16));
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm a_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = collect_om_1(t, k_88);
          return(t);
        }
        t = crush_3(t, a_1, union_0, b_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm l_88 (ATerm))
{
  t = collect_om_1(t, l_88);
  return(t);
}
ATerm strategy_argument_warning_1 (ATerm t, ATerm v_75 (ATerm))
{
  t = collect_1(t, v_75);
  t = concat_0(t);
  return(t);
}
ATerm debug_with_incorrect_string_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
      r_16 = t;
      l_16 :
      if(match_cons(r_16, sym_CallT_3))
        {
          s_16 = ATgetArgument(r_16, 0);
          u_16 = ATgetArgument(r_16, 1);
          x_16 = ATgetArgument(r_16, 2);
          m_16 :
          if(match_cons(s_16, sym_SVar_1))
            {
              t_16 = ATgetArgument(s_16, 0);
              n_16 :
              if(match_string(t_16, "debug"))
                {
                  o_16 :
                  if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
                    {
                      v_16 = ATgetFirst((ATermList) u_16);
                      w_16 = (ATerm) ATgetNext((ATermList) u_16);
                      p_16 :
                      if(((ATgetType(w_16) == AT_LIST) && ATisEmpty(w_16)))
                        {
                          q_16 :
                          if(((ATgetType(x_16) == AT_LIST) && ATisEmpty(x_16)))
                            {
                              {
                                ATerm z_16 = NULL;
                                t = not_null(v_16);
                                {
                                  ATerm p_8 = t;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_1 (ATerm t)
                                      {
                                        t = Str_1(t, _id);
                                        return(t);
                                      }
                                      t = Build_1(t, e_1);
                                      PopChoice();
                                      _fail(t);
                                    }
                                  else
                                    {
                                      t = p_8;
                                    }
                                  {
                                    ATerm f_1 (ATerm t)
                                    {
                                      ATerm g_1 (ATerm t)
                                      {
                                        ATerm a_17 = NULL;
                                        a_17 = t;
                                        if(((z_16 != NULL) && (z_16 != a_17)))
                                          _fail(a_17);
                                        else
                                          z_16 = a_17;
                                        return(t);
                                      }
                                      t = Str_1(t, g_1);
                                      return(t);
                                    }
                                    t = oncetd_1(t, f_1);
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(z_16));
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
    t = sdef_with_property_1(t, d_1);
    return(t);
  }
  t = strategy_argument_warning_1(t, c_1);
  return(t);
}
ATerm Warning_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 = NULL;
      i_17 = t;
      g_17 :
      if(match_string(i_17, "debug-arguments"))
        {
          t = t_75(t);
          t = debug_with_incorrect_string_0(t);
        }
      else
        {
          if(match_string(i_17, "obsolete-strategy-calls"))
            {
              t = t_75(t);
              t = obsolete_def_0(t);
            }
          else
            {
              _fail(t);
            }
        }
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm j_17 = NULL;
        ATerm k_17 = NULL;
        k_17 = t;
        if(((j_17 != NULL) && (j_17 != k_17)))
          _fail(k_17);
        else
          j_17 = k_17;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_17)), term_z_8));
          {
            t = printnl_0(t);
            t = (ATerm) ATempty;
          }
        }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1(t, p_90);
              return(t);
            }
            t = Cons_2(t, p_90, h_1);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
              q_17 = t;
              p_17 :
              if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
                {
                  r_17 = ATgetFirst((ATermList) q_17);
                  s_17 = (ATerm) ATgetNext((ATermList) q_17);
                  {
                    t = not_null(s_17);
                    t = filter_1(t, p_90);
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
ATerm fetch_elem_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm w_17 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm x_17 = NULL;
    t = x_83(t);
    {
      x_17 = t;
      if(((w_17 != NULL) && (w_17 != x_17)))
        _fail(x_17);
      else
        w_17 = x_17;
    }
    return(t);
  }
  t = fetch_1(t, i_1);
  t = not_null(w_17);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
    {
      e_18 = ATgetFirst((ATermList) d_18);
      f_18 = (ATerm) ATgetNext((ATermList) d_18);
      {
        ATerm i_18 = NULL;
        ATerm k_18 = NULL;
        t = not_null(f_18);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm j_9 = t;
            if((PushChoice() == 0))
              {
                ATerm j_18 = NULL;
                j_18 = t;
                if(((e_18 != NULL) && (e_18 != j_18)))
                  _fail(j_18);
                else
                  e_18 = j_18;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_9;
              }
            return(t);
          }
          t = filter_1(t, j_1);
          {
            k_18 = t;
            if(((i_18 != NULL) && (i_18 != k_18)))
              _fail(k_18);
            else
              i_18 = k_18;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(i_18)), not_null(e_18));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm o_18 (ATerm t)
  {
    t = u_84(t);
    {
      ATerm k_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(y_9);
        }
      else
        {
          t = k_9;
          t = Cons_2(t, _id, o_18);
        }
    }
    return(t);
  }
  t = o_18(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, k_1);
  return(t);
}
ATerm Stratego_warnings_0 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm s_18 = NULL;
      s_18 = t;
      {
        if(((r_18 != NULL) && (r_18 != s_18)))
          _fail(s_18);
        else
          r_18 = s_18;
        {
          ATerm a_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_b_6;
              {
                t = get_config_0(t);
                t = uniq_0(t);
              }
              ;
              LocalPopChoice(s_10);
            }
          else
            {
              t = a_10;
              t = (ATerm) ATempty;
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                ATerm t_18 = NULL;
                t_18 = t;
                q_18 :
                if(!(match_string(t_18, "all")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = fetch_elem_1(t, n_1);
              t = (ATerm) ATinsert(ATinsert(ATempty, term_u_10), term_t_10);
              return(t);
            }
            t = try_1(t, m_1);
            {
              ATerm o_1 (ATerm t)
              {
                ATerm p_1 (ATerm t)
                {
                  t = not_null(r_18);
                  return(t);
                }
                t = Warning_1(t, p_1);
                return(t);
              }
              t = filter_1(t, o_1);
              {
                t = concat_0(t);
                t = print_warnings_0(t);
              }
            }
          }
        }
      }
    }
    t = z_9;
    return(t);
  }
  t = _2(t, _id, l_1);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_10;
  v_10 = t;
  {
    ATerm w_18 = NULL;
    ATerm x_18 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        x_18 = t;
        if(((w_18 != NULL) && (w_18 != x_18)))
          _fail(x_18);
        else
          w_18 = x_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_10), not_null(w_18)), term_w_10));
      {
        t = printnl_0(t);
        {
          t = term_o_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm b_11;
        b_11 = t;
        t = SSL_printnl(not_null(c_19), not_null(d_19));
        t = b_11;
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
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_implode_string(not_null(i_19));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = c_11;
      {
        ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
        n_19 = t;
        m_19 :
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            o_19 = ATgetFirst((ATermList) n_19);
            p_19 = (ATerm) ATgetNext((ATermList) n_19);
            {
              t = not_null(o_19);
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(p_19);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_1);
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
  ATerm z_19 = NULL;
  ATerm b_20 = NULL;
  z_19 = t;
  {
    ATerm c_20 = NULL;
    ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
    t = not_null(z_19);
    {
      c_20 = t;
      {
        t = SSL_explode_term(not_null(c_20));
        {
          e_20 = t;
          x_19 :
          if(match_cons(e_20, sym__2))
            {
              f_20 = ATgetArgument(e_20, 0);
              g_20 = ATgetArgument(e_20, 1);
              y_19 :
              if(match_string(f_20, ""))
                {
                  if(((b_20 != NULL) && (b_20 != g_20)))
                    _fail(g_20);
                  else
                    b_20 = g_20;
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
      t = not_null(b_20);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_84 (ATerm))
{
  ATerm k_20 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_20);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = b_84(t);
        }
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        t = not_null(o_20);
        {
          ATerm r_1 (ATerm t)
          {
            t = not_null(p_20);
            return(t);
          }
          t = at_end_1(t, r_1);
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  t = SSL_explode_string(not_null(u_20));
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
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_1);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
              d_21 = t;
              c_21 :
              if(match_cons(d_21, sym_Path_1))
                {
                  e_21 = ATgetArgument(d_21, 0);
                  t = not_null(e_21);
                }
              else
                {
                  if(match_cons(d_21, sym_Var_1))
                    {
                      e_21 = ATgetArgument(d_21, 0);
                      {
                        t = not_null(e_21);
                        {
                          ATerm v_11 = t;
                          int w_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(w_11);
                            }
                          else
                            {
                              t = v_11;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = term_a_12;
                                  return(t);
                                }
                                t = debug_1(t, t_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_21, sym_Prefix_2))
                        {
                          e_21 = ATgetArgument(d_21, 0);
                          f_21 = ATgetArgument(d_21, 1);
                          {
                            ATerm k_21 = NULL,m_21 = NULL;
                            ATerm d_12;
                            d_12 = t;
                            {
                              ATerm l_21 = NULL;
                              t = not_null(e_21);
                              {
                                t = eval_config_0(t);
                                {
                                  l_21 = t;
                                  if(((k_21 != NULL) && (k_21 != l_21)))
                                    _fail(l_21);
                                  else
                                    k_21 = l_21;
                                }
                              }
                            }
                            t = d_12;
                            {
                              ATerm n_21 = NULL;
                              t = not_null(f_21);
                              {
                                t = eval_config_0(t);
                                {
                                  n_21 = t;
                                  if(((m_21 != NULL) && (m_21 != n_21)))
                                    _fail(n_21);
                                  else
                                    m_21 = n_21;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(m_21));
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
  ATerm v_21 = NULL;
  v_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_6, not_null(v_21));
    {
      t = table_get_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_12;
            e_12 = t;
            {
              ATerm x_21 = NULL;
              ATerm y_21 = NULL;
              y_21 = t;
              if(((x_21 != NULL) && (x_21 != y_21)))
                _fail(y_21);
              else
                x_21 = y_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_6, not_null(v_21), not_null(x_21));
                t = table_put_0(t);
              }
            }
            t = e_12;
          }
          return(t);
        }
        t = try_1(t, u_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_97 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm f_12;
    f_12 = t;
    {
      ATerm c_22 = NULL;
      ATerm d_22 = NULL;
      t = term_g_12;
      {
        t = get_config_0(t);
        {
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), term_h_12);
        t = geq_0(t);
      }
    }
    t = f_12;
    t = b_97(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  j_22 = t;
  h_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      i_22 :
      if(match_cons(l_22, sym_Stream_1))
        {
          m_22 = ATgetArgument(l_22, 0);
          {
            ATerm p_22 = NULL;
            t = SSL_fputc(not_null(k_22), not_null(m_22));
            {
              ATerm q_22 = NULL;
              q_22 = t;
              if(((p_22 != NULL) && (p_22 != q_22)))
                _fail(q_22);
              else
                p_22 = q_22;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_22));
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
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  x_22 = t;
  v_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      a_23 = ATgetArgument(x_22, 1);
      w_22 :
      if(match_cons(y_22, sym_Stream_1))
        {
          z_22 = ATgetArgument(y_22, 0);
          {
            ATerm d_23 = NULL;
            t = SSL_write_term_to_stream_text(not_null(z_22), not_null(a_23));
            {
              ATerm e_23 = NULL;
              e_23 = t;
              if(((d_23 != NULL) && (d_23 != e_23)))
                _fail(e_23);
              else
                d_23 = e_23;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_23));
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
  ATerm w_1 (ATerm t)
  {
    ATerm i_23 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm j_23 = NULL;
      j_23 = t;
      if(((i_23 != NULL) && (i_23 != j_23)))
        _fail(j_23);
      else
        i_23 = j_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(i_23));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, w_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_cons(p_23, sym__2))
    {
      q_23 = ATgetArgument(p_23, 0);
      s_23 = ATgetArgument(p_23, 1);
      o_23 :
      if(match_cons(q_23, sym_Stream_1))
        {
          r_23 = ATgetArgument(q_23, 0);
          {
            ATerm v_23 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(r_23), not_null(s_23));
            {
              ATerm w_23 = NULL;
              w_23 = t;
              if(((v_23 != NULL) && (v_23 != w_23)))
                _fail(w_23);
              else
                v_23 = w_23;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_23));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_95 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm i_24 = NULL,k_24 = NULL;
        t = not_null(e_24);
        {
          ATerm j_24 = NULL;
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), term_j_12);
            {
              t = open_stream_0(t);
              {
                ATerm l_24 = NULL;
                l_24 = t;
                if(((k_24 != NULL) && (k_24 != l_24)))
                  _fail(l_24);
                else
                  k_24 = l_24;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), not_null(f_24));
                  {
                    t = x_95(t);
                    {
                      t = fclose_0(t);
                      t = not_null(f_24);
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
  ATerm t_24 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm u_24 = NULL,v_24 = NULL;
            u_24 = t;
            q_24 :
            if(match_cons(u_24, sym_Output_1))
              {
                v_24 = ATgetArgument(u_24, 0);
                if(((t_24 != NULL) && (t_24 != v_24)))
                  _fail(v_24);
                else
                  t_24 = v_24;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_1);
          ;
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
          {
            ATerm w_24 = NULL;
            t = term_s_12;
            {
              w_24 = t;
              if(((t_24 != NULL) && (t_24 != w_24)))
                _fail(w_24);
              else
                t_24 = w_24;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_1, _id);
  }
  t = k_12;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(t_24);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm x_24 = NULL;
              x_24 = t;
              s_24 :
              if(!(match_cons(x_24, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm d_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  ATerm v_12;
  v_12 = t;
  t = dtime_0(t);
  t = v_12;
  {
    t = z_98(t);
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm e_25 = NULL;
        t = dtime_0(t);
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
      }
      t = z_12;
      {
        f_25 = t;
        c_25 :
        if(match_cons(f_25, sym__2))
          {
            g_25 = ATgetArgument(f_25, 0);
            h_25 = ATgetArgument(f_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_25)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_25))), not_null(h_25));
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
  ATerm p_25 = NULL,q_25 = NULL;
  ATerm w_25 (ATerm t)
  {
    t = SSL_fclose(not_null(q_25));
    return(t);
  }
  q_25 = t;
  o_25 :
  if(match_cons(q_25, sym_Stream_1))
    {
      p_25 = ATgetArgument(q_25, 0);
      {
        ATerm b_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(p_25));
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = b_13;
            t = w_25(t);
          }
      }
    }
  else
    {
      t = w_25(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Stream_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      t = SSL_read_term_from_stream(not_null(a_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm g_13;
  g_13 = t;
  {
    ATerm f_26 = NULL,h_26 = NULL;
    ATerm h_13;
    h_13 = t;
    {
      ATerm g_26 = NULL;
      t = j_95(t);
      {
        g_26 = t;
        if(((f_26 != NULL) && (f_26 != g_26)))
          _fail(g_26);
        else
          f_26 = g_26;
      }
    }
    t = h_13;
    {
      ATerm i_26 = NULL;
      i_26 = t;
      if(((h_26 != NULL) && (h_26 != i_26)))
        _fail(i_26);
      else
        h_26 = i_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), not_null(f_26)));
        t = printnl_0(t);
      }
    }
  }
  t = g_13;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym__2))
    {
      q_27 = ATgetArgument(p_27, 0);
      r_27 = ATgetArgument(p_27, 1);
      {
        ATerm u_27 = NULL;
        t = SSL_fopen(not_null(q_27), not_null(r_27));
        {
          ATerm v_27 = NULL;
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_27));
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
  ATerm z_27 = NULL;
  z_27 = t;
  t = SSL_is_string(not_null(z_27));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_61 (ATerm), ATerm d_61 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym__2))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(i_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        {
          t = not_null(j_28);
          {
            ATerm s_28 = NULL;
            t = c_61(t);
            {
              q_28 = t;
              {
                t = not_null(k_28);
                {
                  ATerm u_28 = NULL;
                  t = d_61(t);
                  {
                    s_28 = t;
                    {
                      ATerm a_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_28), not_null(s_28)), not_null(o_28));
                      {
                        a_29 = t;
                        if(((u_28 != NULL) && (u_28 != a_29)))
                          _fail(a_29);
                        else
                          u_28 = a_29;
                      }
                      t = not_null(u_28);
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
ATerm stdin_stream_0 (ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_29 = NULL;
    j_29 = t;
    if(((i_29 != NULL) && (i_29 != j_29)))
      _fail(j_29);
    else
      i_29 = j_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_29));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm m_29 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_29 = NULL;
    n_29 = t;
    if(((m_29 != NULL) && (m_29 != n_29)))
      _fail(n_29);
    else
      m_29 = n_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_29));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_29 = NULL;
    u_29 = t;
    if(((t_29 != NULL) && (t_29 != u_29)))
      _fail(u_29);
    else
      t_29 = u_29;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_29));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(a_30, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(a_30, sym_stdin_0))
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
  ATerm k_30 = NULL;
  ATerm m_30 = NULL,n_30 = NULL;
  k_30 = t;
  {
    ATerm o_30 = NULL;
    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
    t = not_null(k_30);
    {
      o_30 = t;
      {
        t = SSL_explode_term(not_null(o_30));
        {
          q_30 = t;
          h_30 :
          if(match_cons(q_30, sym__2))
            {
              r_30 = ATgetArgument(q_30, 0);
              s_30 = ATgetArgument(q_30, 1);
              i_30 :
              if(match_string(r_30, ""))
                {
                  j_30 :
                  if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
                    {
                      t_30 = ATgetFirst((ATermList) s_30);
                      u_30 = (ATerm) ATgetNext((ATermList) s_30);
                      {
                        if(((n_30 != NULL) && (n_30 != t_30)))
                          _fail(t_30);
                        else
                          n_30 = t_30;
                        if(((m_30 != NULL) && (m_30 != u_30)))
                          _fail(u_30);
                        else
                          m_30 = u_30;
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
    t = not_null(n_30);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(match_cons(c_31, sym__2))
    {
      d_31 = ATgetArgument(c_31, 0);
      e_31 = ATgetArgument(c_31, 1);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm k_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm f_31 = NULL,g_31 = NULL;
                    f_31 = t;
                    a_31 :
                    if(match_cons(f_31, sym_Path_1))
                      {
                        g_31 = ATgetArgument(f_31, 0);
                        t = not_null(g_31);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = k_13;
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
  ATerm o_31 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_31 = NULL;
      ATerm n_31 = NULL;
      n_31 = t;
      if(((m_31 != NULL) && (m_31 != n_31)))
        _fail(n_31);
      else
        m_31 = n_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), term_o_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_u_13;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  {
    ATerm v_13;
    v_13 = t;
    {
      ATerm p_31 = NULL;
      t = read_from_stream_0(t);
      {
        p_31 = t;
        if(((o_31 != NULL) && (o_31 != p_31)))
          _fail(p_31);
        else
          o_31 = p_31;
      }
    }
    t = v_13;
    {
      t = fclose_0(t);
      t = not_null(o_31);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm))
{
  ATerm u_31 = NULL,w_31 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm v_31 = NULL;
    t = b_91(t);
    {
      v_31 = t;
      if(((u_31 != NULL) && (u_31 != v_31)))
        _fail(v_31);
      else
        u_31 = v_31;
    }
  }
  t = w_13;
  {
    ATerm x_31 = NULL;
    t = c_91(t);
    {
      x_31 = t;
      if(((w_31 != NULL) && (w_31 != x_31)))
        _fail(x_31);
      else
        w_31 = x_31;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(w_31));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_32 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm y_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm e_32 = NULL,f_32 = NULL;
          e_32 = t;
          b_32 :
          if(match_cons(e_32, sym_Input_1))
            {
              f_32 = ATgetArgument(e_32, 0);
              if(((d_32 != NULL) && (d_32 != f_32)))
                _fail(f_32);
              else
                d_32 = f_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_2);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = y_13;
        {
          ATerm g_32 = NULL;
          t = term_e_14;
          {
            g_32 = t;
            if(((d_32 != NULL) && (d_32 != g_32)))
              _fail(g_32);
            else
              d_32 = g_32;
          }
        }
      }
  }
  t = x_13;
  {
    ATerm g_2 (ATerm t)
    {
      t = not_null(d_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm l_32 = NULL;
    l_32 = t;
    j_32 :
    if(!(match_string(l_32, "-k")))
      {
        if(!(match_string(l_32, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm m_32 = NULL;
      ATerm n_32 = NULL;
      t = string_to_int_0(t);
      {
        n_32 = t;
        if(((m_32 != NULL) && (m_32 != n_32)))
          _fail(n_32);
        else
          m_32 = n_32;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_14, not_null(m_32));
        t = set_config_0(t);
      }
    }
    t = f_14;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_l_14;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_string_to_int(not_null(q_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_32 = NULL;
        y_32 = t;
        t_32 :
        if(!(match_string(y_32, "-S")))
          {
            if(!(match_string(y_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_p_14;
        t = set_config_0(t);
        t = term_q_14;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_r_14;
        return(t);
      }
      t = Option_3(t, k_2, l_2, p_2);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm z_32 = NULL;
              z_32 = t;
              u_32 :
              if(!(match_string(z_32, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              ATerm c_33 = NULL;
              ATerm y_14;
              y_14 = t;
              {
                ATerm a_33 = NULL;
                ATerm b_33 = NULL;
                t = string_to_int_0(t);
                {
                  b_33 = t;
                  if(((a_33 != NULL) && (a_33 != b_33)))
                    _fail(b_33);
                  else
                    a_33 = b_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(a_33));
                  t = set_config_0(t);
                }
              }
              t = y_14;
              {
                ATerm d_33 = NULL;
                d_33 = t;
                if(((c_33 != NULL) && (c_33 != d_33)))
                  _fail(d_33);
                else
                  c_33 = d_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_33));
              }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_a_15;
              return(t);
            }
            t = ArgOption_3(t, q_2, r_2, s_2);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            {
              ATerm t_2 (ATerm t)
              {
                ATerm e_33 = NULL;
                e_33 = t;
                x_32 :
                if(!(match_string(e_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = term_c_15;
                t = set_config_0(t);
                t = term_h_15;
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_i_15;
                return(t);
              }
              t = Option_3(t, t_2, u_2, v_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm k_33 = NULL;
    k_33 = t;
    h_33 :
    if(!(match_string(k_33, "-o")))
      {
        if(!(match_string(k_33, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm n_33 = NULL;
    ATerm p_15;
    p_15 = t;
    {
      ATerm l_33 = NULL;
      ATerm m_33 = NULL;
      m_33 = t;
      if(((l_33 != NULL) && (l_33 != m_33)))
        _fail(m_33);
      else
        l_33 = m_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_15, not_null(l_33));
        t = set_config_0(t);
      }
    }
    t = p_15;
    {
      ATerm o_33 = NULL;
      o_33 = t;
      if(((n_33 != NULL) && (n_33 != o_33)))
        _fail(o_33);
      else
        n_33 = o_33;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_33));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = s_15;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm v_33 = NULL;
          v_33 = t;
          u_33 :
          if(!(match_string(v_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = term_c_16;
          t = set_config_0(t);
          t = term_d_16;
          return(t);
        }
        ATerm c_3 (ATerm t)
        {
          t = term_e_16;
          return(t);
        }
        t = Option_3(t, a_3, b_3, c_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  d_34 = t;
  z_33 :
  if(match_string(d_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
        {
          e_34 = ATgetFirst((ATermList) d_34);
          i_34 = (ATerm) ATgetNext((ATermList) d_34);
          a_34 :
          if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
            {
              j_34 = ATgetFirst((ATermList) i_34);
              k_34 = (ATerm) ATgetNext((ATermList) i_34);
              {
                ATerm o_34 = NULL;
                ATerm f_16;
                f_16 = t;
                {
                  t = not_null(e_34);
                  t = j_0(t);
                }
                t = f_16;
                {
                  ATerm p_34 = NULL;
                  t = not_null(j_34);
                  {
                    t = k_0(t);
                    {
                      p_34 = t;
                      if(((o_34 != NULL) && (o_34 != p_34)))
                        _fail(p_34);
                      else
                        o_34 = p_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_34)), not_null(o_34));
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
  ATerm d_3 (ATerm t)
  {
    ATerm w_34 = NULL;
    w_34 = t;
    t_34 :
    if(!(match_string(w_34, "-i")))
      {
        if(!(match_string(w_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm z_34 = NULL;
    ATerm i_16;
    i_16 = t;
    {
      ATerm x_34 = NULL;
      ATerm y_34 = NULL;
      y_34 = t;
      if(((x_34 != NULL) && (x_34 != y_34)))
        _fail(y_34);
      else
        x_34 = y_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(x_34));
        t = set_config_0(t);
      }
    }
    t = i_16;
    {
      ATerm a_35 = NULL;
      a_35 = t;
      if(((z_34 != NULL) && (z_34 != a_35)))
        _fail(a_35);
      else
        z_34 = a_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_34));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_k_16;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, j_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = y_16;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm i_35 = NULL;
  t = report_run_time_0(t);
  {
    ATerm j_35 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        j_35 = t;
        if(((i_35 != NULL) && (i_35 != j_35)))
          _fail(j_35);
        else
          i_35 = j_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, term_e_17), not_null(i_35)));
      {
        t = printnl_0(t);
        {
          t = term_o_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_17;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_TicksToSeconds(not_null(m_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym__2))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      {
        ATerm h_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_35), not_null(t_35));
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = h_17;
            t = SSL_addr(not_null(s_35), not_null(t_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_89(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
        a_36 = t;
        z_35 :
        if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
          {
            b_36 = ATgetFirst((ATermList) a_36);
            c_36 = (ATerm) ATgetNext((ATermList) a_36);
            {
              ATerm f_36 = NULL;
              ATerm g_36 = NULL;
              t = not_null(c_36);
              {
                t = foldr_2(t, m_89, n_89);
                {
                  g_36 = t;
                  if(((f_36 != NULL) && (f_36 != g_36)))
                    _fail(g_36);
                  else
                    f_36 = g_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(f_36));
                t = n_89(t);
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
ATerm crush_2 (ATerm t, ATerm f_93 (ATerm), ATerm g_93 (ATerm))
{
  ATerm n_36 = NULL;
  ATerm p_36 = NULL;
  n_36 = t;
  {
    ATerm q_36 = NULL;
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    t = not_null(n_36);
    {
      q_36 = t;
      {
        t = SSL_explode_term(not_null(q_36));
        {
          u_36 = t;
          m_36 :
          if(match_cons(u_36, sym__2))
            {
              v_36 = ATgetArgument(u_36, 0);
              w_36 = ATgetArgument(u_36, 1);
              if(((p_36 != NULL) && (p_36 != w_36)))
                _fail(w_36);
              else
                p_36 = w_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_36);
      t = foldr_2(t, f_93, g_93);
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
    ATerm k_3 (ATerm t)
    {
      t = term_n_6;
      return(t);
    }
    t = crush_2(t, k_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        ATerm o_17;
        o_17 = t;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_37), not_null(e_37));
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = SSL_gtr(not_null(d_37), not_null(e_37));
            }
        }
        t = o_17;
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
  ATerm k_37 = NULL;
  ATerm v_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
      l_37 = t;
      j_37 :
      if(match_cons(l_37, sym__2))
        {
          m_37 = ATgetArgument(l_37, 0);
          n_37 = ATgetArgument(l_37, 1);
          {
            if(((k_37 != NULL) && (k_37 != m_37)))
              _fail(m_37);
            else
              k_37 = m_37;
            if(((k_37 != NULL) && (k_37 != n_37)))
              _fail(n_37);
            else
              k_37 = n_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = v_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm q_37 = NULL;
      ATerm r_37 = NULL;
      t = term_g_12;
      {
        t = get_config_0(t);
        {
          r_37 = t;
          if(((q_37 != NULL) && (q_37 != r_37)))
            _fail(r_37);
          else
            q_37 = r_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), term_o_6);
        t = geq_0(t);
      }
    }
    t = z_17;
    t = a_97(t);
    return(t);
  }
  t = try_1(t, l_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm v_37 = NULL,x_37 = NULL;
    ATerm a_18;
    a_18 = t;
    {
      ATerm w_37 = NULL;
      t = run_time_0(t);
      {
        w_37 = t;
        if(((v_37 != NULL) && (v_37 != w_37)))
          _fail(w_37);
        else
          v_37 = w_37;
      }
    }
    t = a_18;
    {
      ATerm y_37 = NULL;
      t = term_f_6;
      {
        t = whoami_0(t);
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), not_null(v_37)), term_b_18), not_null(x_37)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_n_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Version_0))
    {
      ATerm h_38 = NULL,j_38 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(f_38));
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
      }
      t = h_18;
      {
        ATerm k_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_38));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_18;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm p_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(u_18);
            }
          else
            {
              t = p_18;
              {
                ATerm v_18 = t;
                int y_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(y_18);
                  }
                else
                  {
                    t = v_18;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, r_3);
      }
    }
  t = x_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  t = SSL_table_create(not_null(p_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  {
    ATerm z_18;
    z_18 = t;
    {
      t = term_e_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_19, term_f_19, not_null(t_38));
          t = table_put_0(t);
        }
      }
    }
    t = z_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  t = SSL_table_destroy(not_null(x_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  t = SSL_exit(not_null(b_39));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm e_39 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = Cons_2(t, l_83, e_39);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  n_39 = t;
  k_39 :
  if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
    {
      l_39 = ATgetFirst((ATermList) n_39);
      m_39 = (ATerm) ATgetNext((ATermList) n_39);
      {
        ATerm q_39 = NULL;
        t = not_null(m_39);
        {
          ATerm j_19;
          j_19 = t;
          {
            ATerm r_39 = NULL,t_39 = NULL,v_39 = NULL;
            ATerm k_19;
            k_19 = t;
            {
              ATerm s_39 = NULL;
              t = i_0(t);
              {
                s_39 = t;
                if(((r_39 != NULL) && (r_39 != s_39)))
                  _fail(s_39);
                else
                  r_39 = s_39;
              }
            }
            t = k_19;
            {
              ATerm u_39 = NULL;
              t = not_null(l_39);
              {
                t = g_0(t);
                {
                  u_39 = t;
                  if(((t_39 != NULL) && (t_39 != u_39)))
                    _fail(u_39);
                  else
                    t_39 = u_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_39)), not_null(t_39));
                {
                  v_39 = t;
                  if(((q_39 != NULL) && (q_39 != v_39)))
                    _fail(v_39);
                  else
                    q_39 = v_39;
                }
              }
            }
          }
          t = j_19;
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(q_39);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_39) == AT_LIST) && ATisEmpty(n_39)))
        {
          {
            t = term_f_6;
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
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Program_1))
    {
      h_40 = ATgetArgument(g_40, 0);
      {
        ATerm k_40 = NULL,m_40 = NULL;
        ATerm l_40 = NULL;
        t = SSLgetAnnotations(not_null(g_40));
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
        {
          t = not_null(h_40);
          {
            ATerm o_40 = NULL;
            t = e_68(t);
            {
              m_40 = t;
              {
                ATerm p_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_40)), not_null(k_40));
                {
                  p_40 = t;
                  if(((o_40 != NULL) && (o_40 != p_40)))
                    _fail(p_40);
                  else
                    o_40 = p_40;
                }
                t = not_null(o_40);
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
  ATerm y_40 = NULL;
  ATerm l_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL;
      t = term_f_17;
      {
        t = get_config_0(t);
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
      }
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = l_19;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            ATerm a_41 = NULL;
            a_41 = t;
            if(((y_40 != NULL) && (y_40 != a_41)))
              _fail(a_41);
            else
              y_40 = a_41;
            return(t);
          }
          t = Program_1(t, z_3);
          return(t);
        }
        t = option_defined_1(t, y_3);
      }
    }
  {
    ATerm a_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = not_null(y_40);
        return(t);
      }
      t = short_description_1(t, f_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_4);
    {
      t = term_r_19;
      {
        t = echo_0(t);
        {
          t = term_u_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm d_41 = NULL;
                  ATerm e_41 = NULL;
                  e_41 = t;
                  if(((d_41 != NULL) && (d_41 != e_41)))
                    _fail(e_41);
                  else
                    d_41 = e_41;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_41)), term_v_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_4);
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm f_41 = NULL;
                    ATerm g_41 = NULL;
                    ATerm i_4 (ATerm t)
                    {
                      t = not_null(y_40);
                      return(t);
                    }
                    t = long_description_1(t, i_4);
                    {
                      g_41 = t;
                      if(((f_41 != NULL) && (f_41 != g_41)))
                        _fail(g_41);
                      else
                        f_41 = g_41;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_41)), term_j_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_4);
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
  ATerm w_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = w_19;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_68 (ATerm))
{
  ATerm q_41 = NULL,u_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym_Undefined_1))
    {
      u_41 = ATgetArgument(q_41, 0);
      {
        ATerm z_41 = NULL,b_42 = NULL;
        ATerm a_42 = NULL;
        t = SSLgetAnnotations(not_null(q_41));
        {
          a_42 = t;
          if(((z_41 != NULL) && (z_41 != a_42)))
            _fail(a_42);
          else
            z_41 = a_42;
        }
        {
          t = not_null(u_41);
          {
            ATerm d_42 = NULL;
            t = f_68(t);
            {
              b_42 = t;
              {
                ATerm e_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_42)), not_null(z_41));
                {
                  e_42 = t;
                  if(((d_42 != NULL) && (d_42 != e_42)))
                    _fail(e_42);
                  else
                    d_42 = e_42;
                }
                t = not_null(d_42);
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
ATerm fetch_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm j_42 (ATerm t)
  {
    ATerm d_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_83, _id);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = d_20;
        t = Cons_2(t, _id, j_42);
      }
    return(t);
  }
  t = j_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_100 (ATerm))
{
  t = fetch_1(t, x_100);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(((ATgetType(l_42) == AT_LIST) && ATisEmpty(l_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
        {
          m_42 = ATgetFirst((ATermList) l_42);
          n_42 = (ATerm) ATgetNext((ATermList) l_42);
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
  ATerm i_20;
  i_20 = t;
  {
    ATerm q_42 = NULL;
    ATerm t_42 = NULL;
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = j_20;
        {
          ATerm r_42 = NULL;
          ATerm s_42 = NULL;
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
          t = (ATerm) ATinsert(ATempty, not_null(r_42));
        }
      }
    {
      t_42 = t;
      if(((q_42 != NULL) && (q_42 != t_42)))
        _fail(t_42);
      else
        q_42 = t_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(q_42));
      t = printnl_0(t);
    }
  }
  t = i_20;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_17;
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
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_Help_0))
    {
      ATerm c_43 = NULL,e_43 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm d_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          d_43 = t;
          if(((c_43 != NULL) && (c_43 != d_43)))
            _fail(d_43);
          else
            c_43 = d_43;
        }
      }
      t = s_20;
      {
        ATerm f_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_43));
        {
          f_43 = t;
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
        }
        t = not_null(e_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_76(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        ATerm l_43 = NULL;
        l_43 = t;
        j_43 :
        if(!(match_string(l_43, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_4 (ATerm t)
      {
        t = term_z_20;
        t = set_config_0(t);
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = term_a_21;
        return(t);
      }
      t = Option_3(t, l_4, m_4, n_4);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm m_43 = NULL;
          m_43 = t;
          k_43 :
          if(!(match_string(m_43, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_z_20;
          {
            t = set_config_0(t);
            {
              t = term_g_21;
              t = set_config_0(t);
            }
          }
          t = term_h_21;
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_i_21;
          return(t);
        }
        t = Option_3(t, o_4, p_4, q_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,u_43 = NULL;
  q_43 = t;
  p_43 :
  if(match_cons(q_43, sym__2))
    {
      r_43 = ATgetArgument(q_43, 0);
      u_43 = ATgetArgument(q_43, 1);
      t = SSL_table_get(not_null(r_43), not_null(u_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__3))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      e_44 = ATgetArgument(b_44, 2);
      {
        ATerm j_21;
        j_21 = t;
        {
          ATerm i_44 = NULL;
          ATerm j_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_44), not_null(d_44));
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                t = (ATerm) ATempty;
              }
            {
              j_44 = t;
              if(((i_44 != NULL) && (i_44 != j_44)))
                _fail(j_44);
              else
                i_44 = j_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_44), not_null(d_44), (ATerm) ATinsert(CheckATermList(not_null(i_44)), not_null(e_44)));
            t = table_put_0(t);
          }
        }
        t = j_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm n_44 = NULL;
  ATerm o_44 = NULL;
  t = term_f_6;
  {
    t = c_102(t);
    {
      o_44 = t;
      if(((n_44 != NULL) && (n_44 != o_44)))
        _fail(o_44);
      else
        n_44 = o_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_19, term_t_19, not_null(n_44));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm w_44 = NULL,x_44 = NULL,z_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_string(w_44, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(w_44) == AT_LIST) && !(ATisEmpty(w_44))))
        {
          x_44 = ATgetFirst((ATermList) w_44);
          z_44 = (ATerm) ATgetNext((ATermList) w_44);
          {
            ATerm c_45 = NULL;
            ATerm q_21;
            q_21 = t;
            {
              t = not_null(x_44);
              t = a_0(t);
            }
            t = q_21;
            {
              ATerm d_45 = NULL;
              t = term_f_6;
              {
                t = b_0(t);
                {
                  d_45 = t;
                  if(((c_45 != NULL) && (c_45 != d_45)))
                    _fail(d_45);
                  else
                    c_45 = d_45;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_44)), not_null(c_45));
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
  ATerm a_5 (ATerm t)
  {
    ATerm i_45 = NULL;
    i_45 = t;
    h_45 :
    if(!(match_string(i_45, "--help")))
      {
        if(!(match_string(i_45, "-h")))
          {
            if(!(match_string(i_45, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_r_21;
    {
      t = set_config_0(t);
      t = term_s_21;
    }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  t = Option_3(t, a_5, b_5, g_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
    {
      m_45 = ATgetFirst((ATermList) l_45);
      n_45 = (ATerm) ATgetNext((ATermList) l_45);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_45)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_45)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_62 (ATerm), ATerm m_62 (ATerm))
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  w_45 :
  if(((ATgetType(x_45) == AT_LIST) && !(ATisEmpty(x_45))))
    {
      y_45 = ATgetFirst((ATermList) x_45);
      z_45 = (ATerm) ATgetNext((ATermList) x_45);
      {
        ATerm d_46 = NULL,f_46 = NULL;
        ATerm e_46 = NULL;
        t = SSLgetAnnotations(not_null(x_45));
        {
          e_46 = t;
          if(((d_46 != NULL) && (d_46 != e_46)))
            _fail(e_46);
          else
            d_46 = e_46;
        }
        {
          t = not_null(y_45);
          {
            ATerm h_46 = NULL;
            t = l_62(t);
            {
              f_46 = t;
              {
                t = not_null(z_45);
                {
                  ATerm j_46 = NULL;
                  t = m_62(t);
                  {
                    h_46 = t;
                    {
                      ATerm k_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_46)), not_null(f_46)), not_null(d_46));
                      {
                        k_46 = t;
                        if(((j_46 != NULL) && (j_46 != k_46)))
                          _fail(k_46);
                        else
                          j_46 = k_46;
                      }
                      t = not_null(j_46);
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
  ATerm u_46 = NULL;
  u_46 = t;
  t_46 :
  if(((ATgetType(u_46) == AT_LIST) && ATisEmpty(u_46)))
    {
      {
        ATerm c_47 = NULL,e_47 = NULL;
        ATerm u_21;
        u_21 = t;
        {
          ATerm d_47 = NULL;
          t = SSLgetAnnotations(not_null(u_46));
          {
            d_47 = t;
            if(((c_47 != NULL) && (c_47 != d_47)))
              _fail(d_47);
            else
              c_47 = d_47;
          }
        }
        t = u_21;
        {
          ATerm f_47 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_47));
          {
            f_47 = t;
            if(((e_47 != NULL) && (e_47 != f_47)))
              _fail(f_47);
            else
              e_47 = f_47;
          }
          t = not_null(e_47);
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
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym__2))
    {
      m_47 = ATgetArgument(l_47, 0);
      n_47 = ATgetArgument(l_47, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_6, not_null(m_47), not_null(n_47));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm w_21;
  w_21 = t;
  {
    ATerm h_5 (ATerm t)
    {
      t = term_z_21;
      t = a_102(t);
      return(t);
    }
    t = try_1(t, h_5);
  }
  t = w_21;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm v_47 = NULL;
      ATerm a_22;
      a_22 = t;
      {
        ATerm t_47 = NULL;
        ATerm u_47 = NULL;
        u_47 = t;
        if(((t_47 != NULL) && (t_47 != u_47)))
          _fail(u_47);
        else
          t_47 = u_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(t_47));
          t = set_config_0(t);
        }
      }
      t = a_22;
      {
        ATerm w_47 = NULL;
        w_47 = t;
        if(((v_47 != NULL) && (v_47 != w_47)))
          _fail(w_47);
        else
          v_47 = w_47;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_47));
      }
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      ATerm b_22 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                t = a_102(t);
                t = Cons_2(t, _id, l_5);
              }
            }
          ;
          LocalPopChoice(e_22);
        }
      else
        {
          t = b_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_5, l_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
  ATerm n_22;
  n_22 = t;
  {
    ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
    f_48 = t;
    b_48 :
    if(match_cons(f_48, sym__3))
      {
        g_48 = ATgetArgument(f_48, 0);
        h_48 = ATgetArgument(f_48, 1);
        i_48 = ATgetArgument(f_48, 2);
        {
          if(((c_48 != NULL) && (c_48 != g_48)))
            _fail(g_48);
          else
            c_48 = g_48;
          {
            if(((d_48 != NULL) && (d_48 != h_48)))
              _fail(h_48);
            else
              d_48 = h_48;
            {
              if(((e_48 != NULL) && (e_48 != i_48)))
                _fail(i_48);
              else
                e_48 = i_48;
              t = SSL_table_put(not_null(c_48), not_null(d_48), not_null(e_48));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_101 (ATerm))
{
  ATerm l_48 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    t = term_r_22;
    t = table_put_0(t);
  }
  t = o_22;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_101(t);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm u_22 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(b_23);
              }
            else
              {
                t = u_22;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, m_5);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm c_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23;
            g_23 = t;
            {
              ATerm h_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_18;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_23);
                }
              else
                {
                  t = h_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_23;
            {
              t = system_usage_0(t);
              {
                t = term_n_6;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = c_23;
            {
              ATerm l_23 = t;
              int m_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_23;
                  t_23 = t;
                  {
                    t = term_y_20;
                    t = get_config_0(t);
                  }
                  t = t_23;
                  {
                    t = system_about_0(t);
                    {
                      t = term_n_6;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(m_23);
                }
              else
                {
                  t = l_23;
                  {
                    ATerm o_5 (ATerm t)
                    {
                      ATerm p_5 (ATerm t)
                      {
                        ATerm m_48 = NULL;
                        m_48 = t;
                        if(((l_48 != NULL) && (l_48 != m_48)))
                          _fail(m_48);
                        else
                          l_48 = m_48;
                        return(t);
                      }
                      t = Undefined_1(t, p_5);
                      return(t);
                    }
                    t = option_defined_1(t, o_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_48)), term_u_23));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_o_6;
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
      t = try_1(t, n_5);
      {
        ATerm x_23;
        x_23 = t;
        {
          t = term_s_19;
          t = table_destroy_0(t);
        }
        t = x_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm))
{
  t = parse_options_1(t, z_99);
  {
    t = store_options_0(t);
    {
      t = b_100(t);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_100);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_100(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_99);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_5, q_99, r_99, r_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm m_24;
      m_24 = t;
      {
        ATerm p_48 = NULL;
        ATerm q_48 = NULL;
        t = term_f_17;
        {
          t = get_config_0(t);
          {
            q_48 = t;
            if(((p_48 != NULL) && (p_48 != q_48)))
              _fail(q_48);
            else
              p_48 = q_48;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(p_48)));
          t = printnl_0(t);
        }
      }
      t = m_24;
      return(t);
    }
    t = if_verbose2_1(t, x_5);
    return(t);
  }
  t = iowrap_4(t, i_99, j_99, k_99, w_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm))
{
  t = iowrap_3(t, g_99, h_99, default_usage_0);
  return(t);
}
ATerm stratego_warnings_0 (ATerm t)
{
  t = iowrap_2(t, Stratego_warnings_0, stratego_warnings_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_warnings_0(t);
  return(t);
}
