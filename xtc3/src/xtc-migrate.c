#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_F__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_ErrorNumber_1;
static Symbol sym_Path_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Emergency_0;
static Symbol sym_Alert_0;
static Symbol sym_Critical_0;
static Symbol sym_Error_0;
static Symbol sym_Warning_0;
static Symbol sym_Notice_0;
static Symbol sym_Info_0;
static Symbol sym_Debug_0;
static Symbol sym_Vomit_0;
static Symbol sym_Repository_1;
static Symbol sym_Registration_2;
static Symbol sym_Reference_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_String_1;
static Symbol sym_Post_0;
static Symbol sym_Pre_0;
static Symbol sym_XtcContract_3;
static Symbol sym_Arguments_1;
static Symbol sym_FILE_1;
static Symbol sym_URL_1;
static Symbol sym_ArgOption_2;
static Symbol sym_Option_1;
static Symbol sym_File_1;
static Symbol sym_Std_1;
static Symbol sym_Error_1;
static Symbol sym_Output_1;
static Symbol sym_Input_1;
static Symbol sym_Streams_3;
static Symbol sym_HTTP_1;
static Symbol sym_XTService_0;
static Symbol sym_Exec_1;
static Symbol sym_XT_0;
static Symbol sym_XtcDesc_1;
static Symbol sym_XtcContracts_1;
static Symbol sym_XtcModel_2;
static Symbol sym_XtcInherit_2;
static Symbol sym_XtcMeta_2;
static Symbol sym_XtcQuery_1;
static Symbol sym_XtcQuery_2;
static Symbol sym_XtcQuery_1;
static Symbol sym_Type_1;
static Symbol sym_ArgOption_0;
static Symbol sym_Option_0;
static Symbol sym_On_0;
static Symbol sym_Values_1;
static Symbol sym_Default_1;
static Symbol sym_TVarStar_4;
static Symbol sym_TVarPlus_4;
static Symbol sym_TVarOne_4;
static Symbol sym_TVarOpt_4;
static Symbol sym_Arguments_0;
static Symbol sym_Error_0;
static Symbol sym_Output_0;
static Symbol sym_Input_0;
static Symbol sym_TVarSpec_1;
static Symbol sym_TOr_2;
static Symbol sym_Layout_1;
static Symbol sym_Regular_0;
static Symbol sym_Implicit_0;
static Symbol sym_Explicit_0;
static Symbol sym_Template_2;
static Symbol sym_XtcReg_0;
static Symbol sym_XtcRef_0;
static Symbol sym_XtcCache_0;
static Symbol sym_XtcImported_0;
static Symbol sym_XtcLoaded_0;
static Symbol sym_XtcConf_4;
static Symbol sym_Tool_1;
static Symbol sym_Import_0;
static Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Emergency_0 = ATmakeSymbol("Emergency", 0, ATfalse);
  ATprotectSymbol(sym_Emergency_0);
  sym_Alert_0 = ATmakeSymbol("Alert", 0, ATfalse);
  ATprotectSymbol(sym_Alert_0);
  sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
  ATprotectSymbol(sym_Critical_0);
  sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
  ATprotectSymbol(sym_Error_0);
  sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
  ATprotectSymbol(sym_Warning_0);
  sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
  ATprotectSymbol(sym_Notice_0);
  sym_Info_0 = ATmakeSymbol("Info", 0, ATfalse);
  ATprotectSymbol(sym_Info_0);
  sym_Debug_0 = ATmakeSymbol("Debug", 0, ATfalse);
  ATprotectSymbol(sym_Debug_0);
  sym_Vomit_0 = ATmakeSymbol("Vomit", 0, ATfalse);
  ATprotectSymbol(sym_Vomit_0);
  sym_Repository_1 = ATmakeSymbol("Repository", 1, ATfalse);
  ATprotectSymbol(sym_Repository_1);
  sym_Registration_2 = ATmakeSymbol("Registration", 2, ATfalse);
  ATprotectSymbol(sym_Registration_2);
  sym_Reference_1 = ATmakeSymbol("Reference", 1, ATfalse);
  ATprotectSymbol(sym_Reference_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_String_1 = ATmakeSymbol("String", 1, ATfalse);
  ATprotectSymbol(sym_String_1);
  sym_Post_0 = ATmakeSymbol("Post", 0, ATfalse);
  ATprotectSymbol(sym_Post_0);
  sym_Pre_0 = ATmakeSymbol("Pre", 0, ATfalse);
  ATprotectSymbol(sym_Pre_0);
  sym_XtcContract_3 = ATmakeSymbol("XtcContract", 3, ATfalse);
  ATprotectSymbol(sym_XtcContract_3);
  sym_Arguments_1 = ATmakeSymbol("Arguments", 1, ATfalse);
  ATprotectSymbol(sym_Arguments_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_URL_1 = ATmakeSymbol("URL", 1, ATfalse);
  ATprotectSymbol(sym_URL_1);
  sym_ArgOption_2 = ATmakeSymbol("ArgOption", 2, ATfalse);
  ATprotectSymbol(sym_ArgOption_2);
  sym_Option_1 = ATmakeSymbol("Option", 1, ATfalse);
  ATprotectSymbol(sym_Option_1);
  sym_File_1 = ATmakeSymbol("File", 1, ATfalse);
  ATprotectSymbol(sym_File_1);
  sym_Std_1 = ATmakeSymbol("Std", 1, ATfalse);
  ATprotectSymbol(sym_Std_1);
  sym_Error_1 = ATmakeSymbol("Error", 1, ATfalse);
  ATprotectSymbol(sym_Error_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Streams_3 = ATmakeSymbol("Streams", 3, ATfalse);
  ATprotectSymbol(sym_Streams_3);
  sym_HTTP_1 = ATmakeSymbol("HTTP", 1, ATfalse);
  ATprotectSymbol(sym_HTTP_1);
  sym_XTService_0 = ATmakeSymbol("XTService", 0, ATfalse);
  ATprotectSymbol(sym_XTService_0);
  sym_Exec_1 = ATmakeSymbol("Exec", 1, ATfalse);
  ATprotectSymbol(sym_Exec_1);
  sym_XT_0 = ATmakeSymbol("XT", 0, ATfalse);
  ATprotectSymbol(sym_XT_0);
  sym_XtcDesc_1 = ATmakeSymbol("XtcDesc", 1, ATfalse);
  ATprotectSymbol(sym_XtcDesc_1);
  sym_XtcContracts_1 = ATmakeSymbol("XtcContracts", 1, ATfalse);
  ATprotectSymbol(sym_XtcContracts_1);
  sym_XtcModel_2 = ATmakeSymbol("XtcModel", 2, ATfalse);
  ATprotectSymbol(sym_XtcModel_2);
  sym_XtcInherit_2 = ATmakeSymbol("XtcInherit", 2, ATfalse);
  ATprotectSymbol(sym_XtcInherit_2);
  sym_XtcMeta_2 = ATmakeSymbol("XtcMeta", 2, ATfalse);
  ATprotectSymbol(sym_XtcMeta_2);
  sym_XtcQuery_1 = ATmakeSymbol("XtcQuery", 1, ATfalse);
  ATprotectSymbol(sym_XtcQuery_1);
  sym_XtcQuery_2 = ATmakeSymbol("XtcQuery", 2, ATfalse);
  ATprotectSymbol(sym_XtcQuery_2);
  sym_XtcQuery_1 = ATmakeSymbol("XtcQuery", 1, ATfalse);
  ATprotectSymbol(sym_XtcQuery_1);
  sym_Type_1 = ATmakeSymbol("Type", 1, ATfalse);
  ATprotectSymbol(sym_Type_1);
  sym_ArgOption_0 = ATmakeSymbol("ArgOption", 0, ATfalse);
  ATprotectSymbol(sym_ArgOption_0);
  sym_Option_0 = ATmakeSymbol("Option", 0, ATfalse);
  ATprotectSymbol(sym_Option_0);
  sym_On_0 = ATmakeSymbol("On", 0, ATfalse);
  ATprotectSymbol(sym_On_0);
  sym_Values_1 = ATmakeSymbol("Values", 1, ATfalse);
  ATprotectSymbol(sym_Values_1);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_TVarStar_4 = ATmakeSymbol("TVarStar", 4, ATfalse);
  ATprotectSymbol(sym_TVarStar_4);
  sym_TVarPlus_4 = ATmakeSymbol("TVarPlus", 4, ATfalse);
  ATprotectSymbol(sym_TVarPlus_4);
  sym_TVarOne_4 = ATmakeSymbol("TVarOne", 4, ATfalse);
  ATprotectSymbol(sym_TVarOne_4);
  sym_TVarOpt_4 = ATmakeSymbol("TVarOpt", 4, ATfalse);
  ATprotectSymbol(sym_TVarOpt_4);
  sym_Arguments_0 = ATmakeSymbol("Arguments", 0, ATfalse);
  ATprotectSymbol(sym_Arguments_0);
  sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
  ATprotectSymbol(sym_Error_0);
  sym_Output_0 = ATmakeSymbol("Output", 0, ATfalse);
  ATprotectSymbol(sym_Output_0);
  sym_Input_0 = ATmakeSymbol("Input", 0, ATfalse);
  ATprotectSymbol(sym_Input_0);
  sym_TVarSpec_1 = ATmakeSymbol("TVarSpec", 1, ATfalse);
  ATprotectSymbol(sym_TVarSpec_1);
  sym_TOr_2 = ATmakeSymbol("TOr", 2, ATfalse);
  ATprotectSymbol(sym_TOr_2);
  sym_Layout_1 = ATmakeSymbol("Layout", 1, ATfalse);
  ATprotectSymbol(sym_Layout_1);
  sym_Regular_0 = ATmakeSymbol("Regular", 0, ATfalse);
  ATprotectSymbol(sym_Regular_0);
  sym_Implicit_0 = ATmakeSymbol("Implicit", 0, ATfalse);
  ATprotectSymbol(sym_Implicit_0);
  sym_Explicit_0 = ATmakeSymbol("Explicit", 0, ATfalse);
  ATprotectSymbol(sym_Explicit_0);
  sym_Template_2 = ATmakeSymbol("Template", 2, ATfalse);
  ATprotectSymbol(sym_Template_2);
  sym_XtcReg_0 = ATmakeSymbol("XtcReg", 0, ATfalse);
  ATprotectSymbol(sym_XtcReg_0);
  sym_XtcRef_0 = ATmakeSymbol("XtcRef", 0, ATfalse);
  ATprotectSymbol(sym_XtcRef_0);
  sym_XtcCache_0 = ATmakeSymbol("XtcCache", 0, ATfalse);
  ATprotectSymbol(sym_XtcCache_0);
  sym_XtcImported_0 = ATmakeSymbol("XtcImported", 0, ATfalse);
  ATprotectSymbol(sym_XtcImported_0);
  sym_XtcLoaded_0 = ATmakeSymbol("XtcLoaded", 0, ATfalse);
  ATprotectSymbol(sym_XtcLoaded_0);
  sym_XtcConf_4 = ATmakeSymbol("XtcConf", 4, ATfalse);
  ATprotectSymbol(sym_XtcConf_4);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
static ATerm term_o_89;
static ATerm term_d_89;
static ATerm term_a_89;
static ATerm term_z_88;
static ATerm term_y_88;
static ATerm term_t_88;
static ATerm term_s_88;
static ATerm term_r_88;
static ATerm term_q_88;
static ATerm term_l_88;
static ATerm term_k_88;
static ATerm term_j_88;
static ATerm term_i_88;
static ATerm term_h_88;
static ATerm term_g_88;
static ATerm term_f_88;
static ATerm term_a_88;
static ATerm term_z_87;
static ATerm term_y_87;
static ATerm term_n_87;
static ATerm term_c_87;
static ATerm term_b_87;
static ATerm term_a_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_v_86;
static ATerm term_q_86;
static ATerm term_p_86;
static ATerm term_o_86;
static ATerm term_j_86;
static ATerm term_g_86;
static ATerm term_f_86;
static ATerm term_e_86;
static ATerm term_d_86;
static ATerm term_c_86;
static ATerm term_v_85;
static ATerm term_u_85;
static ATerm term_t_85;
static ATerm term_s_85;
static ATerm term_r_85;
static ATerm term_q_85;
static ATerm term_o_85;
static ATerm term_n_85;
static ATerm term_m_85;
static ATerm term_j_85;
static ATerm term_s_84;
static ATerm term_p_84;
static ATerm term_o_84;
static ATerm term_p_83;
static ATerm term_o_83;
static ATerm term_n_83;
static ATerm term_m_83;
static ATerm term_f_83;
static ATerm term_d_82;
static ATerm term_x_81;
static ATerm term_q_81;
static ATerm term_n_81;
static ATerm term_h_80;
static ATerm term_d_80;
static ATerm term_o_79;
static ATerm term_j_79;
static ATerm term_i_77;
static ATerm term_s_74;
static ATerm term_r_74;
static ATerm term_q_74;
static ATerm term_p_74;
static ATerm term_o_74;
static ATerm term_n_74;
static ATerm term_w_72;
static ATerm term_t_72;
static ATerm term_s_72;
static ATerm term_r_72;
static ATerm term_q_72;
static ATerm term_m_72;
static ATerm term_s_71;
static ATerm term_r_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_o_71;
static ATerm term_l_71;
static ATerm term_c_71;
static ATerm term_b_71;
static ATerm term_a_71;
static ATerm term_q_70;
static ATerm term_l_67;
static ATerm term_u_65;
static ATerm term_r_62;
static ATerm term_q_62;
static ATerm term_p_62;
static ATerm term_z_61;
static ATerm term_p_61;
static ATerm term_s_59;
static ATerm term_q_59;
static ATerm term_m_59;
static ATerm term_j_59;
static ATerm term_i_59;
static ATerm term_e_59;
static ATerm term_u_58;
static ATerm term_c_58;
static ATerm term_b_58;
static ATerm term_m_56;
static ATerm term_c_56;
static ATerm term_b_56;
static ATerm term_s_55;
static ATerm term_j_54;
static ATerm term_i_54;
static ATerm term_y_53;
static ATerm term_x_53;
static ATerm term_w_53;
static ATerm term_v_53;
static ATerm term_o_53;
static ATerm term_j_53;
static ATerm term_i_53;
static ATerm term_d_53;
static ATerm term_c_53;
static ATerm term_o_51;
static ATerm term_k_51;
static ATerm term_w_48;
static ATerm term_z_47;
static ATerm term_q_43;
static ATerm term_p_43;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_q_42;
static ATerm term_p_42;
static ATerm term_o_42;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_q_41;
static ATerm term_p_41;
static ATerm term_k_41;
static ATerm term_j_41;
static ATerm term_i_41;
static ATerm term_h_41;
static ATerm term_g_41;
static ATerm term_f_41;
static ATerm term_a_41;
static ATerm term_z_40;
static ATerm term_y_40;
static ATerm term_x_40;
static ATerm term_m_40;
static ATerm term_c_40;
static ATerm term_b_40;
static ATerm term_a_40;
static ATerm term_x_39;
static ATerm term_w_39;
static ATerm term_q_36;
static ATerm term_e_35;
static ATerm term_d_35;
static ATerm term_t_34;
static ATerm term_r_34;
static ATerm term_q_34;
static ATerm term_t_33;
static ATerm term_r_33;
static ATerm term_q_33;
static ATerm term_p_33;
static ATerm term_o_33;
static ATerm term_i_32;
static ATerm term_h_21;
static ATerm term_d_21;
static ATerm term_y_20;
static ATerm term_u_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_b_20;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_q_19;
static ATerm term_p_19;
static ATerm term_o_19;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_l_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_f_19;
static ATerm term_e_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_b_19;
static ATerm term_a_19;
static ATerm term_z_18;
static ATerm term_y_18;
static ATerm term_x_18;
static ATerm term_w_18;
static ATerm term_v_18;
static ATerm term_u_18;
static ATerm term_t_18;
static ATerm term_s_18;
static ATerm term_r_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_n_18;
static ATerm term_m_18;
static ATerm term_l_18;
static ATerm term_k_18;
static ATerm term_j_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_b_18;
static ATerm term_a_18;
static ATerm term_z_17;
static ATerm term_y_17;
static ATerm term_x_17;
static ATerm term_w_17;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_h_17;
static ATerm term_g_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_q_16;
static ATerm term_p_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_i_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_d_16;
static ATerm term_c_16;
static ATerm term_b_16;
static ATerm term_a_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_o_15;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_f_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_b_15;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_m_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_n_12;
static ATerm term_m_12;
static ATerm term_l_12;
static ATerm term_k_12;
static ATerm term_h_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_String_1, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_String_1, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_r_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_String_1, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_y_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_String_1, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_d_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_String_1, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_k_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_String_1, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_k_12, term_p_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Template_2, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_y_13, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_b_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_c_19, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_String_1, term_i_32);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Some_1, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_File_1, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Input_1, term_q_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Some_1, term_r_33);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_q_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Type_1, term_x_39);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Some_1, term_a_40);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_Default_1, term_c_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_Some_1, term_m_40);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_y_40);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_a_41);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_g_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Some_1, term_j_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_String_1, term_p_41);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Some_1, term_q_41);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_File_1, term_u_41);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Output_1, term_v_41);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Some_1, term_o_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Streams_3, term_t_33, term_p_42, term_a_14);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Exec_1, term_q_42);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_r_42);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_d_53, term_i_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_i_54, term_g_14);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_o_83);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(sym__2, term_s_59, term_e_59);
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(sym__2, term_w_72, term_n_74);
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_74);
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_g_14);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_d_86, term_g_14);
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(sym__2, term_v_53, term_g_14);
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(sym__2, term_a_87, term_b_87);
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(sym__2, term_f_88, term_g_14);
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(sym__2, term_i_88, term_g_14);
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(sym__2, term_q_88, term_g_14);
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(sym__3, term_a_87, term_b_87, (ATerm) ATempty);
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm l_0 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm m_153 (ATerm), ATerm t);
ATerm stderr_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm m_3 (ATerm), ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_25 (ATerm j_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm p_153 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm exec_http_0_1 (ATerm x_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm l_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm k_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm a_32 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm b_32 (ATerm r_31, ATerm s_31, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm f_33 (ATerm j_32, ATerm k_32, ATerm t);
static ATerm g_33 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm g_36 (ATerm u_34, ATerm v_34, ATerm x_34, ATerm t);
static ATerm h_36 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm j_38 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm u_36, ATerm v_36, ATerm w_36, ATerm x_36, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t);
static ATerm c_51 (ATerm w_44, ATerm x_44, ATerm y_44, ATerm z_44, ATerm a_45, ATerm t);
static ATerm d_51 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t);
static ATerm e_51 (ATerm z_45, ATerm a_46, ATerm b_46, ATerm c_46, ATerm k_46, ATerm t);
static ATerm f_51 (ATerm w_46, ATerm x_46, ATerm y_46, ATerm z_46, ATerm a_47, ATerm t);
static ATerm g_51 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm m_47, ATerm n_47, ATerm t);
static ATerm h_51 (ATerm h_48, ATerm i_48, ATerm j_48, ATerm k_48, ATerm l_48, ATerm t);
static ATerm i_51 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm j_49, ATerm t);
static ATerm j_51 (ATerm b_50, ATerm c_50, ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm j_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm i_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm g_3, ATerm h_3, ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm k_1 (ATerm), ATerm n_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm c_1, ATerm d_1, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm j_66 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t);
static ATerm k_66 (ATerm p_63, ATerm q_63, ATerm t);
static ATerm l_66 (ATerm c_64, ATerm t);
static ATerm m_66 (ATerm h_64, ATerm t);
static ATerm n_66 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm t);
static ATerm o_66 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm w_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm z_0 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t);
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t);
ATerm err_0_1 (ATerm v_78, ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm w_0, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t);
ATerm dbg_0_1 (ATerm y_78, ATerm t);
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
ATerm xtc_search_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t);
static ATerm z_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm t_0, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t);
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t);
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm p_150 (ATerm), ATerm f_79, ATerm t);
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t);
ATerm notice_0_1 (ATerm x_78, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
static ATerm f_104 (ATerm w_103, ATerm x_103, ATerm t);
static ATerm g_104 (ATerm a_104, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm xtc_load_0_1 (ATerm v_79, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_tokenize_1_0 (ATerm c_133 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm d_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
static ATerm d_116 (ATerm s_115, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
static ATerm d_117 (ATerm y_116, ATerm t);
static ATerm v_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm override_system_usage_0_0 (ATerm t);
ATerm system_usage_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm override_system_about_0_0 (ATerm t);
ATerm system_about_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
ATerm ticks_to_seconds_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t);
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t);
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t);
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm l_56, ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t);
static ATerm q_11 (ATerm t);
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
ATerm main_xtc_migrate_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_12), not_null(d_22));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = get_extension_0_0(t);
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        if(((h_22 != NULL) && (h_22 != t)))
          _fail(t);
        else
          h_22 = t;
        t = not_null(f_22);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(h_22);
        LocalPopChoice(j_12);
        t = (ATerm) ATinsert(ATempty, term_n_12);
      }
    else
      {
        t = i_12;
        t = not_null(g_22);
        {
          ATerm o_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_22 = NULL;
              if(((i_22 != NULL) && (i_22 != t)))
                _fail(t);
              else
                i_22 = t;
              t = not_null(f_22);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(i_22);
              LocalPopChoice(p_12);
              t = (ATerm) ATinsert(ATempty, term_s_12);
            }
          else
            {
              t = o_12;
              t = not_null(g_22);
              {
                ATerm t_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_22 = NULL;
                    if(((j_22 != NULL) && (j_22 != t)))
                      _fail(t);
                    else
                      j_22 = t;
                    t = not_null(f_22);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(j_22);
                    LocalPopChoice(u_12);
                    t = (ATerm) ATinsert(ATempty, term_s_12);
                  }
                else
                  {
                    t = t_12;
                    t = not_null(g_22);
                    {
                      ATerm v_12 = t;
                      int w_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_22 = NULL;
                          if(((k_22 != NULL) && (k_22 != t)))
                            _fail(t);
                          else
                            k_22 = t;
                          t = not_null(f_22);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(k_22);
                          LocalPopChoice(w_12);
                          t = (ATerm) ATinsert(ATempty, term_z_12);
                        }
                      else
                        {
                          t = v_12;
                          t = not_null(g_22);
                          {
                            ATerm a_13 = t;
                            int b_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_22 = NULL;
                                if(((l_22 != NULL) && (l_22 != t)))
                                  _fail(t);
                                else
                                  l_22 = t;
                                t = not_null(f_22);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(l_22);
                                LocalPopChoice(b_13);
                                t = (ATerm) ATinsert(ATempty, term_e_13);
                              }
                            else
                              {
                                t = a_13;
                                t = not_null(g_22);
                                {
                                  ATerm f_13 = t;
                                  int g_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm m_22 = NULL;
                                      if(((m_22 != NULL) && (m_22 != t)))
                                        _fail(t);
                                      else
                                        m_22 = t;
                                      t = not_null(f_22);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(m_22);
                                      LocalPopChoice(g_13);
                                      t = (ATerm) ATinsert(ATempty, term_e_13);
                                    }
                                  else
                                    {
                                      t = f_13;
                                      t = not_null(g_22);
                                      {
                                        ATerm h_13 = t;
                                        int i_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_22 = NULL;
                                            if(((n_22 != NULL) && (n_22 != t)))
                                              _fail(t);
                                            else
                                              n_22 = t;
                                            t = not_null(f_22);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(n_22);
                                            LocalPopChoice(i_13);
                                            t = (ATerm) ATinsert(ATempty, term_l_13);
                                          }
                                        else
                                          {
                                            t = h_13;
                                            t = not_null(g_22);
                                            {
                                              ATerm m_13 = t;
                                              int n_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_22 = NULL;
                                                  if(((o_22 != NULL) && (o_22 != t)))
                                                    _fail(t);
                                                  else
                                                    o_22 = t;
                                                  t = not_null(f_22);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(o_22);
                                                  LocalPopChoice(n_13);
                                                  t = (ATerm) ATinsert(ATempty, term_q_13);
                                                }
                                              else
                                                {
                                                  t = m_13;
                                                  t = (ATerm) ATempty;
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
static ATerm d_0 (ATerm t)
{
  ATerm r_22 = NULL;
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm s_22 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(d_0, a_0, t);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(g_0, i_0, t);
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
                t = Cons_2_0(j_0, h_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(a_0, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm v_22 = NULL;
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(l_0, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  t = not_null(z_22);
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = base_filename_0_0(t);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(x_22));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_23 = NULL;
      if(((a_23 != NULL) && (a_23 != t)))
        _fail(t);
      else
        a_23 = t;
      t = has_no_extension_0_0(t);
      t = not_null(a_23);
      LocalPopChoice(w_13);
      t = (ATerm) ATinsert(ATempty, term_c_14);
    }
  else
    {
      t = v_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = not_null(e_23);
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(c_23));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_23 != NULL) && (f_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_23 = ATgetArgument(t, 0);
      if(((g_23 != NULL) && (g_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  t = not_null(g_23);
  t = xtc_default_xt_meta_0_0(t);
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_d_14, (ATerm) ATmakeAppl(sym_String_1, not_null(f_23)))), not_null(j_23));
  t = conc_0_0(t);
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(h_23));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      if(match_cons(e_14, sym_Tool_1))
        {
          if(((l_23 != NULL) && (l_23 != ATgetArgument(e_14, 0))))
            _fail(ATgetArgument(e_14, 0));
          else
            l_23 = ATgetArgument(e_14, 0);
        }
      else
        _fail(t);
      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = not_null(m_23);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(l_23), not_null(n_23));
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if(!(match_cons(f_14, sym_Import_0)))
        _fail(t);
      if(((p_23 != NULL) && (p_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = not_null(p_23);
  t = map_1_0(n_0, t);
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(q_23));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = filter_1_0(v_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  t = term_g_14;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = term_h_14;
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = not_null(v_23);
  t = err_0_1(not_null(u_23), t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(q_0, s_0, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  t = xtc_convert_0_0(t);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(w_23));
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = xtc_new_file_0_0(t);
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), not_null(z_23));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_23));
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm m_153 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = m_153(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
ATerm get_last_error_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = get_errno_0_0(t);
  if(((b_24 != NULL) && (b_24 != t)))
    _fail(t);
  else
    b_24 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(b_24));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_24 != NULL) && (e_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_24 = ATgetArgument(t, 0);
      if(((d_24 != NULL) && (d_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(e_24), not_null(d_24));
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm f_24 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_g_14;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), not_null(d_24));
          t = copy_file_0_0(t);
          t = not_null(e_24);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm m_3 (ATerm), ATerm t)
{
  static ATerm x_24 (ATerm j_24, ATerm k_24, ATerm t);
  static ATerm y_24 (ATerm n_24, ATerm o_24, ATerm t);
  static ATerm x_24 (ATerm j_24, ATerm k_24, ATerm t)
  {
    ATerm l_24 = NULL,m_24 = NULL;
    t = not_null(j_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(k_24);
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    t = m_3(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_m_14);
    t = copy_file_0_0(t);
    t = not_null(l_24);
    t = remove_file_0_0(t);
    t = term_m_14;
    return(t);
  }
  static ATerm y_24 (ATerm n_24, ATerm o_24, ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
    t = not_null(n_24);
    if(((p_24 != NULL) && (p_24 != t)))
      _fail(t);
    else
      p_24 = t;
    t = not_null(o_24);
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
    t = m_3(t);
    if(((q_24 != NULL) && (q_24 != t)))
      _fail(t);
    else
      q_24 = t;
    {
      ATerm n_14 = t;
      if((PushChoice() == 0))
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              {
                ATerm s_24 = NULL;
                if(((s_24 != NULL) && (s_24 != t)))
                  _fail(t);
                else
                  s_24 = t;
                if(((p_24 != NULL) && (p_24 != t)))
                  _fail(t);
                else
                  p_24 = t;
                t = not_null(s_24);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_14;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), not_null(q_24));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_24));
    return(t);
  }
  ATerm t_24 = NULL,u_24 = NULL;
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_24(not_null(u_24), not_null(t_24), t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_24(not_null(u_24), not_null(t_24), t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              {
                ATerm v_24 = NULL,w_24 = NULL;
                t = not_null(u_24);
                if(((v_24 != NULL) && (v_24 != t)))
                  _fail(t);
                else
                  v_24 = t;
                t = not_null(t_24);
                if(((w_24 != NULL) && (w_24 != t)))
                  _fail(t);
                else
                  w_24 = t;
                t = m_3(t);
                if(((v_24 != NULL) && (v_24 != t)))
                  _fail(t);
                else
                  v_24 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_24));
              }
            }
        }
      }
  }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((z_24 != NULL) && (z_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(z_24));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,e_25 = NULL;
        t = not_null(c_25);
        if(((e_25 != NULL) && (e_25 != t)))
          _fail(t);
        else
          e_25 = t;
        t = not_null(c_25);
        if(((d_25 != NULL) && (d_25 != t)))
          _fail(t);
        else
          d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), term_w_14);
        t = open_stream_0_0(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm f_25 = NULL,g_25 = NULL;
          t = not_null(c_25);
          if(((g_25 != NULL) && (g_25 != t)))
            _fail(t);
          else
            g_25 = t;
          t = not_null(c_25);
          if(((f_25 != NULL) && (f_25 != t)))
            _fail(t);
          else
            f_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(f_25));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((b_25 != NULL) && (b_25 != t)))
    _fail(t);
  else
    b_25 = t;
  t = read_from_stream_0_0(t);
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  t = not_null(b_25);
  t = fclose_0_0(t);
  t = not_null(a_25);
  return(t);
}
static ATerm x_25 (ATerm j_25, ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  t = not_null(j_25);
  if(((n_25 != NULL) && (n_25 != t)))
    _fail(t);
  else
    n_25 = t;
  t = not_null(j_25);
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = not_null(n_25);
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  t = SSL_explode_term(not_null(p_25));
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((k_25 != NULL) && (k_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_25);
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = not_null(k_25);
  t = concat_0_0(t);
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
            t = not_null(q_25);
            if(((t_25 != NULL) && (t_25 != t)))
              _fail(t);
            else
              t_25 = t;
            t = not_null(r_25);
            if(((u_25 != NULL) && (u_25 != t)))
              _fail(t);
            else
              u_25 = t;
            t = not_null(s_25);
            if(((w_25 != NULL) && (w_25 != t)))
              _fail(t);
            else
              w_25 = t;
            t = not_null(t_25);
            {
              static ATerm y_0 (ATerm t);
              static ATerm y_0 (ATerm t)
              {
                t = not_null(u_25);
                return(t);
              }
              t = at_end_1_0(y_0, t);
            }
            if(((v_25 != NULL) && (v_25 != t)))
              _fail(t);
            else
              v_25 = t;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = x_25(not_null(s_25), t);
          }
      }
    }
  else
    {
      t = x_25(not_null(s_25), t);
    }
  return(t);
}
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    t = r_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(z_25));
    t = execvp_0_0(t);
    t = term_b_15;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_25 = ATgetArgument(t, 0);
      if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(b_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_26 = NULL;
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(e_1, t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm p_153 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(p_153, t);
  t = xtc_fetch_loc_0_0(t);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  t = xtc_find_loc_1_0(Hd_0_0, t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_26 = ATgetArgument(t, 0);
      if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(c_26), not_null(d_26));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_26 = ATgetArgument(t, 0);
      if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(e_26), not_null(f_26));
  return(t);
}
ATerm STDERR__FILENO_0_0 (ATerm t)
{
  t = SSL_STDERR_FILENO();
  return(t);
}
ATerm STDOUT__FILENO_0_0 (ATerm t)
{
  t = SSL_STDOUT_FILENO();
  return(t);
}
ATerm STDIN__FILENO_0_0 (ATerm t)
{
  t = SSL_STDIN_FILENO();
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = SSL_int_to_string(not_null(g_26));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_26 = ATgetArgument(t, 0);
      {
        ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
        t = not_null(j_26);
        if(((m_26 != NULL) && (m_26 != t)))
          _fail(t);
        else
          m_26 = t;
        t = not_null(i_26);
        if(((o_26 != NULL) && (o_26 != t)))
          _fail(t);
        else
          o_26 = t;
        if(((q_26 != NULL) && (q_26 != t)))
          _fail(t);
        else
          q_26 = t;
        t = not_null(m_26);
        t = int_to_string_0_0(t);
        if(((p_26 != NULL) && (p_26 != t)))
          _fail(t);
        else
          p_26 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_15), not_null(p_26)), term_c_15);
        t = concat_strings_0_0(t);
        if(((n_26 != NULL) && (n_26 != t)))
          _fail(t);
        else
          n_26 = t;
      }
    }
  else
    {
      ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_26 = ATgetArgument(t, 0);
          if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_26 = ATgetArgument(t, 1);
          if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_26 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(j_26);
      if(((r_26 != NULL) && (r_26 != t)))
        _fail(t);
      else
        r_26 = t;
      t = not_null(k_26);
      if(((s_26 != NULL) && (s_26 != t)))
        _fail(t);
      else
        s_26 = t;
      t = not_null(l_26);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = not_null(i_26);
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      if(((x_26 != NULL) && (x_26 != t)))
        _fail(t);
      else
        x_26 = t;
      t = not_null(s_26);
      t = int_to_string_0_0(t);
      if(((w_26 != NULL) && (w_26 != t)))
        _fail(t);
      else
        w_26 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_26)), term_f_15), not_null(w_26)), term_e_15), not_null(r_26));
      t = concat_strings_0_0(t);
      if(((u_26 != NULL) && (u_26 != t)))
        _fail(t);
      else
        u_26 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm y_26 = NULL;
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    t = p_123(t);
    if(((y_26 != NULL) && (y_26 != t)))
      _fail(t);
    else
      y_26 = t;
    return(t);
  }
  t = fetch_1_0(f_1, t);
  t = not_null(y_26);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_1 (ATerm t);
        static ATerm g_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_15 = ATgetArgument(t, 0);
              if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_26 = ATgetArgument(t, 1);
              {
                ATerm j_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_19), term_m_19), term_i_19), term_e_19), term_a_19), term_w_18), term_s_18), term_o_18), term_k_18), term_g_18), term_c_18), term_y_17), term_u_17), term_q_17), term_m_17), term_i_17), term_e_17), term_a_17), term_w_16), term_s_16), term_o_16), term_k_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_m_15);
        t = fetch_elem_1_0(g_1, t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(z_26));
      }
  }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(((d_27 != NULL) && (d_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_27 = ATgetArgument(t, 1);
      {
        ATerm s_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(d_27);
  {
    ATerm t_19 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_19;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((c_27 != NULL) && (c_27 != t)))
    _fail(t);
  else
    c_27 = t;
  if(((b_27 != NULL) && (b_27 != t)))
    _fail(t);
  else
    b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_27)), term_v_19));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = try_1_0(h_1, t);
  t = not_null(a_27);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  t = SSL_waitpid(not_null(e_27));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  t = fork_0_0(t);
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_27 = NULL;
        if(((i_27 != NULL) && (i_27 != t)))
          _fail(t);
        else
          i_27 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(h_27);
        t = t_141(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(h_27));
        t = u_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm j_27 = NULL;
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    ATerm k_27 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_27 = ATgetArgument(t, 0);
        if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(k_27);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm y_19 = ATgetArgument(t, 0);
        if(((ATgetType(y_19) != AT_INT) || (ATgetInt((ATermInt) y_19) != 0)))
          _fail(t);
        {
          ATerm z_19 = ATgetArgument(t, 1);
        }
        {
          ATerm a_20 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(j_27);
    return(t);
  }
  t = fork_2_0(v_141, i_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  t = not_null(v_27);
  if(((u_27 != NULL) && (u_27 != t)))
    _fail(t);
  else
    u_27 = t;
  t = STDIN__FILENO_0_0(t);
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(t_27));
  t = dup2_0_0(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  if(((w_27 != NULL) && (w_27 != t)))
    _fail(t);
  else
    w_27 = t;
  t = not_null(z_27);
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((x_27 != NULL) && (x_27 != t)))
    _fail(t);
  else
    x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(x_27));
  t = dup2_0_0(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  if(((d_28 != NULL) && (d_28 != t)))
    _fail(t);
  else
    d_28 = t;
  if(((a_28 != NULL) && (a_28 != t)))
    _fail(t);
  else
    a_28 = t;
  t = not_null(d_28);
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  t = STDERR__FILENO_0_0(t);
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(b_28));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = term_b_20;
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
  t = not_null(r_27);
  t = dbg_0_1(not_null(q_27), t);
  if(match_cons(t, sym__3))
    {
      if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_27 = ATgetArgument(t, 0);
      {
        ATerm c_20 = ATgetArgument(t, 1);
        if(match_cons(c_20, sym__3))
          {
            if(((l_27 != NULL) && (l_27 != ATgetArgument(c_20, 0))))
              _fail(ATgetArgument(c_20, 0));
            else
              l_27 = ATgetArgument(c_20, 0);
            if(((m_27 != NULL) && (m_27 != ATgetArgument(c_20, 1))))
              _fail(ATgetArgument(c_20, 1));
            else
              m_27 = ATgetArgument(c_20, 1);
            if(((n_27 != NULL) && (n_27 != ATgetArgument(c_20, 2))))
              _fail(ATgetArgument(c_20, 2));
            else
              n_27 = ATgetArgument(c_20, 2);
          }
        else
          _fail(t);
      }
      if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm j_1 (ATerm t);
    static ATerm j_1 (ATerm t)
    {
      t = not_null(l_27);
      t = option_1_0(l_1, t);
      t = not_null(m_27);
      t = option_1_0(m_1, t);
      t = not_null(n_27);
      t = option_1_0(o_1, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_27), not_null(p_27));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(j_1, t);
  }
  t = term_g_14;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm exec_http_0_1 (ATerm x_87, ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_f_20), term_e_20), not_null(i_28));
  t = conc_0_0(t);
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = not_null(x_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_28 = ATgetArgument(t, 0);
      if(((f_28 != NULL) && (f_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_28 = ATgetArgument(t, 1);
      if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_28 = ATgetArgument(t, 2);
      {
        ATerm g_20 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_a_14, not_null(f_28), not_null(g_28), not_null(h_28));
  t = xtc_command_1_0(p_1, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  if(match_cons(t, sym__3))
    {
      if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_28 = ATgetArgument(t, 0);
      if(((p_28 != NULL) && (p_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_28 = ATgetArgument(t, 1);
      if(((q_28 != NULL) && (q_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(n_28);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm r_28 = NULL,s_28 = NULL;
      t = not_null(p_28);
      if(((s_28 != NULL) && (s_28 != t)))
        _fail(t);
      else
        s_28 = t;
      t = not_null(q_28);
      if(((r_28 != NULL) && (r_28 != t)))
        _fail(t);
      else
        r_28 = t;
      t = exec_http_0_1(not_null(s_28), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          o_28 = ATgetArgument(t, 0);
          {
            ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
            t = not_null(o_28);
            if(((t_28 != NULL) && (t_28 != t)))
              _fail(t);
            else
              t_28 = t;
            t = not_null(p_28);
            if(((v_28 != NULL) && (v_28 != t)))
              _fail(t);
            else
              v_28 = t;
            t = not_null(q_28);
            if(((u_28 != NULL) && (u_28 != t)))
              _fail(t);
            else
              u_28 = t;
            t = exec_http_0_1(not_null(v_28), t);
          }
        }
      else
        {
          ATerm w_28 = NULL,x_28 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(o_28);
          if(((w_28 != NULL) && (w_28 != t)))
            _fail(t);
          else
            w_28 = t;
          t = not_null(q_28);
          if(((x_28 != NULL) && (x_28 != t)))
            _fail(t);
          else
            x_28 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  if(((y_28 != NULL) && (y_28 != t)))
    _fail(t);
  else
    y_28 = t;
  t = SSL_open(not_null(y_28));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm l_3, ATerm t)
{
  static ATerm q_29 (ATerm d_29, ATerm e_29, ATerm t);
  static ATerm r_29 (ATerm j_29, ATerm t);
  static ATerm q_29 (ATerm d_29, ATerm e_29, ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
    t = not_null(d_29);
    if(((f_29 != NULL) && (f_29 != t)))
      _fail(t);
    else
      f_29 = t;
    t = not_null(e_29);
    if(((h_29 != NULL) && (h_29 != t)))
      _fail(t);
    else
      h_29 = t;
    t = not_null(l_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm h_20 = ATgetArgument(t, 0);
        if(match_cons(h_20, sym_FILE_1))
          {
            if(((i_29 != NULL) && (i_29 != ATgetArgument(h_20, 0))))
              _fail(ATgetArgument(h_20, 0));
            else
              i_29 = ATgetArgument(h_20, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(i_29);
    t = open_0_0(t);
    if(((g_29 != NULL) && (g_29 != t)))
      _fail(t);
    else
      g_29 = t;
    return(t);
  }
  static ATerm r_29 (ATerm j_29, ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
    t = not_null(j_29);
    if(((l_29 != NULL) && (l_29 != t)))
      _fail(t);
    else
      l_29 = t;
    t = not_null(l_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm i_20 = ATgetArgument(t, 0);
        if(match_cons(i_20, sym_FILE_1))
          {
            if(((m_29 != NULL) && (m_29 != ATgetArgument(i_20, 0))))
              _fail(ATgetArgument(i_20, 0));
            else
              m_29 = ATgetArgument(i_20, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(m_29);
    t = open_0_0(t);
    if(((k_29 != NULL) && (k_29 != t)))
      _fail(t);
    else
      k_29 = t;
    return(t);
  }
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((p_29 != NULL) && (p_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(p_29);
  if(match_cons(t, sym_Some_1))
    {
      n_29 = ATgetArgument(t, 0);
      t = q_29(not_null(n_29), not_null(o_29), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = r_29(not_null(o_29), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm k_3, ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  if(match_cons(t, sym_Error_1))
    {
      u_29 = ATgetArgument(t, 0);
      {
        ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
        t = not_null(u_29);
        if(((v_29 != NULL) && (v_29 != t)))
          _fail(t);
        else
          v_29 = t;
        t = not_null(t_29);
        if(((x_29 != NULL) && (x_29 != t)))
          _fail(t);
        else
          x_29 = t;
        t = not_null(v_29);
        t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
        if(((w_29 != NULL) && (w_29 != t)))
          _fail(t);
        else
          w_29 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          u_29 = ATgetArgument(t, 0);
          {
            ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
            t = not_null(u_29);
            if(((y_29 != NULL) && (y_29 != t)))
              _fail(t);
            else
              y_29 = t;
            t = not_null(t_29);
            if(((a_30 != NULL) && (a_30 != t)))
              _fail(t);
            else
              a_30 = t;
            t = not_null(y_29);
            t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
            if(((z_29 != NULL) && (z_29 != t)))
              _fail(t);
            else
              z_29 = t;
          }
        }
      else
        {
          ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(u_29);
          if(((b_30 != NULL) && (b_30 != t)))
            _fail(t);
          else
            b_30 = t;
          t = not_null(t_29);
          if(((d_30 != NULL) && (d_30 != t)))
            _fail(t);
          else
            d_30 = t;
          t = not_null(b_30);
          t = xtc_streamdef_to_fd_0_1(not_null(k_3), t);
          if(((c_30 != NULL) && (c_30 != t)))
            _fail(t);
          else
            c_30 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm f_30 = NULL,g_30 = NULL;
        if(((f_30 != NULL) && (f_30 != t)))
          _fail(t);
        else
          f_30 = t;
        if(match_cons(t, sym_URL_1))
          {
            g_30 = ATgetArgument(t, 0);
            {
              ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
              t = not_null(g_30);
              if(((h_30 != NULL) && (h_30 != t)))
                _fail(t);
              else
                h_30 = t;
              t = not_null(f_30);
              if(((j_30 != NULL) && (j_30 != t)))
                _fail(t);
              else
                j_30 = t;
              t = not_null(h_30);
              t = xtc_arg_to_string_0_0(t);
              if(((i_30 != NULL) && (i_30 != t)))
                _fail(t);
              else
                i_30 = t;
            }
          }
        else
          {
            ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((g_30 != NULL) && (g_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(g_30);
            if(((k_30 != NULL) && (k_30 != t)))
              _fail(t);
            else
              k_30 = t;
            t = not_null(f_30);
            if(((m_30 != NULL) && (m_30 != t)))
              _fail(t);
            else
              m_30 = t;
            t = not_null(k_30);
            t = xtc_arg_to_string_0_0(t);
            if(((l_30 != NULL) && (l_30 != t)))
              _fail(t);
            else
              l_30 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  if(((p_30 != NULL) && (p_30 != t)))
    _fail(t);
  else
    p_30 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      q_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
        t = not_null(q_30);
        if(((r_30 != NULL) && (r_30 != t)))
          _fail(t);
        else
          r_30 = t;
        t = not_null(o_30);
        if(((s_30 != NULL) && (s_30 != t)))
          _fail(t);
        else
          s_30 = t;
        t = not_null(p_30);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = not_null(r_30);
        t = xtc_argterm_to_exec_0_0(t);
        if(((t_30 != NULL) && (t_30 != t)))
          _fail(t);
        else
          t_30 = t;
        t = not_null(w_30);
        if(((v_30 != NULL) && (v_30 != t)))
          _fail(t);
        else
          v_30 = t;
        t = not_null(s_30);
        t = xtc_argterm_to_exec_0_0(t);
        if(((u_30 != NULL) && (u_30 != t)))
          _fail(t);
        else
          u_30 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(t_30));
      }
    }
  else
    {
      ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((q_30 != NULL) && (q_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(q_30);
      if(((x_30 != NULL) && (x_30 != t)))
        _fail(t);
      else
        x_30 = t;
      t = not_null(p_30);
      if(((z_30 != NULL) && (z_30 != t)))
        _fail(t);
      else
        z_30 = t;
      t = not_null(x_30);
      t = xtc_argterm_to_exec_0_0(t);
      if(((y_30 != NULL) && (y_30 != t)))
        _fail(t);
      else
        y_30 = t;
      t = (ATerm) ATinsert(ATempty, not_null(y_30));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm a_32 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  t = not_null(g_31);
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  t = not_null(h_31);
  if(((m_31 != NULL) && (m_31 != t)))
    _fail(t);
  else
    m_31 = t;
  t = not_null(i_31);
  t = xtc_argterm_to_http_0_0(t);
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm p_31 = NULL;
        t = not_null(o_31);
        if(((p_31 != NULL) && (p_31 != t)))
          _fail(t);
        else
          p_31 = t;
      }
    }
  else
    {
      ATerm q_31 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((o_31 != NULL) && (o_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_31);
      if(((q_31 != NULL) && (q_31 != t)))
        _fail(t);
      else
        q_31 = t;
    }
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  t = not_null(m_31);
  if(((l_31 != NULL) && (l_31 != t)))
    _fail(t);
  else
    l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_31)), term_l_20);
  t = concat_strings_0_0(t);
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(k_31)));
  return(t);
}
static ATerm b_32 (ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t = not_null(r_31);
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = not_null(s_31);
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  t = not_null(t_31);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm n_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(q_1, t);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = URL_1_0(r_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_20;
      }
  }
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(u_31)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_31 = NULL;
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_31 = NULL;
  if(((x_31 != NULL) && (x_31 != t)))
    _fail(t);
  else
    x_31 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  if(((y_31 != NULL) && (y_31 != t)))
    _fail(t);
  else
    y_31 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((z_31 != NULL) && (z_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_32(not_null(z_31), not_null(y_31), t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = b_32(not_null(z_31), not_null(y_31), t);
      }
  }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(s_1, t);
  return(t);
}
static ATerm f_33 (ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  t = not_null(j_32);
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  t = not_null(k_32);
  if(((p_32 != NULL) && (p_32 != t)))
    _fail(t);
  else
    p_32 = t;
  t = not_null(l_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((q_32 != NULL) && (q_32 != t)))
    _fail(t);
  else
    q_32 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_32 = ATgetArgument(t, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(r_32);
        if(((s_32 != NULL) && (s_32 != t)))
          _fail(t);
        else
          s_32 = t;
      }
    }
  else
    {
      ATerm t_32 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((r_32 != NULL) && (r_32 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(r_32);
      if(((t_32 != NULL) && (t_32 != t)))
        _fail(t);
      else
        t_32 = t;
    }
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  t = not_null(p_32);
  if(((o_32 != NULL) && (o_32 != t)))
    _fail(t);
  else
    o_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_32)), term_u_20);
  t = concat_strings_0_0(t);
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(n_32)));
  return(t);
}
static ATerm g_33 (ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = not_null(u_32);
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = not_null(v_32);
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  t = not_null(w_32);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(t_1, t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = URL_1_0(u_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
  }
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  t = not_null(a_33);
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_32)), term_y_20);
  t = concat_strings_0_0(t);
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(y_32)));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_33 = NULL;
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_33 = NULL;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_33(not_null(e_33), not_null(d_33), t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = g_33(not_null(e_33), not_null(d_33), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,v_1 = NULL,v_11 = NULL;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((i_33 != NULL) && (i_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  t = SSLgetAnnotations(not_null(m_33));
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = not_null(i_33);
  t = n_109(t);
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(j_33));
  if(((v_1 != NULL) && (v_1 != t)))
    _fail(t);
  else
    v_1 = t;
  t = SSLsetAnnotations(not_null(v_1), not_null(h_33));
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm s_33 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((s_33 != NULL) && (s_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(s_33);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm x_33 = NULL,y_33 = NULL;
        if(((x_33 != NULL) && (x_33 != t)))
          _fail(t);
        else
          x_33 = t;
        if(match_cons(t, sym_URL_1))
          {
            y_33 = ATgetArgument(t, 0);
            {
              ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
              t = not_null(y_33);
              if(((b_34 != NULL) && (b_34 != t)))
                _fail(t);
              else
                b_34 = t;
              t = not_null(x_33);
              if(((d_34 != NULL) && (d_34 != t)))
                _fail(t);
              else
                d_34 = t;
              t = not_null(b_34);
              t = xtc_arg_to_string_0_0(t);
              if(((c_34 != NULL) && (c_34 != t)))
                _fail(t);
              else
                c_34 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(c_34));
            }
          }
        else
          {
            ATerm e_34 = NULL,f_34 = NULL,l_34 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((y_33 != NULL) && (y_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(y_33);
            if(((e_34 != NULL) && (e_34 != t)))
              _fail(t);
            else
              e_34 = t;
            t = not_null(x_33);
            if(((l_34 != NULL) && (l_34 != t)))
              _fail(t);
            else
              l_34 = t;
            t = not_null(e_34);
            t = xtc_arg_to_string_0_0(t);
            if(((f_34 != NULL) && (f_34 != t)))
              _fail(t);
            else
              f_34 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_34));
          }
      }
    }
  return(t);
}
static ATerm g_36 (ATerm u_34, ATerm v_34, ATerm x_34, ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  t = not_null(u_34);
  if(((y_34 != NULL) && (y_34 != t)))
    _fail(t);
  else
    y_34 = t;
  t = not_null(v_34);
  if(((a_35 != NULL) && (a_35 != t)))
    _fail(t);
  else
    a_35 = t;
  t = not_null(x_34);
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = not_null(y_34);
  t = xtc_argterm_to_http_0_0(t);
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  t = not_null(a_35);
  t = xtc_argterm_to_http_0_0(t);
  if(((n_35 != NULL) && (n_35 != t)))
    _fail(t);
  else
    n_35 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_35 = ATgetArgument(t, 0);
      {
        ATerm p_35 = NULL;
        t = not_null(o_35);
        if(((p_35 != NULL) && (p_35 != t)))
          _fail(t);
        else
          p_35 = t;
      }
    }
  else
    {
      ATerm q_35 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((o_35 != NULL) && (o_35 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_35);
      if(((q_35 != NULL) && (q_35 != t)))
        _fail(t);
      else
        q_35 = t;
    }
  if(((b_35 != NULL) && (b_35 != t)))
    _fail(t);
  else
    b_35 = t;
  t = not_null(m_35);
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_35)), term_d_21), not_null(z_34));
  t = concat_strings_0_0(t);
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(i_35)));
  return(t);
}
static ATerm h_36 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = not_null(r_35);
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = not_null(s_35);
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  t = not_null(t_35);
  if(((a_36 != NULL) && (a_36 != t)))
    _fail(t);
  else
    a_36 = t;
  t = not_null(u_35);
  t = xtc_argterm_to_http_0_0(t);
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = not_null(w_35);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(w_1, t);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = URL_1_0(x_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = not_null(a_36);
  if(((z_35 != NULL) && (z_35 != t)))
    _fail(t);
  else
    z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_35)), term_h_21), not_null(v_35));
  t = concat_strings_0_0(t);
  if(((y_35 != NULL) && (y_35 != t)))
    _fail(t);
  else
    y_35 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(y_35)));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm b_36 = NULL;
  if(((b_36 != NULL) && (b_36 != t)))
    _fail(t);
  else
    b_36 = t;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm c_36 = NULL;
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(((d_36 != NULL) && (d_36 != t)))
    _fail(t);
  else
    d_36 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_36 = ATgetArgument(t, 0);
      if(((f_36 != NULL) && (f_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_36(not_null(e_36), not_null(f_36), not_null(d_36), t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = h_36(not_null(e_36), not_null(f_36), not_null(d_36), t);
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(y_1, t);
  return(t);
}
static ATerm j_38 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm u_36, ATerm v_36, ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = not_null(r_36);
  if(((j_37 != NULL) && (j_37 != t)))
    _fail(t);
  else
    j_37 = t;
  t = not_null(s_36);
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  t = not_null(t_36);
  if(((d_37 != NULL) && (d_37 != t)))
    _fail(t);
  else
    d_37 = t;
  t = not_null(u_36);
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = not_null(v_36);
  if(((z_36 != NULL) && (z_36 != t)))
    _fail(t);
  else
    z_36 = t;
  t = not_null(w_36);
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  t = not_null(x_36);
  if(((m_37 != NULL) && (m_37 != t)))
    _fail(t);
  else
    m_37 = t;
  t = not_null(z_36);
  t = xtc_args_to_exec_0_0(t);
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = not_null(j_37);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_1 (ATerm t);
        static ATerm z_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(b_37), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(z_1, t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = term_a_14;
      }
  }
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  t = not_null(j_37);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_2 (ATerm t);
        static ATerm a_2 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(d_37), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(a_2, t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = term_a_14;
      }
  }
  if(((e_37 != NULL) && (e_37 != t)))
    _fail(t);
  else
    e_37 = t;
  t = not_null(j_37);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_2 (ATerm t);
        static ATerm b_2 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(k_37), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(b_2, t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = term_a_14;
      }
  }
  if(((l_37 != NULL) && (l_37 != t)))
    _fail(t);
  else
    l_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(y_36), (ATerm)ATmakeAppl(sym__3, not_null(c_37), not_null(e_37), not_null(l_37)), not_null(a_37));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  if(((n_37 != NULL) && (n_37 != t)))
    _fail(t);
  else
    n_37 = t;
  if(match_cons(t, sym__3))
    {
      if(((o_37 != NULL) && (o_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_37 = ATgetArgument(t, 0);
      if(((s_37 != NULL) && (s_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_37 = ATgetArgument(t, 1);
      if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(o_37);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
      t = not_null(s_37);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_37 = ATgetArgument(t, 0);
          if(((u_37 != NULL) && (u_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_37 = ATgetArgument(t, 1);
          if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            v_37 = ATgetArgument(t, 2);
          if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            w_37 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(x_37);
      if(match_cons(t, sym__2))
        {
          if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_37 = ATgetArgument(t, 0);
          if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(w_37);
      if(((b_38 != NULL) && (b_38 != t)))
        _fail(t);
      else
        b_38 = t;
      t = not_null(y_37);
      if(((a_38 != NULL) && (a_38 != t)))
        _fail(t);
      else
        a_38 = t;
      t = not_null(n_37);
      if(((d_38 != NULL) && (d_38 != t)))
        _fail(t);
      else
        d_38 = t;
      t = not_null(b_38);
      t = xtc_args_to_xtservice_0_0(t);
      if(((c_38 != NULL) && (c_38 != t)))
        _fail(t);
      else
        c_38 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(c_38)), not_null(a_38));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          r_37 = ATgetArgument(t, 0);
          {
            ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
            t = not_null(s_37);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_37 = ATgetArgument(t, 0);
                if(((u_37 != NULL) && (u_37 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_37 = ATgetArgument(t, 1);
                if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  v_37 = ATgetArgument(t, 2);
                if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  w_37 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(x_37);
            if(match_cons(t, sym__2))
              {
                if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_37 = ATgetArgument(t, 0);
                if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(r_37);
            if(((e_38 != NULL) && (e_38 != t)))
              _fail(t);
            else
              e_38 = t;
            t = not_null(w_37);
            if(((g_38 != NULL) && (g_38 != t)))
              _fail(t);
            else
              g_38 = t;
            t = not_null(y_37);
            if(((f_38 != NULL) && (f_38 != t)))
              _fail(t);
            else
              f_38 = t;
            t = not_null(n_37);
            if(((i_38 != NULL) && (i_38 != t)))
              _fail(t);
            else
              i_38 = t;
            t = not_null(g_38);
            t = xtc_args_to_http_0_0(t);
            if(((h_38 != NULL) && (h_38 != t)))
              _fail(t);
            else
              h_38 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(h_38)), not_null(f_38));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((r_37 != NULL) && (r_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(s_37);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_37 = ATgetArgument(t, 0);
              if(((u_37 != NULL) && (u_37 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_37 = ATgetArgument(t, 1);
              if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                v_37 = ATgetArgument(t, 2);
              if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                w_37 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(x_37);
          if(match_cons(t, sym__2))
            {
              if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_37 = ATgetArgument(t, 0);
              if(((z_37 != NULL) && (z_37 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                z_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_38(not_null(r_37), not_null(t_37), not_null(u_37), not_null(v_37), not_null(w_37), not_null(y_37), not_null(n_37), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(!(match_cons(s_21, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(s_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(k_38), t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
          if(((m_38 != NULL) && (m_38 != t)))
            _fail(t);
          else
            m_38 = t;
          if(((o_38 != NULL) && (o_38 != t)))
            _fail(t);
          else
            o_38 = t;
          t = not_null(m_38);
          if(((n_38 != NULL) && (n_38 != t)))
            _fail(t);
          else
            n_38 = t;
          t = (ATerm) ATinsert(ATempty, not_null(n_38));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((l_38 != NULL) && (l_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_38 = ATgetArgument(t, 0);
      if(((k_38 != NULL) && (k_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_38);
  t = mapconcat_1_0(c_2, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_38 != NULL) && (r_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_38 = ATgetArgument(t, 0);
      if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_38 != NULL) && (u_38 != t)))
    _fail(t);
  else
    u_38 = t;
  t = Fst_0_0(t);
  {
    static ATerm d_2 (ATerm t);
    static ATerm d_2 (ATerm t)
    {
      ATerm v_38 = NULL;
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_39 (ATerm w_38, ATerm t);
          static ATerm d_39 (ATerm w_38, ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
            t = not_null(w_38);
            if(((v_38 != NULL) && (v_38 != t)))
              _fail(t);
            else
              v_38 = t;
            t = not_null(w_38);
            if(((y_38 != NULL) && (y_38 != t)))
              _fail(t);
            else
              y_38 = t;
            if(((z_38 != NULL) && (z_38 != t)))
              _fail(t);
            else
              z_38 = t;
            t = not_null(q_38);
            {
              static ATerm e_2 (ATerm t);
              static ATerm e_2 (ATerm t)
              {
                ATerm a_39 = NULL,b_39 = NULL;
                if(((b_39 != NULL) && (b_39 != t)))
                  _fail(t);
                else
                  b_39 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(b_39));
                if(((v_38 != NULL) && (v_38 != t)))
                  _fail(t);
                else
                  v_38 = t;
                return(t);
              }
              t = SRTS_one(e_2, t);
            }
            t = not_null(z_38);
            if(((x_38 != NULL) && (x_38 != t)))
              _fail(t);
            else
              x_38 = t;
            t = (ATerm) ATinsert(ATempty, not_null(x_38));
            return(t);
          }
          ATerm c_39 = NULL;
          if(((c_39 != NULL) && (c_39 != t)))
            _fail(t);
          else
            c_39 = t;
          t = d_39(not_null(c_39), t);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(d_2, t);
  }
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_38), not_null(s_38));
  t = diff_0_0(t);
  if(((t_38 != NULL) && (t_38 != t)))
    _fail(t);
  else
    t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_38), not_null(t_38));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((e_39 != NULL) && (e_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_39 = ATgetArgument(t, 0);
      if(((h_39 != NULL) && (h_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_39 = ATgetArgument(t, 1);
      if(((g_39 != NULL) && (g_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((k_39 != NULL) && (k_39 != t)))
    _fail(t);
  else
    k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(h_39));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_39 = ATgetArgument(t, 0);
      if(((f_39 != NULL) && (f_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_39);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_39 = NULL;
        if(((m_39 != NULL) && (m_39 != t)))
          _fail(t);
        else
          m_39 = t;
        {
          ATerm z_21 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_21;
            }
        }
        t = not_null(m_39);
        LocalPopChoice(y_21);
        t = h_151(t);
      }
    else
      {
        t = x_21;
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_39 = NULL;
              if(((n_39 != NULL) && (n_39 != t)))
                _fail(t);
              else
                n_39 = t;
              t = not_null(g_39);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm c_22 = ATgetArgument(t, 0);
                  if(!(match_cons(c_22, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(n_39);
              LocalPopChoice(b_22);
              t = not_null(h_39);
              t = Hd_0_0(t);
              if(((i_39 != NULL) && (i_39 != t)))
                _fail(t);
              else
                i_39 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(i_39)));
            }
          else
            {
              t = a_22;
              t = i_151(t);
            }
        }
      }
  }
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), not_null(f_39));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_39 = NULL;
  if(((t_39 != NULL) && (t_39 != t)))
    _fail(t);
  else
    t_39 = t;
  return(t);
}
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_39 != NULL) && (q_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_39 = ATgetArgument(t, 0);
      if(((p_39 != NULL) && (p_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = not_null(q_39);
  {
    static ATerm y_39 (ATerm t);
    static ATerm y_39 (ATerm t)
    {
      ATerm p_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(q_22);
        }
      else
        {
          t = p_22;
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm f_2 (ATerm t);
                static ATerm f_2 (ATerm t)
                {
                  t = not_null(p_39);
                  return(t);
                }
                t = HdMember_p__2_0(j_127, f_2, t);
                t = y_39(t);
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                t = Cons_2_0(g_2, y_39, t);
              }
          }
        }
      return(t);
    }
    t = y_39(t);
  }
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm z_39 = NULL,d_40 = NULL,e_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_40 = ATgetArgument(t, 0);
      {
        ATerm g_24 = ATgetArgument(t, 1);
        if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
          {
            if(((z_39 != NULL) && (z_39 != ATgetFirst((ATermList) g_24))))
              _fail(ATgetFirst((ATermList) g_24));
            else
              z_39 = ATgetFirst((ATermList) g_24);
            if(((e_40 != NULL) && (e_40 != (ATerm) ATgetNext((ATermList) g_24))))
              _fail((ATerm) ATgetNext((ATermList) g_24));
            else
              e_40 = (ATerm) ATgetNext((ATermList) g_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_40)), not_null(z_39)), not_null(e_40));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_40 != NULL) && (f_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_40 = ATgetArgument(t, 0);
      if(((g_40 != NULL) && (g_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(g_40)), not_null(f_40));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
        {
          if(((h_40 != NULL) && (h_40 != ATgetFirst((ATermList) h_24))))
            _fail(ATgetFirst((ATermList) h_24));
          else
            h_40 = ATgetFirst((ATermList) h_24);
          if(((j_40 != NULL) && (j_40 != (ATerm) ATgetNext((ATermList) h_24))))
            _fail((ATerm) ATgetNext((ATermList) h_24));
          else
            j_40 = (ATerm) ATgetNext((ATermList) h_24);
        }
      else
        _fail(t);
      {
        ATerm i_24 = ATgetArgument(t, 1);
        if(((ATgetType(i_24) == AT_LIST) && !(ATisEmpty(i_24))))
          {
            if(((i_40 != NULL) && (i_40 != ATgetFirst((ATermList) i_24))))
              _fail(ATgetFirst((ATermList) i_24));
            else
              i_40 = ATgetFirst((ATermList) i_24);
            if(((k_40 != NULL) && (k_40 != (ATerm) ATgetNext((ATermList) i_24))))
              _fail((ATerm) ATgetNext((ATermList) i_24));
            else
              k_40 = (ATerm) ATgetNext((ATermList) i_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_40), not_null(i_40)), (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(k_40)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_25 = ATgetArgument(t, 0);
      if(((ATgetType(h_25) != AT_LIST) || !(ATisEmpty(h_25))))
        _fail(t);
      {
        ATerm i_25 = ATgetArgument(t, 1);
        if(((ATgetType(i_25) != AT_LIST) || !(ATisEmpty(i_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t)
{
  static ATerm l_40 (ATerm t);
  static ATerm l_40 (ATerm t)
  {
    ATerm a_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = a_26;
        t = i_125(t);
        t = _2_0(k_125, l_40, t);
        t = j_125(t);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, m_125, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_41 = NULL;
  if(((m_41 != NULL) && (m_41 != t)))
    _fail(t);
  else
    m_41 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_27 = ATgetFirst((ATermList) t);
      if(match_cons(f_27, sym__2))
        {
          if(((v_40 != NULL) && (v_40 != ATgetArgument(f_27, 0))))
            _fail(ATgetArgument(f_27, 0));
          else
            v_40 = ATgetArgument(f_27, 0);
          if(((c_41 != NULL) && (c_41 != ATgetArgument(f_27, 1))))
            _fail(ATgetArgument(f_27, 1));
          else
            c_41 = ATgetArgument(f_27, 1);
        }
      else
        _fail(t);
      if(((q_40 != NULL) && (q_40 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((d_41 != NULL) && (d_41 != t)))
    _fail(t);
  else
    d_41 = t;
  t = not_null(c_41);
  if(((e_41 != NULL) && (e_41 != t)))
    _fail(t);
  else
    e_41 = t;
  t = SSL_explode_term(not_null(e_41));
  if(match_cons(t, sym__2))
    {
      if(((n_40 != NULL) && (n_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_40 = ATgetArgument(t, 0);
      if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_41);
  if(((w_40 != NULL) && (w_40 != t)))
    _fail(t);
  else
    w_40 = t;
  t = not_null(v_40);
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = SSL_explode_term(not_null(b_41));
  if(match_cons(t, sym__2))
    {
      if(((n_40 != NULL) && (n_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_40 = ATgetArgument(t, 0);
      if(((o_40 != NULL) && (o_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_40);
  if(((s_40 != NULL) && (s_40 != t)))
    _fail(t);
  else
    s_40 = t;
  if(((u_40 != NULL) && (u_40 != t)))
    _fail(t);
  else
    u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), not_null(p_40));
  t = zip_1_0(h_2, t);
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_40), not_null(q_40));
  t = conc_0_0(t);
  if(((r_40 != NULL) && (r_40 != t)))
    _fail(t);
  else
    r_40 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_28 = ATgetFirst((ATermList) t);
      if(match_cons(k_28, sym__2))
        {
          if(((n_41 != NULL) && (n_41 != ATgetArgument(k_28, 0))))
            _fail(ATgetArgument(k_28, 0));
          else
            n_41 = ATgetArgument(k_28, 0);
          if(((n_41 != NULL) && (n_41 != ATgetArgument(k_28, 1))))
            _fail(ATgetArgument(k_28, 1));
          else
            n_41 = ATgetArgument(k_28, 1);
        }
      else
        _fail(t);
      if(((o_41 != NULL) && (o_41 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(o_41);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_41 = NULL;
  if(((r_41 != NULL) && (r_41 != t)))
    _fail(t);
  else
    r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_41));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = _2_0(l_2, Nil_0_0, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm l_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(m_2, n_2, t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = l_28;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm s_41 = NULL;
  if(((s_41 != NULL) && (s_41 != t)))
    _fail(t);
  else
    s_41 = t;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_41 = NULL;
  if(((t_41 != NULL) && (t_41 != t)))
    _fail(t);
  else
    t_41 = t;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_2, j_2, k_2, t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = c_29;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_41 != NULL) && (x_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_41 = ATgetArgument(t, 0);
      if(((w_41 != NULL) && (w_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_42 != NULL) && (a_42 != t)))
    _fail(t);
  else
    a_42 = t;
  t = Fst_0_0(t);
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm b_42 = NULL,c_42 = NULL;
      ATerm e_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm m_42 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm t);
          static ATerm m_42 (ATerm d_42, ATerm e_42, ATerm f_42, ATerm t)
          {
            ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
            t = not_null(d_42);
            if(((b_42 != NULL) && (b_42 != t)))
              _fail(t);
            else
              b_42 = t;
            t = not_null(e_42);
            if(((c_42 != NULL) && (c_42 != t)))
              _fail(t);
            else
              c_42 = t;
            t = not_null(f_42);
            if(((h_42 != NULL) && (h_42 != t)))
              _fail(t);
            else
              h_42 = t;
            if(((i_42 != NULL) && (i_42 != t)))
              _fail(t);
            else
              i_42 = t;
            t = not_null(w_41);
            {
              static ATerm p_2 (ATerm t);
              static ATerm p_2 (ATerm t)
              {
                if(((b_42 != NULL) && (b_42 != t)))
                  _fail(t);
                else
                  b_42 = t;
                return(t);
              }
              t = SRTS_one(p_2, t);
            }
            t = not_null(i_42);
            if(((g_42 != NULL) && (g_42 != t)))
              _fail(t);
            else
              g_42 = t;
            t = (ATerm) ATinsert(ATempty, not_null(g_42));
            return(t);
          }
          ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
          if(((j_42 != NULL) && (j_42 != t)))
            _fail(t);
          else
            j_42 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((k_42 != NULL) && (k_42 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_42 = ATgetArgument(t, 0);
              if(((l_42 != NULL) && (l_42 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_42(not_null(k_42), not_null(l_42), not_null(j_42), t);
          LocalPopChoice(n_30);
        }
      else
        {
          t = e_30;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(o_2, t);
  }
  if(((y_41 != NULL) && (y_41 != t)))
    _fail(t);
  else
    y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_41), not_null(y_41));
  t = diff_0_0(t);
  if(((z_41 != NULL) && (z_41 != t)))
    _fail(t);
  else
    z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_41), not_null(z_41));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((t_42 != NULL) && (t_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_42 = ATgetArgument(t, 0);
      if(((u_42 != NULL) && (u_42 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_42 = ATgetArgument(t, 1);
      if(((w_42 != NULL) && (w_42 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_42 = ATgetArgument(t, 2);
      if(((n_42 != NULL) && (n_42 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        n_42 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((y_42 != NULL) && (y_42 != t)))
    _fail(t);
  else
    y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_42), not_null(u_42));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((z_42 != NULL) && (z_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_42 = ATgetArgument(t, 0);
      if(((v_42 != NULL) && (v_42 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_42);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_43 = NULL;
        if(((a_43 != NULL) && (a_43 != t)))
          _fail(t);
        else
          a_43 = t;
        {
          ATerm c_31 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_31;
            }
        }
        t = not_null(a_43);
        LocalPopChoice(b_31);
        t = j_151(t);
      }
    else
      {
        t = a_31;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_43 = NULL;
              if(((b_43 != NULL) && (b_43 != t)))
                _fail(t);
              else
                b_43 = t;
              t = not_null(w_42);
              {
                ATerm f_31 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_31;
                  }
              }
              t = not_null(b_43);
              LocalPopChoice(e_31);
              t = k_151(t);
            }
          else
            {
              t = d_31;
              t = l_151(t);
            }
        }
      }
  }
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(v_42));
  return(t);
}
static ATerm c_51 (ATerm w_44, ATerm x_44, ATerm y_44, ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  t = not_null(w_44);
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  t = not_null(x_44);
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  t = not_null(y_44);
  if(((c_45 != NULL) && (c_45 != t)))
    _fail(t);
  else
    c_45 = t;
  t = not_null(z_44);
  if(((b_45 != NULL) && (b_45 != t)))
    _fail(t);
  else
    b_45 = t;
  t = not_null(a_45);
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(b_45), not_null(d_45), not_null(e_45), not_null(c_45));
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      static ATerm t_2 (ATerm t);
      static ATerm t_2 (ATerm t)
      {
        ATerm k_45 = NULL,l_45 = NULL;
        if(((l_45 != NULL) && (l_45 != t)))
          _fail(t);
        else
          l_45 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(f_45), not_null(l_45));
        return(t);
      }
      t = not_null(d_45);
      t = Hd_0_0(t);
      if(((f_45 != NULL) && (f_45 != t)))
        _fail(t);
      else
        f_45 = t;
      t = not_null(e_45);
      t = map_1_0(t_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(q_2, r_2, s_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((g_45 != NULL) && (g_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_45 = ATgetArgument(t, 0);
      if(((h_45 != NULL) && (h_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), not_null(h_45));
  return(t);
}
static ATerm d_51 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = not_null(m_45);
  if(((t_45 != NULL) && (t_45 != t)))
    _fail(t);
  else
    t_45 = t;
  t = not_null(n_45);
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(o_45);
  if(((r_45 != NULL) && (r_45 != t)))
    _fail(t);
  else
    r_45 = t;
  t = not_null(p_45);
  if(((s_45 != NULL) && (s_45 != t)))
    _fail(t);
  else
    s_45 = t;
  t = not_null(q_45);
  if(((x_45 != NULL) && (x_45 != t)))
    _fail(t);
  else
    x_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(s_45), not_null(t_45), not_null(u_45));
  t = xtc_toption_to_args_2_0(u_2, v_2, t);
  if(match_cons(t, sym__2))
    {
      if(((v_45 != NULL) && (v_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_45 = ATgetArgument(t, 0);
      if(((w_45 != NULL) && (w_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(w_45));
  return(t);
}
static ATerm e_51 (ATerm z_45, ATerm a_46, ATerm b_46, ATerm c_46, ATerm k_46, ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  t = not_null(z_45);
  if(((n_46 != NULL) && (n_46 != t)))
    _fail(t);
  else
    n_46 = t;
  t = not_null(a_46);
  if(((o_46 != NULL) && (o_46 != t)))
    _fail(t);
  else
    o_46 = t;
  t = not_null(b_46);
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = not_null(c_46);
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  t = not_null(k_46);
  if(((s_46 != NULL) && (s_46 != t)))
    _fail(t);
  else
    s_46 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(l_46), not_null(n_46), not_null(o_46), not_null(m_46));
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      static ATerm y_2 (ATerm t);
      static ATerm y_2 (ATerm t)
      {
        ATerm u_46 = NULL,v_46 = NULL;
        if(((v_46 != NULL) && (v_46 != t)))
          _fail(t);
        else
          v_46 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(p_46), not_null(v_46));
        return(t);
      }
      t = not_null(n_46);
      t = Hd_0_0(t);
      if(((p_46 != NULL) && (p_46 != t)))
        _fail(t);
      else
        p_46 = t;
      t = not_null(o_46);
      t = map_1_0(y_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(w_2, x_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_46 = ATgetArgument(t, 0);
      if(((r_46 != NULL) && (r_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_46), not_null(r_46));
  return(t);
}
static ATerm f_51 (ATerm w_46, ATerm x_46, ATerm y_46, ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  t = not_null(w_46);
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = not_null(x_46);
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = not_null(y_46);
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  t = not_null(z_46);
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  t = not_null(a_47);
  if(((h_47 != NULL) && (h_47 != t)))
    _fail(t);
  else
    h_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_47), not_null(d_47), not_null(e_47));
  t = xtc_toption_to_args_2_0(z_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((f_47 != NULL) && (f_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_47 = ATgetArgument(t, 0);
      if(((g_47 != NULL) && (g_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_47), not_null(g_47));
  return(t);
}
static ATerm g_51 (ATerm j_47, ATerm k_47, ATerm l_47, ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,w_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,e_48 = NULL;
  t = not_null(j_47);
  if(((q_47 != NULL) && (q_47 != t)))
    _fail(t);
  else
    q_47 = t;
  t = not_null(k_47);
  if(((r_47 != NULL) && (r_47 != t)))
    _fail(t);
  else
    r_47 = t;
  t = not_null(l_47);
  if(((p_47 != NULL) && (p_47 != t)))
    _fail(t);
  else
    p_47 = t;
  t = not_null(m_47);
  if(((o_47 != NULL) && (o_47 != t)))
    _fail(t);
  else
    o_47 = t;
  t = not_null(n_47);
  if(((e_48 != NULL) && (e_48 != t)))
    _fail(t);
  else
    e_48 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(o_47), not_null(q_47), not_null(r_47), not_null(p_47));
  {
    static ATerm b_3 (ATerm t);
    static ATerm b_3 (ATerm t)
    {
      t = not_null(q_47);
      t = Hd_0_0(t);
      if(((w_47 != NULL) && (w_47 != t)))
        _fail(t);
      else
        w_47 = t;
      t = not_null(r_47);
      t = Hd_0_0(t);
      if(((a_48 != NULL) && (a_48 != t)))
        _fail(t);
      else
        a_48 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(w_47), not_null(a_48)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(a_3, b_3, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((b_48 != NULL) && (b_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_48 = ATgetArgument(t, 0);
      if(((c_48 != NULL) && (c_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_48), not_null(c_48));
  return(t);
}
static ATerm h_51 (ATerm h_48, ATerm i_48, ATerm j_48, ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm m_48 = NULL,o_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  t = not_null(h_48);
  if(((q_48 != NULL) && (q_48 != t)))
    _fail(t);
  else
    q_48 = t;
  t = not_null(i_48);
  if(((r_48 != NULL) && (r_48 != t)))
    _fail(t);
  else
    r_48 = t;
  t = not_null(j_48);
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  t = not_null(k_48);
  if(((o_48 != NULL) && (o_48 != t)))
    _fail(t);
  else
    o_48 = t;
  t = not_null(l_48);
  if(((u_48 != NULL) && (u_48 != t)))
    _fail(t);
  else
    u_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_48), not_null(q_48), not_null(r_48));
  t = xtc_toption_to_args_2_0(c_3, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_48 = ATgetArgument(t, 0);
      if(((t_48 != NULL) && (t_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_48), not_null(t_48));
  return(t);
}
static ATerm i_51 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  t = not_null(f_49);
  if(((o_49 != NULL) && (o_49 != t)))
    _fail(t);
  else
    o_49 = t;
  t = not_null(g_49);
  if(((t_49 != NULL) && (t_49 != t)))
    _fail(t);
  else
    t_49 = t;
  t = not_null(h_49);
  if(((n_49 != NULL) && (n_49 != t)))
    _fail(t);
  else
    n_49 = t;
  t = not_null(i_49);
  if(((m_49 != NULL) && (m_49 != t)))
    _fail(t);
  else
    m_49 = t;
  t = not_null(j_49);
  if(((y_49 != NULL) && (y_49 != t)))
    _fail(t);
  else
    y_49 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(m_49), not_null(o_49), not_null(t_49), not_null(n_49));
  {
    static ATerm e_3 (ATerm t);
    static ATerm e_3 (ATerm t)
    {
      t = not_null(o_49);
      t = Hd_0_0(t);
      if(((u_49 != NULL) && (u_49 != t)))
        _fail(t);
      else
        u_49 = t;
      t = not_null(t_49);
      t = Hd_0_0(t);
      if(((v_49 != NULL) && (v_49 != t)))
        _fail(t);
      else
        v_49 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_49), not_null(v_49)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(d_3, e_3, f_3, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_49 != NULL) && (w_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_49 = ATgetArgument(t, 0);
      if(((x_49 != NULL) && (x_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_49), not_null(x_49));
  return(t);
}
static ATerm j_51 (ATerm b_50, ATerm c_50, ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  t = not_null(b_50);
  if(((i_50 != NULL) && (i_50 != t)))
    _fail(t);
  else
    i_50 = t;
  t = not_null(c_50);
  if(((j_50 != NULL) && (j_50 != t)))
    _fail(t);
  else
    j_50 = t;
  t = not_null(d_50);
  if(((g_50 != NULL) && (g_50 != t)))
    _fail(t);
  else
    g_50 = t;
  t = not_null(e_50);
  if(((h_50 != NULL) && (h_50 != t)))
    _fail(t);
  else
    h_50 = t;
  t = not_null(f_50);
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_50), not_null(i_50), not_null(j_50));
  t = xtc_toption_to_args_2_0(n_3, o_3, t);
  if(match_cons(t, sym__2))
    {
      if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_50 = ATgetArgument(t, 0);
      if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(l_50));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm j_45 = NULL;
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_45 = NULL;
  if(((y_45 != NULL) && (y_45 != t)))
    _fail(t);
  else
    y_45 = t;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm t_46 = NULL;
  if(((t_46 != NULL) && (t_46 != t)))
    _fail(t);
  else
    t_46 = t;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm i_47 = NULL;
  if(((i_47 != NULL) && (i_47 != t)))
    _fail(t);
  else
    i_47 = t;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  if(((g_48 != NULL) && (g_48 != t)))
    _fail(t);
  else
    g_48 = t;
  t = Hd_0_0(t);
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  t = (ATerm) ATinsert(ATempty, not_null(f_48));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm y_48 = NULL,a_49 = NULL;
  if(((a_49 != NULL) && (a_49 != t)))
    _fail(t);
  else
    a_49 = t;
  t = Hd_0_0(t);
  if(((y_48 != NULL) && (y_48 != t)))
    _fail(t);
  else
    y_48 = t;
  t = (ATerm) ATinsert(ATempty, not_null(y_48));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  if(((a_50 != NULL) && (a_50 != t)))
    _fail(t);
  else
    a_50 = t;
  t = Hd_0_0(t);
  if(((z_49 != NULL) && (z_49 != t)))
    _fail(t);
  else
    z_49 = t;
  t = (ATerm) ATinsert(ATempty, not_null(z_49));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = Hd_0_0(t);
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = (ATerm) ATinsert(ATempty, not_null(n_50));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  if(match_cons(t, sym__2))
    {
      if(((u_50 != NULL) && (u_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_50 = ATgetArgument(t, 0);
      if(((b_51 != NULL) && (b_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_50);
  if(match_cons(t, sym_TVarStar_4))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      x_50 = ATgetArgument(t, 2);
      z_50 = ATgetArgument(t, 3);
      t = not_null(v_50);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(x_50);
          if(match_cons(t, sym_Some_1))
            {
              if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(y_50);
          if(match_cons(t, sym_Default_1))
            {
              if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(p_50);
          if(match_cons(t, sym_Values_1))
            {
              if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(z_50);
          if(match_cons(t, sym_Some_1))
            {
              if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_51(not_null(w_50), not_null(q_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(x_50);
          if(match_cons(t, sym_Some_1))
            {
              if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(z_50);
          if(match_cons(t, sym_Some_1))
            {
              if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_51(not_null(w_50), not_null(y_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          v_50 = ATgetArgument(t, 0);
          w_50 = ATgetArgument(t, 1);
          x_50 = ATgetArgument(t, 2);
          z_50 = ATgetArgument(t, 3);
          t = not_null(v_50);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(x_50);
              if(match_cons(t, sym_Some_1))
                {
                  if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(y_50);
              if(match_cons(t, sym_Default_1))
                {
                  if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(p_50);
              if(match_cons(t, sym_Values_1))
                {
                  if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(z_50);
              if(match_cons(t, sym_Some_1))
                {
                  if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_51(not_null(w_50), not_null(q_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(x_50);
              if(match_cons(t, sym_Some_1))
                {
                  if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(z_50);
              if(match_cons(t, sym_Some_1))
                {
                  if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_51(not_null(w_50), not_null(y_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              v_50 = ATgetArgument(t, 0);
              w_50 = ATgetArgument(t, 1);
              x_50 = ATgetArgument(t, 2);
              z_50 = ATgetArgument(t, 3);
              t = not_null(v_50);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(x_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_50);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(p_50);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(z_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_51(not_null(w_50), not_null(q_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(x_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(z_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_51(not_null(w_50), not_null(y_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_50 = ATgetArgument(t, 0);
                  if(((w_50 != NULL) && (w_50 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_50 = ATgetArgument(t, 1);
                  if(((x_50 != NULL) && (x_50 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    x_50 = ATgetArgument(t, 2);
                  if(((z_50 != NULL) && (z_50 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    z_50 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(v_50);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(x_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(y_50);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((p_50 != NULL) && (p_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(p_50);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(z_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_51(not_null(w_50), not_null(q_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(x_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(z_50);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_51(not_null(w_50), not_null(y_50), not_null(a_51), not_null(b_51), not_null(t_50), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm j_3, ATerm t)
{
  static ATerm d_52 (ATerm p_51, ATerm q_51, ATerm t);
  static ATerm e_52 (ATerm v_51, ATerm t);
  static ATerm d_52 (ATerm p_51, ATerm q_51, ATerm t)
  {
    ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
    t = not_null(p_51);
    if(((r_51 != NULL) && (r_51 != t)))
      _fail(t);
    else
      r_51 = t;
    t = not_null(q_51);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(u_51);
    if(((s_51 != NULL) && (s_51 != t)))
      _fail(t);
    else
      s_51 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(r_51), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_51)))));
    return(t);
  }
  static ATerm e_52 (ATerm v_51, ATerm t)
  {
    ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
    t = not_null(v_51);
    if(((x_51 != NULL) && (x_51 != t)))
      _fail(t);
    else
      x_51 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((y_51 != NULL) && (y_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(y_51);
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(w_51)))));
    return(t);
  }
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  if(match_cons(t, sym_File_1))
    {
      b_52 = ATgetArgument(t, 0);
      t = not_null(b_52);
      if(match_cons(t, sym_Some_1))
        {
          z_51 = ATgetArgument(t, 0);
          t = d_52(not_null(z_51), not_null(a_52), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = e_52(not_null(a_52), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((b_52 != NULL) && (b_52 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(b_52);
      if(match_cons(t, sym_Some_1))
        {
          z_51 = ATgetArgument(t, 0);
          {
            ATerm c_52 = NULL;
            t = not_null(z_51);
            if(((c_52 != NULL) && (c_52 != t)))
              _fail(t);
            else
              c_52 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(c_52)));
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm xtc_stream_to_arg_0_1 (ATerm i_3, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  if(match_cons(t, sym_Error_1))
    {
      h_52 = ATgetArgument(t, 0);
      {
        ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
        t = not_null(h_52);
        if(((i_52 != NULL) && (i_52 != t)))
          _fail(t);
        else
          i_52 = t;
        t = not_null(g_52);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = not_null(i_52);
        t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
        if(((j_52 != NULL) && (j_52 != t)))
          _fail(t);
        else
          j_52 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          h_52 = ATgetArgument(t, 0);
          {
            ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
            t = not_null(h_52);
            if(((l_52 != NULL) && (l_52 != t)))
              _fail(t);
            else
              l_52 = t;
            t = not_null(g_52);
            if(((n_52 != NULL) && (n_52 != t)))
              _fail(t);
            else
              n_52 = t;
            t = not_null(l_52);
            t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
            if(((m_52 != NULL) && (m_52 != t)))
              _fail(t);
            else
              m_52 = t;
          }
        }
      else
        {
          ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((h_52 != NULL) && (h_52 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_52);
          if(((o_52 != NULL) && (o_52 != t)))
            _fail(t);
          else
            o_52 = t;
          t = not_null(g_52);
          if(((q_52 != NULL) && (q_52 != t)))
            _fail(t);
          else
            q_52 = t;
          t = not_null(o_52);
          t = xtc_streamdef_to_arg_0_1(not_null(i_3), t);
          if(((p_52 != NULL) && (p_52 != t)))
            _fail(t);
          else
            p_52 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm r_52 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(match_cons(c_32, sym_Some_1))
        {
          if(((r_52 != NULL) && (r_52 != ATgetArgument(c_32, 0))))
            _fail(ATgetArgument(c_32, 0));
          else
            r_52 = ATgetArgument(c_32, 0);
        }
      else
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
      }
      {
        ATerm e_32 = ATgetArgument(t, 2);
      }
      {
        ATerm f_32 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(r_52);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm s_52 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((s_52 != NULL) && (s_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_52 = ATgetArgument(t, 0);
      {
        ATerm g_32 = ATgetArgument(t, 1);
      }
      {
        ATerm h_32 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(s_52);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  if(((v_52 != NULL) && (v_52 != t)))
    _fail(t);
  else
    v_52 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((w_52 != NULL) && (w_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(w_52);
  if(match_cons(t, sym_HTTP_1))
    {
      x_52 = ATgetArgument(t, 0);
      {
        ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
        t = not_null(x_52);
        if(((y_52 != NULL) && (y_52 != t)))
          _fail(t);
        else
          y_52 = t;
        t = not_null(v_52);
        if(((a_53 != NULL) && (a_53 != t)))
          _fail(t);
        else
          a_53 = t;
        t = not_null(y_52);
        t = xtc_stream_input_0_0(t);
        if(((z_52 != NULL) && (z_52 != t)))
          _fail(t);
        else
          z_52 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_t_33;
        }
      else
        {
          ATerm b_53 = NULL,e_53 = NULL,f_53 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((x_52 != NULL) && (x_52 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(x_52);
          if(((b_53 != NULL) && (b_53 != t)))
            _fail(t);
          else
            b_53 = t;
          t = not_null(v_52);
          if(((f_53 != NULL) && (f_53 != t)))
            _fail(t);
          else
            f_53 = t;
          t = not_null(b_53);
          t = xtc_stream_input_0_0(t);
          if(((e_53 != NULL) && (e_53 != t)))
            _fail(t);
          else
            e_53 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm g_53 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      ATerm v_33 = ATgetArgument(t, 1);
      if(match_cons(v_33, sym_Some_1))
        {
          if(((g_53 != NULL) && (g_53 != ATgetArgument(v_33, 0))))
            _fail(ATgetArgument(v_33, 0));
          else
            g_53 = ATgetArgument(v_33, 0);
        }
      else
        _fail(t);
      {
        ATerm w_33 = ATgetArgument(t, 2);
      }
      {
        ATerm z_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(g_53);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_53 = ATgetArgument(t, 1);
      {
        ATerm g_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(h_53);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(match_cons(h_34, sym_Exec_1))
        {
          if(((k_53 != NULL) && (k_53 != ATgetArgument(h_34, 0))))
            _fail(ATgetArgument(h_34, 0));
          else
            k_53 = ATgetArgument(h_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((m_53 != NULL) && (m_53 != t)))
    _fail(t);
  else
    m_53 = t;
  t = not_null(k_53);
  t = xtc_stream_output_0_0(t);
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm n_53 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      ATerm j_34 = ATgetArgument(t, 1);
      ATerm k_34 = ATgetArgument(t, 2);
      if(match_cons(k_34, sym_Some_1))
        {
          if(((n_53 != NULL) && (n_53 != ATgetArgument(k_34, 0))))
            _fail(ATgetArgument(k_34, 0));
          else
            n_53 = ATgetArgument(k_34, 0);
        }
      else
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(n_53);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm q_53 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      ATerm o_34 = ATgetArgument(t, 1);
      if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(q_53);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      if(match_cons(p_34, sym_Exec_1))
        {
          if(((r_53 != NULL) && (r_53 != ATgetArgument(p_34, 0))))
            _fail(ATgetArgument(p_34, 0));
          else
            r_53 = ATgetArgument(p_34, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((t_53 != NULL) && (t_53 != t)))
    _fail(t);
  else
    t_53 = t;
  t = not_null(r_53);
  t = xtc_stream_error_0_0(t);
  if(((s_53 != NULL) && (s_53 != t)))
    _fail(t);
  else
    s_53 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm g_3, ATerm h_3, ATerm t)
{
  static ATerm i_55 (ATerm z_53, ATerm t);
  static ATerm j_55 (ATerm h_54, ATerm t);
  static ATerm k_55 (ATerm s_54, ATerm t);
  static ATerm i_55 (ATerm z_53, ATerm t)
  {
    ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
    t = not_null(z_53);
    if(((b_54 != NULL) && (b_54 != t)))
      _fail(t);
    else
      b_54 = t;
    t = not_null(g_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((c_54 != NULL) && (c_54 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_54 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(c_54);
    if(((e_54 != NULL) && (e_54 != t)))
      _fail(t);
    else
      e_54 = t;
    if(((g_54 != NULL) && (g_54 != t)))
      _fail(t);
    else
      g_54 = t;
    t = not_null(h_3);
    t = xtc_conf_error_0_0(t);
    if(((f_54 != NULL) && (f_54 != t)))
      _fail(t);
    else
      f_54 = t;
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(e_54);
    t = xtc_stream_to_arg_0_1(not_null(d_54), t);
    if(((a_54 != NULL) && (a_54 != t)))
      _fail(t);
    else
      a_54 = t;
    return(t);
  }
  static ATerm j_55 (ATerm h_54, ATerm t)
  {
    ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
    t = not_null(h_54);
    if(((l_54 != NULL) && (l_54 != t)))
      _fail(t);
    else
      l_54 = t;
    t = not_null(g_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((m_54 != NULL) && (m_54 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_54 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(m_54);
    if(((p_54 != NULL) && (p_54 != t)))
      _fail(t);
    else
      p_54 = t;
    if(((r_54 != NULL) && (r_54 != t)))
      _fail(t);
    else
      r_54 = t;
    t = not_null(h_3);
    t = xtc_conf_output_0_0(t);
    if(((q_54 != NULL) && (q_54 != t)))
      _fail(t);
    else
      q_54 = t;
    if(((n_54 != NULL) && (n_54 != t)))
      _fail(t);
    else
      n_54 = t;
    t = not_null(p_54);
    t = xtc_stream_to_arg_0_1(not_null(n_54), t);
    if(((k_54 != NULL) && (k_54 != t)))
      _fail(t);
    else
      k_54 = t;
    return(t);
  }
  static ATerm k_55 (ATerm s_54, ATerm t)
  {
    ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,b_55 = NULL,c_55 = NULL;
    t = not_null(s_54);
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = not_null(g_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((v_54 != NULL) && (v_54 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_54 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(v_54);
    if(((x_54 != NULL) && (x_54 != t)))
      _fail(t);
    else
      x_54 = t;
    if(((c_55 != NULL) && (c_55 != t)))
      _fail(t);
    else
      c_55 = t;
    t = not_null(h_3);
    t = xtc_conf_input_0_0(t);
    if(((b_55 != NULL) && (b_55 != t)))
      _fail(t);
    else
      b_55 = t;
    if(((w_54 != NULL) && (w_54 != t)))
      _fail(t);
    else
      w_54 = t;
    t = not_null(x_54);
    t = xtc_stream_to_arg_0_1(not_null(w_54), t);
    if(((t_54 != NULL) && (t_54 != t)))
      _fail(t);
    else
      t_54 = t;
    return(t);
  }
  ATerm g_55 = NULL,h_55 = NULL;
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((h_55 != NULL) && (h_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(h_55);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_r_34);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = i_55(not_null(g_55), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = j_55(not_null(g_55), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = k_55(not_null(g_55), t);
            }
        }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_56 = NULL;
  if(((h_56 != NULL) && (h_56 != t)))
    _fail(t);
  else
    h_56 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if(match_cons(s_34, sym_TOr_2))
        {
          if(((m_55 != NULL) && (m_55 != ATgetArgument(s_34, 0))))
            _fail(ATgetArgument(s_34, 0));
          else
            m_55 = ATgetArgument(s_34, 0);
          if(((n_55 != NULL) && (n_55 != ATgetArgument(s_34, 1))))
            _fail(ATgetArgument(s_34, 1));
          else
            n_55 = ATgetArgument(s_34, 1);
        }
      else
        _fail(t);
      if(((o_55 != NULL) && (o_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_55 != NULL) && (u_55 != t)))
    _fail(t);
  else
    u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_55), not_null(n_55));
  if(((w_55 != NULL) && (w_55 != t)))
    _fail(t);
  else
    w_55 = t;
  t = term_t_34;
  if(((v_55 != NULL) && (v_55 != t)))
    _fail(t);
  else
    v_55 = t;
  t = not_null(w_55);
  t = dbg_0_1(not_null(v_55), t);
  {
    ATerm w_34 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = NULL,y_55 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_55), not_null(o_55));
        t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
        if(((y_55 != NULL) && (y_55 != t)))
          _fail(t);
        else
          y_55 = t;
        t = term_d_35;
        if(((x_55 != NULL) && (x_55 != t)))
          _fail(t);
        else
          x_55 = t;
        t = not_null(y_55);
        t = dbg_0_1(not_null(x_55), t);
        LocalPopChoice(c_35);
      }
    else
      {
        t = w_34;
        {
          ATerm f_56 = NULL,g_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_55), not_null(o_55));
          t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
          if(((g_56 != NULL) && (g_56 != t)))
            _fail(t);
          else
            g_56 = t;
          t = term_e_35;
          if(((f_56 != NULL) && (f_56 != t)))
            _fail(t);
          else
            f_56 = t;
          t = not_null(g_56);
          t = dbg_0_1(not_null(f_56), t);
        }
      }
  }
  t = _2_0(concat_0_0, p_3, t);
  if(match_cons(t, sym__2))
    {
      if(((p_55 != NULL) && (p_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_55 = ATgetArgument(t, 0);
      if(((t_55 != NULL) && (t_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_55), not_null(t_55));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(((ATgetType(f_35) != AT_LIST) || !(ATisEmpty(f_35))))
        _fail(t);
      if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_56));
  return(t);
}
ATerm Cons_T_2_0 (ATerm k_1 (ATerm), ATerm n_1 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
        {
          if(((y_56 != NULL) && (y_56 != ATgetFirst((ATermList) g_35))))
            _fail(ATgetFirst((ATermList) g_35));
          else
            y_56 = ATgetFirst((ATermList) g_35);
          if(((z_56 != NULL) && (z_56 != (ATerm) ATgetNext((ATermList) g_35))))
            _fail((ATerm) ATgetNext((ATermList) g_35));
          else
            z_56 = (ATerm) ATgetNext((ATermList) g_35);
        }
      else
        _fail(t);
      if(((j_56 != NULL) && (j_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_57 != NULL) && (c_57 != t)))
    _fail(t);
  else
    c_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_56), not_null(j_56));
  t = k_1(t);
  if(match_cons(t, sym__2))
    {
      if(((a_57 != NULL) && (a_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_57 = ATgetArgument(t, 0);
      if(((k_56 != NULL) && (k_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(k_56));
  t = n_1(t);
  if(match_cons(t, sym__2))
    {
      if(((b_57 != NULL) && (b_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_57 = ATgetArgument(t, 0);
      if(((x_56 != NULL) && (x_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_57)), not_null(a_57)), not_null(x_56));
  return(t);
}
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm d_57 (ATerm t);
  static ATerm d_57 (ATerm t)
  {
    ATerm h_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(t_130, d_57, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = h_35;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = d_57(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm f_57 = NULL;
  if(((f_57 != NULL) && (f_57 != t)))
    _fail(t);
  else
    f_57 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t)
{
  static ATerm q_3 (ATerm t);
  static ATerm q_3 (ATerm t)
  {
    ATerm l_35 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(x_91), not_null(y_91), t);
        LocalPopChoice(i_36);
      }
    else
      {
        t = l_35;
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_3 (ATerm t);
              static ATerm r_3 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(x_91), not_null(y_91), t);
                return(t);
              }
              t = _2_0(r_3, s_3, t);
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                ATerm l_36 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(m_36);
                  }
                else
                  {
                    t = l_36;
                    t = n_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(q_3, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm g_57 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      ATerm o_36 = ATgetArgument(t, 1);
      ATerm p_36 = ATgetArgument(t, 2);
      if(((g_57 != NULL) && (g_57 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        g_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(g_57);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  if(((n_57 != NULL) && (n_57 != t)))
    _fail(t);
  else
    n_57 = t;
  t = Snd_0_0(t);
  if(((m_57 != NULL) && (m_57 != t)))
    _fail(t);
  else
    m_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_57));
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_57 = NULL;
  if(((o_57 != NULL) && (o_57 != t)))
    _fail(t);
  else
    o_57 = t;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  if(((q_57 != NULL) && (q_57 != t)))
    _fail(t);
  else
    q_57 = t;
  t = Snd_0_0(t);
  if(((s_57 != NULL) && (s_57 != t)))
    _fail(t);
  else
    s_57 = t;
  t = term_q_36;
  if(((r_57 != NULL) && (r_57 != t)))
    _fail(t);
  else
    r_57 = t;
  t = not_null(s_57);
  t = err_0_1(not_null(r_57), t);
  t = not_null(q_57);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_37 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm g_37 = ATgetArgument(t, 0);
          if(!(match_cons(g_37, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  if(((l_57 != NULL) && (l_57 != t)))
    _fail(t);
  else
    l_57 = t;
  if(((i_57 != NULL) && (i_57 != t)))
    _fail(t);
  else
    i_57 = t;
  t = not_null(l_57);
  if(((k_57 != NULL) && (k_57 != t)))
    _fail(t);
  else
    k_57 = t;
  t = not_null(w_91);
  t = xtc_conf_args_0_0(t);
  if(((j_57 != NULL) && (j_57 != t)))
    _fail(t);
  else
    j_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_57), not_null(j_57));
  t = xtc_targ_thread_map_1_2(t_3, not_null(v_91), not_null(w_91), t);
  t = _2_0(concat_0_0, u_3, t);
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_57 = NULL;
        if(((p_57 != NULL) && (p_57 != t)))
          _fail(t);
        else
          p_57 = t;
        t = Snd_0_0(t);
        {
          ATerm p_37 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_37;
            }
        }
        t = not_null(p_57);
        LocalPopChoice(i_37);
        t = restore_2_0(m_151, v_3, t);
      }
    else
      {
        t = h_37;
        t = Fst_0_0(t);
        t = filter_1_0(w_3, t);
      }
  }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_37 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm p_38 = ATgetArgument(t, 0);
          if(!(match_cons(p_38, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_37;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  if(((u_57 != NULL) && (u_57 != t)))
    _fail(t);
  else
    u_57 = t;
  if(((w_57 != NULL) && (w_57 != t)))
    _fail(t);
  else
    w_57 = t;
  t = filter_1_0(x_3, t);
  if(((v_57 != NULL) && (v_57 != t)))
    _fail(t);
  else
    v_57 = t;
  {
    ATerm o_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_57 = NULL;
        if(((x_57 != NULL) && (x_57 != t)))
          _fail(t);
        else
          x_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_57), not_null(v_57));
        {
          ATerm v_39 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_39;
            }
        }
        t = not_null(x_57);
        LocalPopChoice(u_39);
        {
          ATerm y_57 = NULL,z_57 = NULL;
          if(((z_57 != NULL) && (z_57 != t)))
            _fail(t);
          else
            z_57 = t;
          t = term_w_39;
          if(((y_57 != NULL) && (y_57 != t)))
            _fail(t);
          else
            y_57 = t;
          t = not_null(z_57);
          t = err_0_1(not_null(y_57), t);
        }
      }
    else
      {
        t = o_39;
        {
          ATerm a_58 = NULL;
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
        }
      }
  }
  t = not_null(v_57);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm c_1, ATerm d_1, ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  if(((h_58 != NULL) && (h_58 != t)))
    _fail(t);
  else
    h_58 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((i_58 != NULL) && (i_58 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_58 = ATgetArgument(t, 0);
      if(((j_58 != NULL) && (j_58 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_58);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
      t = not_null(j_58);
      if(match_cons(t, sym_Some_1))
        {
          if(((k_58 != NULL) && (k_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(k_58);
      if(match_cons(t, sym_Layout_1))
        {
          if(((l_58 != NULL) && (l_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(l_58);
      if(((m_58 != NULL) && (m_58 != t)))
        _fail(t);
      else
        m_58 = t;
      t = not_null(h_58);
      if(((o_58 != NULL) && (o_58 != t)))
        _fail(t);
      else
        o_58 = t;
      t = not_null(m_58);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(c_1), not_null(d_1), t);
      if(((n_58 != NULL) && (n_58 != t)))
        _fail(t);
      else
        n_58 = t;
    }
  else
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(j_58);
      if(match_cons(t, sym_Some_1))
        {
          if(((k_58 != NULL) && (k_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(k_58);
      if(match_cons(t, sym_Layout_1))
        {
          if(((l_58 != NULL) && (l_58 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(l_58);
      if(((p_58 != NULL) && (p_58 != t)))
        _fail(t);
      else
        p_58 = t;
      t = not_null(h_58);
      if(((r_58 != NULL) && (r_58 != t)))
        _fail(t);
      else
        r_58 = t;
      t = not_null(p_58);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(c_1), not_null(d_1), t);
      if(((q_58 != NULL) && (q_58 != t)))
        _fail(t);
      else
        q_58 = t;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm x_58 = NULL;
  if(((x_58 != NULL) && (x_58 != t)))
    _fail(t);
  else
    x_58 = t;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm y_58 = NULL;
  if(((y_58 != NULL) && (y_58 != t)))
    _fail(t);
  else
    y_58 = t;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_58 = NULL;
  if(((z_58 != NULL) && (z_58 != t)))
    _fail(t);
  else
    z_58 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  static ATerm b_4 (ATerm t);
  static ATerm b_4 (ATerm t)
  {
    t = not_null(v_58);
    t = xtc_template_to_args_0_2(not_null(w_58), not_null(p_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((w_58 != NULL) && (w_58 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_58 = ATgetArgument(t, 0);
      if(((v_58 != NULL) && (v_58 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_92);
  t = XtcConf_4_0(y_3, z_3, a_4, b_4, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm n_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  if(((a_60 != NULL) && (a_60 != t)))
    _fail(t);
  else
    a_60 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
      d_60 = ATgetArgument(t, 2);
      e_60 = ATgetArgument(t, 3);
      t = not_null(d_60);
      if(match_cons(t, sym_Some_1))
        {
          n_59 = ATgetArgument(t, 0);
          {
            ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
            t = not_null(e_60);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(b_60);
            if(((f_60 != NULL) && (f_60 != t)))
              _fail(t);
            else
              f_60 = t;
            t = not_null(c_60);
            if(((g_60 != NULL) && (g_60 != t)))
              _fail(t);
            else
              g_60 = t;
            t = not_null(n_59);
            if(((h_60 != NULL) && (h_60 != t)))
              _fail(t);
            else
              h_60 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(f_60), not_null(g_60), (ATerm)ATmakeAppl(sym_Some_1, not_null(h_60)), term_b_40);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(e_60);
          if(match_cons(t, sym_Some_1))
            {
              z_59 = ATgetArgument(t, 0);
              {
                ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
                t = not_null(b_60);
                if(((i_60 != NULL) && (i_60 != t)))
                  _fail(t);
                else
                  i_60 = t;
                t = not_null(c_60);
                if(((j_60 != NULL) && (j_60 != t)))
                  _fail(t);
                else
                  j_60 = t;
                t = not_null(z_59);
                if(((k_60 != NULL) && (k_60 != t)))
                  _fail(t);
                else
                  k_60 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(i_60), not_null(j_60), term_x_40, (ATerm) ATmakeAppl(sym_Some_1, not_null(k_60)));
              }
            }
          else
            {
              ATerm l_60 = NULL,m_60 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(b_60);
              if(((l_60 != NULL) && (l_60 != t)))
                _fail(t);
              else
                l_60 = t;
              t = not_null(c_60);
              if(((m_60 != NULL) && (m_60 != t)))
                _fail(t);
              else
                m_60 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(l_60), not_null(m_60), term_x_40, term_b_40);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          b_60 = ATgetArgument(t, 0);
          c_60 = ATgetArgument(t, 1);
          d_60 = ATgetArgument(t, 2);
          e_60 = ATgetArgument(t, 3);
          t = not_null(d_60);
          if(match_cons(t, sym_Some_1))
            {
              n_59 = ATgetArgument(t, 0);
              {
                ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
                t = not_null(e_60);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(b_60);
                if(((n_60 != NULL) && (n_60 != t)))
                  _fail(t);
                else
                  n_60 = t;
                t = not_null(c_60);
                if(((o_60 != NULL) && (o_60 != t)))
                  _fail(t);
                else
                  o_60 = t;
                t = not_null(n_59);
                if(((p_60 != NULL) && (p_60 != t)))
                  _fail(t);
                else
                  p_60 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(n_60), not_null(o_60), (ATerm)ATmakeAppl(sym_Some_1, not_null(p_60)), term_b_40);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(e_60);
              if(match_cons(t, sym_Some_1))
                {
                  z_59 = ATgetArgument(t, 0);
                  {
                    ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
                    t = not_null(b_60);
                    if(((q_60 != NULL) && (q_60 != t)))
                      _fail(t);
                    else
                      q_60 = t;
                    t = not_null(c_60);
                    if(((r_60 != NULL) && (r_60 != t)))
                      _fail(t);
                    else
                      r_60 = t;
                    t = not_null(z_59);
                    if(((s_60 != NULL) && (s_60 != t)))
                      _fail(t);
                    else
                      s_60 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(q_60), not_null(r_60), term_x_40, (ATerm) ATmakeAppl(sym_Some_1, not_null(s_60)));
                  }
                }
              else
                {
                  ATerm t_60 = NULL,u_60 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(b_60);
                  if(((t_60 != NULL) && (t_60 != t)))
                    _fail(t);
                  else
                    t_60 = t;
                  t = not_null(c_60);
                  if(((u_60 != NULL) && (u_60 != t)))
                    _fail(t);
                  else
                    u_60 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(t_60), not_null(u_60), term_x_40, term_b_40);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              b_60 = ATgetArgument(t, 0);
              c_60 = ATgetArgument(t, 1);
              d_60 = ATgetArgument(t, 2);
              e_60 = ATgetArgument(t, 3);
              t = not_null(d_60);
              if(match_cons(t, sym_Some_1))
                {
                  n_59 = ATgetArgument(t, 0);
                  {
                    ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
                    t = not_null(e_60);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(b_60);
                    if(((v_60 != NULL) && (v_60 != t)))
                      _fail(t);
                    else
                      v_60 = t;
                    t = not_null(c_60);
                    if(((w_60 != NULL) && (w_60 != t)))
                      _fail(t);
                    else
                      w_60 = t;
                    t = not_null(n_59);
                    if(((x_60 != NULL) && (x_60 != t)))
                      _fail(t);
                    else
                      x_60 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(v_60), not_null(w_60), (ATerm)ATmakeAppl(sym_Some_1, not_null(x_60)), term_b_40);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(e_60);
                  if(match_cons(t, sym_Some_1))
                    {
                      z_59 = ATgetArgument(t, 0);
                      {
                        ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
                        t = not_null(b_60);
                        if(((y_60 != NULL) && (y_60 != t)))
                          _fail(t);
                        else
                          y_60 = t;
                        t = not_null(c_60);
                        if(((z_60 != NULL) && (z_60 != t)))
                          _fail(t);
                        else
                          z_60 = t;
                        t = not_null(z_59);
                        if(((a_61 != NULL) && (a_61 != t)))
                          _fail(t);
                        else
                          a_61 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(y_60), not_null(z_60), term_x_40, (ATerm) ATmakeAppl(sym_Some_1, not_null(a_61)));
                      }
                    }
                  else
                    {
                      ATerm b_61 = NULL,c_61 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(b_60);
                      if(((b_61 != NULL) && (b_61 != t)))
                        _fail(t);
                      else
                        b_61 = t;
                      t = not_null(c_60);
                      if(((c_61 != NULL) && (c_61 != t)))
                        _fail(t);
                      else
                        c_61 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(b_61), not_null(c_61), term_x_40, term_b_40);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((b_60 != NULL) && (b_60 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_60 = ATgetArgument(t, 0);
                  if(((c_60 != NULL) && (c_60 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_60 = ATgetArgument(t, 1);
                  if(((d_60 != NULL) && (d_60 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    d_60 = ATgetArgument(t, 2);
                  if(((e_60 != NULL) && (e_60 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    e_60 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(d_60);
              if(match_cons(t, sym_Some_1))
                {
                  n_59 = ATgetArgument(t, 0);
                  {
                    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
                    t = not_null(e_60);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(b_60);
                    if(((d_61 != NULL) && (d_61 != t)))
                      _fail(t);
                    else
                      d_61 = t;
                    t = not_null(c_60);
                    if(((e_61 != NULL) && (e_61 != t)))
                      _fail(t);
                    else
                      e_61 = t;
                    t = not_null(n_59);
                    if(((f_61 != NULL) && (f_61 != t)))
                      _fail(t);
                    else
                      f_61 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(d_61), not_null(e_61), (ATerm)ATmakeAppl(sym_Some_1, not_null(f_61)), term_b_40);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(e_60);
                  if(match_cons(t, sym_Some_1))
                    {
                      z_59 = ATgetArgument(t, 0);
                      {
                        ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
                        t = not_null(b_60);
                        if(((g_61 != NULL) && (g_61 != t)))
                          _fail(t);
                        else
                          g_61 = t;
                        t = not_null(c_60);
                        if(((h_61 != NULL) && (h_61 != t)))
                          _fail(t);
                        else
                          h_61 = t;
                        t = not_null(z_59);
                        if(((i_61 != NULL) && (i_61 != t)))
                          _fail(t);
                        else
                          i_61 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(g_61), not_null(h_61), term_x_40, (ATerm) ATmakeAppl(sym_Some_1, not_null(i_61)));
                      }
                    }
                  else
                    {
                      ATerm j_61 = NULL,k_61 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(b_60);
                      if(((j_61 != NULL) && (j_61 != t)))
                        _fail(t);
                      else
                        j_61 = t;
                      t = not_null(c_60);
                      if(((k_61 != NULL) && (k_61 != t)))
                        _fail(t);
                      else
                        k_61 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(j_61), not_null(k_61), term_x_40, term_b_40);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  if(((s_61 != NULL) && (s_61 != t)))
    _fail(t);
  else
    s_61 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((t_61 != NULL) && (t_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_61 = ATgetArgument(t, 0);
      if(((u_61 != NULL) && (u_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_61);
  if(match_cons(t, sym_Some_1))
    {
      q_61 = ATgetArgument(t, 0);
      {
        ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
        t = not_null(t_61);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(q_61);
        if(match_cons(t, sym_Layout_1))
          {
            if(((r_61 != NULL) && (r_61 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              r_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(r_61);
        if(((v_61 != NULL) && (v_61 != t)))
          _fail(t);
        else
          v_61 = t;
        t = not_null(s_61);
        if(((x_61 != NULL) && (x_61 != t)))
          _fail(t);
        else
          x_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), term_h_41), term_f_41), term_z_40), not_null(v_61));
        t = union_0_0(t);
        if(((w_61 != NULL) && (w_61 != t)))
          _fail(t);
        else
          w_61 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_i_41, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(w_61))));
      }
    }
  else
    {
      ATerm y_61 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(t_61);
      if(((y_61 != NULL) && (y_61 != t)))
        _fail(t);
      else
        y_61 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(y_61), term_k_41);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm l_41 = ATgetArgument(t, 0);
      if(!(match_cons(l_41, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_s_42;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm c_4 (ATerm t);
  static ATerm c_4 (ATerm t)
  {
    t = bottomup_1_0(v_116, t);
    return(t);
  }
  t = SRTS_all(c_4, t);
  t = v_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm d_4 (ATerm t);
  static ATerm d_4 (ATerm t)
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      t = a_121(t);
      t = innermost_1_0(a_121, t);
      return(t);
    }
    t = try_1_0(e_4, t);
    return(t);
  }
  t = bottomup_1_0(d_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(e_43);
    }
  else
    {
      t = d_43;
      {
        ATerm f_43 = t;
        int g_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(g_43);
          }
        else
          {
            t = f_43;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(f_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm a_62 = NULL;
  if(((a_62 != NULL) && (a_62 != t)))
    _fail(t);
  else
    a_62 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  static ATerm b_62 (ATerm t);
  static ATerm b_62 (ATerm t)
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_4, b_62, t);
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        t = Nil_0_0(t);
        t = u_123(t);
      }
    return(t);
  }
  t = b_62(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
        if(((d_62 != NULL) && (d_62 != t)))
          _fail(t);
        else
          d_62 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_62 != NULL) && (e_62 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_62 = ATgetFirst((ATermList) t);
            if(((f_62 != NULL) && (f_62 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              f_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(e_62);
        if(((g_62 != NULL) && (g_62 != t)))
          _fail(t);
        else
          g_62 = t;
        t = not_null(f_62);
        if(((h_62 != NULL) && (h_62 != t)))
          _fail(t);
        else
          h_62 = t;
        t = not_null(d_62);
        if(((j_62 != NULL) && (j_62 != t)))
          _fail(t);
        else
          j_62 = t;
        t = not_null(g_62);
        {
          static ATerm h_4 (ATerm t);
          static ATerm h_4 (ATerm t)
          {
            t = not_null(h_62);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_4, t);
        }
        if(((i_62 != NULL) && (i_62 != t)))
          _fail(t);
        else
          i_62 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm j_66 (ATerm z_62, ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  t = not_null(z_62);
  if(((c_63 != NULL) && (c_63 != t)))
    _fail(t);
  else
    c_63 = t;
  t = not_null(a_63);
  if(((d_63 != NULL) && (d_63 != t)))
    _fail(t);
  else
    d_63 = t;
  t = not_null(b_63);
  if(((f_63 != NULL) && (f_63 != t)))
    _fail(t);
  else
    f_63 = t;
  t = not_null(c_63);
  t = is_string_0_0(t);
  t = not_null(d_63);
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(i_4, t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = XtcQuery_2_0(j_4, k_4, t);
      }
  }
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL;
        if(((j_63 != NULL) && (j_63 != t)))
          _fail(t);
        else
          j_63 = t;
        t = xtc_find_0_0(t);
        if(((e_63 != NULL) && (e_63 != t)))
          _fail(t);
        else
          e_63 = t;
        t = not_null(j_63);
        LocalPopChoice(o_43);
        {
          ATerm l_63 = NULL,m_63 = NULL;
          if(((m_63 != NULL) && (m_63 != t)))
            _fail(t);
          else
            m_63 = t;
          t = term_p_43;
          if(((l_63 != NULL) && (l_63 != t)))
            _fail(t);
          else
            l_63 = t;
          t = not_null(m_63);
          t = dbg_0_1(not_null(l_63), t);
        }
      }
    else
      {
        t = n_43;
        {
          ATerm n_63 = NULL,o_63 = NULL;
          if(((o_63 != NULL) && (o_63 != t)))
            _fail(t);
          else
            o_63 = t;
          t = term_q_43;
          if(((n_63 != NULL) && (n_63 != t)))
            _fail(t);
          else
            n_63 = t;
          t = not_null(o_63);
          t = err_0_1(not_null(n_63), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(c_63)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(e_63)))));
  return(t);
}
static ATerm k_66 (ATerm p_63, ATerm q_63, ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  t = not_null(p_63);
  if(((r_63 != NULL) && (r_63 != t)))
    _fail(t);
  else
    r_63 = t;
  t = not_null(q_63);
  if(((t_63 != NULL) && (t_63 != t)))
    _fail(t);
  else
    t_63 = t;
  t = not_null(r_63);
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(l_4, t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = XtcQuery_2_0(m_4, n_4, t);
      }
  }
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_63 = NULL;
        if(((x_63 != NULL) && (x_63 != t)))
          _fail(t);
        else
          x_63 = t;
        t = xtc_find_0_0(t);
        if(((s_63 != NULL) && (s_63 != t)))
          _fail(t);
        else
          s_63 = t;
        t = not_null(x_63);
        LocalPopChoice(u_43);
        {
          ATerm y_63 = NULL,z_63 = NULL;
          if(((z_63 != NULL) && (z_63 != t)))
            _fail(t);
          else
            z_63 = t;
          t = term_p_43;
          if(((y_63 != NULL) && (y_63 != t)))
            _fail(t);
          else
            y_63 = t;
          t = not_null(z_63);
          t = dbg_0_1(not_null(y_63), t);
        }
      }
    else
      {
        t = t_43;
        {
          ATerm a_64 = NULL,b_64 = NULL;
          if(((b_64 != NULL) && (b_64 != t)))
            _fail(t);
          else
            b_64 = t;
          t = term_q_43;
          if(((a_64 != NULL) && (a_64 != t)))
            _fail(t);
          else
            a_64 = t;
          t = not_null(b_64);
          t = err_0_1(not_null(a_64), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_63)))));
  return(t);
}
static ATerm l_66 (ATerm c_64, ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  t = not_null(c_64);
  if(((d_64 != NULL) && (d_64 != t)))
    _fail(t);
  else
    d_64 = t;
  t = not_null(c_64);
  if(((f_64 != NULL) && (f_64 != t)))
    _fail(t);
  else
    f_64 = t;
  t = not_null(d_64);
  if(match_cons(t, sym_URL_1))
    {
      if(((g_64 != NULL) && (g_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(g_64);
  if(((e_64 != NULL) && (e_64 != t)))
    _fail(t);
  else
    e_64 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(e_64)))));
  return(t);
}
static ATerm m_66 (ATerm h_64, ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  t = not_null(h_64);
  if(((i_64 != NULL) && (i_64 != t)))
    _fail(t);
  else
    i_64 = t;
  t = not_null(h_64);
  if(((k_64 != NULL) && (k_64 != t)))
    _fail(t);
  else
    k_64 = t;
  t = not_null(i_64);
  if(match_cons(t, sym_FILE_1))
    {
      if(((l_64 != NULL) && (l_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(l_64);
  if(((j_64 != NULL) && (j_64 != t)))
    _fail(t);
  else
    j_64 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_64)))));
  return(t);
}
static ATerm n_66 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  t = not_null(m_64);
  if(((p_64 != NULL) && (p_64 != t)))
    _fail(t);
  else
    p_64 = t;
  t = not_null(n_64);
  if(((q_64 != NULL) && (q_64 != t)))
    _fail(t);
  else
    q_64 = t;
  t = not_null(o_64);
  if(((s_64 != NULL) && (s_64 != t)))
    _fail(t);
  else
    s_64 = t;
  t = not_null(p_64);
  t = is_string_0_0(t);
  t = not_null(q_64);
  if(match_cons(t, sym_URL_1))
    {
      if(((t_64 != NULL) && (t_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(t_64);
  if(((r_64 != NULL) && (r_64 != t)))
    _fail(t);
  else
    r_64 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(p_64)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(r_64)))));
  return(t);
}
static ATerm o_66 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  t = not_null(u_64);
  if(((x_64 != NULL) && (x_64 != t)))
    _fail(t);
  else
    x_64 = t;
  t = not_null(v_64);
  if(((y_64 != NULL) && (y_64 != t)))
    _fail(t);
  else
    y_64 = t;
  t = not_null(w_64);
  if(((a_65 != NULL) && (a_65 != t)))
    _fail(t);
  else
    a_65 = t;
  t = not_null(x_64);
  t = is_string_0_0(t);
  t = not_null(y_64);
  if(match_cons(t, sym_FILE_1))
    {
      if(((b_65 != NULL) && (b_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(b_65);
  if(((z_64 != NULL) && (z_64 != t)))
    _fail(t);
  else
    z_64 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(x_64)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(z_64)))));
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm g_63 = NULL;
  if(((g_63 != NULL) && (g_63 != t)))
    _fail(t);
  else
    g_63 = t;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm h_63 = NULL;
  if(((h_63 != NULL) && (h_63 != t)))
    _fail(t);
  else
    h_63 = t;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_63 = NULL;
  if(((i_63 != NULL) && (i_63 != t)))
    _fail(t);
  else
    i_63 = t;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_63 = NULL;
  if(((u_63 != NULL) && (u_63 != t)))
    _fail(t);
  else
    u_63 = t;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_63 = NULL;
  if(((v_63 != NULL) && (v_63 != t)))
    _fail(t);
  else
    v_63 = t;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm w_63 = NULL;
  if(((w_63 != NULL) && (w_63 != t)))
    _fail(t);
  else
    w_63 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  if(((d_65 != NULL) && (d_65 != t)))
    _fail(t);
  else
    d_65 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
      t = not_null(e_65);
      if(match_cons(t, sym_String_1))
        {
          c_65 = ATgetArgument(t, 0);
          {
            ATerm v_43 = t;
            int w_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_66(not_null(c_65), not_null(f_65), not_null(d_65), t);
                LocalPopChoice(w_43);
              }
            else
              {
                t = v_43;
                {
                  ATerm x_43 = t;
                  int y_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_66(not_null(d_65), t);
                      LocalPopChoice(y_43);
                    }
                  else
                    {
                      t = x_43;
                      {
                        ATerm z_43 = t;
                        int a_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_66(not_null(d_65), t);
                            LocalPopChoice(a_44);
                          }
                        else
                          {
                            t = z_43;
                            {
                              ATerm g_65 = NULL,h_65 = NULL;
                              t = not_null(d_65);
                              if(((g_65 != NULL) && (g_65 != t)))
                                _fail(t);
                              else
                                g_65 = t;
                              t = not_null(d_65);
                              if(((h_65 != NULL) && (h_65 != t)))
                                _fail(t);
                              else
                                h_65 = t;
                              t = not_null(g_65);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_65))));
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
          ATerm b_44 = t;
          int c_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_66(not_null(d_65), t);
              LocalPopChoice(c_44);
            }
          else
            {
              t = b_44;
              {
                ATerm d_44 = t;
                int e_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_66(not_null(d_65), t);
                    LocalPopChoice(e_44);
                  }
                else
                  {
                    t = d_44;
                    {
                      ATerm i_65 = NULL,j_65 = NULL;
                      t = not_null(d_65);
                      if(((i_65 != NULL) && (i_65 != t)))
                        _fail(t);
                      else
                        i_65 = t;
                      t = not_null(d_65);
                      if(((j_65 != NULL) && (j_65 != t)))
                        _fail(t);
                      else
                        j_65 = t;
                      t = not_null(i_65);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(i_65))));
                    }
                  }
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Option_1))
        {
          e_65 = ATgetArgument(t, 0);
          {
            ATerm f_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_66(not_null(e_65), not_null(d_65), t);
                LocalPopChoice(g_44);
              }
            else
              {
                t = f_44;
                {
                  ATerm h_44 = t;
                  int i_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_66(not_null(d_65), t);
                      LocalPopChoice(i_44);
                    }
                  else
                    {
                      t = h_44;
                      {
                        ATerm j_44 = t;
                        int k_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_66(not_null(d_65), t);
                            LocalPopChoice(k_44);
                          }
                        else
                          {
                            t = j_44;
                            {
                              ATerm k_65 = NULL,l_65 = NULL;
                              t = not_null(d_65);
                              if(((k_65 != NULL) && (k_65 != t)))
                                _fail(t);
                              else
                                k_65 = t;
                              t = not_null(d_65);
                              if(((l_65 != NULL) && (l_65 != t)))
                                _fail(t);
                              else
                                l_65 = t;
                              t = not_null(k_65);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(k_65))));
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
          if(match_cons(t, sym__2))
            {
              e_65 = ATgetArgument(t, 0);
              f_65 = ATgetArgument(t, 1);
              {
                ATerm l_44 = t;
                int m_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_66(not_null(d_65), t);
                    LocalPopChoice(m_44);
                  }
                else
                  {
                    t = l_44;
                    {
                      ATerm n_44 = t;
                      int o_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_66(not_null(d_65), t);
                          LocalPopChoice(o_44);
                        }
                      else
                        {
                          t = n_44;
                          {
                            ATerm p_44 = t;
                            int q_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_65 = NULL,n_65 = NULL;
                                t = not_null(d_65);
                                if(((m_65 != NULL) && (m_65 != t)))
                                  _fail(t);
                                else
                                  m_65 = t;
                                t = not_null(d_65);
                                if(((n_65 != NULL) && (n_65 != t)))
                                  _fail(t);
                                else
                                  n_65 = t;
                                t = not_null(m_65);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(m_65))));
                                LocalPopChoice(q_44);
                              }
                            else
                              {
                                t = p_44;
                                {
                                  ATerm r_44 = t;
                                  int s_44 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = n_66(not_null(e_65), not_null(f_65), not_null(d_65), t);
                                      LocalPopChoice(s_44);
                                    }
                                  else
                                    {
                                      t = r_44;
                                      {
                                        ATerm t_44 = t;
                                        int u_44 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_66(not_null(e_65), not_null(f_65), not_null(d_65), t);
                                            LocalPopChoice(u_44);
                                          }
                                        else
                                          {
                                            t = t_44;
                                            {
                                              ATerm v_44 = t;
                                              int e_46 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
                                                  t = not_null(e_65);
                                                  if(((o_65 != NULL) && (o_65 != t)))
                                                    _fail(t);
                                                  else
                                                    o_65 = t;
                                                  t = not_null(f_65);
                                                  if(((p_65 != NULL) && (p_65 != t)))
                                                    _fail(t);
                                                  else
                                                    p_65 = t;
                                                  t = not_null(d_65);
                                                  if(((q_65 != NULL) && (q_65 != t)))
                                                    _fail(t);
                                                  else
                                                    q_65 = t;
                                                  t = not_null(o_65);
                                                  t = is_string_0_0(t);
                                                  t = not_null(p_65);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(o_65)), (ATerm) ATmakeAppl(sym_String_1, not_null(p_65))));
                                                  LocalPopChoice(e_46);
                                                }
                                              else
                                                {
                                                  t = v_44;
                                                  {
                                                    ATerm r_65 = NULL,s_65 = NULL,y_65 = NULL,z_65 = NULL;
                                                    t = not_null(e_65);
                                                    if(((s_65 != NULL) && (s_65 != t)))
                                                      _fail(t);
                                                    else
                                                      s_65 = t;
                                                    t = not_null(f_65);
                                                    if(((r_65 != NULL) && (r_65 != t)))
                                                      _fail(t);
                                                    else
                                                      r_65 = t;
                                                    t = not_null(d_65);
                                                    if(((z_65 != NULL) && (z_65 != t)))
                                                      _fail(t);
                                                    else
                                                      z_65 = t;
                                                    t = not_null(s_65);
                                                    t = is_string_0_0(t);
                                                    t = not_null(r_65);
                                                    {
                                                      static ATerm o_4 (ATerm t);
                                                      static ATerm o_4 (ATerm t)
                                                      {
                                                        ATerm a_66 = NULL,b_66 = NULL,e_66 = NULL,f_66 = NULL;
                                                        if(((b_66 != NULL) && (b_66 != t)))
                                                          _fail(t);
                                                        else
                                                          b_66 = t;
                                                        if(((f_66 != NULL) && (f_66 != t)))
                                                          _fail(t);
                                                        else
                                                          f_66 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_65), not_null(b_66));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((e_66 != NULL) && (e_66 != t)))
                                                          _fail(t);
                                                        else
                                                          e_66 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(o_4, t);
                                                    }
                                                    if(((y_65 != NULL) && (y_65 != t)))
                                                      _fail(t);
                                                    else
                                                      y_65 = t;
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
          else
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_66(not_null(d_65), t);
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                  {
                    ATerm h_46 = t;
                    int i_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_66(not_null(d_65), t);
                        LocalPopChoice(i_46);
                      }
                    else
                      {
                        t = h_46;
                        {
                          ATerm g_66 = NULL,i_66 = NULL;
                          t = not_null(d_65);
                          if(((g_66 != NULL) && (g_66 != t)))
                            _fail(t);
                          else
                            g_66 = t;
                          t = not_null(d_65);
                          if(((i_66 != NULL) && (i_66 != t)))
                            _fail(t);
                          else
                            i_66 = t;
                          t = not_null(g_66);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_66))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm j_46 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(s_47);
    }
  else
    {
      t = j_46;
      {
        ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
        if(((g_67 != NULL) && (g_67 != t)))
          _fail(t);
        else
          g_67 = t;
        if(((i_67 != NULL) && (i_67 != t)))
          _fail(t);
        else
          i_67 = t;
        t = not_null(g_67);
        if(((h_67 != NULL) && (h_67 != t)))
          _fail(t);
        else
          h_67 = t;
        t = (ATerm) ATinsert(ATempty, not_null(h_67));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  static ATerm j_67 (ATerm t);
  static ATerm j_67 (ATerm t)
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_66 != NULL) && (p_66 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_66 = ATgetFirst((ATermList) t);
            {
              ATerm v_47 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
                {
                  if(((q_66 != NULL) && (q_66 != ATgetFirst((ATermList) v_47))))
                    _fail(ATgetFirst((ATermList) v_47));
                  else
                    q_66 = ATgetFirst((ATermList) v_47);
                  if(((r_66 != NULL) && (r_66 != (ATerm) ATgetNext((ATermList) v_47))))
                    _fail((ATerm) ATgetNext((ATermList) v_47));
                  else
                    r_66 = (ATerm) ATgetNext((ATermList) v_47);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_47);
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_66 = NULL;
              if(((s_66 != NULL) && (s_66 != t)))
                _fail(t);
              else
                s_66 = t;
              t = not_null(p_66);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(s_66);
              LocalPopChoice(y_47);
              {
                ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
                if(((w_66 != NULL) && (w_66 != t)))
                  _fail(t);
                else
                  w_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), not_null(q_66));
                if(((y_66 != NULL) && (y_66 != t)))
                  _fail(t);
                else
                  y_66 = t;
                t = term_z_47;
                if(((x_66 != NULL) && (x_66 != t)))
                  _fail(t);
                else
                  x_66 = t;
                t = not_null(y_66);
                t = dbg_0_1(not_null(x_66), t);
                t = xtc_desugar_arg_0_0(t);
                if(((t_66 != NULL) && (t_66 != t)))
                  _fail(t);
                else
                  t_66 = t;
                t = not_null(w_66);
                if(((v_66 != NULL) && (v_66 != t)))
                  _fail(t);
                else
                  v_66 = t;
                t = not_null(r_66);
                t = j_67(t);
                if(((u_66 != NULL) && (u_66 != t)))
                  _fail(t);
                else
                  u_66 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(u_66)), not_null(t_66));
              }
            }
          else
            {
              t = x_47;
              {
                ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
                if(((c_67 != NULL) && (c_67 != t)))
                  _fail(t);
                else
                  c_67 = t;
                t = not_null(p_66);
                {
                  ATerm d_48 = t;
                  int n_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(n_48);
                    }
                  else
                    {
                      t = d_48;
                      {
                        ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
                        if(((d_67 != NULL) && (d_67 != t)))
                          _fail(t);
                        else
                          d_67 = t;
                        if(((f_67 != NULL) && (f_67 != t)))
                          _fail(t);
                        else
                          f_67 = t;
                        t = not_null(d_67);
                        if(((e_67 != NULL) && (e_67 != t)))
                          _fail(t);
                        else
                          e_67 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(e_67));
                      }
                    }
                }
                if(((z_66 != NULL) && (z_66 != t)))
                  _fail(t);
                else
                  z_66 = t;
                t = not_null(c_67);
                if(((b_67 != NULL) && (b_67 != t)))
                  _fail(t);
                else
                  b_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_66)), not_null(r_66));
                t = conc_0_0(t);
                t = j_67(t);
                if(((a_67 != NULL) && (a_67 != t)))
                  _fail(t);
                else
                  a_67 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(a_67)), not_null(z_66));
              }
            }
        }
      }
    else
      {
        t = t_47;
        {
          ATerm p_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(p_4, j_67, t);
              LocalPopChoice(v_48);
            }
          else
            {
              t = p_48;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = j_67(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_67 = NULL;
  if(((n_67 != NULL) && (n_67 != t)))
    _fail(t);
  else
    n_67 = t;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm o_67 = NULL;
  if(((o_67 != NULL) && (o_67 != t)))
    _fail(t);
  else
    o_67 = t;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm p_67 = NULL;
  if(((p_67 != NULL) && (p_67 != t)))
    _fail(t);
  else
    p_67 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(q_4, r_4, s_4, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm z_67 = NULL;
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, t_4, t);
  if(match_cons(t, sym__2))
    {
      if(((r_67 != NULL) && (r_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_67 = ATgetArgument(t, 0);
      if(((s_67 != NULL) && (s_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = term_w_48;
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  t = not_null(y_67);
  t = xtc_fetch_meta_0_1(not_null(x_67), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm x_48 = ATgetArgument(t, 0);
      if(match_cons(x_48, sym_XtcDesc_1))
        {
          if(((t_67 != NULL) && (t_67 != ATgetArgument(x_48, 0))))
            _fail(ATgetArgument(x_48, 0));
          else
            t_67 = ATgetArgument(x_48, 0);
        }
      else
        _fail(t);
      {
        ATerm z_48 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(r_67), t);
  if(((u_67 != NULL) && (u_67 != t)))
    _fail(t);
  else
    u_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_67), not_null(u_67), not_null(s_67));
  t = xtc_prepare_0_0(t);
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  if(((v_67 != NULL) && (v_67 != t)))
    _fail(t);
  else
    v_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_67), not_null(u_67), not_null(v_67));
  return(t);
}
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, q_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t)
{
  static ATerm u_4 (ATerm t);
  static ATerm u_4 (ATerm t)
  {
    ATerm b_68 = NULL;
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_68 (ATerm c_68, ATerm t);
        static ATerm n_68 (ATerm c_68, ATerm t)
        {
          ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
          t = not_null(c_68);
          if(((g_68 != NULL) && (g_68 != t)))
            _fail(t);
          else
            g_68 = t;
          t = not_null(c_68);
          if(((h_68 != NULL) && (h_68 != t)))
            _fail(t);
          else
            h_68 = t;
          t = not_null(g_68);
          if(((i_68 != NULL) && (i_68 != t)))
            _fail(t);
          else
            i_68 = t;
          t = SSL_explode_term(not_null(i_68));
          if(match_cons(t, sym__2))
            {
              if(((b_68 != NULL) && (b_68 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_68 = ATgetArgument(t, 0);
              {
                ATerm d_49 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(h_68);
          if(((f_68 != NULL) && (f_68 != t)))
            _fail(t);
          else
            f_68 = t;
          t = not_null(e_80);
          {
            ATerm e_49 = t;
            if((PushChoice() == 0))
              {
                static ATerm v_4 (ATerm t);
                static ATerm v_4 (ATerm t)
                {
                  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
                  if(((j_68 != NULL) && (j_68 != t)))
                    _fail(t);
                  else
                    j_68 = t;
                  if(((k_68 != NULL) && (k_68 != t)))
                    _fail(t);
                  else
                    k_68 = t;
                  t = not_null(j_68);
                  if(((l_68 != NULL) && (l_68 != t)))
                    _fail(t);
                  else
                    l_68 = t;
                  t = SSL_explode_term(not_null(l_68));
                  if(match_cons(t, sym__2))
                    {
                      if(((b_68 != NULL) && (b_68 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_68 = ATgetArgument(t, 0);
                      {
                        ATerm k_49 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(k_68);
                  return(t);
                }
                t = SRTS_one(v_4, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_49;
              }
          }
          t = not_null(f_68);
          if(((e_68 != NULL) && (e_68 != t)))
            _fail(t);
          else
            e_68 = t;
          if(((d_68 != NULL) && (d_68 != t)))
            _fail(t);
          else
            d_68 = t;
          t = (ATerm) ATinsert(ATempty, not_null(d_68));
          return(t);
        }
        ATerm m_68 = NULL;
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        t = n_68(not_null(m_68), t);
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(u_4, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_68 != NULL) && (o_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_68 = ATgetArgument(t, 0);
      if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_68);
  t = xtc_filter_meta_0_1(not_null(c_80), t);
  if(((q_68 != NULL) && (q_68 != t)))
    _fail(t);
  else
    q_68 = t;
  if(((s_68 != NULL) && (s_68 != t)))
    _fail(t);
  else
    s_68 = t;
  if(((r_68 != NULL) && (r_68 != t)))
    _fail(t);
  else
    r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_68), not_null(c_80));
  t = union_0_0(t);
  if(((p_68 != NULL) && (p_68 != t)))
    _fail(t);
  else
    p_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_68), not_null(p_68));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_49 = ATgetArgument(t, 0);
      if(match_cons(l_49, sym_XtcConf_4))
        {
          if(((u_68 != NULL) && (u_68 != ATgetArgument(l_49, 0))))
            _fail(ATgetArgument(l_49, 0));
          else
            u_68 = ATgetArgument(l_49, 0);
          if(((v_68 != NULL) && (v_68 != ATgetArgument(l_49, 1))))
            _fail(ATgetArgument(l_49, 1));
          else
            v_68 = ATgetArgument(l_49, 1);
          if(((w_68 != NULL) && (w_68 != ATgetArgument(l_49, 2))))
            _fail(ATgetArgument(l_49, 2));
          else
            w_68 = ATgetArgument(l_49, 2);
          if(((x_68 != NULL) && (x_68 != ATgetArgument(l_49, 3))))
            _fail(ATgetArgument(l_49, 3));
          else
            x_68 = ATgetArgument(l_49, 3);
        }
      else
        _fail(t);
      {
        ATerm p_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(x_68));
  t = conc_0_0(t);
  if(((y_68 != NULL) && (y_68 != t)))
    _fail(t);
  else
    y_68 = t;
  t = not_null(b_69);
  if(((a_69 != NULL) && (a_69 != t)))
    _fail(t);
  else
    a_69 = t;
  t = not_null(e_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((z_68 != NULL) && (z_68 != t)))
    _fail(t);
  else
    z_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(u_68), not_null(v_68), not_null(w_68), not_null(y_68)), not_null(z_68));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_69 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((q_69 != NULL) && (q_69 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_69);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_69 = NULL;
  if(((r_69 != NULL) && (r_69 != t)))
    _fail(t);
  else
    r_69 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_49 = ATgetArgument(t, 0);
      if(match_cons(q_49, sym_XtcConf_4))
        {
          ATerm r_49 = ATgetArgument(q_49, 0);
          ATerm s_49 = ATgetArgument(q_49, 1);
          ATerm r_50 = ATgetArgument(q_49, 2);
          ATerm s_50 = ATgetArgument(q_49, 3);
        }
      else
        _fail(t);
      if(((d_69 != NULL) && (d_69 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_69 != NULL) && (n_69 != t)))
    _fail(t);
  else
    n_69 = t;
  t = not_null(d_69);
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = term_k_51;
  if(((o_69 != NULL) && (o_69 != t)))
    _fail(t);
  else
    o_69 = t;
  t = not_null(p_69);
  t = xtc_fetch_meta_0_1(not_null(o_69), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((e_69 != NULL) && (e_69 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_69 = ATgetArgument(t, 0);
      {
        ATerm l_51 = ATgetArgument(t, 1);
        if(match_cons(l_51, sym_Some_1))
          {
            if(((f_69 != NULL) && (f_69 != ATgetArgument(l_51, 0))))
              _fail(ATgetArgument(l_51, 0));
            else
              f_69 = ATgetArgument(l_51, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(d_69);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm w_4 (ATerm t);
    static ATerm w_4 (ATerm t)
    {
      ATerm m_51 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((e_69 != NULL) && (e_69 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_69 = ATgetArgument(t, 0);
              {
                ATerm n_51 = ATgetArgument(t, 1);
                if(match_cons(n_51, sym_Some_1))
                  {
                    if(((f_69 != NULL) && (f_69 != ATgetArgument(n_51, 0))))
                      _fail(ATgetArgument(n_51, 0));
                    else
                      f_69 = ATgetArgument(n_51, 0);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_51;
        }
      return(t);
    }
    t = filter_1_0(w_4, t);
  }
  if(((g_69 != NULL) && (g_69 != t)))
    _fail(t);
  else
    g_69 = t;
  t = not_null(n_69);
  if(((k_69 != NULL) && (k_69 != t)))
    _fail(t);
  else
    k_69 = t;
  if(((m_69 != NULL) && (m_69 != t)))
    _fail(t);
  else
    m_69 = t;
  t = not_null(f_69);
  t = try_1_0(x_4, t);
  if(((l_69 != NULL) && (l_69 != t)))
    _fail(t);
  else
    l_69 = t;
  if(((j_69 != NULL) && (j_69 != t)))
    _fail(t);
  else
    j_69 = t;
  t = not_null(k_69);
  t = xtc_reconfigure_0_2(not_null(e_69), not_null(j_69), t);
  {
    static ATerm z_4 (ATerm t);
    static ATerm z_4 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(g_69), t);
      return(t);
    }
    t = _2_0(y_4, z_4, t);
  }
  if(((i_69 != NULL) && (i_69 != t)))
    _fail(t);
  else
    i_69 = t;
  t = term_o_51;
  if(((h_69 != NULL) && (h_69 != t)))
    _fail(t);
  else
    h_69 = t;
  t = not_null(i_69);
  t = dbg_0_1(not_null(h_69), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm f_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(t_52);
    }
  else
    {
      t = f_52;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm s_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,h_70 = NULL,a_5 = NULL,w_11 = NULL;
  if(((e_70 != NULL) && (e_70 != t)))
    _fail(t);
  else
    e_70 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((w_69 != NULL) && (w_69 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_69 = ATgetArgument(t, 0);
      if(((x_69 != NULL) && (x_69 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_69 = ATgetArgument(t, 1);
      if(((y_69 != NULL) && (y_69 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((h_70 != NULL) && (h_70 != t)))
    _fail(t);
  else
    h_70 = t;
  t = SSLgetAnnotations(not_null(e_70));
  if(((s_69 != NULL) && (s_69 != t)))
    _fail(t);
  else
    s_69 = t;
  t = not_null(w_69);
  t = i_109(t);
  if(((z_69 != NULL) && (z_69 != t)))
    _fail(t);
  else
    z_69 = t;
  t = not_null(x_69);
  t = j_109(t);
  if(((a_70 != NULL) && (a_70 != t)))
    _fail(t);
  else
    a_70 = t;
  t = not_null(y_69);
  t = k_109(t);
  if(((b_70 != NULL) && (b_70 != t)))
    _fail(t);
  else
    b_70 = t;
  if(((d_70 != NULL) && (d_70 != t)))
    _fail(t);
  else
    d_70 = t;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(z_69), not_null(a_70), not_null(b_70));
  if(((a_5 != NULL) && (a_5 != t)))
    _fail(t);
  else
    a_5 = t;
  t = SSLsetAnnotations(not_null(a_5), not_null(s_69));
  if(((c_70 != NULL) && (c_70 != t)))
    _fail(t);
  else
    c_70 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t)
{
  ATerm i_70 = NULL;
  if(((i_70 != NULL) && (i_70 != t)))
    _fail(t);
  else
    i_70 = t;
  t = not_null(f_81);
  t = is_string_0_0(t);
  t = not_null(i_70);
  {
    static ATerm b_5 (ATerm t);
    static ATerm b_5 (ATerm t)
    {
      ATerm m_70 = NULL,n_70 = NULL,s_70 = NULL;
      if(((m_70 != NULL) && (m_70 != t)))
        _fail(t);
      else
        m_70 = t;
      if(((n_70 != NULL) && (n_70 != t)))
        _fail(t);
      else
        n_70 = t;
      t = not_null(m_70);
      if(((s_70 != NULL) && (s_70 != t)))
        _fail(t);
      else
        s_70 = t;
      t = SSL_explode_term(not_null(s_70));
      if(match_cons(t, sym__2))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_81 = ATgetArgument(t, 0);
          {
            ATerm u_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(n_70);
      return(t);
    }
    t = collect_all_1_0(b_5, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm t_70 = NULL,v_70 = NULL,w_70 = NULL;
  if(((w_70 != NULL) && (w_70 != t)))
    _fail(t);
  else
    w_70 = t;
  t = term_c_53;
  if(((v_70 != NULL) && (v_70 != t)))
    _fail(t);
  else
    v_70 = t;
  t = not_null(w_70);
  t = xtc_fetch_meta_0_1(not_null(v_70), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(t_70);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm k_71 = NULL;
  if(((k_71 != NULL) && (k_71 != t)))
    _fail(t);
  else
    k_71 = t;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm m_71 = NULL;
  if(((m_71 != NULL) && (m_71 != t)))
    _fail(t);
  else
    m_71 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm c_5 (ATerm t);
    static ATerm c_5 (ATerm t)
    {
      static ATerm d_5 (ATerm t);
      static ATerm d_5 (ATerm t)
      {
        ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
        if(((f_71 != NULL) && (f_71 != t)))
          _fail(t);
        else
          f_71 = t;
        if(((j_71 != NULL) && (j_71 != t)))
          _fail(t);
        else
          j_71 = t;
        if(((g_71 != NULL) && (g_71 != t)))
          _fail(t);
        else
          g_71 = t;
        t = not_null(j_71);
        if(((i_71 != NULL) && (i_71 != t)))
          _fail(t);
        else
          i_71 = t;
        t = term_j_53;
        t = o_151(t);
        if(((h_71 != NULL) && (h_71 != t)))
          _fail(t);
        else
          h_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_71), not_null(h_71));
        t = eq_0_0(t);
        t = not_null(f_71);
        return(t);
      }
      t = XtcContract_3_0(d_5, e_5, f_5, t);
      return(t);
    }
    t = filter_1_0(c_5, t);
  }
  if(((e_71 != NULL) && (e_71 != t)))
    _fail(t);
  else
    e_71 = t;
  t = term_c_53;
  if(((d_71 != NULL) && (d_71 != t)))
    _fail(t);
  else
    d_71 = t;
  t = not_null(e_71);
  t = dbg_0_1(not_null(d_71), t);
  return(t);
}
ATerm warn_0_1 (ATerm w_78, ATerm t)
{
  ATerm n_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  if(((x_71 != NULL) && (x_71 != t)))
    _fail(t);
  else
    x_71 = t;
  t = term_o_53;
  if(((n_71 != NULL) && (n_71 != t)))
    _fail(t);
  else
    n_71 = t;
  t = not_null(x_71);
  if(((u_71 != NULL) && (u_71 != t)))
    _fail(t);
  else
    u_71 = t;
  if(((w_71 != NULL) && (w_71 != t)))
    _fail(t);
  else
    w_71 = t;
  if(((v_71 != NULL) && (v_71 != t)))
    _fail(t);
  else
    v_71 = t;
  if(((t_71 != NULL) && (t_71 != t)))
    _fail(t);
  else
    t_71 = t;
  t = not_null(u_71);
  t = log_0_3(not_null(n_71), not_null(w_78), not_null(t_71), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm p_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_71 = NULL;
      if(((y_71 != NULL) && (y_71 != t)))
        _fail(t);
      else
        y_71 = t;
      t = term_v_53;
      t = get_config_0_0(t);
      t = not_null(y_71);
      LocalPopChoice(u_53);
      {
        ATerm z_71 = NULL,a_72 = NULL;
        if(((a_72 != NULL) && (a_72 != t)))
          _fail(t);
        else
          a_72 = t;
        t = term_w_53;
        if(((z_71 != NULL) && (z_71 != t)))
          _fail(t);
        else
          z_71 = t;
        t = not_null(a_72);
        t = err_0_1(not_null(z_71), t);
        _fail(t);
      }
    }
  else
    {
      t = p_53;
      {
        ATerm g_72 = NULL,h_72 = NULL;
        if(((h_72 != NULL) && (h_72 != t)))
          _fail(t);
        else
          h_72 = t;
        t = term_x_53;
        if(((g_72 != NULL) && (g_72 != t)))
          _fail(t);
        else
          g_72 = t;
        t = not_null(h_72);
        t = warn_0_1(not_null(g_72), t);
      }
    }
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm i_72 = NULL;
  if(((i_72 != NULL) && (i_72 != t)))
    _fail(t);
  else
    i_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_53, not_null(i_72));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm l_72 = NULL;
  if(((l_72 != NULL) && (l_72 != t)))
    _fail(t);
  else
    l_72 = t;
  t = term_j_54;
  t = set_config_0_0(t);
  t = not_null(l_72);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  ATerm o_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_72 = NULL;
      if(((j_72 != NULL) && (j_72 != t)))
        _fail(t);
      else
        j_72 = t;
      t = term_i_54;
      t = get_config_0_0(t);
      t = not_null(j_72);
      LocalPopChoice(y_54);
      {
        ATerm k_72 = NULL;
        if(((k_72 != NULL) && (k_72 != t)))
          _fail(t);
        else
          k_72 = t;
        t = term_i_54;
        t = rm_config_0_0(t);
        t = not_null(k_72);
        t = restore_always_2_0(s_151, g_5, t);
      }
    }
  else
    {
      t = o_54;
      t = s_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
      if(((n_72 != NULL) && (n_72 != t)))
        _fail(t);
      else
        n_72 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((o_72 != NULL) && (o_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_72);
      if(((p_72 != NULL) && (p_72 != t)))
        _fail(t);
      else
        p_72 = t;
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  static ATerm j_74 (ATerm x_72, ATerm y_72, ATerm z_72, ATerm a_73, ATerm t);
  static ATerm k_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm p_73, ATerm q_73, ATerm t);
  static ATerm j_74 (ATerm x_72, ATerm y_72, ATerm z_72, ATerm a_73, ATerm t)
  {
    ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
    t = not_null(x_72);
    if(((d_73 != NULL) && (d_73 != t)))
      _fail(t);
    else
      d_73 = t;
    t = not_null(y_72);
    if(((f_73 != NULL) && (f_73 != t)))
      _fail(t);
    else
      f_73 = t;
    t = not_null(z_72);
    if(((b_73 != NULL) && (b_73 != t)))
      _fail(t);
    else
      b_73 = t;
    t = not_null(a_73);
    t = Fst_0_0(t);
    t = a_1(t);
    if(((c_73 != NULL) && (c_73 != t)))
      _fail(t);
    else
      c_73 = t;
    t = not_null(b_73);
    t = some_or_empty_0_0(t);
    {
      ATerm d_55 = t;
      int e_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
          if(((g_73 != NULL) && (g_73 != t)))
            _fail(t);
          else
            g_73 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((h_73 != NULL) && (h_73 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_73);
          if(((i_73 != NULL) && (i_73 != t)))
            _fail(t);
          else
            i_73 = t;
          LocalPopChoice(e_55);
        }
      else
        {
          t = d_55;
          t = Nil_0_0(t);
        }
    }
    if(((e_73 != NULL) && (e_73 != t)))
      _fail(t);
    else
      e_73 = t;
    {
      ATerm f_55 = t;
      int l_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
          static ATerm h_5 (ATerm t);
          static ATerm h_5 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(f_73), t);
            return(t);
          }
          if(((j_73 != NULL) && (j_73 != t)))
            _fail(t);
          else
            j_73 = t;
          if(((l_73 != NULL) && (l_73 != t)))
            _fail(t);
          else
            l_73 = t;
          t = not_null(j_73);
          t = xtc_new_file_0_0(t);
          if(((k_73 != NULL) && (k_73 != t)))
            _fail(t);
          else
            k_73 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(c_73), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_73))), not_null(d_73), not_null(e_73));
          t = xtc_cc_disable_1_0(h_5, t);
          LocalPopChoice(l_55);
        }
      else
        {
          t = f_55;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm k_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm p_73, ATerm q_73, ATerm t)
  {
    ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL;
    t = not_null(m_73);
    if(((s_73 != NULL) && (s_73 != t)))
      _fail(t);
    else
      s_73 = t;
    t = not_null(n_73);
    if(((t_73 != NULL) && (t_73 != t)))
      _fail(t);
    else
      t_73 = t;
    t = not_null(o_73);
    if(((u_73 != NULL) && (u_73 != t)))
      _fail(t);
    else
      u_73 = t;
    t = not_null(p_73);
    if(((r_73 != NULL) && (r_73 != t)))
      _fail(t);
    else
      r_73 = t;
    t = not_null(q_73);
    if(((v_73 != NULL) && (v_73 != t)))
      _fail(t);
    else
      v_73 = t;
    {
      ATerm q_55 = t;
      int r_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(r_73);
          t = xtc_fetch_contracts_1_0(a_1, t);
          LocalPopChoice(r_55);
          {
            static ATerm i_5 (ATerm t);
            static ATerm i_5 (ATerm t)
            {
              ATerm w_73 = NULL,x_73 = NULL;
              if(((x_73 != NULL) && (x_73 != t)))
                _fail(t);
              else
                x_73 = t;
              if(((w_73 != NULL) && (w_73 != t)))
                _fail(t);
              else
                w_73 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(s_73), not_null(t_73), not_null(u_73)), not_null(w_73));
              t = xtc_cc_1_0(a_1, t);
              return(t);
            }
            t = map_1_0(i_5, t);
          }
        }
      else
        {
          t = q_55;
          {
            ATerm y_73 = NULL;
            if(((y_73 != NULL) && (y_73 != t)))
              _fail(t);
            else
              y_73 = t;
          }
        }
    }
    t = not_null(v_73);
    return(t);
  }
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(((c_74 != NULL) && (c_74 != t)))
    _fail(t);
  else
    c_74 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_74 != NULL) && (d_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_74 = ATgetArgument(t, 0);
      if(((i_74 != NULL) && (i_74 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_74);
  if(match_cons(t, sym__3))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
      g_74 = ATgetArgument(t, 2);
      t = not_null(i_74);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((z_73 != NULL) && (z_73 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_73 = ATgetArgument(t, 0);
          if(((a_74 != NULL) && (a_74 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_74 = ATgetArgument(t, 1);
          if(((b_74 != NULL) && (b_74 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            b_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_74(not_null(g_74), not_null(a_74), not_null(b_74), not_null(c_74), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((e_74 != NULL) && (e_74 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_74 = ATgetArgument(t, 0);
          if(((f_74 != NULL) && (f_74 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_74 = ATgetArgument(t, 1);
          if(((g_74 != NULL) && (g_74 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            g_74 = ATgetArgument(t, 2);
          if(((h_74 != NULL) && (h_74 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            h_74 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_74(not_null(e_74), not_null(f_74), not_null(g_74), not_null(i_74), not_null(c_74), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  if(((v_74 != NULL) && (v_74 != t)))
    _fail(t);
  else
    v_74 = t;
  t = term_i_54;
  t = get_config_0_0(t);
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  t = term_s_55;
  if(((w_74 != NULL) && (w_74 != t)))
    _fail(t);
  else
    w_74 = t;
  t = not_null(x_74);
  t = notice_0_1(not_null(w_74), t);
  t = not_null(v_74);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm y_74 = NULL;
  ATerm z_55 = t;
  int a_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_74 = NULL;
      if(((z_74 != NULL) && (z_74 != t)))
        _fail(t);
      else
        z_74 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(z_74);
      LocalPopChoice(a_56);
      {
        ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
        if(((e_75 != NULL) && (e_75 != t)))
          _fail(t);
        else
          e_75 = t;
        t = term_b_56;
        if(((d_75 != NULL) && (d_75 != t)))
          _fail(t);
        else
          d_75 = t;
        t = not_null(e_75);
        t = dbg_0_1(not_null(d_75), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((c_75 != NULL) && (c_75 != t)))
          _fail(t);
        else
          c_75 = t;
        t = p_151(t);
        if(((y_74 != NULL) && (y_74 != t)))
          _fail(t);
        else
          y_74 = t;
        t = not_null(c_75);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(y_74);
        if(((b_75 != NULL) && (b_75 != t)))
          _fail(t);
        else
          b_75 = t;
        t = term_c_56;
        if(((a_75 != NULL) && (a_75 != t)))
          _fail(t);
        else
          a_75 = t;
        t = not_null(b_75);
        t = dbg_0_1(not_null(a_75), t);
      }
    }
  else
    {
      t = z_55;
      t = p_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_75 != NULL) && (g_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_75 = ATgetArgument(t, 0);
      if(((f_75 != NULL) && (f_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_75 != NULL) && (i_75 != t)))
    _fail(t);
  else
    i_75 = t;
  if(((j_75 != NULL) && (j_75 != t)))
    _fail(t);
  else
    j_75 = t;
  t = not_null(g_75);
  {
    ATerm d_56 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_56;
      }
  }
  t = not_null(j_75);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(((h_75 != NULL) && (h_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_75), not_null(h_75));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  t = term_m_56;
  t = table_getlist_0_0(t);
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(o_56);
      }
    else
      {
        t = n_56;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((l_75 != NULL) && (l_75 != t)))
    _fail(t);
  else
    l_75 = t;
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, not_null(k_75));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm s_75 = NULL;
  if(((s_75 != NULL) && (s_75 != t)))
    _fail(t);
  else
    s_75 = t;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm t_75 = NULL;
  if(((t_75 != NULL) && (t_75 != t)))
    _fail(t);
  else
    t_75 = t;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm u_75 = NULL;
  if(((u_75 != NULL) && (u_75 != t)))
    _fail(t);
  else
    u_75 = t;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm v_75 = NULL;
  if(((v_75 != NULL) && (v_75 != t)))
    _fail(t);
  else
    v_75 = t;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm w_75 = NULL;
  if(((w_75 != NULL) && (w_75 != t)))
    _fail(t);
  else
    w_75 = t;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm x_75 = NULL;
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_56 = t;
      if((PushChoice() == 0))
        {
          ATerm s_56 = t;
          int t_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(j_5, t);
              LocalPopChoice(t_56);
            }
          else
            {
              t = s_56;
              t = XtcQuery_2_0(k_5, l_5, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_56;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(z_0, t);
      LocalPopChoice(q_56);
    }
  else
    {
      t = p_56;
      {
        ATerm u_56 = t;
        int v_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(m_5, t);
            LocalPopChoice(v_56);
          }
        else
          {
            t = u_56;
            t = XtcQuery_2_0(n_5, o_5, t);
          }
      }
      {
        ATerm w_56 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(z_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(e_57);
          }
        else
          {
            t = w_56;
            {
              ATerm y_75 = NULL,z_75 = NULL;
              if(((y_75 != NULL) && (y_75 != t)))
                _fail(t);
              else
                y_75 = t;
              if(((z_75 != NULL) && (z_75 != t)))
                _fail(t);
              else
                z_75 = t;
              t = not_null(y_75);
              t = xtc_import_0_0(t);
              t = not_null(z_75);
              t = xtc_find_reg_1_0(z_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm xtc_find_reg_0_0 (ATerm t)
{
  t = xtc_find_reg_1_0(Hd_0_0, t);
  return(t);
}
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm h_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_115(t);
      LocalPopChoice(t_57);
    }
  else
    {
      t = h_57;
      t = p_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL;
  if(((b_76 != NULL) && (b_76 != t)))
    _fail(t);
  else
    b_76 = t;
  t = term_b_58;
  if(((a_76 != NULL) && (a_76 != t)))
    _fail(t);
  else
    a_76 = t;
  t = not_null(b_76);
  t = err_0_1(not_null(a_76), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
  if(((i_76 != NULL) && (i_76 != t)))
    _fail(t);
  else
    i_76 = t;
  t = term_c_58;
  if(((h_76 != NULL) && (h_76 != t)))
    _fail(t);
  else
    h_76 = t;
  t = not_null(i_76);
  t = dbg_0_1(not_null(h_76), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm d_58 = ATgetArgument(t, 0);
      ATerm e_58 = ATgetArgument(t, 1);
      if(match_cons(e_58, sym_Some_1))
        {
          if(((c_76 != NULL) && (c_76 != ATgetArgument(e_58, 0))))
            _fail(ATgetArgument(e_58, 0));
          else
            c_76 = ATgetArgument(e_58, 0);
        }
      else
        _fail(t);
      {
        ATerm f_58 = ATgetArgument(t, 2);
      }
      {
        ATerm g_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((g_76 != NULL) && (g_76 != t)))
    _fail(t);
  else
    g_76 = t;
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = not_null(g_76);
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  t = not_null(p_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_76), not_null(e_76));
  t = xtc_cc_wrap_1_0(q_5, t);
  t = not_null(c_76);
  return(t);
}
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,r_5 = NULL,x_11 = NULL;
  if(((o_76 != NULL) && (o_76 != t)))
    _fail(t);
  else
    o_76 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((k_76 != NULL) && (k_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((p_76 != NULL) && (p_76 != t)))
    _fail(t);
  else
    p_76 = t;
  t = SSLgetAnnotations(not_null(o_76));
  if(((j_76 != NULL) && (j_76 != t)))
    _fail(t);
  else
    j_76 = t;
  t = not_null(k_76);
  t = n_107(t);
  if(((l_76 != NULL) && (l_76 != t)))
    _fail(t);
  else
    l_76 = t;
  if(((n_76 != NULL) && (n_76 != t)))
    _fail(t);
  else
    n_76 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(l_76));
  if(((r_5 != NULL) && (r_5 != t)))
    _fail(t);
  else
    r_5 = t;
  t = SSLsetAnnotations(not_null(r_5), not_null(j_76));
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  return(t);
}
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm s_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(t_58);
    }
  else
    {
      t = s_58;
      t = Some_1_0(o_132, t);
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  if(((r_76 != NULL) && (r_76 != t)))
    _fail(t);
  else
    r_76 = t;
  if(match_cons(t, sym_URL_1))
    {
      s_76 = ATgetArgument(t, 0);
      t = not_null(r_76);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm t_76 = NULL,u_76 = NULL;
          t = not_null(r_76);
          if(((u_76 != NULL) && (u_76 != t)))
            _fail(t);
          else
            u_76 = t;
          t = term_g_14;
          t = xtc_new_file_0_0(t);
          if(((t_76 != NULL) && (t_76 != t)))
            _fail(t);
          else
            t_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_58, not_null(t_76));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_76));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((s_76 != NULL) && (s_76 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_76 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(r_76);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,s_5 = NULL,y_11 = NULL;
  if(((g_77 != NULL) && (g_77 != t)))
    _fail(t);
  else
    g_77 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((w_76 != NULL) && (w_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_76 = ATgetArgument(t, 0);
      if(((x_76 != NULL) && (x_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_76 = ATgetArgument(t, 1);
      if(((y_76 != NULL) && (y_76 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_76 = ATgetArgument(t, 2);
      if(((z_76 != NULL) && (z_76 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        z_76 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((h_77 != NULL) && (h_77 != t)))
    _fail(t);
  else
    h_77 = t;
  t = SSLgetAnnotations(not_null(g_77));
  if(((v_76 != NULL) && (v_76 != t)))
    _fail(t);
  else
    v_76 = t;
  t = not_null(w_76);
  t = h_111(t);
  if(((a_77 != NULL) && (a_77 != t)))
    _fail(t);
  else
    a_77 = t;
  t = not_null(x_76);
  t = i_111(t);
  if(((b_77 != NULL) && (b_77 != t)))
    _fail(t);
  else
    b_77 = t;
  t = not_null(y_76);
  t = j_111(t);
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  t = not_null(z_76);
  t = k_111(t);
  if(((d_77 != NULL) && (d_77 != t)))
    _fail(t);
  else
    d_77 = t;
  if(((f_77 != NULL) && (f_77 != t)))
    _fail(t);
  else
    f_77 = t;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(a_77), not_null(b_77), not_null(c_77), not_null(d_77));
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  t = SSLsetAnnotations(not_null(s_5), not_null(v_76));
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = option_1_0(w_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = option_1_0(y_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = FILE_1_0(x_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm o_77 = NULL;
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = FILE_1_0(z_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm p_77 = NULL;
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm a_59 = t;
  int b_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
      t = XtcConf_4_0(t_5, u_5, v_5, is_list_0_0, t);
      if(((l_77 != NULL) && (l_77 != t)))
        _fail(t);
      else
        l_77 = t;
      if(((n_77 != NULL) && (n_77 != t)))
        _fail(t);
      else
        n_77 = t;
      t = x_0(t);
      if(((m_77 != NULL) && (m_77 != t)))
        _fail(t);
      else
        m_77 = t;
      if(((k_77 != NULL) && (k_77 != t)))
        _fail(t);
      else
        k_77 = t;
      t = not_null(l_77);
      t = xtc_dispatch_0_1(not_null(k_77), t);
      LocalPopChoice(b_59);
    }
  else
    {
      t = a_59;
      {
        ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
        t = is_list_0_0(t);
        if(((q_77 != NULL) && (q_77 != t)))
          _fail(t);
        else
          q_77 = t;
        t = x_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((s_77 != NULL) && (s_77 != t)))
          _fail(t);
        else
          s_77 = t;
        if(((r_77 != NULL) && (r_77 != t)))
          _fail(t);
        else
          r_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_77), not_null(q_77));
        t = call_0_0(t);
      }
    }
  return(t);
}
ATerm None_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_None_0)))
    _fail(t);
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_6 = NULL,z_11 = NULL;
  if(((y_77 != NULL) && (y_77 != t)))
    _fail(t);
  else
    y_77 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((u_77 != NULL) && (u_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_77 != NULL) && (z_77 != t)))
    _fail(t);
  else
    z_77 = t;
  t = SSLgetAnnotations(not_null(y_77));
  if(((t_77 != NULL) && (t_77 != t)))
    _fail(t);
  else
    t_77 = t;
  t = not_null(u_77);
  t = m_109(t);
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  if(((x_77 != NULL) && (x_77 != t)))
    _fail(t);
  else
    x_77 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_77));
  if(((a_6 != NULL) && (a_6 != t)))
    _fail(t);
  else
    a_6 = t;
  t = SSLsetAnnotations(not_null(a_6), not_null(t_77));
  if(((w_77 != NULL) && (w_77 != t)))
    _fail(t);
  else
    w_77 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm a_78 = NULL;
  if(((a_78 != NULL) && (a_78 != t)))
    _fail(t);
  else
    a_78 = t;
  t = SSL_close(not_null(a_78));
  return(t);
}
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_78 != NULL) && (d_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_78 = ATgetArgument(t, 0);
      if(((b_78 != NULL) && (b_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_78 != NULL) && (g_78 != t)))
    _fail(t);
  else
    g_78 = t;
  t = w_111(t);
  if(((c_78 != NULL) && (c_78 != t)))
    _fail(t);
  else
    c_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_78), not_null(d_78), not_null(b_78));
  t = table_push_0_0(t);
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_78), term_e_59);
        t = table_get_0_0(t);
        {
          ATerm f_59 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_59;
            }
        }
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_78 != NULL) && (e_78 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_78 = ATgetFirst((ATermList) t);
      if(((f_78 != NULL) && (f_78 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_78), term_e_59, (ATerm) ATinsert(CheckATermList(not_null(f_78)), (ATerm) ATinsert(CheckATermList(not_null(e_78)), not_null(d_78))));
  t = table_put_0_0(t);
  t = not_null(g_78);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_78 = NULL;
  ATerm g_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm n_78 (ATerm j_78, ATerm t);
      static ATerm n_78 (ATerm j_78, ATerm t)
      {
        ATerm k_78 = NULL,l_78 = NULL;
        t = not_null(j_78);
        if(((l_78 != NULL) && (l_78 != t)))
          _fail(t);
        else
          l_78 = t;
        t = not_null(j_78);
        if(((k_78 != NULL) && (k_78 != t)))
          _fail(t);
        else
          k_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_78), term_i_59);
        t = conc_strings_0_0(t);
        if(((i_78 != NULL) && (i_78 != t)))
          _fail(t);
        else
          i_78 = t;
        t = SSL_mkstemp(not_null(i_78));
        return(t);
      }
      ATerm m_78 = NULL;
      if(((m_78 != NULL) && (m_78 != t)))
        _fail(t);
      else
        m_78 = t;
      t = n_78(not_null(m_78), t);
      LocalPopChoice(h_59);
    }
  else
    {
      t = g_59;
      t = term_j_59;
      t = perror_0_0(t);
      _fail(t);
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_59;
      t = getenv_0_0(t);
      LocalPopChoice(l_59);
    }
  else
    {
      t = k_59;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  if(((p_78 != NULL) && (p_78 != t)))
    _fail(t);
  else
    p_78 = t;
  t = temp_dir_0_0(t);
  if(((o_78 != NULL) && (o_78 != t)))
    _fail(t);
  else
    o_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_78), term_q_59);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_s_59;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_78 != NULL) && (r_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_78 = ATgetArgument(t, 0);
      if(((q_78 != NULL) && (q_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_78 != NULL) && (s_78 != t)))
    _fail(t);
  else
    s_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_78), term_g_14);
  t = assert_1_0(b_6, t);
  t = not_null(q_78);
  t = close_0_0(t);
  t = not_null(r_78);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm j_80 = NULL;
  if(((j_80 != NULL) && (j_80 != t)))
    _fail(t);
  else
    j_80 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm u_78 = NULL,s_79 = NULL,t_79 = NULL;
  if(((u_78 != NULL) && (u_78 != t)))
    _fail(t);
  else
    u_78 = t;
  if(((t_79 != NULL) && (t_79 != t)))
    _fail(t);
  else
    t_79 = t;
  t = xtc_new_file_0_0(t);
  if(((s_79 != NULL) && (s_79 != t)))
    _fail(t);
  else
    s_79 = t;
  {
    ATerm u_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_79 = NULL,g_80 = NULL;
        t = not_null(u_78);
        {
          ATerm y_59 = t;
          int l_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(c_6, t);
              LocalPopChoice(l_61);
            }
          else
            {
              t = y_59;
              t = stdin_0_0(t);
            }
        }
        if(((g_80 != NULL) && (g_80 != t)))
          _fail(t);
        else
          g_80 = t;
        t = l_153(t);
        if(((x_79 != NULL) && (x_79 != t)))
          _fail(t);
        else
          x_79 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(u_78)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_79))), term_a_14, not_null(x_79));
        LocalPopChoice(v_59);
      }
    else
      {
        t = u_59;
        {
          ATerm k_80 = NULL,l_80 = NULL;
          t = not_null(u_78);
          t = None_0_0(t);
          if(((l_80 != NULL) && (l_80 != t)))
            _fail(t);
          else
            l_80 = t;
          t = l_153(t);
          if(((k_80 != NULL) && (k_80 != t)))
            _fail(t);
          else
            k_80 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_a_14, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_79))), term_a_14, not_null(k_80));
        }
      }
  }
  t = xtc_command_1_0(k_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_79));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t)
{
  t = term_a_14;
  t = xtc_transform_file_2_0(e_153, f_153, t);
  return(t);
}
ATerm err_0_1 (ATerm v_78, ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL;
  if(((r_80 != NULL) && (r_80 != t)))
    _fail(t);
  else
    r_80 = t;
  t = term_g_41;
  if(((m_80 != NULL) && (m_80 != t)))
    _fail(t);
  else
    m_80 = t;
  t = not_null(r_80);
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  if(((q_80 != NULL) && (q_80 != t)))
    _fail(t);
  else
    q_80 = t;
  if(((p_80 != NULL) && (p_80 != t)))
    _fail(t);
  else
    p_80 = t;
  if(((n_80 != NULL) && (n_80 != t)))
    _fail(t);
  else
    n_80 = t;
  t = not_null(o_80);
  t = log_0_3(not_null(m_80), not_null(v_78), not_null(n_80), t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm s_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((s_80 != NULL) && (s_80 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        s_80 = ATgetFirst((ATermList) t);
      {
        ATerm m_61 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(s_80);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL;
  static ATerm d_6 (ATerm t);
  static ATerm d_6 (ATerm t)
  {
    ATerm v_80 = NULL,w_80 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((v_80 != NULL) && (v_80 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_80 = ATgetArgument(t, 0);
        if(((w_80 != NULL) && (w_80 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_80), not_null(v_80), not_null(w_80));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((u_80 != NULL) && (u_80 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_80 = ATgetArgument(t, 0);
      if(((t_80 != NULL) && (t_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_80);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_61 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_61;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,h_81 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_80 != NULL) && (z_80 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_80 = ATgetArgument(t, 0);
      if(((x_80 != NULL) && (x_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_81 != NULL) && (b_81 != t)))
    _fail(t);
  else
    b_81 = t;
  t = not_null(x_80);
  {
    ATerm o_61 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(e_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_61;
      }
  }
  t = not_null(x_80);
  t = filter_1_0(f_6, t);
  if(((a_81 != NULL) && (a_81 != t)))
    _fail(t);
  else
    a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_80), (ATerm) ATinsert(ATempty, term_p_61));
  t = union_0_0(t);
  if(((y_80 != NULL) && (y_80 != t)))
    _fail(t);
  else
    y_80 = t;
  t = not_null(z_80);
  if(((d_81 != NULL) && (d_81 != t)))
    _fail(t);
  else
    d_81 = t;
  if(((h_81 != NULL) && (h_81 != t)))
    _fail(t);
  else
    h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_61), not_null(a_81));
  t = conc_0_0(t);
  if(((e_81 != NULL) && (e_81 != t)))
    _fail(t);
  else
    e_81 = t;
  if(((c_81 != NULL) && (c_81 != t)))
    _fail(t);
  else
    c_81 = t;
  t = not_null(d_81);
  t = xtc_load_0_1(not_null(c_81), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(y_80));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm i_81 = NULL,m_81 = NULL,h_91 = NULL,i_91 = NULL,k_91 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_81 != NULL) && (m_81 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_81 = ATgetArgument(t, 0);
      if(((i_81 != NULL) && (i_81 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_91 != NULL) && (i_91 != t)))
    _fail(t);
  else
    i_91 = t;
  if(((k_91 != NULL) && (k_91 != t)))
    _fail(t);
  else
    k_91 = t;
  t = not_null(m_81);
  t = file_exists_0_0(t);
  t = not_null(k_91);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm c_62 = ATgetArgument(t, 0);
      if(((h_91 != NULL) && (h_91 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_81), not_null(h_91));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm l_91 = NULL,n_91 = NULL;
  t = term_m_56;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((n_91 != NULL) && (n_91 != t)))
    _fail(t);
  else
    n_91 = t;
  if(((l_91 != NULL) && (l_91 != t)))
    _fail(t);
  else
    l_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, not_null(l_91));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm o_91 = NULL,q_91 = NULL,r_91 = NULL,h_92 = NULL,i_92 = NULL,l_92 = NULL;
  if(((h_92 != NULL) && (h_92 != t)))
    _fail(t);
  else
    h_92 = t;
  if(((i_92 != NULL) && (i_92 != t)))
    _fail(t);
  else
    i_92 = t;
  t = not_null(h_92);
  if(((l_92 != NULL) && (l_92 != t)))
    _fail(t);
  else
    l_92 = t;
  t = SSL_explode_term(not_null(l_92));
  if(match_cons(t, sym__2))
    {
      ATerm k_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_62 = ATgetArgument(t, 1);
        if(((ATgetType(l_62) == AT_LIST) && !(ATisEmpty(l_62))))
          {
            if(((o_91 != NULL) && (o_91 != ATgetFirst((ATermList) l_62))))
              _fail(ATgetFirst((ATermList) l_62));
            else
              o_91 = ATgetFirst((ATermList) l_62);
            {
              ATerm m_62 = (ATerm) ATgetNext((ATermList) l_62);
              if(((ATgetType(m_62) == AT_LIST) && !(ATisEmpty(m_62))))
                {
                  if(((r_91 != NULL) && (r_91 != ATgetFirst((ATermList) m_62))))
                    _fail(ATgetFirst((ATermList) m_62));
                  else
                    r_91 = ATgetFirst((ATermList) m_62);
                  if(((q_91 != NULL) && (q_91 != (ATerm) ATgetNext((ATermList) m_62))))
                    _fail((ATerm) ATgetNext((ATermList) m_62));
                  else
                    q_91 = (ATerm) ATgetNext((ATermList) m_62);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(r_91);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,k_93 = NULL,m_93 = NULL,p_93 = NULL,r_93 = NULL,t_93 = NULL,v_93 = NULL;
  if(((k_93 != NULL) && (k_93 != t)))
    _fail(t);
  else
    k_93 = t;
  if(((p_93 != NULL) && (p_93 != t)))
    _fail(t);
  else
    p_93 = t;
  t = not_null(k_93);
  if(((r_93 != NULL) && (r_93 != t)))
    _fail(t);
  else
    r_93 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      t_93 = ATgetArgument(t, 0);
      t = not_null(t_93);
      if(((i_93 != NULL) && (i_93 != t)))
        _fail(t);
      else
        i_93 = t;
      t = not_null(r_93);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((t_93 != NULL) && (t_93 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_93 = ATgetArgument(t, 0);
          if(((v_93 != NULL) && (v_93 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_93 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_93);
      if(((i_93 != NULL) && (i_93 != t)))
        _fail(t);
      else
        i_93 = t;
      t = not_null(v_93);
      if(((h_93 != NULL) && (h_93 != t)))
        _fail(t);
      else
        h_93 = t;
      t = not_null(r_93);
    }
  {
    ATerm n_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_93 = NULL,a_94 = NULL,c_94 = NULL,e_94 = NULL,g_94 = NULL;
        t = not_null(k_93);
        if(((g_94 != NULL) && (g_94 != t)))
          _fail(t);
        else
          g_94 = t;
        t = term_p_62;
        if(((e_94 != NULL) && (e_94 != t)))
          _fail(t);
        else
          e_94 = t;
        t = not_null(g_94);
        t = xtc_query_one_2_1(v_150, w_150, not_null(e_94), t);
        if(((x_93 != NULL) && (x_93 != t)))
          _fail(t);
        else
          x_93 = t;
        t = not_null(k_93);
        if(((c_94 != NULL) && (c_94 != t)))
          _fail(t);
        else
          c_94 = t;
        t = term_q_62;
        if(((a_94 != NULL) && (a_94 != t)))
          _fail(t);
        else
          a_94 = t;
        t = not_null(c_94);
        t = dbg_0_1(not_null(a_94), t);
        t = not_null(x_93);
        LocalPopChoice(o_62);
      }
    else
      {
        t = n_62;
        {
          ATerm s_94 = NULL,t_94 = NULL;
          t = not_null(i_93);
          if(((t_94 != NULL) && (t_94 != t)))
            _fail(t);
          else
            t_94 = t;
          t = term_r_62;
          if(((s_94 != NULL) && (s_94 != t)))
            _fail(t);
          else
            s_94 = t;
          t = not_null(t_94);
          t = xtc_query_one_2_1(v_150, w_150, not_null(s_94), t);
          t = xtc_cache_put_0_1(not_null(k_93), t);
        }
      }
  }
  if(((m_93 != NULL) && (m_93 != t)))
    _fail(t);
  else
    m_93 = t;
  return(t);
}
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm w_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  if(((b_95 != NULL) && (b_95 != t)))
    _fail(t);
  else
    b_95 = t;
  if(((c_95 != NULL) && (c_95 != t)))
    _fail(t);
  else
    c_95 = t;
  t = not_null(b_95);
  if(((d_95 != NULL) && (d_95 != t)))
    _fail(t);
  else
    d_95 = t;
  t = SSL_explode_term(not_null(d_95));
  if(match_cons(t, sym__2))
    {
      ATerm s_62 = ATgetArgument(t, 0);
      if(((w_94 != NULL) && (w_94 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_95);
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  t = not_null(w_94);
  t = foldr_3_0(b_135, c_135, d_135, t);
  if(((z_94 != NULL) && (z_94 != t)))
    _fail(t);
  else
    z_94 = t;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  static ATerm m_95 (ATerm t);
  static ATerm m_95 (ATerm t)
  {
    ATerm t_62 = t;
    int u_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,l_95 = NULL;
        if(((e_95 != NULL) && (e_95 != t)))
          _fail(t);
        else
          e_95 = t;
        if(((l_95 != NULL) && (l_95 != t)))
          _fail(t);
        else
          l_95 = t;
        t = not_null(e_95);
        t = d_129(t);
        if(((f_95 != NULL) && (f_95 != t)))
          _fail(t);
        else
          f_95 = t;
        t = not_null(l_95);
        if(((h_95 != NULL) && (h_95 != t)))
          _fail(t);
        else
          h_95 = t;
        t = crush_3_0(g_6, e_129, m_95, t);
        if(((g_95 != NULL) && (g_95 != t)))
          _fail(t);
        else
          g_95 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(g_95)), not_null(f_95));
        LocalPopChoice(u_62);
      }
    else
      {
        t = t_62;
        t = crush_3_0(h_6, e_129, m_95, t);
      }
    return(t);
  }
  t = m_95(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(c_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm w_0, ATerm t)
{
  static ATerm q_96 (ATerm d_96, ATerm t);
  static ATerm r_96 (ATerm m_96, ATerm t);
  static ATerm q_96 (ATerm d_96, ATerm t)
  {
    ATerm e_96 = NULL,f_96 = NULL;
    t = not_null(d_96);
    if(((e_96 != NULL) && (e_96 != t)))
      _fail(t);
    else
      e_96 = t;
    t = not_null(d_96);
    if(((f_96 != NULL) && (f_96 != t)))
      _fail(t);
    else
      f_96 = t;
    t = not_null(w_0);
    t = is_list_0_0(t);
    {
      ATerm v_62 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_62;
        }
    }
    {
      static ATerm i_6 (ATerm t);
      static ATerm i_6 (ATerm t)
      {
        ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
        if(((k_96 != NULL) && (k_96 != t)))
          _fail(t);
        else
          k_96 = t;
        if(((l_96 != NULL) && (l_96 != t)))
          _fail(t);
        else
          l_96 = t;
        t = not_null(e_96);
        t = xtc_has_meta_0_1(not_null(k_96), t);
        t = not_null(k_96);
        return(t);
      }
      t = filter_1_0(i_6, t);
    }
    if(((w_0 != NULL) && (w_0 != t)))
      _fail(t);
    else
      w_0 = t;
    t = not_null(e_96);
    return(t);
  }
  static ATerm r_96 (ATerm m_96, ATerm t)
  {
    ATerm n_96 = NULL;
    t = not_null(m_96);
    if(((n_96 != NULL) && (n_96 != t)))
      _fail(t);
    else
      n_96 = t;
    t = not_null(m_96);
    {
      static ATerm j_6 (ATerm t);
      static ATerm j_6 (ATerm t)
      {
        if(((w_0 != NULL) && (w_0 != t)))
          _fail(t);
        else
          w_0 = t;
        return(t);
      }
      t = collect_all_1_0(j_6, t);
    }
    {
      ATerm w_62 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_62;
        }
    }
    t = not_null(n_96);
    return(t);
  }
  ATerm o_96 = NULL;
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  {
    ATerm x_62 = t;
    int y_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_96 = NULL;
        t = not_null(o_96);
        if(((p_96 != NULL) && (p_96 != t)))
          _fail(t);
        else
          p_96 = t;
        t = not_null(w_0);
        t = Nil_0_0(t);
        t = not_null(p_96);
        LocalPopChoice(y_62);
      }
    else
      {
        t = x_62;
        {
          ATerm k_63 = t;
          int t_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_96(not_null(o_96), t);
              LocalPopChoice(t_65);
            }
          else
            {
              t = k_63;
              t = r_96(not_null(o_96), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
  if(((s_96 != NULL) && (s_96 != t)))
    _fail(t);
  else
    s_96 = t;
  if(((w_96 != NULL) && (w_96 != t)))
    _fail(t);
  else
    w_96 = t;
  if(((v_96 != NULL) && (v_96 != t)))
    _fail(t);
  else
    v_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_62, not_null(g_81), (ATerm) ATinsert(ATempty, not_null(v_96)));
  t = table_union_0_0(t);
  t = not_null(g_81);
  if(((u_96 != NULL) && (u_96 != t)))
    _fail(t);
  else
    u_96 = t;
  t = term_u_65;
  if(((t_96 != NULL) && (t_96 != t)))
    _fail(t);
  else
    t_96 = t;
  t = not_null(u_96);
  t = dbg_0_1(not_null(t_96), t);
  t = not_null(s_96);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_96 != NULL) && (x_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_96 = ATgetArgument(t, 0);
      if(((y_96 != NULL) && (y_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(y_96)), not_null(x_96));
  return(t);
}
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm v_65 = t;
  int w_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_130(t);
      LocalPopChoice(w_65);
    }
  else
    {
      t = v_65;
      {
        ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
        if(((a_97 != NULL) && (a_97 != t)))
          _fail(t);
        else
          a_97 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_97 != NULL) && (b_97 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_97 = ATgetFirst((ATermList) t);
            if(((c_97 != NULL) && (c_97 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(b_97);
        if(((d_97 != NULL) && (d_97 != t)))
          _fail(t);
        else
          d_97 = t;
        t = not_null(c_97);
        if(((e_97 != NULL) && (e_97 != t)))
          _fail(t);
        else
          e_97 = t;
        t = not_null(a_97);
        if(((g_97 != NULL) && (g_97 != t)))
          _fail(t);
        else
          g_97 = t;
        if(((k_97 != NULL) && (k_97 != t)))
          _fail(t);
        else
          k_97 = t;
        t = not_null(d_97);
        t = g_130(t);
        if(((h_97 != NULL) && (h_97 != t)))
          _fail(t);
        else
          h_97 = t;
        t = not_null(k_97);
        if(((j_97 != NULL) && (j_97 != t)))
          _fail(t);
        else
          j_97 = t;
        t = not_null(e_97);
        t = foldr_3_0(e_130, f_130, g_130, t);
        if(((i_97 != NULL) && (i_97 != t)))
          _fail(t);
        else
          i_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_97), not_null(i_97));
        t = f_130(t);
        if(((f_97 != NULL) && (f_97 != t)))
          _fail(t);
        else
          f_97 = t;
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm x_65 = t;
  int c_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, n_6, t);
      LocalPopChoice(c_66);
      t = conc_0_0(t);
    }
  else
    {
      t = x_65;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm d_66 = t;
  int h_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(h_66);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = d_66;
      {
        ATerm o_97 = NULL;
        if(((o_97 != NULL) && (o_97 != t)))
          _fail(t);
        else
          o_97 = t;
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm n_97 = NULL;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(k_6, l_6, m_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_97 = NULL;
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
    if(((q_97 != NULL) && (q_97 != t)))
      _fail(t);
    else
      q_97 = t;
    if(((s_97 != NULL) && (s_97 != t)))
      _fail(t);
    else
      s_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_97), not_null(q_97));
    t = table_get_0_0(t);
    if(((r_97 != NULL) && (r_97 != t)))
      _fail(t);
    else
      r_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_97), not_null(r_97));
    return(t);
  }
  if(((p_97 != NULL) && (p_97 != t)))
    _fail(t);
  else
    p_97 = t;
  t = table_keys_0_0(t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t)
{
  t = not_null(u_81);
  t = table_getlist_0_0(t);
  {
    static ATerm p_6 (ATerm t);
    static ATerm p_6 (ATerm t)
    {
      ATerm t_97 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm k_67 = ATgetArgument(t, 0);
          if(((t_97 != NULL) && (t_97 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_97);
      t = b_151(t);
      return(t);
    }
    t = filter_1_0(p_6, t);
  }
  t = flatten_list_0_0(t);
  t = c_151(t);
  return(t);
}
ATerm dbg_0_1 (ATerm y_78, ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  if(((z_97 != NULL) && (z_97 != t)))
    _fail(t);
  else
    z_97 = t;
  t = term_l_67;
  if(((u_97 != NULL) && (u_97 != t)))
    _fail(t);
  else
    u_97 = t;
  t = not_null(z_97);
  if(((w_97 != NULL) && (w_97 != t)))
    _fail(t);
  else
    w_97 = t;
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  if(((v_97 != NULL) && (v_97 != t)))
    _fail(t);
  else
    v_97 = t;
  t = not_null(w_97);
  t = log_0_3(not_null(u_97), not_null(y_78), not_null(v_97), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL;
  if(((b_98 != NULL) && (b_98 != t)))
    _fail(t);
  else
    b_98 = t;
  if(((a_98 != NULL) && (a_98 != t)))
    _fail(t);
  else
    a_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(a_98));
  t = table_get_0_0(t);
  t = z_150(t);
  t = a_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
  if(((c_98 != NULL) && (c_98 != t)))
    _fail(t);
  else
    c_98 = t;
  if(((e_98 != NULL) && (e_98 != t)))
    _fail(t);
  else
    e_98 = t;
  {
    ATerm m_67 = t;
    int q_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL;
        t = not_null(c_98);
        if(((j_98 != NULL) && (j_98 != t)))
          _fail(t);
        else
          j_98 = t;
        t = term_p_62;
        if(((i_98 != NULL) && (i_98 != t)))
          _fail(t);
        else
          i_98 = t;
        t = not_null(j_98);
        t = xtc_query_one_2_1(x_150, y_150, not_null(i_98), t);
        if(((f_98 != NULL) && (f_98 != t)))
          _fail(t);
        else
          f_98 = t;
        t = not_null(c_98);
        if(((h_98 != NULL) && (h_98 != t)))
          _fail(t);
        else
          h_98 = t;
        t = term_q_62;
        if(((g_98 != NULL) && (g_98 != t)))
          _fail(t);
        else
          g_98 = t;
        t = not_null(h_98);
        t = dbg_0_1(not_null(g_98), t);
        t = not_null(f_98);
        LocalPopChoice(q_67);
      }
    else
      {
        t = m_67;
        {
          ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL;
          if(((k_98 != NULL) && (k_98 != t)))
            _fail(t);
          else
            k_98 = t;
          if(((m_98 != NULL) && (m_98 != t)))
            _fail(t);
          else
            m_98 = t;
          t = term_r_62;
          if(((l_98 != NULL) && (l_98 != t)))
            _fail(t);
          else
            l_98 = t;
          t = not_null(m_98);
          t = xtc_query_all_2_1(x_150, y_150, not_null(l_98), t);
          t = xtc_cache_put_0_1(not_null(c_98), t);
        }
      }
  }
  if(((d_98 != NULL) && (d_98 != t)))
    _fail(t);
  else
    d_98 = t;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm b_99 = NULL;
  if(((b_99 != NULL) && (b_99 != t)))
    _fail(t);
  else
    b_99 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
  if(((q_98 != NULL) && (q_98 != t)))
    _fail(t);
  else
    q_98 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      r_98 = ATgetArgument(t, 0);
      {
        ATerm a_68 = t;
        int c_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL;
            t = not_null(q_98);
            if(((t_98 != NULL) && (t_98 != t)))
              _fail(t);
            else
              t_98 = t;
            t = not_null(r_98);
            if(((s_98 != NULL) && (s_98 != t)))
              _fail(t);
            else
              s_98 = t;
            t = not_null(q_98);
            if(((w_98 != NULL) && (w_98 != t)))
              _fail(t);
            else
              w_98 = t;
            t = not_null(s_98);
            t = is_list_0_0(t);
            t = not_null(t_98);
            {
              static ATerm q_6 (ATerm t);
              static ATerm q_6 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(s_98), t);
                return(t);
              }
              t = xtc_query_all_2_0(q_6, u_0, t);
            }
            if(((v_98 != NULL) && (v_98 != t)))
              _fail(t);
            else
              v_98 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_98), not_null(v_98));
            LocalPopChoice(c_69);
          }
        else
          {
            t = a_68;
            {
              ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
              t = not_null(q_98);
              if(((y_98 != NULL) && (y_98 != t)))
                _fail(t);
              else
                y_98 = t;
              t = not_null(r_98);
              if(((x_98 != NULL) && (x_98 != t)))
                _fail(t);
              else
                x_98 = t;
              t = not_null(q_98);
              if(((a_99 != NULL) && (a_99 != t)))
                _fail(t);
              else
                a_99 = t;
              t = not_null(x_98);
              t = is_string_0_0(t);
              t = not_null(y_98);
              t = xtc_query_one_2_0(r_6, u_0, t);
              if(((z_98 != NULL) && (z_98 != t)))
                _fail(t);
              else
                z_98 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_98), not_null(z_98));
            }
          }
      }
    }
  else
    {
      ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((r_98 != NULL) && (r_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_98 = ATgetArgument(t, 0);
          if(((p_98 != NULL) && (p_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_98);
      if(((e_99 != NULL) && (e_99 != t)))
        _fail(t);
      else
        e_99 = t;
      t = not_null(r_98);
      if(((d_99 != NULL) && (d_99 != t)))
        _fail(t);
      else
        d_99 = t;
      t = not_null(p_98);
      if(((c_99 != NULL) && (c_99 != t)))
        _fail(t);
      else
        c_99 = t;
      t = not_null(q_98);
      if(((h_99 != NULL) && (h_99 != t)))
        _fail(t);
      else
        h_99 = t;
      t = not_null(d_99);
      t = is_string_0_0(t);
      t = not_null(c_99);
      t = is_list_0_0(t);
      t = not_null(e_99);
      {
        static ATerm s_6 (ATerm t);
        static ATerm s_6 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(c_99), t);
          return(t);
        }
        t = xtc_query_one_2_0(s_6, u_0, t);
      }
      if(((g_99 != NULL) && (g_99 != t)))
        _fail(t);
      else
        g_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_99), not_null(g_99));
    }
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((j_99 != NULL) && (j_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_99 = ATgetArgument(t, 0);
      if(((k_99 != NULL) && (k_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_99 = ATgetArgument(t, 1);
      if(((i_99 != NULL) && (i_99 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_99 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((l_99 != NULL) && (l_99 != t)))
    _fail(t);
  else
    l_99 = t;
  if(((n_99 != NULL) && (n_99 != t)))
    _fail(t);
  else
    n_99 = t;
  if(((p_99 != NULL) && (p_99 != t)))
    _fail(t);
  else
    p_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_99), not_null(k_99));
  {
    ATerm t_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = t_69;
        t = (ATerm) ATempty;
      }
  }
  if(((o_99 != NULL) && (o_99 != t)))
    _fail(t);
  else
    o_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_99), not_null(o_99));
  t = union_0_0(t);
  if(((m_99 != NULL) && (m_99 != t)))
    _fail(t);
  else
    m_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(j_99), not_null(k_99), not_null(m_99));
  t = set_0_0(t);
  t = not_null(l_99);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm q_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_99 != NULL) && (q_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_99 = ATgetArgument(t, 0);
      if(((q_99 != NULL) && (q_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((s_99 != NULL) && (s_99 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        s_99 = ATgetFirst((ATermList) t);
      if(((r_99 != NULL) && (r_99 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((t_99 != NULL) && (t_99 != t)))
    _fail(t);
  else
    t_99 = t;
  t = s_127(t);
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL;
      if(((u_99 != NULL) && (u_99 != t)))
        _fail(t);
      else
        u_99 = t;
      if(((w_99 != NULL) && (w_99 != t)))
        _fail(t);
      else
        w_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_99), not_null(u_99));
      t = r_127(t);
      if(((v_99 != NULL) && (v_99 != t)))
        _fail(t);
      else
        v_99 = t;
      return(t);
    }
    t = fetch_1_0(t_6, t);
  }
  t = not_null(r_99);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm c_100 = NULL;
  if(((c_100 != NULL) && (c_100 != t)))
    _fail(t);
  else
    c_100 = t;
  return(t);
}
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_99 != NULL) && (z_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_99 = ATgetArgument(t, 0);
      if(((y_99 != NULL) && (y_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  t = not_null(z_99);
  {
    static ATerm d_100 (ATerm t);
    static ATerm d_100 (ATerm t)
    {
      ATerm v_69 = t;
      int f_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(y_99);
          LocalPopChoice(f_70);
        }
      else
        {
          t = v_69;
          {
            ATerm g_70 = t;
            int j_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm u_6 (ATerm t);
                static ATerm u_6 (ATerm t)
                {
                  t = not_null(y_99);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, u_6, t);
                t = d_100(t);
                LocalPopChoice(j_70);
              }
            else
              {
                t = g_70;
                t = Cons_2_0(v_6, d_100, t);
              }
          }
        }
      return(t);
    }
    t = d_100(t);
  }
  if(((a_100 != NULL) && (a_100 != t)))
    _fail(t);
  else
    a_100 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm f_100 = NULL;
  if(((f_100 != NULL) && (f_100 != t)))
    _fail(t);
  else
    f_100 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t)
{
  static ATerm x_6 (ATerm t);
  static ATerm x_6 (ATerm t)
  {
    ATerm g_100 = NULL,h_100 = NULL;
    if(((h_100 != NULL) && (h_100 != t)))
      _fail(t);
    else
      h_100 = t;
    if(((g_100 != NULL) && (g_100 != t)))
      _fail(t);
    else
      g_100 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_100), not_null(b_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(w_6, x_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t)
{
  static ATerm y_6 (ATerm t);
  static ATerm y_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(a_80), t);
    return(t);
  }
  t = map_1_0(y_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL;
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  t = Fst_0_0(t);
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = not_null(q_100);
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  t = Snd_0_0(t);
  if(((o_100 != NULL) && (o_100 != t)))
    _fail(t);
  else
    o_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_56, not_null(n_100), not_null(o_100));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm t_0, ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  if(((j_100 != NULL) && (j_100 != t)))
    _fail(t);
  else
    j_100 = t;
  if(match_cons(t, sym_Reference_1))
    {
      k_100 = ATgetArgument(t, 0);
      {
        ATerm m_100 = NULL;
        t = not_null(k_100);
        if(((m_100 != NULL) && (m_100 != t)))
          _fail(t);
        else
          m_100 = t;
        t = xtc_add_meta_all_0_1(not_null(t_0), t);
        t = map_1_0(z_6, t);
      }
    }
  else
    {
      ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL,w_100 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((k_100 != NULL) && (k_100 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_100 = ATgetArgument(t, 0);
          if(((l_100 != NULL) && (l_100 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(k_100);
      if(((r_100 != NULL) && (r_100 != t)))
        _fail(t);
      else
        r_100 = t;
      t = not_null(l_100);
      if(((s_100 != NULL) && (s_100 != t)))
        _fail(t);
      else
        s_100 = t;
      t = not_null(j_100);
      if(((w_100 != NULL) && (w_100 != t)))
        _fail(t);
      else
        w_100 = t;
      t = not_null(s_100);
      t = xtc_add_meta_all_0_1(not_null(t_0), t);
      if(((t_100 != NULL) && (t_100 != t)))
        _fail(t);
      else
        t_100 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_62, not_null(r_100), not_null(t_100));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t)
{
  static ATerm a_7 (ATerm t);
  static ATerm a_7 (ATerm t)
  {
    static ATerm b_7 (ATerm t);
    static ATerm b_7 (ATerm t)
    {
      t = xtc_register_0_1(not_null(g_79), t);
      return(t);
    }
    t = map_1_0(b_7, t);
    return(t);
  }
  t = Repository_1_0(a_7, t);
  return(t);
}
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,c_7 = NULL,a_12 = NULL;
  if(((e_101 != NULL) && (e_101 != t)))
    _fail(t);
  else
    e_101 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((y_100 != NULL) && (y_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = SSLgetAnnotations(not_null(e_101));
  if(((x_100 != NULL) && (x_100 != t)))
    _fail(t);
  else
    x_100 = t;
  t = not_null(y_100);
  t = b_109(t);
  if(((b_101 != NULL) && (b_101 != t)))
    _fail(t);
  else
    b_101 = t;
  if(((d_101 != NULL) && (d_101 != t)))
    _fail(t);
  else
    d_101 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(b_101));
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  t = SSLsetAnnotations(not_null(c_7), not_null(x_100));
  if(((c_101 != NULL) && (c_101 != t)))
    _fail(t);
  else
    c_101 = t;
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_101 != NULL) && (g_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_101 = ATgetArgument(t, 0);
      {
        ATerm k_70 = ATgetArgument(t, 1);
        if(match_cons(k_70, sym_Stream_1))
          {
            if(((h_101 != NULL) && (h_101 != ATgetArgument(k_70, 0))))
              _fail(ATgetArgument(k_70, 0));
            else
              h_101 = ATgetArgument(k_70, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(g_101), not_null(h_101));
  if(((j_101 != NULL) && (j_101 != t)))
    _fail(t);
  else
    j_101 = t;
  if(((i_101 != NULL) && (i_101 != t)))
    _fail(t);
  else
    i_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_101));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  if(((n_101 != NULL) && (n_101 != t)))
    _fail(t);
  else
    n_101 = t;
  if(((k_101 != NULL) && (k_101 != t)))
    _fail(t);
  else
    k_101 = t;
  t = not_null(n_101);
  if(((m_101 != NULL) && (m_101 != t)))
    _fail(t);
  else
    m_101 = t;
  t = term_g_14;
  t = log_stream_0_0(t);
  if(((l_101 != NULL) && (l_101 != t)))
    _fail(t);
  else
    l_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_101), not_null(l_101));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL,r_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_70 = ATgetArgument(t, 0);
      if(match_cons(l_70, sym_Stream_1))
        {
          if(((o_101 != NULL) && (o_101 != ATgetArgument(l_70, 0))))
            _fail(ATgetArgument(l_70, 0));
          else
            o_101 = ATgetArgument(l_70, 0);
        }
      else
        _fail(t);
      if(((p_101 != NULL) && (p_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(o_101), not_null(p_101));
  if(((r_101 != NULL) && (r_101 != t)))
    _fail(t);
  else
    r_101 = t;
  if(((q_101 != NULL) && (q_101 != t)))
    _fail(t);
  else
    q_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_101));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm o_70 = t;
  int p_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_70;
      t = get_config_0_0(t);
      LocalPopChoice(p_70);
    }
  else
    {
      t = o_70;
      t = term_g_14;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_101 != NULL) && (s_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_101 = ATgetArgument(t, 0);
      if(((t_101 != NULL) && (t_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_70 = t;
    int u_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(s_101), not_null(t_101));
        LocalPopChoice(u_70);
      }
    else
      {
        t = r_70;
        t = SSL_subtr(not_null(s_101), not_null(t_101));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm u_101 (ATerm t);
  static ATerm u_101 (ATerm t)
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
        t = m_116(t);
        t = u_101(t);
      }
    return(t);
  }
  t = u_101(t);
  return(t);
}
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t)
{
  t = o_116(t);
  t = while_not_2_0(p_116, q_116, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_101 != NULL) && (v_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_101 = ATgetArgument(t, 0);
      if(((w_101 != NULL) && (w_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_101), not_null(w_101), (ATerm) ATempty);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_70 = ATgetArgument(t, 0);
      if(((ATgetType(z_70) != AT_INT) || (ATgetInt((ATermInt) z_70) != 0)))
        _fail(t);
      if(((x_101 != NULL) && (x_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_101 = ATgetArgument(t, 1);
      if(((y_101 != NULL) && (y_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(y_101);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((z_101 != NULL) && (z_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_101 = ATgetArgument(t, 0);
      if(((a_102 != NULL) && (a_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_102 = ATgetArgument(t, 1);
      if(((b_102 != NULL) && (b_102 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_102 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((e_102 != NULL) && (e_102 != t)))
    _fail(t);
  else
    e_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_101), term_b_15);
  t = geq_0_0(t);
  t = not_null(e_102);
  if(((d_102 != NULL) && (d_102 != t)))
    _fail(t);
  else
    d_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_101), term_b_15);
  t = subt_0_0(t);
  if(((c_102 != NULL) && (c_102 != t)))
    _fail(t);
  else
    c_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_102), not_null(a_102), (ATerm) ATinsert(CheckATermList(not_null(b_102)), not_null(a_102)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(d_7, e_7, f_7, t);
  return(t);
}
ATerm copy_char_0_0 (ATerm t)
{
  t = copy_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm strlen_0_0 (ATerm t)
{
  ATerm f_102 = NULL;
  if(((f_102 != NULL) && (f_102 != t)))
    _fail(t);
  else
    f_102 = t;
  t = SSL_strlen(not_null(f_102));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm h_102 = NULL;
  if(((h_102 != NULL) && (h_102 != t)))
    _fail(t);
  else
    h_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_a_71;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_b_71;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_c_71;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_l_71;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_o_71;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_p_71;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_q_71;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_r_71;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_s_71;
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
static ATerm g_7 (ATerm t)
{
  ATerm j_102 = NULL;
  if(((j_102 != NULL) && (j_102 != t)))
    _fail(t);
  else
    j_102 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm k_102 (ATerm t);
  static ATerm k_102 (ATerm t)
  {
    ATerm b_72 = t;
    int c_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_7, k_102, t);
        LocalPopChoice(c_72);
      }
    else
      {
        t = b_72;
        t = c_124(t);
      }
    return(t);
  }
  t = k_102(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm l_102 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm h_7 (ATerm t);
    static ATerm h_7 (ATerm t)
    {
      static ATerm i_7 (ATerm t);
      static ATerm i_7 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_72 = ATgetFirst((ATermList) t);
            if(((ATgetType(d_72) != AT_INT) || (ATgetInt((ATermInt) d_72) != 47)))
              _fail(t);
            if(((l_102 != NULL) && (l_102 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              l_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(i_7, t);
      t = not_null(l_102);
      return(t);
    }
    t = try_1_0(h_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(f_72);
    }
  else
    {
      t = e_72;
      t = term_m_72;
    }
  return(t);
}
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t)
{
  static ATerm j_7 (ATerm t);
  static ATerm j_7 (ATerm t)
  {
    ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    if(((q_102 != NULL) && (q_102 != t)))
      _fail(t);
    else
      q_102 = t;
    t = log_src_0_0(t);
    if(((n_102 != NULL) && (n_102 != t)))
      _fail(t);
    else
      n_102 = t;
    t = not_null(q_102);
    if(((p_102 != NULL) && (p_102 != t)))
      _fail(t);
    else
      p_102 = t;
    t = not_null(d_79);
    t = severity_string_0_0(t);
    if(((o_102 != NULL) && (o_102 != t)))
      _fail(t);
    else
      o_102 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_72), not_null(e_79)), term_s_72), not_null(n_102)), term_r_72), not_null(o_102)), term_q_72);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(m_102);
    return(t);
  }
  t = if_log_severity_1_1(j_7, not_null(d_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t)
{
  ATerm u_72 = t;
  int v_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL;
      if(((s_102 != NULL) && (s_102 != t)))
        _fail(t);
      else
        s_102 = t;
      if(((u_102 != NULL) && (u_102 != t)))
        _fail(t);
      else
        u_102 = t;
      t = term_w_72;
      {
        ATerm l_74 = t;
        int m_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(m_74);
          }
        else
          {
            t = l_74;
            t = term_n_74;
          }
      }
      if(((t_102 != NULL) && (t_102 != t)))
        _fail(t);
      else
        t_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_102), not_null(z_78));
      t = geq_0_0(t);
      t = not_null(s_102);
      LocalPopChoice(v_72);
      t = o_150(t);
    }
  else
    {
      t = u_72;
      {
        ATerm v_102 = NULL;
        if(((v_102 != NULL) && (v_102 != t)))
          _fail(t);
        else
          v_102 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm x_102 = NULL;
  if(((x_102 != NULL) && (x_102 != t)))
    _fail(t);
  else
    x_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_i_18;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_c_17;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_s_15;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_o_15;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_b_15;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_n_74;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_o_74;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_p_74;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_q_74;
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
ATerm if_log_severity_1_1 (ATerm p_150 (ATerm), ATerm f_79, ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL;
  if(((z_102 != NULL) && (z_102 != t)))
    _fail(t);
  else
    z_102 = t;
  if(((b_103 != NULL) && (b_103 != t)))
    _fail(t);
  else
    b_103 = t;
  t = not_null(f_79);
  t = verbose_level_0_0(t);
  if(((a_103 != NULL) && (a_103 != t)))
    _fail(t);
  else
    a_103 = t;
  if(((y_102 != NULL) && (y_102 != t)))
    _fail(t);
  else
    y_102 = t;
  t = not_null(z_102);
  t = log_if_verbose_1_1(p_150, not_null(y_102), t);
  return(t);
}
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t)
{
  static ATerm k_7 (ATerm t);
  static ATerm k_7 (ATerm t)
  {
    ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
    t = log_0_2(not_null(a_79), not_null(b_79), t);
    if(((c_103 != NULL) && (c_103 != t)))
      _fail(t);
    else
      c_103 = t;
    if(((g_103 != NULL) && (g_103 != t)))
      _fail(t);
    else
      g_103 = t;
    if(((i_103 != NULL) && (i_103 != t)))
      _fail(t);
    else
      i_103 = t;
    t = not_null(a_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((h_103 != NULL) && (h_103 != t)))
      _fail(t);
    else
      h_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_103), term_s_15);
    t = add_0_0(t);
    if(((f_103 != NULL) && (f_103 != t)))
      _fail(t);
    else
      f_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_103), term_r_74);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((e_103 != NULL) && (e_103 != t)))
      _fail(t);
    else
      e_103 = t;
    t = log_stream_0_0(t);
    if(((d_103 != NULL) && (d_103 != t)))
      _fail(t);
    else
      d_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_103), not_null(c_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_t_72;
    t = log_puts_0_0(t);
    t = not_null(c_103);
    return(t);
  }
  t = if_log_severity_1_1(k_7, not_null(a_79), t);
  return(t);
}
ATerm notice_0_1 (ATerm x_78, ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  if(((o_103 != NULL) && (o_103 != t)))
    _fail(t);
  else
    o_103 = t;
  t = term_s_74;
  if(((j_103 != NULL) && (j_103 != t)))
    _fail(t);
  else
    j_103 = t;
  t = not_null(o_103);
  if(((l_103 != NULL) && (l_103 != t)))
    _fail(t);
  else
    l_103 = t;
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  if(((m_103 != NULL) && (m_103 != t)))
    _fail(t);
  else
    m_103 = t;
  if(((k_103 != NULL) && (k_103 != t)))
    _fail(t);
  else
    k_103 = t;
  t = not_null(l_103);
  t = log_0_3(not_null(j_103), not_null(x_78), not_null(k_103), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_74 = ATgetArgument(t, 0);
      if(match_cons(t_74, sym_Stream_1))
        {
          if(((p_103 != NULL) && (p_103 != ATgetArgument(t_74, 0))))
            _fail(ATgetArgument(t_74, 0));
          else
            p_103 = ATgetArgument(t_74, 0);
        }
      else
        _fail(t);
      if(((q_103 != NULL) && (q_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(p_103), not_null(q_103));
  if(((s_103 != NULL) && (s_103 != t)))
    _fail(t);
  else
    s_103 = t;
  if(((r_103 != NULL) && (r_103 != t)))
    _fail(t);
  else
    r_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_103));
  return(t);
}
static ATerm f_104 (ATerm w_103, ATerm x_103, ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL;
  t = not_null(w_103);
  if(((y_103 != NULL) && (y_103 != t)))
    _fail(t);
  else
    y_103 = t;
  t = SSL_fclose(not_null(y_103));
  return(t);
}
static ATerm g_104 (ATerm a_104, ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL;
  t = not_null(a_104);
  if(((c_104 != NULL) && (c_104 != t)))
    _fail(t);
  else
    c_104 = t;
  t = SSL_fclose(not_null(c_104));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL;
  if(((e_104 != NULL) && (e_104 != t)))
    _fail(t);
  else
    e_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_104 = ATgetArgument(t, 0);
      {
        ATerm u_74 = t;
        int m_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_104(not_null(d_104), not_null(e_104), t);
            LocalPopChoice(m_75);
          }
        else
          {
            t = u_74;
            t = g_104(not_null(e_104), t);
          }
      }
    }
  else
    {
      t = g_104(not_null(e_104), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_104 != NULL) && (h_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_104 = ATgetArgument(t, 0);
      if(((i_104 != NULL) && (i_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(h_104), not_null(i_104));
  if(((k_104 != NULL) && (k_104 != t)))
    _fail(t);
  else
    k_104 = t;
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_104));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL;
  t = SSL_stdin_stream();
  if(((m_104 != NULL) && (m_104 != t)))
    _fail(t);
  else
    m_104 = t;
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_104));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL;
  t = SSL_stdout_stream();
  if(((o_104 != NULL) && (o_104 != t)))
    _fail(t);
  else
    o_104 = t;
  if(((n_104 != NULL) && (n_104 != t)))
    _fail(t);
  else
    n_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_104));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL;
  t = SSL_stderr_stream();
  if(((q_104 != NULL) && (q_104 != t)))
    _fail(t);
  else
    q_104 = t;
  if(((p_104 != NULL) && (p_104 != t)))
    _fail(t);
  else
    p_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_104));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_104 = NULL;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(s_104);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(s_104);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(s_104);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm v_104 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((v_104 != NULL) && (v_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(v_104);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm w_104 = NULL;
  if(((w_104 != NULL) && (w_104 != t)))
    _fail(t);
  else
    w_104 = t;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm x_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_75 = ATgetArgument(t, 0);
      ATerm o_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_75 = t;
    int q_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(q_75);
      }
    else
      {
        t = p_75;
        {
          ATerm r_75 = t;
          int q_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(l_7, m_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(q_76);
            }
          else
            {
              t = r_75;
              t = _2_0(is_string_0_0, n_7, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_105 = ATgetArgument(t, 0);
      if(((y_104 != NULL) && (y_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_105);
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), term_i_77);
  t = open_stream_0_0(t);
  if(((a_105 != NULL) && (a_105 != t)))
    _fail(t);
  else
    a_105 = t;
  if(((z_104 != NULL) && (z_104 != t)))
    _fail(t);
  else
    z_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(y_104));
  t = x_122(t);
  t = fclose_0_0(t);
  t = not_null(y_104);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm e_105 = NULL;
  if(((e_105 != NULL) && (e_105 != t)))
    _fail(t);
  else
    e_105 = t;
  t = SSL_creat(not_null(e_105));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  static ATerm o_7 (ATerm t);
  static ATerm o_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_105 != NULL) && (f_105 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_105 = ATgetFirst((ATermList) t);
        {
          ATerm j_77 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(j_77) != AT_LIST) || !(ATisEmpty(j_77))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(o_7, t);
  if(((h_105 != NULL) && (h_105 != t)))
    _fail(t);
  else
    h_105 = t;
  if(((g_105 != NULL) && (g_105 != t)))
    _fail(t);
  else
    g_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), not_null(f_105));
  return(t);
}
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm i_105 (ATerm t);
  static ATerm i_105 (ATerm t)
  {
    ATerm h_78 = t;
    int t_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        t = i_105(t);
        LocalPopChoice(t_78);
      }
    else
      {
        t = h_78;
        t = v_115(t);
      }
    return(t);
  }
  t = i_105(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm k_105 = NULL;
  if(((k_105 != NULL) && (k_105 != t)))
    _fail(t);
  else
    k_105 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  t = repeat_2_0(x_115, p_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm n_105 = NULL;
  if(((n_105 != NULL) && (n_105 != t)))
    _fail(t);
  else
    n_105 = t;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm o_105 = NULL;
  if(((o_105 != NULL) && (o_105 != t)))
    _fail(t);
  else
    o_105 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm p_105 (ATerm t);
  static ATerm p_105 (ATerm t)
  {
    ATerm h_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_7, Nil_0_0, t);
        t = f_124(t);
        LocalPopChoice(i_79);
      }
    else
      {
        t = h_79;
        t = Cons_2_0(r_7, p_105, t);
      }
    return(t);
  }
  t = p_105(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = z_133(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = try_1_0(t_7, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_j_79);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(u_7, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_h_12);
        }
      else
        {
          t = repeat_1_0(x_7, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_j_79);
            }
          else
            {
              ATerm v_105 = NULL;
              if(((v_105 != NULL) && (v_105 != t)))
                _fail(t);
              else
                v_105 = t;
            }
        }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm s_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((s_105 != NULL) && (s_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_105 = ATgetArgument(t, 0);
      {
        ATerm k_79 = ATgetArgument(t, 1);
        if(((ATgetType(k_79) != AT_INT) || (ATgetInt((ATermInt) k_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(s_105);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(v_7, w_7, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm t_105 = NULL;
  if(((t_105 != NULL) && (t_105 != t)))
    _fail(t);
  else
    t_105 = t;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_79 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_79;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm u_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((u_105 != NULL) && (u_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_105 = ATgetArgument(t, 0);
      {
        ATerm m_79 = ATgetArgument(t, 1);
        if(((ATgetType(m_79) != AT_INT) || (ATgetInt((ATermInt) m_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(u_105);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(s_7, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm w_105 = NULL;
  if(((w_105 != NULL) && (w_105 != t)))
    _fail(t);
  else
    w_105 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(w_105);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm n_79 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_79;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL;
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  if(((x_105 != NULL) && (x_105 != t)))
    _fail(t);
  else
    x_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_105), (ATerm) ATinsert(ATempty, term_o_79));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t)
{
  ATerm p_79 = t;
  int q_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_105 = NULL;
      if(((z_105 != NULL) && (z_105 != t)))
        _fail(t);
      else
        z_105 = t;
      t = not_null(r_79);
      {
        ATerm u_79 = t;
        int w_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(w_79);
          }
        else
          {
            t = u_79;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(z_105);
      LocalPopChoice(q_79);
      {
        ATerm a_106 = NULL,b_106 = NULL;
        if(((b_106 != NULL) && (b_106 != t)))
          _fail(t);
        else
          b_106 = t;
        if(((a_106 != NULL) && (a_106 != t)))
          _fail(t);
        else
          a_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_79), not_null(a_106));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = p_79;
      {
        ATerm c_106 = NULL,d_106 = NULL;
        t = not_null(r_79);
        if(((d_106 != NULL) && (d_106 != t)))
          _fail(t);
        else
          d_106 = t;
        t = term_d_80;
        if(((c_106 != NULL) && (c_106 != t)))
          _fail(t);
        else
          c_106 = t;
        t = not_null(d_106);
        t = err_0_1(not_null(c_106), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm e_106 = NULL;
  if(((e_106 != NULL) && (e_106 != t)))
    _fail(t);
  else
    e_106 = t;
  {
    ATerm f_80 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_80;
      }
  }
  t = term_h_80;
  t = xtc_save_file_0_1(not_null(e_106), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm f_106 = NULL;
  if(((f_106 != NULL) && (f_106 != t)))
    _fail(t);
  else
    f_106 = t;
  {
    ATerm i_80 = t;
    int j_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_106 = NULL,h_106 = NULL;
        t = not_null(f_106);
        if(((h_106 != NULL) && (h_106 != t)))
          _fail(t);
        else
          h_106 = t;
        t = not_null(f_106);
        if(((g_106 != NULL) && (g_106 != t)))
          _fail(t);
        else
          g_106 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_106));
        t = read_from_0_0(t);
        LocalPopChoice(j_81);
      }
    else
      {
        t = i_80;
        {
          ATerm k_81 = t;
          int l_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
              t = not_null(f_106);
              if(((k_106 != NULL) && (k_106 != t)))
                _fail(t);
              else
                k_106 = t;
              t = not_null(f_106);
              t = xtc_create_new_0_0(t);
              t = not_null(k_106);
              if(((j_106 != NULL) && (j_106 != t)))
                _fail(t);
              else
                j_106 = t;
              if(((i_106 != NULL) && (i_106 != t)))
                _fail(t);
              else
                i_106 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_106));
              t = read_from_0_0(t);
              LocalPopChoice(l_81);
            }
          else
            {
              t = k_81;
              {
                ATerm l_106 = NULL,m_106 = NULL;
                t = not_null(f_106);
                if(((m_106 != NULL) && (m_106 != t)))
                  _fail(t);
                else
                  m_106 = t;
                t = term_n_81;
                if(((l_106 != NULL) && (l_106 != t)))
                  _fail(t);
                else
                  l_106 = t;
                t = not_null(m_106);
                t = err_0_1(not_null(l_106), t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm n_106 = NULL;
  if(((n_106 != NULL) && (n_106 != t)))
    _fail(t);
  else
    n_106 = t;
  {
    ATerm o_81 = t;
    int p_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_106 = NULL,p_106 = NULL;
        t = not_null(n_106);
        if(((p_106 != NULL) && (p_106 != t)))
          _fail(t);
        else
          p_106 = t;
        t = not_null(n_106);
        if(((o_106 != NULL) && (o_106 != t)))
          _fail(t);
        else
          o_106 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(o_106));
        t = read_from_0_0(t);
        LocalPopChoice(p_81);
      }
    else
      {
        t = o_81;
        {
          ATerm q_106 = NULL,r_106 = NULL;
          t = not_null(n_106);
          if(((r_106 != NULL) && (r_106 != t)))
            _fail(t);
          else
            r_106 = t;
          t = term_q_81;
          if(((q_106 != NULL) && (q_106 != t)))
            _fail(t);
          else
            q_106 = t;
          t = not_null(r_106);
          t = err_0_1(not_null(q_106), t);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm w_106 = NULL;
  if(((w_106 != NULL) && (w_106 != t)))
    _fail(t);
  else
    w_106 = t;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm b_107 = NULL;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm v_79, ATerm t)
{
  ATerm u_106 = NULL;
  if(((u_106 != NULL) && (u_106 != t)))
    _fail(t);
  else
    u_106 = t;
  {
    ATerm r_81 = t;
    int s_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_106 = NULL;
        if(((v_106 != NULL) && (v_106 != t)))
          _fail(t);
        else
          v_106 = t;
        t = is_url_http_0_0(t);
        t = not_null(v_106);
        LocalPopChoice(s_81);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = r_81;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm v_81 = t;
    int w_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(y_7, t);
        LocalPopChoice(w_81);
      }
    else
      {
        t = v_81;
        {
          ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL,a_107 = NULL;
          if(((x_106 != NULL) && (x_106 != t)))
            _fail(t);
          else
            x_106 = t;
          if(((y_106 != NULL) && (y_106 != t)))
            _fail(t);
          else
            y_106 = t;
          t = not_null(u_106);
          if(((a_107 != NULL) && (a_107 != t)))
            _fail(t);
          else
            a_107 = t;
          t = term_x_81;
          if(((z_106 != NULL) && (z_106 != t)))
            _fail(t);
          else
            z_106 = t;
          t = not_null(a_107);
          t = notice_0_1(not_null(z_106), t);
          t = not_null(y_106);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(z_7, t);
  t = xtc_aterm2table_0_1(not_null(v_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm c_107 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((c_107 != NULL) && (c_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(c_107));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm d_107 = NULL;
  if(((d_107 != NULL) && (d_107 != t)))
    _fail(t);
  else
    d_107 = t;
  t = lookup_table_0_1(not_null(d_107), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm e_107 = NULL;
  if(((e_107 != NULL) && (e_107 != t)))
    _fail(t);
  else
    e_107 = t;
  {
    ATerm y_81 = t;
    int z_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_62;
        t = table_keys_0_0(t);
        {
          ATerm a_82 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_82;
            }
        }
        LocalPopChoice(z_81);
      }
    else
      {
        t = y_81;
        t = not_null(y_79);
        t = xtc_load_0_1(not_null(z_79), t);
      }
  }
  t = not_null(e_107);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm f_107 = NULL;
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = SSL_getenv(not_null(f_107));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_82 = t;
  int c_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_82;
      t = getenv_0_0(t);
      LocalPopChoice(c_82);
    }
  else
    {
      t = b_82;
      {
        ATerm e_82 = t;
        int f_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(f_82);
          }
        else
          {
            t = e_82;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
  if(((j_107 != NULL) && (j_107 != t)))
    _fail(t);
  else
    j_107 = t;
  if(((l_107 != NULL) && (l_107 != t)))
    _fail(t);
  else
    l_107 = t;
  t = xtc_location_0_0(t);
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  if(((g_107 != NULL) && (g_107 != t)))
    _fail(t);
  else
    g_107 = t;
  t = not_null(j_107);
  if(((i_107 != NULL) && (i_107 != t)))
    _fail(t);
  else
    i_107 = t;
  t = (ATerm) ATempty;
  if(((h_107 != NULL) && (h_107 != t)))
    _fail(t);
  else
    h_107 = t;
  t = not_null(i_107);
  t = xtc_init_0_2(not_null(g_107), not_null(h_107), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm m_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,a_8 = NULL,b_12 = NULL;
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((o_107 != NULL) && (o_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_107 = ATgetArgument(t, 0);
      if(((p_107 != NULL) && (p_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  t = SSLgetAnnotations(not_null(u_107));
  if(((m_107 != NULL) && (m_107 != t)))
    _fail(t);
  else
    m_107 = t;
  t = not_null(o_107);
  t = g_110(t);
  if(((q_107 != NULL) && (q_107 != t)))
    _fail(t);
  else
    q_107 = t;
  t = not_null(p_107);
  t = h_110(t);
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  if(((t_107 != NULL) && (t_107 != t)))
    _fail(t);
  else
    t_107 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(q_107), not_null(r_107));
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = SSLsetAnnotations(not_null(a_8), not_null(m_107));
  if(((s_107 != NULL) && (s_107 != t)))
    _fail(t);
  else
    s_107 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,b_8 = NULL,c_12 = NULL;
  if(((b_108 != NULL) && (b_108 != t)))
    _fail(t);
  else
    b_108 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((x_107 != NULL) && (x_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_108 != NULL) && (c_108 != t)))
    _fail(t);
  else
    c_108 = t;
  t = SSLgetAnnotations(not_null(b_108));
  if(((w_107 != NULL) && (w_107 != t)))
    _fail(t);
  else
    w_107 = t;
  t = not_null(x_107);
  t = f_110(t);
  if(((y_107 != NULL) && (y_107 != t)))
    _fail(t);
  else
    y_107 = t;
  if(((a_108 != NULL) && (a_108 != t)))
    _fail(t);
  else
    a_108 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(y_107));
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  t = SSLsetAnnotations(not_null(b_8), not_null(w_107));
  if(((z_107 != NULL) && (z_107 != t)))
    _fail(t);
  else
    z_107 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm d_108 = NULL;
  if(((d_108 != NULL) && (d_108 != t)))
    _fail(t);
  else
    d_108 = t;
  t = SSL_is_string(not_null(d_108));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  if(((h_108 != NULL) && (h_108 != t)))
    _fail(t);
  else
    h_108 = t;
  if(match_cons(t, sym__2))
    {
      f_108 = ATgetArgument(t, 0);
      g_108 = ATgetArgument(t, 1);
      {
        ATerm g_82 = t;
        int h_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL;
            t = not_null(h_108);
            if(((i_108 != NULL) && (i_108 != t)))
              _fail(t);
            else
              i_108 = t;
            t = not_null(h_108);
            if(((k_108 != NULL) && (k_108 != t)))
              _fail(t);
            else
              k_108 = t;
            t = not_null(i_108);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(i_108));
            LocalPopChoice(h_82);
          }
        else
          {
            t = g_82;
            {
              ATerm i_82 = t;
              int j_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
                  t = not_null(f_108);
                  if(((m_108 != NULL) && (m_108 != t)))
                    _fail(t);
                  else
                    m_108 = t;
                  t = not_null(g_108);
                  if(((l_108 != NULL) && (l_108 != t)))
                    _fail(t);
                  else
                    l_108 = t;
                  t = not_null(h_108);
                  if(((o_108 != NULL) && (o_108 != t)))
                    _fail(t);
                  else
                    o_108 = t;
                  t = not_null(m_108);
                  t = is_string_0_0(t);
                  t = not_null(l_108);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(m_108), not_null(l_108));
                  LocalPopChoice(j_82);
                }
              else
                {
                  t = i_82;
                  {
                    ATerm k_82 = t;
                    int l_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
                        t = not_null(f_108);
                        if(((p_108 != NULL) && (p_108 != t)))
                          _fail(t);
                        else
                          p_108 = t;
                        t = not_null(g_108);
                        if(((q_108 != NULL) && (q_108 != t)))
                          _fail(t);
                        else
                          q_108 = t;
                        t = not_null(h_108);
                        if(((r_108 != NULL) && (r_108 != t)))
                          _fail(t);
                        else
                          r_108 = t;
                        t = not_null(p_108);
                        t = is_string_0_0(t);
                        t = not_null(q_108);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(p_108), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_d_14, (ATerm) ATmakeAppl(sym_String_1, not_null(q_108)))));
                        LocalPopChoice(l_82);
                      }
                    else
                      {
                        t = k_82;
                        {
                          ATerm s_108 = NULL,t_108 = NULL;
                          t = not_null(h_108);
                          if(((s_108 != NULL) && (s_108 != t)))
                            _fail(t);
                          else
                            s_108 = t;
                          t = not_null(h_108);
                          if(((t_108 != NULL) && (t_108 != t)))
                            _fail(t);
                          else
                            t_108 = t;
                          t = not_null(s_108);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(s_108));
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
      ATerm m_82 = t;
      int n_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
          t = not_null(h_108);
          if(((u_108 != NULL) && (u_108 != t)))
            _fail(t);
          else
            u_108 = t;
          t = not_null(h_108);
          if(((w_108 != NULL) && (w_108 != t)))
            _fail(t);
          else
            w_108 = t;
          t = not_null(u_108);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(u_108));
          LocalPopChoice(n_82);
        }
      else
        {
          t = m_82;
          {
            ATerm x_108 = NULL,y_108 = NULL;
            t = not_null(h_108);
            if(((x_108 != NULL) && (x_108 != t)))
              _fail(t);
            else
              x_108 = t;
            t = not_null(h_108);
            if(((y_108 != NULL) && (y_108 != t)))
              _fail(t);
            else
              y_108 = t;
            t = not_null(x_108);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(x_108));
          }
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm l_109 = NULL;
  if(((l_109 != NULL) && (l_109 != t)))
    _fail(t);
  else
    l_109 = t;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm o_109 = NULL;
  if(((o_109 != NULL) && (o_109 != t)))
    _fail(t);
  else
    o_109 = t;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm p_109 = NULL;
  if(((p_109 != NULL) && (p_109 != t)))
    _fail(t);
  else
    p_109 = t;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_109 = NULL;
  if(((q_109 != NULL) && (q_109 != t)))
    _fail(t);
  else
    q_109 = t;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm r_109 = NULL;
  if(((r_109 != NULL) && (r_109 != t)))
    _fail(t);
  else
    r_109 = t;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm s_109 = NULL;
  if(((s_109 != NULL) && (s_109 != t)))
    _fail(t);
  else
    s_109 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_82 = t;
  int p_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_82 = t;
      if((PushChoice() == 0))
        {
          ATerm r_82 = t;
          int s_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(c_8, t);
              LocalPopChoice(s_82);
            }
          else
            {
              t = r_82;
              t = XtcQuery_2_0(d_8, e_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_82;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(r_0, t);
      LocalPopChoice(p_82);
    }
  else
    {
      t = o_82;
      {
        ATerm t_82 = t;
        int u_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(f_8, t);
            LocalPopChoice(u_82);
          }
        else
          {
            t = t_82;
            t = XtcQuery_2_0(g_8, h_8, t);
          }
      }
      {
        ATerm v_82 = t;
        int w_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(r_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(w_82);
          }
        else
          {
            t = v_82;
            {
              ATerm t_109 = NULL,u_109 = NULL;
              if(((t_109 != NULL) && (t_109 != t)))
                _fail(t);
              else
                t_109 = t;
              if(((u_109 != NULL) && (u_109 != t)))
                _fail(t);
              else
                u_109 = t;
              t = not_null(t_109);
              t = xtc_import_local_0_0(t);
              t = not_null(u_109);
              t = xtc_find_reg_local_1_0(r_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm xtc_find_reg_local_0_0 (ATerm t)
{
  t = xtc_find_reg_local_1_0(Hd_0_0, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm x_82 = t;
  int y_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(y_82);
    }
  else
    {
      t = x_82;
      {
        ATerm z_82 = t;
        int a_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_8 (ATerm t);
            static ATerm i_8 (ATerm t)
            {
              t = filter_1_0(g_131, t);
              return(t);
            }
            t = Cons_2_0(g_131, i_8, t);
            LocalPopChoice(a_83);
          }
        else
          {
            t = z_82;
            {
              ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
              if(((w_109 != NULL) && (w_109 != t)))
                _fail(t);
              else
                w_109 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((x_109 != NULL) && (x_109 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    x_109 = ATgetFirst((ATermList) t);
                  if(((y_109 != NULL) && (y_109 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    y_109 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(y_109);
              if(((z_109 != NULL) && (z_109 != t)))
                _fail(t);
              else
                z_109 = t;
              t = filter_1_0(g_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm b_83 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_83;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm a_110 = NULL;
  if(((a_110 != NULL) && (a_110 != t)))
    _fail(t);
  else
    a_110 = t;
  t = filter_1_0(j_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm c_83 = t;
  int d_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_110 = NULL;
      if(((c_110 != NULL) && (c_110 != t)))
        _fail(t);
      else
        c_110 = t;
      t = (ATerm) ATinsert(ATempty, term_d_20);
      {
        ATerm e_83 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_83;
          }
      }
      t = not_null(c_110);
      LocalPopChoice(d_83);
      {
        ATerm d_110 = NULL,e_110 = NULL;
        if(((e_110 != NULL) && (e_110 != t)))
          _fail(t);
        else
          e_110 = t;
        t = term_f_83;
        if(((d_110 != NULL) && (d_110 != t)))
          _fail(t);
        else
          d_110 = t;
        t = not_null(e_110);
        t = err_0_1(not_null(d_110), t);
        _fail(t);
      }
    }
  else
    {
      t = c_83;
      {
        ATerm i_110 = NULL;
        if(((i_110 != NULL) && (i_110 != t)))
          _fail(t);
        else
          i_110 = t;
      }
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL;
  if(((k_110 != NULL) && (k_110 != t)))
    _fail(t);
  else
    k_110 = t;
  if(((j_110 != NULL) && (j_110 != t)))
    _fail(t);
  else
    j_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_f_20), term_e_20), not_null(j_110));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(k_8, l_8, t);
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
  if(((n_110 != NULL) && (n_110 != t)))
    _fail(t);
  else
    n_110 = t;
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  t = not_null(n_110);
  if(((p_110 != NULL) && (p_110 != t)))
    _fail(t);
  else
    p_110 = t;
  t = SSL_explode_term(not_null(p_110));
  if(match_cons(t, sym__2))
    {
      ATerm g_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_83 = ATgetArgument(t, 1);
        if(((ATgetType(h_83) == AT_LIST) && !(ATisEmpty(h_83))))
          {
            if(((m_110 != NULL) && (m_110 != ATgetFirst((ATermList) h_83))))
              _fail(ATgetFirst((ATermList) h_83));
            else
              m_110 = ATgetFirst((ATermList) h_83);
            if(((l_110 != NULL) && (l_110 != (ATerm) ATgetNext((ATermList) h_83))))
              _fail((ATerm) ATgetNext((ATermList) h_83));
            else
              l_110 = (ATerm) ATgetNext((ATermList) h_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(m_110);
  return(t);
}
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,m_8 = NULL,d_12 = NULL;
  if(((x_110 != NULL) && (x_110 != t)))
    _fail(t);
  else
    x_110 = t;
  if(match_cons(t, sym__2))
    {
      if(((r_110 != NULL) && (r_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_110 = ATgetArgument(t, 0);
      if(((s_110 != NULL) && (s_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_110 != NULL) && (y_110 != t)))
    _fail(t);
  else
    y_110 = t;
  t = SSLgetAnnotations(not_null(x_110));
  if(((q_110 != NULL) && (q_110 != t)))
    _fail(t);
  else
    q_110 = t;
  t = not_null(r_110);
  t = z_100(t);
  if(((t_110 != NULL) && (t_110 != t)))
    _fail(t);
  else
    t_110 = t;
  t = not_null(s_110);
  t = a_101(t);
  if(((u_110 != NULL) && (u_110 != t)))
    _fail(t);
  else
    u_110 = t;
  if(((w_110 != NULL) && (w_110 != t)))
    _fail(t);
  else
    w_110 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_110), not_null(u_110));
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = SSLsetAnnotations(not_null(m_8), not_null(q_110));
  if(((v_110 != NULL) && (v_110 != t)))
    _fail(t);
  else
    v_110 = t;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm v_111 = NULL;
  if(((v_111 != NULL) && (v_111 != t)))
    _fail(t);
  else
    v_111 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm x_111 (ATerm t);
  static ATerm x_111 (ATerm t)
  {
    ATerm i_83 = t;
    int j_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,u_111 = NULL;
        if(((d_111 != NULL) && (d_111 != t)))
          _fail(t);
        else
          d_111 = t;
        if(match_cons(t, sym__2))
          {
            if(((e_111 != NULL) && (e_111 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_111 = ATgetArgument(t, 0);
            if(((l_111 != NULL) && (l_111 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(e_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_111 != NULL) && (f_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_111 = ATgetFirst((ATermList) t);
            if(((g_111 != NULL) && (g_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              g_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(l_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_111 != NULL) && (m_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_111 = ATgetFirst((ATermList) t);
            if(((n_111 != NULL) && (n_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(f_111);
        if(((p_111 != NULL) && (p_111 != t)))
          _fail(t);
        else
          p_111 = t;
        t = not_null(g_111);
        if(((o_111 != NULL) && (o_111 != t)))
          _fail(t);
        else
          o_111 = t;
        t = not_null(m_111);
        if(((p_111 != NULL) && (p_111 != t)))
          _fail(t);
        else
          p_111 = t;
        t = not_null(n_111);
        if(((q_111 != NULL) && (q_111 != t)))
          _fail(t);
        else
          q_111 = t;
        t = not_null(d_111);
        if(((u_111 != NULL) && (u_111 != t)))
          _fail(t);
        else
          u_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_111), not_null(q_111));
        t = x_111(t);
        if(((r_111 != NULL) && (r_111 != t)))
          _fail(t);
        else
          r_111 = t;
        LocalPopChoice(j_83);
      }
    else
      {
        t = i_83;
        t = _2_0(n_8, Nil_0_0, t);
      }
    return(t);
  }
  t = x_111(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL;
  if(((y_111 != NULL) && (y_111 != t)))
    _fail(t);
  else
    y_111 = t;
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  t = explode_string_0_0(t);
  if(((z_111 != NULL) && (z_111 != t)))
    _fail(t);
  else
    z_111 = t;
  t = not_null(c_112);
  if(((b_112 != NULL) && (b_112 != t)))
    _fail(t);
  else
    b_112 = t;
  t = not_null(c_43);
  t = explode_string_0_0(t);
  if(((a_112 != NULL) && (a_112 != t)))
    _fail(t);
  else
    a_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_111), not_null(a_112));
  t = left_match_0_0(t);
  t = not_null(y_111);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm d_112 = NULL;
  if(((d_112 != NULL) && (d_112 != t)))
    _fail(t);
  else
    d_112 = t;
  {
    ATerm k_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_112 = NULL,f_112 = NULL;
        t = not_null(d_112);
        if(((f_112 != NULL) && (f_112 != t)))
          _fail(t);
        else
          f_112 = t;
        t = term_m_83;
        if(((e_112 != NULL) && (e_112 != t)))
          _fail(t);
        else
          e_112 = t;
        t = not_null(f_112);
        t = string_starts_with_0_1(not_null(e_112), t);
        LocalPopChoice(l_83);
      }
    else
      {
        t = k_83;
        {
          ATerm g_112 = NULL,h_112 = NULL;
          t = not_null(d_112);
          if(((h_112 != NULL) && (h_112 != t)))
            _fail(t);
          else
            h_112 = t;
          t = term_n_83;
          if(((g_112 != NULL) && (g_112 != t)))
            _fail(t);
          else
            g_112 = t;
          t = not_null(h_112);
          t = string_starts_with_0_1(not_null(g_112), t);
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL;
  if(((j_112 != NULL) && (j_112 != t)))
    _fail(t);
  else
    j_112 = t;
  if(match_cons(t, sym_URL_1))
    {
      k_112 = ATgetArgument(t, 0);
      {
        ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
        t = not_null(k_112);
        if(((n_112 != NULL) && (n_112 != t)))
          _fail(t);
        else
          n_112 = t;
        t = is_url_http_0_0(t);
        if(((m_112 != NULL) && (m_112 != t)))
          _fail(t);
        else
          m_112 = t;
        if(((l_112 != NULL) && (l_112 != t)))
          _fail(t);
        else
          l_112 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_p_83), not_null(l_112));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm o_112 = NULL,p_112 = NULL;
          t = not_null(j_112);
          if(((p_112 != NULL) && (p_112 != t)))
            _fail(t);
          else
            p_112 = t;
          t = term_u_58;
          t = ReadFromFile_0_0(t);
          if(((o_112 != NULL) && (o_112 != t)))
            _fail(t);
          else
            o_112 = t;
        }
      else
        {
          ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((k_112 != NULL) && (k_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(k_112);
          if(((q_112 != NULL) && (q_112 != t)))
            _fail(t);
          else
            q_112 = t;
          t = not_null(j_112);
          if(((s_112 != NULL) && (s_112 != t)))
            _fail(t);
          else
            s_112 = t;
          t = not_null(q_112);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((r_112 != NULL) && (r_112 != t)))
            _fail(t);
          else
            r_112 = t;
        }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm p_113 (ATerm w_112, ATerm x_112, ATerm t);
  static ATerm q_113 (ATerm b_113, ATerm c_113, ATerm t);
  static ATerm p_113 (ATerm w_112, ATerm x_112, ATerm t)
  {
    ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL;
    t = not_null(w_112);
    if(((y_112 != NULL) && (y_112 != t)))
      _fail(t);
    else
      y_112 = t;
    t = not_null(x_112);
    if(((a_113 != NULL) && (a_113 != t)))
      _fail(t);
    else
      a_113 = t;
    t = p_0(t);
    if(((z_112 != NULL) && (z_112 != t)))
      _fail(t);
    else
      z_112 = t;
    {
      ATerm q_83 = t;
      int r_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(r_83);
        }
      else
        {
          t = q_83;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_112), not_null(z_112));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_112));
    return(t);
  }
  static ATerm q_113 (ATerm b_113, ATerm c_113, ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
    t = not_null(b_113);
    if(((d_113 != NULL) && (d_113 != t)))
      _fail(t);
    else
      d_113 = t;
    t = not_null(c_113);
    if(((f_113 != NULL) && (f_113 != t)))
      _fail(t);
    else
      f_113 = t;
    t = p_0(t);
    if(((e_113 != NULL) && (e_113 != t)))
      _fail(t);
    else
      e_113 = t;
    {
      ATerm s_83 = t;
      if((PushChoice() == 0))
        {
          ATerm t_83 = t;
          int u_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(u_83);
            }
          else
            {
              t = t_83;
              {
                ATerm v_83 = t;
                int w_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    LocalPopChoice(w_83);
                  }
                else
                  {
                    t = v_83;
                    {
                      ATerm g_113 = NULL;
                      if(((g_113 != NULL) && (g_113 != t)))
                        _fail(t);
                      else
                        g_113 = t;
                      if(((d_113 != NULL) && (d_113 != t)))
                        _fail(t);
                      else
                        d_113 = t;
                      t = not_null(g_113);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_113), not_null(e_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_113));
    return(t);
  }
  ATerm h_113 = NULL,i_113 = NULL;
  if(((h_113 != NULL) && (h_113 != t)))
    _fail(t);
  else
    h_113 = t;
  if(match_cons(t, sym_URL_1))
    {
      i_113 = ATgetArgument(t, 0);
      {
        ATerm x_83 = t;
        int y_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_113 = NULL,k_113 = NULL;
            t = not_null(i_113);
            if(((j_113 != NULL) && (j_113 != t)))
              _fail(t);
            else
              j_113 = t;
            t = not_null(h_113);
            if(((k_113 != NULL) && (k_113 != t)))
              _fail(t);
            else
              k_113 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(j_113));
            t = read_from_0_0(t);
            t = rename_to_1_0(p_0, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(j_113));
            LocalPopChoice(y_83);
          }
        else
          {
            t = x_83;
            {
              ATerm l_113 = NULL,m_113 = NULL;
              t = not_null(i_113);
              if(((l_113 != NULL) && (l_113 != t)))
                _fail(t);
              else
                l_113 = t;
              t = not_null(h_113);
              if(((m_113 != NULL) && (m_113 != t)))
                _fail(t);
              else
                m_113 = t;
              t = p_0(t);
              if(((l_113 != NULL) && (l_113 != t)))
                _fail(t);
              else
                l_113 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(l_113));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((i_113 != NULL) && (i_113 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm z_83 = t;
        int a_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_113(not_null(i_113), not_null(h_113), t);
            LocalPopChoice(a_84);
          }
        else
          {
            t = z_83;
            {
              ATerm b_84 = t;
              int c_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_113(not_null(i_113), not_null(h_113), t);
                  LocalPopChoice(c_84);
                }
              else
                {
                  t = b_84;
                  {
                    ATerm n_113 = NULL,o_113 = NULL;
                    t = not_null(i_113);
                    if(((n_113 != NULL) && (n_113 != t)))
                      _fail(t);
                    else
                      n_113 = t;
                    t = not_null(h_113);
                    if(((o_113 != NULL) && (o_113 != t)))
                      _fail(t);
                    else
                      o_113 = t;
                    t = p_0(t);
                    if(((n_113 != NULL) && (n_113 != t)))
                      _fail(t);
                    else
                      n_113 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_113));
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm r_113 = NULL;
  if(((r_113 != NULL) && (r_113 != t)))
    _fail(t);
  else
    r_113 = t;
  t = SSL_concat_strings(not_null(r_113));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm s_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_84 = ATgetFirst((ATermList) t);
      if(((s_113 != NULL) && (s_113 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(s_113);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm t_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((t_113 != NULL) && (t_113 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        t_113 = ATgetFirst((ATermList) t);
      {
        ATerm e_84 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_84) != AT_LIST) || !(ATisEmpty(e_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(t_113);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_84 = t;
  int g_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(g_84);
    }
  else
    {
      t = f_84;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm v_113 = NULL;
  if(((v_113 != NULL) && (v_113 != t)))
    _fail(t);
  else
    v_113 = t;
  t = SSL_implode_string(not_null(v_113));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm x_113 = NULL;
  if(((x_113 != NULL) && (x_113 != t)))
    _fail(t);
  else
    x_113 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm y_113 (ATerm t);
  static ATerm y_113 (ATerm t)
  {
    ATerm h_84 = t;
    int i_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        LocalPopChoice(i_84);
      }
    else
      {
        t = h_84;
        t = Cons_2_0(o_8, y_113, t);
      }
    return(t);
  }
  t = y_113(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm e_114 = NULL;
  if(((e_114 != NULL) && (e_114 != t)))
    _fail(t);
  else
    e_114 = t;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm f_114 = NULL;
  if(((f_114 != NULL) && (f_114 != t)))
    _fail(t);
  else
    f_114 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
  static ATerm p_8 (ATerm t);
  static ATerm p_8 (ATerm t)
  {
    t = Cons_2_0(q_123, q_8, t);
    {
      static ATerm s_8 (ATerm t);
      static ATerm s_8 (ATerm t)
      {
        if(((b_114 != NULL) && (b_114 != t)))
          _fail(t);
        else
          b_114 = t;
        return(t);
      }
      t = Cons_2_0(r_8, s_8, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(p_8, t);
  if(((d_114 != NULL) && (d_114 != t)))
    _fail(t);
  else
    d_114 = t;
  if(((c_114 != NULL) && (c_114 != t)))
    _fail(t);
  else
    c_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_114), not_null(b_114));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL;
  ATerm j_84 = t;
  int k_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_133, t);
      LocalPopChoice(k_84);
    }
  else
    {
      t = j_84;
      {
        ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
        if(((k_114 != NULL) && (k_114 != t)))
          _fail(t);
        else
          k_114 = t;
        if(((m_114 != NULL) && (m_114 != t)))
          _fail(t);
        else
          m_114 = t;
        t = not_null(k_114);
        if(((l_114 != NULL) && (l_114 != t)))
          _fail(t);
        else
          l_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_114), (ATerm) ATempty);
      }
    }
  if(((n_114 != NULL) && (n_114 != t)))
    _fail(t);
  else
    n_114 = t;
  if(match_cons(t, sym__2))
    {
      if(((o_114 != NULL) && (o_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_114 = ATgetArgument(t, 0);
      if(((r_114 != NULL) && (r_114 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_114);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(r_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((s_114 != NULL) && (s_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                s_114 = ATgetFirst((ATermList) t);
              if(((t_114 != NULL) && (t_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                t_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(r_114);
          if(((u_114 != NULL) && (u_114 != t)))
            _fail(t);
          else
            u_114 = t;
          t = not_null(n_114);
          if(((w_114 != NULL) && (w_114 != t)))
            _fail(t);
          else
            w_114 = t;
          t = not_null(u_114);
          t = list_tokenize_1_0(d_133, t);
          if(((v_114 != NULL) && (v_114 != t)))
            _fail(t);
          else
            v_114 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_114 != NULL) && (p_114 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_114 = ATgetFirst((ATermList) t);
          if(((q_114 != NULL) && (q_114 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm y_114 = NULL;
          t = not_null(o_114);
          if(((y_114 != NULL) && (y_114 != t)))
            _fail(t);
          else
            y_114 = t;
          t = (ATerm) ATinsert(ATempty, not_null(y_114));
        }
      else
        {
          ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((s_114 != NULL) && (s_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                s_114 = ATgetFirst((ATermList) t);
              if(((t_114 != NULL) && (t_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                t_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(o_114);
          if(((z_114 != NULL) && (z_114 != t)))
            _fail(t);
          else
            z_114 = t;
          t = not_null(r_114);
          if(((a_115 != NULL) && (a_115 != t)))
            _fail(t);
          else
            a_115 = t;
          t = not_null(n_114);
          if(((c_115 != NULL) && (c_115 != t)))
            _fail(t);
          else
            c_115 = t;
          t = not_null(a_115);
          t = list_tokenize_1_0(d_133, t);
          if(((b_115 != NULL) && (b_115 != t)))
            _fail(t);
          else
            b_115 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(b_115)), not_null(z_114));
        }
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm d_115 = NULL;
  if(((d_115 != NULL) && (d_115 != t)))
    _fail(t);
  else
    d_115 = t;
  t = SSL_explode_string(not_null(d_115));
  return(t);
}
ATerm string_tokenize_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = list_tokenize_1_0(c_133, t);
  t = map_1_0(implode_string_0_0, t);
  return(t);
}
ATerm string_tokenize_0_1 (ATerm d_46, ATerm t)
{
  static ATerm t_8 (ATerm t);
  static ATerm t_8 (ATerm t)
  {
    ATerm e_115 = NULL;
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      if(((e_115 != NULL) && (e_115 != t)))
        _fail(t);
      else
        e_115 = t;
      return(t);
    }
    if(((e_115 != NULL) && (e_115 != t)))
      _fail(t);
    else
      e_115 = t;
    t = not_null(d_46);
    t = fetch_1_0(u_8, t);
    return(t);
  }
  t = string_tokenize_1_0(t_8, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_115 != NULL) && (f_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_115 = ATgetArgument(t, 0);
      if(((g_115 != NULL) && (g_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_115);
  t = string_tokenize_0_1(not_null(f_115), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL;
  if(((i_115 != NULL) && (i_115 != t)))
    _fail(t);
  else
    i_115 = t;
  if(((h_115 != NULL) && (h_115 != t)))
    _fail(t);
  else
    h_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_79), not_null(h_115));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm j_115 = NULL;
  if(((j_115 != NULL) && (j_115 != t)))
    _fail(t);
  else
    j_115 = t;
  t = SSL_S_ISDIR(not_null(j_115));
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm k_115 = NULL;
  if(((k_115 != NULL) && (k_115 != t)))
    _fail(t);
  else
    k_115 = t;
  t = SSL_perror(not_null(k_115));
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_115 != NULL) && (l_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_115 = ATgetArgument(t, 0);
      if(((m_115 != NULL) && (m_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(l_115), not_null(m_115));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
static ATerm d_116 (ATerm s_115, ATerm t)
{
  ATerm t_115 = NULL,y_115 = NULL;
  t = not_null(s_115);
  if(((t_115 != NULL) && (t_115 != t)))
    _fail(t);
  else
    t_115 = t;
  t = SSL_filemode(not_null(t_115));
  if(match_cons(t, sym__2))
    {
      if(((y_115 != NULL) && (y_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_115 = ATgetArgument(t, 0);
      {
        ATerm l_84 = ATgetArgument(t, 1);
        if(((ATgetType(l_84) != AT_INT) || (ATgetInt((ATermInt) l_84) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(y_115);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm z_115 = NULL;
  if(((z_115 != NULL) && (z_115 != t)))
    _fail(t);
  else
    z_115 = t;
  {
    ATerm m_84 = t;
    int n_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(not_null(z_115), t);
        LocalPopChoice(n_84);
      }
    else
      {
        t = m_84;
        {
          ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
          t = not_null(z_115);
          if(((c_116 != NULL) && (c_116 != t)))
            _fail(t);
          else
            c_116 = t;
          t = not_null(z_115);
          if(((b_116 != NULL) && (b_116 != t)))
            _fail(t);
          else
            b_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_84, not_null(b_116));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_116 != NULL) && (e_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_116 = ATgetArgument(t, 0);
      if(((f_116 != NULL) && (f_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(e_116), not_null(f_116));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL;
  if(((h_116 != NULL) && (h_116 != t)))
    _fail(t);
  else
    h_116 = t;
  if(((g_116 != NULL) && (g_116 != t)))
    _fail(t);
  else
    g_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_116), (ATerm) ATinsert(ATempty, term_p_84));
  t = access_0_0(t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,r_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_116 != NULL) && (j_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_116 = ATgetArgument(t, 0);
      if(((i_116 != NULL) && (i_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_116 != NULL) && (r_116 != t)))
    _fail(t);
  else
    r_116 = t;
  {
    ATerm q_84 = t;
    int r_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_116 = NULL;
        if(((s_116 != NULL) && (s_116 != t)))
          _fail(t);
        else
          s_116 = t;
        t = not_null(i_116);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(s_116);
        LocalPopChoice(r_84);
        {
          ATerm t_116 = NULL,u_116 = NULL;
          if(((u_116 != NULL) && (u_116 != t)))
            _fail(t);
          else
            u_116 = t;
          t = not_null(j_116);
          t = base_filename_0_0(t);
          if(((t_116 != NULL) && (t_116 != t)))
            _fail(t);
          else
            t_116 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_116)), term_s_84), not_null(i_116));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = q_84;
        t = not_null(i_116);
      }
  }
  if(((k_116 != NULL) && (k_116 != t)))
    _fail(t);
  else
    k_116 = t;
  t = SSL_copy(not_null(j_116), not_null(k_116));
  return(t);
}
static ATerm d_117 (ATerm y_116, ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL;
  t = not_null(y_116);
  if(((a_117 != NULL) && (a_117 != t)))
    _fail(t);
  else
    a_117 = t;
  t = term_p_41;
  {
    ATerm t_84 = t;
    int u_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_84);
      }
    else
      {
        t = t_84;
        t = term_m_14;
      }
  }
  if(((z_116 != NULL) && (z_116 != t)))
    _fail(t);
  else
    z_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_58, not_null(z_116));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm v_84 = t;
  int w_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_41;
      t = get_config_0_0(t);
      LocalPopChoice(w_84);
    }
  else
    {
      t = v_84;
      t = term_m_14;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL;
  if(((b_117 != NULL) && (b_117 != t)))
    _fail(t);
  else
    b_117 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = d_117(not_null(b_117), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(b_117);
      t = copy_to_1_0(v_8, t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  if(match_cons(t, sym__2))
    {
      if(((e_117 != NULL) && (e_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_117 = ATgetArgument(t, 0);
      if(((f_117 != NULL) && (f_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(e_117), t);
  t = hashtable_remove_0_1(not_null(f_117), t);
  t = not_null(g_117);
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_117 != NULL) && (i_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_117 = ATgetArgument(t, 0);
      if(((j_117 != NULL) && (j_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_117 != NULL) && (k_117 != t)))
    _fail(t);
  else
    k_117 = t;
  {
    ATerm x_84 = t;
    int y_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_117), not_null(j_117));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_84 = ATgetFirst((ATermList) t);
            if(((h_117 != NULL) && (h_117 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              h_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_84);
        t = (ATerm) ATmakeAppl(sym__3, not_null(i_117), not_null(j_117), not_null(h_117));
        t = table_put_0_0(t);
      }
    else
      {
        t = x_84;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_117), not_null(j_117));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(k_117);
  return(t);
}
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL;
  if(((o_117 != NULL) && (o_117 != t)))
    _fail(t);
  else
    o_117 = t;
  t = t_111(t);
  if(((n_117 != NULL) && (n_117 != t)))
    _fail(t);
  else
    n_117 = t;
  {
    ATerm a_85 = t;
    int b_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_117), term_e_59);
        t = table_get_0_0(t);
        {
          ATerm c_85 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_85;
            }
        }
        LocalPopChoice(b_85);
      }
    else
      {
        t = a_85;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((m_117 != NULL) && (m_117 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        m_117 = ATgetFirst((ATermList) t);
      if(((l_117 != NULL) && (l_117 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(n_117), term_e_59, not_null(l_117));
  t = table_put_0_0(t);
  t = not_null(m_117);
  {
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
      if(((p_117 != NULL) && (p_117 != t)))
        _fail(t);
      else
        p_117 = t;
      if(((r_117 != NULL) && (r_117 != t)))
        _fail(t);
      else
        r_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_117), not_null(p_117));
      t = table_pop_rm_0_0(t);
      if(((q_117 != NULL) && (q_117 != t)))
        _fail(t);
      else
        q_117 = t;
      return(t);
    }
    t = map_1_0(w_8, t);
  }
  t = not_null(o_117);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm s_117 = NULL;
  if(((s_117 != NULL) && (s_117 != t)))
    _fail(t);
  else
    s_117 = t;
  t = SSL_remove(not_null(s_117));
  return(t);
}
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm d_85 = t;
  int e_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_115(t);
      t = r_115(t);
      LocalPopChoice(e_85);
    }
  else
    {
      t = d_85;
      t = r_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL;
  if(((u_117 != NULL) && (u_117 != t)))
    _fail(t);
  else
    u_117 = t;
  t = s_111(t);
  if(((t_117 != NULL) && (t_117 != t)))
    _fail(t);
  else
    t_117 = t;
  if(((w_117 != NULL) && (w_117 != t)))
    _fail(t);
  else
    w_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_117), term_e_59);
  {
    ATerm f_85 = t;
    int g_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(g_85);
      }
    else
      {
        t = f_85;
        t = (ATerm) ATempty;
      }
  }
  if(((v_117 != NULL) && (v_117 != t)))
    _fail(t);
  else
    v_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_117), term_e_59, (ATerm) ATinsert(CheckATermList(not_null(v_117)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(u_117);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_s_59;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_s_59;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL;
  static ATerm y_8 (ATerm t);
  static ATerm y_8 (ATerm t)
  {
    ATerm z_117 = NULL;
    if(((z_117 != NULL) && (z_117 != t)))
      _fail(t);
    else
      z_117 = t;
    {
      ATerm h_85 = t;
      int i_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_85;
          t = table_get_0_0(t);
          LocalPopChoice(i_85);
        }
      else
        {
          t = h_85;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_117 != NULL) && (y_117 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_117 = ATgetFirst((ATermList) t);
        if(((x_117 != NULL) && (x_117 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_117 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(y_117);
    t = map_1_0(z_8, t);
    t = not_null(z_117);
    t = end_scope_1_0(a_9, t);
    return(t);
  }
  t = begin_scope_1_0(x_8, t);
  t = restore_always_2_0(t_151, y_8, t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm b_9 (ATerm t);
  static ATerm b_9 (ATerm t)
  {
    ATerm k_85 = t;
    int l_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL;
        if(((a_118 != NULL) && (a_118 != t)))
          _fail(t);
        else
          a_118 = t;
        if(((c_118 != NULL) && (c_118 != t)))
          _fail(t);
        else
          c_118 = t;
        t = term_i_32;
        t = get_config_0_0(t);
        if(((b_118 != NULL) && (b_118 != t)))
          _fail(t);
        else
          b_118 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_118));
        LocalPopChoice(l_85);
      }
    else
      {
        t = k_85;
        t = term_u_58;
      }
    t = v_152(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(b_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm e_118 = NULL;
  if(((e_118 != NULL) && (e_118 != t)))
    _fail(t);
  else
    e_118 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(e_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(e_118);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL;
  if(((f_118 != NULL) && (f_118 != t)))
    _fail(t);
  else
    f_118 = t;
  if(((h_118 != NULL) && (h_118 != t)))
    _fail(t);
  else
    h_118 = t;
  t = string_to_int_0_0(t);
  if(((g_118 != NULL) && (g_118 != t)))
    _fail(t);
  else
    g_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_85, not_null(g_118));
  t = set_config_0_0(t);
  t = not_null(f_118);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_n_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_9, d_9, e_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm i_118 = NULL;
  if(((i_118 != NULL) && (i_118 != t)))
    _fail(t);
  else
    i_118 = t;
  t = SSL_string_to_int(not_null(i_118));
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm k_118 = NULL;
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(k_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(k_118);
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm l_118 = NULL;
  if(((l_118 != NULL) && (l_118 != t)))
    _fail(t);
  else
    l_118 = t;
  t = term_o_85;
  t = set_config_0_0(t);
  t = term_q_85;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_r_85;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL;
  if(((o_118 != NULL) && (o_118 != t)))
    _fail(t);
  else
    o_118 = t;
  if(((q_118 != NULL) && (q_118 != t)))
    _fail(t);
  else
    q_118 = t;
  t = string_to_int_0_0(t);
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_72, not_null(p_118));
  t = set_config_0_0(t);
  t = not_null(o_118);
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_118));
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_s_85;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm r_118 = NULL;
  if(((r_118 != NULL) && (r_118 != t)))
    _fail(t);
  else
    r_118 = t;
  t = term_t_85;
  t = set_config_0_0(t);
  t = term_u_85;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_v_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_85 = t;
  int x_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_9, g_9, h_9, t);
      LocalPopChoice(x_85);
    }
  else
    {
      t = w_85;
      {
        ATerm y_85 = t;
        int z_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_9, j_9, k_9, t);
            LocalPopChoice(z_85);
          }
        else
          {
            t = y_85;
            t = Option_3_0(l_9, m_9, n_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm a_86 = t;
  int b_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(b_86);
    }
  else
    {
      t = a_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm t_118 = NULL;
  if(((t_118 != NULL) && (t_118 != t)))
    _fail(t);
  else
    t_118 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(t_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(t_118);
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_41, not_null(x_118));
  t = set_config_0_0(t);
  t = not_null(w_118);
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_118));
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_c_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, p_9, q_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_118 = NULL;
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = term_e_86;
  t = set_config_0_0(t);
  t = term_f_86;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_g_86;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_86 = t;
  int i_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(i_86);
    }
  else
    {
      t = h_86;
      t = Option_3_0(r_9, s_9, t_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL;
  if(((c_119 != NULL) && (c_119 != t)))
    _fail(t);
  else
    c_119 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(c_119);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_119 != NULL) && (d_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_119 = ATgetFirst((ATermList) t);
          if(((e_119 != NULL) && (e_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_119);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_119 != NULL) && (f_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_119 = ATgetFirst((ATermList) t);
          if(((g_119 != NULL) && (g_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(d_119);
      if(((j_119 != NULL) && (j_119 != t)))
        _fail(t);
      else
        j_119 = t;
      t = not_null(f_119);
      if(((h_119 != NULL) && (h_119 != t)))
        _fail(t);
      else
        h_119 = t;
      t = not_null(g_119);
      if(((i_119 != NULL) && (i_119 != t)))
        _fail(t);
      else
        i_119 = t;
      t = not_null(c_119);
      if(((m_119 != NULL) && (m_119 != t)))
        _fail(t);
      else
        m_119 = t;
      t = not_null(j_119);
      t = k_0(t);
      t = not_null(m_119);
      if(((l_119 != NULL) && (l_119 != t)))
        _fail(t);
      else
        l_119 = t;
      t = not_null(h_119);
      t = m_0(t);
      if(((k_119 != NULL) && (k_119 != t)))
        _fail(t);
      else
        k_119 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(i_119)), not_null(k_119));
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm o_119 = NULL;
  if(((o_119 != NULL) && (o_119 != t)))
    _fail(t);
  else
    o_119 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(o_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(o_119);
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL;
  if(((r_119 != NULL) && (r_119 != t)))
    _fail(t);
  else
    r_119 = t;
  if(((t_119 != NULL) && (t_119 != t)))
    _fail(t);
  else
    t_119 = t;
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_32, not_null(s_119));
  t = set_config_0_0(t);
  t = not_null(r_119);
  if(((q_119 != NULL) && (q_119 != t)))
    _fail(t);
  else
    q_119 = t;
  if(((p_119 != NULL) && (p_119 != t)))
    _fail(t);
  else
    p_119 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_119));
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_j_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_9, v_9, w_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm k_86 = t;
  int l_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_86);
    }
  else
    {
      t = k_86;
      {
        ATerm m_86 = t;
        int n_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            LocalPopChoice(n_86);
          }
        else
          {
            t = m_86;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_119 = NULL;
  if(((u_119 != NULL) && (u_119 != t)))
    _fail(t);
  else
    u_119 = t;
  t = term_o_86;
  t = set_config_0_0(t);
  t = term_j_54;
  t = set_config_0_0(t);
  t = not_null(u_119);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_p_86;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(x_9, y_9, z_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm v_119 = NULL;
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  t = term_j_54;
  t = set_config_0_0(t);
  t = not_null(v_119);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_q_86;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(a_10, b_10, c_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm r_86 = t;
  int s_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(s_86);
    }
  else
    {
      t = r_86;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  static ATerm w_119 (ATerm t);
  static ATerm w_119 (ATerm t)
  {
    ATerm t_86 = t;
    int u_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(u_86);
      }
    else
      {
        t = t_86;
        t = Cons_2_0(f_123, w_119, t);
      }
    return(t);
  }
  t = w_119(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
  if(((a_120 != NULL) && (a_120 != t)))
    _fail(t);
  else
    a_120 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_119 = ATgetFirst((ATermList) t);
      z_119 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
        t = not_null(y_119);
        if(((b_120 != NULL) && (b_120 != t)))
          _fail(t);
        else
          b_120 = t;
        t = not_null(z_119);
        if(((c_120 != NULL) && (c_120 != t)))
          _fail(t);
        else
          c_120 = t;
        t = not_null(a_120);
        if(((e_120 != NULL) && (e_120 != t)))
          _fail(t);
        else
          e_120 = t;
        t = not_null(c_120);
        if(((g_120 != NULL) && (g_120 != t)))
          _fail(t);
        else
          g_120 = t;
        if(((k_120 != NULL) && (k_120 != t)))
          _fail(t);
        else
          k_120 = t;
        t = h_0(t);
        if(((h_120 != NULL) && (h_120 != t)))
          _fail(t);
        else
          h_120 = t;
        t = not_null(k_120);
        if(((j_120 != NULL) && (j_120 != t)))
          _fail(t);
        else
          j_120 = t;
        t = not_null(b_120);
        t = f_0(t);
        if(((i_120 != NULL) && (i_120 != t)))
          _fail(t);
        else
          i_120 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(h_120)), not_null(i_120));
        if(((f_120 != NULL) && (f_120 != t)))
          _fail(t);
        else
          f_120 = t;
        t = not_null(g_120);
        {
          static ATerm d_10 (ATerm t);
          static ATerm d_10 (ATerm t)
          {
            t = not_null(f_120);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_10, t);
        }
        if(((d_120 != NULL) && (d_120 != t)))
          _fail(t);
        else
          d_120 = t;
      }
    }
  else
    {
      ATerm l_120 = NULL,m_120 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(a_120);
      if(((m_120 != NULL) && (m_120 != t)))
        _fail(t);
      else
        m_120 = t;
      t = term_g_14;
      t = h_0(t);
      if(((l_120 != NULL) && (l_120 != t)))
        _fail(t);
      else
        l_120 = t;
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm o_120 = NULL;
  if(((o_120 != NULL) && (o_120 != t)))
    _fail(t);
  else
    o_120 = t;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(e_10, f_10, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL;
  if(((r_120 != NULL) && (r_120 != t)))
    _fail(t);
  else
    r_120 = t;
  if(((q_120 != NULL) && (q_120 != t)))
    _fail(t);
  else
    q_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_120)), term_v_86);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm p_120 = NULL;
  static ATerm k_10 (ATerm t);
  static ATerm k_10 (ATerm t)
  {
    ATerm s_120 = NULL,t_120 = NULL;
    if(((t_120 != NULL) && (t_120 != t)))
      _fail(t);
    else
      t_120 = t;
    t = m_145(t);
    if(((s_120 != NULL) && (s_120 != t)))
      _fail(t);
    else
      s_120 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(s_120)), term_t_72);
    t = echo_0_0(t);
    return(t);
  }
  ATerm w_86 = t;
  int x_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_86;
      t = get_config_0_0(t);
      if(((p_120 != NULL) && (p_120 != t)))
        _fail(t);
      else
        p_120 = t;
      LocalPopChoice(x_86);
    }
  else
    {
      t = w_86;
      {
        static ATerm g_10 (ATerm t);
        static ATerm g_10 (ATerm t)
        {
          static ATerm h_10 (ATerm t);
          static ATerm h_10 (ATerm t)
          {
            if(((p_120 != NULL) && (p_120 != t)))
              _fail(t);
            else
              p_120 = t;
            return(t);
          }
          t = Program_1_0(h_10, t);
          return(t);
        }
        t = option_defined_1_0(g_10, t);
      }
    }
  {
    static ATerm i_10 (ATerm t);
    static ATerm i_10 (ATerm t)
    {
      t = l_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(i_10, t);
  }
  t = term_z_86;
  t = echo_0_0(t);
  t = term_c_87;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(j_10, t);
  t = try_1_0(k_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,b_121 = NULL,l_10 = NULL,e_12 = NULL;
  if(((z_120 != NULL) && (z_120 != t)))
    _fail(t);
  else
    z_120 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((v_120 != NULL) && (v_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((b_121 != NULL) && (b_121 != t)))
    _fail(t);
  else
    b_121 = t;
  t = SSLgetAnnotations(not_null(z_120));
  if(((u_120 != NULL) && (u_120 != t)))
    _fail(t);
  else
    u_120 = t;
  t = not_null(v_120);
  t = z_108(t);
  if(((w_120 != NULL) && (w_120 != t)))
    _fail(t);
  else
    w_120 = t;
  if(((y_120 != NULL) && (y_120 != t)))
    _fail(t);
  else
    y_120 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_120));
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  t = SSLsetAnnotations(not_null(l_10), not_null(u_120));
  if(((x_120 != NULL) && (x_120 != t)))
    _fail(t);
  else
    x_120 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_121 = NULL,d_121 = NULL;
  static ATerm o_10 (ATerm t);
  static ATerm p_10 (ATerm t);
  static ATerm o_10 (ATerm t)
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      t = not_null(c_121);
      return(t);
    }
    t = short_description_1_0(q_10, t);
    return(t);
  }
  static ATerm p_10 (ATerm t)
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      t = not_null(c_121);
      return(t);
    }
    t = long_description_1_0(r_10, t);
    return(t);
  }
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  {
    ATerm d_87 = t;
    int g_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_86;
        t = get_config_0_0(t);
        if(((c_121 != NULL) && (c_121 != t)))
          _fail(t);
        else
          c_121 = t;
        LocalPopChoice(g_87);
      }
    else
      {
        t = d_87;
        {
          static ATerm m_10 (ATerm t);
          static ATerm m_10 (ATerm t)
          {
            static ATerm n_10 (ATerm t);
            static ATerm n_10 (ATerm t)
            {
              if(((c_121 != NULL) && (c_121 != t)))
                _fail(t);
              else
                c_121 = t;
              return(t);
            }
            t = Program_1_0(n_10, t);
            return(t);
          }
          t = option_defined_1_0(m_10, t);
        }
      }
  }
  t = not_null(d_121);
  t = default_system_usage_2_0(o_10, p_10, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm h_87 = t;
  int i_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(i_87);
    }
  else
    {
      t = h_87;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL;
  if(((f_121 != NULL) && (f_121 != t)))
    _fail(t);
  else
    f_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(f_121);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_121 != NULL) && (g_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_121 = ATgetFirst((ATermList) t);
          if(((h_121 != NULL) && (h_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_121);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_121 = NULL,j_121 = NULL,k_121 = NULL;
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  {
    ATerm j_87 = t;
    int k_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(k_87);
      }
    else
      {
        t = j_87;
        {
          ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL;
          if(((l_121 != NULL) && (l_121 != t)))
            _fail(t);
          else
            l_121 = t;
          if(((n_121 != NULL) && (n_121 != t)))
            _fail(t);
          else
            n_121 = t;
          t = not_null(l_121);
          if(((m_121 != NULL) && (m_121 != t)))
            _fail(t);
          else
            m_121 = t;
          t = (ATerm) ATinsert(ATempty, not_null(m_121));
        }
      }
  }
  if(((j_121 != NULL) && (j_121 != t)))
    _fail(t);
  else
    j_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, not_null(j_121));
  t = printnl_0_0(t);
  t = not_null(i_121);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_86;
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
  ATerm l_87 = t;
  int m_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(m_87);
    }
  else
    {
      t = l_87;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL;
  t = report_run_time_0_0(t);
  if(((p_121 != NULL) && (p_121 != t)))
    _fail(t);
  else
    p_121 = t;
  t = term_g_14;
  t = whoami_0_0(t);
  if(((o_121 != NULL) && (o_121 != t)))
    _fail(t);
  else
    o_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, term_n_87), not_null(o_121)));
  t = printnl_0_0(t);
  t = term_b_15;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_86;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm q_121 = NULL;
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  t = SSL_TicksToSeconds(not_null(q_121));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm r_121 = NULL,s_121 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_121 != NULL) && (r_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_121 = ATgetArgument(t, 0);
      if(((s_121 != NULL) && (s_121 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_87 = t;
    int p_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(r_121), not_null(s_121));
        LocalPopChoice(p_87);
      }
    else
      {
        t = o_87;
        t = SSL_addr(not_null(r_121), not_null(s_121));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm q_87 = t;
  int r_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = c_130(t);
      LocalPopChoice(r_87);
    }
  else
    {
      t = q_87;
      {
        ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL;
        if(((u_121 != NULL) && (u_121 != t)))
          _fail(t);
        else
          u_121 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_121 != NULL) && (v_121 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_121 = ATgetFirst((ATermList) t);
            if(((w_121 != NULL) && (w_121 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              w_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_121);
        if(((x_121 != NULL) && (x_121 != t)))
          _fail(t);
        else
          x_121 = t;
        t = not_null(w_121);
        if(((y_121 != NULL) && (y_121 != t)))
          _fail(t);
        else
          y_121 = t;
        t = not_null(u_121);
        if(((a_122 != NULL) && (a_122 != t)))
          _fail(t);
        else
          a_122 = t;
        if(((c_122 != NULL) && (c_122 != t)))
          _fail(t);
        else
          c_122 = t;
        t = not_null(y_121);
        t = foldr_2_0(c_130, d_130, t);
        if(((b_122 != NULL) && (b_122 != t)))
          _fail(t);
        else
          b_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_121), not_null(b_122));
        t = d_130(t);
        if(((z_121 != NULL) && (z_121 != t)))
          _fail(t);
        else
          z_121 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL;
  if(((g_122 != NULL) && (g_122 != t)))
    _fail(t);
  else
    g_122 = t;
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  t = not_null(g_122);
  if(((i_122 != NULL) && (i_122 != t)))
    _fail(t);
  else
    i_122 = t;
  t = SSL_explode_term(not_null(i_122));
  if(match_cons(t, sym__2))
    {
      ATerm s_87 = ATgetArgument(t, 0);
      if(((d_122 != NULL) && (d_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_122);
  if(((f_122 != NULL) && (f_122 != t)))
    _fail(t);
  else
    f_122 = t;
  t = not_null(d_122);
  t = foldr_2_0(z_134, a_135, t);
  if(((e_122 != NULL) && (e_122 != t)))
    _fail(t);
  else
    e_122 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_n_74;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(s_10, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_122 != NULL) && (j_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_122 = ATgetArgument(t, 0);
      if(((k_122 != NULL) && (k_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_122 != NULL) && (l_122 != t)))
    _fail(t);
  else
    l_122 = t;
  {
    ATerm t_87 = t;
    int u_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(j_122), not_null(k_122));
        LocalPopChoice(u_87);
      }
    else
      {
        t = t_87;
        t = SSL_gtr(not_null(j_122), not_null(k_122));
      }
  }
  t = not_null(l_122);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_122 = NULL;
  ATerm v_87 = t;
  int w_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL;
      if(((o_122 != NULL) && (o_122 != t)))
        _fail(t);
      else
        o_122 = t;
      if(match_cons(t, sym__2))
        {
          if(((p_122 != NULL) && (p_122 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_122 = ATgetArgument(t, 0);
          if(((q_122 != NULL) && (q_122 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(p_122);
      if(((n_122 != NULL) && (n_122 != t)))
        _fail(t);
      else
        n_122 = t;
      t = not_null(q_122);
      if(((n_122 != NULL) && (n_122 != t)))
        _fail(t);
      else
        n_122 = t;
      t = not_null(o_122);
      LocalPopChoice(w_87);
    }
  else
    {
      t = v_87;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm t_10 (ATerm t);
  static ATerm t_10 (ATerm t)
  {
    ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL;
    if(((r_122 != NULL) && (r_122 != t)))
      _fail(t);
    else
      r_122 = t;
    if(((t_122 != NULL) && (t_122 != t)))
      _fail(t);
    else
      t_122 = t;
    t = term_w_72;
    t = get_config_0_0(t);
    if(((s_122 != NULL) && (s_122 != t)))
      _fail(t);
    else
      s_122 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_122), term_b_15);
    t = geq_0_0(t);
    t = not_null(r_122);
    t = i_140(t);
    return(t);
  }
  t = try_1_0(t_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL,y_122 = NULL;
  if(((y_122 != NULL) && (y_122 != t)))
    _fail(t);
  else
    y_122 = t;
  t = run_time_0_0(t);
  if(((u_122 != NULL) && (u_122 != t)))
    _fail(t);
  else
    u_122 = t;
  t = not_null(y_122);
  if(((w_122 != NULL) && (w_122 != t)))
    _fail(t);
  else
    w_122 = t;
  t = term_g_14;
  t = whoami_0_0(t);
  if(((v_122 != NULL) && (v_122 != t)))
    _fail(t);
  else
    v_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_87), not_null(u_122)), term_e_15), not_null(v_122)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_n_74;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL;
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  t = term_z_87;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_87, term_a_88, not_null(z_122));
  t = table_put_0_0(t);
  t = not_null(a_123);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL,e_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((b_123 != NULL) && (b_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(b_123), not_null(t_59));
  if(((e_123 != NULL) && (e_123 != t)))
    _fail(t);
  else
    e_123 = t;
  if(((c_123 != NULL) && (c_123 != t)))
    _fail(t);
  else
    c_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(c_123));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((h_123 != NULL) && (h_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(h_123));
  if(((j_123 != NULL) && (j_123 != t)))
    _fail(t);
  else
    j_123 = t;
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(i_123));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_123 = NULL,l_123 = NULL,m_123 = NULL;
  if(((k_123 != NULL) && (k_123 != t)))
    _fail(t);
  else
    k_123 = t;
  if(((l_123 != NULL) && (l_123 != t)))
    _fail(t);
  else
    l_123 = t;
  t = table_hashtable_0_0(t);
  if(((m_123 != NULL) && (m_123 != t)))
    _fail(t);
  else
    m_123 = t;
  t = lookup_table_0_1(not_null(k_123), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(m_123);
  t = hashtable_remove_0_1(not_null(k_123), t);
  t = not_null(l_123);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm r_123 = NULL;
  if(((r_123 != NULL) && (r_123 != t)))
    _fail(t);
  else
    r_123 = t;
  t = SSL_exit(not_null(r_123));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,w_123 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_123 != NULL) && (s_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_123 = ATgetArgument(t, 0);
      if(((t_123 != NULL) && (t_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_123 != NULL) && (w_123 != t)))
    _fail(t);
  else
    w_123 = t;
  t = SSL_printnl(not_null(s_123), not_null(t_123));
  t = not_null(w_123);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm x_123 = NULL,a_124 = NULL,b_124 = NULL,e_124 = NULL,h_124 = NULL,i_124 = NULL,j_124 = NULL,v_10 = NULL,f_12 = NULL;
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((a_124 != NULL) && (a_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_124 != NULL) && (j_124 != t)))
    _fail(t);
  else
    j_124 = t;
  t = SSLgetAnnotations(not_null(i_124));
  if(((x_123 != NULL) && (x_123 != t)))
    _fail(t);
  else
    x_123 = t;
  t = not_null(a_124);
  t = a_109(t);
  if(((b_124 != NULL) && (b_124 != t)))
    _fail(t);
  else
    b_124 = t;
  if(((h_124 != NULL) && (h_124 != t)))
    _fail(t);
  else
    h_124 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_124));
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = SSLsetAnnotations(not_null(v_10), not_null(x_123));
  if(((e_124 != NULL) && (e_124 != t)))
    _fail(t);
  else
    e_124 = t;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm m_124 = NULL;
  if(((m_124 != NULL) && (m_124 != t)))
    _fail(t);
  else
    m_124 = t;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm n_124 = NULL;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  static ATerm o_124 (ATerm t);
  static ATerm o_124 (ATerm t)
  {
    ATerm b_88 = t;
    int c_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_123, w_10, t);
        LocalPopChoice(c_88);
      }
    else
      {
        t = b_88;
        t = Cons_2_0(x_10, o_124, t);
      }
    return(t);
  }
  t = o_124(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  t = fetch_1_0(c_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL;
  if(((q_124 != NULL) && (q_124 != t)))
    _fail(t);
  else
    q_124 = t;
  if(((p_124 != NULL) && (p_124 != t)))
    _fail(t);
  else
    p_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_53, not_null(p_124));
  t = table_get_0_0(t);
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm d_88 = t;
  int e_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_114(t);
      LocalPopChoice(e_88);
    }
  else
    {
      t = d_88;
      {
        ATerm s_124 = NULL,t_124 = NULL;
        if(((s_124 != NULL) && (s_124 != t)))
          _fail(t);
        else
          s_124 = t;
        if(((t_124 != NULL) && (t_124 != t)))
          _fail(t);
        else
          t_124 = t;
      }
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_g_88;
  t = set_config_0_0(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_h_88;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm u_124 = NULL;
  if(((u_124 != NULL) && (u_124 != t)))
    _fail(t);
  else
    u_124 = t;
  t = term_g_88;
  t = set_config_0_0(t);
  t = term_j_88;
  t = set_config_0_0(t);
  t = term_k_88;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_l_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_88 = t;
  int n_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_10, z_10, a_11, t);
      LocalPopChoice(n_88);
    }
  else
    {
      t = m_88;
      t = Option_3_0(b_11, c_11, d_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm v_124 = NULL,w_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_124 != NULL) && (v_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_124 = ATgetArgument(t, 0);
      if(((w_124 != NULL) && (w_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(v_124), t);
  t = hashtable_get_0_1(not_null(w_124), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((y_124 != NULL) && (y_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_124 = ATgetArgument(t, 0);
      if(((z_124 != NULL) && (z_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_124 = ATgetArgument(t, 1);
      if(((x_124 != NULL) && (x_124 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_124 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((a_125 != NULL) && (a_125 != t)))
    _fail(t);
  else
    a_125 = t;
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_124), not_null(z_124));
  {
    ATerm o_88 = t;
    int p_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(p_88);
      }
    else
      {
        t = o_88;
        t = (ATerm) ATempty;
      }
  }
  if(((b_125 != NULL) && (b_125 != t)))
    _fail(t);
  else
    b_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(y_124), not_null(z_124), (ATerm) ATinsert(CheckATermList(not_null(b_125)), not_null(x_124)));
  t = table_put_0_0(t);
  t = not_null(a_125);
  return(t);
}
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL;
  if(((e_125 != NULL) && (e_125 != t)))
    _fail(t);
  else
    e_125 = t;
  t = term_g_14;
  t = i_145(t);
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_87, term_b_87, not_null(d_125));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_125 = NULL,n_125 = NULL,o_125 = NULL;
  if(((g_125 != NULL) && (g_125 != t)))
    _fail(t);
  else
    g_125 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(g_125);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_125 != NULL) && (n_125 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_125 = ATgetFirst((ATermList) t);
          if(((o_125 != NULL) && (o_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_125);
      if(((q_125 != NULL) && (q_125 != t)))
        _fail(t);
      else
        q_125 = t;
      t = not_null(o_125);
      if(((p_125 != NULL) && (p_125 != t)))
        _fail(t);
      else
        p_125 = t;
      t = not_null(g_125);
      if(((t_125 != NULL) && (t_125 != t)))
        _fail(t);
      else
        t_125 = t;
      t = not_null(q_125);
      t = b_0(t);
      t = not_null(t_125);
      if(((s_125 != NULL) && (s_125 != t)))
        _fail(t);
      else
        s_125 = t;
      t = term_g_14;
      t = c_0(t);
      if(((r_125 != NULL) && (r_125 != t)))
        _fail(t);
      else
        r_125 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_125)), not_null(r_125));
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm v_125 = NULL;
  if(((v_125 != NULL) && (v_125 != t)))
    _fail(t);
  else
    v_125 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(v_125);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(v_125);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(v_125);
        }
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_r_88;
  t = set_config_0_0(t);
  t = term_s_88;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_t_88;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(e_11, f_11, g_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((w_125 != NULL) && (w_125 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        w_125 = ATgetFirst((ATermList) t);
      if(((x_125 != NULL) && (x_125 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        x_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(x_125)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_125)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL,h_11 = NULL,g_12 = NULL;
  if(((f_126 != NULL) && (f_126 != t)))
    _fail(t);
  else
    f_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((z_125 != NULL) && (z_125 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        z_125 = ATgetFirst((ATermList) t);
      if(((a_126 != NULL) && (a_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((g_126 != NULL) && (g_126 != t)))
    _fail(t);
  else
    g_126 = t;
  t = SSLgetAnnotations(not_null(f_126));
  if(((y_125 != NULL) && (y_125 != t)))
    _fail(t);
  else
    y_125 = t;
  t = not_null(z_125);
  t = u_100(t);
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  t = not_null(a_126);
  t = v_100(t);
  if(((c_126 != NULL) && (c_126 != t)))
    _fail(t);
  else
    c_126 = t;
  if(((e_126 != NULL) && (e_126 != t)))
    _fail(t);
  else
    e_126 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(c_126)), not_null(b_126));
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = SSLsetAnnotations(not_null(h_11), not_null(y_125));
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm h_126 = NULL,i_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_126 != NULL) && (h_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_126 = ATgetArgument(t, 0);
      if(((i_126 != NULL) && (i_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_53, not_null(h_126), not_null(i_126));
  t = table_put_0_0(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL;
  if(((n_126 != NULL) && (n_126 != t)))
    _fail(t);
  else
    n_126 = t;
  if(((p_126 != NULL) && (p_126 != t)))
    _fail(t);
  else
    p_126 = t;
  if(((o_126 != NULL) && (o_126 != t)))
    _fail(t);
  else
    o_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_86, not_null(o_126));
  t = set_config_0_0(t);
  t = not_null(n_126);
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  if(((l_126 != NULL) && (l_126 != t)))
    _fail(t);
  else
    l_126 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_126));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm q_126 = NULL;
  if(((q_126 != NULL) && (q_126 != t)))
    _fail(t);
  else
    q_126 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm k_126 = NULL;
  static ATerm k_11 (ATerm t);
  static ATerm k_11 (ATerm t)
  {
    ATerm u_88 = t;
    int v_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_88 = t;
        int x_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(x_88);
          }
        else
          {
            t = w_88;
            t = g_145(t);
            t = Cons_2_0(l_11, k_11, t);
          }
        LocalPopChoice(v_88);
      }
    else
      {
        t = u_88;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((k_126 != NULL) && (k_126 != t)))
    _fail(t);
  else
    k_126 = t;
  {
    static ATerm i_11 (ATerm t);
    static ATerm i_11 (ATerm t)
    {
      t = term_y_88;
      t = g_145(t);
      return(t);
    }
    t = try_1_0(i_11, t);
  }
  t = not_null(k_126);
  t = Cons_2_0(j_11, k_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm s_126 = NULL,t_126 = NULL,u_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((s_126 != NULL) && (s_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(s_126), not_null(o_59), not_null(p_59));
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  if(((t_126 != NULL) && (t_126 != t)))
    _fail(t);
  else
    t_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(t_126));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t)
{
  ATerm v_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((v_126 != NULL) && (v_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(v_126), not_null(r_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL;
  t = SSL_hashtable_create(not_null(w_59), not_null(x_59));
  if(((x_126 != NULL) && (x_126 != t)))
    _fail(t);
  else
    x_126 = t;
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(w_126));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL;
  if(((b_127 != NULL) && (b_127 != t)))
    _fail(t);
  else
    b_127 = t;
  t = term_z_88;
  if(((y_126 != NULL) && (y_126 != t)))
    _fail(t);
  else
    y_126 = t;
  t = not_null(b_127);
  if(((a_127 != NULL) && (a_127 != t)))
    _fail(t);
  else
    a_127 = t;
  t = term_a_89;
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  t = not_null(a_127);
  t = new_hashtable_0_2(not_null(y_126), not_null(z_126), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL;
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = new_hashtable_0_0(t);
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  t = not_null(f_127);
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(c_127), not_null(d_127), t);
  t = not_null(e_127);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL;
  t = SSL_table_hashtable();
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  if(((g_127 != NULL) && (g_127 != t)))
    _fail(t);
  else
    g_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(g_127));
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm b_89 = t;
    int c_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(l_56), t);
        LocalPopChoice(c_89);
      }
    else
      {
        t = b_89;
        {
          ATerm i_127 = NULL,l_127 = NULL;
          if(((i_127 != NULL) && (i_127 != t)))
            _fail(t);
          else
            i_127 = t;
          if(((l_127 != NULL) && (l_127 != t)))
            _fail(t);
          else
            l_127 = t;
          t = not_null(l_56);
          t = table_create_0_0(t);
          t = not_null(l_127);
          t = hashtable_get_0_1(not_null(l_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,q_127 = NULL,t_127 = NULL;
  if(((t_127 != NULL) && (t_127 != t)))
    _fail(t);
  else
    t_127 = t;
  if(match_cons(t, sym__3))
    {
      if(((m_127 != NULL) && (m_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_127 = ATgetArgument(t, 0);
      if(((n_127 != NULL) && (n_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_127 = ATgetArgument(t, 1);
      if(((q_127 != NULL) && (q_127 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(m_127), t);
  t = hashtable_put_0_2(not_null(n_127), not_null(q_127), t);
  t = not_null(t_127);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL;
  if(((x_127 != NULL) && (x_127 != t)))
    _fail(t);
  else
    x_127 = t;
  t = term_d_89;
  t = table_put_0_0(t);
  t = not_null(x_127);
  {
    static ATerm m_11 (ATerm t);
    static ATerm m_11 (ATerm t)
    {
      ATerm e_89 = t;
      int f_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(f_89);
        }
      else
        {
          t = e_89;
          {
            ATerm g_89 = t;
            int h_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(h_89);
              }
            else
              {
                t = g_89;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_11, t);
  }
  {
    static ATerm n_11 (ATerm t);
    static ATerm n_11 (ATerm t)
    {
      ATerm i_89 = t;
      int j_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm c_128 (ATerm y_127, ATerm t);
          static ATerm c_128 (ATerm y_127, ATerm t)
          {
            ATerm z_127 = NULL;
            t = not_null(y_127);
            if(((z_127 != NULL) && (z_127 != t)))
              _fail(t);
            else
              z_127 = t;
            t = not_null(y_127);
            {
              ATerm k_89 = t;
              int l_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_88;
                  t = get_config_0_0(t);
                  LocalPopChoice(l_89);
                }
              else
                {
                  t = k_89;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(z_127);
            t = e_145(t);
            t = term_n_74;
            t = exit_0_0(t);
            return(t);
          }
          ATerm a_128 = NULL;
          if(((a_128 != NULL) && (a_128 != t)))
            _fail(t);
          else
            a_128 = t;
          {
            ATerm m_89 = t;
            int n_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_128(not_null(a_128), t);
                LocalPopChoice(n_89);
              }
            else
              {
                t = m_89;
                {
                  ATerm b_128 = NULL;
                  t = not_null(a_128);
                  if(((b_128 != NULL) && (b_128 != t)))
                    _fail(t);
                  else
                    b_128 = t;
                  t = term_f_88;
                  t = get_config_0_0(t);
                  t = not_null(b_128);
                  t = f_145(t);
                  t = term_n_74;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(j_89);
        }
      else
        {
          t = i_89;
          {
            static ATerm o_11 (ATerm t);
            static ATerm o_11 (ATerm t)
            {
              static ATerm p_11 (ATerm t);
              static ATerm p_11 (ATerm t)
              {
                if(((v_127 != NULL) && (v_127 != t)))
                  _fail(t);
                else
                  v_127 = t;
                return(t);
              }
              t = Undefined_1_0(p_11, t);
              return(t);
            }
            t = option_defined_1_0(o_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_127)), term_o_89));
          t = printnl_0_0(t);
          t = e_145(t);
          t = term_b_15;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(n_11, t);
  }
  if(((w_127 != NULL) && (w_127 != t)))
    _fail(t);
  else
    w_127 = t;
  t = term_a_87;
  t = table_destroy_0_0(t);
  t = not_null(w_127);
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(g_143, h_143, i_143, t);
  t = store_options_0_0(t);
  t = j_143(t);
  {
    ATerm p_89 = t;
    int q_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_89);
      }
    else
      {
        t = p_89;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t)
{
  t = option_wrap_5_0(c_143, d_143, system_about_0_0, e_143, f_143, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm e_128 = NULL;
  if(((e_128 != NULL) && (e_128 != t)))
    _fail(t);
  else
    e_128 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_143, system_usage_0_0, q_11, b_143, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t)
{
  static ATerm r_11 (ATerm t);
  static ATerm r_11 (ATerm t)
  {
    ATerm r_89 = t;
    int s_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_152(t);
        LocalPopChoice(s_89);
      }
    else
      {
        t = r_89;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(r_11, g_152, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t)
{
  static ATerm s_11 (ATerm t);
  static ATerm t_11 (ATerm t);
  static ATerm s_11 (ATerm t)
  {
    ATerm t_89 = t;
    int u_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_152(t);
        LocalPopChoice(u_89);
      }
    else
      {
        t = t_89;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm t_11 (ATerm t)
  {
    t = xtc_io_1_0(p_152, t);
    return(t);
  }
  t = xtc_wrap_2_0(s_11, t_11, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, m_152, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = xtc_io_transform_1_0(xtc_convert_repository_0_0, t);
  return(t);
}
ATerm main_xtc_migrate_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(u_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_xtc_migrate_0_0(t);
  return(t);
}
