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
static ATerm term_c_90;
static ATerm term_v_89;
static ATerm term_k_89;
static ATerm term_h_89;
static ATerm term_g_89;
static ATerm term_f_89;
static ATerm term_a_89;
static ATerm term_z_88;
static ATerm term_y_88;
static ATerm term_x_88;
static ATerm term_s_88;
static ATerm term_r_88;
static ATerm term_q_88;
static ATerm term_p_88;
static ATerm term_o_88;
static ATerm term_n_88;
static ATerm term_m_88;
static ATerm term_h_88;
static ATerm term_g_88;
static ATerm term_f_88;
static ATerm term_u_87;
static ATerm term_l_87;
static ATerm term_k_87;
static ATerm term_j_87;
static ATerm term_i_87;
static ATerm term_h_87;
static ATerm term_c_87;
static ATerm term_x_86;
static ATerm term_w_86;
static ATerm term_v_86;
static ATerm term_q_86;
static ATerm term_n_86;
static ATerm term_m_86;
static ATerm term_l_86;
static ATerm term_k_86;
static ATerm term_j_86;
static ATerm term_c_86;
static ATerm term_b_86;
static ATerm term_a_86;
static ATerm term_z_85;
static ATerm term_y_85;
static ATerm term_x_85;
static ATerm term_w_85;
static ATerm term_v_85;
static ATerm term_u_85;
static ATerm term_r_85;
static ATerm term_z_84;
static ATerm term_w_84;
static ATerm term_v_84;
static ATerm term_p_83;
static ATerm term_m_83;
static ATerm term_l_83;
static ATerm term_k_83;
static ATerm term_j_83;
static ATerm term_c_83;
static ATerm term_a_82;
static ATerm term_s_81;
static ATerm term_n_81;
static ATerm term_j_81;
static ATerm term_f_80;
static ATerm term_w_79;
static ATerm term_n_79;
static ATerm term_i_79;
static ATerm term_g_75;
static ATerm term_l_74;
static ATerm term_e_74;
static ATerm term_f_73;
static ATerm term_e_73;
static ATerm term_d_73;
static ATerm term_c_73;
static ATerm term_d_72;
static ATerm term_c_72;
static ATerm term_b_72;
static ATerm term_s_71;
static ATerm term_r_71;
static ATerm term_z_70;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_u_70;
static ATerm term_r_70;
static ATerm term_q_70;
static ATerm term_p_70;
static ATerm term_o_70;
static ATerm term_l_70;
static ATerm term_u_69;
static ATerm term_n_69;
static ATerm term_a_67;
static ATerm term_h_66;
static ATerm term_d_66;
static ATerm term_c_66;
static ATerm term_x_65;
static ATerm term_w_65;
static ATerm term_b_65;
static ATerm term_a_65;
static ATerm term_k_63;
static ATerm term_u_60;
static ATerm term_t_60;
static ATerm term_s_60;
static ATerm term_n_60;
static ATerm term_m_60;
static ATerm term_l_60;
static ATerm term_i_60;
static ATerm term_a_60;
static ATerm term_y_59;
static ATerm term_m_59;
static ATerm term_c_59;
static ATerm term_b_59;
static ATerm term_y_58;
static ATerm term_k_57;
static ATerm term_j_57;
static ATerm term_i_57;
static ATerm term_f_57;
static ATerm term_t_56;
static ATerm term_g_56;
static ATerm term_r_55;
static ATerm term_q_55;
static ATerm term_j_55;
static ATerm term_c_55;
static ATerm term_b_55;
static ATerm term_b_54;
static ATerm term_y_53;
static ATerm term_p_53;
static ATerm term_i_53;
static ATerm term_d_53;
static ATerm term_p_51;
static ATerm term_r_50;
static ATerm term_p_49;
static ATerm term_l_49;
static ATerm term_u_48;
static ATerm term_p_48;
static ATerm term_n_48;
static ATerm term_y_47;
static ATerm term_e_46;
static ATerm term_f_43;
static ATerm term_e_43;
static ATerm term_d_43;
static ATerm term_q_42;
static ATerm term_p_42;
static ATerm term_o_42;
static ATerm term_k_42;
static ATerm term_j_42;
static ATerm term_f_42;
static ATerm term_b_42;
static ATerm term_m_41;
static ATerm term_h_41;
static ATerm term_l_35;
static ATerm term_k_35;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_t_33;
static ATerm term_s_33;
static ATerm term_q_33;
static ATerm term_p_33;
static ATerm term_o_33;
static ATerm term_n_33;
static ATerm term_m_33;
static ATerm term_l_33;
static ATerm term_k_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_i_32;
static ATerm term_a_32;
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_x_31;
static ATerm term_w_31;
static ATerm term_b_29;
static ATerm term_f_24;
static ATerm term_y_23;
static ATerm term_l_22;
static ATerm term_j_22;
static ATerm term_i_22;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_l_19;
static ATerm term_h_19;
static ATerm term_c_19;
static ATerm term_y_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_k_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_d_18;
static ATerm term_x_17;
static ATerm term_w_17;
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
static ATerm term_h_13;
static ATerm term_g_13;
static ATerm term_f_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_x_12;
static ATerm term_u_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-preload", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-transform", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_u_12, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_String_1, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Some_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_File_1, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Input_1, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Some_1, term_s_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_i_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Type_1, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Some_1, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Default_1, term_a_32);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Some_1, term_i_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_i_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_k_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_m_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Some_1, term_p_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_String_1, term_s_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Some_1, term_t_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_File_1, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Output_1, term_v_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Some_1, term_w_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Streams_3, term_t_21, term_z_33, term_k_18);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Exec_1, term_a_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_g_34);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__2, term_k_42, term_o_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_f_18);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_String_1, term_j_57);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_k_57);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym_String_1, term_b_59);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_c_59);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym_String_1, term_y_59);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_a_60);
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_String_1, term_l_60);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_m_60);
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym_String_1, term_s_60);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_t_60);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym_String_1, term_k_63);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_i_57, term_a_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_w_65);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym_Template_2, term_c_66, term_k_18);
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_x_65, term_d_66);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_l_83);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym__2, term_b_54, term_p_51);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_c_73);
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_73);
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_f_18);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(sym__2, term_k_86, term_f_18);
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_f_18);
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(sym__2, term_j_87, term_k_87);
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(sym__2, term_m_88, term_f_18);
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(sym__2, term_p_88, term_f_18);
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(sym__2, term_x_88, term_f_18);
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(sym__3, term_j_87, term_k_87, (ATerm) ATempty);
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_90));
  term_c_90 = (ATerm) ATmakeAppl(ATmakeSymbol("test3", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_23 (ATerm n_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_0 (ATerm t);
ATerm xtc_pass_options_0_0 (ATerm t);
ATerm xtc_pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm h_153 (ATerm), ATerm i_153 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm b_153 (ATerm), ATerm c_153 (ATerm), ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
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
static ATerm q_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm exec_http_0_1 (ATerm x_87, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm y_29 (ATerm e_29, ATerm f_29, ATerm t);
static ATerm z_29 (ATerm p_29, ATerm q_29, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm c_31 (ATerm g_30, ATerm h_30, ATerm t);
static ATerm d_31 (ATerm r_30, ATerm s_30, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm f_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm t);
static ATerm g_33 (ATerm q_32, ATerm r_32, ATerm s_32, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm b_36 (ATerm x_33, ATerm y_33, ATerm b_34, ATerm c_34, ATerm d_34, ATerm e_34, ATerm f_34, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t);
static ATerm i_48 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm t_42, ATerm u_42, ATerm t);
static ATerm j_48 (ATerm k_43, ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm t);
static ATerm k_48 (ATerm x_43, ATerm y_43, ATerm z_43, ATerm a_44, ATerm b_44, ATerm t);
static ATerm l_48 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm q_44, ATerm r_44, ATerm t);
static ATerm m_48 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm t);
static ATerm o_48 (ATerm q_45, ATerm r_45, ATerm s_45, ATerm t_45, ATerm u_45, ATerm t);
static ATerm q_48 (ATerm l_46, ATerm m_46, ATerm n_46, ATerm o_46, ATerm p_46, ATerm t);
static ATerm r_48 (ATerm b_47, ATerm c_47, ATerm d_47, ATerm e_47, ATerm f_47, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
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
static ATerm b_3 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_63 (ATerm x_60, ATerm y_60, ATerm z_60, ATerm t);
static ATerm a_64 (ATerm m_61, ATerm n_61, ATerm t);
static ATerm b_64 (ATerm z_61, ATerm t);
static ATerm c_64 (ATerm e_62, ATerm t);
static ATerm d_64 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t);
static ATerm e_64 (ATerm r_62, ATerm s_62, ATerm t_62, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm w_78, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t);
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
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
static ATerm t_5 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t);
ATerm err_0_1 (ATerm v_78, ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t);
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t);
ATerm dbg_0_1 (ATerm y_78, ATerm t);
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm set_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t);
static ATerm r_6 (ATerm t);
ATerm xtc_register_0_1 (ATerm u_0, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t);
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
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
static ATerm y_103 (ATerm p_103, ATerm q_103, ATerm t);
static ATerm z_103 (ATerm t_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm z_133 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
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
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_131 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
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
static ATerm q_8 (ATerm t);
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
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
static ATerm b_117 (ATerm t_116, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
static ATerm u_117 (ATerm p_117, ATerm t);
static ATerm x_8 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm table_pop_rm_0_0 (ATerm t);
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t);
ATerm remove_file_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm aterm_output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm io_options_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm k_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
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
static ATerm u_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_114 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
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
static ATerm s_11 (ATerm t);
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm main_test2_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_23 (ATerm n_22, ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  t = not_null(n_22);
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = not_null(n_22);
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(r_22);
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = SSL_explode_term(not_null(t_22));
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((o_22 != NULL) && (o_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_22);
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  t = not_null(o_22);
  t = concat_0_0(t);
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
            t = not_null(u_22);
            if(((x_22 != NULL) && (x_22 != t)))
              _fail(t);
            else
              x_22 = t;
            t = not_null(v_22);
            if(((y_22 != NULL) && (y_22 != t)))
              _fail(t);
            else
              y_22 = t;
            t = not_null(w_22);
            if(((a_23 != NULL) && (a_23 != t)))
              _fail(t);
            else
              a_23 = t;
            t = not_null(x_22);
            {
              static ATerm a_0 (ATerm t);
              static ATerm a_0 (ATerm t)
              {
                t = not_null(y_22);
                return(t);
              }
              t = at_end_1_0(a_0, t);
            }
            if(((z_22 != NULL) && (z_22 != t)))
              _fail(t);
            else
              z_22 = t;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = b_23(not_null(w_22), t);
          }
      }
    }
  else
    {
      t = b_23(not_null(w_22), t);
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm c_23 = NULL;
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  t = get_config_0_0(t);
  t = not_null(c_23);
  return(t);
}
ATerm xtc_pass_options_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_12), term_p_12), term_o_12);
  t = filter_1_0(d_0, t);
  return(t);
}
ATerm xtc_pass_verbose_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  t = term_r_12;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = term_u_12;
      }
  }
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_u_12);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(d_23)));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_153 (ATerm), ATerm i_153 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(h_153, i_153, t);
  t = read_from_0_0(t);
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
ATerm xtc_transform_2_0 (ATerm b_153 (ATerm), ATerm c_153 (ATerm), ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = NULL,j_23 = NULL;
      if(((j_23 != NULL) && (j_23 != t)))
        _fail(t);
      else
        j_23 = t;
      t = term_x_12;
      if(((i_23 != NULL) && (i_23 != t)))
        _fail(t);
      else
        i_23 = t;
      t = not_null(j_23);
      t = dbg_0_1(not_null(i_23), t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(g_0, t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = stdin_0_0(t);
          }
      }
      LocalPopChoice(w_12);
      t = xtc_transform_file_2_0(b_153, c_153, t);
    }
  else
    {
      t = v_12;
      t = xtc_transform_term_2_0(b_153, c_153, t);
    }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = xtc_new_file_0_0(t);
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), not_null(m_23));
  t = WriteToBinaryFile_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_23));
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((o_23 != NULL) && (o_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(o_23));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL,t_23 = NULL;
        t = not_null(r_23);
        if(((t_23 != NULL) && (t_23 != t)))
          _fail(t);
        else
          t_23 = t;
        t = not_null(r_23);
        if(((s_23 != NULL) && (s_23 != t)))
          _fail(t);
        else
          s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), term_c_13);
        t = open_stream_0_0(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm u_23 = NULL,v_23 = NULL;
          t = not_null(r_23);
          if(((v_23 != NULL) && (v_23 != t)))
            _fail(t);
          else
            v_23 = t;
          t = not_null(r_23);
          if(((u_23 != NULL) && (u_23 != t)))
            _fail(t);
          else
            u_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(u_23));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  t = read_from_stream_0_0(t);
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = not_null(q_23);
  t = fclose_0_0(t);
  t = not_null(p_23);
  return(t);
}
ATerm call_1_0 (ATerm r_141 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    t = r_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(x_23));
    t = execvp_0_0(t);
    t = term_u_12;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_23 = ATgetArgument(t, 0);
      if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(i_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm z_23 = NULL;
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(j_0, t);
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
  ATerm a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_24 = ATgetArgument(t, 0);
      if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(a_24), not_null(b_24));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_24 = ATgetArgument(t, 0);
      if(((d_24 != NULL) && (d_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(c_24), not_null(d_24));
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
  ATerm e_24 = NULL;
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = SSL_int_to_string(not_null(e_24));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_24 = ATgetArgument(t, 0);
      {
        ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
        t = not_null(h_24);
        if(((k_24 != NULL) && (k_24 != t)))
          _fail(t);
        else
          k_24 = t;
        t = not_null(g_24);
        if(((m_24 != NULL) && (m_24 != t)))
          _fail(t);
        else
          m_24 = t;
        if(((o_24 != NULL) && (o_24 != t)))
          _fail(t);
        else
          o_24 = t;
        t = not_null(k_24);
        t = int_to_string_0_0(t);
        if(((n_24 != NULL) && (n_24 != t)))
          _fail(t);
        else
          n_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), not_null(n_24)), term_e_13);
        t = concat_strings_0_0(t);
        if(((l_24 != NULL) && (l_24 != t)))
          _fail(t);
        else
          l_24 = t;
      }
    }
  else
    {
      ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_24 = ATgetArgument(t, 0);
          if(((i_24 != NULL) && (i_24 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_24 = ATgetArgument(t, 1);
          if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(h_24);
      if(((p_24 != NULL) && (p_24 != t)))
        _fail(t);
      else
        p_24 = t;
      t = not_null(i_24);
      if(((q_24 != NULL) && (q_24 != t)))
        _fail(t);
      else
        q_24 = t;
      t = not_null(j_24);
      if(((r_24 != NULL) && (r_24 != t)))
        _fail(t);
      else
        r_24 = t;
      t = not_null(g_24);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      if(((v_24 != NULL) && (v_24 != t)))
        _fail(t);
      else
        v_24 = t;
      t = not_null(q_24);
      t = int_to_string_0_0(t);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_24)), term_h_13), not_null(u_24)), term_g_13), not_null(p_24));
      t = concat_strings_0_0(t);
      if(((s_24 != NULL) && (s_24 != t)))
        _fail(t);
      else
        s_24 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm w_24 = NULL;
  static ATerm l_0 (ATerm t);
  static ATerm l_0 (ATerm t)
  {
    t = p_123(t);
    if(((w_24 != NULL) && (w_24 != t)))
      _fail(t);
    else
      w_24 = t;
    return(t);
  }
  t = fetch_1_0(l_0, t);
  t = not_null(w_24);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_24 = NULL;
  if(((x_24 != NULL) && (x_24 != t)))
    _fail(t);
  else
    x_24 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_0 (ATerm t);
        static ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_13 = ATgetArgument(t, 0);
              if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_24 = ATgetArgument(t, 1);
              {
                ATerm l_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_17), term_o_17), term_k_17), term_g_17), term_c_17), term_y_16), term_u_16), term_q_16), term_m_16), term_i_16), term_e_16), term_a_16), term_w_15), term_s_15), term_o_15), term_k_15), term_g_15), term_c_15), term_y_14), term_u_14), term_q_14), term_m_14), term_i_14), term_e_14), term_a_14), term_w_13), term_s_13), term_o_13);
        t = fetch_elem_1_0(n_0, t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(x_24));
      }
  }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(((b_25 != NULL) && (b_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_25 = ATgetArgument(t, 1);
      {
        ATerm u_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(b_25);
  {
    ATerm v_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_17;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_24)), term_x_17));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_24 = NULL;
  if(((y_24 != NULL) && (y_24 != t)))
    _fail(t);
  else
    y_24 = t;
  t = try_1_0(q_0, t);
  t = not_null(y_24);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm c_25 = NULL;
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  t = SSL_waitpid(not_null(c_25));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = fork_0_0(t);
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        if(((g_25 != NULL) && (g_25 != t)))
          _fail(t);
        else
          g_25 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(f_25);
        t = t_141(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), not_null(f_25));
        t = u_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm h_25 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm i_25 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((i_25 != NULL) && (i_25 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          i_25 = ATgetArgument(t, 0);
        if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          h_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(i_25);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm a_18 = ATgetArgument(t, 0);
        if(((ATgetType(a_18) != AT_INT) || (ATgetInt((ATermInt) a_18) != 0)))
          _fail(t);
        {
          ATerm b_18 = ATgetArgument(t, 1);
        }
        {
          ATerm c_18 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(h_25);
    return(t);
  }
  t = fork_2_0(v_141, s_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = not_null(t_25);
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = STDIN__FILENO_0_0(t);
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(r_25));
  t = dup2_0_0(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = not_null(x_25);
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(v_25));
  t = dup2_0_0(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  t = not_null(b_26);
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = STDERR__FILENO_0_0(t);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(z_25));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  t = term_d_18;
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = not_null(p_25);
  t = dbg_0_1(not_null(o_25), t);
  if(match_cons(t, sym__3))
    {
      if(((m_25 != NULL) && (m_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_25 = ATgetArgument(t, 0);
      {
        ATerm e_18 = ATgetArgument(t, 1);
        if(match_cons(e_18, sym__3))
          {
            if(((j_25 != NULL) && (j_25 != ATgetArgument(e_18, 0))))
              _fail(ATgetArgument(e_18, 0));
            else
              j_25 = ATgetArgument(e_18, 0);
            if(((k_25 != NULL) && (k_25 != ATgetArgument(e_18, 1))))
              _fail(ATgetArgument(e_18, 1));
            else
              k_25 = ATgetArgument(e_18, 1);
            if(((l_25 != NULL) && (l_25 != ATgetArgument(e_18, 2))))
              _fail(ATgetArgument(e_18, 2));
            else
              l_25 = ATgetArgument(e_18, 2);
          }
        else
          _fail(t);
      }
      if(((n_25 != NULL) && (n_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      t = not_null(j_25);
      t = option_1_0(y_0, t);
      t = not_null(k_25);
      t = option_1_0(b_1, t);
      t = not_null(l_25);
      t = option_1_0(e_1, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(n_25));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = term_f_18;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm exec_http_0_1 (ATerm x_87, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_i_18), term_h_18), not_null(g_26));
  t = conc_0_0(t);
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = not_null(x_87);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_26 = ATgetArgument(t, 0);
      if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_26 = ATgetArgument(t, 1);
      if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_26 = ATgetArgument(t, 2);
      {
        ATerm j_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_k_18, not_null(d_26), not_null(e_26), not_null(f_26));
  t = xtc_command_1_0(g_1, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  if(match_cons(t, sym__3))
    {
      if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_26 = ATgetArgument(t, 0);
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_26 = ATgetArgument(t, 1);
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(l_26);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm p_26 = NULL,q_26 = NULL;
      t = not_null(n_26);
      if(((q_26 != NULL) && (q_26 != t)))
        _fail(t);
      else
        q_26 = t;
      t = not_null(o_26);
      if(((p_26 != NULL) && (p_26 != t)))
        _fail(t);
      else
        p_26 = t;
      t = exec_http_0_1(not_null(q_26), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          m_26 = ATgetArgument(t, 0);
          {
            ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
            t = not_null(m_26);
            if(((r_26 != NULL) && (r_26 != t)))
              _fail(t);
            else
              r_26 = t;
            t = not_null(n_26);
            if(((t_26 != NULL) && (t_26 != t)))
              _fail(t);
            else
              t_26 = t;
            t = not_null(o_26);
            if(((s_26 != NULL) && (s_26 != t)))
              _fail(t);
            else
              s_26 = t;
            t = exec_http_0_1(not_null(t_26), t);
          }
        }
      else
        {
          ATerm u_26 = NULL,v_26 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(m_26);
          if(((u_26 != NULL) && (u_26 != t)))
            _fail(t);
          else
            u_26 = t;
          t = not_null(o_26);
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = SSL_open(not_null(w_26));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm m_3, ATerm t)
{
  static ATerm o_27 (ATerm b_27, ATerm c_27, ATerm t);
  static ATerm p_27 (ATerm h_27, ATerm t);
  static ATerm o_27 (ATerm b_27, ATerm c_27, ATerm t)
  {
    ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
    t = not_null(b_27);
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = not_null(c_27);
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm l_18 = ATgetArgument(t, 0);
        if(match_cons(l_18, sym_FILE_1))
          {
            if(((g_27 != NULL) && (g_27 != ATgetArgument(l_18, 0))))
              _fail(ATgetArgument(l_18, 0));
            else
              g_27 = ATgetArgument(l_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(g_27);
    t = open_0_0(t);
    if(((e_27 != NULL) && (e_27 != t)))
      _fail(t);
    else
      e_27 = t;
    return(t);
  }
  static ATerm p_27 (ATerm h_27, ATerm t)
  {
    ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
    t = not_null(h_27);
    if(((j_27 != NULL) && (j_27 != t)))
      _fail(t);
    else
      j_27 = t;
    t = not_null(m_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm m_18 = ATgetArgument(t, 0);
        if(match_cons(m_18, sym_FILE_1))
          {
            if(((k_27 != NULL) && (k_27 != ATgetArgument(m_18, 0))))
              _fail(ATgetArgument(m_18, 0));
            else
              k_27 = ATgetArgument(m_18, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(k_27);
    t = open_0_0(t);
    if(((i_27 != NULL) && (i_27 != t)))
      _fail(t);
    else
      i_27 = t;
    return(t);
  }
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(n_27);
  if(match_cons(t, sym_Some_1))
    {
      l_27 = ATgetArgument(t, 0);
      t = o_27(not_null(l_27), not_null(m_27), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = p_27(not_null(m_27), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm l_3, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  if(match_cons(t, sym_Error_1))
    {
      s_27 = ATgetArgument(t, 0);
      {
        ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
        t = not_null(s_27);
        if(((t_27 != NULL) && (t_27 != t)))
          _fail(t);
        else
          t_27 = t;
        t = not_null(r_27);
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = not_null(t_27);
        t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          s_27 = ATgetArgument(t, 0);
          {
            ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
            t = not_null(s_27);
            if(((w_27 != NULL) && (w_27 != t)))
              _fail(t);
            else
              w_27 = t;
            t = not_null(r_27);
            if(((y_27 != NULL) && (y_27 != t)))
              _fail(t);
            else
              y_27 = t;
            t = not_null(w_27);
            t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
            if(((x_27 != NULL) && (x_27 != t)))
              _fail(t);
            else
              x_27 = t;
          }
        }
      else
        {
          ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(s_27);
          if(((z_27 != NULL) && (z_27 != t)))
            _fail(t);
          else
            z_27 = t;
          t = not_null(r_27);
          if(((b_28 != NULL) && (b_28 != t)))
            _fail(t);
          else
            b_28 = t;
          t = not_null(z_27);
          t = xtc_streamdef_to_fd_0_1(not_null(l_3), t);
          if(((a_28 != NULL) && (a_28 != t)))
            _fail(t);
          else
            a_28 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm d_28 = NULL,e_28 = NULL;
        if(((d_28 != NULL) && (d_28 != t)))
          _fail(t);
        else
          d_28 = t;
        if(match_cons(t, sym_URL_1))
          {
            e_28 = ATgetArgument(t, 0);
            {
              ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
              t = not_null(e_28);
              if(((f_28 != NULL) && (f_28 != t)))
                _fail(t);
              else
                f_28 = t;
              t = not_null(d_28);
              if(((h_28 != NULL) && (h_28 != t)))
                _fail(t);
              else
                h_28 = t;
              t = not_null(f_28);
              t = xtc_arg_to_string_0_0(t);
              if(((g_28 != NULL) && (g_28 != t)))
                _fail(t);
              else
                g_28 = t;
            }
          }
        else
          {
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(e_28);
            if(((i_28 != NULL) && (i_28 != t)))
              _fail(t);
            else
              i_28 = t;
            t = not_null(d_28);
            if(((k_28 != NULL) && (k_28 != t)))
              _fail(t);
            else
              k_28 = t;
            t = not_null(i_28);
            t = xtc_arg_to_string_0_0(t);
            if(((j_28 != NULL) && (j_28 != t)))
              _fail(t);
            else
              j_28 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      o_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      {
        ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
        t = not_null(o_28);
        if(((p_28 != NULL) && (p_28 != t)))
          _fail(t);
        else
          p_28 = t;
        t = not_null(m_28);
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        t = not_null(n_28);
        if(((u_28 != NULL) && (u_28 != t)))
          _fail(t);
        else
          u_28 = t;
        t = not_null(p_28);
        t = xtc_argterm_to_exec_0_0(t);
        if(((r_28 != NULL) && (r_28 != t)))
          _fail(t);
        else
          r_28 = t;
        t = not_null(u_28);
        if(((t_28 != NULL) && (t_28 != t)))
          _fail(t);
        else
          t_28 = t;
        t = not_null(q_28);
        t = xtc_argterm_to_exec_0_0(t);
        if(((s_28 != NULL) && (s_28 != t)))
          _fail(t);
        else
          s_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_28)), not_null(r_28));
      }
    }
  else
    {
      ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_28);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = not_null(n_28);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = not_null(v_28);
      t = xtc_argterm_to_exec_0_0(t);
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      t = (ATerm) ATinsert(ATempty, not_null(w_28));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm y_29 (ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  t = not_null(e_29);
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = not_null(f_29);
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  t = not_null(g_29);
  t = xtc_argterm_to_http_0_0(t);
  if(((l_29 != NULL) && (l_29 != t)))
    _fail(t);
  else
    l_29 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_29 = ATgetArgument(t, 0);
      {
        ATerm n_29 = NULL;
        t = not_null(m_29);
        if(((n_29 != NULL) && (n_29 != t)))
          _fail(t);
        else
          n_29 = t;
      }
    }
  else
    {
      ATerm o_29 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((m_29 != NULL) && (m_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_29);
      if(((o_29 != NULL) && (o_29 != t)))
        _fail(t);
      else
        o_29 = t;
    }
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  t = not_null(k_29);
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_29)), term_p_18);
  t = concat_strings_0_0(t);
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(i_29)));
  return(t);
}
static ATerm z_29 (ATerm p_29, ATerm q_29, ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t = not_null(p_29);
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  t = not_null(q_29);
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  t = not_null(r_29);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm r_18 = t;
    if((PushChoice() == 0))
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(h_1, t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = URL_1_0(i_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_18;
      }
  }
  if(((s_29 != NULL) && (s_29 != t)))
    _fail(t);
  else
    s_29 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(s_29)));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_29 = NULL;
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm v_29 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((x_29 != NULL) && (x_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_29(not_null(x_29), not_null(w_29), t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = z_29(not_null(x_29), not_null(w_29), t);
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(j_1, t);
  return(t);
}
static ATerm c_31 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = not_null(g_30);
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = not_null(h_30);
  if(((m_30 != NULL) && (m_30 != t)))
    _fail(t);
  else
    m_30 = t;
  t = not_null(i_30);
  t = xtc_argterm_to_http_0_0(t);
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_30 = ATgetArgument(t, 0);
      {
        ATerm p_30 = NULL;
        t = not_null(o_30);
        if(((p_30 != NULL) && (p_30 != t)))
          _fail(t);
        else
          p_30 = t;
      }
    }
  else
    {
      ATerm q_30 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((o_30 != NULL) && (o_30 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_30);
      if(((q_30 != NULL) && (q_30 != t)))
        _fail(t);
      else
        q_30 = t;
    }
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  t = not_null(m_30);
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_30)), term_y_18);
  t = concat_strings_0_0(t);
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(k_30)));
  return(t);
}
static ATerm d_31 (ATerm r_30, ATerm s_30, ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  t = not_null(r_30);
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  t = not_null(s_30);
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  t = not_null(t_30);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm z_18 = t;
    if((PushChoice() == 0))
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(k_1, t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = URL_1_0(m_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_18;
      }
  }
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = not_null(x_30);
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_30)), term_c_19);
  t = concat_strings_0_0(t);
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(v_30)));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm y_30 = NULL;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm z_30 = NULL;
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  if(((a_31 != NULL) && (a_31 != t)))
    _fail(t);
  else
    a_31 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((b_31 != NULL) && (b_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_31(not_null(b_31), not_null(a_31), t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = d_31(not_null(b_31), not_null(a_31), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,n_1 = NULL,z_11 = NULL;
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((f_31 != NULL) && (f_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  t = SSLgetAnnotations(not_null(j_31));
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = not_null(f_31);
  t = n_109(t);
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(g_31));
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  t = SSLsetAnnotations(not_null(n_1), not_null(e_31));
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm l_31 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((l_31 != NULL) && (l_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(l_31);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm n_31 = NULL,o_31 = NULL;
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        if(match_cons(t, sym_URL_1))
          {
            o_31 = ATgetArgument(t, 0);
            {
              ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
              t = not_null(o_31);
              if(((p_31 != NULL) && (p_31 != t)))
                _fail(t);
              else
                p_31 = t;
              t = not_null(n_31);
              if(((r_31 != NULL) && (r_31 != t)))
                _fail(t);
              else
                r_31 = t;
              t = not_null(p_31);
              t = xtc_arg_to_string_0_0(t);
              if(((q_31 != NULL) && (q_31 != t)))
                _fail(t);
              else
                q_31 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(q_31));
            }
          }
        else
          {
            ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((o_31 != NULL) && (o_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(o_31);
            if(((s_31 != NULL) && (s_31 != t)))
              _fail(t);
            else
              s_31 = t;
            t = not_null(n_31);
            if(((u_31 != NULL) && (u_31 != t)))
              _fail(t);
            else
              u_31 = t;
            t = not_null(s_31);
            t = xtc_arg_to_string_0_0(t);
            if(((t_31 != NULL) && (t_31 != t)))
              _fail(t);
            else
              t_31 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_31));
          }
      }
    }
  return(t);
}
static ATerm f_33 (ATerm b_32, ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  t = not_null(b_32);
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  t = not_null(c_32);
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  t = not_null(d_32);
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  t = not_null(e_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = not_null(g_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((m_32 != NULL) && (m_32 != t)))
    _fail(t);
  else
    m_32 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_32 = ATgetArgument(t, 0);
      {
        ATerm o_32 = NULL;
        t = not_null(n_32);
        if(((o_32 != NULL) && (o_32 != t)))
          _fail(t);
        else
          o_32 = t;
      }
    }
  else
    {
      ATerm p_32 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((n_32 != NULL) && (n_32 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_32);
      if(((p_32 != NULL) && (p_32 != t)))
        _fail(t);
      else
        p_32 = t;
    }
  if(((h_32 != NULL) && (h_32 != t)))
    _fail(t);
  else
    h_32 = t;
  t = not_null(l_32);
  if(((k_32 != NULL) && (k_32 != t)))
    _fail(t);
  else
    k_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_32)), term_h_19), not_null(f_32));
  t = concat_strings_0_0(t);
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(j_32)));
  return(t);
}
static ATerm g_33 (ATerm q_32, ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = not_null(q_32);
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  t = not_null(r_32);
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  t = not_null(s_32);
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = not_null(t_32);
  t = xtc_argterm_to_http_0_0(t);
  if(((u_32 != NULL) && (u_32 != t)))
    _fail(t);
  else
    u_32 = t;
  t = not_null(v_32);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm i_19 = t;
    if((PushChoice() == 0))
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(p_1, t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = URL_1_0(q_1, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_19;
      }
  }
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = not_null(z_32);
  if(((y_32 != NULL) && (y_32 != t)))
    _fail(t);
  else
    y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_32)), term_l_19), not_null(u_32));
  t = concat_strings_0_0(t);
  if(((x_32 != NULL) && (x_32 != t)))
    _fail(t);
  else
    x_32 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(x_32)));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm a_33 = NULL;
  if(((a_33 != NULL) && (a_33 != t)))
    _fail(t);
  else
    a_33 = t;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm b_33 = NULL;
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((d_33 != NULL) && (d_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_33 = ATgetArgument(t, 0);
      if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_33(not_null(d_33), not_null(e_33), not_null(c_33), t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = g_33(not_null(d_33), not_null(e_33), not_null(c_33), t);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(r_1, t);
  return(t);
}
static ATerm b_36 (ATerm x_33, ATerm y_33, ATerm b_34, ATerm c_34, ATerm d_34, ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,u_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL;
  t = not_null(x_33);
  if(((u_34 != NULL) && (u_34 != t)))
    _fail(t);
  else
    u_34 = t;
  t = not_null(y_33);
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  t = not_null(b_34);
  if(((q_34 != NULL) && (q_34 != t)))
    _fail(t);
  else
    q_34 = t;
  t = not_null(c_34);
  if(((v_34 != NULL) && (v_34 != t)))
    _fail(t);
  else
    v_34 = t;
  t = not_null(d_34);
  if(((m_34 != NULL) && (m_34 != t)))
    _fail(t);
  else
    m_34 = t;
  t = not_null(e_34);
  if(((l_34 != NULL) && (l_34 != t)))
    _fail(t);
  else
    l_34 = t;
  t = not_null(f_34);
  if(((y_34 != NULL) && (y_34 != t)))
    _fail(t);
  else
    y_34 = t;
  t = not_null(m_34);
  t = xtc_args_to_exec_0_0(t);
  if(((n_34 != NULL) && (n_34 != t)))
    _fail(t);
  else
    n_34 = t;
  t = not_null(u_34);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(o_34), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(s_1, t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = term_k_18;
      }
  }
  if(((p_34 != NULL) && (p_34 != t)))
    _fail(t);
  else
    p_34 = t;
  t = not_null(u_34);
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(q_34), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(t_1, t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = term_k_18;
      }
  }
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  t = not_null(u_34);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_1 (ATerm t);
        static ATerm u_1 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(v_34), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(u_1, t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = term_k_18;
      }
  }
  if(((x_34 != NULL) && (x_34 != t)))
    _fail(t);
  else
    x_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), (ATerm)ATmakeAppl(sym__3, not_null(p_34), not_null(r_34), not_null(x_34)), not_null(n_34));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  if(match_cons(t, sym__3))
    {
      if(((a_35 != NULL) && (a_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_35 = ATgetArgument(t, 0);
      if(((i_35 != NULL) && (i_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_35 = ATgetArgument(t, 1);
      if(((p_35 != NULL) && (p_35 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(a_35);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
      t = not_null(i_35);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((j_35 != NULL) && (j_35 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_35 = ATgetArgument(t, 0);
          if(((m_35 != NULL) && (m_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_35 = ATgetArgument(t, 1);
          if(((n_35 != NULL) && (n_35 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_35 = ATgetArgument(t, 2);
          if(((o_35 != NULL) && (o_35 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            o_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(p_35);
      if(match_cons(t, sym__2))
        {
          if(((q_35 != NULL) && (q_35 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_35 = ATgetArgument(t, 0);
          if(((r_35 != NULL) && (r_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_35);
      if(((t_35 != NULL) && (t_35 != t)))
        _fail(t);
      else
        t_35 = t;
      t = not_null(q_35);
      if(((s_35 != NULL) && (s_35 != t)))
        _fail(t);
      else
        s_35 = t;
      t = not_null(z_34);
      if(((v_35 != NULL) && (v_35 != t)))
        _fail(t);
      else
        v_35 = t;
      t = not_null(t_35);
      t = xtc_args_to_xtservice_0_0(t);
      if(((u_35 != NULL) && (u_35 != t)))
        _fail(t);
      else
        u_35 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_35)), not_null(s_35));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          b_35 = ATgetArgument(t, 0);
          {
            ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
            t = not_null(i_35);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((j_35 != NULL) && (j_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_35 = ATgetArgument(t, 0);
                if(((m_35 != NULL) && (m_35 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_35 = ATgetArgument(t, 1);
                if(((n_35 != NULL) && (n_35 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  n_35 = ATgetArgument(t, 2);
                if(((o_35 != NULL) && (o_35 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  o_35 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(p_35);
            if(match_cons(t, sym__2))
              {
                if(((q_35 != NULL) && (q_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_35 = ATgetArgument(t, 0);
                if(((r_35 != NULL) && (r_35 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_35 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(b_35);
            if(((w_35 != NULL) && (w_35 != t)))
              _fail(t);
            else
              w_35 = t;
            t = not_null(o_35);
            if(((y_35 != NULL) && (y_35 != t)))
              _fail(t);
            else
              y_35 = t;
            t = not_null(q_35);
            if(((x_35 != NULL) && (x_35 != t)))
              _fail(t);
            else
              x_35 = t;
            t = not_null(z_34);
            if(((a_36 != NULL) && (a_36 != t)))
              _fail(t);
            else
              a_36 = t;
            t = not_null(y_35);
            t = xtc_args_to_http_0_0(t);
            if(((z_35 != NULL) && (z_35 != t)))
              _fail(t);
            else
              z_35 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(z_35)), not_null(x_35));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((b_35 != NULL) && (b_35 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_35);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((j_35 != NULL) && (j_35 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_35 = ATgetArgument(t, 0);
              if(((m_35 != NULL) && (m_35 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_35 = ATgetArgument(t, 1);
              if(((n_35 != NULL) && (n_35 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                n_35 = ATgetArgument(t, 2);
              if(((o_35 != NULL) && (o_35 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                o_35 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(p_35);
          if(match_cons(t, sym__2))
            {
              if(((q_35 != NULL) && (q_35 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_35 = ATgetArgument(t, 0);
              if(((r_35 != NULL) && (r_35 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_36(not_null(b_35), not_null(j_35), not_null(m_35), not_null(n_35), not_null(o_35), not_null(q_35), not_null(z_34), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm s_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if(!(match_cons(w_19, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(s_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  static ATerm v_1 (ATerm t);
  static ATerm v_1 (ATerm t)
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(c_36), t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        {
          ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
          if(((e_36 != NULL) && (e_36 != t)))
            _fail(t);
          else
            e_36 = t;
          if(((g_36 != NULL) && (g_36 != t)))
            _fail(t);
          else
            g_36 = t;
          t = not_null(e_36);
          if(((f_36 != NULL) && (f_36 != t)))
            _fail(t);
          else
            f_36 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_36));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_36 = ATgetArgument(t, 0);
      if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_36);
  t = mapconcat_1_0(v_1, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_36 = ATgetArgument(t, 0);
      if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  t = Fst_0_0(t);
  {
    static ATerm w_1 (ATerm t);
    static ATerm w_1 (ATerm t)
    {
      ATerm n_36 = NULL;
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_36 (ATerm o_36, ATerm t);
          static ATerm v_36 (ATerm o_36, ATerm t)
          {
            ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
            t = not_null(o_36);
            if(((n_36 != NULL) && (n_36 != t)))
              _fail(t);
            else
              n_36 = t;
            t = not_null(o_36);
            if(((q_36 != NULL) && (q_36 != t)))
              _fail(t);
            else
              q_36 = t;
            if(((r_36 != NULL) && (r_36 != t)))
              _fail(t);
            else
              r_36 = t;
            t = not_null(i_36);
            {
              static ATerm x_1 (ATerm t);
              static ATerm x_1 (ATerm t)
              {
                ATerm s_36 = NULL,t_36 = NULL;
                if(((t_36 != NULL) && (t_36 != t)))
                  _fail(t);
                else
                  t_36 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(t_36));
                if(((n_36 != NULL) && (n_36 != t)))
                  _fail(t);
                else
                  n_36 = t;
                return(t);
              }
              t = SRTS_one(x_1, t);
            }
            t = not_null(r_36);
            if(((p_36 != NULL) && (p_36 != t)))
              _fail(t);
            else
              p_36 = t;
            t = (ATerm) ATinsert(ATempty, not_null(p_36));
            return(t);
          }
          ATerm u_36 = NULL;
          if(((u_36 != NULL) && (u_36 != t)))
            _fail(t);
          else
            u_36 = t;
          t = v_36(not_null(u_36), t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(w_1, t);
  }
  if(((k_36 != NULL) && (k_36 != t)))
    _fail(t);
  else
    k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), not_null(k_36));
  t = diff_0_0(t);
  if(((l_36 != NULL) && (l_36 != t)))
    _fail(t);
  else
    l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(l_36));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((w_36 != NULL) && (w_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_36 = ATgetArgument(t, 0);
      if(((z_36 != NULL) && (z_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_36 = ATgetArgument(t, 1);
      if(((y_36 != NULL) && (y_36 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), not_null(z_36));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((d_37 != NULL) && (d_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_37 = ATgetArgument(t, 0);
      if(((x_36 != NULL) && (x_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_37);
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL;
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        {
          ATerm d_20 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_20;
            }
        }
        t = not_null(e_37);
        LocalPopChoice(c_20);
        t = h_151(t);
      }
    else
      {
        t = b_20;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_37 = NULL;
              if(((j_37 != NULL) && (j_37 != t)))
                _fail(t);
              else
                j_37 = t;
              t = not_null(y_36);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm g_20 = ATgetArgument(t, 0);
                  if(!(match_cons(g_20, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(j_37);
              LocalPopChoice(f_20);
              t = not_null(z_36);
              t = Hd_0_0(t);
              if(((a_37 != NULL) && (a_37 != t)))
                _fail(t);
              else
                a_37 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(a_37)));
            }
          else
            {
              t = e_20;
              t = i_151(t);
            }
        }
      }
  }
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(x_36));
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm r_37 = NULL;
  if(((r_37 != NULL) && (r_37 != t)))
    _fail(t);
  else
    r_37 = t;
  return(t);
}
ATerm diff_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_37 != NULL) && (m_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_37 = ATgetArgument(t, 0);
      if(((l_37 != NULL) && (l_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  t = not_null(m_37);
  {
    static ATerm s_37 (ATerm t);
    static ATerm s_37 (ATerm t)
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm y_1 (ATerm t);
                static ATerm y_1 (ATerm t)
                {
                  t = not_null(l_37);
                  return(t);
                }
                t = HdMember_p__2_0(j_127, y_1, t);
                t = s_37(t);
                LocalPopChoice(k_20);
              }
            else
              {
                t = j_20;
                t = Cons_2_0(z_1, s_37, t);
              }
          }
        }
      return(t);
    }
    t = s_37(t);
  }
  if(((n_37 != NULL) && (n_37 != t)))
    _fail(t);
  else
    n_37 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_37 != NULL) && (u_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_37 = ATgetArgument(t, 0);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
          {
            if(((t_37 != NULL) && (t_37 != ATgetFirst((ATermList) l_20))))
              _fail(ATgetFirst((ATermList) l_20));
            else
              t_37 = ATgetFirst((ATermList) l_20);
            if(((v_37 != NULL) && (v_37 != (ATerm) ATgetNext((ATermList) l_20))))
              _fail((ATerm) ATgetNext((ATermList) l_20));
            else
              v_37 = (ATerm) ATgetNext((ATermList) l_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_37)), not_null(t_37)), not_null(v_37));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_37 != NULL) && (w_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_37 = ATgetArgument(t, 0);
      if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(w_37));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
        {
          if(((y_37 != NULL) && (y_37 != ATgetFirst((ATermList) m_20))))
            _fail(ATgetFirst((ATermList) m_20));
          else
            y_37 = ATgetFirst((ATermList) m_20);
          if(((a_38 != NULL) && (a_38 != (ATerm) ATgetNext((ATermList) m_20))))
            _fail((ATerm) ATgetNext((ATermList) m_20));
          else
            a_38 = (ATerm) ATgetNext((ATermList) m_20);
        }
      else
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
          {
            if(((z_37 != NULL) && (z_37 != ATgetFirst((ATermList) n_20))))
              _fail(ATgetFirst((ATermList) n_20));
            else
              z_37 = ATgetFirst((ATermList) n_20);
            if(((b_38 != NULL) && (b_38 != (ATerm) ATgetNext((ATermList) n_20))))
              _fail((ATerm) ATgetNext((ATermList) n_20));
            else
              b_38 = (ATerm) ATgetNext((ATermList) n_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_37), not_null(z_37)), (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(b_38)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(((ATgetType(o_20) != AT_LIST) || !(ATisEmpty(o_20))))
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
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
  static ATerm c_38 (ATerm t);
  static ATerm c_38 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = i_125(t);
        t = _2_0(k_125, c_38, t);
        t = j_125(t);
      }
    return(t);
  }
  t = c_38(t);
  return(t);
}
ATerm zip_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, m_125, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_38 = NULL;
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_20 = ATgetFirst((ATermList) t);
      if(match_cons(s_20, sym__2))
        {
          if(((m_38 != NULL) && (m_38 != ATgetArgument(s_20, 0))))
            _fail(ATgetArgument(s_20, 0));
          else
            m_38 = ATgetArgument(s_20, 0);
          if(((p_38 != NULL) && (p_38 != ATgetArgument(s_20, 1))))
            _fail(ATgetArgument(s_20, 1));
          else
            p_38 = ATgetArgument(s_20, 1);
        }
      else
        _fail(t);
      if(((h_38 != NULL) && (h_38 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        h_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((q_38 != NULL) && (q_38 != t)))
    _fail(t);
  else
    q_38 = t;
  t = not_null(p_38);
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = SSL_explode_term(not_null(r_38));
  if(match_cons(t, sym__2))
    {
      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_38 = ATgetArgument(t, 0);
      if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_38);
  if(((n_38 != NULL) && (n_38 != t)))
    _fail(t);
  else
    n_38 = t;
  t = not_null(m_38);
  if(((o_38 != NULL) && (o_38 != t)))
    _fail(t);
  else
    o_38 = t;
  t = SSL_explode_term(not_null(o_38));
  if(match_cons(t, sym__2))
    {
      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_38 = ATgetArgument(t, 0);
      if(((f_38 != NULL) && (f_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_38);
  if(((j_38 != NULL) && (j_38 != t)))
    _fail(t);
  else
    j_38 = t;
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), not_null(g_38));
  t = zip_1_0(a_2, t);
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_38), not_null(h_38));
  t = conc_0_0(t);
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_20 = ATgetFirst((ATermList) t);
      if(match_cons(t_20, sym__2))
        {
          if(((t_38 != NULL) && (t_38 != ATgetArgument(t_20, 0))))
            _fail(ATgetArgument(t_20, 0));
          else
            t_38 = ATgetArgument(t_20, 0);
          if(((t_38 != NULL) && (t_38 != ATgetArgument(t_20, 1))))
            _fail(ATgetArgument(t_20, 1));
          else
            t_38 = ATgetArgument(t_20, 1);
        }
      else
        _fail(t);
      if(((u_38 != NULL) && (u_38 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        u_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(u_38);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm x_38 = NULL;
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_38));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = _2_0(e_2, Nil_0_0, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(f_2, g_2, t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_38 = NULL;
  if(((y_38 != NULL) && (y_38 != t)))
    _fail(t);
  else
    y_38 = t;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_38 = NULL;
  if(((z_38 != NULL) && (z_38 != t)))
    _fail(t);
  else
    z_38 = t;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_2, c_2, d_2, t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_39 != NULL) && (d_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_39 = ATgetArgument(t, 0);
      if(((c_39 != NULL) && (c_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_39 != NULL) && (g_39 != t)))
    _fail(t);
  else
    g_39 = t;
  t = Fst_0_0(t);
  {
    static ATerm h_2 (ATerm t);
    static ATerm h_2 (ATerm t)
    {
      ATerm h_39 = NULL,i_39 = NULL;
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm s_39 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm t);
          static ATerm s_39 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm t)
          {
            ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
            t = not_null(j_39);
            if(((h_39 != NULL) && (h_39 != t)))
              _fail(t);
            else
              h_39 = t;
            t = not_null(k_39);
            if(((i_39 != NULL) && (i_39 != t)))
              _fail(t);
            else
              i_39 = t;
            t = not_null(l_39);
            if(((n_39 != NULL) && (n_39 != t)))
              _fail(t);
            else
              n_39 = t;
            if(((o_39 != NULL) && (o_39 != t)))
              _fail(t);
            else
              o_39 = t;
            t = not_null(c_39);
            {
              static ATerm i_2 (ATerm t);
              static ATerm i_2 (ATerm t)
              {
                if(((h_39 != NULL) && (h_39 != t)))
                  _fail(t);
                else
                  h_39 = t;
                return(t);
              }
              t = SRTS_one(i_2, t);
            }
            t = not_null(o_39);
            if(((m_39 != NULL) && (m_39 != t)))
              _fail(t);
            else
              m_39 = t;
            t = (ATerm) ATinsert(ATempty, not_null(m_39));
            return(t);
          }
          ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
          if(((p_39 != NULL) && (p_39 != t)))
            _fail(t);
          else
            p_39 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((q_39 != NULL) && (q_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_39 = ATgetArgument(t, 0);
              if(((r_39 != NULL) && (r_39 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_39(not_null(q_39), not_null(r_39), not_null(p_39), t);
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(h_2, t);
  }
  if(((e_39 != NULL) && (e_39 != t)))
    _fail(t);
  else
    e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_39), not_null(e_39));
  t = diff_0_0(t);
  if(((f_39 != NULL) && (f_39 != t)))
    _fail(t);
  else
    f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(f_39));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm l_151 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,y_39 = NULL,z_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((y_39 != NULL) && (y_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_39 = ATgetArgument(t, 0);
      if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_39 = ATgetArgument(t, 1);
      if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_40 = ATgetArgument(t, 2);
      if(((t_39 != NULL) && (t_39 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        t_39 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((g_40 != NULL) && (g_40 != t)))
    _fail(t);
  else
    g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(z_39));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_40 != NULL) && (h_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_40 = ATgetArgument(t, 0);
      if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_40);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL;
        if(((i_40 != NULL) && (i_40 != t)))
          _fail(t);
        else
          i_40 = t;
        {
          ATerm e_21 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_21;
            }
        }
        t = not_null(i_40);
        LocalPopChoice(d_21);
        t = j_151(t);
      }
    else
      {
        t = c_21;
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_40 = NULL;
              if(((j_40 != NULL) && (j_40 != t)))
                _fail(t);
              else
                j_40 = t;
              t = not_null(e_40);
              {
                ATerm h_21 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_21;
                  }
              }
              t = not_null(j_40);
              LocalPopChoice(g_21);
              t = k_151(t);
            }
          else
            {
              t = f_21;
              t = l_151(t);
            }
        }
      }
  }
  if(((f_40 != NULL) && (f_40 != t)))
    _fail(t);
  else
    f_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_40), not_null(d_40));
  return(t);
}
static ATerm i_48 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,g_43 = NULL;
  t = not_null(l_42);
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  t = not_null(m_42);
  if(((y_42 != NULL) && (y_42 != t)))
    _fail(t);
  else
    y_42 = t;
  t = not_null(n_42);
  if(((w_42 != NULL) && (w_42 != t)))
    _fail(t);
  else
    w_42 = t;
  t = not_null(t_42);
  if(((v_42 != NULL) && (v_42 != t)))
    _fail(t);
  else
    v_42 = t;
  t = not_null(u_42);
  if(((g_43 != NULL) && (g_43 != t)))
    _fail(t);
  else
    g_43 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(v_42), not_null(x_42), not_null(y_42), not_null(w_42));
  {
    static ATerm k_2 (ATerm t);
    static ATerm k_2 (ATerm t)
    {
      static ATerm m_2 (ATerm t);
      static ATerm m_2 (ATerm t)
      {
        ATerm i_43 = NULL,j_43 = NULL;
        if(((j_43 != NULL) && (j_43 != t)))
          _fail(t);
        else
          j_43 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(z_42), not_null(j_43));
        return(t);
      }
      t = not_null(x_42);
      t = Hd_0_0(t);
      if(((z_42 != NULL) && (z_42 != t)))
        _fail(t);
      else
        z_42 = t;
      t = not_null(y_42);
      t = map_1_0(m_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(j_2, k_2, l_2, t);
  }
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
static ATerm j_48 (ATerm k_43, ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t = not_null(k_43);
  if(((r_43 != NULL) && (r_43 != t)))
    _fail(t);
  else
    r_43 = t;
  t = not_null(l_43);
  if(((s_43 != NULL) && (s_43 != t)))
    _fail(t);
  else
    s_43 = t;
  t = not_null(m_43);
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  t = not_null(n_43);
  if(((q_43 != NULL) && (q_43 != t)))
    _fail(t);
  else
    q_43 = t;
  t = not_null(o_43);
  if(((v_43 != NULL) && (v_43 != t)))
    _fail(t);
  else
    v_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(q_43), not_null(r_43), not_null(s_43));
  t = xtc_toption_to_args_2_0(n_2, o_2, t);
  if(match_cons(t, sym__2))
    {
      if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_43 = ATgetArgument(t, 0);
      if(((u_43 != NULL) && (u_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), not_null(u_43));
  return(t);
}
static ATerm k_48 (ATerm x_43, ATerm y_43, ATerm z_43, ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  t = not_null(x_43);
  if(((e_44 != NULL) && (e_44 != t)))
    _fail(t);
  else
    e_44 = t;
  t = not_null(y_43);
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = not_null(z_43);
  if(((d_44 != NULL) && (d_44 != t)))
    _fail(t);
  else
    d_44 = t;
  t = not_null(a_44);
  if(((c_44 != NULL) && (c_44 != t)))
    _fail(t);
  else
    c_44 = t;
  t = not_null(b_44);
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(c_44), not_null(e_44), not_null(f_44), not_null(d_44));
  {
    static ATerm q_2 (ATerm t);
    static ATerm q_2 (ATerm t)
    {
      static ATerm r_2 (ATerm t);
      static ATerm r_2 (ATerm t)
      {
        ATerm l_44 = NULL,m_44 = NULL;
        if(((m_44 != NULL) && (m_44 != t)))
          _fail(t);
        else
          m_44 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(g_44), not_null(m_44));
        return(t);
      }
      t = not_null(e_44);
      t = Hd_0_0(t);
      if(((g_44 != NULL) && (g_44 != t)))
        _fail(t);
      else
        g_44 = t;
      t = not_null(f_44);
      t = map_1_0(r_2, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(p_2, q_2, _fail, t);
  }
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
static ATerm l_48 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = not_null(n_44);
  if(((u_44 != NULL) && (u_44 != t)))
    _fail(t);
  else
    u_44 = t;
  t = not_null(o_44);
  if(((v_44 != NULL) && (v_44 != t)))
    _fail(t);
  else
    v_44 = t;
  t = not_null(p_44);
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = not_null(q_44);
  if(((t_44 != NULL) && (t_44 != t)))
    _fail(t);
  else
    t_44 = t;
  t = not_null(r_44);
  if(((y_44 != NULL) && (y_44 != t)))
    _fail(t);
  else
    y_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_44), not_null(u_44), not_null(v_44));
  t = xtc_toption_to_args_2_0(s_2, _fail, t);
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
static ATerm m_48 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  t = not_null(a_45);
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  t = not_null(b_45);
  if(((i_45 != NULL) && (i_45 != t)))
    _fail(t);
  else
    i_45 = t;
  t = not_null(c_45);
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  t = not_null(d_45);
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = not_null(e_45);
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(f_45), not_null(h_45), not_null(i_45), not_null(g_45));
  {
    static ATerm u_2 (ATerm t);
    static ATerm u_2 (ATerm t)
    {
      t = not_null(h_45);
      t = Hd_0_0(t);
      if(((j_45 != NULL) && (j_45 != t)))
        _fail(t);
      else
        j_45 = t;
      t = not_null(i_45);
      t = Hd_0_0(t);
      if(((k_45 != NULL) && (k_45 != t)))
        _fail(t);
      else
        k_45 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(j_45), not_null(k_45)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(t_2, u_2, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((l_45 != NULL) && (l_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_45 = ATgetArgument(t, 0);
      if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_45), not_null(m_45));
  return(t);
}
static ATerm o_48 (ATerm q_45, ATerm r_45, ATerm s_45, ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  t = not_null(q_45);
  if(((x_45 != NULL) && (x_45 != t)))
    _fail(t);
  else
    x_45 = t;
  t = not_null(r_45);
  if(((y_45 != NULL) && (y_45 != t)))
    _fail(t);
  else
    y_45 = t;
  t = not_null(s_45);
  if(((v_45 != NULL) && (v_45 != t)))
    _fail(t);
  else
    v_45 = t;
  t = not_null(t_45);
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = not_null(u_45);
  if(((b_46 != NULL) && (b_46 != t)))
    _fail(t);
  else
    b_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(w_45), not_null(x_45), not_null(y_45));
  t = xtc_toption_to_args_2_0(v_2, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((z_45 != NULL) && (z_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_45 = ATgetArgument(t, 0);
      if(((a_46 != NULL) && (a_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(a_46));
  return(t);
}
static ATerm q_48 (ATerm l_46, ATerm m_46, ATerm n_46, ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  t = not_null(l_46);
  if(((s_46 != NULL) && (s_46 != t)))
    _fail(t);
  else
    s_46 = t;
  t = not_null(m_46);
  if(((t_46 != NULL) && (t_46 != t)))
    _fail(t);
  else
    t_46 = t;
  t = not_null(n_46);
  if(((r_46 != NULL) && (r_46 != t)))
    _fail(t);
  else
    r_46 = t;
  t = not_null(o_46);
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  t = not_null(p_46);
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(q_46), not_null(s_46), not_null(t_46), not_null(r_46));
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      t = not_null(s_46);
      t = Hd_0_0(t);
      if(((u_46 != NULL) && (u_46 != t)))
        _fail(t);
      else
        u_46 = t;
      t = not_null(t_46);
      t = Hd_0_0(t);
      if(((v_46 != NULL) && (v_46 != t)))
        _fail(t);
      else
        v_46 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(u_46), not_null(v_46)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(w_2, x_2, y_2, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_46 = ATgetArgument(t, 0);
      if(((x_46 != NULL) && (x_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_46), not_null(x_46));
  return(t);
}
static ATerm r_48 (ATerm b_47, ATerm c_47, ATerm d_47, ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  t = not_null(b_47);
  if(((i_47 != NULL) && (i_47 != t)))
    _fail(t);
  else
    i_47 = t;
  t = not_null(c_47);
  if(((j_47 != NULL) && (j_47 != t)))
    _fail(t);
  else
    j_47 = t;
  t = not_null(d_47);
  if(((g_47 != NULL) && (g_47 != t)))
    _fail(t);
  else
    g_47 = t;
  t = not_null(e_47);
  if(((h_47 != NULL) && (h_47 != t)))
    _fail(t);
  else
    h_47 = t;
  t = not_null(f_47);
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_47), not_null(i_47), not_null(j_47));
  t = xtc_toption_to_args_2_0(z_2, a_3, t);
  if(match_cons(t, sym__2))
    {
      if(((k_47 != NULL) && (k_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_47 = ATgetArgument(t, 0);
      if(((l_47 != NULL) && (l_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_47), not_null(l_47));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm h_43 = NULL;
  if(((h_43 != NULL) && (h_43 != t)))
    _fail(t);
  else
    h_43 = t;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm w_43 = NULL;
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_44 = NULL;
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_44 = NULL;
  if(((z_44 != NULL) && (z_44 != t)))
    _fail(t);
  else
    z_44 = t;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  if(((p_45 != NULL) && (p_45 != t)))
    _fail(t);
  else
    p_45 = t;
  t = Hd_0_0(t);
  if(((o_45 != NULL) && (o_45 != t)))
    _fail(t);
  else
    o_45 = t;
  t = (ATerm) ATinsert(ATempty, not_null(o_45));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_46 = NULL,k_46 = NULL;
  if(((k_46 != NULL) && (k_46 != t)))
    _fail(t);
  else
    k_46 = t;
  t = Hd_0_0(t);
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(c_46));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  t = Hd_0_0(t);
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  t = (ATerm) ATinsert(ATempty, not_null(z_46));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  if(((o_47 != NULL) && (o_47 != t)))
    _fail(t);
  else
    o_47 = t;
  t = Hd_0_0(t);
  if(((n_47 != NULL) && (n_47 != t)))
    _fail(t);
  else
    n_47 = t;
  t = (ATerm) ATinsert(ATempty, not_null(n_47));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,w_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  if(((r_47 != NULL) && (r_47 != t)))
    _fail(t);
  else
    r_47 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_47 != NULL) && (w_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_47 = ATgetArgument(t, 0);
      if(((h_48 != NULL) && (h_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_47);
  if(match_cons(t, sym_TVarStar_4))
    {
      a_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
      c_48 = ATgetArgument(t, 2);
      f_48 = ATgetArgument(t, 3);
      t = not_null(a_48);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(c_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(e_48);
          if(match_cons(t, sym_Default_1))
            {
              if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(p_47);
          if(match_cons(t, sym_Values_1))
            {
              if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_48(not_null(b_48), not_null(q_47), not_null(g_48), not_null(h_48), not_null(r_47), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(c_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_48);
          if(match_cons(t, sym_Some_1))
            {
              if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_48(not_null(b_48), not_null(e_48), not_null(g_48), not_null(h_48), not_null(r_47), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          a_48 = ATgetArgument(t, 0);
          b_48 = ATgetArgument(t, 1);
          c_48 = ATgetArgument(t, 2);
          f_48 = ATgetArgument(t, 3);
          t = not_null(a_48);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(c_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(e_48);
              if(match_cons(t, sym_Default_1))
                {
                  if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(p_47);
              if(match_cons(t, sym_Values_1))
                {
                  if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(f_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_48(not_null(b_48), not_null(q_47), not_null(g_48), not_null(h_48), not_null(r_47), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(c_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(f_48);
              if(match_cons(t, sym_Some_1))
                {
                  if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_48(not_null(b_48), not_null(e_48), not_null(g_48), not_null(h_48), not_null(r_47), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              a_48 = ATgetArgument(t, 0);
              b_48 = ATgetArgument(t, 1);
              c_48 = ATgetArgument(t, 2);
              f_48 = ATgetArgument(t, 3);
              t = not_null(a_48);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(c_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(e_48);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(p_47);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_48(not_null(b_48), not_null(q_47), not_null(g_48), not_null(h_48), not_null(r_47), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(c_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_48(not_null(b_48), not_null(e_48), not_null(g_48), not_null(h_48), not_null(r_47), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((a_48 != NULL) && (a_48 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_48 = ATgetArgument(t, 0);
                  if(((b_48 != NULL) && (b_48 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_48 = ATgetArgument(t, 1);
                  if(((c_48 != NULL) && (c_48 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    c_48 = ATgetArgument(t, 2);
                  if(((f_48 != NULL) && (f_48 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    f_48 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(a_48);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(c_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(e_48);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(p_47);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_48(not_null(b_48), not_null(q_47), not_null(g_48), not_null(h_48), not_null(r_47), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(c_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_48 != NULL) && (e_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_48);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_48(not_null(b_48), not_null(e_48), not_null(g_48), not_null(h_48), not_null(r_47), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm k_3, ATerm t)
{
  static ATerm z_49 (ATerm f_49, ATerm g_49, ATerm t);
  static ATerm a_50 (ATerm n_49, ATerm t);
  static ATerm z_49 (ATerm f_49, ATerm g_49, ATerm t)
  {
    ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,m_49 = NULL;
    t = not_null(f_49);
    if(((h_49 != NULL) && (h_49 != t)))
      _fail(t);
    else
      h_49 = t;
    t = not_null(g_49);
    if(((j_49 != NULL) && (j_49 != t)))
      _fail(t);
    else
      j_49 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((m_49 != NULL) && (m_49 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_49 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(m_49);
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(h_49), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(i_49)))));
    return(t);
  }
  static ATerm a_50 (ATerm n_49, ATerm t)
  {
    ATerm o_49 = NULL,t_49 = NULL,u_49 = NULL;
    t = not_null(n_49);
    if(((t_49 != NULL) && (t_49 != t)))
      _fail(t);
    else
      t_49 = t;
    t = not_null(k_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((u_49 != NULL) && (u_49 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_49 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(u_49);
    if(((o_49 != NULL) && (o_49 != t)))
      _fail(t);
    else
      o_49 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_49)))));
    return(t);
  }
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  if(((w_49 != NULL) && (w_49 != t)))
    _fail(t);
  else
    w_49 = t;
  if(match_cons(t, sym_File_1))
    {
      x_49 = ATgetArgument(t, 0);
      t = not_null(x_49);
      if(match_cons(t, sym_Some_1))
        {
          v_49 = ATgetArgument(t, 0);
          t = z_49(not_null(v_49), not_null(w_49), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = a_50(not_null(w_49), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((x_49 != NULL) && (x_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(x_49);
      if(match_cons(t, sym_Some_1))
        {
          v_49 = ATgetArgument(t, 0);
          {
            ATerm y_49 = NULL;
            t = not_null(v_49);
            if(((y_49 != NULL) && (y_49 != t)))
              _fail(t);
            else
              y_49 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(y_49)));
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
  ATerm c_50 = NULL,d_50 = NULL;
  if(((c_50 != NULL) && (c_50 != t)))
    _fail(t);
  else
    c_50 = t;
  if(match_cons(t, sym_Error_1))
    {
      d_50 = ATgetArgument(t, 0);
      {
        ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
        t = not_null(d_50);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = not_null(c_50);
        if(((g_50 != NULL) && (g_50 != t)))
          _fail(t);
        else
          g_50 = t;
        t = not_null(e_50);
        t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
        if(((f_50 != NULL) && (f_50 != t)))
          _fail(t);
        else
          f_50 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          d_50 = ATgetArgument(t, 0);
          {
            ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
            t = not_null(d_50);
            if(((h_50 != NULL) && (h_50 != t)))
              _fail(t);
            else
              h_50 = t;
            t = not_null(c_50);
            if(((j_50 != NULL) && (j_50 != t)))
              _fail(t);
            else
              j_50 = t;
            t = not_null(h_50);
            t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
            if(((i_50 != NULL) && (i_50 != t)))
              _fail(t);
            else
              i_50 = t;
          }
        }
      else
        {
          ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(d_50);
          if(((k_50 != NULL) && (k_50 != t)))
            _fail(t);
          else
            k_50 = t;
          t = not_null(c_50);
          if(((m_50 != NULL) && (m_50 != t)))
            _fail(t);
          else
            m_50 = t;
          t = not_null(k_50);
          t = xtc_streamdef_to_arg_0_1(not_null(j_3), t);
          if(((l_50 != NULL) && (l_50 != t)))
            _fail(t);
          else
            l_50 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm n_50 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(match_cons(i_21, sym_Some_1))
        {
          if(((n_50 != NULL) && (n_50 != ATgetArgument(i_21, 0))))
            _fail(ATgetArgument(i_21, 0));
          else
            n_50 = ATgetArgument(i_21, 0);
        }
      else
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
      }
      {
        ATerm k_21 = ATgetArgument(t, 2);
      }
      {
        ATerm l_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(n_50);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm o_50 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((o_50 != NULL) && (o_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_50 = ATgetArgument(t, 0);
      {
        ATerm m_21 = ATgetArgument(t, 1);
      }
      {
        ATerm n_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(o_50);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((u_50 != NULL) && (u_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(u_50);
  if(match_cons(t, sym_HTTP_1))
    {
      v_50 = ATgetArgument(t, 0);
      {
        ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
        t = not_null(v_50);
        if(((w_50 != NULL) && (w_50 != t)))
          _fail(t);
        else
          w_50 = t;
        t = not_null(t_50);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = not_null(w_50);
        t = xtc_stream_input_0_0(t);
        if(((x_50 != NULL) && (x_50 != t)))
          _fail(t);
        else
          x_50 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_t_21;
        }
      else
        {
          ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(v_50);
          if(((z_50 != NULL) && (z_50 != t)))
            _fail(t);
          else
            z_50 = t;
          t = not_null(t_50);
          if(((b_51 != NULL) && (b_51 != t)))
            _fail(t);
          else
            b_51 = t;
          t = not_null(z_50);
          t = xtc_stream_input_0_0(t);
          if(((a_51 != NULL) && (a_51 != t)))
            _fail(t);
          else
            a_51 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      ATerm v_21 = ATgetArgument(t, 1);
      if(match_cons(v_21, sym_Some_1))
        {
          if(((c_51 != NULL) && (c_51 != ATgetArgument(v_21, 0))))
            _fail(ATgetArgument(v_21, 0));
          else
            c_51 = ATgetArgument(v_21, 0);
        }
      else
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 2);
      }
      {
        ATerm x_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(c_51);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm d_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(((d_51 != NULL) && (d_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_51 = ATgetArgument(t, 1);
      {
        ATerm z_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(d_51);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if(match_cons(a_22, sym_Exec_1))
        {
          if(((e_51 != NULL) && (e_51 != ATgetArgument(a_22, 0))))
            _fail(ATgetArgument(a_22, 0));
          else
            e_51 = ATgetArgument(a_22, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((g_51 != NULL) && (g_51 != t)))
    _fail(t);
  else
    g_51 = t;
  t = not_null(e_51);
  t = xtc_stream_output_0_0(t);
  if(((f_51 != NULL) && (f_51 != t)))
    _fail(t);
  else
    f_51 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm h_51 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      ATerm c_22 = ATgetArgument(t, 1);
      ATerm d_22 = ATgetArgument(t, 2);
      if(match_cons(d_22, sym_Some_1))
        {
          if(((h_51 != NULL) && (h_51 != ATgetArgument(d_22, 0))))
            _fail(ATgetArgument(d_22, 0));
          else
            h_51 = ATgetArgument(d_22, 0);
        }
      else
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(h_51);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      ATerm g_22 = ATgetArgument(t, 1);
      if(((i_51 != NULL) && (i_51 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(i_51);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(match_cons(h_22, sym_Exec_1))
        {
          if(((j_51 != NULL) && (j_51 != ATgetArgument(h_22, 0))))
            _fail(ATgetArgument(h_22, 0));
          else
            j_51 = ATgetArgument(h_22, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((l_51 != NULL) && (l_51 != t)))
    _fail(t);
  else
    l_51 = t;
  t = not_null(j_51);
  t = xtc_stream_error_0_0(t);
  if(((k_51 != NULL) && (k_51 != t)))
    _fail(t);
  else
    k_51 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm h_3, ATerm i_3, ATerm t)
{
  static ATerm r_52 (ATerm r_51, ATerm t);
  static ATerm s_52 (ATerm z_51, ATerm t);
  static ATerm t_52 (ATerm h_52, ATerm t);
  static ATerm r_52 (ATerm r_51, ATerm t)
  {
    ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
    t = not_null(r_51);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(h_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(u_51);
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    if(((y_51 != NULL) && (y_51 != t)))
      _fail(t);
    else
      y_51 = t;
    t = not_null(i_3);
    t = xtc_conf_error_0_0(t);
    if(((x_51 != NULL) && (x_51 != t)))
      _fail(t);
    else
      x_51 = t;
    if(((v_51 != NULL) && (v_51 != t)))
      _fail(t);
    else
      v_51 = t;
    t = not_null(w_51);
    t = xtc_stream_to_arg_0_1(not_null(v_51), t);
    if(((s_51 != NULL) && (s_51 != t)))
      _fail(t);
    else
      s_51 = t;
    return(t);
  }
  static ATerm s_52 (ATerm z_51, ATerm t)
  {
    ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
    t = not_null(z_51);
    if(((b_52 != NULL) && (b_52 != t)))
      _fail(t);
    else
      b_52 = t;
    t = not_null(h_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(c_52);
    if(((e_52 != NULL) && (e_52 != t)))
      _fail(t);
    else
      e_52 = t;
    if(((g_52 != NULL) && (g_52 != t)))
      _fail(t);
    else
      g_52 = t;
    t = not_null(i_3);
    t = xtc_conf_output_0_0(t);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    if(((d_52 != NULL) && (d_52 != t)))
      _fail(t);
    else
      d_52 = t;
    t = not_null(e_52);
    t = xtc_stream_to_arg_0_1(not_null(d_52), t);
    if(((a_52 != NULL) && (a_52 != t)))
      _fail(t);
    else
      a_52 = t;
    return(t);
  }
  static ATerm t_52 (ATerm h_52, ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
    t = not_null(h_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(h_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((k_52 != NULL) && (k_52 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(k_52);
    if(((m_52 != NULL) && (m_52 != t)))
      _fail(t);
    else
      m_52 = t;
    if(((o_52 != NULL) && (o_52 != t)))
      _fail(t);
    else
      o_52 = t;
    t = not_null(i_3);
    t = xtc_conf_input_0_0(t);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    if(((l_52 != NULL) && (l_52 != t)))
      _fail(t);
    else
      l_52 = t;
    t = not_null(m_52);
    t = xtc_stream_to_arg_0_1(not_null(l_52), t);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    return(t);
  }
  ATerm p_52 = NULL,q_52 = NULL;
  if(((p_52 != NULL) && (p_52 != t)))
    _fail(t);
  else
    p_52 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((q_52 != NULL) && (q_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_52);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_j_22);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = r_52(not_null(p_52), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = s_52(not_null(p_52), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = t_52(not_null(p_52), t);
            }
        }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm l_53 = NULL;
  if(((l_53 != NULL) && (l_53 != t)))
    _fail(t);
  else
    l_53 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(match_cons(k_22, sym_TOr_2))
        {
          if(((v_52 != NULL) && (v_52 != ATgetArgument(k_22, 0))))
            _fail(ATgetArgument(k_22, 0));
          else
            v_52 = ATgetArgument(k_22, 0);
          if(((w_52 != NULL) && (w_52 != ATgetArgument(k_22, 1))))
            _fail(ATgetArgument(k_22, 1));
          else
            w_52 = ATgetArgument(k_22, 1);
        }
      else
        _fail(t);
      if(((x_52 != NULL) && (x_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_53 != NULL) && (a_53 != t)))
    _fail(t);
  else
    a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_52), not_null(w_52));
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  t = term_l_22;
  if(((b_53 != NULL) && (b_53 != t)))
    _fail(t);
  else
    b_53 = t;
  t = not_null(e_53);
  t = dbg_0_1(not_null(b_53), t);
  {
    ATerm m_22 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_53 = NULL,g_53 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_52), not_null(x_52));
        t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
        if(((g_53 != NULL) && (g_53 != t)))
          _fail(t);
        else
          g_53 = t;
        t = term_y_23;
        if(((f_53 != NULL) && (f_53 != t)))
          _fail(t);
        else
          f_53 = t;
        t = not_null(g_53);
        t = dbg_0_1(not_null(f_53), t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = m_22;
        {
          ATerm h_53 = NULL,k_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), not_null(x_52));
          t = xtc_targ_thread_map_1_2(_fail, not_null(z_91), not_null(a_92), t);
          if(((k_53 != NULL) && (k_53 != t)))
            _fail(t);
          else
            k_53 = t;
          t = term_f_24;
          if(((h_53 != NULL) && (h_53 != t)))
            _fail(t);
          else
            h_53 = t;
          t = not_null(k_53);
          t = dbg_0_1(not_null(h_53), t);
        }
      }
  }
  t = _2_0(concat_0_0, b_3, t);
  if(match_cons(t, sym__2))
    {
      if(((y_52 != NULL) && (y_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_52 = ATgetArgument(t, 0);
      if(((z_52 != NULL) && (z_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_52), not_null(z_52));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm m_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
        _fail(t);
      if(((m_53 != NULL) && (m_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_53));
  return(t);
}
ATerm Cons_T_2_0 (ATerm l_1 (ATerm), ATerm o_1 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          if(((s_53 != NULL) && (s_53 != ATgetFirst((ATermList) i_26))))
            _fail(ATgetFirst((ATermList) i_26));
          else
            s_53 = ATgetFirst((ATermList) i_26);
          if(((t_53 != NULL) && (t_53 != (ATerm) ATgetNext((ATermList) i_26))))
            _fail((ATerm) ATgetNext((ATermList) i_26));
          else
            t_53 = (ATerm) ATgetNext((ATermList) i_26);
        }
      else
        _fail(t);
      if(((n_53 != NULL) && (n_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_53 != NULL) && (w_53 != t)))
    _fail(t);
  else
    w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_53), not_null(n_53));
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      if(((u_53 != NULL) && (u_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_53 = ATgetArgument(t, 0);
      if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_53), not_null(q_53));
  t = o_1(t);
  if(match_cons(t, sym__2))
    {
      if(((v_53 != NULL) && (v_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_53 = ATgetArgument(t, 0);
      if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_53)), not_null(u_53)), not_null(r_53));
  return(t);
}
ATerm thread_map_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  static ATerm x_53 (ATerm t);
  static ATerm x_53 (ATerm t)
  {
    ATerm j_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(t_130, x_53, t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = j_26;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = x_53(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm z_53 = NULL;
  if(((z_53 != NULL) && (z_53 != t)))
    _fail(t);
  else
    z_53 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm n_151 (ATerm), ATerm x_91, ATerm y_91, ATerm t)
{
  static ATerm c_3 (ATerm t);
  static ATerm c_3 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(x_91), not_null(y_91), t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        {
          ATerm a_27 = t;
          int q_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm d_3 (ATerm t);
              static ATerm d_3 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(x_91), not_null(y_91), t);
                return(t);
              }
              t = _2_0(d_3, e_3, t);
              LocalPopChoice(q_27);
            }
          else
            {
              t = a_27;
              {
                ATerm c_28 = t;
                int l_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(l_28);
                  }
                else
                  {
                    t = c_28;
                    t = n_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(c_3, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm a_54 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      ATerm z_28 = ATgetArgument(t, 1);
      ATerm a_29 = ATgetArgument(t, 2);
      if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        a_54 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(a_54);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  if(((h_54 != NULL) && (h_54 != t)))
    _fail(t);
  else
    h_54 = t;
  t = Snd_0_0(t);
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_54));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm k_54 = NULL;
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,p_54 = NULL;
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = Snd_0_0(t);
  if(((p_54 != NULL) && (p_54 != t)))
    _fail(t);
  else
    p_54 = t;
  t = term_b_29;
  if(((n_54 != NULL) && (n_54 != t)))
    _fail(t);
  else
    n_54 = t;
  t = not_null(p_54);
  t = err_0_1(not_null(n_54), t);
  t = not_null(m_54);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm c_29 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm d_29 = ATgetArgument(t, 0);
          if(!(match_cons(d_29, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_29;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm m_151 (ATerm), ATerm v_91, ATerm w_91, ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  if(((f_54 != NULL) && (f_54 != t)))
    _fail(t);
  else
    f_54 = t;
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = not_null(f_54);
  if(((e_54 != NULL) && (e_54 != t)))
    _fail(t);
  else
    e_54 = t;
  t = not_null(w_91);
  t = xtc_conf_args_0_0(t);
  if(((d_54 != NULL) && (d_54 != t)))
    _fail(t);
  else
    d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(d_54));
  t = xtc_targ_thread_map_1_2(f_3, not_null(v_91), not_null(w_91), t);
  t = _2_0(concat_0_0, g_3, t);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_54 = NULL;
        if(((l_54 != NULL) && (l_54 != t)))
          _fail(t);
        else
          l_54 = t;
        t = Snd_0_0(t);
        {
          ATerm c_30 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_30;
            }
        }
        t = not_null(l_54);
        LocalPopChoice(b_30);
        t = restore_2_0(m_151, n_3, t);
      }
    else
      {
        t = a_30;
        t = Fst_0_0(t);
        t = filter_1_0(o_3, t);
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm e_30 = ATgetArgument(t, 0);
          if(!(match_cons(e_30, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  if(((t_54 != NULL) && (t_54 != t)))
    _fail(t);
  else
    t_54 = t;
  t = filter_1_0(p_3, t);
  if(((s_54 != NULL) && (s_54 != t)))
    _fail(t);
  else
    s_54 = t;
  {
    ATerm f_30 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_54 = NULL;
        if(((u_54 != NULL) && (u_54 != t)))
          _fail(t);
        else
          u_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), not_null(s_54));
        {
          ATerm v_31 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_31;
            }
        }
        t = not_null(u_54);
        LocalPopChoice(m_31);
        {
          ATerm v_54 = NULL,w_54 = NULL;
          if(((w_54 != NULL) && (w_54 != t)))
            _fail(t);
          else
            w_54 = t;
          t = term_w_31;
          if(((v_54 != NULL) && (v_54 != t)))
            _fail(t);
          else
            v_54 = t;
          t = not_null(w_54);
          t = err_0_1(not_null(v_54), t);
        }
      }
    else
      {
        t = f_30;
        {
          ATerm x_54 = NULL;
          if(((x_54 != NULL) && (x_54 != t)))
            _fail(t);
          else
            x_54 = t;
        }
      }
  }
  t = not_null(s_54);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm d_1, ATerm f_1, ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  if(((k_55 != NULL) && (k_55 != t)))
    _fail(t);
  else
    k_55 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((l_55 != NULL) && (l_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_55 = ATgetArgument(t, 0);
      if(((m_55 != NULL) && (m_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_55);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm p_55 = NULL,t_55 = NULL,u_55 = NULL;
      t = not_null(m_55);
      if(match_cons(t, sym_Some_1))
        {
          if(((n_55 != NULL) && (n_55 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_55);
      if(match_cons(t, sym_Layout_1))
        {
          if(((o_55 != NULL) && (o_55 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_55);
      if(((p_55 != NULL) && (p_55 != t)))
        _fail(t);
      else
        p_55 = t;
      t = not_null(k_55);
      if(((u_55 != NULL) && (u_55 != t)))
        _fail(t);
      else
        u_55 = t;
      t = not_null(p_55);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(d_1), not_null(f_1), t);
      if(((t_55 != NULL) && (t_55 != t)))
        _fail(t);
      else
        t_55 = t;
    }
  else
    {
      ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(m_55);
      if(match_cons(t, sym_Some_1))
        {
          if(((n_55 != NULL) && (n_55 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_55);
      if(match_cons(t, sym_Layout_1))
        {
          if(((o_55 != NULL) && (o_55 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_55);
      if(((v_55 != NULL) && (v_55 != t)))
        _fail(t);
      else
        v_55 = t;
      t = not_null(k_55);
      if(((x_55 != NULL) && (x_55 != t)))
        _fail(t);
      else
        x_55 = t;
      t = not_null(v_55);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(d_1), not_null(f_1), t);
      if(((w_55 != NULL) && (w_55 != t)))
        _fail(t);
      else
        w_55 = t;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm j_56 = NULL;
  if(((j_56 != NULL) && (j_56 != t)))
    _fail(t);
  else
    j_56 = t;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm k_56 = NULL;
  if(((k_56 != NULL) && (k_56 != t)))
    _fail(t);
  else
    k_56 = t;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_56 = NULL;
  if(((x_56 != NULL) && (x_56 != t)))
    _fail(t);
  else
    x_56 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm p_92, ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  static ATerm t_3 (ATerm t);
  static ATerm t_3 (ATerm t)
  {
    t = not_null(h_56);
    t = xtc_template_to_args_0_2(not_null(i_56), not_null(p_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_56 = ATgetArgument(t, 0);
      if(((h_56 != NULL) && (h_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_92);
  t = XtcConf_4_0(q_3, r_3, s_3, t_3, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  if(((n_57 != NULL) && (n_57 != t)))
    _fail(t);
  else
    n_57 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      o_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
      q_57 = ATgetArgument(t, 2);
      r_57 = ATgetArgument(t, 3);
      t = not_null(q_57);
      if(match_cons(t, sym_Some_1))
        {
          l_57 = ATgetArgument(t, 0);
          {
            ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL;
            t = not_null(r_57);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(o_57);
            if(((s_57 != NULL) && (s_57 != t)))
              _fail(t);
            else
              s_57 = t;
            t = not_null(p_57);
            if(((t_57 != NULL) && (t_57 != t)))
              _fail(t);
            else
              t_57 = t;
            t = not_null(l_57);
            if(((u_57 != NULL) && (u_57 != t)))
              _fail(t);
            else
              u_57 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(s_57), not_null(t_57), (ATerm)ATmakeAppl(sym_Some_1, not_null(u_57)), term_z_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(r_57);
          if(match_cons(t, sym_Some_1))
            {
              m_57 = ATgetArgument(t, 0);
              {
                ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
                t = not_null(o_57);
                if(((v_57 != NULL) && (v_57 != t)))
                  _fail(t);
                else
                  v_57 = t;
                t = not_null(p_57);
                if(((w_57 != NULL) && (w_57 != t)))
                  _fail(t);
                else
                  w_57 = t;
                t = not_null(m_57);
                if(((x_57 != NULL) && (x_57 != t)))
                  _fail(t);
                else
                  x_57 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(v_57), not_null(w_57), term_h_33, (ATerm) ATmakeAppl(sym_Some_1, not_null(x_57)));
              }
            }
          else
            {
              ATerm y_57 = NULL,z_57 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(o_57);
              if(((y_57 != NULL) && (y_57 != t)))
                _fail(t);
              else
                y_57 = t;
              t = not_null(p_57);
              if(((z_57 != NULL) && (z_57 != t)))
                _fail(t);
              else
                z_57 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(y_57), not_null(z_57), term_h_33, term_z_31);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          o_57 = ATgetArgument(t, 0);
          p_57 = ATgetArgument(t, 1);
          q_57 = ATgetArgument(t, 2);
          r_57 = ATgetArgument(t, 3);
          t = not_null(q_57);
          if(match_cons(t, sym_Some_1))
            {
              l_57 = ATgetArgument(t, 0);
              {
                ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
                t = not_null(r_57);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(o_57);
                if(((a_58 != NULL) && (a_58 != t)))
                  _fail(t);
                else
                  a_58 = t;
                t = not_null(p_57);
                if(((b_58 != NULL) && (b_58 != t)))
                  _fail(t);
                else
                  b_58 = t;
                t = not_null(l_57);
                if(((c_58 != NULL) && (c_58 != t)))
                  _fail(t);
                else
                  c_58 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(a_58), not_null(b_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(c_58)), term_z_31);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(r_57);
              if(match_cons(t, sym_Some_1))
                {
                  m_57 = ATgetArgument(t, 0);
                  {
                    ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
                    t = not_null(o_57);
                    if(((d_58 != NULL) && (d_58 != t)))
                      _fail(t);
                    else
                      d_58 = t;
                    t = not_null(p_57);
                    if(((e_58 != NULL) && (e_58 != t)))
                      _fail(t);
                    else
                      e_58 = t;
                    t = not_null(m_57);
                    if(((f_58 != NULL) && (f_58 != t)))
                      _fail(t);
                    else
                      f_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(d_58), not_null(e_58), term_h_33, (ATerm) ATmakeAppl(sym_Some_1, not_null(f_58)));
                  }
                }
              else
                {
                  ATerm g_58 = NULL,h_58 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(o_57);
                  if(((g_58 != NULL) && (g_58 != t)))
                    _fail(t);
                  else
                    g_58 = t;
                  t = not_null(p_57);
                  if(((h_58 != NULL) && (h_58 != t)))
                    _fail(t);
                  else
                    h_58 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(g_58), not_null(h_58), term_h_33, term_z_31);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              o_57 = ATgetArgument(t, 0);
              p_57 = ATgetArgument(t, 1);
              q_57 = ATgetArgument(t, 2);
              r_57 = ATgetArgument(t, 3);
              t = not_null(q_57);
              if(match_cons(t, sym_Some_1))
                {
                  l_57 = ATgetArgument(t, 0);
                  {
                    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
                    t = not_null(r_57);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(o_57);
                    if(((i_58 != NULL) && (i_58 != t)))
                      _fail(t);
                    else
                      i_58 = t;
                    t = not_null(p_57);
                    if(((j_58 != NULL) && (j_58 != t)))
                      _fail(t);
                    else
                      j_58 = t;
                    t = not_null(l_57);
                    if(((k_58 != NULL) && (k_58 != t)))
                      _fail(t);
                    else
                      k_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(i_58), not_null(j_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(k_58)), term_z_31);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(r_57);
                  if(match_cons(t, sym_Some_1))
                    {
                      m_57 = ATgetArgument(t, 0);
                      {
                        ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
                        t = not_null(o_57);
                        if(((l_58 != NULL) && (l_58 != t)))
                          _fail(t);
                        else
                          l_58 = t;
                        t = not_null(p_57);
                        if(((m_58 != NULL) && (m_58 != t)))
                          _fail(t);
                        else
                          m_58 = t;
                        t = not_null(m_57);
                        if(((n_58 != NULL) && (n_58 != t)))
                          _fail(t);
                        else
                          n_58 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(l_58), not_null(m_58), term_h_33, (ATerm) ATmakeAppl(sym_Some_1, not_null(n_58)));
                      }
                    }
                  else
                    {
                      ATerm o_58 = NULL,p_58 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(o_57);
                      if(((o_58 != NULL) && (o_58 != t)))
                        _fail(t);
                      else
                        o_58 = t;
                      t = not_null(p_57);
                      if(((p_58 != NULL) && (p_58 != t)))
                        _fail(t);
                      else
                        p_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(o_58), not_null(p_58), term_h_33, term_z_31);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((o_57 != NULL) && (o_57 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_57 = ATgetArgument(t, 0);
                  if(((p_57 != NULL) && (p_57 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    p_57 = ATgetArgument(t, 1);
                  if(((q_57 != NULL) && (q_57 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    q_57 = ATgetArgument(t, 2);
                  if(((r_57 != NULL) && (r_57 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    r_57 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(q_57);
              if(match_cons(t, sym_Some_1))
                {
                  l_57 = ATgetArgument(t, 0);
                  {
                    ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
                    t = not_null(r_57);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(o_57);
                    if(((q_58 != NULL) && (q_58 != t)))
                      _fail(t);
                    else
                      q_58 = t;
                    t = not_null(p_57);
                    if(((r_58 != NULL) && (r_58 != t)))
                      _fail(t);
                    else
                      r_58 = t;
                    t = not_null(l_57);
                    if(((s_58 != NULL) && (s_58 != t)))
                      _fail(t);
                    else
                      s_58 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(q_58), not_null(r_58), (ATerm)ATmakeAppl(sym_Some_1, not_null(s_58)), term_z_31);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(r_57);
                  if(match_cons(t, sym_Some_1))
                    {
                      m_57 = ATgetArgument(t, 0);
                      {
                        ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
                        t = not_null(o_57);
                        if(((t_58 != NULL) && (t_58 != t)))
                          _fail(t);
                        else
                          t_58 = t;
                        t = not_null(p_57);
                        if(((u_58 != NULL) && (u_58 != t)))
                          _fail(t);
                        else
                          u_58 = t;
                        t = not_null(m_57);
                        if(((v_58 != NULL) && (v_58 != t)))
                          _fail(t);
                        else
                          v_58 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(t_58), not_null(u_58), term_h_33, (ATerm) ATmakeAppl(sym_Some_1, not_null(v_58)));
                      }
                    }
                  else
                    {
                      ATerm w_58 = NULL,x_58 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(o_57);
                      if(((w_58 != NULL) && (w_58 != t)))
                        _fail(t);
                      else
                        w_58 = t;
                      t = not_null(p_57);
                      if(((x_58 != NULL) && (x_58 != t)))
                        _fail(t);
                      else
                        x_58 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(w_58), not_null(x_58), term_h_33, term_z_31);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(((f_59 != NULL) && (f_59 != t)))
    _fail(t);
  else
    f_59 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((g_59 != NULL) && (g_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_59 = ATgetArgument(t, 0);
      if(((h_59 != NULL) && (h_59 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_59);
  if(match_cons(t, sym_Some_1))
    {
      d_59 = ATgetArgument(t, 0);
      {
        ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
        t = not_null(g_59);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(d_59);
        if(match_cons(t, sym_Layout_1))
          {
            if(((e_59 != NULL) && (e_59 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(e_59);
        if(((i_59 != NULL) && (i_59 != t)))
          _fail(t);
        else
          i_59 = t;
        t = not_null(f_59);
        if(((k_59 != NULL) && (k_59 != t)))
          _fail(t);
        else
          k_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_22), term_n_33), term_l_33), term_j_33), not_null(i_59));
        t = union_0_0(t);
        if(((j_59 != NULL) && (j_59 != t)))
          _fail(t);
        else
          j_59 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_o_33, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(j_59))));
      }
    }
  else
    {
      ATerm l_59 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(g_59);
      if(((l_59 != NULL) && (l_59 != t)))
        _fail(t);
      else
        l_59 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(l_59), term_q_33);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if(!(match_cons(r_33, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_h_34;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    t = bottomup_1_0(v_116, t);
    return(t);
  }
  t = SRTS_all(u_3, t);
  t = v_116(t);
  return(t);
}
ATerm innermost_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t);
  static ATerm v_3 (ATerm t)
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      t = a_121(t);
      t = innermost_1_0(a_121, t);
      return(t);
    }
    t = try_1_0(w_3, t);
    return(t);
  }
  t = bottomup_1_0(v_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm k_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = k_34;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(x_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm n_59 = NULL;
  if(((n_59 != NULL) && (n_59 != t)))
    _fail(t);
  else
    n_59 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  static ATerm z_59 (ATerm t);
  static ATerm z_59 (ATerm t)
  {
    ATerm t_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_3, z_59, t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = t_34;
        t = Nil_0_0(t);
        t = u_123(t);
      }
    return(t);
  }
  t = z_59(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
        if(((b_60 != NULL) && (b_60 != t)))
          _fail(t);
        else
          b_60 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_60 != NULL) && (c_60 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_60 = ATgetFirst((ATermList) t);
            if(((d_60 != NULL) && (d_60 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_60);
        if(((e_60 != NULL) && (e_60 != t)))
          _fail(t);
        else
          e_60 = t;
        t = not_null(d_60);
        if(((f_60 != NULL) && (f_60 != t)))
          _fail(t);
        else
          f_60 = t;
        t = not_null(b_60);
        if(((h_60 != NULL) && (h_60 != t)))
          _fail(t);
        else
          h_60 = t;
        t = not_null(e_60);
        {
          static ATerm z_3 (ATerm t);
          static ATerm z_3 (ATerm t)
          {
            t = not_null(f_60);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_3, t);
        }
        if(((g_60 != NULL) && (g_60 != t)))
          _fail(t);
        else
          g_60 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm z_63 (ATerm x_60, ATerm y_60, ATerm z_60, ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  t = not_null(x_60);
  if(((a_61 != NULL) && (a_61 != t)))
    _fail(t);
  else
    a_61 = t;
  t = not_null(y_60);
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(z_60);
  if(((d_61 != NULL) && (d_61 != t)))
    _fail(t);
  else
    d_61 = t;
  t = not_null(a_61);
  t = is_string_0_0(t);
  t = not_null(b_61);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(a_4, t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = XtcQuery_2_0(b_4, c_4, t);
      }
  }
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_61 = NULL;
        if(((h_61 != NULL) && (h_61 != t)))
          _fail(t);
        else
          h_61 = t;
        t = xtc_find_0_0(t);
        if(((c_61 != NULL) && (c_61 != t)))
          _fail(t);
        else
          c_61 = t;
        t = not_null(h_61);
        LocalPopChoice(h_35);
        {
          ATerm i_61 = NULL,j_61 = NULL;
          if(((j_61 != NULL) && (j_61 != t)))
            _fail(t);
          else
            j_61 = t;
          t = term_k_35;
          if(((i_61 != NULL) && (i_61 != t)))
            _fail(t);
          else
            i_61 = t;
          t = not_null(j_61);
          t = dbg_0_1(not_null(i_61), t);
        }
      }
    else
      {
        t = g_35;
        {
          ATerm k_61 = NULL,l_61 = NULL;
          if(((l_61 != NULL) && (l_61 != t)))
            _fail(t);
          else
            l_61 = t;
          t = term_l_35;
          if(((k_61 != NULL) && (k_61 != t)))
            _fail(t);
          else
            k_61 = t;
          t = not_null(l_61);
          t = err_0_1(not_null(k_61), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(a_61)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(c_61)))));
  return(t);
}
static ATerm a_64 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  t = not_null(m_61);
  if(((o_61 != NULL) && (o_61 != t)))
    _fail(t);
  else
    o_61 = t;
  t = not_null(n_61);
  if(((q_61 != NULL) && (q_61 != t)))
    _fail(t);
  else
    q_61 = t;
  t = not_null(o_61);
  {
    ATerm h_36 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(d_4, t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = h_36;
        t = XtcQuery_2_0(e_4, f_4, t);
      }
  }
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_61 = NULL;
        if(((u_61 != NULL) && (u_61 != t)))
          _fail(t);
        else
          u_61 = t;
        t = xtc_find_0_0(t);
        if(((p_61 != NULL) && (p_61 != t)))
          _fail(t);
        else
          p_61 = t;
        t = not_null(u_61);
        LocalPopChoice(h_37);
        {
          ATerm v_61 = NULL,w_61 = NULL;
          if(((w_61 != NULL) && (w_61 != t)))
            _fail(t);
          else
            w_61 = t;
          t = term_k_35;
          if(((v_61 != NULL) && (v_61 != t)))
            _fail(t);
          else
            v_61 = t;
          t = not_null(w_61);
          t = dbg_0_1(not_null(v_61), t);
        }
      }
    else
      {
        t = g_37;
        {
          ATerm x_61 = NULL,y_61 = NULL;
          if(((y_61 != NULL) && (y_61 != t)))
            _fail(t);
          else
            y_61 = t;
          t = term_l_35;
          if(((x_61 != NULL) && (x_61 != t)))
            _fail(t);
          else
            x_61 = t;
          t = not_null(y_61);
          t = err_0_1(not_null(x_61), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(p_61)))));
  return(t);
}
static ATerm b_64 (ATerm z_61, ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
  t = not_null(z_61);
  if(((a_62 != NULL) && (a_62 != t)))
    _fail(t);
  else
    a_62 = t;
  t = not_null(z_61);
  if(((c_62 != NULL) && (c_62 != t)))
    _fail(t);
  else
    c_62 = t;
  t = not_null(a_62);
  if(match_cons(t, sym_URL_1))
    {
      if(((d_62 != NULL) && (d_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_62);
  if(((b_62 != NULL) && (b_62 != t)))
    _fail(t);
  else
    b_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(b_62)))));
  return(t);
}
static ATerm c_64 (ATerm e_62, ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  t = not_null(e_62);
  if(((f_62 != NULL) && (f_62 != t)))
    _fail(t);
  else
    f_62 = t;
  t = not_null(e_62);
  if(((h_62 != NULL) && (h_62 != t)))
    _fail(t);
  else
    h_62 = t;
  t = not_null(f_62);
  if(match_cons(t, sym_FILE_1))
    {
      if(((i_62 != NULL) && (i_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_62);
  if(((g_62 != NULL) && (g_62 != t)))
    _fail(t);
  else
    g_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_62)))));
  return(t);
}
static ATerm d_64 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  t = not_null(j_62);
  if(((m_62 != NULL) && (m_62 != t)))
    _fail(t);
  else
    m_62 = t;
  t = not_null(k_62);
  if(((n_62 != NULL) && (n_62 != t)))
    _fail(t);
  else
    n_62 = t;
  t = not_null(l_62);
  if(((p_62 != NULL) && (p_62 != t)))
    _fail(t);
  else
    p_62 = t;
  t = not_null(m_62);
  t = is_string_0_0(t);
  t = not_null(n_62);
  if(match_cons(t, sym_URL_1))
    {
      if(((q_62 != NULL) && (q_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_62);
  if(((o_62 != NULL) && (o_62 != t)))
    _fail(t);
  else
    o_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(m_62)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_62)))));
  return(t);
}
static ATerm e_64 (ATerm r_62, ATerm s_62, ATerm t_62, ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  t = not_null(r_62);
  if(((u_62 != NULL) && (u_62 != t)))
    _fail(t);
  else
    u_62 = t;
  t = not_null(s_62);
  if(((v_62 != NULL) && (v_62 != t)))
    _fail(t);
  else
    v_62 = t;
  t = not_null(t_62);
  if(((x_62 != NULL) && (x_62 != t)))
    _fail(t);
  else
    x_62 = t;
  t = not_null(u_62);
  t = is_string_0_0(t);
  t = not_null(v_62);
  if(match_cons(t, sym_FILE_1))
    {
      if(((y_62 != NULL) && (y_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(y_62);
  if(((w_62 != NULL) && (w_62 != t)))
    _fail(t);
  else
    w_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(u_62)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(w_62)))));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_61 = NULL;
  if(((e_61 != NULL) && (e_61 != t)))
    _fail(t);
  else
    e_61 = t;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm f_61 = NULL;
  if(((f_61 != NULL) && (f_61 != t)))
    _fail(t);
  else
    f_61 = t;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm g_61 = NULL;
  if(((g_61 != NULL) && (g_61 != t)))
    _fail(t);
  else
    g_61 = t;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_61 = NULL;
  if(((r_61 != NULL) && (r_61 != t)))
    _fail(t);
  else
    r_61 = t;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm s_61 = NULL;
  if(((s_61 != NULL) && (s_61 != t)))
    _fail(t);
  else
    s_61 = t;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_61 = NULL;
  if(((t_61 != NULL) && (t_61 != t)))
    _fail(t);
  else
    t_61 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      b_63 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
      t = not_null(b_63);
      if(match_cons(t, sym_String_1))
        {
          z_62 = ATgetArgument(t, 0);
          {
            ATerm i_37 = t;
            int k_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_63(not_null(z_62), not_null(c_63), not_null(a_63), t);
                LocalPopChoice(k_37);
              }
            else
              {
                t = i_37;
                {
                  ATerm p_37 = t;
                  int q_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_64(not_null(a_63), t);
                      LocalPopChoice(q_37);
                    }
                  else
                    {
                      t = p_37;
                      {
                        ATerm d_38 = t;
                        int v_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_64(not_null(a_63), t);
                            LocalPopChoice(v_38);
                          }
                        else
                          {
                            t = d_38;
                            {
                              ATerm d_63 = NULL,e_63 = NULL;
                              t = not_null(a_63);
                              if(((d_63 != NULL) && (d_63 != t)))
                                _fail(t);
                              else
                                d_63 = t;
                              t = not_null(a_63);
                              if(((e_63 != NULL) && (e_63 != t)))
                                _fail(t);
                              else
                                e_63 = t;
                              t = not_null(d_63);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(d_63))));
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
          ATerm w_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_64(not_null(a_63), t);
              LocalPopChoice(a_39);
            }
          else
            {
              t = w_38;
              {
                ATerm b_39 = t;
                int u_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_64(not_null(a_63), t);
                    LocalPopChoice(u_39);
                  }
                else
                  {
                    t = b_39;
                    {
                      ATerm f_63 = NULL,g_63 = NULL;
                      t = not_null(a_63);
                      if(((f_63 != NULL) && (f_63 != t)))
                        _fail(t);
                      else
                        f_63 = t;
                      t = not_null(a_63);
                      if(((g_63 != NULL) && (g_63 != t)))
                        _fail(t);
                      else
                        g_63 = t;
                      t = not_null(f_63);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(f_63))));
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
          b_63 = ATgetArgument(t, 0);
          {
            ATerm v_39 = t;
            int w_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_64(not_null(b_63), not_null(a_63), t);
                LocalPopChoice(w_39);
              }
            else
              {
                t = v_39;
                {
                  ATerm x_39 = t;
                  int a_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_64(not_null(a_63), t);
                      LocalPopChoice(a_40);
                    }
                  else
                    {
                      t = x_39;
                      {
                        ATerm b_40 = t;
                        int c_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_64(not_null(a_63), t);
                            LocalPopChoice(c_40);
                          }
                        else
                          {
                            t = b_40;
                            {
                              ATerm h_63 = NULL,i_63 = NULL;
                              t = not_null(a_63);
                              if(((h_63 != NULL) && (h_63 != t)))
                                _fail(t);
                              else
                                h_63 = t;
                              t = not_null(a_63);
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
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              b_63 = ATgetArgument(t, 0);
              c_63 = ATgetArgument(t, 1);
              {
                ATerm k_40 = t;
                int l_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_64(not_null(a_63), t);
                    LocalPopChoice(l_40);
                  }
                else
                  {
                    t = k_40;
                    {
                      ATerm m_40 = t;
                      int n_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_64(not_null(a_63), t);
                          LocalPopChoice(n_40);
                        }
                      else
                        {
                          t = m_40;
                          {
                            ATerm o_40 = t;
                            int p_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_63 = NULL,l_63 = NULL;
                                t = not_null(a_63);
                                if(((j_63 != NULL) && (j_63 != t)))
                                  _fail(t);
                                else
                                  j_63 = t;
                                t = not_null(a_63);
                                if(((l_63 != NULL) && (l_63 != t)))
                                  _fail(t);
                                else
                                  l_63 = t;
                                t = not_null(j_63);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(j_63))));
                                LocalPopChoice(p_40);
                              }
                            else
                              {
                                t = o_40;
                                {
                                  ATerm q_40 = t;
                                  int r_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_64(not_null(b_63), not_null(c_63), not_null(a_63), t);
                                      LocalPopChoice(r_40);
                                    }
                                  else
                                    {
                                      t = q_40;
                                      {
                                        ATerm s_40 = t;
                                        int t_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_64(not_null(b_63), not_null(c_63), not_null(a_63), t);
                                            LocalPopChoice(t_40);
                                          }
                                        else
                                          {
                                            t = s_40;
                                            {
                                              ATerm u_40 = t;
                                              int v_40 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
                                                  t = not_null(b_63);
                                                  if(((m_63 != NULL) && (m_63 != t)))
                                                    _fail(t);
                                                  else
                                                    m_63 = t;
                                                  t = not_null(c_63);
                                                  if(((n_63 != NULL) && (n_63 != t)))
                                                    _fail(t);
                                                  else
                                                    n_63 = t;
                                                  t = not_null(a_63);
                                                  if(((o_63 != NULL) && (o_63 != t)))
                                                    _fail(t);
                                                  else
                                                    o_63 = t;
                                                  t = not_null(m_63);
                                                  t = is_string_0_0(t);
                                                  t = not_null(n_63);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(m_63)), (ATerm) ATmakeAppl(sym_String_1, not_null(n_63))));
                                                  LocalPopChoice(v_40);
                                                }
                                              else
                                                {
                                                  t = u_40;
                                                  {
                                                    ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
                                                    t = not_null(b_63);
                                                    if(((q_63 != NULL) && (q_63 != t)))
                                                      _fail(t);
                                                    else
                                                      q_63 = t;
                                                    t = not_null(c_63);
                                                    if(((p_63 != NULL) && (p_63 != t)))
                                                      _fail(t);
                                                    else
                                                      p_63 = t;
                                                    t = not_null(a_63);
                                                    if(((s_63 != NULL) && (s_63 != t)))
                                                      _fail(t);
                                                    else
                                                      s_63 = t;
                                                    t = not_null(q_63);
                                                    t = is_string_0_0(t);
                                                    t = not_null(p_63);
                                                    {
                                                      static ATerm g_4 (ATerm t);
                                                      static ATerm g_4 (ATerm t)
                                                      {
                                                        ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
                                                        if(((u_63 != NULL) && (u_63 != t)))
                                                          _fail(t);
                                                        else
                                                          u_63 = t;
                                                        if(((w_63 != NULL) && (w_63 != t)))
                                                          _fail(t);
                                                        else
                                                          w_63 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), not_null(u_63));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((v_63 != NULL) && (v_63 != t)))
                                                          _fail(t);
                                                        else
                                                          v_63 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(g_4, t);
                                                    }
                                                    if(((r_63 != NULL) && (r_63 != t)))
                                                      _fail(t);
                                                    else
                                                      r_63 = t;
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
              ATerm w_40 = t;
              int x_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_64(not_null(a_63), t);
                  LocalPopChoice(x_40);
                }
              else
                {
                  t = w_40;
                  {
                    ATerm y_40 = t;
                    int z_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_64(not_null(a_63), t);
                        LocalPopChoice(z_40);
                      }
                    else
                      {
                        t = y_40;
                        {
                          ATerm x_63 = NULL,y_63 = NULL;
                          t = not_null(a_63);
                          if(((x_63 != NULL) && (x_63 != t)))
                            _fail(t);
                          else
                            x_63 = t;
                          t = not_null(a_63);
                          if(((y_63 != NULL) && (y_63 != t)))
                            _fail(t);
                          else
                            y_63 = t;
                          t = not_null(x_63);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(x_63))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
        ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
        if(((w_64 != NULL) && (w_64 != t)))
          _fail(t);
        else
          w_64 = t;
        if(((y_64 != NULL) && (y_64 != t)))
          _fail(t);
        else
          y_64 = t;
        t = not_null(w_64);
        if(((x_64 != NULL) && (x_64 != t)))
          _fail(t);
        else
          x_64 = t;
        t = (ATerm) ATinsert(ATempty, not_null(x_64));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  static ATerm z_64 (ATerm t);
  static ATerm z_64 (ATerm t)
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_64 != NULL) && (f_64 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_64 = ATgetFirst((ATermList) t);
            {
              ATerm e_41 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
                {
                  if(((g_64 != NULL) && (g_64 != ATgetFirst((ATermList) e_41))))
                    _fail(ATgetFirst((ATermList) e_41));
                  else
                    g_64 = ATgetFirst((ATermList) e_41);
                  if(((h_64 != NULL) && (h_64 != (ATerm) ATgetNext((ATermList) e_41))))
                    _fail((ATerm) ATgetNext((ATermList) e_41));
                  else
                    h_64 = (ATerm) ATgetNext((ATermList) e_41);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_41);
        {
          ATerm f_41 = t;
          int g_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_64 = NULL;
              if(((i_64 != NULL) && (i_64 != t)))
                _fail(t);
              else
                i_64 = t;
              t = not_null(f_64);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(i_64);
              LocalPopChoice(g_41);
              {
                ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
                if(((m_64 != NULL) && (m_64 != t)))
                  _fail(t);
                else
                  m_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_64), not_null(g_64));
                if(((o_64 != NULL) && (o_64 != t)))
                  _fail(t);
                else
                  o_64 = t;
                t = term_h_41;
                if(((n_64 != NULL) && (n_64 != t)))
                  _fail(t);
                else
                  n_64 = t;
                t = not_null(o_64);
                t = dbg_0_1(not_null(n_64), t);
                t = xtc_desugar_arg_0_0(t);
                if(((j_64 != NULL) && (j_64 != t)))
                  _fail(t);
                else
                  j_64 = t;
                t = not_null(m_64);
                if(((l_64 != NULL) && (l_64 != t)))
                  _fail(t);
                else
                  l_64 = t;
                t = not_null(h_64);
                t = z_64(t);
                if(((k_64 != NULL) && (k_64 != t)))
                  _fail(t);
                else
                  k_64 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(k_64)), not_null(j_64));
              }
            }
          else
            {
              t = f_41;
              {
                ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
                if(((s_64 != NULL) && (s_64 != t)))
                  _fail(t);
                else
                  s_64 = t;
                t = not_null(f_64);
                {
                  ATerm i_41 = t;
                  int j_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(j_41);
                    }
                  else
                    {
                      t = i_41;
                      {
                        ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
                        if(((t_64 != NULL) && (t_64 != t)))
                          _fail(t);
                        else
                          t_64 = t;
                        if(((v_64 != NULL) && (v_64 != t)))
                          _fail(t);
                        else
                          v_64 = t;
                        t = not_null(t_64);
                        if(((u_64 != NULL) && (u_64 != t)))
                          _fail(t);
                        else
                          u_64 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(u_64));
                      }
                    }
                }
                if(((p_64 != NULL) && (p_64 != t)))
                  _fail(t);
                else
                  p_64 = t;
                t = not_null(s_64);
                if(((r_64 != NULL) && (r_64 != t)))
                  _fail(t);
                else
                  r_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(g_64)), not_null(h_64));
                t = conc_0_0(t);
                t = z_64(t);
                if(((q_64 != NULL) && (q_64 != t)))
                  _fail(t);
                else
                  q_64 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), not_null(p_64));
              }
            }
        }
      }
    else
      {
        t = c_41;
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(h_4, z_64, t);
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = z_64(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm d_65 = NULL;
  if(((d_65 != NULL) && (d_65 != t)))
    _fail(t);
  else
    d_65 = t;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm e_65 = NULL;
  if(((e_65 != NULL) && (e_65 != t)))
    _fail(t);
  else
    e_65 = t;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm f_65 = NULL;
  if(((f_65 != NULL) && (f_65 != t)))
    _fail(t);
  else
    f_65 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(i_4, j_4, k_4, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_65 = NULL;
  if(((p_65 != NULL) && (p_65 != t)))
    _fail(t);
  else
    p_65 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, l_4, t);
  if(match_cons(t, sym__2))
    {
      if(((h_65 != NULL) && (h_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_65 = ATgetArgument(t, 0);
      if(((i_65 != NULL) && (i_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((o_65 != NULL) && (o_65 != t)))
    _fail(t);
  else
    o_65 = t;
  t = term_m_41;
  if(((n_65 != NULL) && (n_65 != t)))
    _fail(t);
  else
    n_65 = t;
  t = not_null(o_65);
  t = xtc_fetch_meta_0_1(not_null(n_65), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(match_cons(n_41, sym_XtcDesc_1))
        {
          if(((j_65 != NULL) && (j_65 != ATgetArgument(n_41, 0))))
            _fail(ATgetArgument(n_41, 0));
          else
            j_65 = ATgetArgument(n_41, 0);
        }
      else
        _fail(t);
      {
        ATerm o_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(h_65), t);
  if(((k_65 != NULL) && (k_65 != t)))
    _fail(t);
  else
    k_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(j_65), not_null(k_65), not_null(i_65));
  t = xtc_prepare_0_0(t);
  if(((m_65 != NULL) && (m_65 != t)))
    _fail(t);
  else
    m_65 = t;
  if(((l_65 != NULL) && (l_65 != t)))
    _fail(t);
  else
    l_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(j_65), not_null(k_65), not_null(l_65));
  return(t);
}
ATerm mapconcat_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, q_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm e_80, ATerm t)
{
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm r_65 = NULL;
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_66 (ATerm s_65, ATerm t);
        static ATerm l_66 (ATerm s_65, ATerm t)
        {
          ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,e_66 = NULL,f_66 = NULL;
          t = not_null(s_65);
          if(((b_66 != NULL) && (b_66 != t)))
            _fail(t);
          else
            b_66 = t;
          t = not_null(s_65);
          if(((e_66 != NULL) && (e_66 != t)))
            _fail(t);
          else
            e_66 = t;
          t = not_null(b_66);
          if(((f_66 != NULL) && (f_66 != t)))
            _fail(t);
          else
            f_66 = t;
          t = SSL_explode_term(not_null(f_66));
          if(match_cons(t, sym__2))
            {
              if(((r_65 != NULL) && (r_65 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_65 = ATgetArgument(t, 0);
              {
                ATerm r_41 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(e_66);
          if(((a_66 != NULL) && (a_66 != t)))
            _fail(t);
          else
            a_66 = t;
          t = not_null(e_80);
          {
            ATerm s_41 = t;
            if((PushChoice() == 0))
              {
                static ATerm n_4 (ATerm t);
                static ATerm n_4 (ATerm t)
                {
                  ATerm g_66 = NULL,i_66 = NULL,j_66 = NULL;
                  if(((g_66 != NULL) && (g_66 != t)))
                    _fail(t);
                  else
                    g_66 = t;
                  if(((i_66 != NULL) && (i_66 != t)))
                    _fail(t);
                  else
                    i_66 = t;
                  t = not_null(g_66);
                  if(((j_66 != NULL) && (j_66 != t)))
                    _fail(t);
                  else
                    j_66 = t;
                  t = SSL_explode_term(not_null(j_66));
                  if(match_cons(t, sym__2))
                    {
                      if(((r_65 != NULL) && (r_65 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_65 = ATgetArgument(t, 0);
                      {
                        ATerm t_41 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(i_66);
                  return(t);
                }
                t = SRTS_one(n_4, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_41;
              }
          }
          t = not_null(a_66);
          if(((z_65 != NULL) && (z_65 != t)))
            _fail(t);
          else
            z_65 = t;
          if(((y_65 != NULL) && (y_65 != t)))
            _fail(t);
          else
            y_65 = t;
          t = (ATerm) ATinsert(ATempty, not_null(y_65));
          return(t);
        }
        ATerm k_66 = NULL;
        if(((k_66 != NULL) && (k_66 != t)))
          _fail(t);
        else
          k_66 = t;
        t = l_66(not_null(k_66), t);
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(m_4, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm c_80, ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_66 != NULL) && (m_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_66 = ATgetArgument(t, 0);
      if(((r_66 != NULL) && (r_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_66);
  t = xtc_filter_meta_0_1(not_null(c_80), t);
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  if(((q_66 != NULL) && (q_66 != t)))
    _fail(t);
  else
    q_66 = t;
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), not_null(c_80));
  t = union_0_0(t);
  if(((n_66 != NULL) && (n_66 != t)))
    _fail(t);
  else
    n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_66), not_null(n_66));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_41 = ATgetArgument(t, 0);
      if(match_cons(u_41, sym_XtcConf_4))
        {
          if(((s_66 != NULL) && (s_66 != ATgetArgument(u_41, 0))))
            _fail(ATgetArgument(u_41, 0));
          else
            s_66 = ATgetArgument(u_41, 0);
          if(((t_66 != NULL) && (t_66 != ATgetArgument(u_41, 1))))
            _fail(ATgetArgument(u_41, 1));
          else
            t_66 = ATgetArgument(u_41, 1);
          if(((u_66 != NULL) && (u_66 != ATgetArgument(u_41, 2))))
            _fail(ATgetArgument(u_41, 2));
          else
            u_66 = ATgetArgument(u_41, 2);
          if(((v_66 != NULL) && (v_66 != ATgetArgument(u_41, 3))))
            _fail(ATgetArgument(u_41, 3));
          else
            v_66 = ATgetArgument(u_41, 3);
        }
      else
        _fail(t);
      {
        ATerm v_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((z_66 != NULL) && (z_66 != t)))
    _fail(t);
  else
    z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(v_66));
  t = conc_0_0(t);
  if(((w_66 != NULL) && (w_66 != t)))
    _fail(t);
  else
    w_66 = t;
  t = not_null(z_66);
  if(((y_66 != NULL) && (y_66 != t)))
    _fail(t);
  else
    y_66 = t;
  t = not_null(e_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((x_66 != NULL) && (x_66 != t)))
    _fail(t);
  else
    x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(s_66), not_null(t_66), not_null(u_66), not_null(w_66)), not_null(x_66));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm o_67 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((o_67 != NULL) && (o_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(o_67);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm p_67 = NULL;
  if(((p_67 != NULL) && (p_67 != t)))
    _fail(t);
  else
    p_67 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_41 = ATgetArgument(t, 0);
      if(match_cons(w_41, sym_XtcConf_4))
        {
          ATerm x_41 = ATgetArgument(w_41, 0);
          ATerm y_41 = ATgetArgument(w_41, 1);
          ATerm z_41 = ATgetArgument(w_41, 2);
          ATerm a_42 = ATgetArgument(w_41, 3);
        }
      else
        _fail(t);
      if(((b_67 != NULL) && (b_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_67 != NULL) && (l_67 != t)))
    _fail(t);
  else
    l_67 = t;
  t = not_null(b_67);
  if(((n_67 != NULL) && (n_67 != t)))
    _fail(t);
  else
    n_67 = t;
  t = term_b_42;
  if(((m_67 != NULL) && (m_67 != t)))
    _fail(t);
  else
    m_67 = t;
  t = not_null(n_67);
  t = xtc_fetch_meta_0_1(not_null(m_67), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_67 = ATgetArgument(t, 0);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(match_cons(c_42, sym_Some_1))
          {
            if(((d_67 != NULL) && (d_67 != ATgetArgument(c_42, 0))))
              _fail(ATgetArgument(c_42, 0));
            else
              d_67 = ATgetArgument(c_42, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(b_67);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm d_42 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_67 = ATgetArgument(t, 0);
              {
                ATerm e_42 = ATgetArgument(t, 1);
                if(match_cons(e_42, sym_Some_1))
                  {
                    if(((d_67 != NULL) && (d_67 != ATgetArgument(e_42, 0))))
                      _fail(ATgetArgument(e_42, 0));
                    else
                      d_67 = ATgetArgument(e_42, 0);
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
          t = d_42;
        }
      return(t);
    }
    t = filter_1_0(o_4, t);
  }
  if(((e_67 != NULL) && (e_67 != t)))
    _fail(t);
  else
    e_67 = t;
  t = not_null(l_67);
  if(((i_67 != NULL) && (i_67 != t)))
    _fail(t);
  else
    i_67 = t;
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  t = not_null(d_67);
  t = try_1_0(p_4, t);
  if(((j_67 != NULL) && (j_67 != t)))
    _fail(t);
  else
    j_67 = t;
  if(((h_67 != NULL) && (h_67 != t)))
    _fail(t);
  else
    h_67 = t;
  t = not_null(i_67);
  t = xtc_reconfigure_0_2(not_null(c_67), not_null(h_67), t);
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(e_67), t);
      return(t);
    }
    t = _2_0(q_4, r_4, t);
  }
  if(((g_67 != NULL) && (g_67 != t)))
    _fail(t);
  else
    g_67 = t;
  t = term_f_42;
  if(((f_67 != NULL) && (f_67 != t)))
    _fail(t);
  else
    f_67 = t;
  t = not_null(g_67);
  t = dbg_0_1(not_null(f_67), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,s_4 = NULL,a_12 = NULL;
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((r_67 != NULL) && (r_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_67 = ATgetArgument(t, 0);
      if(((s_67 != NULL) && (s_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_67 = ATgetArgument(t, 1);
      if(((t_67 != NULL) && (t_67 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((a_68 != NULL) && (a_68 != t)))
    _fail(t);
  else
    a_68 = t;
  t = SSLgetAnnotations(not_null(z_67));
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  t = not_null(r_67);
  t = i_109(t);
  if(((u_67 != NULL) && (u_67 != t)))
    _fail(t);
  else
    u_67 = t;
  t = not_null(s_67);
  t = j_109(t);
  if(((v_67 != NULL) && (v_67 != t)))
    _fail(t);
  else
    v_67 = t;
  t = not_null(t_67);
  t = k_109(t);
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(u_67), not_null(v_67), not_null(w_67));
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  t = SSLsetAnnotations(not_null(s_4), not_null(q_67));
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm f_81, ATerm t)
{
  ATerm b_68 = NULL;
  if(((b_68 != NULL) && (b_68 != t)))
    _fail(t);
  else
    b_68 = t;
  t = not_null(f_81);
  t = is_string_0_0(t);
  t = not_null(b_68);
  {
    static ATerm t_4 (ATerm t);
    static ATerm t_4 (ATerm t)
    {
      ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
      if(((c_68 != NULL) && (c_68 != t)))
        _fail(t);
      else
        c_68 = t;
      if(((d_68 != NULL) && (d_68 != t)))
        _fail(t);
      else
        d_68 = t;
      t = not_null(c_68);
      if(((e_68 != NULL) && (e_68 != t)))
        _fail(t);
      else
        e_68 = t;
      t = SSL_explode_term(not_null(e_68));
      if(match_cons(t, sym__2))
        {
          if(((f_81 != NULL) && (f_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_81 = ATgetArgument(t, 0);
          {
            ATerm i_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(d_68);
      return(t);
    }
    t = collect_all_1_0(t_4, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  t = term_j_42;
  if(((g_68 != NULL) && (g_68 != t)))
    _fail(t);
  else
    g_68 = t;
  t = not_null(h_68);
  t = xtc_fetch_meta_0_1(not_null(g_68), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((f_68 != NULL) && (f_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(f_68);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm r_68 = NULL;
  if(((r_68 != NULL) && (r_68 != t)))
    _fail(t);
  else
    r_68 = t;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_68 = NULL;
  if(((s_68 != NULL) && (s_68 != t)))
    _fail(t);
  else
    s_68 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm u_4 (ATerm t);
    static ATerm u_4 (ATerm t)
    {
      static ATerm v_4 (ATerm t);
      static ATerm v_4 (ATerm t)
      {
        ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        if(((q_68 != NULL) && (q_68 != t)))
          _fail(t);
        else
          q_68 = t;
        if(((n_68 != NULL) && (n_68 != t)))
          _fail(t);
        else
          n_68 = t;
        t = not_null(q_68);
        if(((p_68 != NULL) && (p_68 != t)))
          _fail(t);
        else
          p_68 = t;
        t = term_p_42;
        t = o_151(t);
        if(((o_68 != NULL) && (o_68 != t)))
          _fail(t);
        else
          o_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_68), not_null(o_68));
        t = eq_0_0(t);
        t = not_null(m_68);
        return(t);
      }
      t = XtcContract_3_0(v_4, w_4, x_4, t);
      return(t);
    }
    t = filter_1_0(u_4, t);
  }
  if(((l_68 != NULL) && (l_68 != t)))
    _fail(t);
  else
    l_68 = t;
  t = term_j_42;
  if(((k_68 != NULL) && (k_68 != t)))
    _fail(t);
  else
    k_68 = t;
  t = not_null(l_68);
  t = dbg_0_1(not_null(k_68), t);
  return(t);
}
ATerm warn_0_1 (ATerm w_78, ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  if(((y_68 != NULL) && (y_68 != t)))
    _fail(t);
  else
    y_68 = t;
  t = term_q_42;
  if(((t_68 != NULL) && (t_68 != t)))
    _fail(t);
  else
    t_68 = t;
  t = not_null(y_68);
  if(((v_68 != NULL) && (v_68 != t)))
    _fail(t);
  else
    v_68 = t;
  if(((x_68 != NULL) && (x_68 != t)))
    _fail(t);
  else
    x_68 = t;
  if(((w_68 != NULL) && (w_68 != t)))
    _fail(t);
  else
    w_68 = t;
  if(((u_68 != NULL) && (u_68 != t)))
    _fail(t);
  else
    u_68 = t;
  t = not_null(v_68);
  t = log_0_3(not_null(t_68), not_null(w_78), not_null(u_68), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_68 = NULL;
      if(((z_68 != NULL) && (z_68 != t)))
        _fail(t);
      else
        z_68 = t;
      t = term_q_12;
      t = get_config_0_0(t);
      t = not_null(z_68);
      LocalPopChoice(s_42);
      {
        ATerm a_69 = NULL,b_69 = NULL;
        if(((b_69 != NULL) && (b_69 != t)))
          _fail(t);
        else
          b_69 = t;
        t = term_d_43;
        if(((a_69 != NULL) && (a_69 != t)))
          _fail(t);
        else
          a_69 = t;
        t = not_null(b_69);
        t = err_0_1(not_null(a_69), t);
        _fail(t);
      }
    }
  else
    {
      t = r_42;
      {
        ATerm c_69 = NULL,d_69 = NULL;
        if(((d_69 != NULL) && (d_69 != t)))
          _fail(t);
        else
          d_69 = t;
        t = term_e_43;
        if(((c_69 != NULL) && (c_69 != t)))
          _fail(t);
        else
          c_69 = t;
        t = not_null(d_69);
        t = warn_0_1(not_null(c_69), t);
      }
    }
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm e_69 = NULL;
  if(((e_69 != NULL) && (e_69 != t)))
    _fail(t);
  else
    e_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, not_null(e_69));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_69 = NULL;
  if(((h_69 != NULL) && (h_69 != t)))
    _fail(t);
  else
    h_69 = t;
  t = term_e_46;
  t = set_config_0_0(t);
  t = not_null(h_69);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_69 = NULL;
      if(((f_69 != NULL) && (f_69 != t)))
        _fail(t);
      else
        f_69 = t;
      t = term_p_12;
      t = get_config_0_0(t);
      t = not_null(f_69);
      LocalPopChoice(g_46);
      {
        ATerm g_69 = NULL;
        if(((g_69 != NULL) && (g_69 != t)))
          _fail(t);
        else
          g_69 = t;
        t = term_p_12;
        t = rm_config_0_0(t);
        t = not_null(g_69);
        t = restore_always_2_0(s_151, y_4, t);
      }
    }
  else
    {
      t = f_46;
      t = s_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
      if(((j_69 != NULL) && (j_69 != t)))
        _fail(t);
      else
        j_69 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((k_69 != NULL) && (k_69 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(k_69);
      if(((l_69 != NULL) && (l_69 != t)))
        _fail(t);
      else
        l_69 = t;
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm c_1 (ATerm), ATerm t)
{
  static ATerm h_72 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm z_69, ATerm t);
  static ATerm i_72 (ATerm v_70, ATerm w_70, ATerm b_71, ATerm c_71, ATerm d_71, ATerm t);
  static ATerm h_72 (ATerm w_69, ATerm x_69, ATerm y_69, ATerm z_69, ATerm t)
  {
    ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
    t = not_null(w_69);
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = not_null(x_69);
    if(((e_70 != NULL) && (e_70 != t)))
      _fail(t);
    else
      e_70 = t;
    t = not_null(y_69);
    if(((a_70 != NULL) && (a_70 != t)))
      _fail(t);
    else
      a_70 = t;
    t = not_null(z_69);
    t = Fst_0_0(t);
    t = c_1(t);
    if(((b_70 != NULL) && (b_70 != t)))
      _fail(t);
    else
      b_70 = t;
    t = not_null(a_70);
    t = some_or_empty_0_0(t);
    {
      ATerm j_46 = t;
      int s_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_70 = NULL,i_70 = NULL,m_70 = NULL;
          if(((h_70 != NULL) && (h_70 != t)))
            _fail(t);
          else
            h_70 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((i_70 != NULL) && (i_70 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_70);
          if(((m_70 != NULL) && (m_70 != t)))
            _fail(t);
          else
            m_70 = t;
          LocalPopChoice(s_47);
        }
      else
        {
          t = j_46;
          t = Nil_0_0(t);
        }
    }
    if(((d_70 != NULL) && (d_70 != t)))
      _fail(t);
    else
      d_70 = t;
    {
      ATerm t_47 = t;
      int u_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_70 = NULL,s_70 = NULL,t_70 = NULL;
          static ATerm z_4 (ATerm t);
          static ATerm z_4 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(e_70), t);
            return(t);
          }
          if(((n_70 != NULL) && (n_70 != t)))
            _fail(t);
          else
            n_70 = t;
          if(((t_70 != NULL) && (t_70 != t)))
            _fail(t);
          else
            t_70 = t;
          t = not_null(n_70);
          t = xtc_new_file_0_0(t);
          if(((s_70 != NULL) && (s_70 != t)))
            _fail(t);
          else
            s_70 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(b_70), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_70))), not_null(c_70), not_null(d_70));
          t = xtc_cc_disable_1_0(z_4, t);
          LocalPopChoice(u_47);
        }
      else
        {
          t = t_47;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm i_72 (ATerm v_70, ATerm w_70, ATerm b_71, ATerm c_71, ATerm d_71, ATerm t)
  {
    ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
    t = not_null(v_70);
    if(((f_71 != NULL) && (f_71 != t)))
      _fail(t);
    else
      f_71 = t;
    t = not_null(w_70);
    if(((g_71 != NULL) && (g_71 != t)))
      _fail(t);
    else
      g_71 = t;
    t = not_null(b_71);
    if(((h_71 != NULL) && (h_71 != t)))
      _fail(t);
    else
      h_71 = t;
    t = not_null(c_71);
    if(((e_71 != NULL) && (e_71 != t)))
      _fail(t);
    else
      e_71 = t;
    t = not_null(d_71);
    if(((i_71 != NULL) && (i_71 != t)))
      _fail(t);
    else
      i_71 = t;
    {
      ATerm v_47 = t;
      int x_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(e_71);
          t = xtc_fetch_contracts_1_0(c_1, t);
          LocalPopChoice(x_47);
          {
            static ATerm a_5 (ATerm t);
            static ATerm a_5 (ATerm t)
            {
              ATerm j_71 = NULL,k_71 = NULL;
              if(((k_71 != NULL) && (k_71 != t)))
                _fail(t);
              else
                k_71 = t;
              if(((j_71 != NULL) && (j_71 != t)))
                _fail(t);
              else
                j_71 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(f_71), not_null(g_71), not_null(h_71)), not_null(j_71));
              t = xtc_cc_1_0(c_1, t);
              return(t);
            }
            t = map_1_0(a_5, t);
          }
        }
      else
        {
          t = v_47;
          {
            ATerm m_71 = NULL;
            if(((m_71 != NULL) && (m_71 != t)))
              _fail(t);
            else
              m_71 = t;
          }
        }
    }
    t = not_null(i_71);
    return(t);
  }
  ATerm n_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,g_72 = NULL;
  if(((v_71 != NULL) && (v_71 != t)))
    _fail(t);
  else
    v_71 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_71 != NULL) && (w_71 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_71 = ATgetArgument(t, 0);
      if(((g_72 != NULL) && (g_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_71);
  if(match_cons(t, sym__3))
    {
      x_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
      z_71 = ATgetArgument(t, 2);
      t = not_null(g_72);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((n_71 != NULL) && (n_71 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_71 = ATgetArgument(t, 0);
          if(((t_71 != NULL) && (t_71 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_71 = ATgetArgument(t, 1);
          if(((u_71 != NULL) && (u_71 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_71 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_72(not_null(z_71), not_null(t_71), not_null(u_71), not_null(v_71), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((x_71 != NULL) && (x_71 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_71 = ATgetArgument(t, 0);
          if(((y_71 != NULL) && (y_71 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_71 = ATgetArgument(t, 1);
          if(((z_71 != NULL) && (z_71 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            z_71 = ATgetArgument(t, 2);
          if(((a_72 != NULL) && (a_72 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            a_72 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_72(not_null(x_71), not_null(y_71), not_null(z_71), not_null(g_72), not_null(v_71), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  if(((j_72 != NULL) && (j_72 != t)))
    _fail(t);
  else
    j_72 = t;
  t = term_p_12;
  t = get_config_0_0(t);
  if(((l_72 != NULL) && (l_72 != t)))
    _fail(t);
  else
    l_72 = t;
  t = term_y_47;
  if(((k_72 != NULL) && (k_72 != t)))
    _fail(t);
  else
    k_72 = t;
  t = not_null(l_72);
  t = notice_0_1(not_null(k_72), t);
  t = not_null(j_72);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  ATerm m_72 = NULL;
  ATerm z_47 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_72 = NULL;
      if(((n_72 != NULL) && (n_72 != t)))
        _fail(t);
      else
        n_72 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(n_72);
      LocalPopChoice(d_48);
      {
        ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
        if(((s_72 != NULL) && (s_72 != t)))
          _fail(t);
        else
          s_72 = t;
        t = term_n_48;
        if(((r_72 != NULL) && (r_72 != t)))
          _fail(t);
        else
          r_72 = t;
        t = not_null(s_72);
        t = dbg_0_1(not_null(r_72), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((q_72 != NULL) && (q_72 != t)))
          _fail(t);
        else
          q_72 = t;
        t = p_151(t);
        if(((m_72 != NULL) && (m_72 != t)))
          _fail(t);
        else
          m_72 = t;
        t = not_null(q_72);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(m_72);
        if(((p_72 != NULL) && (p_72 != t)))
          _fail(t);
        else
          p_72 = t;
        t = term_p_48;
        if(((o_72 != NULL) && (o_72 != t)))
          _fail(t);
        else
          o_72 = t;
        t = not_null(p_72);
        t = dbg_0_1(not_null(o_72), t);
      }
    }
  else
    {
      t = z_47;
      t = p_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_72 != NULL) && (u_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_72 = ATgetArgument(t, 0);
      if(((t_72 != NULL) && (t_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_72 != NULL) && (w_72 != t)))
    _fail(t);
  else
    w_72 = t;
  if(((x_72 != NULL) && (x_72 != t)))
    _fail(t);
  else
    x_72 = t;
  t = not_null(u_72);
  {
    ATerm s_48 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_48;
      }
  }
  t = not_null(x_72);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm t_48 = ATgetArgument(t, 0);
      if(((v_72 != NULL) && (v_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_72), not_null(v_72));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  t = term_u_48;
  t = table_getlist_0_0(t);
  {
    ATerm v_48 = t;
    int w_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(w_48);
      }
    else
      {
        t = v_48;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((z_72 != NULL) && (z_72 != t)))
    _fail(t);
  else
    z_72 = t;
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_48, not_null(y_72));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm g_73 = NULL;
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm h_73 = NULL;
  if(((h_73 != NULL) && (h_73 != t)))
    _fail(t);
  else
    h_73 = t;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_73 = NULL;
  if(((i_73 != NULL) && (i_73 != t)))
    _fail(t);
  else
    i_73 = t;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_73 = NULL;
  if(((j_73 != NULL) && (j_73 != t)))
    _fail(t);
  else
    j_73 = t;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm k_73 = NULL;
  if(((k_73 != NULL) && (k_73 != t)))
    _fail(t);
  else
    k_73 = t;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm l_73 = NULL;
  if(((l_73 != NULL) && (l_73 != t)))
    _fail(t);
  else
    l_73 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_48 = t;
      if((PushChoice() == 0))
        {
          ATerm a_49 = t;
          int b_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(b_5, t);
              LocalPopChoice(b_49);
            }
          else
            {
              t = a_49;
              t = XtcQuery_2_0(c_5, d_5, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_48;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(a_1, t);
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm c_49 = t;
        int d_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(e_5, t);
            LocalPopChoice(d_49);
          }
        else
          {
            t = c_49;
            t = XtcQuery_2_0(f_5, g_5, t);
          }
      }
      {
        ATerm e_49 = t;
        int k_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(a_1, t);
            t = Snd_0_0(t);
            LocalPopChoice(k_49);
          }
        else
          {
            t = e_49;
            {
              ATerm m_73 = NULL,n_73 = NULL;
              if(((m_73 != NULL) && (m_73 != t)))
                _fail(t);
              else
                m_73 = t;
              if(((n_73 != NULL) && (n_73 != t)))
                _fail(t);
              else
                n_73 = t;
              t = not_null(m_73);
              t = xtc_import_0_0(t);
              t = not_null(n_73);
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
static ATerm h_5 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  if(((p_73 != NULL) && (p_73 != t)))
    _fail(t);
  else
    p_73 = t;
  t = term_l_49;
  if(((o_73 != NULL) && (o_73 != t)))
    _fail(t);
  else
    o_73 = t;
  t = not_null(p_73);
  t = err_0_1(not_null(o_73), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, h_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm p_85, ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  if(((w_73 != NULL) && (w_73 != t)))
    _fail(t);
  else
    w_73 = t;
  t = term_p_49;
  if(((v_73 != NULL) && (v_73 != t)))
    _fail(t);
  else
    v_73 = t;
  t = not_null(w_73);
  t = dbg_0_1(not_null(v_73), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm q_49 = ATgetArgument(t, 0);
      ATerm r_49 = ATgetArgument(t, 1);
      if(match_cons(r_49, sym_Some_1))
        {
          if(((q_73 != NULL) && (q_73 != ATgetArgument(r_49, 0))))
            _fail(ATgetArgument(r_49, 0));
          else
            q_73 = ATgetArgument(r_49, 0);
        }
      else
        _fail(t);
      {
        ATerm s_49 = ATgetArgument(t, 2);
      }
      {
        ATerm b_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  if(((r_73 != NULL) && (r_73 != t)))
    _fail(t);
  else
    r_73 = t;
  t = not_null(u_73);
  if(((t_73 != NULL) && (t_73 != t)))
    _fail(t);
  else
    t_73 = t;
  t = not_null(p_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((s_73 != NULL) && (s_73 != t)))
    _fail(t);
  else
    s_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(s_73));
  t = xtc_cc_wrap_1_0(i_5, t);
  t = not_null(q_73);
  return(t);
}
ATerm Some_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,j_5 = NULL,b_12 = NULL;
  if(((c_74 != NULL) && (c_74 != t)))
    _fail(t);
  else
    c_74 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((y_73 != NULL) && (y_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_74 != NULL) && (d_74 != t)))
    _fail(t);
  else
    d_74 = t;
  t = SSLgetAnnotations(not_null(c_74));
  if(((x_73 != NULL) && (x_73 != t)))
    _fail(t);
  else
    x_73 = t;
  t = not_null(y_73);
  t = n_107(t);
  if(((z_73 != NULL) && (z_73 != t)))
    _fail(t);
  else
    z_73 = t;
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(z_73));
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = SSLsetAnnotations(not_null(j_5), not_null(x_73));
  if(((a_74 != NULL) && (a_74 != t)))
    _fail(t);
  else
    a_74 = t;
  return(t);
}
ATerm option_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm p_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(q_50);
    }
  else
    {
      t = p_50;
      t = Some_1_0(o_132, t);
    }
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  if(match_cons(t, sym_URL_1))
    {
      g_74 = ATgetArgument(t, 0);
      t = not_null(f_74);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm h_74 = NULL,i_74 = NULL;
          t = not_null(f_74);
          if(((i_74 != NULL) && (i_74 != t)))
            _fail(t);
          else
            i_74 = t;
          t = term_f_18;
          t = xtc_new_file_0_0(t);
          if(((h_74 != NULL) && (h_74 != t)))
            _fail(t);
          else
            h_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_50, not_null(h_74));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_74));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((g_74 != NULL) && (g_74 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_74);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm h_111 (ATerm), ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,k_5 = NULL,c_12 = NULL;
  if(((e_75 != NULL) && (e_75 != t)))
    _fail(t);
  else
    e_75 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((k_74 != NULL) && (k_74 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_74 = ATgetArgument(t, 0);
      if(((v_74 != NULL) && (v_74 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_74 = ATgetArgument(t, 1);
      if(((w_74 != NULL) && (w_74 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_74 = ATgetArgument(t, 2);
      if(((x_74 != NULL) && (x_74 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        x_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  t = SSLgetAnnotations(not_null(e_75));
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(k_74);
  t = h_111(t);
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  t = not_null(v_74);
  t = i_111(t);
  if(((z_74 != NULL) && (z_74 != t)))
    _fail(t);
  else
    z_74 = t;
  t = not_null(w_74);
  t = j_111(t);
  if(((a_75 != NULL) && (a_75 != t)))
    _fail(t);
  else
    a_75 = t;
  t = not_null(x_74);
  t = k_111(t);
  if(((b_75 != NULL) && (b_75 != t)))
    _fail(t);
  else
    b_75 = t;
  if(((d_75 != NULL) && (d_75 != t)))
    _fail(t);
  else
    d_75 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(y_74), not_null(z_74), not_null(a_75), not_null(b_75));
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = SSLsetAnnotations(not_null(k_5), not_null(j_74));
  if(((c_75 != NULL) && (c_75 != t)))
    _fail(t);
  else
    c_75 = t;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = option_1_0(o_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = option_1_0(q_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = FILE_1_0(p_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_75 = NULL;
  if(((m_75 != NULL) && (m_75 != t)))
    _fail(t);
  else
    m_75 = t;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = FILE_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm n_75 = NULL;
  if(((n_75 != NULL) && (n_75 != t)))
    _fail(t);
  else
    n_75 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm s_50 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL;
      t = XtcConf_4_0(l_5, m_5, n_5, is_list_0_0, t);
      if(((j_75 != NULL) && (j_75 != t)))
        _fail(t);
      else
        j_75 = t;
      if(((l_75 != NULL) && (l_75 != t)))
        _fail(t);
      else
        l_75 = t;
      t = z_0(t);
      if(((k_75 != NULL) && (k_75 != t)))
        _fail(t);
      else
        k_75 = t;
      if(((i_75 != NULL) && (i_75 != t)))
        _fail(t);
      else
        i_75 = t;
      t = not_null(j_75);
      t = xtc_dispatch_0_1(not_null(i_75), t);
      LocalPopChoice(m_51);
    }
  else
    {
      t = s_50;
      {
        ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
        t = is_list_0_0(t);
        if(((o_75 != NULL) && (o_75 != t)))
          _fail(t);
        else
          o_75 = t;
        t = z_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((q_75 != NULL) && (q_75 != t)))
          _fail(t);
        else
          q_75 = t;
        if(((p_75 != NULL) && (p_75 != t)))
          _fail(t);
        else
          p_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_75), not_null(o_75));
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
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,s_5 = NULL,d_12 = NULL;
  if(((w_75 != NULL) && (w_75 != t)))
    _fail(t);
  else
    w_75 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((s_75 != NULL) && (s_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  t = SSLgetAnnotations(not_null(w_75));
  if(((r_75 != NULL) && (r_75 != t)))
    _fail(t);
  else
    r_75 = t;
  t = not_null(s_75);
  t = m_109(t);
  if(((t_75 != NULL) && (t_75 != t)))
    _fail(t);
  else
    t_75 = t;
  if(((v_75 != NULL) && (v_75 != t)))
    _fail(t);
  else
    v_75 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_75));
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  t = SSLsetAnnotations(not_null(s_5), not_null(r_75));
  if(((u_75 != NULL) && (u_75 != t)))
    _fail(t);
  else
    u_75 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm y_75 = NULL;
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  t = SSL_close(not_null(y_75));
  return(t);
}
ATerm assert_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_76 != NULL) && (b_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_76 = ATgetArgument(t, 0);
      if(((z_75 != NULL) && (z_75 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  t = w_111(t);
  if(((a_76 != NULL) && (a_76 != t)))
    _fail(t);
  else
    a_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_76), not_null(b_76), not_null(z_75));
  t = table_push_0_0(t);
  {
    ATerm n_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_76), term_p_51);
        t = table_get_0_0(t);
        {
          ATerm q_51 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_51;
            }
        }
        LocalPopChoice(o_51);
      }
    else
      {
        t = n_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_76 != NULL) && (c_76 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_76 = ATgetFirst((ATermList) t);
      if(((d_76 != NULL) && (d_76 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        d_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(a_76), term_p_51, (ATerm) ATinsert(CheckATermList(not_null(d_76)), (ATerm) ATinsert(CheckATermList(not_null(c_76)), not_null(b_76))));
  t = table_put_0_0(t);
  t = not_null(e_76);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_76 = NULL;
  ATerm u_52 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm l_76 (ATerm h_76, ATerm t);
      static ATerm l_76 (ATerm h_76, ATerm t)
      {
        ATerm i_76 = NULL,j_76 = NULL;
        t = not_null(h_76);
        if(((j_76 != NULL) && (j_76 != t)))
          _fail(t);
        else
          j_76 = t;
        t = not_null(h_76);
        if(((i_76 != NULL) && (i_76 != t)))
          _fail(t);
        else
          i_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), term_d_53);
        t = conc_strings_0_0(t);
        if(((g_76 != NULL) && (g_76 != t)))
          _fail(t);
        else
          g_76 = t;
        t = SSL_mkstemp(not_null(g_76));
        return(t);
      }
      ATerm k_76 = NULL;
      if(((k_76 != NULL) && (k_76 != t)))
        _fail(t);
      else
        k_76 = t;
      t = l_76(not_null(k_76), t);
      LocalPopChoice(c_53);
    }
  else
    {
      t = u_52;
      t = term_i_53;
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
  ATerm j_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_53;
      t = getenv_0_0(t);
      LocalPopChoice(o_53);
    }
  else
    {
      t = j_53;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  if(((n_76 != NULL) && (n_76 != t)))
    _fail(t);
  else
    n_76 = t;
  t = temp_dir_0_0(t);
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_76), term_y_53);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_76 != NULL) && (p_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_76 = ATgetArgument(t, 0);
      if(((o_76 != NULL) && (o_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), term_f_18);
  t = assert_1_0(t_5, t);
  t = not_null(o_76);
  t = close_0_0(t);
  t = not_null(p_76);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_76 = NULL;
  if(((x_76 != NULL) && (x_76 != t)))
    _fail(t);
  else
    x_76 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  if(((s_76 != NULL) && (s_76 != t)))
    _fail(t);
  else
    s_76 = t;
  if(((u_76 != NULL) && (u_76 != t)))
    _fail(t);
  else
    u_76 = t;
  t = xtc_new_file_0_0(t);
  if(((t_76 != NULL) && (t_76 != t)))
    _fail(t);
  else
    t_76 = t;
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_76 = NULL,w_76 = NULL;
        t = not_null(s_76);
        {
          ATerm o_54 = t;
          int q_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(u_5, t);
              LocalPopChoice(q_54);
            }
          else
            {
              t = o_54;
              t = stdin_0_0(t);
            }
        }
        if(((w_76 != NULL) && (w_76 != t)))
          _fail(t);
        else
          w_76 = t;
        t = l_153(t);
        if(((v_76 != NULL) && (v_76 != t)))
          _fail(t);
        else
          v_76 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(s_76)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_76))), term_k_18, not_null(v_76));
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm y_76 = NULL,z_76 = NULL;
          t = not_null(s_76);
          t = None_0_0(t);
          if(((z_76 != NULL) && (z_76 != t)))
            _fail(t);
          else
            z_76 = t;
          t = l_153(t);
          if(((y_76 != NULL) && (y_76 != t)))
            _fail(t);
          else
            y_76 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_k_18, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_76))), term_k_18, not_null(y_76));
        }
      }
  }
  t = xtc_command_1_0(k_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_76));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm e_153 (ATerm), ATerm f_153 (ATerm), ATerm t)
{
  t = term_k_18;
  t = xtc_transform_file_2_0(e_153, f_153, t);
  return(t);
}
ATerm err_0_1 (ATerm v_78, ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
  if(((f_77 != NULL) && (f_77 != t)))
    _fail(t);
  else
    f_77 = t;
  t = term_m_33;
  if(((a_77 != NULL) && (a_77 != t)))
    _fail(t);
  else
    a_77 = t;
  t = not_null(f_77);
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  if(((e_77 != NULL) && (e_77 != t)))
    _fail(t);
  else
    e_77 = t;
  if(((d_77 != NULL) && (d_77 != t)))
    _fail(t);
  else
    d_77 = t;
  if(((b_77 != NULL) && (b_77 != t)))
    _fail(t);
  else
    b_77 = t;
  t = not_null(c_77);
  t = log_0_3(not_null(a_77), not_null(v_78), not_null(b_77), t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm g_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((g_77 != NULL) && (g_77 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        g_77 = ATgetFirst((ATermList) t);
      {
        ATerm y_54 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(g_77);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  static ATerm v_5 (ATerm t);
  static ATerm v_5 (ATerm t)
  {
    ATerm j_77 = NULL,k_77 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((j_77 != NULL) && (j_77 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_77 = ATgetArgument(t, 0);
        if(((k_77 != NULL) && (k_77 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_77 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_77), not_null(j_77), not_null(k_77));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((i_77 != NULL) && (i_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_77 = ATgetArgument(t, 0);
      if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_77);
  t = map_1_0(v_5, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm z_54 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_54;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_77 != NULL) && (n_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_77 = ATgetArgument(t, 0);
      if(((l_77 != NULL) && (l_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = not_null(l_77);
  {
    ATerm a_55 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(w_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_55;
      }
  }
  t = not_null(l_77);
  t = filter_1_0(x_5, t);
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_77), (ATerm) ATinsert(ATempty, term_b_55));
  t = union_0_0(t);
  if(((m_77 != NULL) && (m_77 != t)))
    _fail(t);
  else
    m_77 = t;
  t = not_null(n_77);
  if(((r_77 != NULL) && (r_77 != t)))
    _fail(t);
  else
    r_77 = t;
  if(((t_77 != NULL) && (t_77 != t)))
    _fail(t);
  else
    t_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_c_55), not_null(o_77));
  t = conc_0_0(t);
  if(((s_77 != NULL) && (s_77 != t)))
    _fail(t);
  else
    s_77 = t;
  if(((q_77 != NULL) && (q_77 != t)))
    _fail(t);
  else
    q_77 = t;
  t = not_null(r_77);
  t = xtc_load_0_1(not_null(q_77), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_77), not_null(m_77));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_77 != NULL) && (v_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_77 = ATgetArgument(t, 0);
      if(((u_77 != NULL) && (u_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_77 != NULL) && (x_77 != t)))
    _fail(t);
  else
    x_77 = t;
  if(((y_77 != NULL) && (y_77 != t)))
    _fail(t);
  else
    y_77 = t;
  t = not_null(v_77);
  t = file_exists_0_0(t);
  t = not_null(y_77);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm d_55 = ATgetArgument(t, 0);
      if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_77), not_null(w_77));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  t = term_u_48;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((a_78 != NULL) && (a_78 != t)))
    _fail(t);
  else
    a_78 = t;
  if(((z_77 != NULL) && (z_77 != t)))
    _fail(t);
  else
    z_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_48, not_null(z_77));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  if(((e_78 != NULL) && (e_78 != t)))
    _fail(t);
  else
    e_78 = t;
  if(((f_78 != NULL) && (f_78 != t)))
    _fail(t);
  else
    f_78 = t;
  t = not_null(e_78);
  if(((g_78 != NULL) && (g_78 != t)))
    _fail(t);
  else
    g_78 = t;
  t = SSL_explode_term(not_null(g_78));
  if(match_cons(t, sym__2))
    {
      ATerm e_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_55 = ATgetArgument(t, 1);
        if(((ATgetType(f_55) == AT_LIST) && !(ATisEmpty(f_55))))
          {
            if(((b_78 != NULL) && (b_78 != ATgetFirst((ATermList) f_55))))
              _fail(ATgetFirst((ATermList) f_55));
            else
              b_78 = ATgetFirst((ATermList) f_55);
            {
              ATerm g_55 = (ATerm) ATgetNext((ATermList) f_55);
              if(((ATgetType(g_55) == AT_LIST) && !(ATisEmpty(g_55))))
                {
                  if(((d_78 != NULL) && (d_78 != ATgetFirst((ATermList) g_55))))
                    _fail(ATgetFirst((ATermList) g_55));
                  else
                    d_78 = ATgetFirst((ATermList) g_55);
                  if(((c_78 != NULL) && (c_78 != (ATerm) ATgetNext((ATermList) g_55))))
                    _fail((ATerm) ATgetNext((ATermList) g_55));
                  else
                    c_78 = (ATerm) ATgetNext((ATermList) g_55);
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
  t = not_null(d_78);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  if(((k_78 != NULL) && (k_78 != t)))
    _fail(t);
  else
    k_78 = t;
  if(((m_78 != NULL) && (m_78 != t)))
    _fail(t);
  else
    m_78 = t;
  t = not_null(k_78);
  if(((n_78 != NULL) && (n_78 != t)))
    _fail(t);
  else
    n_78 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      o_78 = ATgetArgument(t, 0);
      t = not_null(o_78);
      if(((j_78 != NULL) && (j_78 != t)))
        _fail(t);
      else
        j_78 = t;
      t = not_null(n_78);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((o_78 != NULL) && (o_78 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_78 = ATgetArgument(t, 0);
          if(((p_78 != NULL) && (p_78 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_78);
      if(((j_78 != NULL) && (j_78 != t)))
        _fail(t);
      else
        j_78 = t;
      t = not_null(p_78);
      if(((i_78 != NULL) && (i_78 != t)))
        _fail(t);
      else
        i_78 = t;
      t = not_null(n_78);
    }
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
        t = not_null(k_78);
        if(((u_78 != NULL) && (u_78 != t)))
          _fail(t);
        else
          u_78 = t;
        t = term_j_55;
        if(((t_78 != NULL) && (t_78 != t)))
          _fail(t);
        else
          t_78 = t;
        t = not_null(u_78);
        t = xtc_query_one_2_1(v_150, w_150, not_null(t_78), t);
        if(((q_78 != NULL) && (q_78 != t)))
          _fail(t);
        else
          q_78 = t;
        t = not_null(k_78);
        if(((s_78 != NULL) && (s_78 != t)))
          _fail(t);
        else
          s_78 = t;
        t = term_q_55;
        if(((r_78 != NULL) && (r_78 != t)))
          _fail(t);
        else
          r_78 = t;
        t = not_null(s_78);
        t = dbg_0_1(not_null(r_78), t);
        t = not_null(q_78);
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        {
          ATerm s_79 = NULL,t_79 = NULL;
          t = not_null(j_78);
          if(((t_79 != NULL) && (t_79 != t)))
            _fail(t);
          else
            t_79 = t;
          t = term_r_55;
          if(((s_79 != NULL) && (s_79 != t)))
            _fail(t);
          else
            s_79 = t;
          t = not_null(t_79);
          t = xtc_query_one_2_1(v_150, w_150, not_null(s_79), t);
          t = xtc_cache_put_0_1(not_null(k_78), t);
        }
      }
  }
  if(((l_78 != NULL) && (l_78 != t)))
    _fail(t);
  else
    l_78 = t;
  return(t);
}
ATerm crush_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,g_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
  if(((k_80 != NULL) && (k_80 != t)))
    _fail(t);
  else
    k_80 = t;
  if(((l_80 != NULL) && (l_80 != t)))
    _fail(t);
  else
    l_80 = t;
  t = not_null(k_80);
  if(((m_80 != NULL) && (m_80 != t)))
    _fail(t);
  else
    m_80 = t;
  t = SSL_explode_term(not_null(m_80));
  if(match_cons(t, sym__2))
    {
      ATerm s_55 = ATgetArgument(t, 0);
      if(((x_79 != NULL) && (x_79 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_80);
  if(((j_80 != NULL) && (j_80 != t)))
    _fail(t);
  else
    j_80 = t;
  t = not_null(x_79);
  t = foldr_3_0(b_135, c_135, d_135, t);
  if(((g_80 != NULL) && (g_80 != t)))
    _fail(t);
  else
    g_80 = t;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  static ATerm s_80 (ATerm t);
  static ATerm s_80 (ATerm t)
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL;
        if(((n_80 != NULL) && (n_80 != t)))
          _fail(t);
        else
          n_80 = t;
        if(((r_80 != NULL) && (r_80 != t)))
          _fail(t);
        else
          r_80 = t;
        t = not_null(n_80);
        t = d_129(t);
        if(((o_80 != NULL) && (o_80 != t)))
          _fail(t);
        else
          o_80 = t;
        t = not_null(r_80);
        if(((q_80 != NULL) && (q_80 != t)))
          _fail(t);
        else
          q_80 = t;
        t = crush_3_0(y_5, e_129, s_80, t);
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(p_80)), not_null(o_80));
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        t = crush_3_0(z_5, e_129, s_80, t);
      }
    return(t);
  }
  t = s_80(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(c_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm x_0, ATerm t)
{
  static ATerm h_81 (ATerm v_80, ATerm t);
  static ATerm i_81 (ATerm b_81, ATerm t);
  static ATerm h_81 (ATerm v_80, ATerm t)
  {
    ATerm w_80 = NULL,x_80 = NULL;
    t = not_null(v_80);
    if(((w_80 != NULL) && (w_80 != t)))
      _fail(t);
    else
      w_80 = t;
    t = not_null(v_80);
    if(((x_80 != NULL) && (x_80 != t)))
      _fail(t);
    else
      x_80 = t;
    t = not_null(x_0);
    t = is_list_0_0(t);
    {
      ATerm a_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_56;
        }
    }
    {
      static ATerm a_6 (ATerm t);
      static ATerm a_6 (ATerm t)
      {
        ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
        if(((z_80 != NULL) && (z_80 != t)))
          _fail(t);
        else
          z_80 = t;
        if(((a_81 != NULL) && (a_81 != t)))
          _fail(t);
        else
          a_81 = t;
        t = not_null(w_80);
        t = xtc_has_meta_0_1(not_null(z_80), t);
        t = not_null(z_80);
        return(t);
      }
      t = filter_1_0(a_6, t);
    }
    if(((x_0 != NULL) && (x_0 != t)))
      _fail(t);
    else
      x_0 = t;
    t = not_null(w_80);
    return(t);
  }
  static ATerm i_81 (ATerm b_81, ATerm t)
  {
    ATerm c_81 = NULL;
    t = not_null(b_81);
    if(((c_81 != NULL) && (c_81 != t)))
      _fail(t);
    else
      c_81 = t;
    t = not_null(b_81);
    {
      static ATerm b_6 (ATerm t);
      static ATerm b_6 (ATerm t)
      {
        if(((x_0 != NULL) && (x_0 != t)))
          _fail(t);
        else
          x_0 = t;
        return(t);
      }
      t = collect_all_1_0(b_6, t);
    }
    {
      ATerm b_56 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_56;
        }
    }
    t = not_null(c_81);
    return(t);
  }
  ATerm d_81 = NULL;
  if(((d_81 != NULL) && (d_81 != t)))
    _fail(t);
  else
    d_81 = t;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_81 = NULL;
        t = not_null(d_81);
        if(((e_81 != NULL) && (e_81 != t)))
          _fail(t);
        else
          e_81 = t;
        t = not_null(x_0);
        t = Nil_0_0(t);
        t = not_null(e_81);
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        {
          ATerm e_56 = t;
          int f_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_81(not_null(d_81), t);
              LocalPopChoice(f_56);
            }
          else
            {
              t = e_56;
              t = i_81(not_null(d_81), t);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm g_81, ATerm t)
{
  ATerm m_81 = NULL,h_91 = NULL,i_91 = NULL,k_91 = NULL,l_91 = NULL;
  if(((m_81 != NULL) && (m_81 != t)))
    _fail(t);
  else
    m_81 = t;
  if(((l_91 != NULL) && (l_91 != t)))
    _fail(t);
  else
    l_91 = t;
  if(((k_91 != NULL) && (k_91 != t)))
    _fail(t);
  else
    k_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_55, not_null(g_81), (ATerm) ATinsert(ATempty, not_null(k_91)));
  t = table_union_0_0(t);
  t = not_null(g_81);
  if(((i_91 != NULL) && (i_91 != t)))
    _fail(t);
  else
    i_91 = t;
  t = term_g_56;
  if(((h_91 != NULL) && (h_91 != t)))
    _fail(t);
  else
    h_91 = t;
  t = not_null(i_91);
  t = dbg_0_1(not_null(h_91), t);
  t = not_null(m_81);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_91 != NULL) && (n_91 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_91 = ATgetArgument(t, 0);
      if(((o_91 != NULL) && (o_91 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(o_91)), not_null(n_91));
  return(t);
}
ATerm foldr_3_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_130(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        ATerm r_91 = NULL,h_92 = NULL,i_92 = NULL,l_92 = NULL,m_92 = NULL,h_93 = NULL,i_93 = NULL,k_93 = NULL,m_93 = NULL,p_93 = NULL,r_93 = NULL;
        if(((r_91 != NULL) && (r_91 != t)))
          _fail(t);
        else
          r_91 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((h_92 != NULL) && (h_92 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              h_92 = ATgetFirst((ATermList) t);
            if(((i_92 != NULL) && (i_92 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              i_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(h_92);
        if(((l_92 != NULL) && (l_92 != t)))
          _fail(t);
        else
          l_92 = t;
        t = not_null(i_92);
        if(((m_92 != NULL) && (m_92 != t)))
          _fail(t);
        else
          m_92 = t;
        t = not_null(r_91);
        if(((i_93 != NULL) && (i_93 != t)))
          _fail(t);
        else
          i_93 = t;
        if(((r_93 != NULL) && (r_93 != t)))
          _fail(t);
        else
          r_93 = t;
        t = not_null(l_92);
        t = g_130(t);
        if(((k_93 != NULL) && (k_93 != t)))
          _fail(t);
        else
          k_93 = t;
        t = not_null(r_93);
        if(((p_93 != NULL) && (p_93 != t)))
          _fail(t);
        else
          p_93 = t;
        t = not_null(m_92);
        t = foldr_3_0(e_130, f_130, g_130, t);
        if(((m_93 != NULL) && (m_93 != t)))
          _fail(t);
        else
          m_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_93), not_null(m_93));
        t = f_130(t);
        if(((h_93 != NULL) && (h_93 != t)))
          _fail(t);
        else
          h_93 = t;
      }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, f_6, t);
      LocalPopChoice(p_56);
      t = conc_0_0(t);
    }
  else
    {
      t = o_56;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(r_56);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = q_56;
      {
        ATerm a_94 = NULL;
        if(((a_94 != NULL) && (a_94 != t)))
          _fail(t);
        else
          a_94 = t;
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm x_93 = NULL;
  if(((x_93 != NULL) && (x_93 != t)))
    _fail(t);
  else
    x_93 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_94 = NULL;
  static ATerm g_6 (ATerm t);
  static ATerm g_6 (ATerm t)
  {
    ATerm e_94 = NULL,g_94 = NULL,s_94 = NULL;
    if(((e_94 != NULL) && (e_94 != t)))
      _fail(t);
    else
      e_94 = t;
    if(((s_94 != NULL) && (s_94 != t)))
      _fail(t);
    else
      s_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_94), not_null(e_94));
    t = table_get_0_0(t);
    if(((g_94 != NULL) && (g_94 != t)))
      _fail(t);
    else
      g_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_94), not_null(g_94));
    return(t);
  }
  if(((c_94 != NULL) && (c_94 != t)))
    _fail(t);
  else
    c_94 = t;
  t = table_keys_0_0(t);
  t = map_1_0(g_6, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm u_81, ATerm t)
{
  t = not_null(u_81);
  t = table_getlist_0_0(t);
  {
    static ATerm h_6 (ATerm t);
    static ATerm h_6 (ATerm t)
    {
      ATerm t_94 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm s_56 = ATgetArgument(t, 0);
          if(((t_94 != NULL) && (t_94 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(t_94);
      t = b_151(t);
      return(t);
    }
    t = filter_1_0(h_6, t);
  }
  t = flatten_list_0_0(t);
  t = c_151(t);
  return(t);
}
ATerm dbg_0_1 (ATerm y_78, ATerm t)
{
  ATerm w_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  if(((d_95 != NULL) && (d_95 != t)))
    _fail(t);
  else
    d_95 = t;
  t = term_t_56;
  if(((w_94 != NULL) && (w_94 != t)))
    _fail(t);
  else
    w_94 = t;
  t = not_null(d_95);
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  if(((c_95 != NULL) && (c_95 != t)))
    _fail(t);
  else
    c_95 = t;
  if(((b_95 != NULL) && (b_95 != t)))
    _fail(t);
  else
    b_95 = t;
  if(((z_94 != NULL) && (z_94 != t)))
    _fail(t);
  else
    z_94 = t;
  t = not_null(a_95);
  t = log_0_3(not_null(w_94), not_null(y_78), not_null(z_94), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm t_81, ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL;
  if(((f_95 != NULL) && (f_95 != t)))
    _fail(t);
  else
    f_95 = t;
  if(((e_95 != NULL) && (e_95 != t)))
    _fail(t);
  else
    e_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(e_95));
  t = table_get_0_0(t);
  t = z_150(t);
  t = a_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,l_95 = NULL;
  if(((g_95 != NULL) && (g_95 != t)))
    _fail(t);
  else
    g_95 = t;
  if(((l_95 != NULL) && (l_95 != t)))
    _fail(t);
  else
    l_95 = t;
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_95 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
        t = not_null(g_95);
        if(((e_96 != NULL) && (e_96 != t)))
          _fail(t);
        else
          e_96 = t;
        t = term_j_55;
        if(((d_96 != NULL) && (d_96 != t)))
          _fail(t);
        else
          d_96 = t;
        t = not_null(e_96);
        t = xtc_query_one_2_1(x_150, y_150, not_null(d_96), t);
        if(((m_95 != NULL) && (m_95 != t)))
          _fail(t);
        else
          m_95 = t;
        t = not_null(g_95);
        if(((c_96 != NULL) && (c_96 != t)))
          _fail(t);
        else
          c_96 = t;
        t = term_q_55;
        if(((b_96 != NULL) && (b_96 != t)))
          _fail(t);
        else
          b_96 = t;
        t = not_null(c_96);
        t = dbg_0_1(not_null(b_96), t);
        t = not_null(m_95);
        LocalPopChoice(v_56);
      }
    else
      {
        t = u_56;
        {
          ATerm f_96 = NULL,j_96 = NULL,k_96 = NULL;
          if(((f_96 != NULL) && (f_96 != t)))
            _fail(t);
          else
            f_96 = t;
          if(((k_96 != NULL) && (k_96 != t)))
            _fail(t);
          else
            k_96 = t;
          t = term_r_55;
          if(((j_96 != NULL) && (j_96 != t)))
            _fail(t);
          else
            j_96 = t;
          t = not_null(k_96);
          t = xtc_query_all_2_1(x_150, y_150, not_null(j_96), t);
          t = xtc_cache_put_0_1(not_null(g_95), t);
        }
      }
  }
  if(((h_95 != NULL) && (h_95 != t)))
    _fail(t);
  else
    h_95 = t;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_96 = NULL;
  if(((z_96 != NULL) && (z_96 != t)))
    _fail(t);
  else
    z_96 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      p_96 = ATgetArgument(t, 0);
      {
        ATerm w_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
            t = not_null(o_96);
            if(((r_96 != NULL) && (r_96 != t)))
              _fail(t);
            else
              r_96 = t;
            t = not_null(p_96);
            if(((q_96 != NULL) && (q_96 != t)))
              _fail(t);
            else
              q_96 = t;
            t = not_null(o_96);
            if(((u_96 != NULL) && (u_96 != t)))
              _fail(t);
            else
              u_96 = t;
            t = not_null(q_96);
            t = is_list_0_0(t);
            t = not_null(r_96);
            {
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(q_96), t);
                return(t);
              }
              t = xtc_query_all_2_0(i_6, w_0, t);
            }
            if(((t_96 != NULL) && (t_96 != t)))
              _fail(t);
            else
              t_96 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_96), not_null(t_96));
            LocalPopChoice(y_56);
          }
        else
          {
            t = w_56;
            {
              ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
              t = not_null(o_96);
              if(((w_96 != NULL) && (w_96 != t)))
                _fail(t);
              else
                w_96 = t;
              t = not_null(p_96);
              if(((v_96 != NULL) && (v_96 != t)))
                _fail(t);
              else
                v_96 = t;
              t = not_null(o_96);
              if(((y_96 != NULL) && (y_96 != t)))
                _fail(t);
              else
                y_96 = t;
              t = not_null(v_96);
              t = is_string_0_0(t);
              t = not_null(w_96);
              t = xtc_query_one_2_0(j_6, w_0, t);
              if(((x_96 != NULL) && (x_96 != t)))
                _fail(t);
              else
                x_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_96), not_null(x_96));
            }
          }
      }
    }
  else
    {
      ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((p_96 != NULL) && (p_96 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_96 = ATgetArgument(t, 0);
          if(((n_96 != NULL) && (n_96 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_96 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_96);
      if(((c_97 != NULL) && (c_97 != t)))
        _fail(t);
      else
        c_97 = t;
      t = not_null(p_96);
      if(((b_97 != NULL) && (b_97 != t)))
        _fail(t);
      else
        b_97 = t;
      t = not_null(n_96);
      if(((a_97 != NULL) && (a_97 != t)))
        _fail(t);
      else
        a_97 = t;
      t = not_null(o_96);
      if(((f_97 != NULL) && (f_97 != t)))
        _fail(t);
      else
        f_97 = t;
      t = not_null(b_97);
      t = is_string_0_0(t);
      t = not_null(a_97);
      t = is_list_0_0(t);
      t = not_null(c_97);
      {
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(a_97), t);
          return(t);
        }
        t = xtc_query_one_2_0(k_6, w_0, t);
      }
      if(((e_97 != NULL) && (e_97 != t)))
        _fail(t);
      else
        e_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_97), not_null(e_97));
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
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((h_97 != NULL) && (h_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_97 = ATgetArgument(t, 0);
      if(((i_97 != NULL) && (i_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_97 = ATgetArgument(t, 1);
      if(((g_97 != NULL) && (g_97 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_97 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((j_97 != NULL) && (j_97 != t)))
    _fail(t);
  else
    j_97 = t;
  if(((l_97 != NULL) && (l_97 != t)))
    _fail(t);
  else
    l_97 = t;
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_97), not_null(i_97));
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
        t = (ATerm) ATempty;
      }
  }
  if(((m_97 != NULL) && (m_97 != t)))
    _fail(t);
  else
    m_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_97), not_null(m_97));
  t = union_0_0(t);
  if(((k_97 != NULL) && (k_97 != t)))
    _fail(t);
  else
    k_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_97), not_null(i_97), not_null(k_97));
  t = set_0_0(t);
  t = not_null(j_97);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((p_97 != NULL) && (p_97 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        p_97 = ATgetFirst((ATermList) t);
      if(((o_97 != NULL) && (o_97 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((q_97 != NULL) && (q_97 != t)))
    _fail(t);
  else
    q_97 = t;
  t = s_127(t);
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
      if(((r_97 != NULL) && (r_97 != t)))
        _fail(t);
      else
        r_97 = t;
      if(((t_97 != NULL) && (t_97 != t)))
        _fail(t);
      else
        t_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_97), not_null(r_97));
      t = r_127(t);
      if(((s_97 != NULL) && (s_97 != t)))
        _fail(t);
      else
        s_97 = t;
      return(t);
    }
    t = fetch_1_0(l_6, t);
  }
  t = not_null(o_97);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm z_97 = NULL;
  if(((z_97 != NULL) && (z_97 != t)))
    _fail(t);
  else
    z_97 = t;
  return(t);
}
ATerm union_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_97 != NULL) && (w_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_97 = ATgetArgument(t, 0);
      if(((v_97 != NULL) && (v_97 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = not_null(w_97);
  {
    static ATerm a_98 (ATerm t);
    static ATerm a_98 (ATerm t)
    {
      ATerm b_57 = t;
      int c_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(v_97);
          LocalPopChoice(c_57);
        }
      else
        {
          t = b_57;
          {
            ATerm d_57 = t;
            int e_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm m_6 (ATerm t);
                static ATerm m_6 (ATerm t)
                {
                  t = not_null(v_97);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, m_6, t);
                t = a_98(t);
                LocalPopChoice(e_57);
              }
            else
              {
                t = d_57;
                t = Cons_2_0(n_6, a_98, t);
              }
          }
        }
      return(t);
    }
    t = a_98(t);
  }
  if(((x_97 != NULL) && (x_97 != t)))
    _fail(t);
  else
    x_97 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm c_98 = NULL;
  if(((c_98 != NULL) && (c_98 != t)))
    _fail(t);
  else
    c_98 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm b_80, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm d_98 = NULL,e_98 = NULL;
    if(((e_98 != NULL) && (e_98 != t)))
      _fail(t);
    else
      e_98 = t;
    if(((d_98 != NULL) && (d_98 != t)))
      _fail(t);
    else
      d_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_98), not_null(b_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(o_6, p_6, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm a_80, ATerm t)
{
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(a_80), t);
    return(t);
  }
  t = map_1_0(q_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  if(((n_98 != NULL) && (n_98 != t)))
    _fail(t);
  else
    n_98 = t;
  t = Fst_0_0(t);
  if(((k_98 != NULL) && (k_98 != t)))
    _fail(t);
  else
    k_98 = t;
  t = not_null(n_98);
  if(((m_98 != NULL) && (m_98 != t)))
    _fail(t);
  else
    m_98 = t;
  t = Snd_0_0(t);
  if(((l_98 != NULL) && (l_98 != t)))
    _fail(t);
  else
    l_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_48, not_null(k_98), not_null(l_98));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm u_0, ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL;
  if(((g_98 != NULL) && (g_98 != t)))
    _fail(t);
  else
    g_98 = t;
  if(match_cons(t, sym_Reference_1))
    {
      h_98 = ATgetArgument(t, 0);
      {
        ATerm j_98 = NULL;
        t = not_null(h_98);
        if(((j_98 != NULL) && (j_98 != t)))
          _fail(t);
        else
          j_98 = t;
        t = xtc_add_meta_all_0_1(not_null(u_0), t);
        t = map_1_0(r_6, t);
      }
    }
  else
    {
      ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((h_98 != NULL) && (h_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_98 = ATgetArgument(t, 0);
          if(((i_98 != NULL) && (i_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_98 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(h_98);
      if(((o_98 != NULL) && (o_98 != t)))
        _fail(t);
      else
        o_98 = t;
      t = not_null(i_98);
      if(((p_98 != NULL) && (p_98 != t)))
        _fail(t);
      else
        p_98 = t;
      t = not_null(g_98);
      if(((r_98 != NULL) && (r_98 != t)))
        _fail(t);
      else
        r_98 = t;
      t = not_null(p_98);
      t = xtc_add_meta_all_0_1(not_null(u_0), t);
      if(((q_98 != NULL) && (q_98 != t)))
        _fail(t);
      else
        q_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_55, not_null(o_98), not_null(q_98));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm g_79, ATerm t)
{
  static ATerm s_6 (ATerm t);
  static ATerm s_6 (ATerm t)
  {
    static ATerm t_6 (ATerm t);
    static ATerm t_6 (ATerm t)
    {
      t = xtc_register_0_1(not_null(g_79), t);
      return(t);
    }
    t = map_1_0(t_6, t);
    return(t);
  }
  t = Repository_1_0(s_6, t);
  return(t);
}
ATerm Repository_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,u_6 = NULL,e_12 = NULL;
  if(((x_98 != NULL) && (x_98 != t)))
    _fail(t);
  else
    x_98 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((t_98 != NULL) && (t_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((y_98 != NULL) && (y_98 != t)))
    _fail(t);
  else
    y_98 = t;
  t = SSLgetAnnotations(not_null(x_98));
  if(((s_98 != NULL) && (s_98 != t)))
    _fail(t);
  else
    s_98 = t;
  t = not_null(t_98);
  t = b_109(t);
  if(((u_98 != NULL) && (u_98 != t)))
    _fail(t);
  else
    u_98 = t;
  if(((w_98 != NULL) && (w_98 != t)))
    _fail(t);
  else
    w_98 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(u_98));
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = SSLsetAnnotations(not_null(u_6), not_null(s_98));
  if(((v_98 != NULL) && (v_98 != t)))
    _fail(t);
  else
    v_98 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL;
  if(((a_99 != NULL) && (a_99 != t)))
    _fail(t);
  else
    a_99 = t;
  if(((z_98 != NULL) && (z_98 != t)))
    _fail(t);
  else
    z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_f_57), not_null(z_98));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  if(((c_99 != NULL) && (c_99 != t)))
    _fail(t);
  else
    c_99 = t;
  t = get_extension_0_0(t);
  if(((b_99 != NULL) && (b_99 != t)))
    _fail(t);
  else
    b_99 = t;
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_99 = NULL;
        if(((d_99 != NULL) && (d_99 != t)))
          _fail(t);
        else
          d_99 = t;
        t = not_null(b_99);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(d_99);
        LocalPopChoice(h_57);
        t = (ATerm) ATinsert(ATempty, term_y_58);
      }
    else
      {
        t = g_57;
        t = not_null(c_99);
        {
          ATerm z_58 = t;
          int a_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_99 = NULL;
              if(((e_99 != NULL) && (e_99 != t)))
                _fail(t);
              else
                e_99 = t;
              t = not_null(b_99);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(e_99);
              LocalPopChoice(a_59);
              t = (ATerm) ATinsert(ATempty, term_m_59);
            }
          else
            {
              t = z_58;
              t = not_null(c_99);
              {
                ATerm q_59 = t;
                int s_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_99 = NULL;
                    if(((f_99 != NULL) && (f_99 != t)))
                      _fail(t);
                    else
                      f_99 = t;
                    t = not_null(b_99);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(f_99);
                    LocalPopChoice(s_59);
                    t = (ATerm) ATinsert(ATempty, term_m_59);
                  }
                else
                  {
                    t = q_59;
                    t = not_null(c_99);
                    {
                      ATerm u_59 = t;
                      int v_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_99 = NULL;
                          if(((g_99 != NULL) && (g_99 != t)))
                            _fail(t);
                          else
                            g_99 = t;
                          t = not_null(b_99);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(g_99);
                          LocalPopChoice(v_59);
                          t = (ATerm) ATinsert(ATempty, term_i_60);
                        }
                      else
                        {
                          t = u_59;
                          t = not_null(c_99);
                          {
                            ATerm j_60 = t;
                            int k_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_99 = NULL;
                                if(((h_99 != NULL) && (h_99 != t)))
                                  _fail(t);
                                else
                                  h_99 = t;
                                t = not_null(b_99);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(h_99);
                                LocalPopChoice(k_60);
                                t = (ATerm) ATinsert(ATempty, term_n_60);
                              }
                            else
                              {
                                t = j_60;
                                t = not_null(c_99);
                                {
                                  ATerm o_60 = t;
                                  int p_60 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_99 = NULL;
                                      if(((i_99 != NULL) && (i_99 != t)))
                                        _fail(t);
                                      else
                                        i_99 = t;
                                      t = not_null(b_99);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(i_99);
                                      LocalPopChoice(p_60);
                                      t = (ATerm) ATinsert(ATempty, term_n_60);
                                    }
                                  else
                                    {
                                      t = o_60;
                                      t = not_null(c_99);
                                      {
                                        ATerm q_60 = t;
                                        int r_60 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm j_99 = NULL;
                                            if(((j_99 != NULL) && (j_99 != t)))
                                              _fail(t);
                                            else
                                              j_99 = t;
                                            t = not_null(b_99);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(j_99);
                                            LocalPopChoice(r_60);
                                            t = (ATerm) ATinsert(ATempty, term_u_60);
                                          }
                                        else
                                          {
                                            t = q_60;
                                            t = not_null(c_99);
                                            {
                                              ATerm v_60 = t;
                                              int w_60 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_99 = NULL;
                                                  if(((k_99 != NULL) && (k_99 != t)))
                                                    _fail(t);
                                                  else
                                                    k_99 = t;
                                                  t = not_null(b_99);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(k_99);
                                                  LocalPopChoice(w_60);
                                                  t = (ATerm) ATinsert(ATempty, term_b_65);
                                                }
                                              else
                                                {
                                                  t = v_60;
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
  ATerm l_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_99 != NULL) && (l_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_99 = ATgetArgument(t, 0);
      if(((l_99 != NULL) && (l_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_99 = NULL;
  if(((o_99 != NULL) && (o_99 != t)))
    _fail(t);
  else
    o_99 = t;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm p_99 = NULL;
  if(((p_99 != NULL) && (p_99 != t)))
    _fail(t);
  else
    p_99 = t;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm v_6 (ATerm t);
    static ATerm v_6 (ATerm t)
    {
      ATerm c_65 = t;
      int g_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(w_6, v_6, t);
          LocalPopChoice(g_65);
        }
      else
        {
          t = c_65;
          {
            ATerm q_65 = t;
            int t_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(x_6, y_6, t);
                LocalPopChoice(t_65);
              }
            else
              {
                t = q_65;
                t = Cons_2_0(z_6, h_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(v_6, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_99 = NULL;
  if(((s_99 != NULL) && (s_99 != t)))
    _fail(t);
  else
    s_99 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(a_7, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  if(((w_99 != NULL) && (w_99 != t)))
    _fail(t);
  else
    w_99 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((t_99 != NULL) && (t_99 != t)))
    _fail(t);
  else
    t_99 = t;
  t = not_null(w_99);
  if(((v_99 != NULL) && (v_99 != t)))
    _fail(t);
  else
    v_99 = t;
  t = base_filename_0_0(t);
  if(((u_99 != NULL) && (u_99 != t)))
    _fail(t);
  else
    u_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_99), not_null(u_99));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_99 = NULL;
      if(((x_99 != NULL) && (x_99 != t)))
        _fail(t);
      else
        x_99 = t;
      t = has_no_extension_0_0(t);
      t = not_null(x_99);
      LocalPopChoice(v_65);
      t = (ATerm) ATinsert(ATempty, term_h_66);
    }
  else
    {
      t = u_65;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((y_99 != NULL) && (y_99 != t)))
    _fail(t);
  else
    y_99 = t;
  t = not_null(b_100);
  if(((a_100 != NULL) && (a_100 != t)))
    _fail(t);
  else
    a_100 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((z_99 != NULL) && (z_99 != t)))
    _fail(t);
  else
    z_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_99), not_null(z_99));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_100 != NULL) && (c_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_100 = ATgetArgument(t, 0);
      if(((d_100 != NULL) && (d_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_100 != NULL) && (f_100 != t)))
    _fail(t);
  else
    f_100 = t;
  if(((h_100 != NULL) && (h_100 != t)))
    _fail(t);
  else
    h_100 = t;
  t = not_null(d_100);
  t = xtc_default_xt_meta_0_0(t);
  if(((g_100 != NULL) && (g_100 != t)))
    _fail(t);
  else
    g_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_67, (ATerm) ATmakeAppl(sym_String_1, not_null(c_100)))), not_null(g_100));
  t = conc_0_0(t);
  if(((e_100 != NULL) && (e_100 != t)))
    _fail(t);
  else
    e_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_100), not_null(e_100));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_68 = ATgetArgument(t, 0);
      if(match_cons(i_68, sym_Tool_1))
        {
          if(((i_100 != NULL) && (i_100 != ATgetArgument(i_68, 0))))
            _fail(ATgetArgument(i_68, 0));
          else
            i_100 = ATgetArgument(i_68, 0);
        }
      else
        _fail(t);
      if(((j_100 != NULL) && (j_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = not_null(j_100);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((k_100 != NULL) && (k_100 != t)))
    _fail(t);
  else
    k_100 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(i_100), not_null(k_100));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_100), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_68 = ATgetArgument(t, 0);
      if(!(match_cons(j_68, sym_Import_0)))
        _fail(t);
      if(((m_100 != NULL) && (m_100 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_100 != NULL) && (o_100 != t)))
    _fail(t);
  else
    o_100 = t;
  t = not_null(m_100);
  t = map_1_0(b_7, t);
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(n_100));
  return(t);
}
ATerm restore_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm i_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_115(t);
      LocalPopChoice(m_69);
    }
  else
    {
      t = i_69;
      t = p_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = filter_1_0(e_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL;
  t = term_f_18;
  if(((s_100 != NULL) && (s_100 != t)))
    _fail(t);
  else
    s_100 = t;
  t = term_n_69;
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  t = not_null(s_100);
  t = err_0_1(not_null(r_100), t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_69 = t;
  int p_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(p_69);
    }
  else
    {
      t = o_69;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(c_7, d_7, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm t_100 = NULL,w_100 = NULL;
  if(((w_100 != NULL) && (w_100 != t)))
    _fail(t);
  else
    w_100 = t;
  t = xtc_convert_0_0(t);
  if(((t_100 != NULL) && (t_100 != t)))
    _fail(t);
  else
    t_100 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(t_100));
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,b_101 = NULL,c_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_100 != NULL) && (x_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_100 = ATgetArgument(t, 0);
      {
        ATerm q_69 = ATgetArgument(t, 1);
        if(match_cons(q_69, sym_Stream_1))
          {
            if(((y_100 != NULL) && (y_100 != ATgetArgument(q_69, 0))))
              _fail(ATgetArgument(q_69, 0));
            else
              y_100 = ATgetArgument(q_69, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(x_100), not_null(y_100));
  if(((c_101 != NULL) && (c_101 != t)))
    _fail(t);
  else
    c_101 = t;
  if(((b_101 != NULL) && (b_101 != t)))
    _fail(t);
  else
    b_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_101));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL;
  if(((g_101 != NULL) && (g_101 != t)))
    _fail(t);
  else
    g_101 = t;
  if(((d_101 != NULL) && (d_101 != t)))
    _fail(t);
  else
    d_101 = t;
  t = not_null(g_101);
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = term_f_18;
  t = log_stream_0_0(t);
  if(((e_101 != NULL) && (e_101 != t)))
    _fail(t);
  else
    e_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_101), not_null(e_101));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_69 = ATgetArgument(t, 0);
      if(match_cons(r_69, sym_Stream_1))
        {
          if(((h_101 != NULL) && (h_101 != ATgetArgument(r_69, 0))))
            _fail(ATgetArgument(r_69, 0));
          else
            h_101 = ATgetArgument(r_69, 0);
        }
      else
        _fail(t);
      if(((i_101 != NULL) && (i_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(h_101), not_null(i_101));
  if(((k_101 != NULL) && (k_101 != t)))
    _fail(t);
  else
    k_101 = t;
  if(((j_101 != NULL) && (j_101 != t)))
    _fail(t);
  else
    j_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_101));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm s_69 = t;
  int t_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_69;
      t = get_config_0_0(t);
      LocalPopChoice(t_69);
    }
  else
    {
      t = s_69;
      t = term_f_18;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_101 != NULL) && (l_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_101 = ATgetArgument(t, 0);
      if(((m_101 != NULL) && (m_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_69 = t;
    int f_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(l_101), not_null(m_101));
        LocalPopChoice(f_70);
      }
    else
      {
        t = v_69;
        t = SSL_subtr(not_null(l_101), not_null(m_101));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm t)
{
  static ATerm n_101 (ATerm t);
  static ATerm n_101 (ATerm t)
  {
    ATerm g_70 = t;
    int j_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(j_70);
      }
    else
      {
        t = g_70;
        t = m_116(t);
        t = n_101(t);
      }
    return(t);
  }
  t = n_101(t);
  return(t);
}
ATerm for_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t)
{
  t = o_116(t);
  t = while_not_2_0(p_116, q_116, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_101 != NULL) && (o_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_101 = ATgetArgument(t, 0);
      if(((p_101 != NULL) && (p_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_101), not_null(p_101), (ATerm) ATempty);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_70 = ATgetArgument(t, 0);
      if(((ATgetType(k_70) != AT_INT) || (ATgetInt((ATermInt) k_70) != 0)))
        _fail(t);
      if(((q_101 != NULL) && (q_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_101 = ATgetArgument(t, 1);
      if(((r_101 != NULL) && (r_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(r_101);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((s_101 != NULL) && (s_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_101 = ATgetArgument(t, 0);
      if(((t_101 != NULL) && (t_101 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_101 = ATgetArgument(t, 1);
      if(((u_101 != NULL) && (u_101 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_101 != NULL) && (x_101 != t)))
    _fail(t);
  else
    x_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_101), term_u_12);
  t = geq_0_0(t);
  t = not_null(x_101);
  if(((w_101 != NULL) && (w_101 != t)))
    _fail(t);
  else
    w_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_101), term_u_12);
  t = subt_0_0(t);
  if(((v_101 != NULL) && (v_101 != t)))
    _fail(t);
  else
    v_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_101), not_null(t_101), (ATerm) ATinsert(CheckATermList(not_null(u_101)), not_null(t_101)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(f_7, g_7, h_7, t);
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
  ATerm y_101 = NULL;
  if(((y_101 != NULL) && (y_101 != t)))
    _fail(t);
  else
    y_101 = t;
  t = SSL_strlen(not_null(y_101));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm a_102 = NULL;
  if(((a_102 != NULL) && (a_102 != t)))
    _fail(t);
  else
    a_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_l_70;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_o_70;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_p_70;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_q_70;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_r_70;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_u_70;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_x_70;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_y_70;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_z_70;
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
static ATerm i_7 (ATerm t)
{
  ATerm c_102 = NULL;
  if(((c_102 != NULL) && (c_102 != t)))
    _fail(t);
  else
    c_102 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm d_102 (ATerm t);
  static ATerm d_102 (ATerm t)
  {
    ATerm a_71 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_7, d_102, t);
        LocalPopChoice(l_71);
      }
    else
      {
        t = a_71;
        t = c_124(t);
      }
    return(t);
  }
  t = d_102(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm e_102 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm j_7 (ATerm t);
    static ATerm j_7 (ATerm t)
    {
      static ATerm k_7 (ATerm t);
      static ATerm k_7 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_71 = ATgetFirst((ATermList) t);
            if(((ATgetType(o_71) != AT_INT) || (ATgetInt((ATermInt) o_71) != 47)))
              _fail(t);
            if(((e_102 != NULL) && (e_102 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(k_7, t);
      t = not_null(e_102);
      return(t);
    }
    t = try_1_0(j_7, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm p_71 = t;
  int q_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(q_71);
    }
  else
    {
      t = p_71;
      t = term_r_71;
    }
  return(t);
}
ATerm log_0_2 (ATerm d_79, ATerm e_79, ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
    if(((f_102 != NULL) && (f_102 != t)))
      _fail(t);
    else
      f_102 = t;
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = log_src_0_0(t);
    if(((g_102 != NULL) && (g_102 != t)))
      _fail(t);
    else
      g_102 = t;
    t = not_null(j_102);
    if(((i_102 != NULL) && (i_102 != t)))
      _fail(t);
    else
      i_102 = t;
    t = not_null(d_79);
    t = severity_string_0_0(t);
    if(((h_102 != NULL) && (h_102 != t)))
      _fail(t);
    else
      h_102 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_72), not_null(e_79)), term_c_72), not_null(g_102)), term_b_72), not_null(h_102)), term_s_71);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(f_102);
    return(t);
  }
  t = if_log_severity_1_1(l_7, not_null(d_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm o_150 (ATerm), ATerm z_78, ATerm t)
{
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL;
      if(((l_102 != NULL) && (l_102 != t)))
        _fail(t);
      else
        l_102 = t;
      if(((n_102 != NULL) && (n_102 != t)))
        _fail(t);
      else
        n_102 = t;
      t = term_r_12;
      {
        ATerm a_73 = t;
        int b_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(b_73);
          }
        else
          {
            t = a_73;
            t = term_c_73;
          }
      }
      if(((m_102 != NULL) && (m_102 != t)))
        _fail(t);
      else
        m_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_102), not_null(z_78));
      t = geq_0_0(t);
      t = not_null(l_102);
      LocalPopChoice(f_72);
      t = o_150(t);
    }
  else
    {
      t = e_72;
      {
        ATerm o_102 = NULL;
        if(((o_102 != NULL) && (o_102 != t)))
          _fail(t);
        else
          o_102 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm q_102 = NULL;
  if(((q_102 != NULL) && (q_102 != t)))
    _fail(t);
  else
    q_102 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_k_16;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_e_15;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_u_13;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_q_13;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_u_12;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_c_73;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_d_73;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_e_73;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_f_73;
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
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  if(((s_102 != NULL) && (s_102 != t)))
    _fail(t);
  else
    s_102 = t;
  if(((u_102 != NULL) && (u_102 != t)))
    _fail(t);
  else
    u_102 = t;
  t = not_null(f_79);
  t = verbose_level_0_0(t);
  if(((t_102 != NULL) && (t_102 != t)))
    _fail(t);
  else
    t_102 = t;
  if(((r_102 != NULL) && (r_102 != t)))
    _fail(t);
  else
    r_102 = t;
  t = not_null(s_102);
  t = log_if_verbose_1_1(p_150, not_null(r_102), t);
  return(t);
}
ATerm log_0_3 (ATerm a_79, ATerm b_79, ATerm c_79, ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL;
    t = log_0_2(not_null(a_79), not_null(b_79), t);
    if(((v_102 != NULL) && (v_102 != t)))
      _fail(t);
    else
      v_102 = t;
    if(((z_102 != NULL) && (z_102 != t)))
      _fail(t);
    else
      z_102 = t;
    if(((b_103 != NULL) && (b_103 != t)))
      _fail(t);
    else
      b_103 = t;
    t = not_null(a_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((a_103 != NULL) && (a_103 != t)))
      _fail(t);
    else
      a_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_103), term_u_13);
    t = add_0_0(t);
    if(((y_102 != NULL) && (y_102 != t)))
      _fail(t);
    else
      y_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_102), term_e_74);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    t = log_stream_0_0(t);
    if(((w_102 != NULL) && (w_102 != t)))
      _fail(t);
    else
      w_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_102), not_null(c_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_d_72;
    t = log_puts_0_0(t);
    t = not_null(v_102);
    return(t);
  }
  t = if_log_severity_1_1(m_7, not_null(a_79), t);
  return(t);
}
ATerm notice_0_1 (ATerm x_78, ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  if(((h_103 != NULL) && (h_103 != t)))
    _fail(t);
  else
    h_103 = t;
  t = term_l_74;
  if(((c_103 != NULL) && (c_103 != t)))
    _fail(t);
  else
    c_103 = t;
  t = not_null(h_103);
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  if(((g_103 != NULL) && (g_103 != t)))
    _fail(t);
  else
    g_103 = t;
  if(((f_103 != NULL) && (f_103 != t)))
    _fail(t);
  else
    f_103 = t;
  if(((d_103 != NULL) && (d_103 != t)))
    _fail(t);
  else
    d_103 = t;
  t = not_null(e_103);
  t = log_0_3(not_null(c_103), not_null(x_78), not_null(d_103), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_74 = ATgetArgument(t, 0);
      if(match_cons(m_74, sym_Stream_1))
        {
          if(((i_103 != NULL) && (i_103 != ATgetArgument(m_74, 0))))
            _fail(ATgetArgument(m_74, 0));
          else
            i_103 = ATgetArgument(m_74, 0);
        }
      else
        _fail(t);
      if(((j_103 != NULL) && (j_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(i_103), not_null(j_103));
  if(((l_103 != NULL) && (l_103 != t)))
    _fail(t);
  else
    l_103 = t;
  if(((k_103 != NULL) && (k_103 != t)))
    _fail(t);
  else
    k_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_103));
  return(t);
}
static ATerm y_103 (ATerm p_103, ATerm q_103, ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL;
  t = not_null(p_103);
  if(((r_103 != NULL) && (r_103 != t)))
    _fail(t);
  else
    r_103 = t;
  t = SSL_fclose(not_null(r_103));
  return(t);
}
static ATerm z_103 (ATerm t_103, ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL;
  t = not_null(t_103);
  if(((v_103 != NULL) && (v_103 != t)))
    _fail(t);
  else
    v_103 = t;
  t = SSL_fclose(not_null(v_103));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL;
  if(((x_103 != NULL) && (x_103 != t)))
    _fail(t);
  else
    x_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_103 = ATgetArgument(t, 0);
      {
        ATerm n_74 = t;
        int o_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_103(not_null(w_103), not_null(x_103), t);
            LocalPopChoice(o_74);
          }
        else
          {
            t = n_74;
            t = z_103(not_null(x_103), t);
          }
      }
    }
  else
    {
      t = z_103(not_null(x_103), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_104 != NULL) && (a_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_104 = ATgetArgument(t, 0);
      if(((b_104 != NULL) && (b_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(a_104), not_null(b_104));
  if(((d_104 != NULL) && (d_104 != t)))
    _fail(t);
  else
    d_104 = t;
  if(((c_104 != NULL) && (c_104 != t)))
    _fail(t);
  else
    c_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_104));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL;
  t = SSL_stdin_stream();
  if(((f_104 != NULL) && (f_104 != t)))
    _fail(t);
  else
    f_104 = t;
  if(((e_104 != NULL) && (e_104 != t)))
    _fail(t);
  else
    e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_104));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  t = SSL_stdout_stream();
  if(((h_104 != NULL) && (h_104 != t)))
    _fail(t);
  else
    h_104 = t;
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_104));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL;
  t = SSL_stderr_stream();
  if(((j_104 != NULL) && (j_104 != t)))
    _fail(t);
  else
    j_104 = t;
  if(((i_104 != NULL) && (i_104 != t)))
    _fail(t);
  else
    i_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_104));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_104 = NULL;
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(l_104);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(l_104);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(l_104);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm o_104 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((o_104 != NULL) && (o_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(o_104);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm p_104 = NULL;
  if(((p_104 != NULL) && (p_104 != t)))
    _fail(t);
  else
    p_104 = t;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm q_104 = NULL;
  if(((q_104 != NULL) && (q_104 != t)))
    _fail(t);
  else
    q_104 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_74 = ATgetArgument(t, 0);
      ATerm q_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_74 = t;
    int s_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(s_74);
      }
    else
      {
        t = r_74;
        {
          ATerm t_74 = t;
          int u_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(n_7, o_7, t);
              t = fopen_0_0(t);
              LocalPopChoice(u_74);
            }
          else
            {
              t = t_74;
              t = _2_0(is_string_0_0, p_7, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_104 != NULL) && (w_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_104 = ATgetArgument(t, 0);
      if(((r_104 != NULL) && (r_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_104);
  if(((v_104 != NULL) && (v_104 != t)))
    _fail(t);
  else
    v_104 = t;
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_104), term_g_75);
  t = open_stream_0_0(t);
  if(((t_104 != NULL) && (t_104 != t)))
    _fail(t);
  else
    t_104 = t;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_104), not_null(r_104));
  t = x_122(t);
  t = fclose_0_0(t);
  t = not_null(r_104);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm x_104 = NULL;
  if(((x_104 != NULL) && (x_104 != t)))
    _fail(t);
  else
    x_104 = t;
  t = SSL_creat(not_null(x_104));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
  static ATerm q_7 (ATerm t);
  static ATerm q_7 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_104 != NULL) && (y_104 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_104 = ATgetFirst((ATermList) t);
        {
          ATerm h_75 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(h_75) != AT_LIST) || !(ATisEmpty(h_75))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(q_7, t);
  if(((a_105 != NULL) && (a_105 != t)))
    _fail(t);
  else
    a_105 = t;
  if(((z_104 != NULL) && (z_104 != t)))
    _fail(t);
  else
    z_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(y_104));
  return(t);
}
ATerm repeat_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm b_105 (ATerm t);
  static ATerm b_105 (ATerm t)
  {
    ATerm f_76 = t;
    int r_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        t = b_105(t);
        LocalPopChoice(r_76);
      }
    else
      {
        t = f_76;
        t = v_115(t);
      }
    return(t);
  }
  t = b_105(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm d_105 = NULL;
  if(((d_105 != NULL) && (d_105 != t)))
    _fail(t);
  else
    d_105 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  t = repeat_2_0(x_115, r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm g_105 = NULL;
  if(((g_105 != NULL) && (g_105 != t)))
    _fail(t);
  else
    g_105 = t;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm h_105 = NULL;
  if(((h_105 != NULL) && (h_105 != t)))
    _fail(t);
  else
    h_105 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm i_105 (ATerm t);
  static ATerm i_105 (ATerm t)
  {
    ATerm h_78 = t;
    int h_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_7, Nil_0_0, t);
        t = f_124(t);
        LocalPopChoice(h_79);
      }
    else
      {
        t = h_78;
        t = Cons_2_0(t_7, i_105, t);
      }
    return(t);
  }
  t = i_105(t);
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
static ATerm u_7 (ATerm t)
{
  t = try_1_0(v_7, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_i_79);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(w_7, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_f_57);
        }
      else
        {
          t = repeat_1_0(z_7, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_i_79);
            }
          else
            {
              ATerm o_105 = NULL;
              if(((o_105 != NULL) && (o_105 != t)))
                _fail(t);
              else
                o_105 = t;
            }
        }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm l_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((l_105 != NULL) && (l_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_105 = ATgetArgument(t, 0);
      {
        ATerm j_79 = ATgetArgument(t, 1);
        if(((ATgetType(j_79) != AT_INT) || (ATgetInt((ATermInt) j_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(l_105);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(x_7, y_7, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm m_105 = NULL;
  if(((m_105 != NULL) && (m_105 != t)))
    _fail(t);
  else
    m_105 = t;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_79 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_79;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm n_105 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_105 != NULL) && (n_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_105 = ATgetArgument(t, 0);
      {
        ATerm l_79 = ATgetArgument(t, 1);
        if(((ATgetType(l_79) != AT_INT) || (ATgetInt((ATermInt) l_79) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(n_105);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(u_7, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm p_105 = NULL;
  if(((p_105 != NULL) && (p_105 != t)))
    _fail(t);
  else
    p_105 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(p_105);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm m_79 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_79;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL;
  if(((r_105 != NULL) && (r_105 != t)))
    _fail(t);
  else
    r_105 = t;
  if(((q_105 != NULL) && (q_105 != t)))
    _fail(t);
  else
    q_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_105), (ATerm) ATinsert(ATempty, term_n_79));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm r_79, ATerm t)
{
  ATerm o_79 = t;
  int p_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_105 = NULL;
      if(((s_105 != NULL) && (s_105 != t)))
        _fail(t);
      else
        s_105 = t;
      t = not_null(r_79);
      {
        ATerm q_79 = t;
        int u_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(u_79);
          }
        else
          {
            t = q_79;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(s_105);
      LocalPopChoice(p_79);
      {
        ATerm t_105 = NULL,u_105 = NULL;
        if(((u_105 != NULL) && (u_105 != t)))
          _fail(t);
        else
          u_105 = t;
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_79), not_null(t_105));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = o_79;
      {
        ATerm v_105 = NULL,w_105 = NULL;
        t = not_null(r_79);
        if(((w_105 != NULL) && (w_105 != t)))
          _fail(t);
        else
          w_105 = t;
        t = term_w_79;
        if(((v_105 != NULL) && (v_105 != t)))
          _fail(t);
        else
          v_105 = t;
        t = not_null(w_105);
        t = err_0_1(not_null(v_105), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm x_105 = NULL;
  if(((x_105 != NULL) && (x_105 != t)))
    _fail(t);
  else
    x_105 = t;
  {
    ATerm d_80 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_80;
      }
  }
  t = term_f_80;
  t = xtc_save_file_0_1(not_null(x_105), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm y_105 = NULL;
  if(((y_105 != NULL) && (y_105 != t)))
    _fail(t);
  else
    y_105 = t;
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_105 = NULL,a_106 = NULL;
        t = not_null(y_105);
        if(((a_106 != NULL) && (a_106 != t)))
          _fail(t);
        else
          a_106 = t;
        t = not_null(y_105);
        if(((z_105 != NULL) && (z_105 != t)))
          _fail(t);
        else
          z_105 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_105));
        t = read_from_0_0(t);
        LocalPopChoice(i_80);
      }
    else
      {
        t = h_80;
        {
          ATerm t_80 = t;
          int u_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL;
              t = not_null(y_105);
              if(((d_106 != NULL) && (d_106 != t)))
                _fail(t);
              else
                d_106 = t;
              t = not_null(y_105);
              t = xtc_create_new_0_0(t);
              t = not_null(d_106);
              if(((c_106 != NULL) && (c_106 != t)))
                _fail(t);
              else
                c_106 = t;
              if(((b_106 != NULL) && (b_106 != t)))
                _fail(t);
              else
                b_106 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_106));
              t = read_from_0_0(t);
              LocalPopChoice(u_80);
            }
          else
            {
              t = t_80;
              {
                ATerm e_106 = NULL,f_106 = NULL;
                t = not_null(y_105);
                if(((f_106 != NULL) && (f_106 != t)))
                  _fail(t);
                else
                  f_106 = t;
                t = term_j_81;
                if(((e_106 != NULL) && (e_106 != t)))
                  _fail(t);
                else
                  e_106 = t;
                t = not_null(f_106);
                t = err_0_1(not_null(e_106), t);
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
  ATerm g_106 = NULL;
  if(((g_106 != NULL) && (g_106 != t)))
    _fail(t);
  else
    g_106 = t;
  {
    ATerm k_81 = t;
    int l_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_106 = NULL,i_106 = NULL;
        t = not_null(g_106);
        if(((i_106 != NULL) && (i_106 != t)))
          _fail(t);
        else
          i_106 = t;
        t = not_null(g_106);
        if(((h_106 != NULL) && (h_106 != t)))
          _fail(t);
        else
          h_106 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(h_106));
        t = read_from_0_0(t);
        LocalPopChoice(l_81);
      }
    else
      {
        t = k_81;
        {
          ATerm j_106 = NULL,k_106 = NULL;
          t = not_null(g_106);
          if(((k_106 != NULL) && (k_106 != t)))
            _fail(t);
          else
            k_106 = t;
          t = term_n_81;
          if(((j_106 != NULL) && (j_106 != t)))
            _fail(t);
          else
            j_106 = t;
          t = not_null(k_106);
          t = err_0_1(not_null(j_106), t);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm p_106 = NULL;
  if(((p_106 != NULL) && (p_106 != t)))
    _fail(t);
  else
    p_106 = t;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm u_106 = NULL;
  if(((u_106 != NULL) && (u_106 != t)))
    _fail(t);
  else
    u_106 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm v_79, ATerm t)
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
        ATerm o_106 = NULL;
        if(((o_106 != NULL) && (o_106 != t)))
          _fail(t);
        else
          o_106 = t;
        t = is_url_http_0_0(t);
        t = not_null(o_106);
        LocalPopChoice(p_81);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = o_81;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm q_81 = t;
    int r_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(a_8, t);
        LocalPopChoice(r_81);
      }
    else
      {
        t = q_81;
        {
          ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL;
          if(((q_106 != NULL) && (q_106 != t)))
            _fail(t);
          else
            q_106 = t;
          if(((r_106 != NULL) && (r_106 != t)))
            _fail(t);
          else
            r_106 = t;
          t = not_null(n_106);
          if(((t_106 != NULL) && (t_106 != t)))
            _fail(t);
          else
            t_106 = t;
          t = term_s_81;
          if(((s_106 != NULL) && (s_106 != t)))
            _fail(t);
          else
            s_106 = t;
          t = not_null(t_106);
          t = notice_0_1(not_null(s_106), t);
          t = not_null(r_106);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(b_8, t);
  t = xtc_aterm2table_0_1(not_null(v_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm v_106 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((v_106 != NULL) && (v_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(v_106));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm w_106 = NULL;
  if(((w_106 != NULL) && (w_106 != t)))
    _fail(t);
  else
    w_106 = t;
  t = lookup_table_0_1(not_null(w_106), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm x_106 = NULL;
  if(((x_106 != NULL) && (x_106 != t)))
    _fail(t);
  else
    x_106 = t;
  {
    ATerm v_81 = t;
    int w_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_55;
        t = table_keys_0_0(t);
        {
          ATerm x_81 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_81;
            }
        }
        LocalPopChoice(w_81);
      }
    else
      {
        t = v_81;
        t = not_null(y_79);
        t = xtc_load_0_1(not_null(z_79), t);
      }
  }
  t = not_null(x_106);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm y_106 = NULL;
  if(((y_106 != NULL) && (y_106 != t)))
    _fail(t);
  else
    y_106 = t;
  t = SSL_getenv(not_null(y_106));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_81 = t;
  int z_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_82;
      t = getenv_0_0(t);
      LocalPopChoice(z_81);
    }
  else
    {
      t = y_81;
      {
        ATerm b_82 = t;
        int c_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(c_82);
          }
        else
          {
            t = b_82;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL;
  if(((c_107 != NULL) && (c_107 != t)))
    _fail(t);
  else
    c_107 = t;
  if(((e_107 != NULL) && (e_107 != t)))
    _fail(t);
  else
    e_107 = t;
  t = xtc_location_0_0(t);
  if(((d_107 != NULL) && (d_107 != t)))
    _fail(t);
  else
    d_107 = t;
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  t = not_null(c_107);
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  t = (ATerm) ATempty;
  if(((a_107 != NULL) && (a_107 != t)))
    _fail(t);
  else
    a_107 = t;
  t = not_null(b_107);
  t = xtc_init_0_2(not_null(z_106), not_null(a_107), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,o_107 = NULL,c_8 = NULL,f_12 = NULL;
  if(((m_107 != NULL) && (m_107 != t)))
    _fail(t);
  else
    m_107 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((g_107 != NULL) && (g_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_107 = ATgetArgument(t, 0);
      if(((h_107 != NULL) && (h_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_107 != NULL) && (o_107 != t)))
    _fail(t);
  else
    o_107 = t;
  t = SSLgetAnnotations(not_null(m_107));
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = not_null(g_107);
  t = g_110(t);
  if(((i_107 != NULL) && (i_107 != t)))
    _fail(t);
  else
    i_107 = t;
  t = not_null(h_107);
  t = h_110(t);
  if(((j_107 != NULL) && (j_107 != t)))
    _fail(t);
  else
    j_107 = t;
  if(((l_107 != NULL) && (l_107 != t)))
    _fail(t);
  else
    l_107 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(i_107), not_null(j_107));
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = SSLsetAnnotations(not_null(c_8), not_null(f_107));
  if(((k_107 != NULL) && (k_107 != t)))
    _fail(t);
  else
    k_107 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,d_8 = NULL,g_12 = NULL;
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((q_107 != NULL) && (q_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  t = SSLgetAnnotations(not_null(u_107));
  if(((p_107 != NULL) && (p_107 != t)))
    _fail(t);
  else
    p_107 = t;
  t = not_null(q_107);
  t = f_110(t);
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  if(((t_107 != NULL) && (t_107 != t)))
    _fail(t);
  else
    t_107 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(r_107));
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  t = SSLsetAnnotations(not_null(d_8), not_null(p_107));
  if(((s_107 != NULL) && (s_107 != t)))
    _fail(t);
  else
    s_107 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm w_107 = NULL;
  if(((w_107 != NULL) && (w_107 != t)))
    _fail(t);
  else
    w_107 = t;
  t = SSL_is_string(not_null(w_107));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
  if(((a_108 != NULL) && (a_108 != t)))
    _fail(t);
  else
    a_108 = t;
  if(match_cons(t, sym__2))
    {
      y_107 = ATgetArgument(t, 0);
      z_107 = ATgetArgument(t, 1);
      {
        ATerm d_82 = t;
        int e_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL;
            t = not_null(a_108);
            if(((b_108 != NULL) && (b_108 != t)))
              _fail(t);
            else
              b_108 = t;
            t = not_null(a_108);
            if(((d_108 != NULL) && (d_108 != t)))
              _fail(t);
            else
              d_108 = t;
            t = not_null(b_108);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(b_108));
            LocalPopChoice(e_82);
          }
        else
          {
            t = d_82;
            {
              ATerm f_82 = t;
              int g_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL;
                  t = not_null(y_107);
                  if(((f_108 != NULL) && (f_108 != t)))
                    _fail(t);
                  else
                    f_108 = t;
                  t = not_null(z_107);
                  if(((e_108 != NULL) && (e_108 != t)))
                    _fail(t);
                  else
                    e_108 = t;
                  t = not_null(a_108);
                  if(((h_108 != NULL) && (h_108 != t)))
                    _fail(t);
                  else
                    h_108 = t;
                  t = not_null(f_108);
                  t = is_string_0_0(t);
                  t = not_null(e_108);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(f_108), not_null(e_108));
                  LocalPopChoice(g_82);
                }
              else
                {
                  t = f_82;
                  {
                    ATerm h_82 = t;
                    int i_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL;
                        t = not_null(y_107);
                        if(((i_108 != NULL) && (i_108 != t)))
                          _fail(t);
                        else
                          i_108 = t;
                        t = not_null(z_107);
                        if(((j_108 != NULL) && (j_108 != t)))
                          _fail(t);
                        else
                          j_108 = t;
                        t = not_null(a_108);
                        if(((k_108 != NULL) && (k_108 != t)))
                          _fail(t);
                        else
                          k_108 = t;
                        t = not_null(i_108);
                        t = is_string_0_0(t);
                        t = not_null(j_108);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(i_108), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_a_67, (ATerm) ATmakeAppl(sym_String_1, not_null(j_108)))));
                        LocalPopChoice(i_82);
                      }
                    else
                      {
                        t = h_82;
                        {
                          ATerm l_108 = NULL,m_108 = NULL;
                          t = not_null(a_108);
                          if(((l_108 != NULL) && (l_108 != t)))
                            _fail(t);
                          else
                            l_108 = t;
                          t = not_null(a_108);
                          if(((m_108 != NULL) && (m_108 != t)))
                            _fail(t);
                          else
                            m_108 = t;
                          t = not_null(l_108);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(l_108));
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
      ATerm j_82 = t;
      int k_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
          t = not_null(a_108);
          if(((n_108 != NULL) && (n_108 != t)))
            _fail(t);
          else
            n_108 = t;
          t = not_null(a_108);
          if(((p_108 != NULL) && (p_108 != t)))
            _fail(t);
          else
            p_108 = t;
          t = not_null(n_108);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(n_108));
          LocalPopChoice(k_82);
        }
      else
        {
          t = j_82;
          {
            ATerm q_108 = NULL,r_108 = NULL;
            t = not_null(a_108);
            if(((q_108 != NULL) && (q_108 != t)))
              _fail(t);
            else
              q_108 = t;
            t = not_null(a_108);
            if(((r_108 != NULL) && (r_108 != t)))
              _fail(t);
            else
              r_108 = t;
            t = not_null(q_108);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(q_108));
          }
        }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm y_108 = NULL;
  if(((y_108 != NULL) && (y_108 != t)))
    _fail(t);
  else
    y_108 = t;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_109 = NULL;
  if(((c_109 != NULL) && (c_109 != t)))
    _fail(t);
  else
    c_109 = t;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm d_109 = NULL;
  if(((d_109 != NULL) && (d_109 != t)))
    _fail(t);
  else
    d_109 = t;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm e_109 = NULL;
  if(((e_109 != NULL) && (e_109 != t)))
    _fail(t);
  else
    e_109 = t;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm f_109 = NULL;
  if(((f_109 != NULL) && (f_109 != t)))
    _fail(t);
  else
    f_109 = t;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm g_109 = NULL;
  if(((g_109 != NULL) && (g_109 != t)))
    _fail(t);
  else
    g_109 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm l_82 = t;
  int m_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_82 = t;
      if((PushChoice() == 0))
        {
          ATerm o_82 = t;
          int p_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(e_8, t);
              LocalPopChoice(p_82);
            }
          else
            {
              t = o_82;
              t = XtcQuery_2_0(f_8, g_8, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_82;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(t_0, t);
      LocalPopChoice(m_82);
    }
  else
    {
      t = l_82;
      {
        ATerm q_82 = t;
        int r_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(h_8, t);
            LocalPopChoice(r_82);
          }
        else
          {
            t = q_82;
            t = XtcQuery_2_0(i_8, j_8, t);
          }
      }
      {
        ATerm s_82 = t;
        int t_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(t_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(t_82);
          }
        else
          {
            t = s_82;
            {
              ATerm h_109 = NULL,l_109 = NULL;
              if(((h_109 != NULL) && (h_109 != t)))
                _fail(t);
              else
                h_109 = t;
              if(((l_109 != NULL) && (l_109 != t)))
                _fail(t);
              else
                l_109 = t;
              t = not_null(h_109);
              t = xtc_import_local_0_0(t);
              t = not_null(l_109);
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
  ATerm u_82 = t;
  int v_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(v_82);
    }
  else
    {
      t = u_82;
      {
        ATerm w_82 = t;
        int x_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_8 (ATerm t);
            static ATerm k_8 (ATerm t)
            {
              t = filter_1_0(g_131, t);
              return(t);
            }
            t = Cons_2_0(g_131, k_8, t);
            LocalPopChoice(x_82);
          }
        else
          {
            t = w_82;
            {
              ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
              if(((p_109 != NULL) && (p_109 != t)))
                _fail(t);
              else
                p_109 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((q_109 != NULL) && (q_109 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    q_109 = ATgetFirst((ATermList) t);
                  if(((r_109 != NULL) && (r_109 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    r_109 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(r_109);
              if(((s_109 != NULL) && (s_109 != t)))
                _fail(t);
              else
                s_109 = t;
              t = filter_1_0(g_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_82 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_82;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm t_109 = NULL;
  if(((t_109 != NULL) && (t_109 != t)))
    _fail(t);
  else
    t_109 = t;
  t = filter_1_0(l_8, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm z_82 = t;
  int a_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_109 = NULL;
      if(((v_109 != NULL) && (v_109 != t)))
        _fail(t);
      else
        v_109 = t;
      t = (ATerm) ATinsert(ATempty, term_g_18);
      {
        ATerm b_83 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_83;
          }
      }
      t = not_null(v_109);
      LocalPopChoice(a_83);
      {
        ATerm w_109 = NULL,x_109 = NULL;
        if(((x_109 != NULL) && (x_109 != t)))
          _fail(t);
        else
          x_109 = t;
        t = term_c_83;
        if(((w_109 != NULL) && (w_109 != t)))
          _fail(t);
        else
          w_109 = t;
        t = not_null(x_109);
        t = err_0_1(not_null(w_109), t);
        _fail(t);
      }
    }
  else
    {
      t = z_82;
      {
        ATerm y_109 = NULL;
        if(((y_109 != NULL) && (y_109 != t)))
          _fail(t);
        else
          y_109 = t;
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_g_18;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL;
  if(((a_110 != NULL) && (a_110 != t)))
    _fail(t);
  else
    a_110 = t;
  if(((z_109 != NULL) && (z_109 != t)))
    _fail(t);
  else
    z_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_i_18), term_h_18), not_null(z_109));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(m_8, n_8, t);
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL,i_110 = NULL;
  if(((d_110 != NULL) && (d_110 != t)))
    _fail(t);
  else
    d_110 = t;
  if(((e_110 != NULL) && (e_110 != t)))
    _fail(t);
  else
    e_110 = t;
  t = not_null(d_110);
  if(((i_110 != NULL) && (i_110 != t)))
    _fail(t);
  else
    i_110 = t;
  t = SSL_explode_term(not_null(i_110));
  if(match_cons(t, sym__2))
    {
      ATerm d_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_83 = ATgetArgument(t, 1);
        if(((ATgetType(e_83) == AT_LIST) && !(ATisEmpty(e_83))))
          {
            if(((c_110 != NULL) && (c_110 != ATgetFirst((ATermList) e_83))))
              _fail(ATgetFirst((ATermList) e_83));
            else
              c_110 = ATgetFirst((ATermList) e_83);
            if(((b_110 != NULL) && (b_110 != (ATerm) ATgetNext((ATermList) e_83))))
              _fail((ATerm) ATgetNext((ATermList) e_83));
            else
              b_110 = (ATerm) ATgetNext((ATermList) e_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(c_110);
  return(t);
}
ATerm _2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,o_8 = NULL,h_12 = NULL;
  if(((q_110 != NULL) && (q_110 != t)))
    _fail(t);
  else
    q_110 = t;
  if(match_cons(t, sym__2))
    {
      if(((k_110 != NULL) && (k_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_110 = ATgetArgument(t, 0);
      if(((l_110 != NULL) && (l_110 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_110 != NULL) && (r_110 != t)))
    _fail(t);
  else
    r_110 = t;
  t = SSLgetAnnotations(not_null(q_110));
  if(((j_110 != NULL) && (j_110 != t)))
    _fail(t);
  else
    j_110 = t;
  t = not_null(k_110);
  t = z_100(t);
  if(((m_110 != NULL) && (m_110 != t)))
    _fail(t);
  else
    m_110 = t;
  t = not_null(l_110);
  t = a_101(t);
  if(((n_110 != NULL) && (n_110 != t)))
    _fail(t);
  else
    n_110 = t;
  if(((p_110 != NULL) && (p_110 != t)))
    _fail(t);
  else
    p_110 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_110), not_null(n_110));
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSLsetAnnotations(not_null(o_8), not_null(j_110));
  if(((o_110 != NULL) && (o_110 != t)))
    _fail(t);
  else
    o_110 = t;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm m_111 = NULL;
  if(((m_111 != NULL) && (m_111 != t)))
    _fail(t);
  else
    m_111 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm n_111 (ATerm t);
  static ATerm n_111 (ATerm t)
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,l_111 = NULL;
        if(((w_110 != NULL) && (w_110 != t)))
          _fail(t);
        else
          w_110 = t;
        if(match_cons(t, sym__2))
          {
            if(((x_110 != NULL) && (x_110 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              x_110 = ATgetArgument(t, 0);
            if(((a_111 != NULL) && (a_111 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(x_110);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_110 != NULL) && (y_110 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_110 = ATgetFirst((ATermList) t);
            if(((z_110 != NULL) && (z_110 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(a_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_111 != NULL) && (b_111 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_111 = ATgetFirst((ATermList) t);
            if(((c_111 != NULL) && (c_111 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(y_110);
        if(((e_111 != NULL) && (e_111 != t)))
          _fail(t);
        else
          e_111 = t;
        t = not_null(z_110);
        if(((d_111 != NULL) && (d_111 != t)))
          _fail(t);
        else
          d_111 = t;
        t = not_null(b_111);
        if(((e_111 != NULL) && (e_111 != t)))
          _fail(t);
        else
          e_111 = t;
        t = not_null(c_111);
        if(((f_111 != NULL) && (f_111 != t)))
          _fail(t);
        else
          f_111 = t;
        t = not_null(w_110);
        if(((l_111 != NULL) && (l_111 != t)))
          _fail(t);
        else
          l_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_111), not_null(f_111));
        t = n_111(t);
        if(((g_111 != NULL) && (g_111 != t)))
          _fail(t);
        else
          g_111 = t;
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        t = _2_0(p_8, Nil_0_0, t);
      }
    return(t);
  }
  t = n_111(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm string_starts_with_0_1 (ATerm c_43, ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,u_111 = NULL;
  if(((o_111 != NULL) && (o_111 != t)))
    _fail(t);
  else
    o_111 = t;
  if(((u_111 != NULL) && (u_111 != t)))
    _fail(t);
  else
    u_111 = t;
  t = explode_string_0_0(t);
  if(((p_111 != NULL) && (p_111 != t)))
    _fail(t);
  else
    p_111 = t;
  t = not_null(u_111);
  if(((r_111 != NULL) && (r_111 != t)))
    _fail(t);
  else
    r_111 = t;
  t = not_null(c_43);
  t = explode_string_0_0(t);
  if(((q_111 != NULL) && (q_111 != t)))
    _fail(t);
  else
    q_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_111), not_null(q_111));
  t = left_match_0_0(t);
  t = not_null(o_111);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm v_111 = NULL;
  if(((v_111 != NULL) && (v_111 != t)))
    _fail(t);
  else
    v_111 = t;
  {
    ATerm h_83 = t;
    int i_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_111 = NULL,y_111 = NULL;
        t = not_null(v_111);
        if(((y_111 != NULL) && (y_111 != t)))
          _fail(t);
        else
          y_111 = t;
        t = term_j_83;
        if(((x_111 != NULL) && (x_111 != t)))
          _fail(t);
        else
          x_111 = t;
        t = not_null(y_111);
        t = string_starts_with_0_1(not_null(x_111), t);
        LocalPopChoice(i_83);
      }
    else
      {
        t = h_83;
        {
          ATerm z_111 = NULL,a_112 = NULL;
          t = not_null(v_111);
          if(((a_112 != NULL) && (a_112 != t)))
            _fail(t);
          else
            a_112 = t;
          t = term_k_83;
          if(((z_111 != NULL) && (z_111 != t)))
            _fail(t);
          else
            z_111 = t;
          t = not_null(a_112);
          t = string_starts_with_0_1(not_null(z_111), t);
        }
      }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL;
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  if(match_cons(t, sym_URL_1))
    {
      d_112 = ATgetArgument(t, 0);
      {
        ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL;
        t = not_null(d_112);
        if(((g_112 != NULL) && (g_112 != t)))
          _fail(t);
        else
          g_112 = t;
        t = is_url_http_0_0(t);
        if(((f_112 != NULL) && (f_112 != t)))
          _fail(t);
        else
          f_112 = t;
        if(((e_112 != NULL) && (e_112 != t)))
          _fail(t);
        else
          e_112 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_m_83), not_null(e_112));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm h_112 = NULL,i_112 = NULL;
          t = not_null(c_112);
          if(((i_112 != NULL) && (i_112 != t)))
            _fail(t);
          else
            i_112 = t;
          t = term_r_50;
          t = ReadFromFile_0_0(t);
          if(((h_112 != NULL) && (h_112 != t)))
            _fail(t);
          else
            h_112 = t;
        }
      else
        {
          ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((d_112 != NULL) && (d_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(d_112);
          if(((j_112 != NULL) && (j_112 != t)))
            _fail(t);
          else
            j_112 = t;
          t = not_null(c_112);
          if(((l_112 != NULL) && (l_112 != t)))
            _fail(t);
          else
            l_112 = t;
          t = not_null(j_112);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((k_112 != NULL) && (k_112 != t)))
            _fail(t);
          else
            k_112 = t;
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
  ATerm m_112 = NULL,n_112 = NULL;
  if(((n_112 != NULL) && (n_112 != t)))
    _fail(t);
  else
    n_112 = t;
  t = get_errno_0_0(t);
  if(((m_112 != NULL) && (m_112 != t)))
    _fail(t);
  else
    m_112 = t;
  t = (ATerm) ATmakeAppl(sym_ErrorNumber_1, not_null(m_112));
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_112 != NULL) && (p_112 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_112 = ATgetArgument(t, 0);
      if(((o_112 != NULL) && (o_112 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_83 = t;
    int o_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_rename(not_null(p_112), not_null(o_112));
        LocalPopChoice(o_83);
      }
    else
      {
        t = n_83;
        {
          ATerm q_112 = NULL;
          t = get_last_error_0_0(t);
          if(match_cons(t, sym_ErrorNumber_1))
            {
              if(((q_112 != NULL) && (q_112 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_f_18;
          t = EXDEV_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_112), not_null(o_112));
          t = copy_file_0_0(t);
          t = not_null(p_112);
          t = remove_file_0_0(t);
        }
      }
  }
  return(t);
}
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm i_113 (ATerm u_112, ATerm v_112, ATerm t);
  static ATerm j_113 (ATerm y_112, ATerm z_112, ATerm t);
  static ATerm i_113 (ATerm u_112, ATerm v_112, ATerm t)
  {
    ATerm w_112 = NULL,x_112 = NULL;
    t = not_null(u_112);
    if(((w_112 != NULL) && (w_112 != t)))
      _fail(t);
    else
      w_112 = t;
    t = not_null(v_112);
    if(((x_112 != NULL) && (x_112 != t)))
      _fail(t);
    else
      x_112 = t;
    t = r_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_112), term_p_83);
    t = copy_file_0_0(t);
    t = not_null(w_112);
    t = remove_file_0_0(t);
    t = term_p_83;
    return(t);
  }
  static ATerm j_113 (ATerm y_112, ATerm z_112, ATerm t)
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
    t = r_0(t);
    if(((b_113 != NULL) && (b_113 != t)))
      _fail(t);
    else
      b_113 = t;
    {
      ATerm q_83 = t;
      if((PushChoice() == 0))
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
              {
                ATerm d_113 = NULL;
                if(((d_113 != NULL) && (d_113 != t)))
                  _fail(t);
                else
                  d_113 = t;
                if(((a_113 != NULL) && (a_113 != t)))
                  _fail(t);
                else
                  a_113 = t;
                t = not_null(d_113);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_113), not_null(b_113));
    t = rename_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_113));
    return(t);
  }
  ATerm e_113 = NULL,f_113 = NULL;
  if(((e_113 != NULL) && (e_113 != t)))
    _fail(t);
  else
    e_113 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((f_113 != NULL) && (f_113 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_83 = t;
    int u_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_113(not_null(f_113), not_null(e_113), t);
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
              t = j_113(not_null(f_113), not_null(e_113), t);
              LocalPopChoice(w_83);
            }
          else
            {
              t = v_83;
              {
                ATerm g_113 = NULL,h_113 = NULL;
                t = not_null(f_113);
                if(((g_113 != NULL) && (g_113 != t)))
                  _fail(t);
                else
                  g_113 = t;
                t = not_null(e_113);
                if(((h_113 != NULL) && (h_113 != t)))
                  _fail(t);
                else
                  h_113 = t;
                t = r_0(t);
                if(((g_113 != NULL) && (g_113 != t)))
                  _fail(t);
                else
                  g_113 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_113));
              }
            }
        }
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm g_114 (ATerm n_113, ATerm o_113, ATerm t);
  static ATerm h_114 (ATerm s_113, ATerm t_113, ATerm t);
  static ATerm g_114 (ATerm n_113, ATerm o_113, ATerm t)
  {
    ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL;
    t = not_null(n_113);
    if(((p_113 != NULL) && (p_113 != t)))
      _fail(t);
    else
      p_113 = t;
    t = not_null(o_113);
    if(((r_113 != NULL) && (r_113 != t)))
      _fail(t);
    else
      r_113 = t;
    t = p_0(t);
    if(((q_113 != NULL) && (q_113 != t)))
      _fail(t);
    else
      q_113 = t;
    {
      ATerm x_83 = t;
      int y_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          LocalPopChoice(y_83);
        }
      else
        {
          t = x_83;
          t = stderr_0_0(t);
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_113), not_null(q_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_113));
    return(t);
  }
  static ATerm h_114 (ATerm s_113, ATerm t_113, ATerm t)
  {
    ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
    t = not_null(s_113);
    if(((u_113 != NULL) && (u_113 != t)))
      _fail(t);
    else
      u_113 = t;
    t = not_null(t_113);
    if(((w_113 != NULL) && (w_113 != t)))
      _fail(t);
    else
      w_113 = t;
    t = p_0(t);
    if(((v_113 != NULL) && (v_113 != t)))
      _fail(t);
    else
      v_113 = t;
    {
      ATerm z_83 = t;
      if((PushChoice() == 0))
        {
          ATerm a_84 = t;
          int b_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
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
                    t = stderr_0_0(t);
                    LocalPopChoice(d_84);
                  }
                else
                  {
                    t = c_84;
                    {
                      ATerm x_113 = NULL;
                      if(((x_113 != NULL) && (x_113 != t)))
                        _fail(t);
                      else
                        x_113 = t;
                      if(((u_113 != NULL) && (u_113 != t)))
                        _fail(t);
                      else
                        u_113 = t;
                      t = not_null(x_113);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_83;
        }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_113), not_null(v_113));
    t = copy_file_0_0(t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_113));
    return(t);
  }
  ATerm y_113 = NULL,z_113 = NULL;
  if(((y_113 != NULL) && (y_113 != t)))
    _fail(t);
  else
    y_113 = t;
  if(match_cons(t, sym_URL_1))
    {
      z_113 = ATgetArgument(t, 0);
      {
        ATerm e_84 = t;
        int f_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_114 = NULL,b_114 = NULL;
            t = not_null(z_113);
            if(((a_114 != NULL) && (a_114 != t)))
              _fail(t);
            else
              a_114 = t;
            t = not_null(y_113);
            if(((b_114 != NULL) && (b_114 != t)))
              _fail(t);
            else
              b_114 = t;
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(a_114));
            t = read_from_0_0(t);
            t = rename_to_1_0(p_0, t);
            t = (ATerm) ATmakeAppl(sym_URL_1, not_null(a_114));
            LocalPopChoice(f_84);
          }
        else
          {
            t = e_84;
            {
              ATerm c_114 = NULL,d_114 = NULL;
              t = not_null(z_113);
              if(((c_114 != NULL) && (c_114 != t)))
                _fail(t);
              else
                c_114 = t;
              t = not_null(y_113);
              if(((d_114 != NULL) && (d_114 != t)))
                _fail(t);
              else
                d_114 = t;
              t = p_0(t);
              if(((c_114 != NULL) && (c_114 != t)))
                _fail(t);
              else
                c_114 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(c_114));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((z_113 != NULL) && (z_113 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm g_84 = t;
        int h_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_114(not_null(z_113), not_null(y_113), t);
            LocalPopChoice(h_84);
          }
        else
          {
            t = g_84;
            {
              ATerm i_84 = t;
              int j_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_114(not_null(z_113), not_null(y_113), t);
                  LocalPopChoice(j_84);
                }
              else
                {
                  t = i_84;
                  {
                    ATerm e_114 = NULL,f_114 = NULL;
                    t = not_null(z_113);
                    if(((e_114 != NULL) && (e_114 != t)))
                      _fail(t);
                    else
                      e_114 = t;
                    t = not_null(y_113);
                    if(((f_114 != NULL) && (f_114 != t)))
                      _fail(t);
                    else
                      f_114 = t;
                    t = p_0(t);
                    if(((e_114 != NULL) && (e_114 != t)))
                      _fail(t);
                    else
                      e_114 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_114));
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
  ATerm i_114 = NULL;
  if(((i_114 != NULL) && (i_114 != t)))
    _fail(t);
  else
    i_114 = t;
  t = SSL_concat_strings(not_null(i_114));
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm j_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_84 = ATgetFirst((ATermList) t);
      if(((j_114 != NULL) && (j_114 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(j_114);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm k_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((k_114 != NULL) && (k_114 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        k_114 = ATgetFirst((ATermList) t);
      {
        ATerm l_84 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(l_84) != AT_LIST) || !(ATisEmpty(l_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(k_114);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm m_84 = t;
  int n_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(n_84);
    }
  else
    {
      t = m_84;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm m_114 = NULL;
  if(((m_114 != NULL) && (m_114 != t)))
    _fail(t);
  else
    m_114 = t;
  t = SSL_implode_string(not_null(m_114));
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm o_114 = NULL;
  if(((o_114 != NULL) && (o_114 != t)))
    _fail(t);
  else
    o_114 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm p_114 (ATerm t);
  static ATerm p_114 (ATerm t)
  {
    ATerm o_84 = t;
    int p_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        LocalPopChoice(p_84);
      }
    else
      {
        t = o_84;
        t = Cons_2_0(q_8, p_114, t);
      }
    return(t);
  }
  t = p_114(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm v_114 = NULL;
  if(((v_114 != NULL) && (v_114 != t)))
    _fail(t);
  else
    v_114 = t;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm w_114 = NULL;
  if(((w_114 != NULL) && (w_114 != t)))
    _fail(t);
  else
    w_114 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  static ATerm r_8 (ATerm t);
  static ATerm r_8 (ATerm t)
  {
    t = Cons_2_0(q_123, s_8, t);
    {
      static ATerm u_8 (ATerm t);
      static ATerm u_8 (ATerm t)
      {
        if(((s_114 != NULL) && (s_114 != t)))
          _fail(t);
        else
          s_114 = t;
        return(t);
      }
      t = Cons_2_0(t_8, u_8, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_8, t);
  if(((u_114 != NULL) && (u_114 != t)))
    _fail(t);
  else
    u_114 = t;
  if(((t_114 != NULL) && (t_114 != t)))
    _fail(t);
  else
    t_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_114), not_null(s_114));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  ATerm q_84 = t;
  int r_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_133, t);
      LocalPopChoice(r_84);
    }
  else
    {
      t = q_84;
      {
        ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL;
        if(((c_115 != NULL) && (c_115 != t)))
          _fail(t);
        else
          c_115 = t;
        if(((e_115 != NULL) && (e_115 != t)))
          _fail(t);
        else
          e_115 = t;
        t = not_null(c_115);
        if(((d_115 != NULL) && (d_115 != t)))
          _fail(t);
        else
          d_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_115), (ATerm) ATempty);
      }
    }
  if(((f_115 != NULL) && (f_115 != t)))
    _fail(t);
  else
    f_115 = t;
  if(match_cons(t, sym__2))
    {
      if(((g_115 != NULL) && (g_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_115 = ATgetArgument(t, 0);
      if(((j_115 != NULL) && (j_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_115);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(j_115);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm m_115 = NULL,n_115 = NULL,s_115 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((k_115 != NULL) && (k_115 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                k_115 = ATgetFirst((ATermList) t);
              if(((l_115 != NULL) && (l_115 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                l_115 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(j_115);
          if(((m_115 != NULL) && (m_115 != t)))
            _fail(t);
          else
            m_115 = t;
          t = not_null(f_115);
          if(((s_115 != NULL) && (s_115 != t)))
            _fail(t);
          else
            s_115 = t;
          t = not_null(m_115);
          t = list_tokenize_1_0(d_133, t);
          if(((n_115 != NULL) && (n_115 != t)))
            _fail(t);
          else
            n_115 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_115 != NULL) && (h_115 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_115 = ATgetFirst((ATermList) t);
          if(((i_115 != NULL) && (i_115 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_115);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_115 = NULL;
          t = not_null(g_115);
          if(((t_115 != NULL) && (t_115 != t)))
            _fail(t);
          else
            t_115 = t;
          t = (ATerm) ATinsert(ATempty, not_null(t_115));
        }
      else
        {
          ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((k_115 != NULL) && (k_115 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                k_115 = ATgetFirst((ATermList) t);
              if(((l_115 != NULL) && (l_115 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                l_115 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(g_115);
          if(((y_115 != NULL) && (y_115 != t)))
            _fail(t);
          else
            y_115 = t;
          t = not_null(j_115);
          if(((z_115 != NULL) && (z_115 != t)))
            _fail(t);
          else
            z_115 = t;
          t = not_null(f_115);
          if(((b_116 != NULL) && (b_116 != t)))
            _fail(t);
          else
            b_116 = t;
          t = not_null(z_115);
          t = list_tokenize_1_0(d_133, t);
          if(((a_116 != NULL) && (a_116 != t)))
            _fail(t);
          else
            a_116 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(a_116)), not_null(y_115));
        }
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm c_116 = NULL;
  if(((c_116 != NULL) && (c_116 != t)))
    _fail(t);
  else
    c_116 = t;
  t = SSL_explode_string(not_null(c_116));
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
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    ATerm d_116 = NULL;
    static ATerm w_8 (ATerm t);
    static ATerm w_8 (ATerm t)
    {
      if(((d_116 != NULL) && (d_116 != t)))
        _fail(t);
      else
        d_116 = t;
      return(t);
    }
    if(((d_116 != NULL) && (d_116 != t)))
      _fail(t);
    else
      d_116 = t;
    t = not_null(d_46);
    t = fetch_1_0(w_8, t);
    return(t);
  }
  t = string_tokenize_1_0(v_8, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
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
  t = not_null(f_116);
  t = string_tokenize_0_1(not_null(e_116), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_79), not_null(g_116));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm i_116 = NULL;
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  t = SSL_S_ISDIR(not_null(i_116));
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm j_116 = NULL;
  if(((j_116 != NULL) && (j_116 != t)))
    _fail(t);
  else
    j_116 = t;
  t = SSL_perror(not_null(j_116));
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm k_116 = NULL,r_116 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_116 != NULL) && (k_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_116 = ATgetArgument(t, 0);
      if(((r_116 != NULL) && (r_116 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(k_116), not_null(r_116));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
static ATerm b_117 (ATerm t_116, ATerm t)
{
  ATerm u_116 = NULL,w_116 = NULL;
  t = not_null(t_116);
  if(((u_116 != NULL) && (u_116 != t)))
    _fail(t);
  else
    u_116 = t;
  t = SSL_filemode(not_null(u_116));
  if(match_cons(t, sym__2))
    {
      if(((w_116 != NULL) && (w_116 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_116 = ATgetArgument(t, 0);
      {
        ATerm s_84 = ATgetArgument(t, 1);
        if(((ATgetType(s_84) != AT_INT) || (ATgetInt((ATermInt) s_84) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(w_116);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm x_116 = NULL;
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  {
    ATerm t_84 = t;
    int u_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_117(not_null(x_116), t);
        LocalPopChoice(u_84);
      }
    else
      {
        t = t_84;
        {
          ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL;
          t = not_null(x_116);
          if(((a_117 != NULL) && (a_117 != t)))
            _fail(t);
          else
            a_117 = t;
          t = not_null(x_116);
          if(((z_116 != NULL) && (z_116 != t)))
            _fail(t);
          else
            z_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_84, not_null(z_116));
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
  ATerm c_117 = NULL,d_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_117 = ATgetArgument(t, 0);
      if(((d_117 != NULL) && (d_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(c_117), not_null(d_117));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL;
  if(((f_117 != NULL) && (f_117 != t)))
    _fail(t);
  else
    f_117 = t;
  if(((e_117 != NULL) && (e_117 != t)))
    _fail(t);
  else
    e_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_117), (ATerm) ATinsert(ATempty, term_w_84));
  t = access_0_0(t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_117 != NULL) && (h_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_117 = ATgetArgument(t, 0);
      if(((g_117 != NULL) && (g_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_117 != NULL) && (j_117 != t)))
    _fail(t);
  else
    j_117 = t;
  {
    ATerm x_84 = t;
    int y_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_117 = NULL;
        if(((k_117 != NULL) && (k_117 != t)))
          _fail(t);
        else
          k_117 = t;
        t = not_null(g_117);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(k_117);
        LocalPopChoice(y_84);
        {
          ATerm l_117 = NULL,m_117 = NULL;
          if(((m_117 != NULL) && (m_117 != t)))
            _fail(t);
          else
            m_117 = t;
          t = not_null(h_117);
          t = base_filename_0_0(t);
          if(((l_117 != NULL) && (l_117 != t)))
            _fail(t);
          else
            l_117 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_117)), term_z_84), not_null(g_117));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = x_84;
        t = not_null(g_117);
      }
  }
  if(((i_117 != NULL) && (i_117 != t)))
    _fail(t);
  else
    i_117 = t;
  t = SSL_copy(not_null(h_117), not_null(i_117));
  return(t);
}
static ATerm u_117 (ATerm p_117, ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL;
  t = not_null(p_117);
  if(((r_117 != NULL) && (r_117 != t)))
    _fail(t);
  else
    r_117 = t;
  t = term_s_33;
  {
    ATerm a_85 = t;
    int b_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_85);
      }
    else
      {
        t = a_85;
        t = term_p_83;
      }
  }
  if(((q_117 != NULL) && (q_117 != t)))
    _fail(t);
  else
    q_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_50, not_null(q_117));
  t = copy_file_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm c_85 = t;
  int d_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_33;
      t = get_config_0_0(t);
      LocalPopChoice(d_85);
    }
  else
    {
      t = c_85;
      t = term_p_83;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL;
  if(((s_117 != NULL) && (s_117 != t)))
    _fail(t);
  else
    s_117 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = u_117(not_null(s_117), t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          if(((t_117 != NULL) && (t_117 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(s_117);
      t = copy_to_1_0(x_8, t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL;
  if(((x_117 != NULL) && (x_117 != t)))
    _fail(t);
  else
    x_117 = t;
  if(match_cons(t, sym__2))
    {
      if(((v_117 != NULL) && (v_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_117 = ATgetArgument(t, 0);
      if(((w_117 != NULL) && (w_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(v_117), t);
  t = hashtable_remove_0_1(not_null(w_117), t);
  t = not_null(x_117);
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_117 != NULL) && (z_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_117 = ATgetArgument(t, 0);
      if(((a_118 != NULL) && (a_118 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_118 != NULL) && (b_118 != t)))
    _fail(t);
  else
    b_118 = t;
  {
    ATerm e_85 = t;
    int f_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_117), not_null(a_118));
        t = table_get_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_85 = ATgetFirst((ATermList) t);
            if(((y_117 != NULL) && (y_117 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_85);
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_117), not_null(a_118), not_null(y_117));
        t = table_put_0_0(t);
      }
    else
      {
        t = e_85;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_117), not_null(a_118));
        t = table_remove_0_0(t);
      }
  }
  t = not_null(b_118);
  return(t);
}
ATerm end_scope_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL,f_118 = NULL;
  if(((f_118 != NULL) && (f_118 != t)))
    _fail(t);
  else
    f_118 = t;
  t = t_111(t);
  if(((e_118 != NULL) && (e_118 != t)))
    _fail(t);
  else
    e_118 = t;
  {
    ATerm h_85 = t;
    int i_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_118), term_p_51);
        t = table_get_0_0(t);
        {
          ATerm j_85 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_85;
            }
        }
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
      if(((d_118 != NULL) && (d_118 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_118 = ATgetFirst((ATermList) t);
      if(((c_118 != NULL) && (c_118 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(e_118), term_p_51, not_null(c_118));
  t = table_put_0_0(t);
  t = not_null(d_118);
  {
    static ATerm y_8 (ATerm t);
    static ATerm y_8 (ATerm t)
    {
      ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL;
      if(((g_118 != NULL) && (g_118 != t)))
        _fail(t);
      else
        g_118 = t;
      if(((i_118 != NULL) && (i_118 != t)))
        _fail(t);
      else
        i_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_118), not_null(g_118));
      t = table_pop_rm_0_0(t);
      if(((h_118 != NULL) && (h_118 != t)))
        _fail(t);
      else
        h_118 = t;
      return(t);
    }
    t = map_1_0(y_8, t);
  }
  t = not_null(f_118);
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm j_118 = NULL;
  if(((j_118 != NULL) && (j_118 != t)))
    _fail(t);
  else
    j_118 = t;
  t = SSL_remove(not_null(j_118));
  return(t);
}
ATerm restore_always_2_0 (ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm k_85 = t;
  int l_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_115(t);
      t = r_115(t);
      LocalPopChoice(l_85);
    }
  else
    {
      t = k_85;
      t = r_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL;
  if(((l_118 != NULL) && (l_118 != t)))
    _fail(t);
  else
    l_118 = t;
  t = s_111(t);
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  if(((n_118 != NULL) && (n_118 != t)))
    _fail(t);
  else
    n_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_118), term_p_51);
  {
    ATerm m_85 = t;
    int n_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(n_85);
      }
    else
      {
        t = m_85;
        t = (ATerm) ATempty;
      }
  }
  if(((m_118 != NULL) && (m_118 != t)))
    _fail(t);
  else
    m_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(k_118), term_p_51, (ATerm) ATinsert(CheckATermList(not_null(m_118)), (ATerm) ATempty));
  t = table_put_0_0(t);
  t = not_null(l_118);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_b_54;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL;
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    ATerm q_118 = NULL;
    if(((q_118 != NULL) && (q_118 != t)))
      _fail(t);
    else
      q_118 = t;
    {
      ATerm o_85 = t;
      int q_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_85;
          t = table_get_0_0(t);
          LocalPopChoice(q_85);
        }
      else
        {
          t = o_85;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_118 != NULL) && (p_118 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_118 = ATgetFirst((ATermList) t);
        if(((o_118 != NULL) && (o_118 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_118 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = not_null(p_118);
    t = map_1_0(b_9, t);
    t = not_null(q_118);
    t = end_scope_1_0(c_9, t);
    return(t);
  }
  t = begin_scope_1_0(z_8, t);
  t = restore_always_2_0(t_151, a_9, t);
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    ATerm s_85 = t;
    int t_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL;
        if(((r_118 != NULL) && (r_118 != t)))
          _fail(t);
        else
          r_118 = t;
        if(((t_118 != NULL) && (t_118 != t)))
          _fail(t);
        else
          t_118 = t;
        t = term_o_21;
        t = get_config_0_0(t);
        if(((s_118 != NULL) && (s_118 != t)))
          _fail(t);
        else
          s_118 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_118));
        LocalPopChoice(t_85);
      }
    else
      {
        t = s_85;
        t = term_r_50;
      }
    t = v_152(t);
    t = xtc_write_output_0_0(t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm v_118 = NULL;
  if(((v_118 != NULL) && (v_118 != t)))
    _fail(t);
  else
    v_118 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(v_118);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(v_118);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
  if(((w_118 != NULL) && (w_118 != t)))
    _fail(t);
  else
    w_118 = t;
  if(((y_118 != NULL) && (y_118 != t)))
    _fail(t);
  else
    y_118 = t;
  t = string_to_int_0_0(t);
  if(((x_118 != NULL) && (x_118 != t)))
    _fail(t);
  else
    x_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_85, not_null(x_118));
  t = set_config_0_0(t);
  t = not_null(w_118);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_v_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_9, f_9, g_9, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm z_118 = NULL;
  if(((z_118 != NULL) && (z_118 != t)))
    _fail(t);
  else
    z_118 = t;
  t = SSL_string_to_int(not_null(z_118));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm b_119 = NULL;
  if(((b_119 != NULL) && (b_119 != t)))
    _fail(t);
  else
    b_119 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(b_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(b_119);
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_119 = NULL;
  if(((c_119 != NULL) && (c_119 != t)))
    _fail(t);
  else
    c_119 = t;
  t = term_w_85;
  t = set_config_0_0(t);
  t = term_x_85;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_y_85;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL;
  if(((f_119 != NULL) && (f_119 != t)))
    _fail(t);
  else
    f_119 = t;
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  t = string_to_int_0_0(t);
  if(((g_119 != NULL) && (g_119 != t)))
    _fail(t);
  else
    g_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(g_119));
  t = set_config_0_0(t);
  t = not_null(f_119);
  if(((e_119 != NULL) && (e_119 != t)))
    _fail(t);
  else
    e_119 = t;
  if(((d_119 != NULL) && (d_119 != t)))
    _fail(t);
  else
    d_119 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_119));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_z_85;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm i_119 = NULL;
  if(((i_119 != NULL) && (i_119 != t)))
    _fail(t);
  else
    i_119 = t;
  t = term_a_86;
  t = set_config_0_0(t);
  t = term_b_86;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_c_86;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_86 = t;
  int e_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_9, i_9, j_9, t);
      LocalPopChoice(e_86);
    }
  else
    {
      t = d_86;
      {
        ATerm f_86 = t;
        int g_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_9, l_9, m_9, t);
            LocalPopChoice(g_86);
          }
        else
          {
            t = f_86;
            t = Option_3_0(n_9, o_9, p_9, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm h_86 = t;
  int i_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      LocalPopChoice(i_86);
    }
  else
    {
      t = h_86;
      t = keep_option_0_0(t);
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm k_119 = NULL;
  if(((k_119 != NULL) && (k_119 != t)))
    _fail(t);
  else
    k_119 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(k_119);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(k_119);
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL;
  if(((n_119 != NULL) && (n_119 != t)))
    _fail(t);
  else
    n_119 = t;
  if(((p_119 != NULL) && (p_119 != t)))
    _fail(t);
  else
    p_119 = t;
  if(((o_119 != NULL) && (o_119 != t)))
    _fail(t);
  else
    o_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_33, not_null(o_119));
  t = set_config_0_0(t);
  t = not_null(n_119);
  if(((m_119 != NULL) && (m_119 != t)))
    _fail(t);
  else
    m_119 = t;
  if(((l_119 != NULL) && (l_119 != t)))
    _fail(t);
  else
    l_119 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_119));
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_j_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, r_9, s_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm q_119 = NULL;
  if(((q_119 != NULL) && (q_119 != t)))
    _fail(t);
  else
    q_119 = t;
  t = term_l_86;
  t = set_config_0_0(t);
  t = term_m_86;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_n_86;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm o_86 = t;
  int p_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      LocalPopChoice(p_86);
    }
  else
    {
      t = o_86;
      t = Option_3_0(t_9, u_9, v_9, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL;
  if(((t_119 != NULL) && (t_119 != t)))
    _fail(t);
  else
    t_119 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(t_119);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_119 != NULL) && (u_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_119 = ATgetFirst((ATermList) t);
          if(((v_119 != NULL) && (v_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(v_119);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_119 != NULL) && (w_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_119 = ATgetFirst((ATermList) t);
          if(((x_119 != NULL) && (x_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_119);
      if(((a_120 != NULL) && (a_120 != t)))
        _fail(t);
      else
        a_120 = t;
      t = not_null(w_119);
      if(((y_119 != NULL) && (y_119 != t)))
        _fail(t);
      else
        y_119 = t;
      t = not_null(x_119);
      if(((z_119 != NULL) && (z_119 != t)))
        _fail(t);
      else
        z_119 = t;
      t = not_null(t_119);
      if(((d_120 != NULL) && (d_120 != t)))
        _fail(t);
      else
        d_120 = t;
      t = not_null(a_120);
      t = k_0(t);
      t = not_null(d_120);
      if(((c_120 != NULL) && (c_120 != t)))
        _fail(t);
      else
        c_120 = t;
      t = not_null(y_119);
      t = m_0(t);
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(z_119)), not_null(b_120));
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_120 = NULL;
  if(((f_120 != NULL) && (f_120 != t)))
    _fail(t);
  else
    f_120 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(f_120);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(f_120);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
  if(((i_120 != NULL) && (i_120 != t)))
    _fail(t);
  else
    i_120 = t;
  if(((k_120 != NULL) && (k_120 != t)))
    _fail(t);
  else
    k_120 = t;
  if(((j_120 != NULL) && (j_120 != t)))
    _fail(t);
  else
    j_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(j_120));
  t = set_config_0_0(t);
  t = not_null(i_120);
  if(((h_120 != NULL) && (h_120 != t)))
    _fail(t);
  else
    h_120 = t;
  if(((g_120 != NULL) && (g_120 != t)))
    _fail(t);
  else
    g_120 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_120));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_q_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, y_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm r_86 = t;
  int s_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_86);
    }
  else
    {
      t = r_86;
      {
        ATerm t_86 = t;
        int u_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            LocalPopChoice(u_86);
          }
        else
          {
            t = t_86;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm l_120 = NULL;
  if(((l_120 != NULL) && (l_120 != t)))
    _fail(t);
  else
    l_120 = t;
  t = term_v_86;
  t = set_config_0_0(t);
  t = term_e_46;
  t = set_config_0_0(t);
  t = not_null(l_120);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_w_86;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(z_9, a_10, b_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm m_120 = NULL;
  if(((m_120 != NULL) && (m_120 != t)))
    _fail(t);
  else
    m_120 = t;
  t = term_e_46;
  t = set_config_0_0(t);
  t = not_null(m_120);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_x_86;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(c_10, d_10, e_10, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm y_86 = t;
  int z_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(z_86);
    }
  else
    {
      t = y_86;
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
  static ATerm n_120 (ATerm t);
  static ATerm n_120 (ATerm t)
  {
    ATerm a_87 = t;
    int b_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(b_87);
      }
    else
      {
        t = a_87;
        t = Cons_2_0(f_123, n_120, t);
      }
    return(t);
  }
  t = n_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  if(((r_120 != NULL) && (r_120 != t)))
    _fail(t);
  else
    r_120 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_120 = ATgetFirst((ATermList) t);
      q_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,b_121 = NULL,c_121 = NULL;
        t = not_null(p_120);
        if(((s_120 != NULL) && (s_120 != t)))
          _fail(t);
        else
          s_120 = t;
        t = not_null(q_120);
        if(((t_120 != NULL) && (t_120 != t)))
          _fail(t);
        else
          t_120 = t;
        t = not_null(r_120);
        if(((v_120 != NULL) && (v_120 != t)))
          _fail(t);
        else
          v_120 = t;
        t = not_null(t_120);
        if(((x_120 != NULL) && (x_120 != t)))
          _fail(t);
        else
          x_120 = t;
        if(((c_121 != NULL) && (c_121 != t)))
          _fail(t);
        else
          c_121 = t;
        t = h_0(t);
        if(((y_120 != NULL) && (y_120 != t)))
          _fail(t);
        else
          y_120 = t;
        t = not_null(c_121);
        if(((b_121 != NULL) && (b_121 != t)))
          _fail(t);
        else
          b_121 = t;
        t = not_null(s_120);
        t = f_0(t);
        if(((z_120 != NULL) && (z_120 != t)))
          _fail(t);
        else
          z_120 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(y_120)), not_null(z_120));
        if(((w_120 != NULL) && (w_120 != t)))
          _fail(t);
        else
          w_120 = t;
        t = not_null(x_120);
        {
          static ATerm f_10 (ATerm t);
          static ATerm f_10 (ATerm t)
          {
            t = not_null(w_120);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_10, t);
        }
        if(((u_120 != NULL) && (u_120 != t)))
          _fail(t);
        else
          u_120 = t;
      }
    }
  else
    {
      ATerm d_121 = NULL,e_121 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(r_120);
      if(((e_121 != NULL) && (e_121 != t)))
        _fail(t);
      else
        e_121 = t;
      t = term_f_18;
      t = h_0(t);
      if(((d_121 != NULL) && (d_121 != t)))
        _fail(t);
      else
        d_121 = t;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm g_121 = NULL;
  if(((g_121 != NULL) && (g_121 != t)))
    _fail(t);
  else
    g_121 = t;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(g_10, h_10, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm i_121 = NULL,j_121 = NULL;
  if(((j_121 != NULL) && (j_121 != t)))
    _fail(t);
  else
    j_121 = t;
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_121)), term_c_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm h_121 = NULL;
  static ATerm m_10 (ATerm t);
  static ATerm m_10 (ATerm t)
  {
    ATerm k_121 = NULL,l_121 = NULL;
    if(((l_121 != NULL) && (l_121 != t)))
      _fail(t);
    else
      l_121 = t;
    t = m_145(t);
    if(((k_121 != NULL) && (k_121 != t)))
      _fail(t);
    else
      k_121 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(k_121)), term_d_72);
    t = echo_0_0(t);
    return(t);
  }
  ATerm d_87 = t;
  int g_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_87;
      t = get_config_0_0(t);
      if(((h_121 != NULL) && (h_121 != t)))
        _fail(t);
      else
        h_121 = t;
      LocalPopChoice(g_87);
    }
  else
    {
      t = d_87;
      {
        static ATerm i_10 (ATerm t);
        static ATerm i_10 (ATerm t)
        {
          static ATerm j_10 (ATerm t);
          static ATerm j_10 (ATerm t)
          {
            if(((h_121 != NULL) && (h_121 != t)))
              _fail(t);
            else
              h_121 = t;
            return(t);
          }
          t = Program_1_0(j_10, t);
          return(t);
        }
        t = option_defined_1_0(i_10, t);
      }
    }
  {
    static ATerm k_10 (ATerm t);
    static ATerm k_10 (ATerm t)
    {
      t = l_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(k_10, t);
  }
  t = term_i_87;
  t = echo_0_0(t);
  t = term_l_87;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(l_10, t);
  t = try_1_0(m_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,n_10 = NULL,i_12 = NULL;
  if(((r_121 != NULL) && (r_121 != t)))
    _fail(t);
  else
    r_121 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((n_121 != NULL) && (n_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((s_121 != NULL) && (s_121 != t)))
    _fail(t);
  else
    s_121 = t;
  t = SSLgetAnnotations(not_null(r_121));
  if(((m_121 != NULL) && (m_121 != t)))
    _fail(t);
  else
    m_121 = t;
  t = not_null(n_121);
  t = z_108(t);
  if(((o_121 != NULL) && (o_121 != t)))
    _fail(t);
  else
    o_121 = t;
  if(((q_121 != NULL) && (q_121 != t)))
    _fail(t);
  else
    q_121 = t;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_121));
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSLsetAnnotations(not_null(n_10), not_null(m_121));
  if(((p_121 != NULL) && (p_121 != t)))
    _fail(t);
  else
    p_121 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL;
  static ATerm q_10 (ATerm t);
  static ATerm r_10 (ATerm t);
  static ATerm q_10 (ATerm t)
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      t = not_null(t_121);
      return(t);
    }
    t = short_description_1_0(s_10, t);
    return(t);
  }
  static ATerm r_10 (ATerm t)
  {
    static ATerm t_10 (ATerm t);
    static ATerm t_10 (ATerm t)
    {
      t = not_null(t_121);
      return(t);
    }
    t = long_description_1_0(t_10, t);
    return(t);
  }
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  {
    ATerm m_87 = t;
    int n_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_87;
        t = get_config_0_0(t);
        if(((t_121 != NULL) && (t_121 != t)))
          _fail(t);
        else
          t_121 = t;
        LocalPopChoice(n_87);
      }
    else
      {
        t = m_87;
        {
          static ATerm o_10 (ATerm t);
          static ATerm o_10 (ATerm t)
          {
            static ATerm p_10 (ATerm t);
            static ATerm p_10 (ATerm t)
            {
              if(((t_121 != NULL) && (t_121 != t)))
                _fail(t);
              else
                t_121 = t;
              return(t);
            }
            t = Program_1_0(p_10, t);
            return(t);
          }
          t = option_defined_1_0(o_10, t);
        }
      }
  }
  t = not_null(u_121);
  t = default_system_usage_2_0(q_10, r_10, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm o_87 = t;
  int p_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(p_87);
    }
  else
    {
      t = o_87;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL;
  if(((w_121 != NULL) && (w_121 != t)))
    _fail(t);
  else
    w_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(w_121);
    }
  else
    {
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
      t = not_null(w_121);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL;
  if(((z_121 != NULL) && (z_121 != t)))
    _fail(t);
  else
    z_121 = t;
  if(((b_122 != NULL) && (b_122 != t)))
    _fail(t);
  else
    b_122 = t;
  {
    ATerm q_87 = t;
    int r_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(r_87);
      }
    else
      {
        t = q_87;
        {
          ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL;
          if(((c_122 != NULL) && (c_122 != t)))
            _fail(t);
          else
            c_122 = t;
          if(((e_122 != NULL) && (e_122 != t)))
            _fail(t);
          else
            e_122 = t;
          t = not_null(c_122);
          if(((d_122 != NULL) && (d_122 != t)))
            _fail(t);
          else
            d_122 = t;
          t = (ATerm) ATinsert(ATempty, not_null(d_122));
        }
      }
  }
  if(((a_122 != NULL) && (a_122 != t)))
    _fail(t);
  else
    a_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_83, not_null(a_122));
  t = printnl_0_0(t);
  t = not_null(z_121);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_87;
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
  ATerm s_87 = t;
  int t_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(t_87);
    }
  else
    {
      t = s_87;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL;
  t = report_run_time_0_0(t);
  if(((g_122 != NULL) && (g_122 != t)))
    _fail(t);
  else
    g_122 = t;
  t = term_f_18;
  t = whoami_0_0(t);
  if(((f_122 != NULL) && (f_122 != t)))
    _fail(t);
  else
    f_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, term_u_87), not_null(f_122)));
  t = printnl_0_0(t);
  t = term_u_12;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_87;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm h_122 = NULL;
  if(((h_122 != NULL) && (h_122 != t)))
    _fail(t);
  else
    h_122 = t;
  t = SSL_TicksToSeconds(not_null(h_122));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm i_122 = NULL,j_122 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_122 != NULL) && (i_122 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_122 = ATgetArgument(t, 0);
      if(((j_122 != NULL) && (j_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_87 = t;
    int w_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(i_122), not_null(j_122));
        LocalPopChoice(w_87);
      }
    else
      {
        t = v_87;
        t = SSL_addr(not_null(i_122), not_null(j_122));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm y_87 = t;
  int z_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = c_130(t);
      LocalPopChoice(z_87);
    }
  else
    {
      t = y_87;
      {
        ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
        if(((l_122 != NULL) && (l_122 != t)))
          _fail(t);
        else
          l_122 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_122 != NULL) && (m_122 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_122 = ATgetFirst((ATermList) t);
            if(((n_122 != NULL) && (n_122 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(m_122);
        if(((o_122 != NULL) && (o_122 != t)))
          _fail(t);
        else
          o_122 = t;
        t = not_null(n_122);
        if(((p_122 != NULL) && (p_122 != t)))
          _fail(t);
        else
          p_122 = t;
        t = not_null(l_122);
        if(((r_122 != NULL) && (r_122 != t)))
          _fail(t);
        else
          r_122 = t;
        if(((t_122 != NULL) && (t_122 != t)))
          _fail(t);
        else
          t_122 = t;
        t = not_null(p_122);
        t = foldr_2_0(c_130, d_130, t);
        if(((s_122 != NULL) && (s_122 != t)))
          _fail(t);
        else
          s_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_122), not_null(s_122));
        t = d_130(t);
        if(((q_122 != NULL) && (q_122 != t)))
          _fail(t);
        else
          q_122 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL;
  if(((y_122 != NULL) && (y_122 != t)))
    _fail(t);
  else
    y_122 = t;
  if(((z_122 != NULL) && (z_122 != t)))
    _fail(t);
  else
    z_122 = t;
  t = not_null(y_122);
  if(((a_123 != NULL) && (a_123 != t)))
    _fail(t);
  else
    a_123 = t;
  t = SSL_explode_term(not_null(a_123));
  if(match_cons(t, sym__2))
    {
      ATerm a_88 = ATgetArgument(t, 0);
      if(((u_122 != NULL) && (u_122 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_122);
  if(((w_122 != NULL) && (w_122 != t)))
    _fail(t);
  else
    w_122 = t;
  t = not_null(u_122);
  t = foldr_2_0(z_134, a_135, t);
  if(((v_122 != NULL) && (v_122 != t)))
    _fail(t);
  else
    v_122 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_c_73;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(u_10, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL,e_123 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_123 != NULL) && (b_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_123 = ATgetArgument(t, 0);
      if(((c_123 != NULL) && (c_123 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_123 != NULL) && (e_123 != t)))
    _fail(t);
  else
    e_123 = t;
  {
    ATerm b_88 = t;
    int c_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(b_123), not_null(c_123));
        LocalPopChoice(c_88);
      }
    else
      {
        t = b_88;
        t = SSL_gtr(not_null(b_123), not_null(c_123));
      }
  }
  t = not_null(e_123);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_123 = NULL;
  ATerm d_88 = t;
  int e_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL;
      if(((j_123 != NULL) && (j_123 != t)))
        _fail(t);
      else
        j_123 = t;
      if(match_cons(t, sym__2))
        {
          if(((k_123 != NULL) && (k_123 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_123 = ATgetArgument(t, 0);
          if(((l_123 != NULL) && (l_123 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(k_123);
      if(((i_123 != NULL) && (i_123 != t)))
        _fail(t);
      else
        i_123 = t;
      t = not_null(l_123);
      if(((i_123 != NULL) && (i_123 != t)))
        _fail(t);
      else
        i_123 = t;
      t = not_null(j_123);
      LocalPopChoice(e_88);
    }
  else
    {
      t = d_88;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm v_10 (ATerm t);
  static ATerm v_10 (ATerm t)
  {
    ATerm m_123 = NULL,r_123 = NULL,s_123 = NULL;
    if(((m_123 != NULL) && (m_123 != t)))
      _fail(t);
    else
      m_123 = t;
    if(((s_123 != NULL) && (s_123 != t)))
      _fail(t);
    else
      s_123 = t;
    t = term_r_12;
    t = get_config_0_0(t);
    if(((r_123 != NULL) && (r_123 != t)))
      _fail(t);
    else
      r_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_123), term_u_12);
    t = geq_0_0(t);
    t = not_null(m_123);
    t = i_140(t);
    return(t);
  }
  t = try_1_0(v_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm t_123 = NULL,w_123 = NULL,x_123 = NULL,a_124 = NULL;
  if(((a_124 != NULL) && (a_124 != t)))
    _fail(t);
  else
    a_124 = t;
  t = run_time_0_0(t);
  if(((t_123 != NULL) && (t_123 != t)))
    _fail(t);
  else
    t_123 = t;
  t = not_null(a_124);
  if(((x_123 != NULL) && (x_123 != t)))
    _fail(t);
  else
    x_123 = t;
  t = term_f_18;
  t = whoami_0_0(t);
  if(((w_123 != NULL) && (w_123 != t)))
    _fail(t);
  else
    w_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_88), not_null(t_123)), term_g_13), not_null(w_123)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_c_73;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm b_124 = NULL,e_124 = NULL;
  if(((b_124 != NULL) && (b_124 != t)))
    _fail(t);
  else
    b_124 = t;
  if(((e_124 != NULL) && (e_124 != t)))
    _fail(t);
  else
    e_124 = t;
  t = term_g_88;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_88, term_h_88, not_null(b_124));
  t = table_put_0_0(t);
  t = not_null(e_124);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm t_59, ATerm t)
{
  ATerm h_124 = NULL,i_124 = NULL,j_124 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((h_124 != NULL) && (h_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(h_124), not_null(t_59));
  if(((j_124 != NULL) && (j_124 != t)))
    _fail(t);
  else
    j_124 = t;
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(i_124));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((k_124 != NULL) && (k_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(k_124));
  if(((m_124 != NULL) && (m_124 != t)))
    _fail(t);
  else
    m_124 = t;
  if(((l_124 != NULL) && (l_124 != t)))
    _fail(t);
  else
    l_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(l_124));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  t = table_hashtable_0_0(t);
  if(((p_124 != NULL) && (p_124 != t)))
    _fail(t);
  else
    p_124 = t;
  t = lookup_table_0_1(not_null(n_124), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(p_124);
  t = hashtable_remove_0_1(not_null(n_124), t);
  t = not_null(o_124);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm q_124 = NULL;
  if(((q_124 != NULL) && (q_124 != t)))
    _fail(t);
  else
    q_124 = t;
  t = SSL_exit(not_null(q_124));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_124 != NULL) && (r_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_124 = ATgetArgument(t, 0);
      if(((s_124 != NULL) && (s_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_124 != NULL) && (t_124 != t)))
    _fail(t);
  else
    t_124 = t;
  t = SSL_printnl(not_null(r_124), not_null(s_124));
  t = not_null(t_124);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,x_10 = NULL,j_12 = NULL;
  if(((z_124 != NULL) && (z_124 != t)))
    _fail(t);
  else
    z_124 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((v_124 != NULL) && (v_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((a_125 != NULL) && (a_125 != t)))
    _fail(t);
  else
    a_125 = t;
  t = SSLgetAnnotations(not_null(z_124));
  if(((u_124 != NULL) && (u_124 != t)))
    _fail(t);
  else
    u_124 = t;
  t = not_null(v_124);
  t = a_109(t);
  if(((w_124 != NULL) && (w_124 != t)))
    _fail(t);
  else
    w_124 = t;
  if(((y_124 != NULL) && (y_124 != t)))
    _fail(t);
  else
    y_124 = t;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_124));
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  t = SSLsetAnnotations(not_null(x_10), not_null(u_124));
  if(((x_124 != NULL) && (x_124 != t)))
    _fail(t);
  else
    x_124 = t;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm d_125 = NULL;
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm e_125 = NULL;
  if(((e_125 != NULL) && (e_125 != t)))
    _fail(t);
  else
    e_125 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  static ATerm f_125 (ATerm t);
  static ATerm f_125 (ATerm t)
  {
    ATerm i_88 = t;
    int j_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_123, y_10, t);
        LocalPopChoice(j_88);
      }
    else
      {
        t = i_88;
        t = Cons_2_0(z_10, f_125, t);
      }
    return(t);
  }
  t = f_125(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  t = fetch_1_0(c_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_125 = NULL,n_125 = NULL;
  if(((n_125 != NULL) && (n_125 != t)))
    _fail(t);
  else
    n_125 = t;
  if(((g_125 != NULL) && (g_125 != t)))
    _fail(t);
  else
    g_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, not_null(g_125));
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
  ATerm k_88 = t;
  int l_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_114(t);
      LocalPopChoice(l_88);
    }
  else
    {
      t = k_88;
      {
        ATerm p_125 = NULL,q_125 = NULL;
        if(((p_125 != NULL) && (p_125 != t)))
          _fail(t);
        else
          p_125 = t;
        if(((q_125 != NULL) && (q_125 != t)))
          _fail(t);
        else
          q_125 = t;
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_n_88;
  t = set_config_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_o_88;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm r_125 = NULL;
  if(((r_125 != NULL) && (r_125 != t)))
    _fail(t);
  else
    r_125 = t;
  t = term_n_88;
  t = set_config_0_0(t);
  t = term_q_88;
  t = set_config_0_0(t);
  t = term_r_88;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_s_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_88 = t;
  int u_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_11, b_11, c_11, t);
      LocalPopChoice(u_88);
    }
  else
    {
      t = t_88;
      t = Option_3_0(d_11, e_11, f_11, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm s_125 = NULL,t_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_125 != NULL) && (s_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_125 = ATgetArgument(t, 0);
      if(((t_125 != NULL) && (t_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(s_125), t);
  t = hashtable_get_0_1(not_null(t_125), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((v_125 != NULL) && (v_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_125 = ATgetArgument(t, 0);
      if(((w_125 != NULL) && (w_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_125 = ATgetArgument(t, 1);
      if(((u_125 != NULL) && (u_125 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_125 != NULL) && (x_125 != t)))
    _fail(t);
  else
    x_125 = t;
  if(((z_125 != NULL) && (z_125 != t)))
    _fail(t);
  else
    z_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_125), not_null(w_125));
  {
    ATerm v_88 = t;
    int w_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(w_88);
      }
    else
      {
        t = v_88;
        t = (ATerm) ATempty;
      }
  }
  if(((y_125 != NULL) && (y_125 != t)))
    _fail(t);
  else
    y_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(v_125), not_null(w_125), (ATerm) ATinsert(CheckATermList(not_null(y_125)), not_null(u_125)));
  t = table_put_0_0(t);
  t = not_null(x_125);
  return(t);
}
ATerm register_usage_1_0 (ATerm i_145 (ATerm), ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL;
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  t = term_f_18;
  t = i_145(t);
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_87, term_k_87, not_null(a_126));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
  if(((d_126 != NULL) && (d_126 != t)))
    _fail(t);
  else
    d_126 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(d_126);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_126 != NULL) && (e_126 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_126 = ATgetFirst((ATermList) t);
          if(((f_126 != NULL) && (f_126 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_126);
      if(((h_126 != NULL) && (h_126 != t)))
        _fail(t);
      else
        h_126 = t;
      t = not_null(f_126);
      if(((g_126 != NULL) && (g_126 != t)))
        _fail(t);
      else
        g_126 = t;
      t = not_null(d_126);
      if(((k_126 != NULL) && (k_126 != t)))
        _fail(t);
      else
        k_126 = t;
      t = not_null(h_126);
      t = b_0(t);
      t = not_null(k_126);
      if(((j_126 != NULL) && (j_126 != t)))
        _fail(t);
      else
        j_126 = t;
      t = term_f_18;
      t = c_0(t);
      if(((i_126 != NULL) && (i_126 != t)))
        _fail(t);
      else
        i_126 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_126)), not_null(i_126));
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm m_126 = NULL;
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(m_126);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(m_126);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(m_126);
        }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_y_88;
  t = set_config_0_0(t);
  t = term_z_88;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_a_89;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(g_11, h_11, i_11, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_126 != NULL) && (n_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_126 = ATgetFirst((ATermList) t);
      if(((o_126 != NULL) && (o_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(o_126)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_126)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,j_11 = NULL,k_12 = NULL;
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_126 != NULL) && (q_126 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_126 = ATgetFirst((ATermList) t);
      if(((r_126 != NULL) && (r_126 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((x_126 != NULL) && (x_126 != t)))
    _fail(t);
  else
    x_126 = t;
  t = SSLgetAnnotations(not_null(w_126));
  if(((p_126 != NULL) && (p_126 != t)))
    _fail(t);
  else
    p_126 = t;
  t = not_null(q_126);
  t = u_100(t);
  if(((s_126 != NULL) && (s_126 != t)))
    _fail(t);
  else
    s_126 = t;
  t = not_null(r_126);
  t = v_100(t);
  if(((t_126 != NULL) && (t_126 != t)))
    _fail(t);
  else
    t_126 = t;
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(t_126)), not_null(s_126));
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSLsetAnnotations(not_null(j_11), not_null(p_126));
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
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
  ATerm y_126 = NULL,z_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_126 != NULL) && (y_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_126 = ATgetArgument(t, 0);
      if(((z_126 != NULL) && (z_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_43, not_null(y_126), not_null(z_126));
  t = table_put_0_0(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL;
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  if(((g_127 != NULL) && (g_127 != t)))
    _fail(t);
  else
    g_127 = t;
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_87, not_null(f_127));
  t = set_config_0_0(t);
  t = not_null(e_127);
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_127));
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm h_127 = NULL;
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm b_127 = NULL;
  static ATerm m_11 (ATerm t);
  static ATerm m_11 (ATerm t)
  {
    ATerm b_89 = t;
    int c_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_89 = t;
        int e_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(e_89);
          }
        else
          {
            t = d_89;
            t = g_145(t);
            t = Cons_2_0(n_11, m_11, t);
          }
        LocalPopChoice(c_89);
      }
    else
      {
        t = b_89;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((b_127 != NULL) && (b_127 != t)))
    _fail(t);
  else
    b_127 = t;
  {
    static ATerm k_11 (ATerm t);
    static ATerm k_11 (ATerm t)
    {
      t = term_f_89;
      t = g_145(t);
      return(t);
    }
    t = try_1_0(k_11, t);
  }
  t = not_null(b_127);
  t = Cons_2_0(l_11, m_11, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((l_127 != NULL) && (l_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(l_127), not_null(o_59), not_null(p_59));
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  if(((m_127 != NULL) && (m_127 != t)))
    _fail(t);
  else
    m_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(m_127));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm r_59, ATerm t)
{
  ATerm q_127 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((q_127 != NULL) && (q_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(q_127), not_null(r_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm t_127 = NULL,u_127 = NULL;
  t = SSL_hashtable_create(not_null(w_59), not_null(x_59));
  if(((u_127 != NULL) && (u_127 != t)))
    _fail(t);
  else
    u_127 = t;
  if(((t_127 != NULL) && (t_127 != t)))
    _fail(t);
  else
    t_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(t_127));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL;
  if(((y_127 != NULL) && (y_127 != t)))
    _fail(t);
  else
    y_127 = t;
  t = term_g_89;
  if(((v_127 != NULL) && (v_127 != t)))
    _fail(t);
  else
    v_127 = t;
  t = not_null(y_127);
  if(((x_127 != NULL) && (x_127 != t)))
    _fail(t);
  else
    x_127 = t;
  t = term_h_89;
  if(((w_127 != NULL) && (w_127 != t)))
    _fail(t);
  else
    w_127 = t;
  t = not_null(x_127);
  t = new_hashtable_0_2(not_null(v_127), not_null(w_127), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL;
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  if(((c_128 != NULL) && (c_128 != t)))
    _fail(t);
  else
    c_128 = t;
  t = new_hashtable_0_0(t);
  if(((a_128 != NULL) && (a_128 != t)))
    _fail(t);
  else
    a_128 = t;
  t = not_null(c_128);
  if(((b_128 != NULL) && (b_128 != t)))
    _fail(t);
  else
    b_128 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(z_127), not_null(a_128), t);
  t = not_null(b_128);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL;
  t = SSL_table_hashtable();
  if(((e_128 != NULL) && (e_128 != t)))
    _fail(t);
  else
    e_128 = t;
  if(((d_128 != NULL) && (d_128 != t)))
    _fail(t);
  else
    d_128 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(d_128));
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm i_89 = t;
    int j_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(l_56), t);
        LocalPopChoice(j_89);
      }
    else
      {
        t = i_89;
        {
          ATerm f_128 = NULL,g_128 = NULL;
          if(((f_128 != NULL) && (f_128 != t)))
            _fail(t);
          else
            f_128 = t;
          if(((g_128 != NULL) && (g_128 != t)))
            _fail(t);
          else
            g_128 = t;
          t = not_null(l_56);
          t = table_create_0_0(t);
          t = not_null(g_128);
          t = hashtable_get_0_1(not_null(l_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL,k_128 = NULL;
  if(((k_128 != NULL) && (k_128 != t)))
    _fail(t);
  else
    k_128 = t;
  if(match_cons(t, sym__3))
    {
      if(((h_128 != NULL) && (h_128 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_128 = ATgetArgument(t, 0);
      if(((i_128 != NULL) && (i_128 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_128 = ATgetArgument(t, 1);
      if(((j_128 != NULL) && (j_128 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_128 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(h_128), t);
  t = hashtable_put_0_2(not_null(i_128), not_null(j_128), t);
  t = not_null(k_128);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL;
  if(((o_128 != NULL) && (o_128 != t)))
    _fail(t);
  else
    o_128 = t;
  t = term_k_89;
  t = table_put_0_0(t);
  t = not_null(o_128);
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm l_89 = t;
      int m_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(m_89);
        }
      else
        {
          t = l_89;
          {
            ATerm n_89 = t;
            int o_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(o_89);
              }
            else
              {
                t = n_89;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_11, t);
  }
  {
    static ATerm p_11 (ATerm t);
    static ATerm p_11 (ATerm t)
    {
      ATerm p_89 = t;
      int q_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm t_128 (ATerm p_128, ATerm t);
          static ATerm t_128 (ATerm p_128, ATerm t)
          {
            ATerm q_128 = NULL;
            t = not_null(p_128);
            if(((q_128 != NULL) && (q_128 != t)))
              _fail(t);
            else
              q_128 = t;
            t = not_null(p_128);
            {
              ATerm r_89 = t;
              int s_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_88;
                  t = get_config_0_0(t);
                  LocalPopChoice(s_89);
                }
              else
                {
                  t = r_89;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(q_128);
            t = e_145(t);
            t = term_c_73;
            t = exit_0_0(t);
            return(t);
          }
          ATerm r_128 = NULL;
          if(((r_128 != NULL) && (r_128 != t)))
            _fail(t);
          else
            r_128 = t;
          {
            ATerm t_89 = t;
            int u_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_128(not_null(r_128), t);
                LocalPopChoice(u_89);
              }
            else
              {
                t = t_89;
                {
                  ATerm s_128 = NULL;
                  t = not_null(r_128);
                  if(((s_128 != NULL) && (s_128 != t)))
                    _fail(t);
                  else
                    s_128 = t;
                  t = term_m_88;
                  t = get_config_0_0(t);
                  t = not_null(s_128);
                  t = f_145(t);
                  t = term_c_73;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(q_89);
        }
      else
        {
          t = p_89;
          {
            static ATerm q_11 (ATerm t);
            static ATerm q_11 (ATerm t)
            {
              static ATerm r_11 (ATerm t);
              static ATerm r_11 (ATerm t)
              {
                if(((m_128 != NULL) && (m_128 != t)))
                  _fail(t);
                else
                  m_128 = t;
                return(t);
              }
              t = Undefined_1_0(r_11, t);
              return(t);
            }
            t = option_defined_1_0(q_11, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_128)), term_v_89));
          t = printnl_0_0(t);
          t = e_145(t);
          t = term_u_12;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_11, t);
  }
  if(((n_128 != NULL) && (n_128 != t)))
    _fail(t);
  else
    n_128 = t;
  t = term_j_87;
  t = table_destroy_0_0(t);
  t = not_null(n_128);
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(g_143, h_143, i_143, t);
  t = store_options_0_0(t);
  t = j_143(t);
  {
    ATerm w_89 = t;
    int x_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(x_89);
      }
    else
      {
        t = w_89;
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
static ATerm s_11 (ATerm t)
{
  ATerm v_128 = NULL;
  if(((v_128 != NULL) && (v_128 != t)))
    _fail(t);
  else
    v_128 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_143 (ATerm), ATerm b_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_143, system_usage_0_0, s_11, b_143, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t)
{
  static ATerm t_11 (ATerm t);
  static ATerm t_11 (ATerm t)
  {
    ATerm y_89 = t;
    int z_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_152(t);
        LocalPopChoice(z_89);
      }
    else
      {
        t = y_89;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(t_11, g_152, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm o_152 (ATerm), ATerm p_152 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm v_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    ATerm a_90 = t;
    int b_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_152(t);
        LocalPopChoice(b_90);
      }
    else
      {
        t = a_90;
        t = io_options_0_0(t);
      }
    return(t);
  }
  static ATerm v_11 (ATerm t)
  {
    t = xtc_io_1_0(p_152, t);
    return(t);
  }
  t = xtc_wrap_2_0(u_11, v_11, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm m_152 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, m_152, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL;
  t = read_from_0_0(t);
  if(((z_128 != NULL) && (z_128 != t)))
    _fail(t);
  else
    z_128 = t;
  if(((w_128 != NULL) && (w_128 != t)))
    _fail(t);
  else
    w_128 = t;
  t = not_null(z_128);
  if(((y_128 != NULL) && (y_128 != t)))
    _fail(t);
  else
    y_128 = t;
  if(((x_128 != NULL) && (x_128 != t)))
    _fail(t);
  else
    x_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_128), not_null(x_128));
  t = write_to_0_0(t);
  t = xtc_transform_2_0(x_11, y_11, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_c_90;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL,g_129 = NULL,h_129 = NULL;
  if(((h_129 != NULL) && (h_129 != t)))
    _fail(t);
  else
    h_129 = t;
  t = xtc_pass_verbose_0_0(t);
  if(((a_129 != NULL) && (a_129 != t)))
    _fail(t);
  else
    a_129 = t;
  t = not_null(h_129);
  if(((g_129 != NULL) && (g_129 != t)))
    _fail(t);
  else
    g_129 = t;
  t = xtc_pass_options_0_0(t);
  if(((b_129 != NULL) && (b_129 != t)))
    _fail(t);
  else
    b_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_129), not_null(b_129));
  t = conc_0_0(t);
  return(t);
}
ATerm main_test2_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(w_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_test2_0_0(t);
  return(t);
}
