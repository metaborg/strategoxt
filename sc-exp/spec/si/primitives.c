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
ATerm term_c_21;
ATerm term_y_19;
ATerm term_i_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_e_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_r_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_x_5;
ATerm term_u_5;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Op_2, term_p_5, (ATerm) ATempty);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_5);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Call_2, term_b_6, (ATerm) ATempty);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Var_1, term_i_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_f_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_f_7);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_f_7);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_f_7);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_f_7);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_f_7);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__3, term_e_16, term_f_16, (ATerm) ATempty);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm new_0 (ATerm);
ATerm EvalPrimitive_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_86 (ATerm), ATerm g_86 (ATerm));
ATerm union_1 (ATerm, ATerm b_86 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm crush_3 (ATerm, ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm));
ATerm collect_om_1 (ATerm, ATerm x_86 (ATerm));
ATerm collect_1 (ATerm, ATerm y_86 (ATerm));
ATerm get_primitives_0 (ATerm);
ATerm _2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm k_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_93 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm crush_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_100 (ATerm));
ATerm map_1 (ATerm, ATerm y_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_100 (ATerm));
ATerm Program_1 (ATerm, ATerm a_67 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_97 (ATerm));
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(t_1);
    {
      b_2 = t;
      {
        t = SSL_explode_term(not_null(b_2));
        {
          d_2 = t;
          f_1 :
          if(match_cons(d_2, sym__2))
            {
              e_2 = ATgetArgument(d_2, 0);
              f_2 = ATgetArgument(d_2, 1);
              g_1 :
              if(match_string(e_2, ""))
                {
                  h_1 :
                  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      h_2 = (ATerm) ATgetNext((ATermList) f_2);
                      s_1 :
                      if(((ATgetType(h_2) == AT_LIST) && !(ATisEmpty(h_2))))
                        {
                          i_2 = ATgetFirst((ATermList) h_2);
                          j_2 = (ATerm) ATgetNext((ATermList) h_2);
                          {
                            if(((y_1 != NULL) && (y_1 != g_2)))
                              _fail(g_2);
                            else
                              y_1 = g_2;
                            {
                              if(((a_2 != NULL) && (a_2 != i_2)))
                                _fail(i_2);
                              else
                                a_2 = i_2;
                              if(((z_1 != NULL) && (z_1 != j_2)))
                                _fail(j_2);
                              else
                                z_1 = j_2;
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
      }
    }
    t = not_null(a_2);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm EvalPrimitive_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  v_2 :
  if(match_cons(w_2, sym_Prim_2))
    {
      x_2 = ATgetArgument(w_2, 0);
      y_2 = ATgetArgument(w_2, 1);
      {
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        ATerm g_3 = NULL;
        t = not_null(y_2);
        {
          ATerm l_3 = NULL;
          ATerm c_0 (ATerm t)
          {
            ATerm e_3 = NULL;
            ATerm f_3 = NULL;
            t = new_0(t);
            {
              f_3 = t;
              if(((e_3 != NULL) && (e_3 != f_3)))
                _fail(f_3);
              else
                e_3 = f_3;
            }
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_3));
            return(t);
          }
          t = map_1(t, c_0);
          {
            g_3 = t;
            {
              if(((c_3 != NULL) && (c_3 != g_3)))
                _fail(g_3);
              else
                c_3 = g_3;
              {
                t = not_null(c_3);
                {
                  ATerm o_3 = NULL;
                  ATerm e_0 (ATerm t)
                  {
                    t = term_q_5;
                    return(t);
                  }
                  ATerm f_0 (ATerm t)
                  {
                    ATerm h_3 = NULL,j_3 = NULL;
                    ATerm r_5;
                    r_5 = t;
                    {
                      ATerm i_3 = NULL;
                      t = Fst_0(t);
                      {
                        i_3 = t;
                        if(((h_3 != NULL) && (h_3 != i_3)))
                          _fail(i_3);
                        else
                          h_3 = i_3;
                      }
                    }
                    t = r_5;
                    {
                      ATerm k_3 = NULL;
                      t = Snd_0(t);
                      {
                        k_3 = t;
                        if(((j_3 != NULL) && (j_3 != k_3)))
                          _fail(k_3);
                        else
                          j_3 = k_3;
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_3)), not_null(h_3)));
                    }
                    return(t);
                  }
                  t = foldr_2(t, e_0, f_0);
                  {
                    l_3 = t;
                    {
                      if(((b_3 != NULL) && (b_3 != l_3)))
                        _fail(l_3);
                      else
                        b_3 = l_3;
                      {
                        t = not_null(c_3);
                        {
                          ATerm h_0 (ATerm t)
                          {
                            ATerm m_3 = NULL;
                            ATerm n_3 = NULL;
                            n_3 = t;
                            if(((m_3 != NULL) && (m_3 != n_3)))
                              _fail(n_3);
                            else
                              m_3 = n_3;
                            t = (ATerm) ATmakeAppl(sym_App_2, term_c_6, not_null(m_3));
                            return(t);
                          }
                          t = map_1(t, h_0);
                          {
                            o_3 = t;
                            if(((d_3 != NULL) && (d_3 != o_3)))
                              _fail(o_3);
                            else
                              d_3 = o_3;
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
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_d_6, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_6, (ATerm) ATinsert(ATinsert(ATempty, term_j_6), (ATerm) ATmakeAppl(sym_Op_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_2)))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, not_null(x_2), not_null(d_3)), term_j_6), term_k_6));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      if(((a_4 != NULL) && (a_4 != b_4)))
        _fail(b_4);
      else
        a_4 = b_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_86 (ATerm), ATerm g_86 (ATerm))
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  g_4 :
  if(((ATgetType(h_4) == AT_LIST) && !(ATisEmpty(h_4))))
    {
      i_4 = ATgetFirst((ATermList) h_4);
      j_4 = (ATerm) ATgetNext((ATermList) h_4);
      {
        t = g_86(t);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm m_4 = NULL;
            m_4 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(m_4));
              t = f_86(t);
            }
            return(t);
          }
          t = fetch_1(t, m_0);
        }
        t = not_null(j_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  r_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      {
        t = not_null(t_4);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm l_6 = t;
            int m_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_4);
                ;
                LocalPopChoice(m_6);
              }
            else
              {
                t = l_6;
                {
                  ATerm r_6 = t;
                  int s_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = not_null(u_4);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_86, n_0);
                      t = y_4(t);
                      ;
                      LocalPopChoice(s_6);
                    }
                  else
                    {
                      t = r_6;
                      t = Cons_2(t, _id, y_4);
                    }
                }
              }
            return(t);
          }
          t = y_4(t);
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
ATerm foldr_3 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm t_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_88(t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = t_6;
      {
        ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
        d_5 = t;
        c_5 :
        if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
          {
            e_5 = ATgetFirst((ATermList) d_5);
            f_5 = (ATerm) ATgetNext((ATermList) d_5);
            {
              ATerm i_5 = NULL,k_5 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm j_5 = NULL;
                t = not_null(e_5);
                {
                  t = d_88(t);
                  {
                    j_5 = t;
                    if(((i_5 != NULL) && (i_5 != j_5)))
                      _fail(j_5);
                    else
                      i_5 = j_5;
                  }
                }
              }
              t = z_6;
              {
                ATerm l_5 = NULL;
                t = not_null(f_5);
                {
                  t = foldr_3(t, b_88, c_88, d_88);
                  {
                    l_5 = t;
                    if(((k_5 != NULL) && (k_5 != l_5)))
                      _fail(l_5);
                    else
                      k_5 = l_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(k_5));
                  t = c_88(t);
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
ATerm crush_3 (ATerm t, ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm))
{
  ATerm t_5 = NULL;
  ATerm v_5 = NULL;
  t_5 = t;
  {
    ATerm w_5 = NULL;
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
    t = not_null(t_5);
    {
      w_5 = t;
      {
        t = SSL_explode_term(not_null(w_5));
        {
          y_5 = t;
          s_5 :
          if(match_cons(y_5, sym__2))
            {
              z_5 = ATgetArgument(y_5, 0);
              a_6 = ATgetArgument(y_5, 1);
              if(((v_5 != NULL) && (v_5 != a_6)))
                _fail(a_6);
              else
                v_5 = a_6;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_5);
      t = foldr_3(t, u_91, v_91, w_91);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL;
      ATerm g_6 = NULL;
      t = x_86(t);
      {
        g_6 = t;
        if(((f_6 != NULL) && (f_6 != g_6)))
          _fail(g_6);
        else
          f_6 = g_6;
      }
      t = (ATerm) ATinsert(ATempty, not_null(f_6));
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm o_0 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm p_0 (ATerm t)
        {
          t = collect_om_1(t, x_86);
          return(t);
        }
        t = crush_3(t, o_0, union_0, p_0);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm y_86 (ATerm))
{
  t = collect_om_1(t, y_86);
  return(t);
}
ATerm get_primitives_0 (ATerm t)
{
  t = collect_1(t, EvalPrimitive_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym__2))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      {
        ATerm u_6 = NULL,w_6 = NULL;
        ATerm v_6 = NULL;
        t = SSLgetAnnotations(not_null(o_6));
        {
          v_6 = t;
          if(((u_6 != NULL) && (u_6 != v_6)))
            _fail(v_6);
          else
            u_6 = v_6;
        }
        {
          t = not_null(p_6);
          {
            ATerm y_6 = NULL;
            t = a_60(t);
            {
              w_6 = t;
              {
                t = not_null(q_6);
                {
                  ATerm a_7 = NULL;
                  t = b_60(t);
                  {
                    y_6 = t;
                    {
                      ATerm b_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_6), not_null(y_6)), not_null(u_6));
                      {
                        b_7 = t;
                        if(((a_7 != NULL) && (a_7 != b_7)))
                          _fail(b_7);
                        else
                          a_7 = b_7;
                      }
                      t = not_null(a_7);
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
  ATerm e_7;
  e_7 = t;
  {
    ATerm i_7 = NULL;
    ATerm j_7 = NULL;
    t = term_f_7;
    {
      t = whoami_0(t);
      {
        j_7 = t;
        if(((i_7 != NULL) && (i_7 != j_7)))
          _fail(j_7);
        else
          i_7 = j_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_7), not_null(i_7)), term_h_7));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm q_7;
        q_7 = t;
        t = SSL_printnl(not_null(o_7), not_null(p_7));
        t = q_7;
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
  ATerm u_7 = NULL;
  u_7 = t;
  t = SSL_implode_string(not_null(u_7));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
        z_7 = t;
        y_7 :
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            a_8 = ATgetFirst((ATermList) z_7);
            b_8 = (ATerm) ATgetNext((ATermList) z_7);
            {
              t = not_null(a_8);
              {
                ATerm q_0 (ATerm t)
                {
                  t = not_null(b_8);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_0);
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
  ATerm l_8 = NULL;
  ATerm n_8 = NULL;
  l_8 = t;
  {
    ATerm o_8 = NULL;
    ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
    t = not_null(l_8);
    {
      o_8 = t;
      {
        t = SSL_explode_term(not_null(o_8));
        {
          q_8 = t;
          j_8 :
          if(match_cons(q_8, sym__2))
            {
              r_8 = ATgetArgument(q_8, 0);
              s_8 = ATgetArgument(q_8, 1);
              k_8 :
              if(match_string(r_8, ""))
                {
                  if(((n_8 != NULL) && (n_8 != s_8)))
                    _fail(s_8);
                  else
                    n_8 = s_8;
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
      t = not_null(n_8);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm t_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_8);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = t_7;
        {
          t = Nil_0(t);
          t = o_82(t);
        }
      }
    return(t);
  }
  t = w_8(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      {
        t = not_null(a_9);
        {
          ATerm r_0 (ATerm t)
          {
            t = not_null(b_9);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_explode_string(not_null(g_9));
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
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_0);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
              p_9 = t;
              o_9 :
              if(match_cons(p_9, sym_Path_1))
                {
                  q_9 = ATgetArgument(p_9, 0);
                  t = not_null(q_9);
                }
              else
                {
                  if(match_cons(p_9, sym_Var_1))
                    {
                      q_9 = ATgetArgument(p_9, 0);
                      {
                        t = not_null(q_9);
                        {
                          ATerm g_8 = t;
                          int h_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(h_8);
                            }
                          else
                            {
                              t = g_8;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  t = term_i_8;
                                  return(t);
                                }
                                t = debug_1(t, t_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_9, sym_Prefix_2))
                        {
                          q_9 = ATgetArgument(p_9, 0);
                          r_9 = ATgetArgument(p_9, 1);
                          {
                            ATerm w_9 = NULL,y_9 = NULL;
                            ATerm m_8;
                            m_8 = t;
                            {
                              ATerm x_9 = NULL;
                              t = not_null(q_9);
                              {
                                t = eval_config_0(t);
                                {
                                  x_9 = t;
                                  if(((w_9 != NULL) && (w_9 != x_9)))
                                    _fail(x_9);
                                  else
                                    w_9 = x_9;
                                }
                              }
                            }
                            t = m_8;
                            {
                              ATerm z_9 = NULL;
                              t = not_null(r_9);
                              {
                                t = eval_config_0(t);
                                {
                                  z_9 = t;
                                  if(((y_9 != NULL) && (y_9 != z_9)))
                                    _fail(z_9);
                                  else
                                    y_9 = z_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(y_9));
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
  ATerm h_10 = NULL;
  h_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(h_10));
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_8;
            t_8 = t;
            {
              ATerm j_10 = NULL;
              ATerm k_10 = NULL;
              k_10 = t;
              if(((j_10 != NULL) && (j_10 != k_10)))
                _fail(k_10);
              else
                j_10 = k_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(h_10), not_null(j_10));
                t = table_put_0(t);
              }
            }
            t = t_8;
          }
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm o_10 = NULL;
      ATerm p_10 = NULL;
      t = term_v_8;
      {
        t = get_config_0(t);
        {
          p_10 = t;
          if(((o_10 != NULL) && (o_10 != p_10)))
            _fail(p_10);
          else
            o_10 = p_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_x_8);
        t = geq_0(t);
      }
    }
    t = u_8;
    t = o_95(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  v_10 = t;
  t_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      u_10 :
      if(match_cons(x_10, sym_Stream_1))
        {
          y_10 = ATgetArgument(x_10, 0);
          {
            ATerm b_11 = NULL;
            t = SSL_fputc(not_null(w_10), not_null(y_10));
            {
              ATerm c_11 = NULL;
              c_11 = t;
              if(((b_11 != NULL) && (b_11 != c_11)))
                _fail(c_11);
              else
                b_11 = c_11;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_11));
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
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  j_11 = t;
  h_11 :
  if(match_cons(j_11, sym__2))
    {
      k_11 = ATgetArgument(j_11, 0);
      m_11 = ATgetArgument(j_11, 1);
      i_11 :
      if(match_cons(k_11, sym_Stream_1))
        {
          l_11 = ATgetArgument(k_11, 0);
          {
            ATerm p_11 = NULL;
            t = SSL_write_term_to_stream_text(not_null(l_11), not_null(m_11));
            {
              ATerm q_11 = NULL;
              q_11 = t;
              if(((p_11 != NULL) && (p_11 != q_11)))
                _fail(q_11);
              else
                p_11 = q_11;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_11));
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
  ATerm w_0 (ATerm t)
  {
    ATerm u_11 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm v_11 = NULL;
      v_11 = t;
      if(((u_11 != NULL) && (u_11 != v_11)))
        _fail(v_11);
      else
        u_11 = v_11;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(u_11));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, w_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  b_12 = t;
  z_11 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      e_12 = ATgetArgument(b_12, 1);
      a_12 :
      if(match_cons(c_12, sym_Stream_1))
        {
          d_12 = ATgetArgument(c_12, 0);
          {
            ATerm h_12 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(d_12), not_null(e_12));
            {
              ATerm i_12 = NULL;
              i_12 = t;
              if(((h_12 != NULL) && (h_12 != i_12)))
                _fail(i_12);
              else
                h_12 = i_12;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_12));
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
ATerm WriteToFile_1 (ATerm t, ATerm k_94 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        ATerm u_12 = NULL,w_12 = NULL;
        t = not_null(q_12);
        {
          ATerm v_12 = NULL;
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), term_d_9);
            {
              t = open_stream_0(t);
              {
                ATerm x_12 = NULL;
                x_12 = t;
                if(((w_12 != NULL) && (w_12 != x_12)))
                  _fail(x_12);
                else
                  w_12 = x_12;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), not_null(r_12));
                  {
                    t = k_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(r_12);
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
  ATerm f_13 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm f_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm g_13 = NULL,h_13 = NULL;
            g_13 = t;
            c_13 :
            if(match_cons(g_13, sym_Output_1))
              {
                h_13 = ATgetArgument(g_13, 0);
                if(((f_13 != NULL) && (f_13 != h_13)))
                  _fail(h_13);
                else
                  f_13 = h_13;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          ;
          LocalPopChoice(h_9);
        }
      else
        {
          t = f_9;
          {
            ATerm i_13 = NULL;
            t = term_i_9;
            {
              i_13 = t;
              if(((f_13 != NULL) && (f_13 != i_13)))
                _fail(i_13);
              else
                f_13 = i_13;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = e_9;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(f_13);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm j_13 = NULL;
              j_13 = t;
              e_13 :
              if(!(match_cons(j_13, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_1);
            return(t);
          }
          t = _2(t, b_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  ATerm l_9;
  l_9 = t;
  t = dtime_0(t);
  t = l_9;
  {
    t = m_97(t);
    {
      ATerm m_9;
      m_9 = t;
      {
        ATerm q_13 = NULL;
        t = dtime_0(t);
        {
          q_13 = t;
          if(((p_13 != NULL) && (p_13 != q_13)))
            _fail(q_13);
          else
            p_13 = q_13;
        }
      }
      t = m_9;
      {
        r_13 = t;
        o_13 :
        if(match_cons(r_13, sym__2))
          {
            s_13 = ATgetArgument(r_13, 0);
            t_13 = ATgetArgument(r_13, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_13)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_13))), not_null(t_13));
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
  ATerm b_14 = NULL,c_14 = NULL;
  ATerm i_14 (ATerm t)
  {
    t = SSL_fclose(not_null(c_14));
    return(t);
  }
  c_14 = t;
  a_14 :
  if(match_cons(c_14, sym_Stream_1))
    {
      b_14 = ATgetArgument(c_14, 0);
      {
        ATerm n_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(b_14));
            ;
            LocalPopChoice(s_9);
          }
        else
          {
            t = n_9;
            t = i_14(t);
          }
      }
    }
  else
    {
      t = i_14(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_Stream_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      t = SSL_read_term_from_stream(not_null(m_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm r_14 = NULL,t_14 = NULL;
    ATerm u_9;
    u_9 = t;
    {
      ATerm s_14 = NULL;
      t = w_93(t);
      {
        s_14 = t;
        if(((r_14 != NULL) && (r_14 != s_14)))
          _fail(s_14);
        else
          r_14 = s_14;
      }
    }
    t = u_9;
    {
      ATerm u_14 = NULL;
      u_14 = t;
      if(((t_14 != NULL) && (t_14 != u_14)))
        _fail(u_14);
      else
        t_14 = u_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_14)), not_null(r_14)));
        t = printnl_0(t);
      }
    }
  }
  t = t_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym__2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15 = NULL;
        t = SSL_fopen(not_null(b_15), not_null(c_15));
        {
          ATerm g_15 = NULL;
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_15));
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
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_is_string(not_null(k_15));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_15 = NULL;
    p_15 = t;
    if(((o_15 != NULL) && (o_15 != p_15)))
      _fail(p_15);
    else
      o_15 = p_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_15));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_15 = NULL;
    t_15 = t;
    if(((s_15 != NULL) && (s_15 != t_15)))
      _fail(t_15);
    else
      s_15 = t_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_15));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_15 = NULL;
    x_15 = t;
    if(((w_15 != NULL) && (w_15 != x_15)))
      _fail(x_15);
    else
      w_15 = x_15;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_15));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(d_16, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(d_16, sym_stdin_0))
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
  ATerm n_16 = NULL;
  ATerm p_16 = NULL,q_16 = NULL;
  n_16 = t;
  {
    ATerm r_16 = NULL;
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(n_16);
    {
      r_16 = t;
      {
        t = SSL_explode_term(not_null(r_16));
        {
          t_16 = t;
          k_16 :
          if(match_cons(t_16, sym__2))
            {
              u_16 = ATgetArgument(t_16, 0);
              v_16 = ATgetArgument(t_16, 1);
              l_16 :
              if(match_string(u_16, ""))
                {
                  m_16 :
                  if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
                    {
                      w_16 = ATgetFirst((ATermList) v_16);
                      x_16 = (ATerm) ATgetNext((ATermList) v_16);
                      {
                        if(((q_16 != NULL) && (q_16 != w_16)))
                          _fail(w_16);
                        else
                          q_16 = w_16;
                        if(((p_16 != NULL) && (p_16 != x_16)))
                          _fail(x_16);
                        else
                          p_16 = x_16;
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
    t = not_null(q_16);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      {
        ATerm v_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = v_9;
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    ATerm i_17 = NULL,j_17 = NULL;
                    i_17 = t;
                    d_17 :
                    if(match_cons(i_17, sym_Path_1))
                      {
                        j_17 = ATgetArgument(i_17, 0);
                        t = not_null(j_17);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
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
  ATerm r_17 = NULL;
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL;
      ATerm q_17 = NULL;
      q_17 = t;
      if(((p_17 != NULL) && (p_17 != q_17)))
        _fail(q_17);
      else
        p_17 = q_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), term_f_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_g_10;
          return(t);
        }
        t = debug_1(t, e_1);
        _fail(t);
      }
    }
  {
    ATerm i_10;
    i_10 = t;
    {
      ATerm s_17 = NULL;
      t = read_from_stream_0(t);
      {
        s_17 = t;
        if(((r_17 != NULL) && (r_17 != s_17)))
          _fail(s_17);
        else
          r_17 = s_17;
      }
    }
    t = i_10;
    {
      t = fclose_0(t);
      t = not_null(r_17);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm x_17 = NULL,z_17 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm y_17 = NULL;
    t = o_89(t);
    {
      y_17 = t;
      if(((x_17 != NULL) && (x_17 != y_17)))
        _fail(y_17);
      else
        x_17 = y_17;
    }
  }
  t = l_10;
  {
    ATerm a_18 = NULL;
    t = p_89(t);
    {
      a_18 = t;
      if(((z_17 != NULL) && (z_17 != a_18)))
        _fail(a_18);
      else
        z_17 = a_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm n_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_18 = NULL,i_18 = NULL;
          h_18 = t;
          e_18 :
          if(match_cons(h_18, sym_Input_1))
            {
              i_18 = ATgetArgument(h_18, 0);
              if(((g_18 != NULL) && (g_18 != i_18)))
                _fail(i_18);
              else
                g_18 = i_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = n_10;
        {
          ATerm j_18 = NULL;
          t = term_r_10;
          {
            j_18 = t;
            if(((g_18 != NULL) && (g_18 != j_18)))
              _fail(j_18);
            else
              g_18 = j_18;
          }
        }
      }
  }
  t = m_10;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(g_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm o_18 = NULL;
    o_18 = t;
    m_18 :
    if(!(match_string(o_18, "-k")))
      {
        if(!(match_string(o_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm p_18 = NULL;
      ATerm q_18 = NULL;
      t = string_to_int_0(t);
      {
        q_18 = t;
        if(((p_18 != NULL) && (p_18 != q_18)))
          _fail(q_18);
        else
          p_18 = q_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(p_18));
        t = set_config_0(t);
      }
    }
    t = s_10;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_a_11;
    return(t);
  }
  t = ArgOption_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  t = SSL_string_to_int(not_null(t_18));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm b_19 = NULL;
        b_19 = t;
        w_18 :
        if(!(match_string(b_19, "-S")))
          {
            if(!(match_string(b_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_g_11;
        t = set_config_0(t);
        t = term_n_11;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_o_11;
        return(t);
      }
      t = Option_3(t, n_1, o_1, p_1);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm c_19 = NULL;
              c_19 = t;
              x_18 :
              if(!(match_string(c_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm f_19 = NULL;
              ATerm t_11;
              t_11 = t;
              {
                ATerm d_19 = NULL;
                ATerm e_19 = NULL;
                t = string_to_int_0(t);
                {
                  e_19 = t;
                  if(((d_19 != NULL) && (d_19 != e_19)))
                    _fail(e_19);
                  else
                    d_19 = e_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(d_19));
                  t = set_config_0(t);
                }
              }
              t = t_11;
              {
                ATerm g_19 = NULL;
                g_19 = t;
                if(((f_19 != NULL) && (f_19 != g_19)))
                  _fail(g_19);
                else
                  f_19 = g_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_19));
              }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_w_11;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, u_1);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm v_1 (ATerm t)
              {
                ATerm h_19 = NULL;
                h_19 = t;
                a_19 :
                if(!(match_string(h_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_y_11;
                t = set_config_0(t);
                t = term_f_12;
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_g_12;
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
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm n_19 = NULL;
    n_19 = t;
    k_19 :
    if(!(match_string(n_19, "-o")))
      {
        if(!(match_string(n_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm q_19 = NULL;
    ATerm l_12;
    l_12 = t;
    {
      ATerm o_19 = NULL;
      ATerm p_19 = NULL;
      p_19 = t;
      if(((o_19 != NULL) && (o_19 != p_19)))
        _fail(p_19);
      else
        o_19 = p_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_12, not_null(o_19));
        t = set_config_0(t);
      }
    }
    t = l_12;
    {
      ATerm r_19 = NULL;
      r_19 = t;
      if(((q_19 != NULL) && (q_19 != r_19)))
        _fail(r_19);
      else
        q_19 = r_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_19));
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_n_12;
    return(t);
  }
  t = ArgOption_3(t, c_2, k_2, l_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm v_19 = NULL;
          v_19 = t;
          u_19 :
          if(!(match_string(v_19, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_z_12;
          t = set_config_0(t);
          t = term_a_13;
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_b_13;
          return(t);
        }
        t = Option_3(t, m_2, n_2, o_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  b_20 = t;
  z_19 :
  if(match_string(b_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_20) == AT_LIST) && !(ATisEmpty(b_20))))
        {
          c_20 = ATgetFirst((ATermList) b_20);
          d_20 = (ATerm) ATgetNext((ATermList) b_20);
          a_20 :
          if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
            {
              e_20 = ATgetFirst((ATermList) d_20);
              f_20 = (ATerm) ATgetNext((ATermList) d_20);
              {
                ATerm j_20 = NULL;
                ATerm d_13;
                d_13 = t;
                {
                  t = not_null(c_20);
                  t = j_0(t);
                }
                t = d_13;
                {
                  ATerm k_20 = NULL;
                  t = not_null(e_20);
                  {
                    t = k_0(t);
                    {
                      k_20 = t;
                      if(((j_20 != NULL) && (j_20 != k_20)))
                        _fail(k_20);
                      else
                        j_20 = k_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_20)), not_null(j_20));
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
  ATerm p_2 (ATerm t)
  {
    ATerm r_20 = NULL;
    r_20 = t;
    o_20 :
    if(!(match_string(r_20, "-i")))
      {
        if(!(match_string(r_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm u_20 = NULL;
    ATerm k_13;
    k_13 = t;
    {
      ATerm s_20 = NULL;
      ATerm t_20 = NULL;
      t_20 = t;
      if(((s_20 != NULL) && (s_20 != t_20)))
        _fail(t_20);
      else
        s_20 = t_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(s_20));
        t = set_config_0(t);
      }
    }
    t = k_13;
    {
      ATerm v_20 = NULL;
      v_20 = t;
      if(((u_20 != NULL) && (u_20 != v_20)))
        _fail(v_20);
      else
        u_20 = v_20;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_20));
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = n_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm z_20 = NULL;
  t = report_run_time_0(t);
  {
    ATerm a_21 = NULL;
    t = term_f_7;
    {
      t = whoami_0(t);
      {
        a_21 = t;
        if(((z_20 != NULL) && (z_20 != a_21)))
          _fail(a_21);
        else
          z_20 = a_21;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, term_x_13), not_null(z_20)));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_y_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_TicksToSeconds(not_null(d_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym__2))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      {
        ATerm z_13 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_21), not_null(k_21));
            ;
            LocalPopChoice(d_14);
          }
        else
          {
            t = z_13;
            t = SSL_addr(not_null(j_21), not_null(k_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_87(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
        r_21 = t;
        q_21 :
        if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
          {
            s_21 = ATgetFirst((ATermList) r_21);
            t_21 = (ATerm) ATgetNext((ATermList) r_21);
            {
              ATerm w_21 = NULL;
              ATerm x_21 = NULL;
              t = not_null(t_21);
              {
                t = foldr_2(t, z_87, a_88);
                {
                  x_21 = t;
                  if(((w_21 != NULL) && (w_21 != x_21)))
                    _fail(x_21);
                  else
                    w_21 = x_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), not_null(w_21));
                t = a_88(t);
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
ATerm crush_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm e_22 = NULL;
  ATerm g_22 = NULL;
  e_22 = t;
  {
    ATerm h_22 = NULL;
    ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
    t = not_null(e_22);
    {
      h_22 = t;
      {
        t = SSL_explode_term(not_null(h_22));
        {
          j_22 = t;
          d_22 :
          if(match_cons(j_22, sym__2))
            {
              k_22 = ATgetArgument(j_22, 0);
              l_22 = ATgetArgument(j_22, 1);
              if(((g_22 != NULL) && (g_22 != l_22)))
                _fail(l_22);
              else
                g_22 = l_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_22);
      t = foldr_2(t, s_91, t_91);
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
    ATerm s_2 (ATerm t)
    {
      t = term_f_11;
      return(t);
    }
    t = crush_2(t, s_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym__2))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      {
        ATerm g_14;
        g_14 = t;
        {
          ATerm h_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_22), not_null(t_22));
              ;
              LocalPopChoice(j_14);
            }
          else
            {
              t = h_14;
              t = SSL_gtr(not_null(s_22), not_null(t_22));
            }
        }
        t = g_14;
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
  ATerm z_22 = NULL;
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
      a_23 = t;
      y_22 :
      if(match_cons(a_23, sym__2))
        {
          b_23 = ATgetArgument(a_23, 0);
          c_23 = ATgetArgument(a_23, 1);
          {
            if(((z_22 != NULL) && (z_22 != b_23)))
              _fail(b_23);
            else
              z_22 = b_23;
            if(((z_22 != NULL) && (z_22 != c_23)))
              _fail(c_23);
            else
              z_22 = c_23;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm f_23 = NULL;
      ATerm g_23 = NULL;
      t = term_v_8;
      {
        t = get_config_0(t);
        {
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_l_7);
        t = geq_0(t);
      }
    }
    t = p_14;
    t = n_95(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm k_23 = NULL,m_23 = NULL;
    ATerm q_14;
    q_14 = t;
    {
      ATerm l_23 = NULL;
      t = run_time_0(t);
      {
        l_23 = t;
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
      }
    }
    t = q_14;
    {
      ATerm n_23 = NULL;
      t = term_f_7;
      {
        t = whoami_0(t);
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), not_null(k_23)), term_v_14), not_null(m_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Version_0))
    {
      ATerm w_23 = NULL,y_23 = NULL;
      ATerm x_14;
      x_14 = t;
      {
        ATerm x_23 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          x_23 = t;
          if(((w_23 != NULL) && (w_23 != x_23)))
            _fail(x_23);
          else
            w_23 = x_23;
        }
      }
      t = x_14;
      {
        ATerm z_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        t = not_null(y_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm y_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = y_14;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              {
                ATerm j_15 = t;
                int l_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(l_15);
                  }
                else
                  {
                    t = j_15;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, z_2);
      }
    }
  t = k_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  t = SSL_table_create(not_null(e_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  {
    ATerm m_15;
    m_15 = t;
    {
      t = term_n_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_15, term_q_15, not_null(i_24));
          t = table_put_0(t);
        }
      }
    }
    t = m_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  t = SSL_table_destroy(not_null(m_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_exit(not_null(q_24));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm t_24 (ATerm t)
  {
    ATerm r_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = r_15;
        t = Cons_2(t, y_81, t_24);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  z_24 :
  if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
    {
      a_25 = ATgetFirst((ATermList) c_25);
      b_25 = (ATerm) ATgetNext((ATermList) c_25);
      {
        ATerm f_25 = NULL;
        t = not_null(b_25);
        {
          ATerm v_15;
          v_15 = t;
          {
            ATerm g_25 = NULL,i_25 = NULL,k_25 = NULL;
            ATerm y_15;
            y_15 = t;
            {
              ATerm h_25 = NULL;
              t = i_0(t);
              {
                h_25 = t;
                if(((g_25 != NULL) && (g_25 != h_25)))
                  _fail(h_25);
                else
                  g_25 = h_25;
              }
            }
            t = y_15;
            {
              ATerm j_25 = NULL;
              t = not_null(a_25);
              {
                t = g_0(t);
                {
                  j_25 = t;
                  if(((i_25 != NULL) && (i_25 != j_25)))
                    _fail(j_25);
                  else
                    i_25 = j_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_25)), not_null(i_25));
                {
                  k_25 = t;
                  if(((f_25 != NULL) && (f_25 != k_25)))
                    _fail(k_25);
                  else
                    f_25 = k_25;
                }
              }
            }
          }
          t = v_15;
          {
            ATerm a_3 (ATerm t)
            {
              t = not_null(f_25);
              return(t);
            }
            t = reverse_acc_2(t, g_0, a_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_25) == AT_LIST) && ATisEmpty(c_25)))
        {
          {
            t = term_f_7;
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
  ATerm p_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Program_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      {
        ATerm z_25 = NULL,b_26 = NULL;
        ATerm a_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm k_26 = NULL;
            t = a_67(t);
            {
              b_26 = t;
              {
                ATerm l_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_26)), not_null(z_25));
                {
                  l_26 = t;
                  if(((k_26 != NULL) && (k_26 != l_26)))
                    _fail(l_26);
                  else
                    k_26 = l_26;
                }
                t = not_null(k_26);
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
  ATerm u_26 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      t = term_y_13;
      {
        t = get_config_0(t);
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_3 (ATerm t)
          {
            ATerm w_26 = NULL;
            w_26 = t;
            if(((u_26 != NULL) && (u_26 != w_26)))
              _fail(w_26);
            else
              u_26 = w_26;
            return(t);
          }
          t = Program_1(t, r_3);
          return(t);
        }
        t = option_defined_1(t, q_3);
      }
    }
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(u_26);
        return(t);
      }
      t = short_description_1(t, t_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_3);
    {
      t = term_b_16;
      {
        t = echo_0(t);
        {
          t = term_g_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm x_26 = NULL;
                  ATerm y_26 = NULL;
                  y_26 = t;
                  if(((x_26 != NULL) && (x_26 != y_26)))
                    _fail(y_26);
                  else
                    x_26 = y_26;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_26)), term_h_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_3);
                {
                  ATerm v_3 (ATerm t)
                  {
                    ATerm z_26 = NULL;
                    ATerm a_27 = NULL;
                    ATerm w_3 (ATerm t)
                    {
                      t = not_null(u_26);
                      return(t);
                    }
                    t = long_description_1(t, w_3);
                    {
                      a_27 = t;
                      if(((z_26 != NULL) && (z_26 != a_27)))
                        _fail(a_27);
                      else
                        z_26 = a_27;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_26)), term_i_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_3);
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
  ATerm j_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = j_16;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Undefined_1))
    {
      l_27 = ATgetArgument(k_27, 0);
      {
        ATerm o_27 = NULL,q_27 = NULL;
        ATerm p_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
        {
          t = not_null(l_27);
          {
            ATerm s_27 = NULL;
            t = b_67(t);
            {
              q_27 = t;
              {
                ATerm y_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_27)), not_null(o_27));
                {
                  y_27 = t;
                  if(((s_27 != NULL) && (s_27 != y_27)))
                    _fail(y_27);
                  else
                    s_27 = y_27;
                }
                t = not_null(s_27);
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
ATerm fetch_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm d_28 (ATerm t)
  {
    ATerm s_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_82, _id);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, d_28);
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_99 (ATerm))
{
  t = fetch_1(t, k_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  e_28 :
  if(((ATgetType(f_28) == AT_LIST) && ATisEmpty(f_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_28) == AT_LIST) && !(ATisEmpty(f_28))))
        {
          g_28 = ATgetFirst((ATermList) f_28);
          h_28 = (ATerm) ATgetNext((ATermList) f_28);
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
  ATerm z_16;
  z_16 = t;
  {
    ATerm k_28 = NULL;
    ATerm q_28 = NULL;
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        {
          ATerm l_28 = NULL;
          ATerm p_28 = NULL;
          p_28 = t;
          if(((l_28 != NULL) && (l_28 != p_28)))
            _fail(p_28);
          else
            l_28 = p_28;
          t = (ATerm) ATinsert(ATempty, not_null(l_28));
        }
      }
    {
      q_28 = t;
      if(((k_28 != NULL) && (k_28 != q_28)))
        _fail(q_28);
      else
        k_28 = q_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(k_28));
      t = printnl_0(t);
    }
  }
  t = z_16;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_y_13;
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
  ATerm c_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = c_17;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Help_0))
    {
      ATerm z_28 = NULL,b_29 = NULL;
      ATerm l_17;
      l_17 = t;
      {
        ATerm a_29 = NULL;
        t = SSLgetAnnotations(not_null(x_28));
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
      }
      t = l_17;
      {
        ATerm c_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        t = not_null(b_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm o_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm i_29 = NULL;
        i_29 = t;
        g_29 :
        if(!(match_string(i_29, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_v_17;
        t = set_config_0(t);
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_w_17;
        return(t);
      }
      t = Option_3(t, x_3, c_4, d_4);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = o_17;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm j_29 = NULL;
          j_29 = t;
          h_29 :
          if(!(match_string(j_29, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_v_17;
          {
            t = set_config_0(t);
            {
              t = term_c_18;
              t = set_config_0(t);
            }
          }
          t = term_d_18;
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        t = Option_3(t, e_4, f_4, k_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym__2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      t = SSL_table_get(not_null(n_29), not_null(o_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__3))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      y_29 = ATgetArgument(v_29, 2);
      {
        ATerm k_18;
        k_18 = t;
        {
          ATerm c_30 = NULL;
          ATerm d_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_29), not_null(x_29));
          {
            ATerm l_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = l_18;
                t = (ATerm) ATempty;
              }
            {
              d_30 = t;
              if(((c_30 != NULL) && (c_30 != d_30)))
                _fail(d_30);
              else
                c_30 = d_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_29), not_null(x_29), (ATerm) ATinsert(CheckATermList(not_null(c_30)), not_null(y_29)));
            t = table_put_0(t);
          }
        }
        t = k_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_100 (ATerm))
{
  ATerm h_30 = NULL;
  ATerm i_30 = NULL;
  t = term_f_7;
  {
    t = p_100(t);
    {
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_16, term_f_16, not_null(h_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_string(o_30, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          p_30 = ATgetFirst((ATermList) o_30);
          q_30 = (ATerm) ATgetNext((ATermList) o_30);
          {
            ATerm t_30 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              t = not_null(p_30);
              t = a_0(t);
            }
            t = r_18;
            {
              ATerm u_30 = NULL;
              t = term_f_7;
              {
                t = b_0(t);
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_30)), not_null(t_30));
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
  ATerm l_4 (ATerm t)
  {
    ATerm z_30 = NULL;
    z_30 = t;
    y_30 :
    if(!(match_string(z_30, "--help")))
      {
        if(!(match_string(z_30, "-h")))
          {
            if(!(match_string(z_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_s_18;
    {
      t = set_config_0(t);
      t = term_u_18;
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  t = Option_3(t, l_4, n_4, o_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  b_31 :
  if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
    {
      d_31 = ATgetFirst((ATermList) c_31);
      e_31 = (ATerm) ATgetNext((ATermList) c_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
    {
      p_31 = ATgetFirst((ATermList) o_31);
      q_31 = (ATerm) ATgetNext((ATermList) o_31);
      {
        ATerm u_31 = NULL,w_31 = NULL;
        ATerm v_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm y_31 = NULL;
            t = j_61(t);
            {
              w_31 = t;
              {
                t = not_null(q_31);
                {
                  ATerm a_32 = NULL;
                  t = k_61(t);
                  {
                    y_31 = t;
                    {
                      ATerm b_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_31)), not_null(w_31)), not_null(u_31));
                      {
                        b_32 = t;
                        if(((a_32 != NULL) && (a_32 != b_32)))
                          _fail(b_32);
                        else
                          a_32 = b_32;
                      }
                      t = not_null(a_32);
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
  ATerm l_32 = NULL;
  l_32 = t;
  k_32 :
  if(((ATgetType(l_32) == AT_LIST) && ATisEmpty(l_32)))
    {
      {
        ATerm n_32 = NULL,p_32 = NULL;
        ATerm y_18;
        y_18 = t;
        {
          ATerm o_32 = NULL;
          t = SSLgetAnnotations(not_null(l_32));
          {
            o_32 = t;
            if(((n_32 != NULL) && (n_32 != o_32)))
              _fail(o_32);
            else
              n_32 = o_32;
          }
        }
        t = y_18;
        {
          ATerm q_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_32));
          {
            q_32 = t;
            if(((p_32 != NULL) && (p_32 != q_32)))
              _fail(q_32);
            else
              p_32 = q_32;
          }
          t = not_null(p_32);
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
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(x_32), not_null(y_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm z_18;
  z_18 = t;
  {
    ATerm p_4 (ATerm t)
    {
      t = term_i_19;
      t = n_100(t);
      return(t);
    }
    t = try_1(t, p_4);
  }
  t = z_18;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm l_33 = NULL;
      ATerm j_19;
      j_19 = t;
      {
        ATerm j_33 = NULL;
        ATerm k_33 = NULL;
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(j_33));
          t = set_config_0(t);
        }
      }
      t = j_19;
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
    ATerm v_4 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              {
                t = n_100(t);
                t = Cons_2(t, _id, v_4);
              }
            }
          ;
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_4, v_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  ATerm w_19;
  w_19 = t;
  {
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
    v_33 = t;
    r_33 :
    if(match_cons(v_33, sym__3))
      {
        w_33 = ATgetArgument(v_33, 0);
        x_33 = ATgetArgument(v_33, 1);
        y_33 = ATgetArgument(v_33, 2);
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
              if(((u_33 != NULL) && (u_33 != y_33)))
                _fail(y_33);
              else
                u_33 = y_33;
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
  t = w_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm f_34 = NULL;
  ATerm x_19;
  x_19 = t;
  {
    t = term_y_19;
    t = table_put_0(t);
  }
  t = x_19;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_100(t);
          ;
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          {
            ATerm i_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(l_20);
              }
            else
              {
                t = i_20;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, w_4);
    {
      ATerm x_4 (ATerm t)
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20;
            p_20 = t;
            {
              ATerm q_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = q_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = p_20;
            {
              t = system_usage_0(t);
              {
                t = term_f_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_21;
                  b_21 = t;
                  {
                    t = term_u_17;
                    t = get_config_0(t);
                  }
                  t = b_21;
                  {
                    t = system_about_0(t);
                    {
                      t = term_f_11;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  {
                    ATerm z_4 (ATerm t)
                    {
                      ATerm a_5 (ATerm t)
                      {
                        ATerm g_34 = NULL;
                        g_34 = t;
                        if(((f_34 != NULL) && (f_34 != g_34)))
                          _fail(g_34);
                        else
                          f_34 = g_34;
                        return(t);
                      }
                      t = Undefined_1(t, a_5);
                      return(t);
                    }
                    t = option_defined_1(t, z_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_34)), term_c_21));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_l_7;
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
      t = try_1(t, x_4);
      {
        ATerm e_21;
        e_21 = t;
        {
          t = term_e_16;
          t = table_destroy_0(t);
        }
        t = e_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  t = parse_options_1(t, m_98);
  {
    t = store_options_0(t);
    {
      t = o_98(t);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_98);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm l_21 = t;
              int m_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_21);
                }
              else
                {
                  t = l_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_5, d_98, e_98, g_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      ATerm p_21;
      p_21 = t;
      {
        ATerm j_34 = NULL;
        ATerm k_34 = NULL;
        t = term_y_13;
        {
          t = get_config_0(t);
          {
            k_34 = t;
            if(((j_34 != NULL) && (j_34 != k_34)))
              _fail(k_34);
            else
              j_34 = k_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, not_null(j_34)));
          t = printnl_0(t);
        }
      }
      t = p_21;
      return(t);
    }
    t = if_verbose2_1(t, m_5);
    return(t);
  }
  t = iowrap_4(t, v_97, w_97, x_97, h_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm))
{
  t = iowrap_3(t, t_97, u_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    t = _2(t, _id, q_97);
    return(t);
  }
  t = iowrap_2(t, n_5, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm n_34 = NULL;
    t = get_primitives_0(t);
    {
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, not_null(n_34))));
    }
    return(t);
  }
  t = iowrap_1(t, o_5);
  return(t);
}
