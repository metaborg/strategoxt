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
static ATerm term_p_89;
static ATerm term_e_89;
static ATerm term_b_89;
static ATerm term_a_89;
static ATerm term_z_88;
static ATerm term_u_88;
static ATerm term_t_88;
static ATerm term_s_88;
static ATerm term_r_88;
static ATerm term_m_88;
static ATerm term_l_88;
static ATerm term_k_88;
static ATerm term_j_88;
static ATerm term_i_88;
static ATerm term_h_88;
static ATerm term_g_88;
static ATerm term_b_88;
static ATerm term_a_88;
static ATerm term_z_87;
static ATerm term_o_87;
static ATerm term_d_87;
static ATerm term_c_87;
static ATerm term_b_87;
static ATerm term_a_87;
static ATerm term_z_86;
static ATerm term_w_86;
static ATerm term_r_86;
static ATerm term_q_86;
static ATerm term_p_86;
static ATerm term_k_86;
static ATerm term_h_86;
static ATerm term_g_86;
static ATerm term_f_86;
static ATerm term_e_86;
static ATerm term_d_86;
static ATerm term_w_85;
static ATerm term_v_85;
static ATerm term_u_85;
static ATerm term_t_85;
static ATerm term_s_85;
static ATerm term_r_85;
static ATerm term_q_85;
static ATerm term_o_85;
static ATerm term_n_85;
static ATerm term_k_85;
static ATerm term_t_84;
static ATerm term_q_84;
static ATerm term_p_84;
static ATerm term_j_83;
static ATerm term_g_83;
static ATerm term_f_83;
static ATerm term_e_83;
static ATerm term_d_83;
static ATerm term_w_82;
static ATerm term_s_81;
static ATerm term_l_81;
static ATerm term_h_80;
static ATerm term_w_79;
static ATerm term_o_79;
static ATerm term_m_79;
static ATerm term_h_79;
static ATerm term_u_74;
static ATerm term_o_74;
static ATerm term_n_72;
static ATerm term_m_72;
static ATerm term_l_72;
static ATerm term_f_72;
static ATerm term_e_72;
static ATerm term_d_72;
static ATerm term_s_71;
static ATerm term_p_71;
static ATerm term_o_71;
static ATerm term_l_71;
static ATerm term_a_71;
static ATerm term_z_70;
static ATerm term_p_70;
static ATerm term_o_70;
static ATerm term_l_70;
static ATerm term_k_70;
static ATerm term_j_70;
static ATerm term_g_70;
static ATerm term_f_70;
static ATerm term_v_69;
static ATerm term_u_69;
static ATerm term_z_68;
static ATerm term_h_66;
static ATerm term_v_65;
static ATerm term_u_65;
static ATerm term_t_65;
static ATerm term_b_65;
static ATerm term_r_64;
static ATerm term_n_64;
static ATerm term_e_60;
static ATerm term_d_60;
static ATerm term_c_60;
static ATerm term_z_59;
static ATerm term_y_59;
static ATerm term_v_59;
static ATerm term_m_59;
static ATerm term_l_59;
static ATerm term_k_59;
static ATerm term_a_59;
static ATerm term_x_58;
static ATerm term_n_58;
static ATerm term_w_56;
static ATerm term_v_56;
static ATerm term_u_56;
static ATerm term_r_56;
static ATerm term_q_56;
static ATerm term_p_56;
static ATerm term_o_56;
static ATerm term_j_56;
static ATerm term_y_55;
static ATerm term_q_55;
static ATerm term_z_54;
static ATerm term_y_54;
static ATerm term_o_54;
static ATerm term_h_54;
static ATerm term_g_54;
static ATerm term_d_53;
static ATerm term_c_53;
static ATerm term_f_52;
static ATerm term_z_50;
static ATerm term_y_50;
static ATerm term_b_50;
static ATerm term_p_49;
static ATerm term_b_49;
static ATerm term_z_48;
static ATerm term_z_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_j_46;
static ATerm term_q_42;
static ATerm term_p_42;
static ATerm term_o_42;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_t_41;
static ATerm term_q_41;
static ATerm term_p_41;
static ATerm term_o_41;
static ATerm term_n_41;
static ATerm term_m_41;
static ATerm term_i_41;
static ATerm term_e_41;
static ATerm term_p_40;
static ATerm term_k_40;
static ATerm term_w_34;
static ATerm term_t_34;
static ATerm term_q_33;
static ATerm term_p_33;
static ATerm term_o_33;
static ATerm term_a_33;
static ATerm term_z_32;
static ATerm term_y_32;
static ATerm term_x_32;
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_i_32;
static ATerm term_l_31;
static ATerm term_k_31;
static ATerm term_j_31;
static ATerm term_i_31;
static ATerm term_h_31;
static ATerm term_g_31;
static ATerm term_x_30;
static ATerm term_q_29;
static ATerm term_p_29;
static ATerm term_o_29;
static ATerm term_n_29;
static ATerm term_m_29;
static ATerm term_l_29;
static ATerm term_k_26;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_w_21;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_w_18;
static ATerm term_s_18;
static ATerm term_n_18;
static ATerm term_j_18;
static ATerm term_b_18;
static ATerm term_a_18;
static ATerm term_v_17;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_o_17;
static ATerm term_i_17;
static ATerm term_h_17;
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
static ATerm term_j_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_g_15;
static ATerm term_f_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_b_15;
static ATerm term_a_15;
static ATerm term_z_14;
static ATerm term_y_14;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_w_13;
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_i_13;
static ATerm term_h_13;
static ATerm term_g_13;
static ATerm term_f_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_o_12;
static ATerm term_k_12;
static ATerm term_j_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_o_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_String_1, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Some_1, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_File_1, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Input_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Some_1, term_d_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_t_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Type_1, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Some_1, term_n_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Default_1, term_p_29);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Some_1, term_q_29);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_k_31);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Some_1, term_s_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_String_1, term_v_32);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Some_1, term_w_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_File_1, term_x_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Output_1, term_y_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Some_1, term_z_32);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Streams_3, term_e_21, term_a_33, term_v_17);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Exec_1, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_p_33);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_o_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_p_42, term_q_17);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_String_1, term_p_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_q_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_String_1, term_u_56);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_v_56);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym_String_1, term_n_58);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_x_58);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym_String_1, term_k_59);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_l_59);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(sym_String_1, term_v_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_y_59);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym_String_1, term_c_60);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_56, term_d_60);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_n_64);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym_Template_2, term_b_65, term_v_17);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_r_64, term_t_65);
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_f_83);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(sym__2, term_d_53, term_b_50);
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(sym__2, term_s_71, term_d_72);
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_72);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_q_17);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(sym__2, term_e_86, term_q_17);
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(sym__2, term_t_41, term_q_17);
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(sym__2, term_b_87, term_c_87);
  ATprotect(&(term_o_87));
  term_o_87 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(sym__2, term_g_88, term_q_17);
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym__2, term_j_88, term_q_17);
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(sym__2, term_r_88, term_q_17);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(sym__3, term_b_87, term_c_87, (ATerm) ATempty);
  ATprotect(&(term_p_89));
  term_p_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm write_to_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_23 (ATerm s_22, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
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
static ATerm l_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm exec_http_0_1 (ATerm x_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm j_29 (ATerm p_28, ATerm q_28, ATerm t);
static ATerm k_29 (ATerm a_29, ATerm b_29, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm n_30 (ATerm r_29, ATerm s_29, ATerm t);
static ATerm o_30 (ATerm c_30, ATerm d_30, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm q_32 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t);
static ATerm r_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm m_35 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm e_33, ATerm f_33, ATerm g_33, ATerm h_33, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t);
static ATerm l_47 (ATerm w_41, ATerm x_41, ATerm y_41, ATerm z_41, ATerm a_42, ATerm t);
static ATerm m_47 (ATerm m_42, ATerm n_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm t);
static ATerm n_47 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm l_43, ATerm m_43, ATerm t);
static ATerm o_47 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm b_44, ATerm c_44, ATerm t);
static ATerm p_47 (ATerm l_44, ATerm m_44, ATerm n_44, ATerm o_44, ATerm p_44, ATerm t);
static ATerm q_47 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm t);
static ATerm r_47 (ATerm p_45, ATerm q_45, ATerm r_45, ATerm s_45, ATerm t_45, ATerm t);
static ATerm w_47 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm p_46, ATerm q_46, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm k_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm j_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm h_3, ATerm i_3, ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm j_63 (ATerm i_60, ATerm j_60, ATerm k_60, ATerm t);
static ATerm l_63 (ATerm x_60, ATerm y_60, ATerm t);
static ATerm m_63 (ATerm k_61, ATerm t);
static ATerm n_63 (ATerm p_61, ATerm t);
static ATerm o_63 (ATerm u_61, ATerm v_61, ATerm w_61, ATerm t);
static ATerm p_63 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm w_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t);
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm m_109 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t);
ATerm err_0_1 (ATerm v_78, ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t);
ATerm dbg_0_1 (ATerm y_78, ATerm t);
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t);
static ATerm p_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm u_0, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t);
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
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
static ATerm j_103 (ATerm a_103, ATerm b_103, ATerm t);
static ATerm k_103 (ATerm e_103, ATerm t);
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
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t);
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
ATerm stderr_0_0 (ATerm t);
ATerm stdout_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
ATerm get_last_error_0_0 (ATerm t);
ATerm rename_file_0_0 (ATerm t);
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t);
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
static ATerm f_116 (ATerm y_115, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
static ATerm f_117 (ATerm a_117, ATerm t);
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
ATerm main_test3_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  t = xtc_new_file_0_0(t);
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), not_null(g_22));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_22));
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(i_22));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL,n_22 = NULL;
        t = not_null(l_22);
        if(((n_22 != NULL) && (n_22 != t)))
          _fail(t);
        else
          n_22 = t;
        t = not_null(l_22);
        if(((m_22 != NULL) && (m_22 != t)))
          _fail(t);
        else
          m_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), term_j_12);
        t = open_stream_0_0(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        {
          ATerm o_22 = NULL,p_22 = NULL;
          t = not_null(l_22);
          if(((p_22 != NULL) && (p_22 != t)))
            _fail(t);
          else
            p_22 = t;
          t = not_null(l_22);
          if(((o_22 != NULL) && (o_22 != t)))
            _fail(t);
          else
            o_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_12, not_null(o_22));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = read_from_stream_0_0(t);
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = not_null(k_22);
  t = fclose_0_0(t);
  t = not_null(j_22);
  return(t);
}
static ATerm g_23 (ATerm s_22, ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  t = not_null(s_22);
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  t = not_null(s_22);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = not_null(w_22);
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = SSL_explode_term(not_null(y_22));
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_22);
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = not_null(t_22);
  t = concat_0_0(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
            t = not_null(z_22);
            if(((c_23 != NULL) && (c_23 != t)))
              _fail(t);
            else
              c_23 = t;
            t = not_null(a_23);
            if(((d_23 != NULL) && (d_23 != t)))
              _fail(t);
            else
              d_23 = t;
            t = not_null(b_23);
            if(((f_23 != NULL) && (f_23 != t)))
              _fail(t);
            else
              f_23 = t;
            t = not_null(c_23);
            {
              static ATerm a_0 (ATerm t);
              static ATerm a_0 (ATerm t)
              {
                t = not_null(d_23);
                return(t);
              }
              t = at_end_1_0(a_0, t);
            }
            if(((e_23 != NULL) && (e_23 != t)))
              _fail(t);
            else
              e_23 = t;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = g_23(not_null(b_23), t);
          }
      }
    }
  else
    {
      t = g_23(not_null(b_23), t);
    }
  return(t);
}
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  static ATerm d_0 (ATerm t);
  static ATerm d_0 (ATerm t)
  {
    t = r_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(i_23));
    t = execvp_0_0(t);
    t = term_o_12;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((h_23 != NULL) && (h_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_23 = ATgetArgument(t, 0);
      if(((i_23 != NULL) && (i_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(d_0, t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm k_23 = NULL;
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(g_0, t);
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
  ATerm l_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_23 != NULL) && (l_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_23 = ATgetArgument(t, 0);
      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(l_23), not_null(m_23));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_23 = ATgetArgument(t, 0);
      if(((o_23 != NULL) && (o_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(n_23), not_null(o_23));
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
  ATerm p_23 = NULL;
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = SSL_int_to_string(not_null(p_23));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_23 = ATgetArgument(t, 0);
      {
        ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
        t = not_null(s_23);
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = not_null(r_23);
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        if(((z_23 != NULL) && (z_23 != t)))
          _fail(t);
        else
          z_23 = t;
        t = not_null(v_23);
        t = int_to_string_0_0(t);
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), not_null(y_23)), term_p_12);
        t = concat_strings_0_0(t);
        if(((w_23 != NULL) && (w_23 != t)))
          _fail(t);
        else
          w_23 = t;
      }
    }
  else
    {
      ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((s_23 != NULL) && (s_23 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_23 = ATgetArgument(t, 0);
          if(((t_23 != NULL) && (t_23 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_23 = ATgetArgument(t, 1);
          if(((u_23 != NULL) && (u_23 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(s_23);
      if(((a_24 != NULL) && (a_24 != t)))
        _fail(t);
      else
        a_24 = t;
      t = not_null(t_23);
      if(((b_24 != NULL) && (b_24 != t)))
        _fail(t);
      else
        b_24 = t;
      t = not_null(u_23);
      if(((c_24 != NULL) && (c_24 != t)))
        _fail(t);
      else
        c_24 = t;
      t = not_null(r_23);
      if(((e_24 != NULL) && (e_24 != t)))
        _fail(t);
      else
        e_24 = t;
      if(((g_24 != NULL) && (g_24 != t)))
        _fail(t);
      else
        g_24 = t;
      t = not_null(b_24);
      t = int_to_string_0_0(t);
      if(((f_24 != NULL) && (f_24 != t)))
        _fail(t);
      else
        f_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_24)), term_s_12), not_null(f_24)), term_r_12), not_null(a_24));
      t = concat_strings_0_0(t);
      if(((d_24 != NULL) && (d_24 != t)))
        _fail(t);
      else
        d_24 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm h_24 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = p_123(t);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    return(t);
  }
  t = fetch_1_0(i_0, t);
  t = not_null(h_24);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_24 = NULL;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t);
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_12 = ATgetArgument(t, 0);
              if(((i_24 != NULL) && (i_24 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_24 = ATgetArgument(t, 1);
              {
                ATerm w_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_17), term_z_16), term_v_16), term_r_16), term_n_16), term_j_16), term_f_16), term_b_16), term_x_15), term_t_15), term_p_15), term_l_15), term_h_15), term_d_15), term_z_14), term_v_14), term_r_14), term_n_14), term_j_14), term_f_14), term_b_14), term_x_13), term_t_13), term_p_13), term_l_13), term_h_13), term_d_13), term_z_12);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(i_24));
      }
  }
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(((m_24 != NULL) && (m_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_24 = ATgetArgument(t, 1);
      {
        ATerm f_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(m_24);
  {
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), term_i_17));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = try_1_0(l_0, t);
  t = not_null(j_24);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm n_24 = NULL;
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  t = SSL_waitpid(not_null(n_24));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = fork_0_0(t);
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL;
        if(((r_24 != NULL) && (r_24 != t)))
          _fail(t);
        else
          r_24 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(q_24);
        t = t_141(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), not_null(q_24));
        t = u_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm s_24 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm t_24 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((t_24 != NULL) && (t_24 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_24 = ATgetArgument(t, 0);
        if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(t_24);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm l_17 = ATgetArgument(t, 0);
        if(((ATgetType(l_17) != AT_INT) || (ATgetInt((ATermInt) l_17) != 0)))
          _fail(t);
        {
          ATerm m_17 = ATgetArgument(t, 1);
        }
        {
          ATerm n_17 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(s_24);
    return(t);
  }
  t = fork_2_0(v_141, n_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  if(((b_25 != NULL) && (b_25 != t)))
    _fail(t);
  else
    b_25 = t;
  t = not_null(e_25);
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = STDIN__FILENO_0_0(t);
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(c_25));
  t = dup2_0_0(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = not_null(i_25);
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_25), not_null(g_25));
  t = dup2_0_0(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = not_null(m_25);
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = STDERR__FILENO_0_0(t);
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(k_25));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  t = term_o_17;
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  t = not_null(a_25);
  t = dbg_0_1(not_null(z_24), t);
  if(match_cons(t, sym__3))
    {
      if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_24 = ATgetArgument(t, 0);
      {
        ATerm p_17 = ATgetArgument(t, 1);
        if(match_cons(p_17, sym__3))
          {
            if(((u_24 != NULL) && (u_24 != ATgetArgument(p_17, 0))))
              _fail(ATgetArgument(p_17, 0));
            else
              u_24 = ATgetArgument(p_17, 0);
            if(((v_24 != NULL) && (v_24 != ATgetArgument(p_17, 1))))
              _fail(ATgetArgument(p_17, 1));
            else
              v_24 = ATgetArgument(p_17, 1);
            if(((w_24 != NULL) && (w_24 != ATgetArgument(p_17, 2))))
              _fail(ATgetArgument(p_17, 2));
            else
              w_24 = ATgetArgument(p_17, 2);
          }
        else
          _fail(t);
      }
      if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm q_0 (ATerm t);
    static ATerm q_0 (ATerm t)
    {
      t = not_null(u_24);
      t = option_1_0(s_0, t);
      t = not_null(v_24);
      t = option_1_0(v_0, t);
      t = not_null(w_24);
      t = option_1_0(y_0, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(y_24));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(q_0, t);
  }
  t = term_q_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm exec_http_0_1 (ATerm x_87, ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_t_17), term_s_17), not_null(r_25));
  t = conc_0_0(t);
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = not_null(x_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((n_25 != NULL) && (n_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_25 = ATgetArgument(t, 0);
      if(((o_25 != NULL) && (o_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_25 = ATgetArgument(t, 1);
      if(((p_25 != NULL) && (p_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_25 = ATgetArgument(t, 2);
      {
        ATerm u_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_v_17, not_null(o_25), not_null(p_25), not_null(q_25));
  t = xtc_command_1_0(b_1, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  if(match_cons(t, sym__3))
    {
      if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_25 = ATgetArgument(t, 0);
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_25 = ATgetArgument(t, 1);
      if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(w_25);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm a_26 = NULL,b_26 = NULL;
      t = not_null(y_25);
      if(((b_26 != NULL) && (b_26 != t)))
        _fail(t);
      else
        b_26 = t;
      t = not_null(z_25);
      if(((a_26 != NULL) && (a_26 != t)))
        _fail(t);
      else
        a_26 = t;
      t = exec_http_0_1(not_null(b_26), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          x_25 = ATgetArgument(t, 0);
          {
            ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
            t = not_null(x_25);
            if(((c_26 != NULL) && (c_26 != t)))
              _fail(t);
            else
              c_26 = t;
            t = not_null(y_25);
            if(((e_26 != NULL) && (e_26 != t)))
              _fail(t);
            else
              e_26 = t;
            t = not_null(z_25);
            if(((d_26 != NULL) && (d_26 != t)))
              _fail(t);
            else
              d_26 = t;
            t = exec_http_0_1(not_null(e_26), t);
          }
        }
      else
        {
          ATerm f_26 = NULL,g_26 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(x_25);
          if(((f_26 != NULL) && (f_26 != t)))
            _fail(t);
          else
            f_26 = t;
          t = not_null(z_25);
          if(((g_26 != NULL) && (g_26 != t)))
            _fail(t);
          else
            g_26 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = SSL_open(not_null(h_26));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t)
{
  static ATerm z_26 (ATerm m_26, ATerm n_26, ATerm t);
  static ATerm a_27 (ATerm s_26, ATerm t);
  static ATerm z_26 (ATerm m_26, ATerm n_26, ATerm t)
  {
    ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
    t = not_null(m_26);
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(n_26);
    if(((q_26 != NULL) && (q_26 != t)))
      _fail(t);
    else
      q_26 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm w_17 = ATgetArgument(t, 0);
        if(match_cons(w_17, sym_FILE_1))
          {
            if(((r_26 != NULL) && (r_26 != ATgetArgument(w_17, 0))))
              _fail(ATgetArgument(w_17, 0));
            else
              r_26 = ATgetArgument(w_17, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(r_26);
    t = open_0_0(t);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    return(t);
  }
  static ATerm a_27 (ATerm s_26, ATerm t)
  {
    ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
    t = not_null(s_26);
    if(((u_26 != NULL) && (u_26 != t)))
      _fail(t);
    else
      u_26 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm x_17 = ATgetArgument(t, 0);
        if(match_cons(x_17, sym_FILE_1))
          {
            if(((v_26 != NULL) && (v_26 != ATgetArgument(x_17, 0))))
              _fail(ATgetArgument(x_17, 0));
            else
              v_26 = ATgetArgument(x_17, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(v_26);
    t = open_0_0(t);
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    return(t);
  }
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(y_26);
  if(match_cons(t, sym_Some_1))
    {
      w_26 = ATgetArgument(t, 0);
      t = z_26(not_null(w_26), not_null(x_26), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = a_27(not_null(x_26), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(((c_27 != NULL) && (c_27 != t)))
    _fail(t);
  else
    c_27 = t;
  if(match_cons(t, sym_Error_1))
    {
      d_27 = ATgetArgument(t, 0);
      {
        ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
        t = not_null(d_27);
        if(((e_27 != NULL) && (e_27 != t)))
          _fail(t);
        else
          e_27 = t;
        t = not_null(c_27);
        if(((g_27 != NULL) && (g_27 != t)))
          _fail(t);
        else
          g_27 = t;
        t = not_null(e_27);
        t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
        if(((f_27 != NULL) && (f_27 != t)))
          _fail(t);
        else
          f_27 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          d_27 = ATgetArgument(t, 0);
          {
            ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
            t = not_null(d_27);
            if(((h_27 != NULL) && (h_27 != t)))
              _fail(t);
            else
              h_27 = t;
            t = not_null(c_27);
            if(((j_27 != NULL) && (j_27 != t)))
              _fail(t);
            else
              j_27 = t;
            t = not_null(h_27);
            t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
            if(((i_27 != NULL) && (i_27 != t)))
              _fail(t);
            else
              i_27 = t;
          }
        }
      else
        {
          ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((d_27 != NULL) && (d_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(d_27);
          if(((k_27 != NULL) && (k_27 != t)))
            _fail(t);
          else
            k_27 = t;
          t = not_null(c_27);
          if(((m_27 != NULL) && (m_27 != t)))
            _fail(t);
          else
            m_27 = t;
          t = not_null(k_27);
          t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
          if(((l_27 != NULL) && (l_27 != t)))
            _fail(t);
          else
            l_27 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm o_27 = NULL,p_27 = NULL;
        if(((o_27 != NULL) && (o_27 != t)))
          _fail(t);
        else
          o_27 = t;
        if(match_cons(t, sym_URL_1))
          {
            p_27 = ATgetArgument(t, 0);
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
              t = not_null(p_27);
              if(((q_27 != NULL) && (q_27 != t)))
                _fail(t);
              else
                q_27 = t;
              t = not_null(o_27);
              if(((s_27 != NULL) && (s_27 != t)))
                _fail(t);
              else
                s_27 = t;
              t = not_null(q_27);
              t = xtc_arg_to_string_0_0(t);
              if(((r_27 != NULL) && (r_27 != t)))
                _fail(t);
              else
                r_27 = t;
            }
          }
        else
          {
            ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(p_27);
            if(((t_27 != NULL) && (t_27 != t)))
              _fail(t);
            else
              t_27 = t;
            t = not_null(o_27);
            if(((v_27 != NULL) && (v_27 != t)))
              _fail(t);
            else
              v_27 = t;
            t = not_null(t_27);
            t = xtc_arg_to_string_0_0(t);
            if(((u_27 != NULL) && (u_27 != t)))
              _fail(t);
            else
              u_27 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      z_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
      {
        ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
        t = not_null(z_27);
        if(((a_28 != NULL) && (a_28 != t)))
          _fail(t);
        else
          a_28 = t;
        t = not_null(x_27);
        if(((b_28 != NULL) && (b_28 != t)))
          _fail(t);
        else
          b_28 = t;
        t = not_null(y_27);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = not_null(a_28);
        t = xtc_argterm_to_exec_0_0(t);
        if(((c_28 != NULL) && (c_28 != t)))
          _fail(t);
        else
          c_28 = t;
        t = not_null(f_28);
        if(((e_28 != NULL) && (e_28 != t)))
          _fail(t);
        else
          e_28 = t;
        t = not_null(b_28);
        t = xtc_argterm_to_exec_0_0(t);
        if(((d_28 != NULL) && (d_28 != t)))
          _fail(t);
        else
          d_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_28)), not_null(c_28));
      }
    }
  else
    {
      ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_27);
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = not_null(y_27);
      if(((i_28 != NULL) && (i_28 != t)))
        _fail(t);
      else
        i_28 = t;
      t = not_null(g_28);
      t = xtc_argterm_to_exec_0_0(t);
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = (ATerm) ATinsert(ATempty, not_null(h_28));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm j_29 (ATerm p_28, ATerm q_28, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t = not_null(p_28);
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  t = not_null(q_28);
  if(((v_28 != NULL) && (v_28 != t)))
    _fail(t);
  else
    v_28 = t;
  t = not_null(r_28);
  t = xtc_argterm_to_http_0_0(t);
  if(((w_28 != NULL) && (w_28 != t)))
    _fail(t);
  else
    w_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_28 = ATgetArgument(t, 0);
      {
        ATerm y_28 = NULL;
        t = not_null(x_28);
        if(((y_28 != NULL) && (y_28 != t)))
          _fail(t);
        else
          y_28 = t;
      }
    }
  else
    {
      ATerm z_28 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((x_28 != NULL) && (x_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(x_28);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
    }
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  t = not_null(v_28);
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_28)), term_a_18);
  t = concat_strings_0_0(t);
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(t_28)));
  return(t);
}
static ATerm k_29 (ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  t = not_null(a_29);
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  t = not_null(b_29);
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = not_null(c_29);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm c_18 = t;
    if((PushChoice() == 0))
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(e_1, t);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = URL_1_0(g_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_18;
      }
  }
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(d_29)));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm f_29 = NULL;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm g_29 = NULL;
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((i_29 != NULL) && (i_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_29(not_null(i_29), not_null(h_29), t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = k_29(not_null(i_29), not_null(h_29), t);
      }
  }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(h_1, t);
  return(t);
}
static ATerm n_30 (ATerm r_29, ATerm s_29, ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = not_null(r_29);
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = not_null(s_29);
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  t = not_null(t_29);
  t = xtc_argterm_to_http_0_0(t);
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_29 = ATgetArgument(t, 0);
      {
        ATerm a_30 = NULL;
        t = not_null(z_29);
        if(((a_30 != NULL) && (a_30 != t)))
          _fail(t);
        else
          a_30 = t;
      }
    }
  else
    {
      ATerm b_30 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((z_29 != NULL) && (z_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(z_29);
      if(((b_30 != NULL) && (b_30 != t)))
        _fail(t);
      else
        b_30 = t;
    }
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  t = not_null(x_29);
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), term_j_18);
  t = concat_strings_0_0(t);
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(v_29)));
  return(t);
}
static ATerm o_30 (ATerm c_30, ATerm d_30, ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  t = not_null(c_30);
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = not_null(d_30);
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = not_null(e_30);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm k_18 = t;
    if((PushChoice() == 0))
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(i_1, t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            t = URL_1_0(j_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_18;
      }
  }
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = not_null(i_30);
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), term_n_18);
  t = concat_strings_0_0(t);
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(g_30)));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm j_30 = NULL;
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm k_30 = NULL;
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((m_30 != NULL) && (m_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_30(not_null(m_30), not_null(l_30), t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = o_30(not_null(m_30), not_null(l_30), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,k_1 = NULL,v_11 = NULL;
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((q_30 != NULL) && (q_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = SSLgetAnnotations(not_null(u_30));
  if(((p_30 != NULL) && (p_30 != t)))
    _fail(t);
  else
    p_30 = t;
  t = not_null(q_30);
  t = n_109(t);
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(r_30));
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  t = SSLsetAnnotations(not_null(k_1), not_null(p_30));
  if(((s_30 != NULL) && (s_30 != t)))
    _fail(t);
  else
    s_30 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm w_30 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((w_30 != NULL) && (w_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(w_30);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm y_30 = NULL,z_30 = NULL;
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        if(match_cons(t, sym_URL_1))
          {
            z_30 = ATgetArgument(t, 0);
            {
              ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
              t = not_null(z_30);
              if(((a_31 != NULL) && (a_31 != t)))
                _fail(t);
              else
                a_31 = t;
              t = not_null(y_30);
              if(((c_31 != NULL) && (c_31 != t)))
                _fail(t);
              else
                c_31 = t;
              t = not_null(a_31);
              t = xtc_arg_to_string_0_0(t);
              if(((b_31 != NULL) && (b_31 != t)))
                _fail(t);
              else
                b_31 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(b_31));
            }
          }
        else
          {
            ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((z_30 != NULL) && (z_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(z_30);
            if(((d_31 != NULL) && (d_31 != t)))
              _fail(t);
            else
              d_31 = t;
            t = not_null(y_30);
            if(((f_31 != NULL) && (f_31 != t)))
              _fail(t);
            else
              f_31 = t;
            t = not_null(d_31);
            t = xtc_arg_to_string_0_0(t);
            if(((e_31 != NULL) && (e_31 != t)))
              _fail(t);
            else
              e_31 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_31));
          }
      }
    }
  return(t);
}
static ATerm q_32 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t = not_null(m_31);
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = not_null(n_31);
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = not_null(o_31);
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  t = not_null(p_31);
  t = xtc_argterm_to_http_0_0(t);
  if(((q_31 != NULL) && (q_31 != t)))
    _fail(t);
  else
    q_31 = t;
  t = not_null(r_31);
  t = xtc_argterm_to_http_0_0(t);
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_31 = ATgetArgument(t, 0);
      {
        ATerm y_31 = NULL;
        t = not_null(x_31);
        if(((y_31 != NULL) && (y_31 != t)))
          _fail(t);
        else
          y_31 = t;
      }
    }
  else
    {
      ATerm z_31 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((x_31 != NULL) && (x_31 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(x_31);
      if(((z_31 != NULL) && (z_31 != t)))
        _fail(t);
      else
        z_31 = t;
    }
  if(((s_31 != NULL) && (s_31 != t)))
    _fail(t);
  else
    s_31 = t;
  t = not_null(v_31);
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_31)), term_s_18), not_null(q_31));
  t = concat_strings_0_0(t);
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(t_31)));
  return(t);
}
static ATerm r_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,j_32 = NULL,k_32 = NULL;
  t = not_null(a_32);
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  t = not_null(b_32);
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = not_null(c_32);
  if(((k_32 != NULL) && (k_32 != t)))
    _fail(t);
  else
    k_32 = t;
  t = not_null(d_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  t = not_null(f_32);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm t_18 = t;
    if((PushChoice() == 0))
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(m_1, t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = URL_1_0(n_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_18;
      }
  }
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  t = not_null(k_32);
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_32)), term_w_18), not_null(e_32));
  t = concat_strings_0_0(t);
  if(((h_32 != NULL) && (h_32 != t)))
    _fail(t);
  else
    h_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(h_32)));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_32 = NULL;
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm m_32 = NULL;
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((o_32 != NULL) && (o_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_32 = ATgetArgument(t, 0);
      if(((p_32 != NULL) && (p_32 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_32(not_null(o_32), not_null(p_32), not_null(n_32), t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = r_32(not_null(o_32), not_null(p_32), not_null(n_32), t);
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(p_1, t);
  return(t);
}
static ATerm m_35 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm e_33, ATerm f_33, ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,s_33 = NULL,t_33 = NULL,x_33 = NULL,y_33 = NULL,b_34 = NULL;
  t = not_null(b_33);
  if(((t_33 != NULL) && (t_33 != t)))
    _fail(t);
  else
    t_33 = t;
  t = not_null(c_33);
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  t = not_null(d_33);
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  t = not_null(e_33);
  if(((x_33 != NULL) && (x_33 != t)))
    _fail(t);
  else
    x_33 = t;
  t = not_null(f_33);
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  t = not_null(g_33);
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = not_null(h_33);
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  t = not_null(j_33);
  t = xtc_args_to_exec_0_0(t);
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  t = not_null(t_33);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_1 (ATerm t);
        static ATerm q_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(l_33), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(q_1, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = term_v_17;
      }
  }
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  t = not_null(t_33);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t);
        static ATerm r_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(n_33), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(r_1, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = term_v_17;
      }
  }
  if(((s_33 != NULL) && (s_33 != t)))
    _fail(t);
  else
    s_33 = t;
  t = not_null(t_33);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(x_33), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(s_1, t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = term_v_17;
      }
  }
  if(((y_33 != NULL) && (y_33 != t)))
    _fail(t);
  else
    y_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(i_33), (ATerm)ATmakeAppl(sym__3, not_null(m_33), not_null(s_33), not_null(y_33)), not_null(k_33));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  if(((c_34 != NULL) && (c_34 != t)))
    _fail(t);
  else
    c_34 = t;
  if(match_cons(t, sym__3))
    {
      if(((d_34 != NULL) && (d_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_34 = ATgetArgument(t, 0);
      if(((f_34 != NULL) && (f_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_34 = ATgetArgument(t, 1);
      if(((p_34 != NULL) && (p_34 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(d_34);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm u_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL;
      t = not_null(f_34);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_34 = ATgetArgument(t, 0);
          if(((m_34 != NULL) && (m_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_34 = ATgetArgument(t, 1);
          if(((n_34 != NULL) && (n_34 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_34 = ATgetArgument(t, 2);
          if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            o_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(p_34);
      if(match_cons(t, sym__2))
        {
          if(((q_34 != NULL) && (q_34 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_34 = ATgetArgument(t, 0);
          if(((r_34 != NULL) && (r_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_34);
      if(((v_34 != NULL) && (v_34 != t)))
        _fail(t);
      else
        v_34 = t;
      t = not_null(q_34);
      if(((u_34 != NULL) && (u_34 != t)))
        _fail(t);
      else
        u_34 = t;
      t = not_null(c_34);
      if(((y_34 != NULL) && (y_34 != t)))
        _fail(t);
      else
        y_34 = t;
      t = not_null(v_34);
      t = xtc_args_to_xtservice_0_0(t);
      if(((x_34 != NULL) && (x_34 != t)))
        _fail(t);
      else
        x_34 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_34)), not_null(u_34));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,i_35 = NULL,j_35 = NULL;
            t = not_null(f_34);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_34 = ATgetArgument(t, 0);
                if(((m_34 != NULL) && (m_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_34 = ATgetArgument(t, 1);
                if(((n_34 != NULL) && (n_34 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  n_34 = ATgetArgument(t, 2);
                if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  o_34 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(p_34);
            if(match_cons(t, sym__2))
              {
                if(((q_34 != NULL) && (q_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_34 = ATgetArgument(t, 0);
                if(((r_34 != NULL) && (r_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(e_34);
            if(((z_34 != NULL) && (z_34 != t)))
              _fail(t);
            else
              z_34 = t;
            t = not_null(o_34);
            if(((b_35 != NULL) && (b_35 != t)))
              _fail(t);
            else
              b_35 = t;
            t = not_null(q_34);
            if(((a_35 != NULL) && (a_35 != t)))
              _fail(t);
            else
              a_35 = t;
            t = not_null(c_34);
            if(((j_35 != NULL) && (j_35 != t)))
              _fail(t);
            else
              j_35 = t;
            t = not_null(b_35);
            t = xtc_args_to_http_0_0(t);
            if(((i_35 != NULL) && (i_35 != t)))
              _fail(t);
            else
              i_35 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), not_null(a_35));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((e_34 != NULL) && (e_34 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_34);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_34 = ATgetArgument(t, 0);
              if(((m_34 != NULL) && (m_34 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_34 = ATgetArgument(t, 1);
              if(((n_34 != NULL) && (n_34 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                n_34 = ATgetArgument(t, 2);
              if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                o_34 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(p_34);
          if(match_cons(t, sym__2))
            {
              if(((q_34 != NULL) && (q_34 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_34 = ATgetArgument(t, 0);
              if(((r_34 != NULL) && (r_34 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_35(not_null(e_34), not_null(l_34), not_null(m_34), not_null(n_34), not_null(o_34), not_null(q_34), not_null(c_34), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if(!(match_cons(h_19, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(s_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(n_35), t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
          if(((p_35 != NULL) && (p_35 != t)))
            _fail(t);
          else
            p_35 = t;
          if(((r_35 != NULL) && (r_35 != t)))
            _fail(t);
          else
            r_35 = t;
          t = not_null(p_35);
          if(((q_35 != NULL) && (q_35 != t)))
            _fail(t);
          else
            q_35 = t;
          t = (ATerm) ATinsert(ATempty, not_null(q_35));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((o_35 != NULL) && (o_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_35 = ATgetArgument(t, 0);
      if(((n_35 != NULL) && (n_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_35);
  t = mapconcat_1_0(t_1, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_35 != NULL) && (u_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_35 = ATgetArgument(t, 0);
      if(((t_35 != NULL) && (t_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  t = Fst_0_0(t);
  {
    static ATerm u_1 (ATerm t);
    static ATerm u_1 (ATerm t)
    {
      ATerm y_35 = NULL;
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm g_36 (ATerm z_35, ATerm t);
          static ATerm g_36 (ATerm z_35, ATerm t)
          {
            ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
            t = not_null(z_35);
            if(((y_35 != NULL) && (y_35 != t)))
              _fail(t);
            else
              y_35 = t;
            t = not_null(z_35);
            if(((b_36 != NULL) && (b_36 != t)))
              _fail(t);
            else
              b_36 = t;
            if(((c_36 != NULL) && (c_36 != t)))
              _fail(t);
            else
              c_36 = t;
            t = not_null(t_35);
            {
              static ATerm v_1 (ATerm t);
              static ATerm v_1 (ATerm t)
              {
                ATerm d_36 = NULL,e_36 = NULL;
                if(((e_36 != NULL) && (e_36 != t)))
                  _fail(t);
                else
                  e_36 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(e_36));
                if(((y_35 != NULL) && (y_35 != t)))
                  _fail(t);
                else
                  y_35 = t;
                return(t);
              }
              t = SRTS_one(v_1, t);
            }
            t = not_null(c_36);
            if(((a_36 != NULL) && (a_36 != t)))
              _fail(t);
            else
              a_36 = t;
            t = (ATerm) ATinsert(ATempty, not_null(a_36));
            return(t);
          }
          ATerm f_36 = NULL;
          if(((f_36 != NULL) && (f_36 != t)))
            _fail(t);
          else
            f_36 = t;
          t = g_36(not_null(f_36), t);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(u_1, t);
  }
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), not_null(v_35));
  t = diff_0_0(t);
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), not_null(w_35));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((h_36 != NULL) && (h_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_36 = ATgetArgument(t, 0);
      if(((k_36 != NULL) && (k_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_36 = ATgetArgument(t, 1);
      if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((n_36 != NULL) && (n_36 != t)))
    _fail(t);
  else
    n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), not_null(k_36));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((o_36 != NULL) && (o_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_36 = ATgetArgument(t, 0);
      if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_36);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL;
        if(((p_36 != NULL) && (p_36 != t)))
          _fail(t);
        else
          p_36 = t;
        {
          ATerm o_19 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_19;
            }
        }
        t = not_null(p_36);
        LocalPopChoice(n_19);
        t = h_151(t);
      }
    else
      {
        t = m_19;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_36 = NULL;
              if(((q_36 != NULL) && (q_36 != t)))
                _fail(t);
              else
                q_36 = t;
              t = not_null(j_36);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm r_19 = ATgetArgument(t, 0);
                  if(!(match_cons(r_19, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(q_36);
              LocalPopChoice(q_19);
              t = not_null(k_36);
              t = Hd_0_0(t);
              if(((l_36 != NULL) && (l_36 != t)))
                _fail(t);
              else
                l_36 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(l_36)));
            }
          else
            {
              t = p_19;
              t = i_151(t);
            }
        }
      }
  }
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(i_36));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_36 = NULL;
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  return(t);
}
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_36 != NULL) && (t_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_36 = ATgetArgument(t, 0);
      if(((s_36 != NULL) && (s_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  t = not_null(t_36);
  {
    static ATerm x_36 (ATerm t);
    static ATerm x_36 (ATerm t)
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm w_1 (ATerm t);
                static ATerm w_1 (ATerm t)
                {
                  t = not_null(s_36);
                  return(t);
                }
                t = HdMember_p__2_0(j_127, w_1, t);
                t = x_36(t);
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                t = Cons_2_0(x_1, x_36, t);
              }
          }
        }
      return(t);
    }
    t = x_36(t);
  }
  if(((u_36 != NULL) && (u_36 != t)))
    _fail(t);
  else
    u_36 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_36 != NULL) && (z_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_36 = ATgetArgument(t, 0);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(((ATgetType(w_19) == AT_LIST) && !(ATisEmpty(w_19))))
          {
            if(((y_36 != NULL) && (y_36 != ATgetFirst((ATermList) w_19))))
              _fail(ATgetFirst((ATermList) w_19));
            else
              y_36 = ATgetFirst((ATermList) w_19);
            if(((a_37 != NULL) && (a_37 != (ATerm) ATgetNext((ATermList) w_19))))
              _fail((ATerm) ATgetNext((ATermList) w_19));
            else
              a_37 = (ATerm) ATgetNext((ATermList) w_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_36)), not_null(y_36)), not_null(a_37));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_37 = ATgetArgument(t, 0);
      if(((c_37 != NULL) && (c_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(c_37)), not_null(b_37));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,j_37 = NULL,k_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          if(((d_37 != NULL) && (d_37 != ATgetFirst((ATermList) x_19))))
            _fail(ATgetFirst((ATermList) x_19));
          else
            d_37 = ATgetFirst((ATermList) x_19);
          if(((j_37 != NULL) && (j_37 != (ATerm) ATgetNext((ATermList) x_19))))
            _fail((ATerm) ATgetNext((ATermList) x_19));
          else
            j_37 = (ATerm) ATgetNext((ATermList) x_19);
        }
      else
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
          {
            if(((e_37 != NULL) && (e_37 != ATgetFirst((ATermList) y_19))))
              _fail(ATgetFirst((ATermList) y_19));
            else
              e_37 = ATgetFirst((ATermList) y_19);
            if(((k_37 != NULL) && (k_37 != (ATerm) ATgetNext((ATermList) y_19))))
              _fail((ATerm) ATgetNext((ATermList) y_19));
            else
              k_37 = (ATerm) ATgetNext((ATermList) y_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_37), not_null(e_37)), (ATerm) ATmakeAppl(sym__2, not_null(j_37), not_null(k_37)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(((ATgetType(z_19) != AT_LIST) || !(ATisEmpty(z_19))))
        _fail(t);
      {
        ATerm a_20 = ATgetArgument(t, 1);
        if(((ATgetType(a_20) != AT_LIST) || !(ATisEmpty(a_20))))
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
  static ATerm l_37 (ATerm t);
  static ATerm l_37 (ATerm t)
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = i_125(t);
        t = _2_0(k_125, l_37, t);
        t = j_125(t);
      }
    return(t);
  }
  t = l_37(t);
  return(t);
}
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, m_125, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_38 = NULL;
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_20 = ATgetFirst((ATermList) t);
      if(match_cons(d_20, sym__2))
        {
          if(((x_37 != NULL) && (x_37 != ATgetArgument(d_20, 0))))
            _fail(ATgetArgument(d_20, 0));
          else
            x_37 = ATgetArgument(d_20, 0);
          if(((a_38 != NULL) && (a_38 != ATgetArgument(d_20, 1))))
            _fail(ATgetArgument(d_20, 1));
          else
            a_38 = ATgetArgument(d_20, 1);
        }
      else
        _fail(t);
      if(((s_37 != NULL) && (s_37 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  t = not_null(a_38);
  if(((c_38 != NULL) && (c_38 != t)))
    _fail(t);
  else
    c_38 = t;
  t = SSL_explode_term(not_null(c_38));
  if(match_cons(t, sym__2))
    {
      if(((n_37 != NULL) && (n_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_37 = ATgetArgument(t, 0);
      if(((r_37 != NULL) && (r_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_38);
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  t = not_null(x_37);
  if(((z_37 != NULL) && (z_37 != t)))
    _fail(t);
  else
    z_37 = t;
  t = SSL_explode_term(not_null(z_37));
  if(match_cons(t, sym__2))
    {
      if(((n_37 != NULL) && (n_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_37 = ATgetArgument(t, 0);
      if(((o_37 != NULL) && (o_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_37);
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  if(((w_37 != NULL) && (w_37 != t)))
    _fail(t);
  else
    w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_37), not_null(r_37));
  t = zip_1_0(y_1, t);
  if(((v_37 != NULL) && (v_37 != t)))
    _fail(t);
  else
    v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(s_37));
  t = conc_0_0(t);
  if(((t_37 != NULL) && (t_37 != t)))
    _fail(t);
  else
    t_37 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_20 = ATgetFirst((ATermList) t);
      if(match_cons(e_20, sym__2))
        {
          if(((e_38 != NULL) && (e_38 != ATgetArgument(e_20, 0))))
            _fail(ATgetArgument(e_20, 0));
          else
            e_38 = ATgetArgument(e_20, 0);
          if(((e_38 != NULL) && (e_38 != ATgetArgument(e_20, 1))))
            _fail(ATgetArgument(e_20, 1));
          else
            e_38 = ATgetArgument(e_20, 1);
        }
      else
        _fail(t);
      if(((f_38 != NULL) && (f_38 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(f_38);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm i_38 = NULL;
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_38));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = _2_0(c_2, Nil_0_0, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(d_2, e_2, t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm j_38 = NULL;
  if(((j_38 != NULL) && (j_38 != t)))
    _fail(t);
  else
    j_38 = t;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm k_38 = NULL;
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_1, a_2, b_2, t);
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_38 != NULL) && (o_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_38 = ATgetArgument(t, 0);
      if(((n_38 != NULL) && (n_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = Fst_0_0(t);
  {
    static ATerm f_2 (ATerm t);
    static ATerm f_2 (ATerm t)
    {
      ATerm s_38 = NULL,t_38 = NULL;
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_39 (ATerm u_38, ATerm v_38, ATerm w_38, ATerm t);
          static ATerm d_39 (ATerm u_38, ATerm v_38, ATerm w_38, ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
            t = not_null(u_38);
            if(((s_38 != NULL) && (s_38 != t)))
              _fail(t);
            else
              s_38 = t;
            t = not_null(v_38);
            if(((t_38 != NULL) && (t_38 != t)))
              _fail(t);
            else
              t_38 = t;
            t = not_null(w_38);
            if(((y_38 != NULL) && (y_38 != t)))
              _fail(t);
            else
              y_38 = t;
            if(((z_38 != NULL) && (z_38 != t)))
              _fail(t);
            else
              z_38 = t;
            t = not_null(n_38);
            {
              static ATerm g_2 (ATerm t);
              static ATerm g_2 (ATerm t)
              {
                if(((s_38 != NULL) && (s_38 != t)))
                  _fail(t);
                else
                  s_38 = t;
                return(t);
              }
              t = SRTS_one(g_2, t);
            }
            t = not_null(z_38);
            if(((x_38 != NULL) && (x_38 != t)))
              _fail(t);
            else
              x_38 = t;
            t = (ATerm) ATinsert(ATempty, not_null(x_38));
            return(t);
          }
          ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
          if(((a_39 != NULL) && (a_39 != t)))
            _fail(t);
          else
            a_39 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((b_39 != NULL) && (b_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_39 = ATgetArgument(t, 0);
              if(((c_39 != NULL) && (c_39 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                c_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_39(not_null(b_39), not_null(c_39), not_null(a_39), t);
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(f_2, t);
  }
  if(((p_38 != NULL) && (p_38 != t)))
    _fail(t);
  else
    p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), not_null(p_38));
  t = diff_0_0(t);
  if(((q_38 != NULL) && (q_38 != t)))
    _fail(t);
  else
    q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_38), not_null(q_38));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((f_39 != NULL) && (f_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_39 = ATgetArgument(t, 0);
      if(((g_39 != NULL) && (g_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_39 = ATgetArgument(t, 1);
      if(((i_39 != NULL) && (i_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_39 = ATgetArgument(t, 2);
      if(((e_39 != NULL) && (e_39 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        e_39 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((k_39 != NULL) && (k_39 != t)))
    _fail(t);
  else
    k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(g_39));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_39 = ATgetArgument(t, 0);
      if(((h_39 != NULL) && (h_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_39);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_39 = NULL;
        if(((m_39 != NULL) && (m_39 != t)))
          _fail(t);
        else
          m_39 = t;
        {
          ATerm p_20 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_20;
            }
        }
        t = not_null(m_39);
        LocalPopChoice(o_20);
        t = j_151(t);
      }
    else
      {
        t = n_20;
        {
          ATerm q_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_39 = NULL;
              if(((n_39 != NULL) && (n_39 != t)))
                _fail(t);
              else
                n_39 = t;
              t = not_null(i_39);
              {
                ATerm s_20 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_20;
                  }
              }
              t = not_null(n_39);
              LocalPopChoice(r_20);
              t = k_151(t);
            }
          else
            {
              t = q_20;
              t = l_151(t);
            }
        }
      }
  }
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), not_null(h_39));
  return(t);
}
static ATerm l_47 (ATerm w_41, ATerm x_41, ATerm y_41, ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = not_null(w_41);
  if(((d_42 != NULL) && (d_42 != t)))
    _fail(t);
  else
    d_42 = t;
  t = not_null(x_41);
  if(((e_42 != NULL) && (e_42 != t)))
    _fail(t);
  else
    e_42 = t;
  t = not_null(y_41);
  if(((c_42 != NULL) && (c_42 != t)))
    _fail(t);
  else
    c_42 = t;
  t = not_null(z_41);
  if(((b_42 != NULL) && (b_42 != t)))
    _fail(t);
  else
    b_42 = t;
  t = not_null(a_42);
  if(((i_42 != NULL) && (i_42 != t)))
    _fail(t);
  else
    i_42 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(b_42), not_null(d_42), not_null(e_42), not_null(c_42));
  {
    static ATerm i_2 (ATerm t);
    static ATerm i_2 (ATerm t)
    {
      static ATerm k_2 (ATerm t);
      static ATerm k_2 (ATerm t)
      {
        ATerm k_42 = NULL,l_42 = NULL;
        if(((l_42 != NULL) && (l_42 != t)))
          _fail(t);
        else
          l_42 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(f_42), not_null(l_42));
        return(t);
      }
      t = not_null(d_42);
      t = Hd_0_0(t);
      if(((f_42 != NULL) && (f_42 != t)))
        _fail(t);
      else
        f_42 = t;
      t = not_null(e_42);
      t = map_1_0(k_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(h_2, i_2, j_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((g_42 != NULL) && (g_42 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_42 = ATgetArgument(t, 0);
      if(((h_42 != NULL) && (h_42 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(h_42));
  return(t);
}
static ATerm m_47 (ATerm m_42, ATerm n_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,g_43 = NULL;
  t = not_null(m_42);
  if(((y_42 != NULL) && (y_42 != t)))
    _fail(t);
  else
    y_42 = t;
  t = not_null(n_42);
  if(((z_42 != NULL) && (z_42 != t)))
    _fail(t);
  else
    z_42 = t;
  t = not_null(t_42);
  if(((w_42 != NULL) && (w_42 != t)))
    _fail(t);
  else
    w_42 = t;
  t = not_null(u_42);
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  t = not_null(v_42);
  if(((g_43 != NULL) && (g_43 != t)))
    _fail(t);
  else
    g_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(x_42), not_null(y_42), not_null(z_42));
  t = xtc_toption_to_args_2_0(l_2, m_2, t);
  if(match_cons(t, sym__2))
    {
      if(((a_43 != NULL) && (a_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_43 = ATgetArgument(t, 0);
      if(((b_43 != NULL) && (b_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), not_null(b_43));
  return(t);
}
static ATerm n_47 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  t = not_null(i_43);
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  t = not_null(j_43);
  if(((q_43 != NULL) && (q_43 != t)))
    _fail(t);
  else
    q_43 = t;
  t = not_null(k_43);
  if(((o_43 != NULL) && (o_43 != t)))
    _fail(t);
  else
    o_43 = t;
  t = not_null(l_43);
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = not_null(m_43);
  if(((u_43 != NULL) && (u_43 != t)))
    _fail(t);
  else
    u_43 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(n_43), not_null(p_43), not_null(q_43), not_null(o_43));
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      static ATerm p_2 (ATerm t);
      static ATerm p_2 (ATerm t)
      {
        ATerm w_43 = NULL,x_43 = NULL;
        if(((x_43 != NULL) && (x_43 != t)))
          _fail(t);
        else
          x_43 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(r_43), not_null(x_43));
        return(t);
      }
      t = not_null(p_43);
      t = Hd_0_0(t);
      if(((r_43 != NULL) && (r_43 != t)))
        _fail(t);
      else
        r_43 = t;
      t = not_null(q_43);
      t = map_1_0(p_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(n_2, o_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((s_43 != NULL) && (s_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_43 = ATgetArgument(t, 0);
      if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_43), not_null(t_43));
  return(t);
}
static ATerm o_47 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  t = not_null(y_43);
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = not_null(z_43);
  if(((g_44 != NULL) && (g_44 != t)))
    _fail(t);
  else
    g_44 = t;
  t = not_null(a_44);
  if(((d_44 != NULL) && (d_44 != t)))
    _fail(t);
  else
    d_44 = t;
  t = not_null(b_44);
  if(((e_44 != NULL) && (e_44 != t)))
    _fail(t);
  else
    e_44 = t;
  t = not_null(c_44);
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(e_44), not_null(f_44), not_null(g_44));
  t = xtc_toption_to_args_2_0(q_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((h_44 != NULL) && (h_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_44 = ATgetArgument(t, 0);
      if(((i_44 != NULL) && (i_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_44), not_null(i_44));
  return(t);
}
static ATerm p_47 (ATerm l_44, ATerm m_44, ATerm n_44, ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = not_null(l_44);
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = not_null(m_44);
  if(((t_44 != NULL) && (t_44 != t)))
    _fail(t);
  else
    t_44 = t;
  t = not_null(n_44);
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = not_null(o_44);
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  t = not_null(p_44);
  if(((y_44 != NULL) && (y_44 != t)))
    _fail(t);
  else
    y_44 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(q_44), not_null(s_44), not_null(t_44), not_null(r_44));
  {
    static ATerm s_2 (ATerm t);
    static ATerm s_2 (ATerm t)
    {
      t = not_null(s_44);
      t = Hd_0_0(t);
      if(((u_44 != NULL) && (u_44 != t)))
        _fail(t);
      else
        u_44 = t;
      t = not_null(t_44);
      t = Hd_0_0(t);
      if(((v_44 != NULL) && (v_44 != t)))
        _fail(t);
      else
        v_44 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_44), not_null(v_44)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(r_2, s_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_44 != NULL) && (w_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_44 = ATgetArgument(t, 0);
      if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
  return(t);
}
static ATerm q_47 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  t = not_null(b_45);
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  t = not_null(c_45);
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  t = not_null(d_45);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = not_null(e_45);
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  t = not_null(f_45);
  if(((m_45 != NULL) && (m_45 != t)))
    _fail(t);
  else
    m_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_45), not_null(i_45), not_null(j_45));
  t = xtc_toption_to_args_2_0(t_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_45 = ATgetArgument(t, 0);
      if(((l_45 != NULL) && (l_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_45), not_null(l_45));
  return(t);
}
static ATerm r_47 (ATerm p_45, ATerm q_45, ATerm r_45, ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  t = not_null(p_45);
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = not_null(q_45);
  if(((x_45 != NULL) && (x_45 != t)))
    _fail(t);
  else
    x_45 = t;
  t = not_null(r_45);
  if(((v_45 != NULL) && (v_45 != t)))
    _fail(t);
  else
    v_45 = t;
  t = not_null(s_45);
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(t_45);
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(u_45), not_null(w_45), not_null(x_45), not_null(v_45));
  {
    static ATerm v_2 (ATerm t);
    static ATerm v_2 (ATerm t)
    {
      t = not_null(w_45);
      t = Hd_0_0(t);
      if(((y_45 != NULL) && (y_45 != t)))
        _fail(t);
      else
        y_45 = t;
      t = not_null(x_45);
      t = Hd_0_0(t);
      if(((z_45 != NULL) && (z_45 != t)))
        _fail(t);
      else
        z_45 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(y_45), not_null(z_45)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(u_2, v_2, w_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((a_46 != NULL) && (a_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_46 = ATgetArgument(t, 0);
      if(((b_46 != NULL) && (b_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), not_null(b_46));
  return(t);
}
static ATerm w_47 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  t = not_null(m_46);
  if(((t_46 != NULL) && (t_46 != t)))
    _fail(t);
  else
    t_46 = t;
  t = not_null(n_46);
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = not_null(o_46);
  if(((r_46 != NULL) && (r_46 != t)))
    _fail(t);
  else
    r_46 = t;
  t = not_null(p_46);
  if(((s_46 != NULL) && (s_46 != t)))
    _fail(t);
  else
    s_46 = t;
  t = not_null(q_46);
  if(((x_46 != NULL) && (x_46 != t)))
    _fail(t);
  else
    x_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(s_46), not_null(t_46), not_null(u_46));
  t = xtc_toption_to_args_2_0(x_2, y_2, t);
  if(match_cons(t, sym__2))
    {
      if(((v_46 != NULL) && (v_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_46 = ATgetArgument(t, 0);
      if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_46), not_null(w_46));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm j_42 = NULL;
  if(((j_42 != NULL) && (j_42 != t)))
    _fail(t);
  else
    j_42 = t;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_43 = NULL;
  if(((h_43 != NULL) && (h_43 != t)))
    _fail(t);
  else
    h_43 = t;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm v_43 = NULL;
  if(((v_43 != NULL) && (v_43 != t)))
    _fail(t);
  else
    v_43 = t;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm k_44 = NULL;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  if(((a_45 != NULL) && (a_45 != t)))
    _fail(t);
  else
    a_45 = t;
  t = Hd_0_0(t);
  if(((z_44 != NULL) && (z_44 != t)))
    _fail(t);
  else
    z_44 = t;
  t = (ATerm) ATinsert(ATempty, not_null(z_44));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  if(((o_45 != NULL) && (o_45 != t)))
    _fail(t);
  else
    o_45 = t;
  t = Hd_0_0(t);
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = (ATerm) ATinsert(ATempty, not_null(n_45));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  t = Hd_0_0(t);
  if(((k_46 != NULL) && (k_46 != t)))
    _fail(t);
  else
    k_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(k_46));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  t = Hd_0_0(t);
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(y_46));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_47 = ATgetArgument(t, 0);
      if(((k_47 != NULL) && (k_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_47);
  if(match_cons(t, sym_TVarStar_4))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      g_47 = ATgetArgument(t, 2);
      i_47 = ATgetArgument(t, 3);
      t = not_null(e_47);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(g_47);
          if(match_cons(t, sym_Some_1))
            {
              if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(h_47);
          if(match_cons(t, sym_Default_1))
            {
              if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(a_47);
          if(match_cons(t, sym_Values_1))
            {
              if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_47);
          if(match_cons(t, sym_Some_1))
            {
              if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_47(not_null(f_47), not_null(b_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(g_47);
          if(match_cons(t, sym_Some_1))
            {
              if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_47);
          if(match_cons(t, sym_Some_1))
            {
              if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_47(not_null(f_47), not_null(h_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          e_47 = ATgetArgument(t, 0);
          f_47 = ATgetArgument(t, 1);
          g_47 = ATgetArgument(t, 2);
          i_47 = ATgetArgument(t, 3);
          t = not_null(e_47);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(g_47);
              if(match_cons(t, sym_Some_1))
                {
                  if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(h_47);
              if(match_cons(t, sym_Default_1))
                {
                  if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(a_47);
              if(match_cons(t, sym_Values_1))
                {
                  if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(i_47);
              if(match_cons(t, sym_Some_1))
                {
                  if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_47(not_null(f_47), not_null(b_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(g_47);
              if(match_cons(t, sym_Some_1))
                {
                  if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(i_47);
              if(match_cons(t, sym_Some_1))
                {
                  if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_47(not_null(f_47), not_null(h_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              e_47 = ATgetArgument(t, 0);
              f_47 = ATgetArgument(t, 1);
              g_47 = ATgetArgument(t, 2);
              i_47 = ATgetArgument(t, 3);
              t = not_null(e_47);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(g_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(h_47);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(a_47);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(i_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_47(not_null(f_47), not_null(b_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(g_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(i_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_47(not_null(f_47), not_null(h_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_47 = ATgetArgument(t, 0);
                  if(((f_47 != NULL) && (f_47 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_47 = ATgetArgument(t, 1);
                  if(((g_47 != NULL) && (g_47 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    g_47 = ATgetArgument(t, 2);
                  if(((i_47 != NULL) && (i_47 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    i_47 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(e_47);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(g_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(h_47);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(a_47);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((b_47 != NULL) && (b_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(i_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_47(not_null(f_47), not_null(b_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(g_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(i_47);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        j_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_47(not_null(f_47), not_null(h_47), not_null(j_47), not_null(k_47), not_null(c_47), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm k_3, ATerm t)
{
  static ATerm a_49 (ATerm g_48, ATerm h_48, ATerm t);
  static ATerm f_49 (ATerm m_48, ATerm t);
  static ATerm a_49 (ATerm g_48, ATerm h_48, ATerm t)
  {
    ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
    t = not_null(g_48);
    if(((i_48 != NULL) && (i_48 != t)))
      _fail(t);
    else
      i_48 = t;
    t = not_null(h_48);
    if(((k_48 != NULL) && (k_48 != t)))
      _fail(t);
    else
      k_48 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((l_48 != NULL) && (l_48 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_48 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(l_48);
    if(((j_48 != NULL) && (j_48 != t)))
      _fail(t);
    else
      j_48 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(i_48), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_48)))));
    return(t);
  }
  static ATerm f_49 (ATerm m_48, ATerm t)
  {
    ATerm o_48 = NULL,q_48 = NULL,r_48 = NULL;
    t = not_null(m_48);
    if(((q_48 != NULL) && (q_48 != t)))
      _fail(t);
    else
      q_48 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_48 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(r_48);
    if(((o_48 != NULL) && (o_48 != t)))
      _fail(t);
    else
      o_48 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_48)))));
    return(t);
  }
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  if(((t_48 != NULL) && (t_48 != t)))
    _fail(t);
  else
    t_48 = t;
  if(match_cons(t, sym_File_1))
    {
      u_48 = ATgetArgument(t, 0);
      t = not_null(u_48);
      if(match_cons(t, sym_Some_1))
        {
          s_48 = ATgetArgument(t, 0);
          t = a_49(not_null(s_48), not_null(t_48), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = f_49(not_null(t_48), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(u_48);
      if(match_cons(t, sym_Some_1))
        {
          s_48 = ATgetArgument(t, 0);
          {
            ATerm y_48 = NULL;
            t = not_null(s_48);
            if(((y_48 != NULL) && (y_48 != t)))
              _fail(t);
            else
              y_48 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(y_48)));
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
ATerm xtc_stream_to_arg_0_1 (ATerm j_3, ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  if(((h_49 != NULL) && (h_49 != t)))
    _fail(t);
  else
    h_49 = t;
  if(match_cons(t, sym_Error_1))
    {
      i_49 = ATgetArgument(t, 0);
      {
        ATerm j_49 = NULL,m_49 = NULL,n_49 = NULL;
        t = not_null(i_49);
        if(((j_49 != NULL) && (j_49 != t)))
          _fail(t);
        else
          j_49 = t;
        t = not_null(h_49);
        if(((n_49 != NULL) && (n_49 != t)))
          _fail(t);
        else
          n_49 = t;
        t = not_null(j_49);
        t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
        if(((m_49 != NULL) && (m_49 != t)))
          _fail(t);
        else
          m_49 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          i_49 = ATgetArgument(t, 0);
          {
            ATerm o_49 = NULL,t_49 = NULL,u_49 = NULL;
            t = not_null(i_49);
            if(((o_49 != NULL) && (o_49 != t)))
              _fail(t);
            else
              o_49 = t;
            t = not_null(h_49);
            if(((u_49 != NULL) && (u_49 != t)))
              _fail(t);
            else
              u_49 = t;
            t = not_null(o_49);
            t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
            if(((t_49 != NULL) && (t_49 != t)))
              _fail(t);
            else
              t_49 = t;
          }
        }
      else
        {
          ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_49);
          if(((v_49 != NULL) && (v_49 != t)))
            _fail(t);
          else
            v_49 = t;
          t = not_null(h_49);
          if(((x_49 != NULL) && (x_49 != t)))
            _fail(t);
          else
            x_49 = t;
          t = not_null(v_49);
          t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
          if(((w_49 != NULL) && (w_49 != t)))
            _fail(t);
          else
            w_49 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm y_49 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym_Some_1))
        {
          if(((y_49 != NULL) && (y_49 != ATgetArgument(t_20, 0))))
            _fail(ATgetArgument(t_20, 0));
          else
            y_49 = ATgetArgument(t_20, 0);
        }
      else
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
      }
      {
        ATerm v_20 = ATgetArgument(t, 2);
      }
      {
        ATerm w_20 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(y_49);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm z_49 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((z_49 != NULL) && (z_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_49 = ATgetArgument(t, 0);
      {
        ATerm x_20 = ATgetArgument(t, 1);
      }
      {
        ATerm y_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(z_49);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  if(((c_50 != NULL) && (c_50 != t)))
    _fail(t);
  else
    c_50 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_50);
  if(match_cons(t, sym_HTTP_1))
    {
      e_50 = ATgetArgument(t, 0);
      {
        ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
        t = not_null(e_50);
        if(((f_50 != NULL) && (f_50 != t)))
          _fail(t);
        else
          f_50 = t;
        t = not_null(c_50);
        if(((h_50 != NULL) && (h_50 != t)))
          _fail(t);
        else
          h_50 = t;
        t = not_null(f_50);
        t = xtc_stream_input_0_0(t);
        if(((g_50 != NULL) && (g_50 != t)))
          _fail(t);
        else
          g_50 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_e_21;
        }
      else
        {
          ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(e_50);
          if(((i_50 != NULL) && (i_50 != t)))
            _fail(t);
          else
            i_50 = t;
          t = not_null(c_50);
          if(((k_50 != NULL) && (k_50 != t)))
            _fail(t);
          else
            k_50 = t;
          t = not_null(i_50);
          t = xtc_stream_input_0_0(t);
          if(((j_50 != NULL) && (j_50 != t)))
            _fail(t);
          else
            j_50 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm l_50 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      ATerm g_21 = ATgetArgument(t, 1);
      if(match_cons(g_21, sym_Some_1))
        {
          if(((l_50 != NULL) && (l_50 != ATgetArgument(g_21, 0))))
            _fail(ATgetArgument(g_21, 0));
          else
            l_50 = ATgetArgument(g_21, 0);
        }
      else
        _fail(t);
      {
        ATerm h_21 = ATgetArgument(t, 2);
      }
      {
        ATerm i_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(l_50);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((m_50 != NULL) && (m_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_50 = ATgetArgument(t, 1);
      {
        ATerm k_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(m_50);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(match_cons(l_21, sym_Exec_1))
        {
          if(((n_50 != NULL) && (n_50 != ATgetArgument(l_21, 0))))
            _fail(ATgetArgument(l_21, 0));
          else
            n_50 = ATgetArgument(l_21, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((p_50 != NULL) && (p_50 != t)))
    _fail(t);
  else
    p_50 = t;
  t = not_null(n_50);
  t = xtc_stream_output_0_0(t);
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm q_50 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      ATerm n_21 = ATgetArgument(t, 1);
      ATerm o_21 = ATgetArgument(t, 2);
      if(match_cons(o_21, sym_Some_1))
        {
          if(((q_50 != NULL) && (q_50 != ATgetArgument(o_21, 0))))
            _fail(ATgetArgument(o_21, 0));
          else
            q_50 = ATgetArgument(o_21, 0);
        }
      else
        _fail(t);
      {
        ATerm p_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(q_50);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm t_50 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      ATerm r_21 = ATgetArgument(t, 1);
      if(((t_50 != NULL) && (t_50 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(t_50);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(match_cons(s_21, sym_Exec_1))
        {
          if(((u_50 != NULL) && (u_50 != ATgetArgument(s_21, 0))))
            _fail(ATgetArgument(s_21, 0));
          else
            u_50 = ATgetArgument(s_21, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((w_50 != NULL) && (w_50 != t)))
    _fail(t);
  else
    w_50 = t;
  t = not_null(u_50);
  t = xtc_stream_error_0_0(t);
  if(((v_50 != NULL) && (v_50 != t)))
    _fail(t);
  else
    v_50 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm h_3, ATerm i_3, ATerm t)
{
  static ATerm c_52 (ATerm c_51, ATerm t);
  static ATerm d_52 (ATerm k_51, ATerm t);
  static ATerm e_52 (ATerm s_51, ATerm t);
  static ATerm c_52 (ATerm c_51, ATerm t)
  {
    ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
    t = not_null(c_51);
    if(((e_51 != NULL) && (e_51 != t)))
      _fail(t);
    else
      e_51 = t;
    t = not_null(h_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((f_51 != NULL) && (f_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          f_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(f_51);
    if(((h_51 != NULL) && (h_51 != t)))
      _fail(t);
    else
      h_51 = t;
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = not_null(i_3);
    t = xtc_conf_error_0_0(t);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = not_null(h_51);
    t = xtc_stream_to_arg_0_1(not_null(g_51), t);
    if(((d_51 != NULL) && (d_51 != t)))
      _fail(t);
    else
      d_51 = t;
    return(t);
  }
  static ATerm d_52 (ATerm k_51, ATerm t)
  {
    ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
    t = not_null(k_51);
    if(((m_51 != NULL) && (m_51 != t)))
      _fail(t);
    else
      m_51 = t;
    t = not_null(h_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((n_51 != NULL) && (n_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(n_51);
    if(((p_51 != NULL) && (p_51 != t)))
      _fail(t);
    else
      p_51 = t;
    if(((r_51 != NULL) && (r_51 != t)))
      _fail(t);
    else
      r_51 = t;
    t = not_null(i_3);
    t = xtc_conf_output_0_0(t);
    if(((q_51 != NULL) && (q_51 != t)))
      _fail(t);
    else
      q_51 = t;
    if(((o_51 != NULL) && (o_51 != t)))
      _fail(t);
    else
      o_51 = t;
    t = not_null(p_51);
    t = xtc_stream_to_arg_0_1(not_null(o_51), t);
    if(((l_51 != NULL) && (l_51 != t)))
      _fail(t);
    else
      l_51 = t;
    return(t);
  }
  static ATerm e_52 (ATerm s_51, ATerm t)
  {
    ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
    t = not_null(s_51);
    if(((u_51 != NULL) && (u_51 != t)))
      _fail(t);
    else
      u_51 = t;
    t = not_null(h_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((v_51 != NULL) && (v_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(v_51);
    if(((x_51 != NULL) && (x_51 != t)))
      _fail(t);
    else
      x_51 = t;
    if(((z_51 != NULL) && (z_51 != t)))
      _fail(t);
    else
      z_51 = t;
    t = not_null(i_3);
    t = xtc_conf_input_0_0(t);
    if(((y_51 != NULL) && (y_51 != t)))
      _fail(t);
    else
      y_51 = t;
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = not_null(x_51);
    t = xtc_stream_to_arg_0_1(not_null(w_51), t);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    return(t);
  }
  ATerm a_52 = NULL,b_52 = NULL;
  if(((a_52 != NULL) && (a_52 != t)))
    _fail(t);
  else
    a_52 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((b_52 != NULL) && (b_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(b_52);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_u_21);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = c_52(not_null(a_52), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = d_52(not_null(a_52), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = e_52(not_null(a_52), t);
            }
        }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_52 = NULL;
  if(((s_52 != NULL) && (s_52 != t)))
    _fail(t);
  else
    s_52 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if(match_cons(v_21, sym_TOr_2))
        {
          if(((g_52 != NULL) && (g_52 != ATgetArgument(v_21, 0))))
            _fail(ATgetArgument(v_21, 0));
          else
            g_52 = ATgetArgument(v_21, 0);
          if(((h_52 != NULL) && (h_52 != ATgetArgument(v_21, 1))))
            _fail(ATgetArgument(v_21, 1));
          else
            h_52 = ATgetArgument(v_21, 1);
        }
      else
        _fail(t);
      if(((i_52 != NULL) && (i_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_52 != NULL) && (l_52 != t)))
    _fail(t);
  else
    l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_52), not_null(h_52));
  if(((n_52 != NULL) && (n_52 != t)))
    _fail(t);
  else
    n_52 = t;
  t = term_w_21;
  if(((m_52 != NULL) && (m_52 != t)))
    _fail(t);
  else
    m_52 = t;
  t = not_null(n_52);
  t = dbg_0_1(not_null(m_52), t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_52 = NULL,p_52 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_52), not_null(i_52));
        t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
        t = term_z_21;
        if(((o_52 != NULL) && (o_52 != t)))
          _fail(t);
        else
          o_52 = t;
        t = not_null(p_52);
        t = dbg_0_1(not_null(o_52), t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm q_52 = NULL,r_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_52), not_null(i_52));
          t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
          if(((r_52 != NULL) && (r_52 != t)))
            _fail(t);
          else
            r_52 = t;
          t = term_a_22;
          if(((q_52 != NULL) && (q_52 != t)))
            _fail(t);
          else
            q_52 = t;
          t = not_null(r_52);
          t = dbg_0_1(not_null(q_52), t);
        }
      }
  }
  t = _2_0(concat_0_0, z_2, t);
  if(match_cons(t, sym__2))
    {
      if(((j_52 != NULL) && (j_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_52 = ATgetArgument(t, 0);
      if(((k_52 != NULL) && (k_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_52), not_null(k_52));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(((ATgetType(b_22) != AT_LIST) || !(ATisEmpty(b_22))))
        _fail(t);
      if(((t_52 != NULL) && (t_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_52));
  return(t);
}
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) == AT_LIST) && !(ATisEmpty(c_22))))
        {
          if(((x_52 != NULL) && (x_52 != ATgetFirst((ATermList) c_22))))
            _fail(ATgetFirst((ATermList) c_22));
          else
            x_52 = ATgetFirst((ATermList) c_22);
          if(((y_52 != NULL) && (y_52 != (ATerm) ATgetNext((ATermList) c_22))))
            _fail((ATerm) ATgetNext((ATermList) c_22));
          else
            y_52 = (ATerm) ATgetNext((ATermList) c_22);
        }
      else
        _fail(t);
      if(((u_52 != NULL) && (u_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_52), not_null(u_52));
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      if(((z_52 != NULL) && (z_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_52 = ATgetArgument(t, 0);
      if(((v_52 != NULL) && (v_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_52), not_null(v_52));
  t = o_1(t);
  if(match_cons(t, sym__2))
    {
      if(((a_53 != NULL) && (a_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_53 = ATgetArgument(t, 0);
      if(((w_52 != NULL) && (w_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_53)), not_null(z_52)), not_null(w_52));
  return(t);
}
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm e_53 (ATerm t);
  static ATerm e_53 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(t_130, e_53, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = e_53(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm g_53 = NULL;
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t)
{
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(x_91), not_null(y_91), t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm j_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm b_3 (ATerm t);
              static ATerm b_3 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(x_91), not_null(y_91), t);
                return(t);
              }
              t = _2_0(b_3, c_3, t);
              LocalPopChoice(q_23);
            }
          else
            {
              t = j_23;
              {
                ATerm o_24 = t;
                int t_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(t_25);
                  }
                else
                  {
                    t = o_24;
                    t = n_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(a_3, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      ATerm i_26 = ATgetArgument(t, 1);
      ATerm j_26 = ATgetArgument(t, 2);
      if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        h_53 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(h_53);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  if(((s_53 != NULL) && (s_53 != t)))
    _fail(t);
  else
    s_53 = t;
  t = Snd_0_0(t);
  if(((r_53 != NULL) && (r_53 != t)))
    _fail(t);
  else
    r_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_53));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm t_53 = NULL;
  if(((t_53 != NULL) && (t_53 != t)))
    _fail(t);
  else
    t_53 = t;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  if(((v_53 != NULL) && (v_53 != t)))
    _fail(t);
  else
    v_53 = t;
  t = Snd_0_0(t);
  if(((x_53 != NULL) && (x_53 != t)))
    _fail(t);
  else
    x_53 = t;
  t = term_k_26;
  if(((w_53 != NULL) && (w_53 != t)))
    _fail(t);
  else
    w_53 = t;
  t = not_null(x_53);
  t = err_0_1(not_null(w_53), t);
  t = not_null(v_53);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_26 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm b_27 = ATgetArgument(t, 0);
          if(!(match_cons(b_27, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_26;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,q_53 = NULL;
  if(((q_53 != NULL) && (q_53 != t)))
    _fail(t);
  else
    q_53 = t;
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  t = not_null(q_53);
  if(((n_53 != NULL) && (n_53 != t)))
    _fail(t);
  else
    n_53 = t;
  t = not_null(w_91);
  t = xtc_conf_args_0_0(t);
  if(((m_53 != NULL) && (m_53 != t)))
    _fail(t);
  else
    m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(m_53));
  t = xtc_targ_thread_map_1_2(d_3, not_null(v_91), not_null(w_91), t);
  t = _2_0(concat_0_0, e_3, t);
  {
    ATerm n_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_53 = NULL;
        if(((u_53 != NULL) && (u_53 != t)))
          _fail(t);
        else
          u_53 = t;
        t = Snd_0_0(t);
        {
          ATerm j_28 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_28;
            }
        }
        t = not_null(u_53);
        LocalPopChoice(w_27);
        t = restore_2_0(m_151, f_3, t);
      }
    else
      {
        t = n_27;
        t = Fst_0_0(t);
        t = filter_1_0(g_3, t);
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm k_28 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm l_28 = ATgetArgument(t, 0);
          if(!(match_cons(l_28, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  if(((z_53 != NULL) && (z_53 != t)))
    _fail(t);
  else
    z_53 = t;
  if(((b_54 != NULL) && (b_54 != t)))
    _fail(t);
  else
    b_54 = t;
  t = filter_1_0(n_3, t);
  if(((a_54 != NULL) && (a_54 != t)))
    _fail(t);
  else
    a_54 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_54 = NULL;
        if(((c_54 != NULL) && (c_54 != t)))
          _fail(t);
        else
          c_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_53), not_null(a_54));
        {
          ATerm o_28 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_28;
            }
        }
        t = not_null(c_54);
        LocalPopChoice(n_28);
        {
          ATerm d_54 = NULL,e_54 = NULL;
          if(((e_54 != NULL) && (e_54 != t)))
            _fail(t);
          else
            e_54 = t;
          t = term_l_29;
          if(((d_54 != NULL) && (d_54 != t)))
            _fail(t);
          else
            d_54 = t;
          t = not_null(e_54);
          t = err_0_1(not_null(d_54), t);
        }
      }
    else
      {
        t = m_28;
        {
          ATerm f_54 = NULL;
          if(((f_54 != NULL) && (f_54 != t)))
            _fail(t);
          else
            f_54 = t;
        }
      }
  }
  t = not_null(a_54);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  if(((p_54 != NULL) && (p_54 != t)))
    _fail(t);
  else
    p_54 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((q_54 != NULL) && (q_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_54 = ATgetArgument(t, 0);
      if(((r_54 != NULL) && (r_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_54);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
      t = not_null(r_54);
      if(match_cons(t, sym_Some_1))
        {
          if(((s_54 != NULL) && (s_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(s_54);
      if(match_cons(t, sym_Layout_1))
        {
          if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(t_54);
      if(((u_54 != NULL) && (u_54 != t)))
        _fail(t);
      else
        u_54 = t;
      t = not_null(p_54);
      if(((w_54 != NULL) && (w_54 != t)))
        _fail(t);
      else
        w_54 = t;
      t = not_null(u_54);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(d_1), not_null(f_1), t);
      if(((v_54 != NULL) && (v_54 != t)))
        _fail(t);
      else
        v_54 = t;
    }
  else
    {
      ATerm x_54 = NULL,b_55 = NULL,c_55 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(r_54);
      if(match_cons(t, sym_Some_1))
        {
          if(((s_54 != NULL) && (s_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(s_54);
      if(match_cons(t, sym_Layout_1))
        {
          if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(t_54);
      if(((x_54 != NULL) && (x_54 != t)))
        _fail(t);
      else
        x_54 = t;
      t = not_null(p_54);
      if(((c_55 != NULL) && (c_55 != t)))
        _fail(t);
      else
        c_55 = t;
      t = not_null(x_54);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(d_1), not_null(f_1), t);
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm l_55 = NULL;
  if(((l_55 != NULL) && (l_55 != t)))
    _fail(t);
  else
    l_55 = t;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_55 = NULL;
  if(((m_55 != NULL) && (m_55 != t)))
    _fail(t);
  else
    m_55 = t;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm n_55 = NULL;
  if(((n_55 != NULL) && (n_55 != t)))
    _fail(t);
  else
    n_55 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  static ATerm r_3 (ATerm t);
  static ATerm r_3 (ATerm t)
  {
    t = not_null(j_55);
    t = xtc_template_to_args_0_2(not_null(k_55), not_null(p_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((k_55 != NULL) && (k_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_55 = ATgetArgument(t, 0);
      if(((j_55 != NULL) && (j_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_92);
  t = XtcConf_4_0(o_3, p_3, q_3, r_3, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm k_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  if(((y_56 != NULL) && (y_56 != t)))
    _fail(t);
  else
    y_56 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
      b_57 = ATgetArgument(t, 2);
      c_57 = ATgetArgument(t, 3);
      t = not_null(b_57);
      if(match_cons(t, sym_Some_1))
        {
          k_56 = ATgetArgument(t, 0);
          {
            ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
            t = not_null(c_57);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(z_56);
            if(((d_57 != NULL) && (d_57 != t)))
              _fail(t);
            else
              d_57 = t;
            t = not_null(a_57);
            if(((e_57 != NULL) && (e_57 != t)))
              _fail(t);
            else
              e_57 = t;
            t = not_null(k_56);
            if(((f_57 != NULL) && (f_57 != t)))
              _fail(t);
            else
              f_57 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(d_57), not_null(e_57), (ATerm)ATmakeAppl(sym_Some_1, not_null(f_57)), term_o_29);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(c_57);
          if(match_cons(t, sym_Some_1))
            {
              x_56 = ATgetArgument(t, 0);
              {
                ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
                t = not_null(z_56);
                if(((g_57 != NULL) && (g_57 != t)))
                  _fail(t);
                else
                  g_57 = t;
                t = not_null(a_57);
                if(((h_57 != NULL) && (h_57 != t)))
                  _fail(t);
                else
                  h_57 = t;
                t = not_null(x_56);
                if(((i_57 != NULL) && (i_57 != t)))
                  _fail(t);
                else
                  i_57 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(g_57), not_null(h_57), term_x_30, (ATerm) ATmakeAppl(sym_Some_1, not_null(i_57)));
              }
            }
          else
            {
              ATerm j_57 = NULL,k_57 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(z_56);
              if(((j_57 != NULL) && (j_57 != t)))
                _fail(t);
              else
                j_57 = t;
              t = not_null(a_57);
              if(((k_57 != NULL) && (k_57 != t)))
                _fail(t);
              else
                k_57 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(j_57), not_null(k_57), term_x_30, term_o_29);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          z_56 = ATgetArgument(t, 0);
          a_57 = ATgetArgument(t, 1);
          b_57 = ATgetArgument(t, 2);
          c_57 = ATgetArgument(t, 3);
          t = not_null(b_57);
          if(match_cons(t, sym_Some_1))
            {
              k_56 = ATgetArgument(t, 0);
              {
                ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
                t = not_null(c_57);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(z_56);
                if(((l_57 != NULL) && (l_57 != t)))
                  _fail(t);
                else
                  l_57 = t;
                t = not_null(a_57);
                if(((m_57 != NULL) && (m_57 != t)))
                  _fail(t);
                else
                  m_57 = t;
                t = not_null(k_56);
                if(((n_57 != NULL) && (n_57 != t)))
                  _fail(t);
                else
                  n_57 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(l_57), not_null(m_57), (ATerm)ATmakeAppl(sym_Some_1, not_null(n_57)), term_o_29);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(c_57);
              if(match_cons(t, sym_Some_1))
                {
                  x_56 = ATgetArgument(t, 0);
                  {
                    ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
                    t = not_null(z_56);
                    if(((o_57 != NULL) && (o_57 != t)))
                      _fail(t);
                    else
                      o_57 = t;
                    t = not_null(a_57);
                    if(((p_57 != NULL) && (p_57 != t)))
                      _fail(t);
                    else
                      p_57 = t;
                    t = not_null(x_56);
                    if(((q_57 != NULL) && (q_57 != t)))
                      _fail(t);
                    else
                      q_57 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(o_57), not_null(p_57), term_x_30, (ATerm) ATmakeAppl(sym_Some_1, not_null(q_57)));
                  }
                }
              else
                {
                  ATerm r_57 = NULL,s_57 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(z_56);
                  if(((r_57 != NULL) && (r_57 != t)))
                    _fail(t);
                  else
                    r_57 = t;
                  t = not_null(a_57);
                  if(((s_57 != NULL) && (s_57 != t)))
                    _fail(t);
                  else
                    s_57 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(r_57), not_null(s_57), term_x_30, term_o_29);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              z_56 = ATgetArgument(t, 0);
              a_57 = ATgetArgument(t, 1);
              b_57 = ATgetArgument(t, 2);
              c_57 = ATgetArgument(t, 3);
              t = not_null(b_57);
              if(match_cons(t, sym_Some_1))
                {
                  k_56 = ATgetArgument(t, 0);
                  {
                    ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
                    t = not_null(c_57);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(z_56);
                    if(((t_57 != NULL) && (t_57 != t)))
                      _fail(t);
                    else
                      t_57 = t;
                    t = not_null(a_57);
                    if(((u_57 != NULL) && (u_57 != t)))
                      _fail(t);
                    else
                      u_57 = t;
                    t = not_null(k_56);
                    if(((v_57 != NULL) && (v_57 != t)))
                      _fail(t);
                    else
                      v_57 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(t_57), not_null(u_57), (ATerm)ATmakeAppl(sym_Some_1, not_null(v_57)), term_o_29);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(c_57);
                  if(match_cons(t, sym_Some_1))
                    {
                      x_56 = ATgetArgument(t, 0);
                      {
                        ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
                        t = not_null(z_56);
                        if(((w_57 != NULL) && (w_57 != t)))
                          _fail(t);
                        else
                          w_57 = t;
                        t = not_null(a_57);
                        if(((x_57 != NULL) && (x_57 != t)))
                          _fail(t);
                        else
                          x_57 = t;
                        t = not_null(x_56);
                        if(((y_57 != NULL) && (y_57 != t)))
                          _fail(t);
                        else
                          y_57 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(w_57), not_null(x_57), term_x_30, (ATerm) ATmakeAppl(sym_Some_1, not_null(y_57)));
                      }
                    }
                  else
                    {
                      ATerm z_57 = NULL,a_58 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(z_56);
                      if(((z_57 != NULL) && (z_57 != t)))
                        _fail(t);
                      else
                        z_57 = t;
                      t = not_null(a_57);
                      if(((a_58 != NULL) && (a_58 != t)))
                        _fail(t);
                      else
                        a_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(z_57), not_null(a_58), term_x_30, term_o_29);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((z_56 != NULL) && (z_56 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_56 = ATgetArgument(t, 0);
                  if(((a_57 != NULL) && (a_57 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    a_57 = ATgetArgument(t, 1);
                  if(((b_57 != NULL) && (b_57 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    b_57 = ATgetArgument(t, 2);
                  if(((c_57 != NULL) && (c_57 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    c_57 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(b_57);
              if(match_cons(t, sym_Some_1))
                {
                  k_56 = ATgetArgument(t, 0);
                  {
                    ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
                    t = not_null(c_57);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(z_56);
                    if(((b_58 != NULL) && (b_58 != t)))
                      _fail(t);
                    else
                      b_58 = t;
                    t = not_null(a_57);
                    if(((c_58 != NULL) && (c_58 != t)))
                      _fail(t);
                    else
                      c_58 = t;
                    t = not_null(k_56);
                    if(((d_58 != NULL) && (d_58 != t)))
                      _fail(t);
                    else
                      d_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(b_58), not_null(c_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(d_58)), term_o_29);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(c_57);
                  if(match_cons(t, sym_Some_1))
                    {
                      x_56 = ATgetArgument(t, 0);
                      {
                        ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
                        t = not_null(z_56);
                        if(((e_58 != NULL) && (e_58 != t)))
                          _fail(t);
                        else
                          e_58 = t;
                        t = not_null(a_57);
                        if(((f_58 != NULL) && (f_58 != t)))
                          _fail(t);
                        else
                          f_58 = t;
                        t = not_null(x_56);
                        if(((g_58 != NULL) && (g_58 != t)))
                          _fail(t);
                        else
                          g_58 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(e_58), not_null(f_58), term_x_30, (ATerm) ATmakeAppl(sym_Some_1, not_null(g_58)));
                      }
                    }
                  else
                    {
                      ATerm h_58 = NULL,i_58 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(z_56);
                      if(((h_58 != NULL) && (h_58 != t)))
                        _fail(t);
                      else
                        h_58 = t;
                      t = not_null(a_57);
                      if(((i_58 != NULL) && (i_58 != t)))
                        _fail(t);
                      else
                        i_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(h_58), not_null(i_58), term_x_30, term_o_29);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL;
  if(((q_58 != NULL) && (q_58 != t)))
    _fail(t);
  else
    q_58 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((r_58 != NULL) && (r_58 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_58 = ATgetArgument(t, 0);
      if(((s_58 != NULL) && (s_58 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_58);
  if(match_cons(t, sym_Some_1))
    {
      o_58 = ATgetArgument(t, 0);
      {
        ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
        t = not_null(r_58);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(o_58);
        if(match_cons(t, sym_Layout_1))
          {
            if(((p_58 != NULL) && (p_58 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              p_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(p_58);
        if(((t_58 != NULL) && (t_58 != t)))
          _fail(t);
        else
          t_58 = t;
        t = not_null(q_58);
        if(((v_58 != NULL) && (v_58 != t)))
          _fail(t);
        else
          v_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_21), term_l_31), term_j_31), term_h_31), not_null(t_58));
        t = union_0_0(t);
        if(((u_58 != NULL) && (u_58 != t)))
          _fail(t);
        else
          u_58 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_i_32, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(u_58))));
      }
    }
  else
    {
      ATerm w_58 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(r_58);
      if(((w_58 != NULL) && (w_58 != t)))
        _fail(t);
      else
        w_58 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(w_58), term_t_32);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if(!(match_cons(u_32, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_q_33;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t);
  static ATerm s_3 (ATerm t)
  {
    t = bottomup_1_0(v_116, t);
    return(t);
  }
  t = SRTS_all(s_3, t);
  t = v_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm t_3 (ATerm t);
  static ATerm t_3 (ATerm t)
  {
    static ATerm u_3 (ATerm t);
    static ATerm u_3 (ATerm t)
    {
      t = a_121(t);
      t = innermost_1_0(a_121, t);
      return(t);
    }
    t = try_1_0(u_3, t);
    return(t);
  }
  t = bottomup_1_0(t_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm r_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = r_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(v_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm y_58 = NULL;
  if(((y_58 != NULL) && (y_58 != t)))
    _fail(t);
  else
    y_58 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  static ATerm z_58 (ATerm t);
  static ATerm z_58 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_3, z_58, t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = Nil_0_0(t);
        t = u_123(t);
      }
    return(t);
  }
  t = z_58(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
        if(((b_59 != NULL) && (b_59 != t)))
          _fail(t);
        else
          b_59 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_59 != NULL) && (c_59 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_59 = ATgetFirst((ATermList) t);
            if(((d_59 != NULL) && (d_59 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_59);
        if(((e_59 != NULL) && (e_59 != t)))
          _fail(t);
        else
          e_59 = t;
        t = not_null(d_59);
        if(((f_59 != NULL) && (f_59 != t)))
          _fail(t);
        else
          f_59 = t;
        t = not_null(b_59);
        if(((h_59 != NULL) && (h_59 != t)))
          _fail(t);
        else
          h_59 = t;
        t = not_null(e_59);
        {
          static ATerm x_3 (ATerm t);
          static ATerm x_3 (ATerm t)
          {
            t = not_null(f_59);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
        if(((g_59 != NULL) && (g_59 != t)))
          _fail(t);
        else
          g_59 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm j_63 (ATerm i_60, ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  t = not_null(i_60);
  if(((l_60 != NULL) && (l_60 != t)))
    _fail(t);
  else
    l_60 = t;
  t = not_null(j_60);
  if(((m_60 != NULL) && (m_60 != t)))
    _fail(t);
  else
    m_60 = t;
  t = not_null(k_60);
  if(((o_60 != NULL) && (o_60 != t)))
    _fail(t);
  else
    o_60 = t;
  t = not_null(l_60);
  t = is_string_0_0(t);
  t = not_null(m_60);
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(y_3, t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = XtcQuery_2_0(z_3, a_4, t);
      }
  }
  {
    ATerm k_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL;
        if(((s_60 != NULL) && (s_60 != t)))
          _fail(t);
        else
          s_60 = t;
        t = xtc_find_0_0(t);
        if(((n_60 != NULL) && (n_60 != t)))
          _fail(t);
        else
          n_60 = t;
        t = not_null(s_60);
        LocalPopChoice(s_34);
        {
          ATerm t_60 = NULL,u_60 = NULL;
          if(((u_60 != NULL) && (u_60 != t)))
            _fail(t);
          else
            u_60 = t;
          t = term_t_34;
          if(((t_60 != NULL) && (t_60 != t)))
            _fail(t);
          else
            t_60 = t;
          t = not_null(u_60);
          t = dbg_0_1(not_null(t_60), t);
        }
      }
    else
      {
        t = k_34;
        {
          ATerm v_60 = NULL,w_60 = NULL;
          if(((w_60 != NULL) && (w_60 != t)))
            _fail(t);
          else
            w_60 = t;
          t = term_w_34;
          if(((v_60 != NULL) && (v_60 != t)))
            _fail(t);
          else
            v_60 = t;
          t = not_null(w_60);
          t = err_0_1(not_null(v_60), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(l_60)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(n_60)))));
  return(t);
}
static ATerm l_63 (ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  t = not_null(x_60);
  if(((z_60 != NULL) && (z_60 != t)))
    _fail(t);
  else
    z_60 = t;
  t = not_null(y_60);
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(z_60);
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(b_4, t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = XtcQuery_2_0(c_4, d_4, t);
      }
  }
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_61 = NULL;
        if(((f_61 != NULL) && (f_61 != t)))
          _fail(t);
        else
          f_61 = t;
        t = xtc_find_0_0(t);
        if(((a_61 != NULL) && (a_61 != t)))
          _fail(t);
        else
          a_61 = t;
        t = not_null(f_61);
        LocalPopChoice(f_35);
        {
          ATerm g_61 = NULL,h_61 = NULL;
          if(((h_61 != NULL) && (h_61 != t)))
            _fail(t);
          else
            h_61 = t;
          t = term_t_34;
          if(((g_61 != NULL) && (g_61 != t)))
            _fail(t);
          else
            g_61 = t;
          t = not_null(h_61);
          t = dbg_0_1(not_null(g_61), t);
        }
      }
    else
      {
        t = e_35;
        {
          ATerm i_61 = NULL,j_61 = NULL;
          if(((j_61 != NULL) && (j_61 != t)))
            _fail(t);
          else
            j_61 = t;
          t = term_w_34;
          if(((i_61 != NULL) && (i_61 != t)))
            _fail(t);
          else
            i_61 = t;
          t = not_null(j_61);
          t = err_0_1(not_null(i_61), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(a_61)))));
  return(t);
}
static ATerm m_63 (ATerm k_61, ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
  t = not_null(k_61);
  if(((l_61 != NULL) && (l_61 != t)))
    _fail(t);
  else
    l_61 = t;
  t = not_null(k_61);
  if(((n_61 != NULL) && (n_61 != t)))
    _fail(t);
  else
    n_61 = t;
  t = not_null(l_61);
  if(match_cons(t, sym_URL_1))
    {
      if(((o_61 != NULL) && (o_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(o_61);
  if(((m_61 != NULL) && (m_61 != t)))
    _fail(t);
  else
    m_61 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(m_61)))));
  return(t);
}
static ATerm n_63 (ATerm p_61, ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  t = not_null(p_61);
  if(((q_61 != NULL) && (q_61 != t)))
    _fail(t);
  else
    q_61 = t;
  t = not_null(p_61);
  if(((s_61 != NULL) && (s_61 != t)))
    _fail(t);
  else
    s_61 = t;
  t = not_null(q_61);
  if(match_cons(t, sym_FILE_1))
    {
      if(((t_61 != NULL) && (t_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(t_61);
  if(((r_61 != NULL) && (r_61 != t)))
    _fail(t);
  else
    r_61 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(r_61)))));
  return(t);
}
static ATerm o_63 (ATerm u_61, ATerm v_61, ATerm w_61, ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  t = not_null(u_61);
  if(((x_61 != NULL) && (x_61 != t)))
    _fail(t);
  else
    x_61 = t;
  t = not_null(v_61);
  if(((y_61 != NULL) && (y_61 != t)))
    _fail(t);
  else
    y_61 = t;
  t = not_null(w_61);
  if(((a_62 != NULL) && (a_62 != t)))
    _fail(t);
  else
    a_62 = t;
  t = not_null(x_61);
  t = is_string_0_0(t);
  t = not_null(y_61);
  if(match_cons(t, sym_URL_1))
    {
      if(((b_62 != NULL) && (b_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(b_62);
  if(((z_61 != NULL) && (z_61 != t)))
    _fail(t);
  else
    z_61 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(x_61)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(z_61)))));
  return(t);
}
static ATerm p_63 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  t = not_null(c_62);
  if(((f_62 != NULL) && (f_62 != t)))
    _fail(t);
  else
    f_62 = t;
  t = not_null(d_62);
  if(((g_62 != NULL) && (g_62 != t)))
    _fail(t);
  else
    g_62 = t;
  t = not_null(e_62);
  if(((i_62 != NULL) && (i_62 != t)))
    _fail(t);
  else
    i_62 = t;
  t = not_null(f_62);
  t = is_string_0_0(t);
  t = not_null(g_62);
  if(match_cons(t, sym_FILE_1))
    {
      if(((j_62 != NULL) && (j_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(j_62);
  if(((h_62 != NULL) && (h_62 != t)))
    _fail(t);
  else
    h_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(f_62)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(h_62)))));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm p_60 = NULL;
  if(((p_60 != NULL) && (p_60 != t)))
    _fail(t);
  else
    p_60 = t;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_60 = NULL;
  if(((q_60 != NULL) && (q_60 != t)))
    _fail(t);
  else
    q_60 = t;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm r_60 = NULL;
  if(((r_60 != NULL) && (r_60 != t)))
    _fail(t);
  else
    r_60 = t;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_61 = NULL;
  if(((c_61 != NULL) && (c_61 != t)))
    _fail(t);
  else
    c_61 = t;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm d_61 = NULL;
  if(((d_61 != NULL) && (d_61 != t)))
    _fail(t);
  else
    d_61 = t;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm e_61 = NULL;
  if(((e_61 != NULL) && (e_61 != t)))
    _fail(t);
  else
    e_61 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
  if(((l_62 != NULL) && (l_62 != t)))
    _fail(t);
  else
    l_62 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      m_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
      t = not_null(m_62);
      if(match_cons(t, sym_String_1))
        {
          k_62 = ATgetArgument(t, 0);
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_63(not_null(k_62), not_null(n_62), not_null(l_62), t);
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
                {
                  ATerm k_35 = t;
                  int l_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_63(not_null(l_62), t);
                      LocalPopChoice(l_35);
                    }
                  else
                    {
                      t = k_35;
                      {
                        ATerm s_35 = t;
                        int r_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_63(not_null(l_62), t);
                            LocalPopChoice(r_36);
                          }
                        else
                          {
                            t = s_35;
                            {
                              ATerm o_62 = NULL,p_62 = NULL;
                              t = not_null(l_62);
                              if(((o_62 != NULL) && (o_62 != t)))
                                _fail(t);
                              else
                                o_62 = t;
                              t = not_null(l_62);
                              if(((p_62 != NULL) && (p_62 != t)))
                                _fail(t);
                              else
                                p_62 = t;
                              t = not_null(o_62);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_62))));
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
          ATerm f_37 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_63(not_null(l_62), t);
              LocalPopChoice(g_37);
            }
          else
            {
              t = f_37;
              {
                ATerm h_37 = t;
                int i_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_63(not_null(l_62), t);
                    LocalPopChoice(i_37);
                  }
                else
                  {
                    t = h_37;
                    {
                      ATerm q_62 = NULL,r_62 = NULL;
                      t = not_null(l_62);
                      if(((q_62 != NULL) && (q_62 != t)))
                        _fail(t);
                      else
                        q_62 = t;
                      t = not_null(l_62);
                      if(((r_62 != NULL) && (r_62 != t)))
                        _fail(t);
                      else
                        r_62 = t;
                      t = not_null(q_62);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(q_62))));
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
          m_62 = ATgetArgument(t, 0);
          {
            ATerm m_37 = t;
            int p_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_63(not_null(m_62), not_null(l_62), t);
                LocalPopChoice(p_37);
              }
            else
              {
                t = m_37;
                {
                  ATerm q_37 = t;
                  int g_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_63(not_null(l_62), t);
                      LocalPopChoice(g_38);
                    }
                  else
                    {
                      t = q_37;
                      {
                        ATerm h_38 = t;
                        int l_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_63(not_null(l_62), t);
                            LocalPopChoice(l_38);
                          }
                        else
                          {
                            t = h_38;
                            {
                              ATerm s_62 = NULL,t_62 = NULL;
                              t = not_null(l_62);
                              if(((s_62 != NULL) && (s_62 != t)))
                                _fail(t);
                              else
                                s_62 = t;
                              t = not_null(l_62);
                              if(((t_62 != NULL) && (t_62 != t)))
                                _fail(t);
                              else
                                t_62 = t;
                              t = not_null(s_62);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_62))));
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
              m_62 = ATgetArgument(t, 0);
              n_62 = ATgetArgument(t, 1);
              {
                ATerm m_38 = t;
                int o_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_63(not_null(l_62), t);
                    LocalPopChoice(o_39);
                  }
                else
                  {
                    t = m_38;
                    {
                      ATerm p_39 = t;
                      int q_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_63(not_null(l_62), t);
                          LocalPopChoice(q_39);
                        }
                      else
                        {
                          t = p_39;
                          {
                            ATerm r_39 = t;
                            int s_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_62 = NULL,v_62 = NULL;
                                t = not_null(l_62);
                                if(((u_62 != NULL) && (u_62 != t)))
                                  _fail(t);
                                else
                                  u_62 = t;
                                t = not_null(l_62);
                                if(((v_62 != NULL) && (v_62 != t)))
                                  _fail(t);
                                else
                                  v_62 = t;
                                t = not_null(u_62);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(u_62))));
                                LocalPopChoice(s_39);
                              }
                            else
                              {
                                t = r_39;
                                {
                                  ATerm t_39 = t;
                                  int u_39 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_63(not_null(m_62), not_null(n_62), not_null(l_62), t);
                                      LocalPopChoice(u_39);
                                    }
                                  else
                                    {
                                      t = t_39;
                                      {
                                        ATerm v_39 = t;
                                        int w_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_63(not_null(m_62), not_null(n_62), not_null(l_62), t);
                                            LocalPopChoice(w_39);
                                          }
                                        else
                                          {
                                            t = v_39;
                                            {
                                              ATerm x_39 = t;
                                              int y_39 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
                                                  t = not_null(m_62);
                                                  if(((w_62 != NULL) && (w_62 != t)))
                                                    _fail(t);
                                                  else
                                                    w_62 = t;
                                                  t = not_null(n_62);
                                                  if(((x_62 != NULL) && (x_62 != t)))
                                                    _fail(t);
                                                  else
                                                    x_62 = t;
                                                  t = not_null(l_62);
                                                  if(((y_62 != NULL) && (y_62 != t)))
                                                    _fail(t);
                                                  else
                                                    y_62 = t;
                                                  t = not_null(w_62);
                                                  t = is_string_0_0(t);
                                                  t = not_null(x_62);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(w_62)), (ATerm) ATmakeAppl(sym_String_1, not_null(x_62))));
                                                  LocalPopChoice(y_39);
                                                }
                                              else
                                                {
                                                  t = x_39;
                                                  {
                                                    ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
                                                    t = not_null(m_62);
                                                    if(((a_63 != NULL) && (a_63 != t)))
                                                      _fail(t);
                                                    else
                                                      a_63 = t;
                                                    t = not_null(n_62);
                                                    if(((z_62 != NULL) && (z_62 != t)))
                                                      _fail(t);
                                                    else
                                                      z_62 = t;
                                                    t = not_null(l_62);
                                                    if(((c_63 != NULL) && (c_63 != t)))
                                                      _fail(t);
                                                    else
                                                      c_63 = t;
                                                    t = not_null(a_63);
                                                    t = is_string_0_0(t);
                                                    t = not_null(z_62);
                                                    {
                                                      static ATerm e_4 (ATerm t);
                                                      static ATerm e_4 (ATerm t)
                                                      {
                                                        ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
                                                        if(((e_63 != NULL) && (e_63 != t)))
                                                          _fail(t);
                                                        else
                                                          e_63 = t;
                                                        if(((g_63 != NULL) && (g_63 != t)))
                                                          _fail(t);
                                                        else
                                                          g_63 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_63), not_null(e_63));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((f_63 != NULL) && (f_63 != t)))
                                                          _fail(t);
                                                        else
                                                          f_63 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(e_4, t);
                                                    }
                                                    if(((b_63 != NULL) && (b_63 != t)))
                                                      _fail(t);
                                                    else
                                                      b_63 = t;
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
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_63(not_null(l_62), t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  {
                    ATerm b_40 = t;
                    int c_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_63(not_null(l_62), t);
                        LocalPopChoice(c_40);
                      }
                    else
                      {
                        t = b_40;
                        {
                          ATerm h_63 = NULL,i_63 = NULL;
                          t = not_null(l_62);
                          if(((h_63 != NULL) && (h_63 != t)))
                            _fail(t);
                          else
                            h_63 = t;
                          t = not_null(l_62);
                          if(((i_63 != NULL) && (i_63 != t)))
                            _fail(t);
                          else
                            i_63 = t;
                          t = not_null(h_63);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(h_63))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
        if(((h_64 != NULL) && (h_64 != t)))
          _fail(t);
        else
          h_64 = t;
        if(((j_64 != NULL) && (j_64 != t)))
          _fail(t);
        else
          j_64 = t;
        t = not_null(h_64);
        if(((i_64 != NULL) && (i_64 != t)))
          _fail(t);
        else
          i_64 = t;
        t = (ATerm) ATinsert(ATempty, not_null(i_64));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  static ATerm k_64 (ATerm t);
  static ATerm k_64 (ATerm t)
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((q_63 != NULL) && (q_63 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              q_63 = ATgetFirst((ATermList) t);
            {
              ATerm h_40 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
                {
                  if(((r_63 != NULL) && (r_63 != ATgetFirst((ATermList) h_40))))
                    _fail(ATgetFirst((ATermList) h_40));
                  else
                    r_63 = ATgetFirst((ATermList) h_40);
                  if(((s_63 != NULL) && (s_63 != (ATerm) ATgetNext((ATermList) h_40))))
                    _fail((ATerm) ATgetNext((ATermList) h_40));
                  else
                    s_63 = (ATerm) ATgetNext((ATermList) h_40);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_40);
        {
          ATerm i_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_63 = NULL;
              if(((t_63 != NULL) && (t_63 != t)))
                _fail(t);
              else
                t_63 = t;
              t = not_null(q_63);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(t_63);
              LocalPopChoice(j_40);
              {
                ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
                if(((x_63 != NULL) && (x_63 != t)))
                  _fail(t);
                else
                  x_63 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), not_null(r_63));
                if(((z_63 != NULL) && (z_63 != t)))
                  _fail(t);
                else
                  z_63 = t;
                t = term_k_40;
                if(((y_63 != NULL) && (y_63 != t)))
                  _fail(t);
                else
                  y_63 = t;
                t = not_null(z_63);
                t = dbg_0_1(not_null(y_63), t);
                t = xtc_desugar_arg_0_0(t);
                if(((u_63 != NULL) && (u_63 != t)))
                  _fail(t);
                else
                  u_63 = t;
                t = not_null(x_63);
                if(((w_63 != NULL) && (w_63 != t)))
                  _fail(t);
                else
                  w_63 = t;
                t = not_null(s_63);
                t = k_64(t);
                if(((v_63 != NULL) && (v_63 != t)))
                  _fail(t);
                else
                  v_63 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(v_63)), not_null(u_63));
              }
            }
          else
            {
              t = i_40;
              {
                ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
                if(((d_64 != NULL) && (d_64 != t)))
                  _fail(t);
                else
                  d_64 = t;
                t = not_null(q_63);
                {
                  ATerm l_40 = t;
                  int m_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(m_40);
                    }
                  else
                    {
                      t = l_40;
                      {
                        ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
                        if(((e_64 != NULL) && (e_64 != t)))
                          _fail(t);
                        else
                          e_64 = t;
                        if(((g_64 != NULL) && (g_64 != t)))
                          _fail(t);
                        else
                          g_64 = t;
                        t = not_null(e_64);
                        if(((f_64 != NULL) && (f_64 != t)))
                          _fail(t);
                        else
                          f_64 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(f_64));
                      }
                    }
                }
                if(((a_64 != NULL) && (a_64 != t)))
                  _fail(t);
                else
                  a_64 = t;
                t = not_null(d_64);
                if(((c_64 != NULL) && (c_64 != t)))
                  _fail(t);
                else
                  c_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(r_63)), not_null(s_63));
                t = conc_0_0(t);
                t = k_64(t);
                if(((b_64 != NULL) && (b_64 != t)))
                  _fail(t);
                else
                  b_64 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(b_64)), not_null(a_64));
              }
            }
        }
      }
    else
      {
        t = f_40;
        {
          ATerm n_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(f_4, k_64, t);
              LocalPopChoice(o_40);
            }
          else
            {
              t = n_40;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = k_64(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_64 = NULL;
  if(((o_64 != NULL) && (o_64 != t)))
    _fail(t);
  else
    o_64 = t;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_64 = NULL;
  if(((p_64 != NULL) && (p_64 != t)))
    _fail(t);
  else
    p_64 = t;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_64 = NULL;
  if(((q_64 != NULL) && (q_64 != t)))
    _fail(t);
  else
    q_64 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(g_4, h_4, i_4, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm a_65 = NULL;
  if(((a_65 != NULL) && (a_65 != t)))
    _fail(t);
  else
    a_65 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, j_4, t);
  if(match_cons(t, sym__2))
    {
      if(((s_64 != NULL) && (s_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_64 = ATgetArgument(t, 0);
      if(((t_64 != NULL) && (t_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((z_64 != NULL) && (z_64 != t)))
    _fail(t);
  else
    z_64 = t;
  t = term_p_40;
  if(((y_64 != NULL) && (y_64 != t)))
    _fail(t);
  else
    y_64 = t;
  t = not_null(z_64);
  t = xtc_fetch_meta_0_1(not_null(y_64), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm q_40 = ATgetArgument(t, 0);
      if(match_cons(q_40, sym_XtcDesc_1))
        {
          if(((u_64 != NULL) && (u_64 != ATgetArgument(q_40, 0))))
            _fail(ATgetArgument(q_40, 0));
          else
            u_64 = ATgetArgument(q_40, 0);
        }
      else
        _fail(t);
      {
        ATerm r_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(s_64), t);
  if(((v_64 != NULL) && (v_64 != t)))
    _fail(t);
  else
    v_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_64), not_null(v_64), not_null(t_64));
  t = xtc_prepare_0_0(t);
  if(((x_64 != NULL) && (x_64 != t)))
    _fail(t);
  else
    x_64 = t;
  if(((w_64 != NULL) && (w_64 != t)))
    _fail(t);
  else
    w_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_64), not_null(v_64), not_null(w_64));
  return(t);
}
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, q_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm c_65 = NULL;
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_65 (ATerm d_65, ATerm t);
        static ATerm o_65 (ATerm d_65, ATerm t)
        {
          ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
          t = not_null(d_65);
          if(((h_65 != NULL) && (h_65 != t)))
            _fail(t);
          else
            h_65 = t;
          t = not_null(d_65);
          if(((i_65 != NULL) && (i_65 != t)))
            _fail(t);
          else
            i_65 = t;
          t = not_null(h_65);
          if(((j_65 != NULL) && (j_65 != t)))
            _fail(t);
          else
            j_65 = t;
          t = SSL_explode_term(not_null(j_65));
          if(match_cons(t, sym__2))
            {
              if(((c_65 != NULL) && (c_65 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_65 = ATgetArgument(t, 0);
              {
                ATerm u_40 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(i_65);
          if(((g_65 != NULL) && (g_65 != t)))
            _fail(t);
          else
            g_65 = t;
          t = not_null(e_80);
          {
            ATerm v_40 = t;
            if((PushChoice() == 0))
              {
                static ATerm l_4 (ATerm t);
                static ATerm l_4 (ATerm t)
                {
                  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
                  if(((k_65 != NULL) && (k_65 != t)))
                    _fail(t);
                  else
                    k_65 = t;
                  if(((l_65 != NULL) && (l_65 != t)))
                    _fail(t);
                  else
                    l_65 = t;
                  t = not_null(k_65);
                  if(((m_65 != NULL) && (m_65 != t)))
                    _fail(t);
                  else
                    m_65 = t;
                  t = SSL_explode_term(not_null(m_65));
                  if(match_cons(t, sym__2))
                    {
                      if(((c_65 != NULL) && (c_65 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_65 = ATgetArgument(t, 0);
                      {
                        ATerm w_40 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(l_65);
                  return(t);
                }
                t = SRTS_one(l_4, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_40;
              }
          }
          t = not_null(g_65);
          if(((f_65 != NULL) && (f_65 != t)))
            _fail(t);
          else
            f_65 = t;
          if(((e_65 != NULL) && (e_65 != t)))
            _fail(t);
          else
            e_65 = t;
          t = (ATerm) ATinsert(ATempty, not_null(e_65));
          return(t);
        }
        ATerm n_65 = NULL;
        if(((n_65 != NULL) && (n_65 != t)))
          _fail(t);
        else
          n_65 = t;
        t = o_65(not_null(n_65), t);
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(k_4, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,y_65 = NULL,z_65 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_65 != NULL) && (p_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_65 = ATgetArgument(t, 0);
      if(((z_65 != NULL) && (z_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_65);
  t = xtc_filter_meta_0_1(not_null(c_80), t);
  if(((r_65 != NULL) && (r_65 != t)))
    _fail(t);
  else
    r_65 = t;
  if(((y_65 != NULL) && (y_65 != t)))
    _fail(t);
  else
    y_65 = t;
  if(((s_65 != NULL) && (s_65 != t)))
    _fail(t);
  else
    s_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_65), not_null(c_80));
  t = union_0_0(t);
  if(((q_65 != NULL) && (q_65 != t)))
    _fail(t);
  else
    q_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_65), not_null(q_65));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      if(match_cons(x_40, sym_XtcConf_4))
        {
          if(((a_66 != NULL) && (a_66 != ATgetArgument(x_40, 0))))
            _fail(ATgetArgument(x_40, 0));
          else
            a_66 = ATgetArgument(x_40, 0);
          if(((b_66 != NULL) && (b_66 != ATgetArgument(x_40, 1))))
            _fail(ATgetArgument(x_40, 1));
          else
            b_66 = ATgetArgument(x_40, 1);
          if(((e_66 != NULL) && (e_66 != ATgetArgument(x_40, 2))))
            _fail(ATgetArgument(x_40, 2));
          else
            e_66 = ATgetArgument(x_40, 2);
          if(((f_66 != NULL) && (f_66 != ATgetArgument(x_40, 3))))
            _fail(ATgetArgument(x_40, 3));
          else
            f_66 = ATgetArgument(x_40, 3);
        }
      else
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((k_66 != NULL) && (k_66 != t)))
    _fail(t);
  else
    k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(f_66));
  t = conc_0_0(t);
  if(((g_66 != NULL) && (g_66 != t)))
    _fail(t);
  else
    g_66 = t;
  t = not_null(k_66);
  if(((j_66 != NULL) && (j_66 != t)))
    _fail(t);
  else
    j_66 = t;
  t = not_null(e_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((i_66 != NULL) && (i_66 != t)))
    _fail(t);
  else
    i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(a_66), not_null(b_66), not_null(e_66), not_null(g_66)), not_null(i_66));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_66 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((z_66 != NULL) && (z_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_66);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_67 = NULL;
  if(((a_67 != NULL) && (a_67 != t)))
    _fail(t);
  else
    a_67 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(match_cons(z_40, sym_XtcConf_4))
        {
          ATerm a_41 = ATgetArgument(z_40, 0);
          ATerm b_41 = ATgetArgument(z_40, 1);
          ATerm c_41 = ATgetArgument(z_40, 2);
          ATerm d_41 = ATgetArgument(z_40, 3);
        }
      else
        _fail(t);
      if(((m_66 != NULL) && (m_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_66 != NULL) && (w_66 != t)))
    _fail(t);
  else
    w_66 = t;
  t = not_null(m_66);
  if(((y_66 != NULL) && (y_66 != t)))
    _fail(t);
  else
    y_66 = t;
  t = term_e_41;
  if(((x_66 != NULL) && (x_66 != t)))
    _fail(t);
  else
    x_66 = t;
  t = not_null(y_66);
  t = xtc_fetch_meta_0_1(not_null(x_66), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((n_66 != NULL) && (n_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_66 = ATgetArgument(t, 0);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(match_cons(f_41, sym_Some_1))
          {
            if(((o_66 != NULL) && (o_66 != ATgetArgument(f_41, 0))))
              _fail(ATgetArgument(f_41, 0));
            else
              o_66 = ATgetArgument(f_41, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(m_66);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm m_4 (ATerm t);
    static ATerm m_4 (ATerm t)
    {
      ATerm g_41 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((n_66 != NULL) && (n_66 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_66 = ATgetArgument(t, 0);
              {
                ATerm h_41 = ATgetArgument(t, 1);
                if(match_cons(h_41, sym_Some_1))
                  {
                    if(((o_66 != NULL) && (o_66 != ATgetArgument(h_41, 0))))
                      _fail(ATgetArgument(h_41, 0));
                    else
                      o_66 = ATgetArgument(h_41, 0);
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
          t = g_41;
        }
      return(t);
    }
    t = filter_1_0(m_4, t);
  }
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  t = not_null(w_66);
  if(((t_66 != NULL) && (t_66 != t)))
    _fail(t);
  else
    t_66 = t;
  if(((v_66 != NULL) && (v_66 != t)))
    _fail(t);
  else
    v_66 = t;
  t = not_null(o_66);
  t = try_1_0(n_4, t);
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  if(((s_66 != NULL) && (s_66 != t)))
    _fail(t);
  else
    s_66 = t;
  t = not_null(t_66);
  t = xtc_reconfigure_0_2(not_null(n_66), not_null(s_66), t);
  {
    static ATerm p_4 (ATerm t);
    static ATerm p_4 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(p_66), t);
      return(t);
    }
    t = _2_0(o_4, p_4, t);
  }
  if(((r_66 != NULL) && (r_66 != t)))
    _fail(t);
  else
    r_66 = t;
  t = term_i_41;
  if(((q_66 != NULL) && (q_66 != t)))
    _fail(t);
  else
    q_66 = t;
  t = not_null(r_66);
  t = dbg_0_1(not_null(q_66), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,q_4 = NULL,w_11 = NULL;
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_67 = ATgetArgument(t, 0);
      if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_67 = ATgetArgument(t, 1);
      if(((e_67 != NULL) && (e_67 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((l_67 != NULL) && (l_67 != t)))
    _fail(t);
  else
    l_67 = t;
  t = SSLgetAnnotations(not_null(k_67));
  if(((b_67 != NULL) && (b_67 != t)))
    _fail(t);
  else
    b_67 = t;
  t = not_null(c_67);
  t = i_109(t);
  if(((f_67 != NULL) && (f_67 != t)))
    _fail(t);
  else
    f_67 = t;
  t = not_null(d_67);
  t = j_109(t);
  if(((g_67 != NULL) && (g_67 != t)))
    _fail(t);
  else
    g_67 = t;
  t = not_null(e_67);
  t = k_109(t);
  if(((h_67 != NULL) && (h_67 != t)))
    _fail(t);
  else
    h_67 = t;
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(f_67), not_null(g_67), not_null(h_67));
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = SSLsetAnnotations(not_null(q_4), not_null(b_67));
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t)
{
  ATerm m_67 = NULL;
  if(((m_67 != NULL) && (m_67 != t)))
    _fail(t);
  else
    m_67 = t;
  t = not_null(f_81);
  t = is_string_0_0(t);
  t = not_null(m_67);
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
      if(((n_67 != NULL) && (n_67 != t)))
        _fail(t);
      else
        n_67 = t;
      if(((o_67 != NULL) && (o_67 != t)))
        _fail(t);
      else
        o_67 = t;
      t = not_null(n_67);
      if(((p_67 != NULL) && (p_67 != t)))
        _fail(t);
      else
        p_67 = t;
      t = SSL_explode_term(not_null(p_67));
      if(match_cons(t, sym__2))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_81 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(o_67);
      return(t);
    }
    t = collect_all_1_0(r_4, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  if(((s_67 != NULL) && (s_67 != t)))
    _fail(t);
  else
    s_67 = t;
  t = term_m_41;
  if(((r_67 != NULL) && (r_67 != t)))
    _fail(t);
  else
    r_67 = t;
  t = not_null(s_67);
  t = xtc_fetch_meta_0_1(not_null(r_67), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((q_67 != NULL) && (q_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_67);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_68 = NULL;
  if(((c_68 != NULL) && (c_68 != t)))
    _fail(t);
  else
    c_68 = t;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_68 = NULL;
  if(((d_68 != NULL) && (d_68 != t)))
    _fail(t);
  else
    d_68 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm s_4 (ATerm t);
    static ATerm s_4 (ATerm t)
    {
      static ATerm t_4 (ATerm t);
      static ATerm t_4 (ATerm t)
      {
        ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
        if(((x_67 != NULL) && (x_67 != t)))
          _fail(t);
        else
          x_67 = t;
        if(((b_68 != NULL) && (b_68 != t)))
          _fail(t);
        else
          b_68 = t;
        if(((y_67 != NULL) && (y_67 != t)))
          _fail(t);
        else
          y_67 = t;
        t = not_null(b_68);
        if(((a_68 != NULL) && (a_68 != t)))
          _fail(t);
        else
          a_68 = t;
        t = term_p_41;
        t = o_151(t);
        if(((z_67 != NULL) && (z_67 != t)))
          _fail(t);
        else
          z_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_67), not_null(z_67));
        t = eq_0_0(t);
        t = not_null(x_67);
        return(t);
      }
      t = XtcContract_3_0(t_4, u_4, v_4, t);
      return(t);
    }
    t = filter_1_0(s_4, t);
  }
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  t = term_m_41;
  if(((v_67 != NULL) && (v_67 != t)))
    _fail(t);
  else
    v_67 = t;
  t = not_null(w_67);
  t = dbg_0_1(not_null(v_67), t);
  return(t);
}
ATerm warn_0_1 (ATerm w_78, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  if(((j_68 != NULL) && (j_68 != t)))
    _fail(t);
  else
    j_68 = t;
  t = term_q_41;
  if(((e_68 != NULL) && (e_68 != t)))
    _fail(t);
  else
    e_68 = t;
  t = not_null(j_68);
  if(((g_68 != NULL) && (g_68 != t)))
    _fail(t);
  else
    g_68 = t;
  if(((i_68 != NULL) && (i_68 != t)))
    _fail(t);
  else
    i_68 = t;
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  if(((f_68 != NULL) && (f_68 != t)))
    _fail(t);
  else
    f_68 = t;
  t = not_null(g_68);
  t = log_0_3(not_null(e_68), not_null(w_78), not_null(f_68), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_68 = NULL;
      if(((k_68 != NULL) && (k_68 != t)))
        _fail(t);
      else
        k_68 = t;
      t = term_t_41;
      t = get_config_0_0(t);
      t = not_null(k_68);
      LocalPopChoice(s_41);
      {
        ATerm l_68 = NULL,m_68 = NULL;
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        t = term_u_41;
        if(((l_68 != NULL) && (l_68 != t)))
          _fail(t);
        else
          l_68 = t;
        t = not_null(m_68);
        t = err_0_1(not_null(l_68), t);
        _fail(t);
      }
    }
  else
    {
      t = r_41;
      {
        ATerm n_68 = NULL,o_68 = NULL;
        if(((o_68 != NULL) && (o_68 != t)))
          _fail(t);
        else
          o_68 = t;
        t = term_v_41;
        if(((n_68 != NULL) && (n_68 != t)))
          _fail(t);
        else
          n_68 = t;
        t = not_null(o_68);
        t = warn_0_1(not_null(n_68), t);
      }
    }
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm p_68 = NULL;
  if(((p_68 != NULL) && (p_68 != t)))
    _fail(t);
  else
    p_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_42, not_null(p_68));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm s_68 = NULL;
  if(((s_68 != NULL) && (s_68 != t)))
    _fail(t);
  else
    s_68 = t;
  t = term_q_42;
  t = set_config_0_0(t);
  t = not_null(s_68);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_68 = NULL;
      if(((q_68 != NULL) && (q_68 != t)))
        _fail(t);
      else
        q_68 = t;
      t = term_p_42;
      t = get_config_0_0(t);
      t = not_null(q_68);
      LocalPopChoice(s_42);
      {
        ATerm r_68 = NULL;
        if(((r_68 != NULL) && (r_68 != t)))
          _fail(t);
        else
          r_68 = t;
        t = term_p_42;
        t = rm_config_0_0(t);
        t = not_null(r_68);
        t = restore_always_2_0(s_151, w_4, t);
      }
    }
  else
    {
      t = r_42;
      t = s_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
      if(((u_68 != NULL) && (u_68 != t)))
        _fail(t);
      else
        u_68 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((v_68 != NULL) && (v_68 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(v_68);
      if(((w_68 != NULL) && (w_68 != t)))
        _fail(t);
      else
        w_68 = t;
      LocalPopChoice(e_43);
    }
  else
    {
      t = d_43;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t)
{
  static ATerm h_71 (ATerm e_69, ATerm f_69, ATerm g_69, ATerm h_69, ATerm t);
  static ATerm i_71 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm z_69, ATerm a_70, ATerm t);
  static ATerm h_71 (ATerm e_69, ATerm f_69, ATerm g_69, ATerm h_69, ATerm t)
  {
    ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
    t = not_null(e_69);
    if(((k_69 != NULL) && (k_69 != t)))
      _fail(t);
    else
      k_69 = t;
    t = not_null(f_69);
    if(((m_69 != NULL) && (m_69 != t)))
      _fail(t);
    else
      m_69 = t;
    t = not_null(g_69);
    if(((i_69 != NULL) && (i_69 != t)))
      _fail(t);
    else
      i_69 = t;
    t = not_null(h_69);
    t = Fst_0_0(t);
    t = c_1(t);
    if(((j_69 != NULL) && (j_69 != t)))
      _fail(t);
    else
      j_69 = t;
    t = not_null(i_69);
    t = some_or_empty_0_0(t);
    {
      ATerm f_43 = t;
      int e_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
          if(((n_69 != NULL) && (n_69 != t)))
            _fail(t);
          else
            n_69 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((o_69 != NULL) && (o_69 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(o_69);
          if(((p_69 != NULL) && (p_69 != t)))
            _fail(t);
          else
            p_69 = t;
          LocalPopChoice(e_46);
        }
      else
        {
          t = f_43;
          t = Nil_0_0(t);
        }
    }
    if(((l_69 != NULL) && (l_69 != t)))
      _fail(t);
    else
      l_69 = t;
    {
      ATerm f_46 = t;
      int g_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
          static ATerm x_4 (ATerm t);
          static ATerm x_4 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(m_69), t);
            return(t);
          }
          if(((q_69 != NULL) && (q_69 != t)))
            _fail(t);
          else
            q_69 = t;
          if(((s_69 != NULL) && (s_69 != t)))
            _fail(t);
          else
            s_69 = t;
          t = not_null(q_69);
          t = xtc_new_file_0_0(t);
          if(((r_69 != NULL) && (r_69 != t)))
            _fail(t);
          else
            r_69 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(j_69), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_69))), not_null(k_69), not_null(l_69));
          t = xtc_cc_disable_1_0(x_4, t);
          LocalPopChoice(g_46);
        }
      else
        {
          t = f_46;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm i_71 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm z_69, ATerm a_70, ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,h_70 = NULL;
    t = not_null(w_69);
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = not_null(x_69);
    if(((d_70 != NULL) && (d_70 != t)))
      _fail(t);
    else
      d_70 = t;
    t = not_null(y_69);
    if(((e_70 != NULL) && (e_70 != t)))
      _fail(t);
    else
      e_70 = t;
    t = not_null(z_69);
    if(((b_70 != NULL) && (b_70 != t)))
      _fail(t);
    else
      b_70 = t;
    t = not_null(a_70);
    if(((h_70 != NULL) && (h_70 != t)))
      _fail(t);
    else
      h_70 = t;
    {
      ATerm h_46 = t;
      int i_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(b_70);
          t = xtc_fetch_contracts_1_0(c_1, t);
          LocalPopChoice(i_46);
          {
            static ATerm y_4 (ATerm t);
            static ATerm y_4 (ATerm t)
            {
              ATerm i_70 = NULL,m_70 = NULL;
              if(((m_70 != NULL) && (m_70 != t)))
                _fail(t);
              else
                m_70 = t;
              if(((i_70 != NULL) && (i_70 != t)))
                _fail(t);
              else
                i_70 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(c_70), not_null(d_70), not_null(e_70)), not_null(i_70));
              t = xtc_cc_1_0(c_1, t);
              return(t);
            }
            t = map_1_0(y_4, t);
          }
        }
      else
        {
          t = h_46;
          {
            ATerm n_70 = NULL;
            if(((n_70 != NULL) && (n_70 != t)))
              _fail(t);
            else
              n_70 = t;
          }
        }
    }
    t = not_null(h_70);
    return(t);
  }
  ATerm s_70 = NULL,t_70 = NULL,v_70 = NULL,w_70 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  if(((w_70 != NULL) && (w_70 != t)))
    _fail(t);
  else
    w_70 = t;
  if(match_cons(t, sym__2))
    {
      if(((b_71 != NULL) && (b_71 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_71 = ATgetArgument(t, 0);
      if(((g_71 != NULL) && (g_71 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_71);
  if(match_cons(t, sym__3))
    {
      c_71 = ATgetArgument(t, 0);
      d_71 = ATgetArgument(t, 1);
      e_71 = ATgetArgument(t, 2);
      t = not_null(g_71);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((s_70 != NULL) && (s_70 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_70 = ATgetArgument(t, 0);
          if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_70 = ATgetArgument(t, 1);
          if(((v_70 != NULL) && (v_70 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            v_70 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_71(not_null(e_71), not_null(t_70), not_null(v_70), not_null(w_70), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((c_71 != NULL) && (c_71 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_71 = ATgetArgument(t, 0);
          if(((d_71 != NULL) && (d_71 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_71 = ATgetArgument(t, 1);
          if(((e_71 != NULL) && (e_71 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            e_71 = ATgetArgument(t, 2);
          if(((f_71 != NULL) && (f_71 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            f_71 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_71(not_null(c_71), not_null(d_71), not_null(e_71), not_null(g_71), not_null(w_70), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,m_71 = NULL;
  if(((j_71 != NULL) && (j_71 != t)))
    _fail(t);
  else
    j_71 = t;
  t = term_p_42;
  t = get_config_0_0(t);
  if(((m_71 != NULL) && (m_71 != t)))
    _fail(t);
  else
    m_71 = t;
  t = term_j_46;
  if(((k_71 != NULL) && (k_71 != t)))
    _fail(t);
  else
    k_71 = t;
  t = not_null(m_71);
  t = notice_0_1(not_null(k_71), t);
  t = not_null(j_71);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm n_71 = NULL;
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_71 = NULL;
      if(((t_71 != NULL) && (t_71 != t)))
        _fail(t);
      else
        t_71 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(t_71);
      LocalPopChoice(t_47);
      {
        ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
        if(((y_71 != NULL) && (y_71 != t)))
          _fail(t);
        else
          y_71 = t;
        t = term_u_47;
        if(((x_71 != NULL) && (x_71 != t)))
          _fail(t);
        else
          x_71 = t;
        t = not_null(y_71);
        t = dbg_0_1(not_null(x_71), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((w_71 != NULL) && (w_71 != t)))
          _fail(t);
        else
          w_71 = t;
        t = p_151(t);
        if(((n_71 != NULL) && (n_71 != t)))
          _fail(t);
        else
          n_71 = t;
        t = not_null(w_71);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(n_71);
        if(((v_71 != NULL) && (v_71 != t)))
          _fail(t);
        else
          v_71 = t;
        t = term_v_47;
        if(((u_71 != NULL) && (u_71 != t)))
          _fail(t);
        else
          u_71 = t;
        t = not_null(v_71);
        t = dbg_0_1(not_null(u_71), t);
      }
    }
  else
    {
      t = s_47;
      t = p_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_72 != NULL) && (a_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_72 = ATgetArgument(t, 0);
      if(((z_71 != NULL) && (z_71 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_72 != NULL) && (h_72 != t)))
    _fail(t);
  else
    h_72 = t;
  if(((i_72 != NULL) && (i_72 != t)))
    _fail(t);
  else
    i_72 = t;
  t = not_null(a_72);
  {
    ATerm x_47 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_47;
      }
  }
  t = not_null(i_72);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm y_47 = ATgetArgument(t, 0);
      if(((g_72 != NULL) && (g_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), not_null(g_72));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  t = term_z_47;
  t = table_getlist_0_0(t);
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(b_48);
      }
    else
      {
        t = a_48;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((k_72 != NULL) && (k_72 != t)))
    _fail(t);
  else
    k_72 = t;
  if(((j_72 != NULL) && (j_72 != t)))
    _fail(t);
  else
    j_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, not_null(j_72));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_72 = NULL;
  if(((r_72 != NULL) && (r_72 != t)))
    _fail(t);
  else
    r_72 = t;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_72 = NULL;
  if(((s_72 != NULL) && (s_72 != t)))
    _fail(t);
  else
    s_72 = t;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_72 = NULL;
  if(((t_72 != NULL) && (t_72 != t)))
    _fail(t);
  else
    t_72 = t;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm u_72 = NULL;
  if(((u_72 != NULL) && (u_72 != t)))
    _fail(t);
  else
    u_72 = t;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_72 = NULL;
  if(((v_72 != NULL) && (v_72 != t)))
    _fail(t);
  else
    v_72 = t;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_72 = NULL;
  if(((w_72 != NULL) && (w_72 != t)))
    _fail(t);
  else
    w_72 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_48 = t;
      if((PushChoice() == 0))
        {
          ATerm f_48 = t;
          int n_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(z_4, t);
              LocalPopChoice(n_48);
            }
          else
            {
              t = f_48;
              t = XtcQuery_2_0(a_5, b_5, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_48;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(a_1, t);
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      {
        ATerm p_48 = t;
        int v_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(c_5, t);
            LocalPopChoice(v_48);
          }
        else
          {
            t = p_48;
            t = XtcQuery_2_0(d_5, e_5, t);
          }
      }
      {
        ATerm w_48 = t;
        int x_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(a_1, t);
            t = Snd_0_0(t);
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            {
              ATerm x_72 = NULL,y_72 = NULL;
              if(((x_72 != NULL) && (x_72 != t)))
                _fail(t);
              else
                x_72 = t;
              if(((y_72 != NULL) && (y_72 != t)))
                _fail(t);
              else
                y_72 = t;
              t = not_null(x_72);
              t = xtc_import_0_0(t);
              t = not_null(y_72);
              t = xtc_find_reg_1_0(a_1, t);
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
static ATerm f_5 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  if(((a_73 != NULL) && (a_73 != t)))
    _fail(t);
  else
    a_73 = t;
  t = term_z_48;
  if(((z_72 != NULL) && (z_72 != t)))
    _fail(t);
  else
    z_72 = t;
  t = not_null(a_73);
  t = err_0_1(not_null(z_72), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, f_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  if(((h_73 != NULL) && (h_73 != t)))
    _fail(t);
  else
    h_73 = t;
  t = term_b_49;
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = not_null(h_73);
  t = dbg_0_1(not_null(g_73), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm c_49 = ATgetArgument(t, 0);
      ATerm d_49 = ATgetArgument(t, 1);
      if(match_cons(d_49, sym_Some_1))
        {
          if(((b_73 != NULL) && (b_73 != ATgetArgument(d_49, 0))))
            _fail(ATgetArgument(d_49, 0));
          else
            b_73 = ATgetArgument(d_49, 0);
        }
      else
        _fail(t);
      {
        ATerm e_49 = ATgetArgument(t, 2);
      }
      {
        ATerm g_49 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((f_73 != NULL) && (f_73 != t)))
    _fail(t);
  else
    f_73 = t;
  if(((c_73 != NULL) && (c_73 != t)))
    _fail(t);
  else
    c_73 = t;
  t = not_null(f_73);
  if(((e_73 != NULL) && (e_73 != t)))
    _fail(t);
  else
    e_73 = t;
  t = not_null(p_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((d_73 != NULL) && (d_73 != t)))
    _fail(t);
  else
    d_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_73), not_null(d_73));
  t = xtc_cc_wrap_1_0(g_5, t);
  t = not_null(b_73);
  return(t);
}
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,h_5 = NULL,x_11 = NULL;
  if(((n_73 != NULL) && (n_73 != t)))
    _fail(t);
  else
    n_73 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((j_73 != NULL) && (j_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((o_73 != NULL) && (o_73 != t)))
    _fail(t);
  else
    o_73 = t;
  t = SSLgetAnnotations(not_null(n_73));
  if(((i_73 != NULL) && (i_73 != t)))
    _fail(t);
  else
    i_73 = t;
  t = not_null(j_73);
  t = n_107(t);
  if(((k_73 != NULL) && (k_73 != t)))
    _fail(t);
  else
    k_73 = t;
  if(((m_73 != NULL) && (m_73 != t)))
    _fail(t);
  else
    m_73 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(k_73));
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  t = SSLsetAnnotations(not_null(h_5), not_null(i_73));
  if(((l_73 != NULL) && (l_73 != t)))
    _fail(t);
  else
    l_73 = t;
  return(t);
}
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      t = Some_1_0(o_132, t);
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  if(((q_73 != NULL) && (q_73 != t)))
    _fail(t);
  else
    q_73 = t;
  if(match_cons(t, sym_URL_1))
    {
      r_73 = ATgetArgument(t, 0);
      t = not_null(q_73);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm s_73 = NULL,t_73 = NULL;
          t = not_null(q_73);
          if(((t_73 != NULL) && (t_73 != t)))
            _fail(t);
          else
            t_73 = t;
          t = term_q_17;
          t = xtc_new_file_0_0(t);
          if(((s_73 != NULL) && (s_73 != t)))
            _fail(t);
          else
            s_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_49, not_null(s_73));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_73));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((r_73 != NULL) && (r_73 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(q_73);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,i_5 = NULL,y_11 = NULL;
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((v_73 != NULL) && (v_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_73 = ATgetArgument(t, 0);
      if(((w_73 != NULL) && (w_73 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_73 = ATgetArgument(t, 1);
      if(((x_73 != NULL) && (x_73 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_73 = ATgetArgument(t, 2);
      if(((y_73 != NULL) && (y_73 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        y_73 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((g_74 != NULL) && (g_74 != t)))
    _fail(t);
  else
    g_74 = t;
  t = SSLgetAnnotations(not_null(f_74));
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  t = not_null(v_73);
  t = h_111(t);
  if(((z_73 != NULL) && (z_73 != t)))
    _fail(t);
  else
    z_73 = t;
  t = not_null(w_73);
  t = i_111(t);
  if(((a_74 != NULL) && (a_74 != t)))
    _fail(t);
  else
    a_74 = t;
  t = not_null(x_73);
  t = j_111(t);
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  t = not_null(y_73);
  t = k_111(t);
  if(((c_74 != NULL) && (c_74 != t)))
    _fail(t);
  else
    c_74 = t;
  if(((e_74 != NULL) && (e_74 != t)))
    _fail(t);
  else
    e_74 = t;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(z_73), not_null(a_74), not_null(b_74), not_null(c_74));
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = SSLsetAnnotations(not_null(i_5), not_null(u_73));
  if(((d_74 != NULL) && (d_74 != t)))
    _fail(t);
  else
    d_74 = t;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = option_1_0(m_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = option_1_0(o_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = FILE_1_0(n_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_74 = NULL;
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = FILE_1_0(p_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm y_74 = NULL;
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm q_49 = t;
  int r_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_74 = NULL,k_74 = NULL,v_74 = NULL,w_74 = NULL;
      t = XtcConf_4_0(j_5, k_5, l_5, is_list_0_0, t);
      if(((k_74 != NULL) && (k_74 != t)))
        _fail(t);
      else
        k_74 = t;
      if(((w_74 != NULL) && (w_74 != t)))
        _fail(t);
      else
        w_74 = t;
      t = z_0(t);
      if(((v_74 != NULL) && (v_74 != t)))
        _fail(t);
      else
        v_74 = t;
      if(((j_74 != NULL) && (j_74 != t)))
        _fail(t);
      else
        j_74 = t;
      t = not_null(k_74);
      t = xtc_dispatch_0_1(not_null(j_74), t);
      LocalPopChoice(r_49);
    }
  else
    {
      t = q_49;
      {
        ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
        t = is_list_0_0(t);
        if(((z_74 != NULL) && (z_74 != t)))
          _fail(t);
        else
          z_74 = t;
        t = z_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((b_75 != NULL) && (b_75 != t)))
          _fail(t);
        else
          b_75 = t;
        if(((a_75 != NULL) && (a_75 != t)))
          _fail(t);
        else
          a_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(z_74));
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
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,q_5 = NULL,z_11 = NULL;
  if(((h_75 != NULL) && (h_75 != t)))
    _fail(t);
  else
    h_75 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((d_75 != NULL) && (d_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_75 != NULL) && (i_75 != t)))
    _fail(t);
  else
    i_75 = t;
  t = SSLgetAnnotations(not_null(h_75));
  if(((c_75 != NULL) && (c_75 != t)))
    _fail(t);
  else
    c_75 = t;
  t = not_null(d_75);
  t = m_109(t);
  if(((e_75 != NULL) && (e_75 != t)))
    _fail(t);
  else
    e_75 = t;
  if(((g_75 != NULL) && (g_75 != t)))
    _fail(t);
  else
    g_75 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_75));
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  t = SSLsetAnnotations(not_null(q_5), not_null(c_75));
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm j_75 = NULL;
  if(((j_75 != NULL) && (j_75 != t)))
    _fail(t);
  else
    j_75 = t;
  t = SSL_close(not_null(j_75));
  return(t);
}
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_75 != NULL) && (m_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_75 = ATgetArgument(t, 0);
      if(((k_75 != NULL) && (k_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_75 != NULL) && (p_75 != t)))
    _fail(t);
  else
    p_75 = t;
  t = w_111(t);
  if(((l_75 != NULL) && (l_75 != t)))
    _fail(t);
  else
    l_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_75), not_null(m_75), not_null(k_75));
  t = table_push_0_0(t);
  {
    ATerm s_49 = t;
    int a_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_75), term_b_50);
        t = table_get_0_0(t);
        {
          ATerm r_50 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_50;
            }
        }
        LocalPopChoice(a_50);
      }
    else
      {
        t = s_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_75 != NULL) && (n_75 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_75 = ATgetFirst((ATermList) t);
      if(((o_75 != NULL) && (o_75 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_75), term_b_50, (ATerm) ATinsert(CheckATermList(not_null(o_75)), (ATerm) ATinsert(CheckATermList(not_null(n_75)), not_null(m_75))));
  t = table_put_0_0(t);
  t = not_null(p_75);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_75 = NULL;
  ATerm s_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm w_75 (ATerm s_75, ATerm t);
      static ATerm w_75 (ATerm s_75, ATerm t)
      {
        ATerm t_75 = NULL,u_75 = NULL;
        t = not_null(s_75);
        if(((u_75 != NULL) && (u_75 != t)))
          _fail(t);
        else
          u_75 = t;
        t = not_null(s_75);
        if(((t_75 != NULL) && (t_75 != t)))
          _fail(t);
        else
          t_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_75), term_y_50);
        t = conc_strings_0_0(t);
        if(((r_75 != NULL) && (r_75 != t)))
          _fail(t);
        else
          r_75 = t;
        t = SSL_mkstemp(not_null(r_75));
        return(t);
      }
      ATerm v_75 = NULL;
      if(((v_75 != NULL) && (v_75 != t)))
        _fail(t);
      else
        v_75 = t;
      t = w_75(not_null(v_75), t);
      LocalPopChoice(x_50);
    }
  else
    {
      t = s_50;
      t = term_z_50;
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
  ATerm a_51 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_52;
      t = getenv_0_0(t);
      LocalPopChoice(b_51);
    }
  else
    {
      t = a_51;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  t = temp_dir_0_0(t);
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_75), term_c_53);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((a_76 != NULL) && (a_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_76 = ATgetArgument(t, 0);
      if(((z_75 != NULL) && (z_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_76 != NULL) && (b_76 != t)))
    _fail(t);
  else
    b_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_76), term_q_17);
  t = assert_1_0(r_5, t);
  t = not_null(z_75);
  t = close_0_0(t);
  t = not_null(a_76);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_76 = NULL;
  if(((i_76 != NULL) && (i_76 != t)))
    _fail(t);
  else
    i_76 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  t = xtc_new_file_0_0(t);
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  {
    ATerm f_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_76 = NULL,h_76 = NULL;
        t = not_null(d_76);
        {
          ATerm j_53 = t;
          int k_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(s_5, t);
              LocalPopChoice(k_53);
            }
          else
            {
              t = j_53;
              t = stdin_0_0(t);
            }
        }
        if(((h_76 != NULL) && (h_76 != t)))
          _fail(t);
        else
          h_76 = t;
        t = l_153(t);
        if(((g_76 != NULL) && (g_76 != t)))
          _fail(t);
        else
          g_76 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(d_76)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_76))), term_v_17, not_null(g_76));
        LocalPopChoice(i_53);
      }
    else
      {
        t = f_53;
        {
          ATerm j_76 = NULL,k_76 = NULL;
          t = not_null(d_76);
          t = None_0_0(t);
          if(((k_76 != NULL) && (k_76 != t)))
            _fail(t);
          else
            k_76 = t;
          t = l_153(t);
          if(((j_76 != NULL) && (j_76 != t)))
            _fail(t);
          else
            j_76 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_v_17, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_76))), term_v_17, not_null(j_76));
        }
      }
  }
  t = xtc_command_1_0(k_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_76));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t)
{
  t = term_v_17;
  t = xtc_transform_file_2_0(e_153, f_153, t);
  return(t);
}
ATerm err_0_1 (ATerm v_78, ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  t = term_k_31;
  if(((l_76 != NULL) && (l_76 != t)))
    _fail(t);
  else
    l_76 = t;
  t = not_null(q_76);
  if(((n_76 != NULL) && (n_76 != t)))
    _fail(t);
  else
    n_76 = t;
  if(((p_76 != NULL) && (p_76 != t)))
    _fail(t);
  else
    p_76 = t;
  if(((o_76 != NULL) && (o_76 != t)))
    _fail(t);
  else
    o_76 = t;
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = not_null(n_76);
  t = log_0_3(not_null(l_76), not_null(v_78), not_null(m_76), t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm r_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_76 != NULL) && (r_76 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_76 = ATgetFirst((ATermList) t);
      {
        ATerm o_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(r_76);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL;
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    ATerm u_76 = NULL,v_76 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_76 = ATgetArgument(t, 0);
        if(((v_76 != NULL) && (v_76 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_76 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_76), not_null(u_76), not_null(v_76));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((t_76 != NULL) && (t_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_76 = ATgetArgument(t, 0);
      if(((s_76 != NULL) && (s_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_76);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_53 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_53;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_76 != NULL) && (y_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_76 = ATgetArgument(t, 0);
      if(((w_76 != NULL) && (w_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_77 != NULL) && (a_77 != t)))
    _fail(t);
  else
    a_77 = t;
  t = not_null(w_76);
  {
    ATerm y_53 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(u_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_53;
      }
  }
  t = not_null(w_76);
  t = filter_1_0(v_5, t);
  if(((z_76 != NULL) && (z_76 != t)))
    _fail(t);
  else
    z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_76), (ATerm) ATinsert(ATempty, term_g_54));
  t = union_0_0(t);
  if(((x_76 != NULL) && (x_76 != t)))
    _fail(t);
  else
    x_76 = t;
  t = not_null(y_76);
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_54), not_null(z_76));
  t = conc_0_0(t);
  if(((d_77 != NULL) && (d_77 != t)))
    _fail(t);
  else
    d_77 = t;
  if(((b_77 != NULL) && (b_77 != t)))
    _fail(t);
  else
    b_77 = t;
  t = not_null(c_77);
  t = xtc_load_0_1(not_null(b_77), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_76), not_null(x_76));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_77 != NULL) && (g_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_77 = ATgetArgument(t, 0);
      if(((f_77 != NULL) && (f_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_77 != NULL) && (i_77 != t)))
    _fail(t);
  else
    i_77 = t;
  if(((j_77 != NULL) && (j_77 != t)))
    _fail(t);
  else
    j_77 = t;
  t = not_null(g_77);
  t = file_exists_0_0(t);
  t = not_null(j_77);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm i_54 = ATgetArgument(t, 0);
      if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_77), not_null(h_77));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  t = term_z_47;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((l_77 != NULL) && (l_77 != t)))
    _fail(t);
  else
    l_77 = t;
  if(((k_77 != NULL) && (k_77 != t)))
    _fail(t);
  else
    k_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, not_null(k_77));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  if(((q_77 != NULL) && (q_77 != t)))
    _fail(t);
  else
    q_77 = t;
  t = not_null(p_77);
  if(((r_77 != NULL) && (r_77 != t)))
    _fail(t);
  else
    r_77 = t;
  t = SSL_explode_term(not_null(r_77));
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_54 = ATgetArgument(t, 1);
        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
          {
            if(((m_77 != NULL) && (m_77 != ATgetFirst((ATermList) k_54))))
              _fail(ATgetFirst((ATermList) k_54));
            else
              m_77 = ATgetFirst((ATermList) k_54);
            {
              ATerm l_54 = (ATerm) ATgetNext((ATermList) k_54);
              if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
                {
                  if(((o_77 != NULL) && (o_77 != ATgetFirst((ATermList) l_54))))
                    _fail(ATgetFirst((ATermList) l_54));
                  else
                    o_77 = ATgetFirst((ATermList) l_54);
                  if(((n_77 != NULL) && (n_77 != (ATerm) ATgetNext((ATermList) l_54))))
                    _fail((ATerm) ATgetNext((ATermList) l_54));
                  else
                    n_77 = (ATerm) ATgetNext((ATermList) l_54);
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
  t = not_null(o_77);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  if(((x_77 != NULL) && (x_77 != t)))
    _fail(t);
  else
    x_77 = t;
  t = not_null(v_77);
  if(((y_77 != NULL) && (y_77 != t)))
    _fail(t);
  else
    y_77 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      z_77 = ATgetArgument(t, 0);
      t = not_null(z_77);
      if(((u_77 != NULL) && (u_77 != t)))
        _fail(t);
      else
        u_77 = t;
      t = not_null(y_77);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((z_77 != NULL) && (z_77 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_77 = ATgetArgument(t, 0);
          if(((a_78 != NULL) && (a_78 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(z_77);
      if(((u_77 != NULL) && (u_77 != t)))
        _fail(t);
      else
        u_77 = t;
      t = not_null(a_78);
      if(((t_77 != NULL) && (t_77 != t)))
        _fail(t);
      else
        t_77 = t;
      t = not_null(y_77);
    }
  {
    ATerm m_54 = t;
    int n_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
        t = not_null(v_77);
        if(((f_78 != NULL) && (f_78 != t)))
          _fail(t);
        else
          f_78 = t;
        t = term_o_54;
        if(((e_78 != NULL) && (e_78 != t)))
          _fail(t);
        else
          e_78 = t;
        t = not_null(f_78);
        t = xtc_query_one_2_1(v_150, w_150, not_null(e_78), t);
        if(((b_78 != NULL) && (b_78 != t)))
          _fail(t);
        else
          b_78 = t;
        t = not_null(v_77);
        if(((d_78 != NULL) && (d_78 != t)))
          _fail(t);
        else
          d_78 = t;
        t = term_y_54;
        if(((c_78 != NULL) && (c_78 != t)))
          _fail(t);
        else
          c_78 = t;
        t = not_null(d_78);
        t = dbg_0_1(not_null(c_78), t);
        t = not_null(b_78);
        LocalPopChoice(n_54);
      }
    else
      {
        t = m_54;
        {
          ATerm g_78 = NULL,h_78 = NULL;
          t = not_null(u_77);
          if(((h_78 != NULL) && (h_78 != t)))
            _fail(t);
          else
            h_78 = t;
          t = term_z_54;
          if(((g_78 != NULL) && (g_78 != t)))
            _fail(t);
          else
            g_78 = t;
          t = not_null(h_78);
          t = xtc_query_one_2_1(v_150, w_150, not_null(g_78), t);
          t = xtc_cache_put_0_1(not_null(v_77), t);
        }
      }
  }
  if(((w_77 != NULL) && (w_77 != t)))
    _fail(t);
  else
    w_77 = t;
  return(t);
}
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  if(((l_78 != NULL) && (l_78 != t)))
    _fail(t);
  else
    l_78 = t;
  if(((m_78 != NULL) && (m_78 != t)))
    _fail(t);
  else
    m_78 = t;
  t = not_null(l_78);
  if(((n_78 != NULL) && (n_78 != t)))
    _fail(t);
  else
    n_78 = t;
  t = SSL_explode_term(not_null(n_78));
  if(match_cons(t, sym__2))
    {
      ATerm a_55 = ATgetArgument(t, 0);
      if(((i_78 != NULL) && (i_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_78);
  if(((k_78 != NULL) && (k_78 != t)))
    _fail(t);
  else
    k_78 = t;
  t = not_null(i_78);
  t = foldr_3_0(b_135, c_135, d_135, t);
  if(((j_78 != NULL) && (j_78 != t)))
    _fail(t);
  else
    j_78 = t;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  static ATerm t_78 (ATerm t);
  static ATerm t_78 (ATerm t)
  {
    ATerm d_55 = t;
    int e_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
        if(((o_78 != NULL) && (o_78 != t)))
          _fail(t);
        else
          o_78 = t;
        if(((s_78 != NULL) && (s_78 != t)))
          _fail(t);
        else
          s_78 = t;
        t = not_null(o_78);
        t = d_129(t);
        if(((p_78 != NULL) && (p_78 != t)))
          _fail(t);
        else
          p_78 = t;
        t = not_null(s_78);
        if(((r_78 != NULL) && (r_78 != t)))
          _fail(t);
        else
          r_78 = t;
        t = crush_3_0(w_5, e_129, t_78, t);
        if(((q_78 != NULL) && (q_78 != t)))
          _fail(t);
        else
          q_78 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(q_78)), not_null(p_78));
        LocalPopChoice(e_55);
      }
    else
      {
        t = d_55;
        t = crush_3_0(x_5, e_129, t_78, t);
      }
    return(t);
  }
  t = t_78(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(c_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t)
{
  static ATerm q_80 (ATerm t_79, ATerm t);
  static ATerm r_80 (ATerm m_80, ATerm t);
  static ATerm q_80 (ATerm t_79, ATerm t)
  {
    ATerm x_79 = NULL,g_80 = NULL;
    t = not_null(t_79);
    if(((x_79 != NULL) && (x_79 != t)))
      _fail(t);
    else
      x_79 = t;
    t = not_null(t_79);
    if(((g_80 != NULL) && (g_80 != t)))
      _fail(t);
    else
      g_80 = t;
    t = not_null(x_0);
    t = is_list_0_0(t);
    {
      ATerm f_55 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_55;
        }
    }
    {
      static ATerm y_5 (ATerm t);
      static ATerm y_5 (ATerm t)
      {
        ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
        if(((k_80 != NULL) && (k_80 != t)))
          _fail(t);
        else
          k_80 = t;
        if(((l_80 != NULL) && (l_80 != t)))
          _fail(t);
        else
          l_80 = t;
        t = not_null(x_79);
        t = xtc_has_meta_0_1(not_null(k_80), t);
        t = not_null(k_80);
        return(t);
      }
      t = filter_1_0(y_5, t);
    }
    if(((x_0 != NULL) && (x_0 != t)))
      _fail(t);
    else
      x_0 = t;
    t = not_null(x_79);
    return(t);
  }
  static ATerm r_80 (ATerm m_80, ATerm t)
  {
    ATerm n_80 = NULL;
    t = not_null(m_80);
    if(((n_80 != NULL) && (n_80 != t)))
      _fail(t);
    else
      n_80 = t;
    t = not_null(m_80);
    {
      static ATerm z_5 (ATerm t);
      static ATerm z_5 (ATerm t)
      {
        if(((x_0 != NULL) && (x_0 != t)))
          _fail(t);
        else
          x_0 = t;
        return(t);
      }
      t = collect_all_1_0(z_5, t);
    }
    {
      ATerm g_55 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_55;
        }
    }
    t = not_null(n_80);
    return(t);
  }
  ATerm o_80 = NULL;
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_80 = NULL;
        t = not_null(o_80);
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        t = not_null(x_0);
        t = Nil_0_0(t);
        t = not_null(p_80);
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        {
          ATerm o_55 = t;
          int p_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_80(not_null(o_80), t);
              LocalPopChoice(p_55);
            }
          else
            {
              t = o_55;
              t = r_80(not_null(o_80), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL;
  if(((s_80 != NULL) && (s_80 != t)))
    _fail(t);
  else
    s_80 = t;
  if(((w_80 != NULL) && (w_80 != t)))
    _fail(t);
  else
    w_80 = t;
  if(((v_80 != NULL) && (v_80 != t)))
    _fail(t);
  else
    v_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_54, not_null(g_81), (ATerm) ATinsert(ATempty, not_null(v_80)));
  t = table_union_0_0(t);
  t = not_null(g_81);
  if(((u_80 != NULL) && (u_80 != t)))
    _fail(t);
  else
    u_80 = t;
  t = term_q_55;
  if(((t_80 != NULL) && (t_80 != t)))
    _fail(t);
  else
    t_80 = t;
  t = not_null(u_80);
  t = dbg_0_1(not_null(t_80), t);
  t = not_null(s_80);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_80 != NULL) && (x_80 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_80 = ATgetArgument(t, 0);
      if(((y_80 != NULL) && (y_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(y_80)), not_null(x_80));
  return(t);
}
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm r_55 = t;
  int s_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_130(t);
      LocalPopChoice(s_55);
    }
  else
    {
      t = r_55;
      {
        ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,h_81 = NULL,i_81 = NULL,m_81 = NULL,h_91 = NULL,i_91 = NULL,k_91 = NULL;
        if(((a_81 != NULL) && (a_81 != t)))
          _fail(t);
        else
          a_81 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_81 != NULL) && (b_81 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_81 = ATgetFirst((ATermList) t);
            if(((c_81 != NULL) && (c_81 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(b_81);
        if(((d_81 != NULL) && (d_81 != t)))
          _fail(t);
        else
          d_81 = t;
        t = not_null(c_81);
        if(((e_81 != NULL) && (e_81 != t)))
          _fail(t);
        else
          e_81 = t;
        t = not_null(a_81);
        if(((i_81 != NULL) && (i_81 != t)))
          _fail(t);
        else
          i_81 = t;
        if(((k_91 != NULL) && (k_91 != t)))
          _fail(t);
        else
          k_91 = t;
        t = not_null(d_81);
        t = g_130(t);
        if(((m_81 != NULL) && (m_81 != t)))
          _fail(t);
        else
          m_81 = t;
        t = not_null(k_91);
        if(((i_91 != NULL) && (i_91 != t)))
          _fail(t);
        else
          i_91 = t;
        t = not_null(e_81);
        t = foldr_3_0(e_130, f_130, g_130, t);
        if(((h_91 != NULL) && (h_91 != t)))
          _fail(t);
        else
          h_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_81), not_null(h_91));
        t = f_130(t);
        if(((h_81 != NULL) && (h_81 != t)))
          _fail(t);
        else
          h_81 = t;
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, d_6, t);
      LocalPopChoice(u_55);
      t = conc_0_0(t);
    }
  else
    {
      t = t_55;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(w_55);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = v_55;
      {
        ATerm q_91 = NULL;
        if(((q_91 != NULL) && (q_91 != t)))
          _fail(t);
        else
          q_91 = t;
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_91 = NULL;
  if(((o_91 != NULL) && (o_91 != t)))
    _fail(t);
  else
    o_91 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(a_6, b_6, c_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_91 = NULL;
  static ATerm e_6 (ATerm t);
  static ATerm e_6 (ATerm t)
  {
    ATerm h_92 = NULL,i_92 = NULL,l_92 = NULL;
    if(((h_92 != NULL) && (h_92 != t)))
      _fail(t);
    else
      h_92 = t;
    if(((l_92 != NULL) && (l_92 != t)))
      _fail(t);
    else
      l_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_91), not_null(h_92));
    t = table_get_0_0(t);
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(i_92));
    return(t);
  }
  if(((r_91 != NULL) && (r_91 != t)))
    _fail(t);
  else
    r_91 = t;
  t = table_keys_0_0(t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t)
{
  t = not_null(u_81);
  t = table_getlist_0_0(t);
  {
    static ATerm f_6 (ATerm t);
    static ATerm f_6 (ATerm t)
    {
      ATerm m_92 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm x_55 = ATgetArgument(t, 0);
          if(((m_92 != NULL) && (m_92 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_92 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(m_92);
      t = b_151(t);
      return(t);
    }
    t = filter_1_0(f_6, t);
  }
  t = flatten_list_0_0(t);
  t = c_151(t);
  return(t);
}
ATerm dbg_0_1 (ATerm y_78, ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,k_93 = NULL,m_93 = NULL,p_93 = NULL,r_93 = NULL;
  if(((r_93 != NULL) && (r_93 != t)))
    _fail(t);
  else
    r_93 = t;
  t = term_y_55;
  if(((h_93 != NULL) && (h_93 != t)))
    _fail(t);
  else
    h_93 = t;
  t = not_null(r_93);
  if(((k_93 != NULL) && (k_93 != t)))
    _fail(t);
  else
    k_93 = t;
  if(((p_93 != NULL) && (p_93 != t)))
    _fail(t);
  else
    p_93 = t;
  if(((m_93 != NULL) && (m_93 != t)))
    _fail(t);
  else
    m_93 = t;
  if(((i_93 != NULL) && (i_93 != t)))
    _fail(t);
  else
    i_93 = t;
  t = not_null(k_93);
  t = log_0_3(not_null(h_93), not_null(y_78), not_null(i_93), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t)
{
  ATerm t_93 = NULL,v_93 = NULL;
  if(((v_93 != NULL) && (v_93 != t)))
    _fail(t);
  else
    v_93 = t;
  if(((t_93 != NULL) && (t_93 != t)))
    _fail(t);
  else
    t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(t_93));
  t = table_get_0_0(t);
  t = z_150(t);
  t = a_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t)
{
  ATerm x_93 = NULL,a_94 = NULL,c_94 = NULL;
  if(((x_93 != NULL) && (x_93 != t)))
    _fail(t);
  else
    x_93 = t;
  if(((c_94 != NULL) && (c_94 != t)))
    _fail(t);
  else
    c_94 = t;
  {
    ATerm z_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_94 = NULL,g_94 = NULL,s_94 = NULL,t_94 = NULL,w_94 = NULL;
        t = not_null(x_93);
        if(((w_94 != NULL) && (w_94 != t)))
          _fail(t);
        else
          w_94 = t;
        t = term_o_54;
        if(((t_94 != NULL) && (t_94 != t)))
          _fail(t);
        else
          t_94 = t;
        t = not_null(w_94);
        t = xtc_query_one_2_1(x_150, y_150, not_null(t_94), t);
        if(((e_94 != NULL) && (e_94 != t)))
          _fail(t);
        else
          e_94 = t;
        t = not_null(x_93);
        if(((s_94 != NULL) && (s_94 != t)))
          _fail(t);
        else
          s_94 = t;
        t = term_y_54;
        if(((g_94 != NULL) && (g_94 != t)))
          _fail(t);
        else
          g_94 = t;
        t = not_null(s_94);
        t = dbg_0_1(not_null(g_94), t);
        t = not_null(e_94);
        LocalPopChoice(a_56);
      }
    else
      {
        t = z_55;
        {
          ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
          if(((z_94 != NULL) && (z_94 != t)))
            _fail(t);
          else
            z_94 = t;
          if(((b_95 != NULL) && (b_95 != t)))
            _fail(t);
          else
            b_95 = t;
          t = term_z_54;
          if(((a_95 != NULL) && (a_95 != t)))
            _fail(t);
          else
            a_95 = t;
          t = not_null(b_95);
          t = xtc_query_all_2_1(x_150, y_150, not_null(a_95), t);
          t = xtc_cache_put_0_1(not_null(x_93), t);
        }
      }
  }
  if(((a_94 != NULL) && (a_94 != t)))
    _fail(t);
  else
    a_94 = t;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm k_96 = NULL;
  if(((k_96 != NULL) && (k_96 != t)))
    _fail(t);
  else
    k_96 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      g_95 = ATgetArgument(t, 0);
      {
        ATerm b_56 = t;
        int c_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_95 = NULL,l_95 = NULL,m_95 = NULL,b_96 = NULL,c_96 = NULL;
            t = not_null(f_95);
            if(((l_95 != NULL) && (l_95 != t)))
              _fail(t);
            else
              l_95 = t;
            t = not_null(g_95);
            if(((h_95 != NULL) && (h_95 != t)))
              _fail(t);
            else
              h_95 = t;
            t = not_null(f_95);
            if(((c_96 != NULL) && (c_96 != t)))
              _fail(t);
            else
              c_96 = t;
            t = not_null(h_95);
            t = is_list_0_0(t);
            t = not_null(l_95);
            {
              static ATerm g_6 (ATerm t);
              static ATerm g_6 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(h_95), t);
                return(t);
              }
              t = xtc_query_all_2_0(g_6, w_0, t);
            }
            if(((b_96 != NULL) && (b_96 != t)))
              _fail(t);
            else
              b_96 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_95), not_null(b_96));
            LocalPopChoice(c_56);
          }
        else
          {
            t = b_56;
            {
              ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,j_96 = NULL;
              t = not_null(f_95);
              if(((e_96 != NULL) && (e_96 != t)))
                _fail(t);
              else
                e_96 = t;
              t = not_null(g_95);
              if(((d_96 != NULL) && (d_96 != t)))
                _fail(t);
              else
                d_96 = t;
              t = not_null(f_95);
              if(((j_96 != NULL) && (j_96 != t)))
                _fail(t);
              else
                j_96 = t;
              t = not_null(d_96);
              t = is_string_0_0(t);
              t = not_null(e_96);
              t = xtc_query_one_2_0(h_6, w_0, t);
              if(((f_96 != NULL) && (f_96 != t)))
                _fail(t);
              else
                f_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_96), not_null(f_96));
            }
          }
      }
    }
  else
    {
      ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((g_95 != NULL) && (g_95 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_95 = ATgetArgument(t, 0);
          if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(f_95);
      if(((n_96 != NULL) && (n_96 != t)))
        _fail(t);
      else
        n_96 = t;
      t = not_null(g_95);
      if(((m_96 != NULL) && (m_96 != t)))
        _fail(t);
      else
        m_96 = t;
      t = not_null(e_95);
      if(((l_96 != NULL) && (l_96 != t)))
        _fail(t);
      else
        l_96 = t;
      t = not_null(f_95);
      if(((q_96 != NULL) && (q_96 != t)))
        _fail(t);
      else
        q_96 = t;
      t = not_null(m_96);
      t = is_string_0_0(t);
      t = not_null(l_96);
      t = is_list_0_0(t);
      t = not_null(n_96);
      {
        static ATerm i_6 (ATerm t);
        static ATerm i_6 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(l_96), t);
          return(t);
        }
        t = xtc_query_one_2_0(i_6, w_0, t);
      }
      if(((p_96 != NULL) && (p_96 != t)))
        _fail(t);
      else
        p_96 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(p_96));
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
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((s_96 != NULL) && (s_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_96 = ATgetArgument(t, 0);
      if(((t_96 != NULL) && (t_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_96 = ATgetArgument(t, 1);
      if(((r_96 != NULL) && (r_96 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((u_96 != NULL) && (u_96 != t)))
    _fail(t);
  else
    u_96 = t;
  if(((w_96 != NULL) && (w_96 != t)))
    _fail(t);
  else
    w_96 = t;
  if(((y_96 != NULL) && (y_96 != t)))
    _fail(t);
  else
    y_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(t_96));
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = (ATerm) ATempty;
      }
  }
  if(((x_96 != NULL) && (x_96 != t)))
    _fail(t);
  else
    x_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_96), not_null(x_96));
  t = union_0_0(t);
  if(((v_96 != NULL) && (v_96 != t)))
    _fail(t);
  else
    v_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(s_96), not_null(t_96), not_null(v_96));
  t = set_0_0(t);
  t = not_null(u_96);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_97 != NULL) && (a_97 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_97 = ATgetFirst((ATermList) t);
      if(((z_96 != NULL) && (z_96 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((b_97 != NULL) && (b_97 != t)))
    _fail(t);
  else
    b_97 = t;
  t = s_127(t);
  {
    static ATerm j_6 (ATerm t);
    static ATerm j_6 (ATerm t)
    {
      ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
      if(((c_97 != NULL) && (c_97 != t)))
        _fail(t);
      else
        c_97 = t;
      if(((e_97 != NULL) && (e_97 != t)))
        _fail(t);
      else
        e_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_97), not_null(c_97));
      t = r_127(t);
      if(((d_97 != NULL) && (d_97 != t)))
        _fail(t);
      else
        d_97 = t;
      return(t);
    }
    t = fetch_1_0(j_6, t);
  }
  t = not_null(z_96);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm k_97 = NULL;
  if(((k_97 != NULL) && (k_97 != t)))
    _fail(t);
  else
    k_97 = t;
  return(t);
}
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_97 != NULL) && (h_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_97 = ATgetArgument(t, 0);
      if(((g_97 != NULL) && (g_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_97 != NULL) && (j_97 != t)))
    _fail(t);
  else
    j_97 = t;
  t = not_null(h_97);
  {
    static ATerm l_97 (ATerm t);
    static ATerm l_97 (ATerm t)
    {
      ATerm f_56 = t;
      int g_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(g_97);
          LocalPopChoice(g_56);
        }
      else
        {
          t = f_56;
          {
            ATerm h_56 = t;
            int i_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm k_6 (ATerm t);
                static ATerm k_6 (ATerm t)
                {
                  t = not_null(g_97);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, k_6, t);
                t = l_97(t);
                LocalPopChoice(i_56);
              }
            else
              {
                t = h_56;
                t = Cons_2_0(l_6, l_97, t);
              }
          }
        }
      return(t);
    }
    t = l_97(t);
  }
  if(((i_97 != NULL) && (i_97 != t)))
    _fail(t);
  else
    i_97 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm n_97 = NULL;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    ATerm o_97 = NULL,p_97 = NULL;
    if(((p_97 != NULL) && (p_97 != t)))
      _fail(t);
    else
      p_97 = t;
    if(((o_97 != NULL) && (o_97 != t)))
      _fail(t);
    else
      o_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_97), not_null(b_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(m_6, n_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(a_80), t);
    return(t);
  }
  t = map_1_0(o_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = Fst_0_0(t);
  if(((v_97 != NULL) && (v_97 != t)))
    _fail(t);
  else
    v_97 = t;
  t = not_null(y_97);
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  t = Snd_0_0(t);
  if(((w_97 != NULL) && (w_97 != t)))
    _fail(t);
  else
    w_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_47, not_null(v_97), not_null(w_97));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm u_0, ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
  if(((r_97 != NULL) && (r_97 != t)))
    _fail(t);
  else
    r_97 = t;
  if(match_cons(t, sym_Reference_1))
    {
      s_97 = ATgetArgument(t, 0);
      {
        ATerm u_97 = NULL;
        t = not_null(s_97);
        if(((u_97 != NULL) && (u_97 != t)))
          _fail(t);
        else
          u_97 = t;
        t = xtc_add_meta_all_0_1(not_null(u_0), t);
        t = map_1_0(p_6, t);
      }
    }
  else
    {
      ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((s_97 != NULL) && (s_97 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_97 = ATgetArgument(t, 0);
          if(((t_97 != NULL) && (t_97 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(s_97);
      if(((z_97 != NULL) && (z_97 != t)))
        _fail(t);
      else
        z_97 = t;
      t = not_null(t_97);
      if(((a_98 != NULL) && (a_98 != t)))
        _fail(t);
      else
        a_98 = t;
      t = not_null(r_97);
      if(((c_98 != NULL) && (c_98 != t)))
        _fail(t);
      else
        c_98 = t;
      t = not_null(a_98);
      t = xtc_add_meta_all_0_1(not_null(u_0), t);
      if(((b_98 != NULL) && (b_98 != t)))
        _fail(t);
      else
        b_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_54, not_null(z_97), not_null(b_98));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t)
{
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      t = xtc_register_0_1(not_null(g_79), t);
      return(t);
    }
    t = map_1_0(r_6, t);
    return(t);
  }
  t = Repository_1_0(q_6, t);
  return(t);
}
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,s_6 = NULL,a_12 = NULL;
  if(((i_98 != NULL) && (i_98 != t)))
    _fail(t);
  else
    i_98 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((e_98 != NULL) && (e_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_98 != NULL) && (j_98 != t)))
    _fail(t);
  else
    j_98 = t;
  t = SSLgetAnnotations(not_null(i_98));
  if(((d_98 != NULL) && (d_98 != t)))
    _fail(t);
  else
    d_98 = t;
  t = not_null(e_98);
  t = b_109(t);
  if(((f_98 != NULL) && (f_98 != t)))
    _fail(t);
  else
    f_98 = t;
  if(((h_98 != NULL) && (h_98 != t)))
    _fail(t);
  else
    h_98 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(f_98));
  if(((s_6 != NULL) && (s_6 != t)))
    _fail(t);
  else
    s_6 = t;
  t = SSLsetAnnotations(not_null(s_6), not_null(d_98));
  if(((g_98 != NULL) && (g_98 != t)))
    _fail(t);
  else
    g_98 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL;
  if(((l_98 != NULL) && (l_98 != t)))
    _fail(t);
  else
    l_98 = t;
  if(((k_98 != NULL) && (k_98 != t)))
    _fail(t);
  else
    k_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_56), not_null(k_98));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  if(((n_98 != NULL) && (n_98 != t)))
    _fail(t);
  else
    n_98 = t;
  t = get_extension_0_0(t);
  if(((m_98 != NULL) && (m_98 != t)))
    _fail(t);
  else
    m_98 = t;
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_98 = NULL;
        if(((o_98 != NULL) && (o_98 != t)))
          _fail(t);
        else
          o_98 = t;
        t = not_null(m_98);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(o_98);
        LocalPopChoice(n_56);
        t = (ATerm) ATinsert(ATempty, term_r_56);
      }
    else
      {
        t = m_56;
        t = not_null(n_98);
        {
          ATerm s_56 = t;
          int t_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_98 = NULL;
              if(((p_98 != NULL) && (p_98 != t)))
                _fail(t);
              else
                p_98 = t;
              t = not_null(m_98);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(p_98);
              LocalPopChoice(t_56);
              t = (ATerm) ATinsert(ATempty, term_w_56);
            }
          else
            {
              t = s_56;
              t = not_null(n_98);
              {
                ATerm j_58 = t;
                int k_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_98 = NULL;
                    if(((q_98 != NULL) && (q_98 != t)))
                      _fail(t);
                    else
                      q_98 = t;
                    t = not_null(m_98);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(q_98);
                    LocalPopChoice(k_58);
                    t = (ATerm) ATinsert(ATempty, term_w_56);
                  }
                else
                  {
                    t = j_58;
                    t = not_null(n_98);
                    {
                      ATerm l_58 = t;
                      int m_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_98 = NULL;
                          if(((r_98 != NULL) && (r_98 != t)))
                            _fail(t);
                          else
                            r_98 = t;
                          t = not_null(m_98);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(r_98);
                          LocalPopChoice(m_58);
                          t = (ATerm) ATinsert(ATempty, term_a_59);
                        }
                      else
                        {
                          t = l_58;
                          t = not_null(n_98);
                          {
                            ATerm i_59 = t;
                            int j_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_98 = NULL;
                                if(((s_98 != NULL) && (s_98 != t)))
                                  _fail(t);
                                else
                                  s_98 = t;
                                t = not_null(m_98);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(s_98);
                                LocalPopChoice(j_59);
                                t = (ATerm) ATinsert(ATempty, term_m_59);
                              }
                            else
                              {
                                t = i_59;
                                t = not_null(n_98);
                                {
                                  ATerm n_59 = t;
                                  int q_59 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm t_98 = NULL;
                                      if(((t_98 != NULL) && (t_98 != t)))
                                        _fail(t);
                                      else
                                        t_98 = t;
                                      t = not_null(m_98);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(t_98);
                                      LocalPopChoice(q_59);
                                      t = (ATerm) ATinsert(ATempty, term_m_59);
                                    }
                                  else
                                    {
                                      t = n_59;
                                      t = not_null(n_98);
                                      {
                                        ATerm s_59 = t;
                                        int u_59 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_98 = NULL;
                                            if(((u_98 != NULL) && (u_98 != t)))
                                              _fail(t);
                                            else
                                              u_98 = t;
                                            t = not_null(m_98);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(u_98);
                                            LocalPopChoice(u_59);
                                            t = (ATerm) ATinsert(ATempty, term_z_59);
                                          }
                                        else
                                          {
                                            t = s_59;
                                            t = not_null(n_98);
                                            {
                                              ATerm a_60 = t;
                                              int b_60 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_98 = NULL;
                                                  if(((v_98 != NULL) && (v_98 != t)))
                                                    _fail(t);
                                                  else
                                                    v_98 = t;
                                                  t = not_null(m_98);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(v_98);
                                                  LocalPopChoice(b_60);
                                                  t = (ATerm) ATinsert(ATempty, term_e_60);
                                                }
                                              else
                                                {
                                                  t = a_60;
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
ATerm eq_0_0 (ATerm t)
{
  ATerm w_98 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_98 != NULL) && (w_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_98 = ATgetArgument(t, 0);
      if(((w_98 != NULL) && (w_98 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_98 = NULL;
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm a_99 = NULL;
  if(((a_99 != NULL) && (a_99 != t)))
    _fail(t);
  else
    a_99 = t;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      ATerm f_60 = t;
      int g_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(u_6, t_6, t);
          LocalPopChoice(g_60);
        }
      else
        {
          t = f_60;
          {
            ATerm h_60 = t;
            int k_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(v_6, w_6, t);
                LocalPopChoice(k_63);
              }
            else
              {
                t = h_60;
                t = Cons_2_0(x_6, h_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(t_6, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm d_99 = NULL;
  if(((d_99 != NULL) && (d_99 != t)))
    _fail(t);
  else
    d_99 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(y_6, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL;
  if(((h_99 != NULL) && (h_99 != t)))
    _fail(t);
  else
    h_99 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((e_99 != NULL) && (e_99 != t)))
    _fail(t);
  else
    e_99 = t;
  t = not_null(h_99);
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  t = base_filename_0_0(t);
  if(((f_99 != NULL) && (f_99 != t)))
    _fail(t);
  else
    f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_99), not_null(f_99));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm l_64 = t;
  int m_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_99 = NULL;
      if(((i_99 != NULL) && (i_99 != t)))
        _fail(t);
      else
        i_99 = t;
      t = has_no_extension_0_0(t);
      t = not_null(i_99);
      LocalPopChoice(m_64);
      t = (ATerm) ATinsert(ATempty, term_u_65);
    }
  else
    {
      t = l_64;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL;
  if(((m_99 != NULL) && (m_99 != t)))
    _fail(t);
  else
    m_99 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((j_99 != NULL) && (j_99 != t)))
    _fail(t);
  else
    j_99 = t;
  t = not_null(m_99);
  if(((l_99 != NULL) && (l_99 != t)))
    _fail(t);
  else
    l_99 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((k_99 != NULL) && (k_99 != t)))
    _fail(t);
  else
    k_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_99), not_null(k_99));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_99 != NULL) && (n_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_99 = ATgetArgument(t, 0);
      if(((o_99 != NULL) && (o_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_99 != NULL) && (q_99 != t)))
    _fail(t);
  else
    q_99 = t;
  if(((s_99 != NULL) && (s_99 != t)))
    _fail(t);
  else
    s_99 = t;
  t = not_null(o_99);
  t = xtc_default_xt_meta_0_0(t);
  if(((r_99 != NULL) && (r_99 != t)))
    _fail(t);
  else
    r_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_v_65, (ATerm) ATmakeAppl(sym_String_1, not_null(n_99)))), not_null(r_99));
  t = conc_0_0(t);
  if(((p_99 != NULL) && (p_99 != t)))
    _fail(t);
  else
    p_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_99), not_null(p_99));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_65 = ATgetArgument(t, 0);
      if(match_cons(w_65, sym_Tool_1))
        {
          if(((t_99 != NULL) && (t_99 != ATgetArgument(w_65, 0))))
            _fail(ATgetArgument(w_65, 0));
          else
            t_99 = ATgetArgument(w_65, 0);
        }
      else
        _fail(t);
      if(((u_99 != NULL) && (u_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_99 != NULL) && (w_99 != t)))
    _fail(t);
  else
    w_99 = t;
  t = not_null(u_99);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((v_99 != NULL) && (v_99 != t)))
    _fail(t);
  else
    v_99 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(t_99), not_null(v_99));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL;
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  if(((a_100 != NULL) && (a_100 != t)))
    _fail(t);
  else
    a_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_65 = ATgetArgument(t, 0);
      if(!(match_cons(x_65, sym_Import_0)))
        _fail(t);
      if(((x_99 != NULL) && (x_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_99 != NULL) && (z_99 != t)))
    _fail(t);
  else
    z_99 = t;
  t = not_null(x_99);
  t = map_1_0(z_6, t);
  if(((y_99 != NULL) && (y_99 != t)))
    _fail(t);
  else
    y_99 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(y_99));
  return(t);
}
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_115(t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      t = p_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = filter_1_0(c_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL;
  t = term_q_17;
  if(((d_100 != NULL) && (d_100 != t)))
    _fail(t);
  else
    d_100 = t;
  t = term_h_66;
  if(((c_100 != NULL) && (c_100 != t)))
    _fail(t);
  else
    c_100 = t;
  t = not_null(d_100);
  t = err_0_1(not_null(c_100), t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_66 = t;
  int t_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(t_67);
    }
  else
    {
      t = l_66;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(a_7, b_7, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL;
  if(((f_100 != NULL) && (f_100 != t)))
    _fail(t);
  else
    f_100 = t;
  t = xtc_convert_0_0(t);
  if(((e_100 != NULL) && (e_100 != t)))
    _fail(t);
  else
    e_100 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(e_100));
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_100 = ATgetArgument(t, 0);
      {
        ATerm u_67 = ATgetArgument(t, 1);
        if(match_cons(u_67, sym_Stream_1))
          {
            if(((h_100 != NULL) && (h_100 != ATgetArgument(u_67, 0))))
              _fail(ATgetArgument(u_67, 0));
            else
              h_100 = ATgetArgument(u_67, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(g_100), not_null(h_100));
  if(((j_100 != NULL) && (j_100 != t)))
    _fail(t);
  else
    j_100 = t;
  if(((i_100 != NULL) && (i_100 != t)))
    _fail(t);
  else
    i_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_100));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL;
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  if(((k_100 != NULL) && (k_100 != t)))
    _fail(t);
  else
    k_100 = t;
  t = not_null(n_100);
  if(((m_100 != NULL) && (m_100 != t)))
    _fail(t);
  else
    m_100 = t;
  t = term_q_17;
  t = log_stream_0_0(t);
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_100), not_null(l_100));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_68 = ATgetArgument(t, 0);
      if(match_cons(t_68, sym_Stream_1))
        {
          if(((o_100 != NULL) && (o_100 != ATgetArgument(t_68, 0))))
            _fail(ATgetArgument(t_68, 0));
          else
            o_100 = ATgetArgument(t_68, 0);
        }
      else
        _fail(t);
      if(((p_100 != NULL) && (p_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(o_100), not_null(p_100));
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_100));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm x_68 = t;
  int y_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_68;
      t = get_config_0_0(t);
      LocalPopChoice(y_68);
    }
  else
    {
      t = x_68;
      t = term_q_17;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_100 != NULL) && (s_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_100 = ATgetArgument(t, 0);
      if(((t_100 != NULL) && (t_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_69 = t;
    int b_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(s_100), not_null(t_100));
        LocalPopChoice(b_69);
      }
    else
      {
        t = a_69;
        t = SSL_subtr(not_null(s_100), not_null(t_100));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm w_100 (ATerm t);
  static ATerm w_100 (ATerm t)
  {
    ATerm c_69 = t;
    int d_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(d_69);
      }
    else
      {
        t = c_69;
        t = m_116(t);
        t = w_100(t);
      }
    return(t);
  }
  t = w_100(t);
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
  ATerm x_100 = NULL,y_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_100 != NULL) && (x_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_100 = ATgetArgument(t, 0);
      if(((y_100 != NULL) && (y_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(x_100), not_null(y_100), (ATerm) ATempty);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_69 = ATgetArgument(t, 0);
      if(((ATgetType(t_69) != AT_INT) || (ATgetInt((ATermInt) t_69) != 0)))
        _fail(t);
      if(((b_101 != NULL) && (b_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_101 = ATgetArgument(t, 1);
      if(((c_101 != NULL) && (c_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(c_101);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((d_101 != NULL) && (d_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_101 = ATgetArgument(t, 0);
      if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_101 = ATgetArgument(t, 1);
      if(((f_101 != NULL) && (f_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((i_101 != NULL) && (i_101 != t)))
    _fail(t);
  else
    i_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_101), term_o_12);
  t = geq_0_0(t);
  t = not_null(i_101);
  if(((h_101 != NULL) && (h_101 != t)))
    _fail(t);
  else
    h_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_101), term_o_12);
  t = subt_0_0(t);
  if(((g_101 != NULL) && (g_101 != t)))
    _fail(t);
  else
    g_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(g_101), not_null(e_101), (ATerm) ATinsert(CheckATermList(not_null(f_101)), not_null(e_101)));
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
  ATerm j_101 = NULL;
  if(((j_101 != NULL) && (j_101 != t)))
    _fail(t);
  else
    j_101 = t;
  t = SSL_strlen(not_null(j_101));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm l_101 = NULL;
  if(((l_101 != NULL) && (l_101 != t)))
    _fail(t);
  else
    l_101 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_u_69;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_v_69;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_f_70;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_g_70;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_j_70;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_k_70;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_l_70;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_o_70;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_p_70;
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
  ATerm n_101 = NULL;
  if(((n_101 != NULL) && (n_101 != t)))
    _fail(t);
  else
    n_101 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm o_101 (ATerm t);
  static ATerm o_101 (ATerm t)
  {
    ATerm q_70 = t;
    int r_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_7, o_101, t);
        LocalPopChoice(r_70);
      }
    else
      {
        t = q_70;
        t = c_124(t);
      }
    return(t);
  }
  t = o_101(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm p_101 = NULL;
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
            ATerm u_70 = ATgetFirst((ATermList) t);
            if(((ATgetType(u_70) != AT_INT) || (ATgetInt((ATermInt) u_70) != 47)))
              _fail(t);
            if(((p_101 != NULL) && (p_101 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(i_7, t);
      t = not_null(p_101);
      return(t);
    }
    t = try_1_0(h_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm x_70 = t;
  int y_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(y_70);
    }
  else
    {
      t = x_70;
      t = term_z_70;
    }
  return(t);
}
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t)
{
  static ATerm j_7 (ATerm t);
  static ATerm j_7 (ATerm t)
  {
    ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL;
    if(((q_101 != NULL) && (q_101 != t)))
      _fail(t);
    else
      q_101 = t;
    if(((u_101 != NULL) && (u_101 != t)))
      _fail(t);
    else
      u_101 = t;
    t = log_src_0_0(t);
    if(((r_101 != NULL) && (r_101 != t)))
      _fail(t);
    else
      r_101 = t;
    t = not_null(u_101);
    if(((t_101 != NULL) && (t_101 != t)))
      _fail(t);
    else
      t_101 = t;
    t = not_null(d_79);
    t = severity_string_0_0(t);
    if(((s_101 != NULL) && (s_101 != t)))
      _fail(t);
    else
      s_101 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_71), not_null(e_79)), term_o_71), not_null(r_101)), term_l_71), not_null(s_101)), term_a_71);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(q_101);
    return(t);
  }
  t = if_log_severity_1_1(j_7, not_null(d_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t)
{
  ATerm q_71 = t;
  int r_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_101 = NULL,x_101 = NULL,y_101 = NULL;
      if(((w_101 != NULL) && (w_101 != t)))
        _fail(t);
      else
        w_101 = t;
      if(((y_101 != NULL) && (y_101 != t)))
        _fail(t);
      else
        y_101 = t;
      t = term_s_71;
      {
        ATerm b_72 = t;
        int c_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(c_72);
          }
        else
          {
            t = b_72;
            t = term_d_72;
          }
      }
      if(((x_101 != NULL) && (x_101 != t)))
        _fail(t);
      else
        x_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_101), not_null(z_78));
      t = geq_0_0(t);
      t = not_null(w_101);
      LocalPopChoice(r_71);
      t = o_150(t);
    }
  else
    {
      t = q_71;
      {
        ATerm z_101 = NULL;
        if(((z_101 != NULL) && (z_101 != t)))
          _fail(t);
        else
          z_101 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm b_102 = NULL;
  if(((b_102 != NULL) && (b_102 != t)))
    _fail(t);
  else
    b_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_v_15;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_p_14;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_f_13;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_b_13;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_o_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_d_72;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_e_72;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_f_72;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_l_72;
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
  ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  if(((d_102 != NULL) && (d_102 != t)))
    _fail(t);
  else
    d_102 = t;
  if(((f_102 != NULL) && (f_102 != t)))
    _fail(t);
  else
    f_102 = t;
  t = not_null(f_79);
  t = verbose_level_0_0(t);
  if(((e_102 != NULL) && (e_102 != t)))
    _fail(t);
  else
    e_102 = t;
  if(((c_102 != NULL) && (c_102 != t)))
    _fail(t);
  else
    c_102 = t;
  t = not_null(d_102);
  t = log_if_verbose_1_1(p_150, not_null(c_102), t);
  return(t);
}
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t)
{
  static ATerm k_7 (ATerm t);
  static ATerm k_7 (ATerm t)
  {
    ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL;
    t = log_0_2(not_null(a_79), not_null(b_79), t);
    if(((g_102 != NULL) && (g_102 != t)))
      _fail(t);
    else
      g_102 = t;
    if(((k_102 != NULL) && (k_102 != t)))
      _fail(t);
    else
      k_102 = t;
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    t = not_null(a_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((l_102 != NULL) && (l_102 != t)))
      _fail(t);
    else
      l_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_102), term_f_13);
    t = add_0_0(t);
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_102), term_m_72);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((i_102 != NULL) && (i_102 != t)))
      _fail(t);
    else
      i_102 = t;
    t = log_stream_0_0(t);
    if(((h_102 != NULL) && (h_102 != t)))
      _fail(t);
    else
      h_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_102), not_null(c_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_p_71;
    t = log_puts_0_0(t);
    t = not_null(g_102);
    return(t);
  }
  t = if_log_severity_1_1(k_7, not_null(a_79), t);
  return(t);
}
ATerm notice_0_1 (ATerm x_78, ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL;
  if(((s_102 != NULL) && (s_102 != t)))
    _fail(t);
  else
    s_102 = t;
  t = term_n_72;
  if(((n_102 != NULL) && (n_102 != t)))
    _fail(t);
  else
    n_102 = t;
  t = not_null(s_102);
  if(((p_102 != NULL) && (p_102 != t)))
    _fail(t);
  else
    p_102 = t;
  if(((r_102 != NULL) && (r_102 != t)))
    _fail(t);
  else
    r_102 = t;
  if(((q_102 != NULL) && (q_102 != t)))
    _fail(t);
  else
    q_102 = t;
  if(((o_102 != NULL) && (o_102 != t)))
    _fail(t);
  else
    o_102 = t;
  t = not_null(p_102);
  t = log_0_3(not_null(n_102), not_null(x_78), not_null(o_102), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_72 = ATgetArgument(t, 0);
      if(match_cons(o_72, sym_Stream_1))
        {
          if(((t_102 != NULL) && (t_102 != ATgetArgument(o_72, 0))))
            _fail(ATgetArgument(o_72, 0));
          else
            t_102 = ATgetArgument(o_72, 0);
        }
      else
        _fail(t);
      if(((u_102 != NULL) && (u_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(t_102), not_null(u_102));
  if(((w_102 != NULL) && (w_102 != t)))
    _fail(t);
  else
    w_102 = t;
  if(((v_102 != NULL) && (v_102 != t)))
    _fail(t);
  else
    v_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_102));
  return(t);
}
static ATerm j_103 (ATerm a_103, ATerm b_103, ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  t = not_null(a_103);
  if(((c_103 != NULL) && (c_103 != t)))
    _fail(t);
  else
    c_103 = t;
  t = SSL_fclose(not_null(c_103));
  return(t);
}
static ATerm k_103 (ATerm e_103, ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL;
  t = not_null(e_103);
  if(((g_103 != NULL) && (g_103 != t)))
    _fail(t);
  else
    g_103 = t;
  t = SSL_fclose(not_null(g_103));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL;
  if(((i_103 != NULL) && (i_103 != t)))
    _fail(t);
  else
    i_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_103 = ATgetArgument(t, 0);
      {
        ATerm p_72 = t;
        int q_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_103(not_null(h_103), not_null(i_103), t);
            LocalPopChoice(q_72);
          }
        else
          {
            t = p_72;
            t = k_103(not_null(i_103), t);
          }
      }
    }
  else
    {
      t = k_103(not_null(i_103), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_103 != NULL) && (l_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_103 = ATgetArgument(t, 0);
      if(((m_103 != NULL) && (m_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(l_103), not_null(m_103));
  if(((o_103 != NULL) && (o_103 != t)))
    _fail(t);
  else
    o_103 = t;
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_103));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL;
  t = SSL_stdin_stream();
  if(((q_103 != NULL) && (q_103 != t)))
    _fail(t);
  else
    q_103 = t;
  if(((p_103 != NULL) && (p_103 != t)))
    _fail(t);
  else
    p_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_103));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL;
  t = SSL_stderr_stream();
  if(((u_103 != NULL) && (u_103 != t)))
    _fail(t);
  else
    u_103 = t;
  if(((t_103 != NULL) && (t_103 != t)))
    _fail(t);
  else
    t_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_103));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm w_103 = NULL;
  if(((w_103 != NULL) && (w_103 != t)))
    _fail(t);
  else
    w_103 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(w_103);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(w_103);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(w_103);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_103 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((z_103 != NULL) && (z_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_103);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm a_104 = NULL;
  if(((a_104 != NULL) && (a_104 != t)))
    _fail(t);
  else
    a_104 = t;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_104 = NULL;
  if(((b_104 != NULL) && (b_104 != t)))
    _fail(t);
  else
    b_104 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_73 = ATgetArgument(t, 0);
      ATerm h_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_74 = t;
    int l_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(l_74);
      }
    else
      {
        t = i_74;
        {
          ATerm m_74 = t;
          int n_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(l_7, m_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(n_74);
            }
          else
            {
              t = m_74;
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
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_104 != NULL) && (h_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_104 = ATgetArgument(t, 0);
      if(((c_104 != NULL) && (c_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_104);
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  if(((f_104 != NULL) && (f_104 != t)))
    _fail(t);
  else
    f_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_104), term_o_74);
  t = open_stream_0_0(t);
  if(((e_104 != NULL) && (e_104 != t)))
    _fail(t);
  else
    e_104 = t;
  if(((d_104 != NULL) && (d_104 != t)))
    _fail(t);
  else
    d_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_104), not_null(c_104));
  t = x_122(t);
  t = fclose_0_0(t);
  t = not_null(c_104);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm i_104 = NULL;
  if(((i_104 != NULL) && (i_104 != t)))
    _fail(t);
  else
    i_104 = t;
  t = SSL_creat(not_null(i_104));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
  static ATerm o_7 (ATerm t);
  static ATerm o_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_104 != NULL) && (j_104 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_104 = ATgetFirst((ATermList) t);
        {
          ATerm p_74 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(p_74) != AT_LIST) || !(ATisEmpty(p_74))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(o_7, t);
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  if(((k_104 != NULL) && (k_104 != t)))
    _fail(t);
  else
    k_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_104), not_null(j_104));
  return(t);
}
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm m_104 (ATerm t);
  static ATerm m_104 (ATerm t)
  {
    ATerm q_74 = t;
    int r_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        t = m_104(t);
        LocalPopChoice(r_74);
      }
    else
      {
        t = q_74;
        t = v_115(t);
      }
    return(t);
  }
  t = m_104(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm o_104 = NULL;
  if(((o_104 != NULL) && (o_104 != t)))
    _fail(t);
  else
    o_104 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  t = repeat_2_0(x_115, p_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm r_104 = NULL;
  if(((r_104 != NULL) && (r_104 != t)))
    _fail(t);
  else
    r_104 = t;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_104 = NULL;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm t_104 (ATerm t);
  static ATerm t_104 (ATerm t)
  {
    ATerm s_74 = t;
    int t_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_7, Nil_0_0, t);
        t = f_124(t);
        LocalPopChoice(t_74);
      }
    else
      {
        t = s_74;
        t = Cons_2_0(r_7, t_104, t);
      }
    return(t);
  }
  t = t_104(t);
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
      t = (ATerm) ATinsert(ATempty, term_u_74);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(u_7, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_j_56);
        }
      else
        {
          t = repeat_1_0(x_7, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_u_74);
            }
          else
            {
              ATerm z_104 = NULL;
              if(((z_104 != NULL) && (z_104 != t)))
                _fail(t);
              else
                z_104 = t;
            }
        }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_104 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_104 != NULL) && (w_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_104 = ATgetArgument(t, 0);
      {
        ATerm q_75 = ATgetArgument(t, 1);
        if(((ATgetType(q_75) != AT_INT) || (ATgetInt((ATermInt) q_75) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(w_104);
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
  ATerm x_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_76 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_76;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm y_104 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((y_104 != NULL) && (y_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_104 = ATgetArgument(t, 0);
      {
        ATerm s_77 = ATgetArgument(t, 1);
        if(((ATgetType(s_77) != AT_INT) || (ATgetInt((ATermInt) s_77) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(y_104);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(s_7, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm a_105 = NULL;
  if(((a_105 != NULL) && (a_105 != t)))
    _fail(t);
  else
    a_105 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(a_105);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm u_78 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_78;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL;
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  if(((b_105 != NULL) && (b_105 != t)))
    _fail(t);
  else
    b_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), (ATerm) ATinsert(ATempty, term_h_79));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t)
{
  ATerm i_79 = t;
  int j_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_105 = NULL;
      if(((d_105 != NULL) && (d_105 != t)))
        _fail(t);
      else
        d_105 = t;
      t = not_null(r_79);
      {
        ATerm k_79 = t;
        int l_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(l_79);
          }
        else
          {
            t = k_79;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(d_105);
      LocalPopChoice(j_79);
      {
        ATerm e_105 = NULL,f_105 = NULL;
        if(((f_105 != NULL) && (f_105 != t)))
          _fail(t);
        else
          f_105 = t;
        if(((e_105 != NULL) && (e_105 != t)))
          _fail(t);
        else
          e_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_79), not_null(e_105));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = i_79;
      {
        ATerm g_105 = NULL,h_105 = NULL;
        t = not_null(r_79);
        if(((h_105 != NULL) && (h_105 != t)))
          _fail(t);
        else
          h_105 = t;
        t = term_m_79;
        if(((g_105 != NULL) && (g_105 != t)))
          _fail(t);
        else
          g_105 = t;
        t = not_null(h_105);
        t = err_0_1(not_null(g_105), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm i_105 = NULL;
  if(((i_105 != NULL) && (i_105 != t)))
    _fail(t);
  else
    i_105 = t;
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
  }
  t = term_o_79;
  t = xtc_save_file_0_1(not_null(i_105), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm j_105 = NULL;
  if(((j_105 != NULL) && (j_105 != t)))
    _fail(t);
  else
    j_105 = t;
  {
    ATerm p_79 = t;
    int q_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_105 = NULL,l_105 = NULL;
        t = not_null(j_105);
        if(((l_105 != NULL) && (l_105 != t)))
          _fail(t);
        else
          l_105 = t;
        t = not_null(j_105);
        if(((k_105 != NULL) && (k_105 != t)))
          _fail(t);
        else
          k_105 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_105));
        t = read_from_0_0(t);
        LocalPopChoice(q_79);
      }
    else
      {
        t = p_79;
        {
          ATerm s_79 = t;
          int u_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
              t = not_null(j_105);
              if(((o_105 != NULL) && (o_105 != t)))
                _fail(t);
              else
                o_105 = t;
              t = not_null(j_105);
              t = xtc_create_new_0_0(t);
              t = not_null(o_105);
              if(((n_105 != NULL) && (n_105 != t)))
                _fail(t);
              else
                n_105 = t;
              if(((m_105 != NULL) && (m_105 != t)))
                _fail(t);
              else
                m_105 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_105));
              t = read_from_0_0(t);
              LocalPopChoice(u_79);
            }
          else
            {
              t = s_79;
              {
                ATerm p_105 = NULL,q_105 = NULL;
                t = not_null(j_105);
                if(((q_105 != NULL) && (q_105 != t)))
                  _fail(t);
                else
                  q_105 = t;
                t = term_w_79;
                if(((p_105 != NULL) && (p_105 != t)))
                  _fail(t);
                else
                  p_105 = t;
                t = not_null(q_105);
                t = err_0_1(not_null(p_105), t);
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
  ATerm r_105 = NULL;
  if(((r_105 != NULL) && (r_105 != t)))
    _fail(t);
  else
    r_105 = t;
  {
    ATerm d_80 = t;
    int f_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_105 = NULL,t_105 = NULL;
        t = not_null(r_105);
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = not_null(r_105);
        if(((s_105 != NULL) && (s_105 != t)))
          _fail(t);
        else
          s_105 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(s_105));
        t = read_from_0_0(t);
        LocalPopChoice(f_80);
      }
    else
      {
        t = d_80;
        {
          ATerm u_105 = NULL,v_105 = NULL;
          t = not_null(r_105);
          if(((v_105 != NULL) && (v_105 != t)))
            _fail(t);
          else
            v_105 = t;
          t = term_h_80;
          if(((u_105 != NULL) && (u_105 != t)))
            _fail(t);
          else
            u_105 = t;
          t = not_null(v_105);
          t = err_0_1(not_null(u_105), t);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm a_106 = NULL;
  if(((a_106 != NULL) && (a_106 != t)))
    _fail(t);
  else
    a_106 = t;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm f_106 = NULL;
  if(((f_106 != NULL) && (f_106 != t)))
    _fail(t);
  else
    f_106 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm v_79, ATerm t)
{
  ATerm y_105 = NULL;
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  {
    ATerm i_80 = t;
    int z_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_105 = NULL;
        if(((z_105 != NULL) && (z_105 != t)))
          _fail(t);
        else
          z_105 = t;
        t = is_url_http_0_0(t);
        t = not_null(z_105);
        LocalPopChoice(z_80);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = i_80;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm j_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(y_7, t);
        LocalPopChoice(k_81);
      }
    else
      {
        t = j_81;
        {
          ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL;
          if(((b_106 != NULL) && (b_106 != t)))
            _fail(t);
          else
            b_106 = t;
          if(((c_106 != NULL) && (c_106 != t)))
            _fail(t);
          else
            c_106 = t;
          t = not_null(y_105);
          if(((e_106 != NULL) && (e_106 != t)))
            _fail(t);
          else
            e_106 = t;
          t = term_l_81;
          if(((d_106 != NULL) && (d_106 != t)))
            _fail(t);
          else
            d_106 = t;
          t = not_null(e_106);
          t = notice_0_1(not_null(d_106), t);
          t = not_null(c_106);
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
  ATerm g_106 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((g_106 != NULL) && (g_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(g_106));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm h_106 = NULL;
  if(((h_106 != NULL) && (h_106 != t)))
    _fail(t);
  else
    h_106 = t;
  t = lookup_table_0_1(not_null(h_106), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm i_106 = NULL;
  if(((i_106 != NULL) && (i_106 != t)))
    _fail(t);
  else
    i_106 = t;
  {
    ATerm n_81 = t;
    int o_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_54;
        t = table_keys_0_0(t);
        {
          ATerm p_81 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_81;
            }
        }
        LocalPopChoice(o_81);
      }
    else
      {
        t = n_81;
        t = not_null(y_79);
        t = xtc_load_0_1(not_null(z_79), t);
      }
  }
  t = not_null(i_106);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm j_106 = NULL;
  if(((j_106 != NULL) && (j_106 != t)))
    _fail(t);
  else
    j_106 = t;
  t = SSL_getenv(not_null(j_106));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_81 = t;
  int r_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_81;
      t = getenv_0_0(t);
      LocalPopChoice(r_81);
    }
  else
    {
      t = q_81;
      {
        ATerm v_81 = t;
        int w_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(w_81);
          }
        else
          {
            t = v_81;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
  if(((n_106 != NULL) && (n_106 != t)))
    _fail(t);
  else
    n_106 = t;
  if(((p_106 != NULL) && (p_106 != t)))
    _fail(t);
  else
    p_106 = t;
  t = xtc_location_0_0(t);
  if(((o_106 != NULL) && (o_106 != t)))
    _fail(t);
  else
    o_106 = t;
  if(((k_106 != NULL) && (k_106 != t)))
    _fail(t);
  else
    k_106 = t;
  t = not_null(n_106);
  if(((m_106 != NULL) && (m_106 != t)))
    _fail(t);
  else
    m_106 = t;
  t = (ATerm) ATempty;
  if(((l_106 != NULL) && (l_106 != t)))
    _fail(t);
  else
    l_106 = t;
  t = not_null(m_106);
  t = xtc_init_0_2(not_null(k_106), not_null(l_106), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,a_8 = NULL,b_12 = NULL;
  if(((x_106 != NULL) && (x_106 != t)))
    _fail(t);
  else
    x_106 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((r_106 != NULL) && (r_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_106 = ATgetArgument(t, 0);
      if(((s_106 != NULL) && (s_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_106 != NULL) && (y_106 != t)))
    _fail(t);
  else
    y_106 = t;
  t = SSLgetAnnotations(not_null(x_106));
  if(((q_106 != NULL) && (q_106 != t)))
    _fail(t);
  else
    q_106 = t;
  t = not_null(r_106);
  t = g_110(t);
  if(((t_106 != NULL) && (t_106 != t)))
    _fail(t);
  else
    t_106 = t;
  t = not_null(s_106);
  t = h_110(t);
  if(((u_106 != NULL) && (u_106 != t)))
    _fail(t);
  else
    u_106 = t;
  if(((w_106 != NULL) && (w_106 != t)))
    _fail(t);
  else
    w_106 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(t_106), not_null(u_106));
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = SSLsetAnnotations(not_null(a_8), not_null(q_106));
  if(((v_106 != NULL) && (v_106 != t)))
    _fail(t);
  else
    v_106 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,b_8 = NULL,c_12 = NULL;
  if(((e_107 != NULL) && (e_107 != t)))
    _fail(t);
  else
    e_107 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((a_107 != NULL) && (a_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = SSLgetAnnotations(not_null(e_107));
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  t = not_null(a_107);
  t = f_110(t);
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  if(((d_107 != NULL) && (d_107 != t)))
    _fail(t);
  else
    d_107 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(b_107));
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  t = SSLsetAnnotations(not_null(b_8), not_null(z_106));
  if(((c_107 != NULL) && (c_107 != t)))
    _fail(t);
  else
    c_107 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm g_107 = NULL;
  if(((g_107 != NULL) && (g_107 != t)))
    _fail(t);
  else
    g_107 = t;
  t = SSL_is_string(not_null(g_107));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  if(match_cons(t, sym__2))
    {
      i_107 = ATgetArgument(t, 0);
      j_107 = ATgetArgument(t, 1);
      {
        ATerm x_81 = t;
        int y_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_107 = NULL,m_107 = NULL,o_107 = NULL;
            t = not_null(k_107);
            if(((l_107 != NULL) && (l_107 != t)))
              _fail(t);
            else
              l_107 = t;
            t = not_null(k_107);
            if(((o_107 != NULL) && (o_107 != t)))
              _fail(t);
            else
              o_107 = t;
            t = not_null(l_107);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(l_107));
            LocalPopChoice(y_81);
          }
        else
          {
            t = x_81;
            {
              ATerm z_81 = t;
              int a_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
                  t = not_null(i_107);
                  if(((q_107 != NULL) && (q_107 != t)))
                    _fail(t);
                  else
                    q_107 = t;
                  t = not_null(j_107);
                  if(((p_107 != NULL) && (p_107 != t)))
                    _fail(t);
                  else
                    p_107 = t;
                  t = not_null(k_107);
                  if(((s_107 != NULL) && (s_107 != t)))
                    _fail(t);
                  else
                    s_107 = t;
                  t = not_null(q_107);
                  t = is_string_0_0(t);
                  t = not_null(p_107);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(q_107), not_null(p_107));
                  LocalPopChoice(a_82);
                }
              else
                {
                  t = z_81;
                  {
                    ATerm b_82 = t;
                    int c_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL;
                        t = not_null(i_107);
                        if(((t_107 != NULL) && (t_107 != t)))
                          _fail(t);
                        else
                          t_107 = t;
                        t = not_null(j_107);
                        if(((u_107 != NULL) && (u_107 != t)))
                          _fail(t);
                        else
                          u_107 = t;
                        t = not_null(k_107);
                        if(((v_107 != NULL) && (v_107 != t)))
                          _fail(t);
                        else
                          v_107 = t;
                        t = not_null(t_107);
                        t = is_string_0_0(t);
                        t = not_null(u_107);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(t_107), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_v_65, (ATerm) ATmakeAppl(sym_String_1, not_null(u_107)))));
                        LocalPopChoice(c_82);
                      }
                    else
                      {
                        t = b_82;
                        {
                          ATerm w_107 = NULL,x_107 = NULL;
                          t = not_null(k_107);
                          if(((w_107 != NULL) && (w_107 != t)))
                            _fail(t);
                          else
                            w_107 = t;
                          t = not_null(k_107);
                          if(((x_107 != NULL) && (x_107 != t)))
                            _fail(t);
                          else
                            x_107 = t;
                          t = not_null(w_107);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(w_107));
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
      ATerm d_82 = t;
      int e_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
          t = not_null(k_107);
          if(((y_107 != NULL) && (y_107 != t)))
            _fail(t);
          else
            y_107 = t;
          t = not_null(k_107);
          if(((a_108 != NULL) && (a_108 != t)))
            _fail(t);
          else
            a_108 = t;
          t = not_null(y_107);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(y_107));
          LocalPopChoice(e_82);
        }
      else
        {
          t = d_82;
          {
            ATerm b_108 = NULL,c_108 = NULL;
            t = not_null(k_107);
            if(((b_108 != NULL) && (b_108 != t)))
              _fail(t);
            else
              b_108 = t;
            t = not_null(k_107);
            if(((c_108 != NULL) && (c_108 != t)))
              _fail(t);
            else
              c_108 = t;
            t = not_null(b_108);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(b_108));
          }
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_108 = NULL;
  if(((j_108 != NULL) && (j_108 != t)))
    _fail(t);
  else
    j_108 = t;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm k_108 = NULL;
  if(((k_108 != NULL) && (k_108 != t)))
    _fail(t);
  else
    k_108 = t;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_108 = NULL;
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_108 = NULL;
  if(((m_108 != NULL) && (m_108 != t)))
    _fail(t);
  else
    m_108 = t;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm n_108 = NULL;
  if(((n_108 != NULL) && (n_108 != t)))
    _fail(t);
  else
    n_108 = t;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm o_108 = NULL;
  if(((o_108 != NULL) && (o_108 != t)))
    _fail(t);
  else
    o_108 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_82 = t;
  int g_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_82 = t;
      if((PushChoice() == 0))
        {
          ATerm i_82 = t;
          int j_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(c_8, t);
              LocalPopChoice(j_82);
            }
          else
            {
              t = i_82;
              t = XtcQuery_2_0(d_8, e_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_82;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(t_0, t);
      LocalPopChoice(g_82);
    }
  else
    {
      t = f_82;
      {
        ATerm k_82 = t;
        int l_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(f_8, t);
            LocalPopChoice(l_82);
          }
        else
          {
            t = k_82;
            t = XtcQuery_2_0(g_8, h_8, t);
          }
      }
      {
        ATerm m_82 = t;
        int n_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(t_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(n_82);
          }
        else
          {
            t = m_82;
            {
              ATerm p_108 = NULL,q_108 = NULL;
              if(((p_108 != NULL) && (p_108 != t)))
                _fail(t);
              else
                p_108 = t;
              if(((q_108 != NULL) && (q_108 != t)))
                _fail(t);
              else
                q_108 = t;
              t = not_null(p_108);
              t = xtc_import_local_0_0(t);
              t = not_null(q_108);
              t = xtc_find_reg_local_1_0(t_0, t);
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
  ATerm o_82 = t;
  int p_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(p_82);
    }
  else
    {
      t = o_82;
      {
        ATerm q_82 = t;
        int r_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_8 (ATerm t);
            static ATerm i_8 (ATerm t)
            {
              t = filter_1_0(g_131, t);
              return(t);
            }
            t = Cons_2_0(g_131, i_8, t);
            LocalPopChoice(r_82);
          }
        else
          {
            t = q_82;
            {
              ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
              if(((s_108 != NULL) && (s_108 != t)))
                _fail(t);
              else
                s_108 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((t_108 != NULL) && (t_108 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    t_108 = ATgetFirst((ATermList) t);
                  if(((u_108 != NULL) && (u_108 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    u_108 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(u_108);
              if(((v_108 != NULL) && (v_108 != t)))
                _fail(t);
              else
                v_108 = t;
              t = filter_1_0(g_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm s_82 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_82;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm w_108 = NULL;
  if(((w_108 != NULL) && (w_108 != t)))
    _fail(t);
  else
    w_108 = t;
  t = filter_1_0(j_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm t_82 = t;
  int u_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_108 = NULL;
      if(((y_108 != NULL) && (y_108 != t)))
        _fail(t);
      else
        y_108 = t;
      t = (ATerm) ATinsert(ATempty, term_r_17);
      {
        ATerm v_82 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_82;
          }
      }
      t = not_null(y_108);
      LocalPopChoice(u_82);
      {
        ATerm c_109 = NULL,d_109 = NULL;
        if(((d_109 != NULL) && (d_109 != t)))
          _fail(t);
        else
          d_109 = t;
        t = term_w_82;
        if(((c_109 != NULL) && (c_109 != t)))
          _fail(t);
        else
          c_109 = t;
        t = not_null(d_109);
        t = err_0_1(not_null(c_109), t);
        _fail(t);
      }
    }
  else
    {
      t = t_82;
      {
        ATerm e_109 = NULL;
        if(((e_109 != NULL) && (e_109 != t)))
          _fail(t);
        else
          e_109 = t;
      }
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL;
  if(((g_109 != NULL) && (g_109 != t)))
    _fail(t);
  else
    g_109 = t;
  if(((f_109 != NULL) && (f_109 != t)))
    _fail(t);
  else
    f_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_t_17), term_s_17), not_null(f_109));
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
  ATerm h_109 = NULL,l_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL;
  if(((o_109 != NULL) && (o_109 != t)))
    _fail(t);
  else
    o_109 = t;
  if(((p_109 != NULL) && (p_109 != t)))
    _fail(t);
  else
    p_109 = t;
  t = not_null(o_109);
  if(((q_109 != NULL) && (q_109 != t)))
    _fail(t);
  else
    q_109 = t;
  t = SSL_explode_term(not_null(q_109));
  if(match_cons(t, sym__2))
    {
      ATerm x_82 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_82) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_82 = ATgetArgument(t, 1);
        if(((ATgetType(y_82) == AT_LIST) && !(ATisEmpty(y_82))))
          {
            if(((l_109 != NULL) && (l_109 != ATgetFirst((ATermList) y_82))))
              _fail(ATgetFirst((ATermList) y_82));
            else
              l_109 = ATgetFirst((ATermList) y_82);
            if(((h_109 != NULL) && (h_109 != (ATerm) ATgetNext((ATermList) y_82))))
              _fail((ATerm) ATgetNext((ATermList) y_82));
            else
              h_109 = (ATerm) ATgetNext((ATermList) y_82);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(l_109);
  return(t);
}
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL,m_8 = NULL,d_12 = NULL;
  if(((y_109 != NULL) && (y_109 != t)))
    _fail(t);
  else
    y_109 = t;
  if(match_cons(t, sym__2))
    {
      if(((s_109 != NULL) && (s_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_109 = ATgetArgument(t, 0);
      if(((t_109 != NULL) && (t_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_109 != NULL) && (z_109 != t)))
    _fail(t);
  else
    z_109 = t;
  t = SSLgetAnnotations(not_null(y_109));
  if(((r_109 != NULL) && (r_109 != t)))
    _fail(t);
  else
    r_109 = t;
  t = not_null(s_109);
  t = z_100(t);
  if(((u_109 != NULL) && (u_109 != t)))
    _fail(t);
  else
    u_109 = t;
  t = not_null(t_109);
  t = a_101(t);
  if(((v_109 != NULL) && (v_109 != t)))
    _fail(t);
  else
    v_109 = t;
  if(((x_109 != NULL) && (x_109 != t)))
    _fail(t);
  else
    x_109 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_109), not_null(v_109));
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = SSLsetAnnotations(not_null(m_8), not_null(r_109));
  if(((w_109 != NULL) && (w_109 != t)))
    _fail(t);
  else
    w_109 = t;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm t_110 = NULL;
  if(((t_110 != NULL) && (t_110 != t)))
    _fail(t);
  else
    t_110 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm u_110 (ATerm t);
  static ATerm u_110 (ATerm t)
  {
    ATerm z_82 = t;
    int a_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL;
        if(((e_110 != NULL) && (e_110 != t)))
          _fail(t);
        else
          e_110 = t;
        if(match_cons(t, sym__2))
          {
            if(((i_110 != NULL) && (i_110 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              i_110 = ATgetArgument(t, 0);
            if(((l_110 != NULL) && (l_110 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(i_110);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_110 != NULL) && (j_110 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_110 = ATgetFirst((ATermList) t);
            if(((k_110 != NULL) && (k_110 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              k_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(l_110);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_110 != NULL) && (m_110 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_110 = ATgetFirst((ATermList) t);
            if(((n_110 != NULL) && (n_110 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(j_110);
        if(((p_110 != NULL) && (p_110 != t)))
          _fail(t);
        else
          p_110 = t;
        t = not_null(k_110);
        if(((o_110 != NULL) && (o_110 != t)))
          _fail(t);
        else
          o_110 = t;
        t = not_null(m_110);
        if(((p_110 != NULL) && (p_110 != t)))
          _fail(t);
        else
          p_110 = t;
        t = not_null(n_110);
        if(((q_110 != NULL) && (q_110 != t)))
          _fail(t);
        else
          q_110 = t;
        t = not_null(e_110);
        if(((s_110 != NULL) && (s_110 != t)))
          _fail(t);
        else
          s_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_110), not_null(q_110));
        t = u_110(t);
        if(((r_110 != NULL) && (r_110 != t)))
          _fail(t);
        else
          r_110 = t;
        LocalPopChoice(a_83);
      }
    else
      {
        t = z_82;
        t = _2_0(n_8, Nil_0_0, t);
      }
    return(t);
  }
  t = u_110(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL;
  if(((v_110 != NULL) && (v_110 != t)))
    _fail(t);
  else
    v_110 = t;
  if(((z_110 != NULL) && (z_110 != t)))
    _fail(t);
  else
    z_110 = t;
  t = explode_string_0_0(t);
  if(((w_110 != NULL) && (w_110 != t)))
    _fail(t);
  else
    w_110 = t;
  t = not_null(z_110);
  if(((y_110 != NULL) && (y_110 != t)))
    _fail(t);
  else
    y_110 = t;
  t = not_null(c_43);
  t = explode_string_0_0(t);
  if(((x_110 != NULL) && (x_110 != t)))
    _fail(t);
  else
    x_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_110), not_null(x_110));
  t = left_match_0_0(t);
  t = not_null(v_110);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm a_111 = NULL;
  if(((a_111 != NULL) && (a_111 != t)))
    _fail(t);
  else
    a_111 = t;
  {
    ATerm b_83 = t;
    int c_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_111 = NULL,c_111 = NULL;
        t = not_null(a_111);
        if(((c_111 != NULL) && (c_111 != t)))
          _fail(t);
        else
          c_111 = t;
        t = term_d_83;
        if(((b_111 != NULL) && (b_111 != t)))
          _fail(t);
        else
          b_111 = t;
        t = not_null(c_111);
        t = string_starts_with_0_1(not_null(b_111), t);
        LocalPopChoice(c_83);
      }
    else
      {
        t = b_83;
        {
          ATerm d_111 = NULL,e_111 = NULL;
          t = not_null(a_111);
          if(((e_111 != NULL) && (e_111 != t)))
            _fail(t);
          else
            e_111 = t;
          t = term_e_83;
          if(((d_111 != NULL) && (d_111 != t)))
            _fail(t);
          else
            d_111 = t;
          t = not_null(e_111);
          t = string_starts_with_0_1(not_null(d_111), t);
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_111 = NULL,l_111 = NULL;
  if(((g_111 != NULL) && (g_111 != t)))
    _fail(t);
  else
    g_111 = t;
  if(match_cons(t, sym_URL_1))
    {
      l_111 = ATgetArgument(t, 0);
      {
        ATerm m_111 = NULL,n_111 = NULL,o_111 = NULL;
        t = not_null(l_111);
        if(((o_111 != NULL) && (o_111 != t)))
          _fail(t);
        else
          o_111 = t;
        t = is_url_http_0_0(t);
        if(((n_111 != NULL) && (n_111 != t)))
          _fail(t);
        else
          n_111 = t;
        if(((m_111 != NULL) && (m_111 != t)))
          _fail(t);
        else
          m_111 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_g_83), not_null(m_111));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm p_111 = NULL,q_111 = NULL;
          t = not_null(g_111);
          if(((q_111 != NULL) && (q_111 != t)))
            _fail(t);
          else
            q_111 = t;
          t = term_p_49;
          t = ReadFromFile_0_0(t);
          if(((p_111 != NULL) && (p_111 != t)))
            _fail(t);
          else
            p_111 = t;
        }
      else
        {
          ATerm r_111 = NULL,u_111 = NULL,v_111 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((l_111 != NULL) && (l_111 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_111 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(l_111);
          if(((r_111 != NULL) && (r_111 != t)))
            _fail(t);
          else
            r_111 = t;
          t = not_null(g_111);
          if(((v_111 != NULL) && (v_111 != t)))
            _fail(t);
          else
            v_111 = t;
          t = not_null(r_111);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((u_111 != NULL) && (u_111 != t)))
            _fail(t);
          else
            u_111 = t;
        }
    }
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
  ATerm x_111 = NULL,y_111 = NULL;
  if(((y_111 != NULL) && (y_111 != t)))
    _fail(t);
  else
    y_111 = t;
  t = get_errno_0_0(t);
  if(((x_111 != NULL) && (x_111 != t)))
    _fail(t);
  else
    x_111 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(x_111));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_112 != NULL) && (a_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_112 = ATgetArgument(t, 0);
      if(((z_111 != NULL) && (z_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_83 = t;
    int i_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(a_112), not_null(z_111));
        LocalPopChoice(i_83);
      }
    else
      {
        t = h_83;
        {
          ATerm b_112 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((b_112 != NULL) && (b_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_q_17;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_112), not_null(z_111));
          t = copy_file_0_0(t);
          t = not_null(a_112);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm t_112 (ATerm f_112, ATerm g_112, ATerm t);
  static ATerm u_112 (ATerm j_112, ATerm k_112, ATerm t);
  static ATerm t_112 (ATerm f_112, ATerm g_112, ATerm t)
  {
    ATerm h_112 = NULL,i_112 = NULL;
    t = not_null(f_112);
    if(((h_112 != NULL) && (h_112 != t)))
      _fail(t);
    else
      h_112 = t;
    t = not_null(g_112);
    if(((i_112 != NULL) && (i_112 != t)))
      _fail(t);
    else
      i_112 = t;
    t = r_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_112), term_j_83);
    t = copy_file_0_0(t);
    t = not_null(h_112);
    t = remove_file_0_0(t);
    t = term_j_83;
    return(t);
  }
  static ATerm u_112 (ATerm j_112, ATerm k_112, ATerm t)
  {
    ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
    t = not_null(j_112);
    if(((l_112 != NULL) && (l_112 != t)))
      _fail(t);
    else
      l_112 = t;
    t = not_null(k_112);
    if(((n_112 != NULL) && (n_112 != t)))
      _fail(t);
    else
      n_112 = t;
    t = r_0(t);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    {
      ATerm k_83 = t;
      if((PushChoice() == 0))
        {
          ATerm l_83 = t;
          int m_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(m_83);
            }
          else
            {
              t = l_83;
              {
                ATerm o_112 = NULL;
                if(((o_112 != NULL) && (o_112 != t)))
                  _fail(t);
                else
                  o_112 = t;
                if(((l_112 != NULL) && (l_112 != t)))
                  _fail(t);
                else
                  l_112 = t;
                t = not_null(o_112);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_112), not_null(m_112));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_112));
    return(t);
  }
  ATerm p_112 = NULL,q_112 = NULL;
  if(((p_112 != NULL) && (p_112 != t)))
    _fail(t);
  else
    p_112 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((q_112 != NULL) && (q_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_83 = t;
    int o_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_112(not_null(q_112), not_null(p_112), t);
        LocalPopChoice(o_83);
      }
    else
      {
        t = n_83;
        {
          ATerm p_83 = t;
          int q_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_112(not_null(q_112), not_null(p_112), t);
              LocalPopChoice(q_83);
            }
          else
            {
              t = p_83;
              {
                ATerm r_112 = NULL,s_112 = NULL;
                t = not_null(q_112);
                if(((r_112 != NULL) && (r_112 != t)))
                  _fail(t);
                else
                  r_112 = t;
                t = not_null(p_112);
                if(((s_112 != NULL) && (s_112 != t)))
                  _fail(t);
                else
                  s_112 = t;
                t = r_0(t);
                if(((r_112 != NULL) && (r_112 != t)))
                  _fail(t);
                else
                  r_112 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_112));
              }
            }
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm r_113 (ATerm y_112, ATerm z_112, ATerm t);
  static ATerm s_113 (ATerm d_113, ATerm e_113, ATerm t);
  static ATerm r_113 (ATerm y_112, ATerm z_112, ATerm t)
  {
    ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL;
    t = not_null(y_112);
    if(((a_113 != NULL) && (a_113 != t)))
      _fail(t);
    else
      a_113 = t;
    t = not_null(z_112);
    if(((c_113 != NULL) && (c_113 != t)))
      _fail(t);
    else
      c_113 = t;
    t = p_0(t);
    if(((b_113 != NULL) && (b_113 != t)))
      _fail(t);
    else
      b_113 = t;
    {
      ATerm r_83 = t;
      int s_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(s_83);
        }
      else
        {
          t = r_83;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_113), not_null(b_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_113));
    return(t);
  }
  static ATerm s_113 (ATerm d_113, ATerm e_113, ATerm t)
  {
    ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
    t = not_null(d_113);
    if(((f_113 != NULL) && (f_113 != t)))
      _fail(t);
    else
      f_113 = t;
    t = not_null(e_113);
    if(((h_113 != NULL) && (h_113 != t)))
      _fail(t);
    else
      h_113 = t;
    t = p_0(t);
    if(((g_113 != NULL) && (g_113 != t)))
      _fail(t);
    else
      g_113 = t;
    {
      ATerm t_83 = t;
      if((PushChoice() == 0))
        {
          ATerm u_83 = t;
          int v_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              LocalPopChoice(v_83);
            }
          else
            {
              t = u_83;
              {
                ATerm w_83 = t;
                int x_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    LocalPopChoice(x_83);
                  }
                else
                  {
                    t = w_83;
                    {
                      ATerm i_113 = NULL;
                      if(((i_113 != NULL) && (i_113 != t)))
                        _fail(t);
                      else
                        i_113 = t;
                      if(((f_113 != NULL) && (f_113 != t)))
                        _fail(t);
                      else
                        f_113 = t;
                      t = not_null(i_113);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_113), not_null(g_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_113));
    return(t);
  }
  ATerm j_113 = NULL,k_113 = NULL;
  if(((j_113 != NULL) && (j_113 != t)))
    _fail(t);
  else
    j_113 = t;
  if(match_cons(t, sym_URL_1))
    {
      k_113 = ATgetArgument(t, 0);
      {
        ATerm y_83 = t;
        int z_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_113 = NULL,m_113 = NULL;
            t = not_null(k_113);
            if(((l_113 != NULL) && (l_113 != t)))
              _fail(t);
            else
              l_113 = t;
            t = not_null(j_113);
            if(((m_113 != NULL) && (m_113 != t)))
              _fail(t);
            else
              m_113 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(l_113));
            t = read_from_0_0(t);
            t = rename_to_1_0(p_0, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(l_113));
            LocalPopChoice(z_83);
          }
        else
          {
            t = y_83;
            {
              ATerm n_113 = NULL,o_113 = NULL;
              t = not_null(k_113);
              if(((n_113 != NULL) && (n_113 != t)))
                _fail(t);
              else
                n_113 = t;
              t = not_null(j_113);
              if(((o_113 != NULL) && (o_113 != t)))
                _fail(t);
              else
                o_113 = t;
              t = p_0(t);
              if(((n_113 != NULL) && (n_113 != t)))
                _fail(t);
              else
                n_113 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(n_113));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((k_113 != NULL) && (k_113 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm a_84 = t;
        int b_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_113(not_null(k_113), not_null(j_113), t);
            LocalPopChoice(b_84);
          }
        else
          {
            t = a_84;
            {
              ATerm c_84 = t;
              int d_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_113(not_null(k_113), not_null(j_113), t);
                  LocalPopChoice(d_84);
                }
              else
                {
                  t = c_84;
                  {
                    ATerm p_113 = NULL,q_113 = NULL;
                    t = not_null(k_113);
                    if(((p_113 != NULL) && (p_113 != t)))
                      _fail(t);
                    else
                      p_113 = t;
                    t = not_null(j_113);
                    if(((q_113 != NULL) && (q_113 != t)))
                      _fail(t);
                    else
                      q_113 = t;
                    t = p_0(t);
                    if(((p_113 != NULL) && (p_113 != t)))
                      _fail(t);
                    else
                      p_113 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_113));
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
  ATerm t_113 = NULL;
  if(((t_113 != NULL) && (t_113 != t)))
    _fail(t);
  else
    t_113 = t;
  t = SSL_concat_strings(not_null(t_113));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm u_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_84 = ATgetFirst((ATermList) t);
      if(((u_113 != NULL) && (u_113 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        u_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(u_113);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm v_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((v_113 != NULL) && (v_113 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        v_113 = ATgetFirst((ATermList) t);
      {
        ATerm f_84 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_84) != AT_LIST) || !(ATisEmpty(f_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(v_113);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_84 = t;
  int h_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(h_84);
    }
  else
    {
      t = g_84;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm x_113 = NULL;
  if(((x_113 != NULL) && (x_113 != t)))
    _fail(t);
  else
    x_113 = t;
  t = SSL_implode_string(not_null(x_113));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm z_113 = NULL;
  if(((z_113 != NULL) && (z_113 != t)))
    _fail(t);
  else
    z_113 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm a_114 (ATerm t);
  static ATerm a_114 (ATerm t)
  {
    ATerm i_84 = t;
    int j_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        LocalPopChoice(j_84);
      }
    else
      {
        t = i_84;
        t = Cons_2_0(o_8, a_114, t);
      }
    return(t);
  }
  t = a_114(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm g_114 = NULL;
  if(((g_114 != NULL) && (g_114 != t)))
    _fail(t);
  else
    g_114 = t;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm h_114 = NULL;
  if(((h_114 != NULL) && (h_114 != t)))
    _fail(t);
  else
    h_114 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
  static ATerm p_8 (ATerm t);
  static ATerm p_8 (ATerm t)
  {
    t = Cons_2_0(q_123, q_8, t);
    {
      static ATerm s_8 (ATerm t);
      static ATerm s_8 (ATerm t)
      {
        if(((d_114 != NULL) && (d_114 != t)))
          _fail(t);
        else
          d_114 = t;
        return(t);
      }
      t = Cons_2_0(r_8, s_8, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(p_8, t);
  if(((f_114 != NULL) && (f_114 != t)))
    _fail(t);
  else
    f_114 = t;
  if(((e_114 != NULL) && (e_114 != t)))
    _fail(t);
  else
    e_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_114), not_null(d_114));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL;
  ATerm k_84 = t;
  int l_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_133, t);
      LocalPopChoice(l_84);
    }
  else
    {
      t = k_84;
      {
        ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL;
        if(((m_114 != NULL) && (m_114 != t)))
          _fail(t);
        else
          m_114 = t;
        if(((o_114 != NULL) && (o_114 != t)))
          _fail(t);
        else
          o_114 = t;
        t = not_null(m_114);
        if(((n_114 != NULL) && (n_114 != t)))
          _fail(t);
        else
          n_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_114), (ATerm) ATempty);
      }
    }
  if(((p_114 != NULL) && (p_114 != t)))
    _fail(t);
  else
    p_114 = t;
  if(match_cons(t, sym__2))
    {
      if(((q_114 != NULL) && (q_114 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_114 = ATgetArgument(t, 0);
      if(((t_114 != NULL) && (t_114 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_114);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(t_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm w_114 = NULL,y_114 = NULL,z_114 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((u_114 != NULL) && (u_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                u_114 = ATgetFirst((ATermList) t);
              if(((v_114 != NULL) && (v_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                v_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(t_114);
          if(((w_114 != NULL) && (w_114 != t)))
            _fail(t);
          else
            w_114 = t;
          t = not_null(p_114);
          if(((z_114 != NULL) && (z_114 != t)))
            _fail(t);
          else
            z_114 = t;
          t = not_null(w_114);
          t = list_tokenize_1_0(d_133, t);
          if(((y_114 != NULL) && (y_114 != t)))
            _fail(t);
          else
            y_114 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_114 != NULL) && (r_114 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_114 = ATgetFirst((ATermList) t);
          if(((s_114 != NULL) && (s_114 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(t_114);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm a_115 = NULL;
          t = not_null(q_114);
          if(((a_115 != NULL) && (a_115 != t)))
            _fail(t);
          else
            a_115 = t;
          t = (ATerm) ATinsert(ATempty, not_null(a_115));
        }
      else
        {
          ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((u_114 != NULL) && (u_114 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                u_114 = ATgetFirst((ATermList) t);
              if(((v_114 != NULL) && (v_114 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                v_114 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(q_114);
          if(((b_115 != NULL) && (b_115 != t)))
            _fail(t);
          else
            b_115 = t;
          t = not_null(t_114);
          if(((c_115 != NULL) && (c_115 != t)))
            _fail(t);
          else
            c_115 = t;
          t = not_null(p_114);
          if(((e_115 != NULL) && (e_115 != t)))
            _fail(t);
          else
            e_115 = t;
          t = not_null(c_115);
          t = list_tokenize_1_0(d_133, t);
          if(((d_115 != NULL) && (d_115 != t)))
            _fail(t);
          else
            d_115 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(d_115)), not_null(b_115));
        }
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm f_115 = NULL;
  if(((f_115 != NULL) && (f_115 != t)))
    _fail(t);
  else
    f_115 = t;
  t = SSL_explode_string(not_null(f_115));
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
    ATerm g_115 = NULL;
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      if(((g_115 != NULL) && (g_115 != t)))
        _fail(t);
      else
        g_115 = t;
      return(t);
    }
    if(((g_115 != NULL) && (g_115 != t)))
      _fail(t);
    else
      g_115 = t;
    t = not_null(d_46);
    t = fetch_1_0(u_8, t);
    return(t);
  }
  t = string_tokenize_1_0(t_8, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_115 != NULL) && (h_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_115 = ATgetArgument(t, 0);
      if(((i_115 != NULL) && (i_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_115);
  t = string_tokenize_0_1(not_null(h_115), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL;
  if(((k_115 != NULL) && (k_115 != t)))
    _fail(t);
  else
    k_115 = t;
  if(((j_115 != NULL) && (j_115 != t)))
    _fail(t);
  else
    j_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_u_74), not_null(j_115));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm l_115 = NULL;
  if(((l_115 != NULL) && (l_115 != t)))
    _fail(t);
  else
    l_115 = t;
  t = SSL_S_ISDIR(not_null(l_115));
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm m_115 = NULL;
  if(((m_115 != NULL) && (m_115 != t)))
    _fail(t);
  else
    m_115 = t;
  t = SSL_perror(not_null(m_115));
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm n_115 = NULL,s_115 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_115 != NULL) && (n_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_115 = ATgetArgument(t, 0);
      if(((s_115 != NULL) && (s_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(n_115), not_null(s_115));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
static ATerm f_116 (ATerm y_115, ATerm t)
{
  ATerm z_115 = NULL,a_116 = NULL;
  t = not_null(y_115);
  if(((z_115 != NULL) && (z_115 != t)))
    _fail(t);
  else
    z_115 = t;
  t = SSL_filemode(not_null(z_115));
  if(match_cons(t, sym__2))
    {
      if(((a_116 != NULL) && (a_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_116 = ATgetArgument(t, 0);
      {
        ATerm m_84 = ATgetArgument(t, 1);
        if(((ATgetType(m_84) != AT_INT) || (ATgetInt((ATermInt) m_84) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(a_116);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm b_116 = NULL;
  if(((b_116 != NULL) && (b_116 != t)))
    _fail(t);
  else
    b_116 = t;
  {
    ATerm n_84 = t;
    int o_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_116(not_null(b_116), t);
        LocalPopChoice(o_84);
      }
    else
      {
        t = n_84;
        {
          ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL;
          t = not_null(b_116);
          if(((e_116 != NULL) && (e_116 != t)))
            _fail(t);
          else
            e_116 = t;
          t = not_null(b_116);
          if(((d_116 != NULL) && (d_116 != t)))
            _fail(t);
          else
            d_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_84, not_null(d_116));
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
  ATerm g_116 = NULL,h_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_116 != NULL) && (g_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_116 = ATgetArgument(t, 0);
      if(((h_116 != NULL) && (h_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(g_116), not_null(h_116));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL;
  if(((j_116 != NULL) && (j_116 != t)))
    _fail(t);
  else
    j_116 = t;
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_116), (ATerm) ATinsert(ATempty, term_q_84));
  t = access_0_0(t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm k_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_116 != NULL) && (r_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_116 = ATgetArgument(t, 0);
      if(((k_116 != NULL) && (k_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_116 != NULL) && (t_116 != t)))
    _fail(t);
  else
    t_116 = t;
  {
    ATerm r_84 = t;
    int s_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_116 = NULL;
        if(((u_116 != NULL) && (u_116 != t)))
          _fail(t);
        else
          u_116 = t;
        t = not_null(k_116);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(u_116);
        LocalPopChoice(s_84);
        {
          ATerm w_116 = NULL,x_116 = NULL;
          if(((x_116 != NULL) && (x_116 != t)))
            _fail(t);
          else
            x_116 = t;
          t = not_null(r_116);
          t = base_filename_0_0(t);
          if(((w_116 != NULL) && (w_116 != t)))
            _fail(t);
          else
            w_116 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_116)), term_t_84), not_null(k_116));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = r_84;
        t = not_null(k_116);
      }
  }
  if(((s_116 != NULL) && (s_116 != t)))
    _fail(t);
  else
    s_116 = t;
  t = SSL_copy(not_null(r_116), not_null(s_116));
  return(t);
}
static ATerm f_117 (ATerm a_117, ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL;
  t = not_null(a_117);
  if(((c_117 != NULL) && (c_117 != t)))
    _fail(t);
  else
    c_117 = t;
  t = term_v_32;
  {
    ATerm u_84 = t;
    int v_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_84);
      }
    else
      {
        t = u_84;
        t = term_j_83;
      }
  }
  if(((b_117 != NULL) && (b_117 != t)))
    _fail(t);
  else
    b_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_49, not_null(b_117));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm w_84 = t;
  int x_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_32;
      t = get_config_0_0(t);
      LocalPopChoice(x_84);
    }
  else
    {
      t = w_84;
      t = term_j_83;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL;
  if(((d_117 != NULL) && (d_117 != t)))
    _fail(t);
  else
    d_117 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = f_117(not_null(d_117), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((e_117 != NULL) && (e_117 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(d_117);
      t = copy_to_1_0(v_8, t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL;
  if(((i_117 != NULL) && (i_117 != t)))
    _fail(t);
  else
    i_117 = t;
  if(match_cons(t, sym__2))
    {
      if(((g_117 != NULL) && (g_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_117 = ATgetArgument(t, 0);
      if(((h_117 != NULL) && (h_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(g_117), t);
  t = hashtable_remove_0_1(not_null(h_117), t);
  t = not_null(i_117);
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_117 != NULL) && (k_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_117 = ATgetArgument(t, 0);
      if(((l_117 != NULL) && (l_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_117 != NULL) && (m_117 != t)))
    _fail(t);
  else
    m_117 = t;
  {
    ATerm y_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_117), not_null(l_117));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_85 = ATgetFirst((ATermList) t);
            if(((j_117 != NULL) && (j_117 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_84);
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_117), not_null(l_117), not_null(j_117));
        t = table_put_0_0(t);
      }
    else
      {
        t = y_84;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_117), not_null(l_117));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(m_117);
  return(t);
}
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL;
  if(((q_117 != NULL) && (q_117 != t)))
    _fail(t);
  else
    q_117 = t;
  t = t_111(t);
  if(((p_117 != NULL) && (p_117 != t)))
    _fail(t);
  else
    p_117 = t;
  {
    ATerm b_85 = t;
    int c_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_117), term_b_50);
        t = table_get_0_0(t);
        {
          ATerm d_85 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_85;
            }
        }
        LocalPopChoice(c_85);
      }
    else
      {
        t = b_85;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((o_117 != NULL) && (o_117 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        o_117 = ATgetFirst((ATermList) t);
      if(((n_117 != NULL) && (n_117 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        n_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_117), term_b_50, not_null(n_117));
  t = table_put_0_0(t);
  t = not_null(o_117);
  {
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL;
      if(((r_117 != NULL) && (r_117 != t)))
        _fail(t);
      else
        r_117 = t;
      if(((t_117 != NULL) && (t_117 != t)))
        _fail(t);
      else
        t_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_117), not_null(r_117));
      t = table_pop_rm_0_0(t);
      if(((s_117 != NULL) && (s_117 != t)))
        _fail(t);
      else
        s_117 = t;
      return(t);
    }
    t = map_1_0(w_8, t);
  }
  t = not_null(q_117);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm u_117 = NULL;
  if(((u_117 != NULL) && (u_117 != t)))
    _fail(t);
  else
    u_117 = t;
  t = SSL_remove(not_null(u_117));
  return(t);
}
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm e_85 = t;
  int f_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_115(t);
      t = r_115(t);
      LocalPopChoice(f_85);
    }
  else
    {
      t = e_85;
      t = r_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL;
  if(((w_117 != NULL) && (w_117 != t)))
    _fail(t);
  else
    w_117 = t;
  t = s_111(t);
  if(((v_117 != NULL) && (v_117 != t)))
    _fail(t);
  else
    v_117 = t;
  if(((y_117 != NULL) && (y_117 != t)))
    _fail(t);
  else
    y_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_117), term_b_50);
  {
    ATerm g_85 = t;
    int h_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(h_85);
      }
    else
      {
        t = g_85;
        t = (ATerm) ATempty;
      }
  }
  if(((x_117 != NULL) && (x_117 != t)))
    _fail(t);
  else
    x_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_117), term_b_50, (ATerm) ATinsert(CheckATermList(not_null(x_117)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(w_117);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_d_53;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL;
  static ATerm y_8 (ATerm t);
  static ATerm y_8 (ATerm t)
  {
    ATerm b_118 = NULL;
    if(((b_118 != NULL) && (b_118 != t)))
      _fail(t);
    else
      b_118 = t;
    {
      ATerm i_85 = t;
      int j_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_85;
          t = table_get_0_0(t);
          LocalPopChoice(j_85);
        }
      else
        {
          t = i_85;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_118 != NULL) && (a_118 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_118 = ATgetFirst((ATermList) t);
        if(((z_117 != NULL) && (z_117 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          z_117 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(a_118);
    t = map_1_0(z_8, t);
    t = not_null(b_118);
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
    ATerm l_85 = t;
    int m_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
        if(((c_118 != NULL) && (c_118 != t)))
          _fail(t);
        else
          c_118 = t;
        if(((e_118 != NULL) && (e_118 != t)))
          _fail(t);
        else
          e_118 = t;
        t = term_z_20;
        t = get_config_0_0(t);
        if(((d_118 != NULL) && (d_118 != t)))
          _fail(t);
        else
          d_118 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_118));
        LocalPopChoice(m_85);
      }
    else
      {
        t = l_85;
        t = term_p_49;
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
  ATerm g_118 = NULL;
  if(((g_118 != NULL) && (g_118 != t)))
    _fail(t);
  else
    g_118 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(g_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(g_118);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL;
  if(((h_118 != NULL) && (h_118 != t)))
    _fail(t);
  else
    h_118 = t;
  if(((j_118 != NULL) && (j_118 != t)))
    _fail(t);
  else
    j_118 = t;
  t = string_to_int_0_0(t);
  if(((i_118 != NULL) && (i_118 != t)))
    _fail(t);
  else
    i_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_85, not_null(i_118));
  t = set_config_0_0(t);
  t = not_null(h_118);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_o_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_9, d_9, e_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm k_118 = NULL;
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  t = SSL_string_to_int(not_null(k_118));
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm m_118 = NULL;
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(m_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(m_118);
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm n_118 = NULL;
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  t = term_q_85;
  t = set_config_0_0(t);
  t = term_r_85;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_s_85;
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
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  if(((q_118 != NULL) && (q_118 != t)))
    _fail(t);
  else
    q_118 = t;
  if(((s_118 != NULL) && (s_118 != t)))
    _fail(t);
  else
    s_118 = t;
  t = string_to_int_0_0(t);
  if(((r_118 != NULL) && (r_118 != t)))
    _fail(t);
  else
    r_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_71, not_null(r_118));
  t = set_config_0_0(t);
  t = not_null(q_118);
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  if(((o_118 != NULL) && (o_118 != t)))
    _fail(t);
  else
    o_118 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_118));
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_t_85;
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
  ATerm t_118 = NULL;
  if(((t_118 != NULL) && (t_118 != t)))
    _fail(t);
  else
    t_118 = t;
  t = term_u_85;
  t = set_config_0_0(t);
  t = term_v_85;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_w_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_85 = t;
  int y_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_9, g_9, h_9, t);
      LocalPopChoice(y_85);
    }
  else
    {
      t = x_85;
      {
        ATerm z_85 = t;
        int a_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_9, j_9, k_9, t);
            LocalPopChoice(a_86);
          }
        else
          {
            t = z_85;
            t = Option_3_0(l_9, m_9, n_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_86 = t;
  int c_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(c_86);
    }
  else
    {
      t = b_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm v_118 = NULL;
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(v_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(v_118);
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL;
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  if(((a_119 != NULL) && (a_119 != t)))
    _fail(t);
  else
    a_119 = t;
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, not_null(z_118));
  t = set_config_0_0(t);
  t = not_null(y_118);
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_118));
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_d_86;
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
  ATerm b_119 = NULL;
  if(((b_119 != NULL) && (b_119 != t)))
    _fail(t);
  else
    b_119 = t;
  t = term_f_86;
  t = set_config_0_0(t);
  t = term_g_86;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_h_86;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_86 = t;
  int j_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(j_86);
    }
  else
    {
      t = i_86;
      t = Option_3_0(r_9, s_9, t_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL;
  if(((e_119 != NULL) && (e_119 != t)))
    _fail(t);
  else
    e_119 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(e_119);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL;
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
      t = not_null(g_119);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_119 != NULL) && (h_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_119 = ATgetFirst((ATermList) t);
          if(((i_119 != NULL) && (i_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_119);
      if(((l_119 != NULL) && (l_119 != t)))
        _fail(t);
      else
        l_119 = t;
      t = not_null(h_119);
      if(((j_119 != NULL) && (j_119 != t)))
        _fail(t);
      else
        j_119 = t;
      t = not_null(i_119);
      if(((k_119 != NULL) && (k_119 != t)))
        _fail(t);
      else
        k_119 = t;
      t = not_null(e_119);
      if(((o_119 != NULL) && (o_119 != t)))
        _fail(t);
      else
        o_119 = t;
      t = not_null(l_119);
      t = k_0(t);
      t = not_null(o_119);
      if(((n_119 != NULL) && (n_119 != t)))
        _fail(t);
      else
        n_119 = t;
      t = not_null(j_119);
      t = m_0(t);
      if(((m_119 != NULL) && (m_119 != t)))
        _fail(t);
      else
        m_119 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(k_119)), not_null(m_119));
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm q_119 = NULL;
  if(((q_119 != NULL) && (q_119 != t)))
    _fail(t);
  else
    q_119 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(q_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(q_119);
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL;
  if(((t_119 != NULL) && (t_119 != t)))
    _fail(t);
  else
    t_119 = t;
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  if(((u_119 != NULL) && (u_119 != t)))
    _fail(t);
  else
    u_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(u_119));
  t = set_config_0_0(t);
  t = not_null(t_119);
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  if(((r_119 != NULL) && (r_119 != t)))
    _fail(t);
  else
    r_119 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_119));
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_k_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_9, v_9, w_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_86 = t;
  int m_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_86);
    }
  else
    {
      t = l_86;
      {
        ATerm n_86 = t;
        int o_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            LocalPopChoice(o_86);
          }
        else
          {
            t = n_86;
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
  ATerm w_119 = NULL;
  if(((w_119 != NULL) && (w_119 != t)))
    _fail(t);
  else
    w_119 = t;
  t = term_p_86;
  t = set_config_0_0(t);
  t = term_q_42;
  t = set_config_0_0(t);
  t = not_null(w_119);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_q_86;
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
  ATerm x_119 = NULL;
  if(((x_119 != NULL) && (x_119 != t)))
    _fail(t);
  else
    x_119 = t;
  t = term_q_42;
  t = set_config_0_0(t);
  t = not_null(x_119);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_r_86;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(a_10, b_10, c_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm s_86 = t;
  int t_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(t_86);
    }
  else
    {
      t = s_86;
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
  static ATerm y_119 (ATerm t);
  static ATerm y_119 (ATerm t)
  {
    ATerm u_86 = t;
    int v_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(v_86);
      }
    else
      {
        t = u_86;
        t = Cons_2_0(f_123, y_119, t);
      }
    return(t);
  }
  t = y_119(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
  if(((c_120 != NULL) && (c_120 != t)))
    _fail(t);
  else
    c_120 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_120 = ATgetFirst((ATermList) t);
      b_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL;
        t = not_null(a_120);
        if(((d_120 != NULL) && (d_120 != t)))
          _fail(t);
        else
          d_120 = t;
        t = not_null(b_120);
        if(((e_120 != NULL) && (e_120 != t)))
          _fail(t);
        else
          e_120 = t;
        t = not_null(c_120);
        if(((g_120 != NULL) && (g_120 != t)))
          _fail(t);
        else
          g_120 = t;
        t = not_null(e_120);
        if(((i_120 != NULL) && (i_120 != t)))
          _fail(t);
        else
          i_120 = t;
        if(((m_120 != NULL) && (m_120 != t)))
          _fail(t);
        else
          m_120 = t;
        t = h_0(t);
        if(((j_120 != NULL) && (j_120 != t)))
          _fail(t);
        else
          j_120 = t;
        t = not_null(m_120);
        if(((l_120 != NULL) && (l_120 != t)))
          _fail(t);
        else
          l_120 = t;
        t = not_null(d_120);
        t = f_0(t);
        if(((k_120 != NULL) && (k_120 != t)))
          _fail(t);
        else
          k_120 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(j_120)), not_null(k_120));
        if(((h_120 != NULL) && (h_120 != t)))
          _fail(t);
        else
          h_120 = t;
        t = not_null(i_120);
        {
          static ATerm d_10 (ATerm t);
          static ATerm d_10 (ATerm t)
          {
            t = not_null(h_120);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_10, t);
        }
        if(((f_120 != NULL) && (f_120 != t)))
          _fail(t);
        else
          f_120 = t;
      }
    }
  else
    {
      ATerm n_120 = NULL,o_120 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(c_120);
      if(((o_120 != NULL) && (o_120 != t)))
        _fail(t);
      else
        o_120 = t;
      t = term_q_17;
      t = h_0(t);
      if(((n_120 != NULL) && (n_120 != t)))
        _fail(t);
      else
        n_120 = t;
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm q_120 = NULL;
  if(((q_120 != NULL) && (q_120 != t)))
    _fail(t);
  else
    q_120 = t;
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
  ATerm s_120 = NULL,t_120 = NULL;
  if(((t_120 != NULL) && (t_120 != t)))
    _fail(t);
  else
    t_120 = t;
  if(((s_120 != NULL) && (s_120 != t)))
    _fail(t);
  else
    s_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_120)), term_w_86);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm r_120 = NULL;
  static ATerm k_10 (ATerm t);
  static ATerm k_10 (ATerm t)
  {
    ATerm u_120 = NULL,v_120 = NULL;
    if(((v_120 != NULL) && (v_120 != t)))
      _fail(t);
    else
      v_120 = t;
    t = m_145(t);
    if(((u_120 != NULL) && (u_120 != t)))
      _fail(t);
    else
      u_120 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(u_120)), term_p_71);
    t = echo_0_0(t);
    return(t);
  }
  ATerm x_86 = t;
  int y_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_86;
      t = get_config_0_0(t);
      if(((r_120 != NULL) && (r_120 != t)))
        _fail(t);
      else
        r_120 = t;
      LocalPopChoice(y_86);
    }
  else
    {
      t = x_86;
      {
        static ATerm g_10 (ATerm t);
        static ATerm g_10 (ATerm t)
        {
          static ATerm h_10 (ATerm t);
          static ATerm h_10 (ATerm t)
          {
            if(((r_120 != NULL) && (r_120 != t)))
              _fail(t);
            else
              r_120 = t;
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
  t = term_a_87;
  t = echo_0_0(t);
  t = term_d_87;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(j_10, t);
  t = try_1_0(k_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,l_10 = NULL,e_12 = NULL;
  if(((c_121 != NULL) && (c_121 != t)))
    _fail(t);
  else
    c_121 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((x_120 != NULL) && (x_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  t = SSLgetAnnotations(not_null(c_121));
  if(((w_120 != NULL) && (w_120 != t)))
    _fail(t);
  else
    w_120 = t;
  t = not_null(x_120);
  t = z_108(t);
  if(((y_120 != NULL) && (y_120 != t)))
    _fail(t);
  else
    y_120 = t;
  if(((b_121 != NULL) && (b_121 != t)))
    _fail(t);
  else
    b_121 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_120));
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  t = SSLsetAnnotations(not_null(l_10), not_null(w_120));
  if(((z_120 != NULL) && (z_120 != t)))
    _fail(t);
  else
    z_120 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_121 = NULL,f_121 = NULL;
  static ATerm o_10 (ATerm t);
  static ATerm p_10 (ATerm t);
  static ATerm o_10 (ATerm t)
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      t = not_null(e_121);
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
      t = not_null(e_121);
      return(t);
    }
    t = long_description_1_0(r_10, t);
    return(t);
  }
  if(((f_121 != NULL) && (f_121 != t)))
    _fail(t);
  else
    f_121 = t;
  {
    ATerm g_87 = t;
    int h_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_86;
        t = get_config_0_0(t);
        if(((e_121 != NULL) && (e_121 != t)))
          _fail(t);
        else
          e_121 = t;
        LocalPopChoice(h_87);
      }
    else
      {
        t = g_87;
        {
          static ATerm m_10 (ATerm t);
          static ATerm m_10 (ATerm t)
          {
            static ATerm n_10 (ATerm t);
            static ATerm n_10 (ATerm t)
            {
              if(((e_121 != NULL) && (e_121 != t)))
                _fail(t);
              else
                e_121 = t;
              return(t);
            }
            t = Program_1_0(n_10, t);
            return(t);
          }
          t = option_defined_1_0(m_10, t);
        }
      }
  }
  t = not_null(f_121);
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
  ATerm i_87 = t;
  int j_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(j_87);
    }
  else
    {
      t = i_87;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL;
  if(((h_121 != NULL) && (h_121 != t)))
    _fail(t);
  else
    h_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(h_121);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_121 != NULL) && (i_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_121 = ATgetFirst((ATermList) t);
          if(((j_121 != NULL) && (j_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(h_121);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL;
  if(((k_121 != NULL) && (k_121 != t)))
    _fail(t);
  else
    k_121 = t;
  if(((m_121 != NULL) && (m_121 != t)))
    _fail(t);
  else
    m_121 = t;
  {
    ATerm k_87 = t;
    int l_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(l_87);
      }
    else
      {
        t = k_87;
        {
          ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
          if(((n_121 != NULL) && (n_121 != t)))
            _fail(t);
          else
            n_121 = t;
          if(((p_121 != NULL) && (p_121 != t)))
            _fail(t);
          else
            p_121 = t;
          t = not_null(n_121);
          if(((o_121 != NULL) && (o_121 != t)))
            _fail(t);
          else
            o_121 = t;
          t = (ATerm) ATinsert(ATempty, not_null(o_121));
        }
      }
  }
  if(((l_121 != NULL) && (l_121 != t)))
    _fail(t);
  else
    l_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_83, not_null(l_121));
  t = printnl_0_0(t);
  t = not_null(k_121);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_86;
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
  ATerm m_87 = t;
  int n_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(n_87);
    }
  else
    {
      t = m_87;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL;
  t = report_run_time_0_0(t);
  if(((r_121 != NULL) && (r_121 != t)))
    _fail(t);
  else
    r_121 = t;
  t = term_q_17;
  t = whoami_0_0(t);
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATempty, term_o_87), not_null(q_121)));
  t = printnl_0_0(t);
  t = term_o_12;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_86;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm s_121 = NULL;
  if(((s_121 != NULL) && (s_121 != t)))
    _fail(t);
  else
    s_121 = t;
  t = SSL_TicksToSeconds(not_null(s_121));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_121 != NULL) && (t_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_121 = ATgetArgument(t, 0);
      if(((u_121 != NULL) && (u_121 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(t_121), not_null(u_121));
        LocalPopChoice(q_87);
      }
    else
      {
        t = p_87;
        t = SSL_addr(not_null(t_121), not_null(u_121));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm r_87 = t;
  int s_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = c_130(t);
      LocalPopChoice(s_87);
    }
  else
    {
      t = r_87;
      {
        ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL;
        if(((w_121 != NULL) && (w_121 != t)))
          _fail(t);
        else
          w_121 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_121 != NULL) && (x_121 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_121 = ATgetFirst((ATermList) t);
            if(((y_121 != NULL) && (y_121 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(x_121);
        if(((z_121 != NULL) && (z_121 != t)))
          _fail(t);
        else
          z_121 = t;
        t = not_null(y_121);
        if(((a_122 != NULL) && (a_122 != t)))
          _fail(t);
        else
          a_122 = t;
        t = not_null(w_121);
        if(((c_122 != NULL) && (c_122 != t)))
          _fail(t);
        else
          c_122 = t;
        if(((e_122 != NULL) && (e_122 != t)))
          _fail(t);
        else
          e_122 = t;
        t = not_null(a_122);
        t = foldr_2_0(c_130, d_130, t);
        if(((d_122 != NULL) && (d_122 != t)))
          _fail(t);
        else
          d_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_121), not_null(d_122));
        t = d_130(t);
        if(((b_122 != NULL) && (b_122 != t)))
          _fail(t);
        else
          b_122 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL;
  if(((i_122 != NULL) && (i_122 != t)))
    _fail(t);
  else
    i_122 = t;
  if(((j_122 != NULL) && (j_122 != t)))
    _fail(t);
  else
    j_122 = t;
  t = not_null(i_122);
  if(((k_122 != NULL) && (k_122 != t)))
    _fail(t);
  else
    k_122 = t;
  t = SSL_explode_term(not_null(k_122));
  if(match_cons(t, sym__2))
    {
      ATerm t_87 = ATgetArgument(t, 0);
      if(((f_122 != NULL) && (f_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_122);
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  t = not_null(f_122);
  t = foldr_2_0(z_134, a_135, t);
  if(((g_122 != NULL) && (g_122 != t)))
    _fail(t);
  else
    g_122 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_d_72;
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
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_122 != NULL) && (l_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_122 = ATgetArgument(t, 0);
      if(((m_122 != NULL) && (m_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_122 != NULL) && (n_122 != t)))
    _fail(t);
  else
    n_122 = t;
  {
    ATerm u_87 = t;
    int v_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(l_122), not_null(m_122));
        LocalPopChoice(v_87);
      }
    else
      {
        t = u_87;
        t = SSL_gtr(not_null(l_122), not_null(m_122));
      }
  }
  t = not_null(n_122);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_122 = NULL;
  ATerm w_87 = t;
  int y_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL;
      if(((q_122 != NULL) && (q_122 != t)))
        _fail(t);
      else
        q_122 = t;
      if(match_cons(t, sym__2))
        {
          if(((r_122 != NULL) && (r_122 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_122 = ATgetArgument(t, 0);
          if(((s_122 != NULL) && (s_122 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(r_122);
      if(((p_122 != NULL) && (p_122 != t)))
        _fail(t);
      else
        p_122 = t;
      t = not_null(s_122);
      if(((p_122 != NULL) && (p_122 != t)))
        _fail(t);
      else
        p_122 = t;
      t = not_null(q_122);
      LocalPopChoice(y_87);
    }
  else
    {
      t = w_87;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm t_10 (ATerm t);
  static ATerm t_10 (ATerm t)
  {
    ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL;
    if(((t_122 != NULL) && (t_122 != t)))
      _fail(t);
    else
      t_122 = t;
    if(((v_122 != NULL) && (v_122 != t)))
      _fail(t);
    else
      v_122 = t;
    t = term_s_71;
    t = get_config_0_0(t);
    if(((u_122 != NULL) && (u_122 != t)))
      _fail(t);
    else
      u_122 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_122), term_o_12);
    t = geq_0_0(t);
    t = not_null(t_122);
    t = i_140(t);
    return(t);
  }
  t = try_1_0(t_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm w_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL;
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  t = run_time_0_0(t);
  if(((w_122 != NULL) && (w_122 != t)))
    _fail(t);
  else
    w_122 = t;
  t = not_null(a_123);
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  t = term_q_17;
  t = whoami_0_0(t);
  if(((y_122 != NULL) && (y_122 != t)))
    _fail(t);
  else
    y_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_87), not_null(w_122)), term_r_12), not_null(y_122)));
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
  t = term_d_72;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL;
  if(((b_123 != NULL) && (b_123 != t)))
    _fail(t);
  else
    b_123 = t;
  if(((c_123 != NULL) && (c_123 != t)))
    _fail(t);
  else
    c_123 = t;
  t = term_a_88;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_88, term_b_88, not_null(b_123));
  t = table_put_0_0(t);
  t = not_null(c_123);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t)
{
  ATerm e_123 = NULL,h_123 = NULL,i_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((e_123 != NULL) && (e_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(e_123), not_null(t_59));
  if(((i_123 != NULL) && (i_123 != t)))
    _fail(t);
  else
    i_123 = t;
  if(((h_123 != NULL) && (h_123 != t)))
    _fail(t);
  else
    h_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(h_123));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((j_123 != NULL) && (j_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(j_123));
  if(((l_123 != NULL) && (l_123 != t)))
    _fail(t);
  else
    l_123 = t;
  if(((k_123 != NULL) && (k_123 != t)))
    _fail(t);
  else
    k_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(k_123));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_123 = NULL,r_123 = NULL,s_123 = NULL;
  if(((m_123 != NULL) && (m_123 != t)))
    _fail(t);
  else
    m_123 = t;
  if(((r_123 != NULL) && (r_123 != t)))
    _fail(t);
  else
    r_123 = t;
  t = table_hashtable_0_0(t);
  if(((s_123 != NULL) && (s_123 != t)))
    _fail(t);
  else
    s_123 = t;
  t = lookup_table_0_1(not_null(m_123), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(s_123);
  t = hashtable_remove_0_1(not_null(m_123), t);
  t = not_null(r_123);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm t_123 = NULL;
  if(((t_123 != NULL) && (t_123 != t)))
    _fail(t);
  else
    t_123 = t;
  t = SSL_exit(not_null(t_123));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm w_123 = NULL,x_123 = NULL,a_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_123 != NULL) && (w_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_123 = ATgetArgument(t, 0);
      if(((x_123 != NULL) && (x_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_124 != NULL) && (a_124 != t)))
    _fail(t);
  else
    a_124 = t;
  t = SSL_printnl(not_null(w_123), not_null(x_123));
  t = not_null(a_124);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm b_124 = NULL,e_124 = NULL,h_124 = NULL,i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,v_10 = NULL,f_12 = NULL;
  if(((k_124 != NULL) && (k_124 != t)))
    _fail(t);
  else
    k_124 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((e_124 != NULL) && (e_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((l_124 != NULL) && (l_124 != t)))
    _fail(t);
  else
    l_124 = t;
  t = SSLgetAnnotations(not_null(k_124));
  if(((b_124 != NULL) && (b_124 != t)))
    _fail(t);
  else
    b_124 = t;
  t = not_null(e_124);
  t = a_109(t);
  if(((h_124 != NULL) && (h_124 != t)))
    _fail(t);
  else
    h_124 = t;
  if(((j_124 != NULL) && (j_124 != t)))
    _fail(t);
  else
    j_124 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_124));
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = SSLsetAnnotations(not_null(v_10), not_null(b_124));
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm o_124 = NULL;
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm p_124 = NULL;
  if(((p_124 != NULL) && (p_124 != t)))
    _fail(t);
  else
    p_124 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  static ATerm q_124 (ATerm t);
  static ATerm q_124 (ATerm t)
  {
    ATerm c_88 = t;
    int d_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_123, w_10, t);
        LocalPopChoice(d_88);
      }
    else
      {
        t = c_88;
        t = Cons_2_0(x_10, q_124, t);
      }
    return(t);
  }
  t = q_124(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  t = fetch_1_0(c_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_124 = NULL,s_124 = NULL;
  if(((s_124 != NULL) && (s_124 != t)))
    _fail(t);
  else
    s_124 = t;
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_42, not_null(r_124));
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
  ATerm e_88 = t;
  int f_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_114(t);
      LocalPopChoice(f_88);
    }
  else
    {
      t = e_88;
      {
        ATerm u_124 = NULL,v_124 = NULL;
        if(((u_124 != NULL) && (u_124 != t)))
          _fail(t);
        else
          u_124 = t;
        if(((v_124 != NULL) && (v_124 != t)))
          _fail(t);
        else
          v_124 = t;
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
  t = term_h_88;
  t = set_config_0_0(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_i_88;
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
  ATerm w_124 = NULL;
  if(((w_124 != NULL) && (w_124 != t)))
    _fail(t);
  else
    w_124 = t;
  t = term_h_88;
  t = set_config_0_0(t);
  t = term_k_88;
  t = set_config_0_0(t);
  t = term_l_88;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_m_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_88 = t;
  int o_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_10, z_10, a_11, t);
      LocalPopChoice(o_88);
    }
  else
    {
      t = n_88;
      t = Option_3_0(b_11, c_11, d_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_124 != NULL) && (x_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_124 = ATgetArgument(t, 0);
      if(((y_124 != NULL) && (y_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(x_124), t);
  t = hashtable_get_0_1(not_null(y_124), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((a_125 != NULL) && (a_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_125 = ATgetArgument(t, 0);
      if(((b_125 != NULL) && (b_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_125 = ATgetArgument(t, 1);
      if(((z_124 != NULL) && (z_124 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_124 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  if(((e_125 != NULL) && (e_125 != t)))
    _fail(t);
  else
    e_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_125), not_null(b_125));
  {
    ATerm p_88 = t;
    int q_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(q_88);
      }
    else
      {
        t = p_88;
        t = (ATerm) ATempty;
      }
  }
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_125), not_null(b_125), (ATerm) ATinsert(CheckATermList(not_null(d_125)), not_null(z_124)));
  t = table_put_0_0(t);
  t = not_null(c_125);
  return(t);
}
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm f_125 = NULL,g_125 = NULL;
  if(((g_125 != NULL) && (g_125 != t)))
    _fail(t);
  else
    g_125 = t;
  t = term_q_17;
  t = i_145(t);
  if(((f_125 != NULL) && (f_125 != t)))
    _fail(t);
  else
    f_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_87, term_c_87, not_null(f_125));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  if(((o_125 != NULL) && (o_125 != t)))
    _fail(t);
  else
    o_125 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(o_125);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_125 != NULL) && (p_125 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_125 = ATgetFirst((ATermList) t);
          if(((q_125 != NULL) && (q_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_125);
      if(((s_125 != NULL) && (s_125 != t)))
        _fail(t);
      else
        s_125 = t;
      t = not_null(q_125);
      if(((r_125 != NULL) && (r_125 != t)))
        _fail(t);
      else
        r_125 = t;
      t = not_null(o_125);
      if(((v_125 != NULL) && (v_125 != t)))
        _fail(t);
      else
        v_125 = t;
      t = not_null(s_125);
      t = b_0(t);
      t = not_null(v_125);
      if(((u_125 != NULL) && (u_125 != t)))
        _fail(t);
      else
        u_125 = t;
      t = term_q_17;
      t = c_0(t);
      if(((t_125 != NULL) && (t_125 != t)))
        _fail(t);
      else
        t_125 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_125)), not_null(t_125));
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm x_125 = NULL;
  if(((x_125 != NULL) && (x_125 != t)))
    _fail(t);
  else
    x_125 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(x_125);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(x_125);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(x_125);
        }
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_s_88;
  t = set_config_0_0(t);
  t = term_t_88;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_u_88;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(e_11, f_11, g_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm y_125 = NULL,z_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((y_125 != NULL) && (y_125 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        y_125 = ATgetFirst((ATermList) t);
      if(((z_125 != NULL) && (z_125 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(z_125)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_125)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,h_11 = NULL,g_12 = NULL;
  if(((h_126 != NULL) && (h_126 != t)))
    _fail(t);
  else
    h_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_126 != NULL) && (b_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_126 = ATgetFirst((ATermList) t);
      if(((c_126 != NULL) && (c_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((i_126 != NULL) && (i_126 != t)))
    _fail(t);
  else
    i_126 = t;
  t = SSLgetAnnotations(not_null(h_126));
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = not_null(b_126);
  t = u_100(t);
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  t = not_null(c_126);
  t = v_100(t);
  if(((e_126 != NULL) && (e_126 != t)))
    _fail(t);
  else
    e_126 = t;
  if(((g_126 != NULL) && (g_126 != t)))
    _fail(t);
  else
    g_126 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(e_126)), not_null(d_126));
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = SSLsetAnnotations(not_null(h_11), not_null(a_126));
  if(((f_126 != NULL) && (f_126 != t)))
    _fail(t);
  else
    f_126 = t;
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
  ATerm j_126 = NULL,k_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_126 != NULL) && (j_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_126 = ATgetArgument(t, 0);
      if(((k_126 != NULL) && (k_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_42, not_null(j_126), not_null(k_126));
  t = table_put_0_0(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL;
  if(((p_126 != NULL) && (p_126 != t)))
    _fail(t);
  else
    p_126 = t;
  if(((r_126 != NULL) && (r_126 != t)))
    _fail(t);
  else
    r_126 = t;
  if(((q_126 != NULL) && (q_126 != t)))
    _fail(t);
  else
    q_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_86, not_null(q_126));
  t = set_config_0_0(t);
  t = not_null(p_126);
  if(((o_126 != NULL) && (o_126 != t)))
    _fail(t);
  else
    o_126 = t;
  if(((n_126 != NULL) && (n_126 != t)))
    _fail(t);
  else
    n_126 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_126));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm s_126 = NULL;
  if(((s_126 != NULL) && (s_126 != t)))
    _fail(t);
  else
    s_126 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm m_126 = NULL;
  static ATerm k_11 (ATerm t);
  static ATerm k_11 (ATerm t)
  {
    ATerm v_88 = t;
    int w_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_88 = t;
        int y_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(y_88);
          }
        else
          {
            t = x_88;
            t = g_145(t);
            t = Cons_2_0(l_11, k_11, t);
          }
        LocalPopChoice(w_88);
      }
    else
      {
        t = v_88;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  {
    static ATerm i_11 (ATerm t);
    static ATerm i_11 (ATerm t)
    {
      t = term_z_88;
      t = g_145(t);
      return(t);
    }
    t = try_1_0(i_11, t);
  }
  t = not_null(m_126);
  t = Cons_2_0(j_11, k_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm u_126 = NULL,v_126 = NULL,w_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((u_126 != NULL) && (u_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(u_126), not_null(o_59), not_null(p_59));
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(v_126));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t)
{
  ATerm x_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((x_126 != NULL) && (x_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(x_126), not_null(r_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL;
  t = SSL_hashtable_create(not_null(w_59), not_null(x_59));
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  if(((y_126 != NULL) && (y_126 != t)))
    _fail(t);
  else
    y_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(y_126));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  t = term_a_89;
  if(((a_127 != NULL) && (a_127 != t)))
    _fail(t);
  else
    a_127 = t;
  t = not_null(d_127);
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  t = term_b_89;
  if(((b_127 != NULL) && (b_127 != t)))
    _fail(t);
  else
    b_127 = t;
  t = not_null(c_127);
  t = new_hashtable_0_2(not_null(a_127), not_null(b_127), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL;
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  t = new_hashtable_0_0(t);
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = not_null(h_127);
  if(((g_127 != NULL) && (g_127 != t)))
    _fail(t);
  else
    g_127 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(e_127), not_null(f_127), t);
  t = not_null(g_127);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_127 = NULL,l_127 = NULL;
  t = SSL_table_hashtable();
  if(((l_127 != NULL) && (l_127 != t)))
    _fail(t);
  else
    l_127 = t;
  if(((i_127 != NULL) && (i_127 != t)))
    _fail(t);
  else
    i_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(i_127));
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm c_89 = t;
    int d_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(l_56), t);
        LocalPopChoice(d_89);
      }
    else
      {
        t = c_89;
        {
          ATerm m_127 = NULL,n_127 = NULL;
          if(((m_127 != NULL) && (m_127 != t)))
            _fail(t);
          else
            m_127 = t;
          if(((n_127 != NULL) && (n_127 != t)))
            _fail(t);
          else
            n_127 = t;
          t = not_null(l_56);
          t = table_create_0_0(t);
          t = not_null(n_127);
          t = hashtable_get_0_1(not_null(l_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm q_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL;
  if(((v_127 != NULL) && (v_127 != t)))
    _fail(t);
  else
    v_127 = t;
  if(match_cons(t, sym__3))
    {
      if(((q_127 != NULL) && (q_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_127 = ATgetArgument(t, 0);
      if(((t_127 != NULL) && (t_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_127 = ATgetArgument(t, 1);
      if(((u_127 != NULL) && (u_127 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(q_127), t);
  t = hashtable_put_0_2(not_null(t_127), not_null(u_127), t);
  t = not_null(v_127);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL;
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  t = term_e_89;
  t = table_put_0_0(t);
  t = not_null(z_127);
  {
    static ATerm m_11 (ATerm t);
    static ATerm m_11 (ATerm t)
    {
      ATerm f_89 = t;
      int g_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(g_89);
        }
      else
        {
          t = f_89;
          {
            ATerm h_89 = t;
            int i_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(i_89);
              }
            else
              {
                t = h_89;
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
      ATerm j_89 = t;
      int k_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_128 (ATerm a_128, ATerm t);
          static ATerm e_128 (ATerm a_128, ATerm t)
          {
            ATerm b_128 = NULL;
            t = not_null(a_128);
            if(((b_128 != NULL) && (b_128 != t)))
              _fail(t);
            else
              b_128 = t;
            t = not_null(a_128);
            {
              ATerm l_89 = t;
              int m_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_88;
                  t = get_config_0_0(t);
                  LocalPopChoice(m_89);
                }
              else
                {
                  t = l_89;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(b_128);
            t = e_145(t);
            t = term_d_72;
            t = exit_0_0(t);
            return(t);
          }
          ATerm c_128 = NULL;
          if(((c_128 != NULL) && (c_128 != t)))
            _fail(t);
          else
            c_128 = t;
          {
            ATerm n_89 = t;
            int o_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_128(not_null(c_128), t);
                LocalPopChoice(o_89);
              }
            else
              {
                t = n_89;
                {
                  ATerm d_128 = NULL;
                  t = not_null(c_128);
                  if(((d_128 != NULL) && (d_128 != t)))
                    _fail(t);
                  else
                    d_128 = t;
                  t = term_g_88;
                  t = get_config_0_0(t);
                  t = not_null(d_128);
                  t = f_145(t);
                  t = term_d_72;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(k_89);
        }
      else
        {
          t = j_89;
          {
            static ATerm o_11 (ATerm t);
            static ATerm o_11 (ATerm t)
            {
              static ATerm p_11 (ATerm t);
              static ATerm p_11 (ATerm t)
              {
                if(((x_127 != NULL) && (x_127 != t)))
                  _fail(t);
                else
                  x_127 = t;
                return(t);
              }
              t = Undefined_1_0(p_11, t);
              return(t);
            }
            t = option_defined_1_0(o_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_127)), term_p_89));
          t = printnl_0_0(t);
          t = e_145(t);
          t = term_o_12;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(n_11, t);
  }
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  t = term_b_87;
  t = table_destroy_0_0(t);
  t = not_null(y_127);
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(g_143, h_143, i_143, t);
  t = store_options_0_0(t);
  t = j_143(t);
  {
    ATerm q_89 = t;
    int r_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(r_89);
      }
    else
      {
        t = q_89;
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
  ATerm g_128 = NULL;
  if(((g_128 != NULL) && (g_128 != t)))
    _fail(t);
  else
    g_128 = t;
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
    ATerm s_89 = t;
    int t_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_152(t);
        LocalPopChoice(t_89);
      }
    else
      {
        t = s_89;
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
    ATerm u_89 = t;
    int v_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_152(t);
        LocalPopChoice(v_89);
      }
    else
      {
        t = u_89;
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
  ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL,k_128 = NULL;
  t = read_from_0_0(t);
  if(((k_128 != NULL) && (k_128 != t)))
    _fail(t);
  else
    k_128 = t;
  if(((h_128 != NULL) && (h_128 != t)))
    _fail(t);
  else
    h_128 = t;
  t = not_null(k_128);
  if(((j_128 != NULL) && (j_128 != t)))
    _fail(t);
  else
    j_128 = t;
  if(((i_128 != NULL) && (i_128 != t)))
    _fail(t);
  else
    i_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_128), not_null(i_128));
  t = write_to_0_0(t);
  return(t);
}
ATerm main_test3_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(u_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_test3_0_0(t);
  return(t);
}
