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
static Symbol sym_Path_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
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
static ATerm term_w_133;
static ATerm term_v_133;
static ATerm term_u_133;
static ATerm term_t_133;
static ATerm term_s_133;
static ATerm term_r_133;
static ATerm term_q_133;
static ATerm term_p_133;
static ATerm term_g_133;
static ATerm term_v_132;
static ATerm term_r_132;
static ATerm term_q_132;
static ATerm term_p_132;
static ATerm term_k_132;
static ATerm term_j_132;
static ATerm term_i_132;
static ATerm term_h_132;
static ATerm term_c_132;
static ATerm term_z_131;
static ATerm term_y_131;
static ATerm term_x_131;
static ATerm term_w_131;
static ATerm term_v_131;
static ATerm term_u_131;
static ATerm term_p_131;
static ATerm term_o_131;
static ATerm term_n_131;
static ATerm term_u_128;
static ATerm term_u_127;
static ATerm term_q_124;
static ATerm term_l_124;
static ATerm term_i_124;
static ATerm term_e_124;
static ATerm term_a_124;
static ATerm term_l_123;
static ATerm term_h_121;
static ATerm term_g_121;
static ATerm term_r_120;
static ATerm term_q_120;
static ATerm term_n_119;
static ATerm term_m_117;
static ATerm term_l_117;
static ATerm term_f_114;
static ATerm term_t_112;
static ATerm term_k_112;
static ATerm term_g_112;
static ATerm term_p_97;
static ATerm term_f_97;
static ATerm term_m_96;
static ATerm term_l_96;
static ATerm term_k_96;
static ATerm term_a_96;
static ATerm term_m_95;
static ATerm term_z_94;
static ATerm term_y_94;
static ATerm term_v_94;
static ATerm term_u_94;
static ATerm term_o_94;
static ATerm term_n_94;
static ATerm term_m_94;
static ATerm term_l_94;
static ATerm term_j_94;
static ATerm term_h_94;
static ATerm term_f_94;
static ATerm term_d_94;
static ATerm term_c_94;
static ATerm term_r_93;
static ATerm term_c_93;
static ATerm term_h_92;
static ATerm term_g_92;
static ATerm term_d_91;
static ATerm term_c_91;
static ATerm term_b_91;
static ATerm term_y_90;
static ATerm term_x_90;
static ATerm term_t_90;
static ATerm term_o_90;
static ATerm term_n_90;
static ATerm term_k_90;
static ATerm term_s_89;
static ATerm term_r_89;
static ATerm term_b_89;
static ATerm term_a_89;
static ATerm term_x_88;
static ATerm term_m_88;
static ATerm term_l_88;
static ATerm term_i_88;
static ATerm term_h_88;
static ATerm term_g_88;
static ATerm term_d_88;
static ATerm term_c_88;
static ATerm term_a_88;
static ATerm term_z_87;
static ATerm term_y_87;
static ATerm term_u_87;
static ATerm term_q_87;
static ATerm term_z_86;
static ATerm term_u_86;
static ATerm term_b_85;
static ATerm term_a_85;
static ATerm term_m_84;
static ATerm term_l_84;
static ATerm term_k_84;
static ATerm term_j_84;
static ATerm term_i_84;
static ATerm term_h_84;
static ATerm term_g_84;
static ATerm term_v_83;
static ATerm term_h_83;
static ATerm term_g_83;
static ATerm term_d_83;
static ATerm term_o_78;
static ATerm term_w_75;
static ATerm term_x_74;
static ATerm term_t_74;
static ATerm term_o_73;
static ATerm term_i_73;
static ATerm term_h_73;
static ATerm term_f_73;
static ATerm term_i_72;
static ATerm term_d_72;
static ATerm term_c_72;
static ATerm term_b_72;
static ATerm term_a_72;
static ATerm term_z_71;
static ATerm term_w_71;
static ATerm term_v_71;
static ATerm term_u_71;
static ATerm term_t_71;
static ATerm term_s_71;
static ATerm term_p_71;
static ATerm term_e_71;
static ATerm term_d_71;
static ATerm term_c_71;
static ATerm term_b_71;
static ATerm term_y_70;
static ATerm term_v_70;
static ATerm term_u_70;
static ATerm term_t_70;
static ATerm term_s_70;
static ATerm term_p_70;
static ATerm term_o_70;
static ATerm term_n_70;
static ATerm term_k_70;
static ATerm term_j_70;
static ATerm term_z_69;
static ATerm term_y_69;
static ATerm term_x_69;
static ATerm term_o_69;
static ATerm term_n_69;
static ATerm term_m_69;
static ATerm term_l_69;
static ATerm term_k_69;
static ATerm term_j_69;
static ATerm term_i_69;
static ATerm term_h_69;
static ATerm term_g_69;
static ATerm term_f_69;
static ATerm term_e_69;
static ATerm term_d_69;
static ATerm term_c_69;
static ATerm term_w_68;
static ATerm term_v_68;
static ATerm term_u_68;
static ATerm term_i_68;
static ATerm term_h_68;
static ATerm term_g_68;
static ATerm term_f_68;
static ATerm term_e_68;
static ATerm term_d_68;
static ATerm term_v_67;
static ATerm term_j_67;
static ATerm term_g_67;
static ATerm term_l_66;
static ATerm term_h_66;
static ATerm term_g_66;
static ATerm term_b_66;
static ATerm term_a_66;
static ATerm term_z_65;
static ATerm term_z_64;
static ATerm term_y_64;
static ATerm term_x_64;
static ATerm term_w_64;
static ATerm term_v_64;
static ATerm term_b_64;
static ATerm term_a_64;
static ATerm term_o_63;
static ATerm term_l_63;
static ATerm term_u_62;
static ATerm term_t_62;
static ATerm term_s_62;
static ATerm term_r_62;
static ATerm term_q_62;
static ATerm term_c_60;
static ATerm term_z_59;
static ATerm term_y_59;
static ATerm term_w_59;
static ATerm term_u_59;
static ATerm term_a_57;
static ATerm term_z_56;
static ATerm term_y_56;
static ATerm term_x_56;
static ATerm term_w_56;
static ATerm term_v_56;
static ATerm term_u_56;
static ATerm term_t_56;
static ATerm term_s_56;
static ATerm term_r_56;
static ATerm term_q_56;
static ATerm term_l_56;
static ATerm term_k_56;
static ATerm term_j_56;
static ATerm term_i_56;
static ATerm term_h_56;
static ATerm term_g_56;
static ATerm term_f_56;
static ATerm term_e_56;
static ATerm term_d_56;
static ATerm term_c_56;
static ATerm term_b_56;
static ATerm term_a_56;
static ATerm term_z_55;
static ATerm term_y_55;
static ATerm term_x_55;
static ATerm term_w_55;
static ATerm term_v_55;
static ATerm term_u_55;
static ATerm term_t_55;
static ATerm term_s_55;
static ATerm term_r_55;
static ATerm term_q_55;
static ATerm term_l_55;
static ATerm term_k_55;
static ATerm term_j_55;
static ATerm term_i_55;
static ATerm term_e_55;
static ATerm term_d_55;
static ATerm term_c_55;
static ATerm term_r_54;
static ATerm term_m_54;
static ATerm term_k_54;
static ATerm term_s_53;
static ATerm term_z_52;
static ATerm term_w_50;
static ATerm term_j_50;
static ATerm term_u_49;
static ATerm term_o_49;
static ATerm term_a_49;
static ATerm term_z_48;
static ATerm term_t_48;
static ATerm term_d_48;
static ATerm term_c_48;
static ATerm term_b_48;
static ATerm term_s_47;
static ATerm term_r_47;
static ATerm term_q_47;
static ATerm term_n_47;
static ATerm term_m_47;
static ATerm term_l_47;
static ATerm term_k_46;
static ATerm term_j_46;
static ATerm term_i_46;
static ATerm term_v_45;
static ATerm term_u_45;
static ATerm term_t_45;
static ATerm term_s_45;
static ATerm term_b_44;
static ATerm term_j_43;
static ATerm term_i_43;
static ATerm term_h_43;
static ATerm term_w_42;
static ATerm term_v_42;
static ATerm term_u_42;
static ATerm term_t_42;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_q_42;
static ATerm term_p_42;
static ATerm term_m_42;
static ATerm term_p_41;
static ATerm term_m_41;
static ATerm term_l_41;
static ATerm term_e_41;
static ATerm term_d_41;
static ATerm term_c_41;
static ATerm term_b_41;
static ATerm term_t_40;
static ATerm term_g_40;
static ATerm term_f_40;
static ATerm term_e_40;
static ATerm term_b_40;
static ATerm term_a_40;
static ATerm term_z_39;
static ATerm term_y_39;
static ATerm term_w_39;
static ATerm term_v_39;
static ATerm term_u_39;
static ATerm term_t_39;
static ATerm term_t_37;
static ATerm term_k_37;
static ATerm term_w_35;
static ATerm term_v_35;
static ATerm term_p_35;
static ATerm term_o_35;
static ATerm term_l_35;
static ATerm term_k_35;
static ATerm term_h_35;
static ATerm term_x_34;
static ATerm term_w_34;
static ATerm term_v_34;
static ATerm term_u_34;
static ATerm term_m_34;
static ATerm term_l_34;
static ATerm term_k_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_y_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_t_33;
static ATerm term_s_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_m_32;
static ATerm term_e_32;
static ATerm term_d_32;
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_w_31;
static ATerm term_x_29;
static ATerm term_w_29;
static ATerm term_t_29;
static ATerm term_s_29;
static ATerm term_m_28;
static ATerm term_i_28;
static ATerm term_z_27;
static ATerm term_o_27;
static ATerm term_j_27;
static ATerm term_l_26;
static ATerm term_z_25;
static ATerm term_n_25;
static ATerm term_a_25;
static ATerm term_w_24;
static ATerm term_u_24;
static ATerm term_r_24;
static ATerm term_q_24;
static ATerm term_h_23;
static ATerm term_g_23;
static ATerm term_f_23;
static ATerm term_e_23;
static ATerm term_d_23;
static ATerm term_c_23;
static ATerm term_b_23;
static ATerm term_a_23;
static ATerm term_z_22;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_v_22;
static ATerm term_u_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_r_22;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_j_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
static ATerm term_b_22;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_x_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_n_21;
static ATerm term_m_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_k_20;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_g_20;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_a_20;
static ATerm term_z_19;
static ATerm term_y_19;
static ATerm term_x_19;
static ATerm term_w_19;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_t_19;
static ATerm term_s_19;
static ATerm term_r_19;
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
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-args-to-exec", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_String_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("i.trm", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_String_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_FILE_1, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_y_18, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_String_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Option_1, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_String_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("10", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_String_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_h_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--foo", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_String_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Option_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--url", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_String_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("http://bar.com", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_String_1, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_URL_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_p_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-args-to-http", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i=@i.trm", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_d_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose=10", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_l_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--url=@http://bar.com", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-args-to-xtservice", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("some.trm", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_String_1, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_FILE_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Option_1, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@some.trm", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=--foo", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-desugar-template", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Explicit_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Template_2, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATempty);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Some_1, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Template_2, term_u_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Regular_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Template_2, term_a_21, term_v_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Template_2, term_a_21, term_y_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Implicit_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Template_2, term_d_21, term_v_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Template_2, term_d_21, term_y_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-desugar-desc", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_XT_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Some_1, term_y_18);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_File_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Input_1, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Some_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_String_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Some_1, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_File_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Output_1, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Some_1, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Streams_3, term_m_21, term_s_21, term_v_20);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Exec_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_XTService_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_XtcDesc_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-desugar-model", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_v_21, term_f_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Input_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Output_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Error_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Arguments_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_TVarSpec_1, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_i_21, term_e_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-desugar-arg", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_String_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Option_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("foo", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_String_1, term_n_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_l_22, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_FILE_1, term_n_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_FILE_1, term_p_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_l_22, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_URL_1, term_n_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_URL_1, term_p_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_l_22, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("fred", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_String_1, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_l_22, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_String_1, term_a_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_l_22, term_d_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-desugar-args", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--bar", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_FILE_1, term_z_22);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_q_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--fred", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_URL_1, term_a_23);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_w_24);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_String_1, term_g_23);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_n_25, term_p_22);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_n_25, term_b_23);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_String_1, term_h_23);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_FILE_1, term_b_23);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_j_27, term_o_27);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_String_1, term_u_24);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_URL_1, term_d_23);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_i_28, term_m_28);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-model-to-args", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_XtcConf_4, term_v_20, term_v_20, term_v_20, (ATerm) ATempty);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("i", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_FILE_1, term_x_29);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Some_1, term_w_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_FILE_1, term_z_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Some_1, term_d_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_XtcConf_4, term_y_31, term_e_32, term_v_20, (ATerm) ATempty);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_String_1, term_x_29);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_FILE_1, term_h_33);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_y_18, term_i_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_String_1, term_z_31);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_FILE_1, term_s_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_ArgOption_2, term_o_21, term_t_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_XtcModel_2, term_x_21, term_e_21);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find-reg", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find-path", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("mysglr", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("/usr/bin", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("strc", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_XtcQuery_1, term_l_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal : ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected         : ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-search", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_XtcQuery_1, term_e_34);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("/usr/bin/mysglr", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_XtcImported_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-has-meta", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_XtcLoaded_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_XtcRef_0);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_XtcReg_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-register-reference", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC.lib-test", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-register-resource", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("my resource", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("/tmp/non-existing/url", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_w_39, term_y_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-register-component", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("my component", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_y_39);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("/tmp/non-existing/url2", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_f_40);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-import", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-save", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC.save", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dump", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC.dump", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-location", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_p_20);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_20);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_v_34);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("type", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-table", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_String_1, term_t_45);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_u_45);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_String_1, term_i_46);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_j_46);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_String_1, term_l_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_m_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("rtg-nf", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym_String_1, term_q_47);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_r_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-definition", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_String_1, term_b_48);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_c_48);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_String_1, term_t_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_XtcMeta_2, term_s_45, term_z_48);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to convert repository", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym_Notice_0);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_W__OK_0);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to write to repository file", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Repository_1, (ATerm) ATempty);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository file", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_55, term_m_41, term_r_55);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_55, term_u_55, term_v_55);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_55, term_y_55, term_z_55);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_56, term_c_56, term_d_56);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_56, term_g_56, term_h_56);
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_56, term_k_56, term_l_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_56, term_s_56, term_t_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_56, term_w_56, term_x_56);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_56, term_a_57, term_u_59);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_59, term_z_59, term_c_60);
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_62, term_s_62, term_t_62);
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_63, term_o_63, term_a_64);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_64, term_w_64, term_x_64);
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_64, term_z_65, term_a_66);
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_66, term_h_66, term_l_66);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_67, term_v_67, term_d_68);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_68, term_g_68, term_h_68);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_68, term_v_68, term_w_68);
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_69, term_e_69, term_f_69);
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_69, term_i_69, term_j_69);
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_69, term_m_69, term_n_69);
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_69, term_y_69, term_z_69);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_70, term_n_70, term_o_70);
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_70, term_t_70, term_u_70);
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_70, term_b_71, term_c_71);
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_71, term_p_71, term_s_71);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_71, term_v_71, term_w_71);
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_72, term_b_72, term_c_72);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Executing program (exec-newp)", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("curl", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--fail", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("FILES=@", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=@", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("ARGUMENTS=", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("=@", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Mutually exclusive arguments", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("- Fst succeeded", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("- Snd succeeded", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Arguments left after substitution!", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Explicit template contains argument variable!", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(sym_Type_1, term_h_84);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(sym_Some_1, term_i_84);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym_Values_1, (ATerm) ATempty);
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym_Default_1, term_k_84);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym_Some_1, term_l_84);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Query in argument resolved", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to resolve query in argument", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Merging options", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcModel", 0, ATtrue));
  ATprotect(&(term_q_87));
  term_q_87 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcInherit", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("Inheritance yielded new configuration/registration term", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcContracts", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(sym_Pre_0);
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(sym_Post_0);
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_z_87, term_a_88);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(sym_Warning_0);
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed, enforcing by failure", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Contract checking failed", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--check", 0, ATtrue));
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(sym__2, term_l_88, term_v_34);
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Performing contract checks during dispatch", 0, ATtrue));
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [start]", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(ATmakeSymbol("** xtc-cc-wrap [end]", 0, ATtrue));
  ATprotect(&(term_r_89));
  term_r_89 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch: Registration not found", 0, ATtrue));
  ATprotect(&(term_s_89));
  term_s_89 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-dispatch", 0, ATtrue));
  ATprotect(&(term_k_90));
  term_k_90 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_90));
  term_t_90 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_90));
  term_x_90 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_90));
  term_y_90 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_92));
  term_g_92 = (ATerm) ATmakeAppl(sym_XtcCache_0);
  ATprotect(&(term_h_92));
  term_h_92 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache hit: ", 0, ATtrue));
  ATprotect(&(term_c_93));
  term_c_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache store: ", 0, ATtrue));
  ATprotect(&(term_r_93));
  term_r_93 = (ATerm) ATmakeAppl(ATmakeSymbol("log-stream", 0, ATtrue));
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(ATmakeSymbol("vomit", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("debug", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(ATmakeSymbol("info", 0, ATtrue));
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(ATmakeSymbol("notice", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("warning", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("error", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("critical", 0, ATtrue));
  ATprotect(&(term_n_94));
  term_n_94 = (ATerm) ATmakeAppl(ATmakeSymbol("alert", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("emergency", 0, ATtrue));
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("identity crisis", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
  ATprotect(&(term_y_94));
  term_y_94 = (ATerm) ATmakeAppl(ATmakeSymbol(" | ", 0, ATtrue));
  ATprotect(&(term_z_94));
  term_z_94 = (ATerm) ATmakeAppl(ATmakeSymbol("] ", 0, ATtrue));
  ATprotect(&(term_m_95));
  term_m_95 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_96));
  term_a_96 = (ATerm) ATmakeInt(-2);
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeInt(-5);
  ATprotect(&(term_l_96));
  term_l_96 = (ATerm) ATmakeInt(-10);
  ATprotect(&(term_m_96));
  term_m_96 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_97));
  term_f_97 = (ATerm) ATmakeAppl(sym_Debug_0);
  ATprotect(&(term_p_97));
  term_p_97 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_112));
  term_g_112 = (ATerm) ATmakeAppl(ATmakeSymbol("HTTP dispatch component dependency is broken!", 0, ATtrue));
  ATprotect(&(term_k_112));
  term_k_112 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcMethod=POST", 0, ATtrue));
  ATprotect(&(term_t_112));
  term_t_112 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_k_112);
  ATprotect(&(term_f_114));
  term_f_114 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to read from repository URL", 0, ATtrue));
  ATprotect(&(term_l_117));
  term_l_117 = (ATerm) ATmakeAppl(ATmakeSymbol("http://", 0, ATtrue));
  ATprotect(&(term_m_117));
  term_m_117 = (ATerm) ATmakeAppl(ATmakeSymbol("https://", 0, ATtrue));
  ATprotect(&(term_n_119));
  term_n_119 = (ATerm) ATmakeAppl(ATmakeSymbol("Converting legacy XTC repository", 0, ATtrue));
  ATprotect(&(term_q_120));
  term_q_120 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_r_120));
  term_r_120 = (ATerm) ATmakeAppl(sym__2, term_g_88, term_v_34);
  ATprotect(&(term_g_121));
  term_g_121 = (ATerm) ATmakeAppl(ATmakeSymbol("--enforce        Toggle contract enforcing (default: off)", 0, ATtrue));
  ATprotect(&(term_h_121));
  term_h_121 = (ATerm) ATmakeAppl(ATmakeSymbol("--check          Toggle contract checking (default: off)", 0, ATtrue));
  ATprotect(&(term_l_123));
  term_l_123 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_124));
  term_a_124 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_124));
  term_e_124 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_124));
  term_i_124 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_124));
  term_l_124 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_124));
  term_q_124 = (ATerm) ATmakeAppl(sym__2, term_i_124, term_l_124);
  ATprotect(&(term_u_127));
  term_u_127 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_128));
  term_u_128 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_131));
  term_n_131 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_131));
  term_o_131 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_131));
  term_p_131 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_131));
  term_u_131 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_131));
  term_v_131 = (ATerm) ATmakeAppl(sym__2, term_u_131, term_v_34);
  ATprotect(&(term_w_131));
  term_w_131 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_131));
  term_x_131 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_131));
  term_y_131 = (ATerm) ATmakeAppl(sym__2, term_x_131, term_v_34);
  ATprotect(&(term_z_131));
  term_z_131 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_132));
  term_c_132 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_132));
  term_h_132 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_132));
  term_i_132 = (ATerm) ATmakeAppl(sym__2, term_h_132, term_v_34);
  ATprotect(&(term_j_132));
  term_j_132 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_132));
  term_k_132 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_132));
  term_p_132 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_132));
  term_q_132 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_132));
  term_r_132 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_132));
  term_v_132 = (ATerm) ATmakeAppl(sym__3, term_i_124, term_l_124, (ATerm) ATempty);
  ATprotect(&(term_g_133));
  term_g_133 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_133));
  term_p_133 = (ATerm) ATmakeAppl(ATmakeSymbol("lib-test", 0, ATtrue));
  ATprotect(&(term_q_133));
  term_q_133 = (ATerm) ATmakeAppl(sym__2, term_a_124, term_p_133);
  ATprotect(&(term_r_133));
  term_r_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-repository tests]", 0, ATtrue));
  ATprotect(&(term_s_133));
  term_s_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-register tests]", 0, ATtrue));
  ATprotect(&(term_t_133));
  term_t_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-search tests]", 0, ATtrue));
  ATprotect(&(term_u_133));
  term_u_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-find tests]", 0, ATtrue));
  ATprotect(&(term_v_133));
  term_v_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-model tests]", 0, ATtrue));
  ATprotect(&(term_w_133));
  term_w_133 = (ATerm) ATmakeAppl(ATmakeSymbol("[xtc-adapt tests]", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm xtc_adapt_tests_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm check_for_failures_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm report_test_0_0 (ATerm t);
ATerm init_record_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm test_suite_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t);
ATerm say_1_0 (ATerm o_122 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm named_test_suite_1_1 (ATerm u_111 (ATerm), ATerm t_15, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm xtc_model_tests_0_0 (ATerm t);
ATerm xtc_find_path_1_0 (ATerm t_153 (ATerm), ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm xtc_find_tests_0_0 (ATerm t);
ATerm xtc_search_0_0 (ATerm t);
ATerm apply_and_fail_4_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm apply_and_fail_3_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm apply_test_4_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm xtc_search_tests_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm xtc_dump_0_1 (ATerm x_79, ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm xtc_is_imported_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm xtc_ref2aterm_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm xtc_reg2aterm_1_0 (ATerm x_150 (ATerm), ATerm t);
ATerm split_2_0 (ATerm a_132 (ATerm), ATerm b_132 (ATerm), ATerm t);
ATerm xtc_table2aterm_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm xtc_save_0_1 (ATerm w_79, ATerm t);
ATerm xtc_register_component_0_1 (ATerm n_3, ATerm t);
ATerm xtc_register_component_0_0 (ATerm t);
ATerm xtc_register_resource_0_1 (ATerm m_3, ATerm t);
ATerm xtc_register_resource_0_0 (ATerm t);
ATerm xtc_register_reference_0_1 (ATerm l_3, ATerm t);
ATerm xtc_register_reference_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm xtc_register_tests_0_0 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
ATerm apply_test_3_0 (ATerm z_148 (ATerm), ATerm a_149 (ATerm), ATerm b_149 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_123 (ATerm), ATerm t);
ATerm debug_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm record_failure_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm record_success_0_0 (ATerm t);
ATerm do_test_2_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
ATerm apply_and_check_4_0 (ATerm c_149 (ATerm), ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm xtc_repository_tests_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm xtc_add_meta_0_1 (ATerm f_80, ATerm t);
ATerm xtc_add_meta_all_0_1 (ATerm e_80, ATerm t);
static ATerm p_8 (ATerm t);
ATerm xtc_register_0_1 (ATerm k_3, ATerm t);
ATerm xtc_aterm2table_0_1 (ATerm k_79, ATerm t);
ATerm Repository_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm get_extension_0_0 (ATerm t);
ATerm xtc_default_xt_type_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm basename_1_0 (ATerm m_134 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
ATerm basename_0_0 (ATerm t);
ATerm has_no_extension_0_0 (ATerm t);
ATerm xtc_default_xt_model_0_0 (ATerm t);
ATerm xtc_default_xt_meta_0_0 (ATerm t);
ATerm XtcConvertToolEntry_0_0 (ATerm t);
ATerm XtcConvertTool_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm XtcConvertImport_0_0 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm xtc_convert_0_0 (ATerm t);
ATerm xtc_convert_repository_0_0 (ATerm t);
ATerm notice_0_1 (ATerm b_79, ATerm t);
ATerm write_in_baf_to_stream_0_0 (ATerm t);
ATerm WriteToFile_1_0 (ATerm c_123 (ATerm), ATerm t);
ATerm WriteToBinaryFile_0_0 (ATerm t);
ATerm creat_0_0 (ATerm t);
ATerm split_init_last_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
ATerm repeat_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm at_last_1_0 (ATerm k_124 (ATerm), ATerm t);
ATerm init_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm e_134 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm dirname_0_0 (ATerm t);
ATerm can_create_file_0_0 (ATerm t);
ATerm xtc_create_file_0_0 (ATerm t);
ATerm can_write_file_0_0 (ATerm t);
ATerm xtc_save_file_0_1 (ATerm v_79, ATerm t);
ATerm xtc_create_new_0_0 (ATerm t);
ATerm xtc_load_file_0_0 (ATerm t);
ATerm err_0_1 (ATerm z_78, ATerm t);
static ATerm x_33 (ATerm k_33, ATerm l_33, ATerm t);
static ATerm b_34 (ATerm o_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
ATerm read_from_stream_0_0 (ATerm t);
ATerm fopen_0_0 (ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stdio_stream_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm open_stream_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm access_0_0 (ATerm t);
ATerm file_exists_0_0 (ATerm t);
static ATerm l_36 (ATerm x_35, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm call_1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
ATerm call_0_0 (ATerm t);
ATerm xtc_fetch_loc_0_0 (ATerm t);
ATerm xtc_find_loc_1_0 (ATerm u_153 (ATerm), ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
ATerm execvp_0_0 (ATerm t);
ATerm dup2_0_0 (ATerm t);
ATerm STDERR__FILENO_0_0 (ATerm t);
ATerm STDOUT__FILENO_0_0 (ATerm t);
ATerm STDIN__FILENO_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_123 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm waitpid_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_2_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t);
ATerm fork_and_wait_1_0 (ATerm a_142 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm exec_newp_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm exec_http_0_1 (ATerm b_88, ATerm t);
ATerm xtc_execute_0_0 (ATerm t);
ATerm open_0_0 (ATerm t);
ATerm xtc_streamdef_to_fd_0_1 (ATerm j_3, ATerm t);
ATerm xtc_stream_to_fd_0_1 (ATerm i_3, ATerm t);
ATerm xtc_argterm_to_exec_0_0 (ATerm t);
ATerm xtc_arg_to_exec_0_0 (ATerm t);
ATerm xtc_args_to_exec_0_0 (ATerm t);
static ATerm v_43 (ATerm x_42, ATerm y_42, ATerm t);
static ATerm w_43 (ATerm m_43, ATerm n_43, ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm xtc_arg_to_http_generic_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm xtc_args_to_http_0_0 (ATerm t);
static ATerm z_44 (ATerm d_44, ATerm e_44, ATerm t);
static ATerm a_45 (ATerm o_44, ATerm p_44, ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm xtc_arg_to_xtservice_0_0 (ATerm t);
ATerm URL_1_0 (ATerm r_109 (ATerm), ATerm t);
ATerm xtc_arg_to_string_0_0 (ATerm t);
ATerm xtc_argterm_to_http_0_0 (ATerm t);
static ATerm i_47 (ATerm y_45, ATerm z_45, ATerm a_46, ATerm t);
static ATerm j_47 (ATerm t_46, ATerm u_46, ATerm v_46, ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm xtc_arg_to_http_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm xtc_args_to_xtservice_0_0 (ATerm t);
static ATerm d_50 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm a_48, ATerm e_48, ATerm f_48, ATerm g_48, ATerm t);
ATerm xtc_prepare_0_0 (ATerm t);
ATerm xtc_targ_dump_0_1 (ATerm w_91, ATerm t);
ATerm xtc_layout_dump_0_0 (ATerm t);
ATerm option_isect_0_0 (ATerm t);
ATerm xtc_toption_to_args_2_0 (ATerm m_151 (ATerm), ATerm n_151 (ATerm), ATerm t);
static ATerm s_10 (ATerm t);
ATerm diff_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm UfShift_0_0 (ATerm t);
ATerm Zip3_0_0 (ATerm t);
ATerm Zip2_0_0 (ATerm t);
ATerm Zip1_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm t);
ATerm zip_1_0 (ATerm r_125 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
ATerm UfDecompose_0_0 (ATerm t);
ATerm UfIdem_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm argoption_isect_0_0 (ATerm t);
ATerm xtc_targoption_to_args_3_0 (ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t);
static ATerm i_62 (ATerm m_56, ATerm n_56, ATerm o_56, ATerm b_57, ATerm c_57, ATerm t);
static ATerm j_62 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm r_57, ATerm s_57, ATerm t);
static ATerm k_62 (ATerm b_58, ATerm c_58, ATerm d_58, ATerm e_58, ATerm f_58, ATerm t);
static ATerm l_62 (ATerm r_58, ATerm s_58, ATerm t_58, ATerm u_58, ATerm v_58, ATerm t);
static ATerm m_62 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm h_59, ATerm i_59, ATerm t);
static ATerm n_62 (ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm j_60, ATerm t);
static ATerm o_62 (ATerm t_60, ATerm u_60, ATerm v_60, ATerm w_60, ATerm x_60, ATerm t);
static ATerm p_62 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm n_61, ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm xtc_targ_to_args_0_0 (ATerm t);
ATerm xtc_streamdef_to_arg_0_1 (ATerm h_3, ATerm t);
ATerm xtc_stream_to_arg_0_1 (ATerm g_3, ATerm t);
ATerm xtc_conf_input_0_0 (ATerm t);
ATerm xtc_stream_input_0_0 (ATerm t);
ATerm xtc_desc_input_0_0 (ATerm t);
ATerm xtc_conf_output_0_0 (ATerm t);
ATerm xtc_stream_output_0_0 (ATerm t);
ATerm xtc_desc_output_0_0 (ATerm t);
ATerm xtc_conf_error_0_0 (ATerm t);
ATerm xtc_stream_error_0_0 (ATerm t);
ATerm xtc_desc_error_0_0 (ATerm t);
ATerm xtc_targ_to_args_0_2 (ATerm e_3, ATerm f_3, ATerm t);
static ATerm u_11 (ATerm t);
ATerm xtc_tor_to_args_0_2 (ATerm d_92, ATerm e_92, ATerm t);
ATerm Nil_T_0_0 (ATerm t);
ATerm Cons_T_2_0 (ATerm g_1 (ATerm), ATerm l_1 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm y_130 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
ATerm xtc_targ_thread_map_1_2 (ATerm s_151 (ATerm), ATerm b_92, ATerm c_92, ATerm t);
ATerm xtc_conf_args_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm xtc_layout_to_args_1_2 (ATerm r_151 (ATerm), ATerm z_91, ATerm a_92, ATerm t);
static ATerm c_12 (ATerm t);
ATerm xtc_template_filter_0_0 (ATerm t);
ATerm xtc_template_to_args_0_2 (ATerm z_0, ATerm a_1, ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm xtc_model_to_args_0_1 (ATerm t_92, ATerm t);
ATerm xtc_desugar_targ_0_0 (ATerm t);
ATerm xtc_desugar_template_0_0 (ATerm t);
ATerm xtc_desugar_desc_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm innermost_1_0 (ATerm f_121 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
ATerm xtc_desugar_model_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm at_end_1_0 (ATerm z_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm h_77 (ATerm s_73, ATerm t_73, ATerm u_73, ATerm t);
static ATerm i_77 (ATerm h_74, ATerm i_74, ATerm t);
static ATerm j_77 (ATerm e_75, ATerm t);
static ATerm k_77 (ATerm j_75, ATerm t);
static ATerm l_77 (ATerm o_75, ATerm p_75, ATerm q_75, ATerm t);
static ATerm m_77 (ATerm a_76, ATerm b_76, ATerm c_76, ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm xtc_desugar_arg_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm xtc_desugar_args_0_0 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm xtc_desugar_conf_0_0 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm xtc_component_configure_0_0 (ATerm t);
ATerm mapconcat_1_0 (ATerm v_130 (ATerm), ATerm t);
ATerm xtc_filter_meta_0_1 (ATerm i_80, ATerm t);
ATerm xtc_override_meta_0_1 (ATerm g_80, ATerm t);
ATerm xtc_reconfigure_0_2 (ATerm i_87, ATerm j_87, ATerm t);
ATerm xtc_fetch_meta_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm xtc_component_inherit_0_0 (ATerm t);
ATerm xtc_configure_0_0 (ATerm t);
ATerm XtcContract_3_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t);
ATerm xtc_fetch_meta_0_1 (ATerm j_81, ATerm t);
ATerm xtc_fetch_contracts_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm xtc_fetch_contracts_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm warn_0_1 (ATerm a_79, ATerm t);
ATerm xtc_enforce_contract_0_0 (ATerm t);
ATerm restore_always_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
ATerm table_remove_0_0 (ATerm t);
ATerm rm_config_0_0 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm xtc_cc_disable_1_0 (ATerm x_151 (ATerm), ATerm t);
ATerm some_or_empty_0_0 (ATerm t);
ATerm xtc_cc_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm xtc_check_contract_0_0 (ATerm t);
ATerm xtc_cc_wrap_1_0 (ATerm u_151 (ATerm), ATerm t);
ATerm xtc_import_ref_remote_0_0 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm xtc_find_reg_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm xtc_find_reg_0_0 (ATerm t);
ATerm restore_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
ATerm xtc_dispatch_find_reg_0_0 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm xtc_dispatch_0_1 (ATerm t_85, ATerm t);
ATerm Some_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm option_1_0 (ATerm t_132 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Last_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm at_suffix_1_0 (ATerm d_124 (ATerm), ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm split_fetch_1_0 (ATerm v_123 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm i_133 (ATerm), ATerm t);
ATerm string_tokenize_1_0 (ATerm h_133 (ATerm), ATerm t);
ATerm string_tokenize_0_1 (ATerm h_46, ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm base_filename_0_0 (ATerm t);
ATerm isdir_0_0 (ATerm t);
static ATerm a_103 (ATerm t_102, ATerm t);
ATerm filemode_0_0 (ATerm t);
ATerm copy_file_0_0 (ATerm t);
ATerm xtc_ensure_file_0_0 (ATerm t);
ATerm XtcConf_4_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm None_0_0 (ATerm t);
ATerm stdin_0_0 (ATerm t);
ATerm FILE_1_0 (ATerm q_109 (ATerm), ATerm t);
ATerm close_0_0 (ATerm t);
ATerm assert_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm perror_0_0 (ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm strcat_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
ATerm new_temp_file_0_0 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm), ATerm t);
ATerm xtc_generate_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm table_putlist_0_0 (ATerm t);
ATerm XtcImported_0_0 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm xtc_import_ref_0_0 (ATerm t);
ATerm xtc_import_ref_local_0_0 (ATerm t);
ATerm xtc_import_local_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm xtc_query_one_2_0 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm t);
ATerm crush_3_0 (ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm collect_all_2_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t);
ATerm collect_all_1_0 (ATerm h_129 (ATerm), ATerm t);
ATerm xtc_has_meta_0_1 (ATerm t_0, ATerm t);
ATerm set_0_0 (ATerm t);
ATerm eq_0_0 (ATerm t);
ATerm HdMember_p__2_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
ATerm union_1_0 (ATerm t_127 (ATerm), ATerm t);
ATerm union_0_0 (ATerm t);
ATerm get_0_0 (ATerm t);
ATerm table_union_0_0 (ATerm t);
ATerm xtc_cache_put_0_1 (ATerm k_81, ATerm t);
ATerm MkCons_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm xtc_query_all_2_1 (ATerm g_151 (ATerm), ATerm h_151 (ATerm), ATerm y_81, ATerm t);
ATerm fputs_0_0 (ATerm t);
ATerm log_puts_0_0 (ATerm t);
ATerm write_in_text_to_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
ATerm log_stream_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm while_not_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm strlen_0_0 (ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm severity_string_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm at_suffix_rev_1_0 (ATerm h_124 (ATerm), ATerm t);
ATerm get_filename_0_0 (ATerm t);
ATerm log_src_0_0 (ATerm t);
ATerm log_0_2 (ATerm h_79, ATerm i_79, ATerm t);
ATerm log_if_verbose_1_1 (ATerm t_150 (ATerm), ATerm d_79, ATerm t);
ATerm verbose_level_0_0 (ATerm t);
ATerm if_log_severity_1_1 (ATerm u_150 (ATerm), ATerm j_79, ATerm t);
ATerm log_0_3 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm t);
ATerm dbg_0_1 (ATerm c_79, ATerm t);
ATerm xtc_query_one_2_1 (ATerm e_151 (ATerm), ATerm f_151 (ATerm), ATerm x_81, ATerm t);
ATerm xtc_query_all_2_0 (ATerm c_151 (ATerm), ATerm d_151 (ATerm), ATerm t);
static ATerm o_15 (ATerm t);
ATerm xtc_search_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm getenv_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
ATerm xtc_init_0_0 (ATerm t);
ATerm XtcQuery_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
ATerm XtcQuery_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm xtc_desugar_query_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm xtc_find_reg_local_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm xtc_find_reg_local_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_131 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
ATerm xtc_check_dependencies_local_0_0 (ATerm t);
ATerm exec_http_dependencies_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm exec_http_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_load_url_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm _2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
ATerm left_match_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm string_starts_with_0_1 (ATerm g_43, ATerm t);
ATerm is_url_http_0_0 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm xtc_load_0_1 (ATerm z_79, ATerm t);
ATerm hashtable_keys_0_0 (ATerm t);
ATerm table_keys_0_0 (ATerm t);
ATerm xtc_init_0_2 (ATerm c_80, ATerm d_80, ATerm t);
ATerm xtc_init_0_1 (ATerm b_80, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm repository_option_0_0 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm xtc_enforce_option_0_0 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
ATerm xtc_check_option_0_0 (ATerm t);
ATerm xtc_contract_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm p_145 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm o_145 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm default_system_usage_2_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm t);
ATerm Program_1_0 (ATerm d_109 (ATerm), ATerm t);
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
ATerm foldr_2_0 (ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t);
ATerm crush_2_0 (ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_140 (ATerm), ATerm t);
static ATerm h_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
ATerm store_options_0_0 (ATerm t);
ATerm hashtable_remove_0_1 (ATerm x_59, ATerm t);
ATerm hashtable_destroy_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm exit_0_0 (ATerm t);
ATerm printnl_0_0 (ATerm t);
ATerm Undefined_1_0 (ATerm e_109 (ATerm), ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm fetch_1_0 (ATerm s_123 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm h_144 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Help_0_0 (ATerm t);
ATerm try_1_0 (ATerm c_115 (ATerm), ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
ATerm table_push_0_0 (ATerm t);
ATerm register_usage_1_0 (ATerm n_145 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
ATerm system_usage_switch_0_0 (ATerm t);
ATerm UndefinedOption_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm y_17 (ATerm t);
ATerm parse_options_p__1_0 (ATerm l_145 (ATerm), ATerm t);
ATerm hashtable_put_0_2 (ATerm s_59, ATerm t_59, ATerm t);
ATerm hashtable_get_0_1 (ATerm v_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_60, ATerm b_60, ATerm t);
ATerm new_hashtable_0_0 (ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm p_56, ATerm t);
ATerm table_put_0_0 (ATerm t);
ATerm parse_options_3_0 (ATerm i_145 (ATerm), ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t);
static ATerm d_18 (ATerm t);
ATerm option_wrap_2_0 (ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm t);
ATerm xtc_wrap_2_0 (ATerm k_152 (ATerm), ATerm l_152 (ATerm), ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
ATerm main_lib_test_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_19), term_f_19), term_c_19);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), term_g_19), term_d_19), term_z_18), term_x_18);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_19), term_n_19);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_19), term_o_19), term_l_19);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_19), term_f_19), term_c_19);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_20), term_y_19), term_x_19);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_19), term_n_19);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_20), term_b_20);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_19), term_i_20);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_20), term_k_20);
  return(t);
}
ATerm xtc_adapt_tests_0_0 (ATerm t)
{
  t = apply_test_4_0(a_0, xtc_args_to_exec_0_0, d_0, g_0, t);
  t = apply_test_4_0(i_0, xtc_args_to_exec_0_0, j_0, l_0, t);
  t = apply_test_4_0(n_0, xtc_args_to_http_0_0, q_0, s_0, t);
  t = apply_test_4_0(v_0, xtc_args_to_http_0_0, y_0, b_1, t);
  t = apply_test_4_0(c_1, xtc_args_to_xtservice_0_0, d_1, e_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm u_18 = NULL;
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm check_for_failures_0_0 (ATerm t)
{
  t = _2_0(f_1, h_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm report_test_0_0 (ATerm t)
{
  t = _2_0(i_1, j_1, t);
  return(t);
}
ATerm init_record_0_0 (ATerm t)
{
  t = term_q_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm test_suite_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t)
{
  t = p_148(t);
  t = debug_1_0(n_1, t);
  t = init_record_0_0(t);
  t = q_148(t);
  t = report_test_0_0(t);
  t = check_for_failures_0_0(t);
  return(t);
}
ATerm say_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  ATerm v_18 = NULL;
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  t = o_122(t);
  t = debug_0_0(t);
  t = not_null(v_18);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm named_test_suite_1_1 (ATerm u_111 (ATerm), ATerm t_15, ATerm t)
{
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    t = not_null(t_15);
    return(t);
  }
  t = say_1_0(o_1, t);
  t = test_suite_2_0(p_1, u_111, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, term_v_21, (ATerm) ATmakeAppl(sym_Template_2, term_a_21, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), term_f_22), term_d_22), term_b_22)))));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, term_v_21, (ATerm) ATmakeAppl(sym_Template_2, term_a_21, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), term_f_22), term_d_22), term_b_22)))));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, term_v_21, (ATerm) ATmakeAppl(sym_Template_2, term_a_21, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), term_f_22), term_d_22), term_b_22)))));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcModel_2, term_v_21, (ATerm) ATmakeAppl(sym_Template_2, term_a_21, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), term_f_22), term_d_22), term_b_22)))));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_22);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_22);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_22);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_22);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_23), term_z_22), term_n_22));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_23), term_c_23), term_q_22);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_25), term_r_24), (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_n_22))), term_d_19), term_k_22);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_29), term_z_27), term_l_26), term_z_25), term_f_19), term_m_22);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  t = term_w_29;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  t = not_null(j_23);
  t = xtc_model_to_args_0_1(not_null(i_23), t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_i_22;
  t = xtc_desugar_model_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_w_29;
  t = XtcConf_4_0(v_3, w_3, x_3, y_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm k_23 = NULL;
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm l_23 = NULL;
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_23 = NULL;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = term_m_32;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = not_null(o_23);
  t = xtc_model_to_args_0_1(not_null(n_23), t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_i_22;
  t = xtc_desugar_model_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_m_32;
  t = XtcConf_4_0(d_4, e_4, f_4, g_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_23 = NULL;
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm q_23 = NULL;
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm r_23 = NULL;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_33), term_j_33);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = term_m_32;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = not_null(t_23);
  t = xtc_model_to_args_0_1(not_null(s_23), t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_v_33;
  t = xtc_desugar_model_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_m_32;
  t = XtcConf_4_0(l_4, m_4, n_4, o_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_23 = NULL;
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_23 = NULL;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm w_23 = NULL;
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_33);
  return(t);
}
ATerm xtc_model_tests_0_0 (ATerm t)
{
  t = apply_test_4_0(q_1, xtc_desugar_template_0_0, r_1, s_1, t);
  t = apply_test_4_0(t_1, xtc_desugar_template_0_0, u_1, v_1, t);
  t = apply_test_4_0(w_1, xtc_desugar_template_0_0, x_1, y_1, t);
  t = apply_test_4_0(z_1, xtc_desugar_desc_0_0, a_2, b_2, t);
  t = apply_and_fail_3_0(c_2, xtc_desugar_desc_0_0, d_2, t);
  t = apply_and_fail_3_0(e_2, xtc_desugar_desc_0_0, f_2, t);
  t = apply_test_4_0(g_2, xtc_desugar_model_0_0, h_2, i_2, t);
  t = apply_test_4_0(j_2, xtc_desugar_model_0_0, k_2, l_2, t);
  t = apply_test_4_0(m_2, xtc_desugar_model_0_0, n_2, o_2, t);
  t = apply_test_4_0(p_2, xtc_desugar_arg_0_0, q_2, r_2, t);
  t = apply_test_4_0(s_2, xtc_desugar_arg_0_0, t_2, u_2, t);
  t = apply_test_4_0(v_2, xtc_desugar_arg_0_0, w_2, x_2, t);
  t = apply_test_4_0(y_2, xtc_desugar_arg_0_0, z_2, a_3, t);
  t = apply_test_4_0(b_3, xtc_desugar_arg_0_0, c_3, d_3, t);
  t = apply_test_4_0(o_3, xtc_desugar_args_0_0, p_3, q_3, t);
  t = apply_test_4_0(r_3, s_3, t_3, u_3, t);
  t = apply_test_4_0(z_3, a_4, b_4, c_4, t);
  t = apply_test_4_0(h_4, i_4, j_4, k_4, t);
  return(t);
}
ATerm xtc_find_path_1_0 (ATerm t_153 (ATerm), ATerm t)
{
  t = xtc_find_loc_1_0(t_153, t);
  t = dirname_0_0(t);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_path_1_0(Hd_0_0, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_l_34;
  t = xtc_find_reg_0_0(t);
  return(t);
}
ATerm xtc_find_tests_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  static ATerm x_4 (ATerm t);
  static ATerm x_4 (ATerm t)
  {
    static ATerm a_5 (ATerm t);
    static ATerm a_5 (ATerm t)
    {
      static ATerm b_5 (ATerm t);
      static ATerm b_5 (ATerm t)
      {
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        return(t);
      }
      t = SRTS_one(b_5, t);
      t = not_null(x_23);
      return(t);
    }
    t = xtc_find_reg_1_0(a_5, t);
    return(t);
  }
  t = apply_test_3_0(p_4, xtc_find_reg_0_0, q_4, t);
  t = apply_test_3_0(r_4, xtc_find_0_0, s_4, t);
  t = apply_test_4_0(t_4, xtc_find_path_0_0, u_4, v_4, t);
  t = apply_test_4_0(w_4, x_4, y_4, z_4, t);
  return(t);
}
ATerm xtc_search_0_0 (ATerm t)
{
  t = xtc_search_1_0(Hd_0_0, t);
  return(t);
}
ATerm apply_and_fail_4_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_149(t);
        {
          ATerm s_34 = t;
          if((PushChoice() == 0))
            {
              t = k_149(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_34;
            }
        }
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = term_u_34;
        t = debug_0_0(t);
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(j_149, c_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm apply_and_fail_3_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm t)
{
  t = apply_and_fail_4_0(g_149, h_149, i_149, d_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_w_34;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm apply_test_4_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  static ATerm e_5 (ATerm t);
  static ATerm e_5 (ATerm t)
  {
    ATerm a_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_148(t);
        t = w_148(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = a_35;
        t = term_h_35;
        t = debug_0_0(t);
        _fail(t);
      }
    if(((y_23 != NULL) && (y_23 != t)))
      _fail(t);
    else
      y_23 = t;
    t = y_148(t);
    if(((z_23 != NULL) && (z_23 != t)))
      _fail(t);
    else
      z_23 = t;
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(z_23);
          if(((y_23 != NULL) && (y_23 != t)))
            _fail(t);
          else
            y_23 = t;
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          t = not_null(y_23);
          t = debug_1_0(f_5, t);
          t = not_null(z_23);
          t = debug_1_0(g_5, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(v_148, e_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = _2_0(k_5, l_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,m_5 = NULL,h_18 = NULL;
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = SSLgetAnnotations(not_null(g_24));
  if(((b_24 != NULL) && (b_24 != t)))
    _fail(t);
  else
    b_24 = t;
  t = not_null(c_24);
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("strc", 0, ATtrue)))
    _fail(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  if(((f_24 != NULL) && (f_24 != t)))
    _fail(t);
  else
    f_24 = t;
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(d_24));
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  t = SSLsetAnnotations(not_null(m_5), not_null(b_24));
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = _2_0(is_string_0_0, is_list_0_0, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, (ATerm) ATmakeAppl(sym__2, term_o_35, (ATerm) ATinsert(ATinsert(ATempty, term_p_35), term_i_22)));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  t = xtc_search_0_0(t);
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = term_p_35;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = not_null(j_24);
  t = xtc_has_meta_0_1(not_null(i_24), t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, (ATerm) ATmakeAppl(sym__2, term_o_35, (ATerm) ATinsert(ATinsert(ATempty, term_p_35), term_i_22)));
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, (ATerm) ATinsert(ATempty, term_p_35));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, term_e_34, (ATerm) ATinsert(ATinsert(ATempty, term_p_35), term_i_22));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  t = xtc_search_0_0(t);
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_22), term_p_35);
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = not_null(l_24);
  t = xtc_has_meta_0_1(not_null(k_24), t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, (ATerm) ATmakeAppl(sym__2, term_o_35, (ATerm) ATinsert(ATinsert(ATempty, term_p_35), term_i_22)));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  t = xtc_search_0_0(t);
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  t = term_w_35;
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = not_null(n_24);
  t = xtc_has_meta_0_1(not_null(m_24), t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  t = xtc_search_0_0(t);
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_35), term_p_35);
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = not_null(p_24);
  t = xtc_has_meta_0_1(not_null(o_24), t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm xtc_search_tests_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  t = apply_test_4_0(h_5, xtc_search_0_0, i_5, j_5, t);
  t = apply_test_4_0(n_5, xtc_search_0_0, o_5, p_5, t);
  t = apply_test_4_0(q_5, r_5, s_5, t_5, t);
  {
    static ATerm v_5 (ATerm t);
    static ATerm v_5 (ATerm t)
    {
      t = xtc_search_0_0(t);
      if(match_cons(t, sym__2))
        {
          if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_24 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = apply_test_3_0(u_5, v_5, w_5, t);
  }
  t = apply_test_3_0(x_5, xtc_search_0_0, y_5, t);
  t = apply_test_4_0(z_5, a_6, b_6, c_6, t);
  t = apply_and_fail_3_0(d_6, e_6, f_6, t);
  t = apply_and_fail_3_0(g_6, h_6, i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_24 = NULL;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm t_24 = NULL;
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  return(t);
}
ATerm xtc_dump_0_1 (ATerm x_79, ATerm t)
{
  t = xtc_table2aterm_2_0(j_6, k_6, t);
  t = xtc_save_file_0_1(not_null(x_79), t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm v_24 = NULL;
  if(((v_24 != NULL) && (v_24 != t)))
    _fail(t);
  else
    v_24 = t;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
ATerm xtc_is_imported_0_0 (ATerm t)
{
  static ATerm m_6 (ATerm t);
  static ATerm m_6 (ATerm t)
  {
    t = SRTS_one(n_6, t);
    return(t);
  }
  t = _2_0(l_6, m_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm x_24 = NULL;
  if(((x_24 != NULL) && (x_24 != t)))
    _fail(t);
  else
    x_24 = t;
  return(t);
}
ATerm xtc_ref2aterm_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm v_36 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_37;
      t = table_getlist_0_0(t);
      t = filter_1_0(y_150, t);
      {
        static ATerm o_6 (ATerm t);
        static ATerm o_6 (ATerm t)
        {
          static ATerm q_6 (ATerm t);
          static ATerm q_6 (ATerm t)
          {
            t = filter_1_0(z_150, t);
            return(t);
          }
          t = _2_0(p_6, q_6, t);
          return(t);
        }
        t = SRTS_some(o_6, t);
      }
      {
        ATerm l_37 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_37;
          }
      }
      LocalPopChoice(j_37);
      {
        ATerm y_24 = NULL,z_24 = NULL;
        if(((z_24 != NULL) && (z_24 != t)))
          _fail(t);
        else
          z_24 = t;
        if(((y_24 != NULL) && (y_24 != t)))
          _fail(t);
        else
          y_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Reference_1, not_null(y_24)));
      }
    }
  else
    {
      t = v_36;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm b_25 = NULL;
  if(((b_25 != NULL) && (b_25 != t)))
    _fail(t);
  else
    b_25 = t;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = Fst_0_0(t);
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  t = not_null(f_25);
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  t = Snd_0_0(t);
  {
    ATerm m_37 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_37;
      }
  }
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(c_25), not_null(d_25));
  return(t);
}
ATerm xtc_reg2aterm_1_0 (ATerm x_150 (ATerm), ATerm t)
{
  t = term_t_37;
  t = table_getlist_0_0(t);
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      static ATerm t_6 (ATerm t);
      static ATerm t_6 (ATerm t)
      {
        t = filter_1_0(x_150, t);
        return(t);
      }
      t = _2_0(s_6, t_6, t);
      return(t);
    }
    t = map_1_0(r_6, t);
  }
  t = filter_1_0(u_6, t);
  return(t);
}
ATerm split_2_0 (ATerm a_132 (ATerm), ATerm b_132 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = a_132(t);
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  t = not_null(j_25);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = b_132(t);
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(h_25));
  return(t);
}
ATerm xtc_table2aterm_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  static ATerm v_6 (ATerm t);
  static ATerm w_6 (ATerm t);
  static ATerm v_6 (ATerm t)
  {
    t = xtc_reg2aterm_1_0(v_150, t);
    return(t);
  }
  static ATerm w_6 (ATerm t)
  {
    t = xtc_ref2aterm_2_0(v_150, w_150, t);
    return(t);
  }
  t = split_2_0(v_6, w_6, t);
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = conc_0_0(t);
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(k_25));
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm m_25 = NULL;
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  {
    ATerm u_37 = t;
    if((PushChoice() == 0))
      {
        t = xtc_is_imported_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_37;
      }
  }
  t = not_null(m_25);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_37 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_XtcLoaded_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
ATerm xtc_save_0_1 (ATerm w_79, ATerm t)
{
  t = xtc_table2aterm_2_0(x_6, y_6, t);
  t = xtc_save_file_0_1(not_null(w_79), t);
  return(t);
}
ATerm xtc_register_component_0_1 (ATerm n_3, ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  if(match_cons(t, sym__3))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      o_25 = ATgetArgument(t, 2);
      {
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
        t = not_null(q_25);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = not_null(r_25);
        if(((t_25 != NULL) && (t_25 != t)))
          _fail(t);
        else
          t_25 = t;
        t = not_null(o_25);
        if(((u_25 != NULL) && (u_25 != t)))
          _fail(t);
        else
          u_25 = t;
        t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(s_25), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(u_25))));
        t = xtc_register_0_1(not_null(n_3), t);
      }
    }
  else
    {
      ATerm v_25 = NULL,w_25 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((q_25 != NULL) && (q_25 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_25 = ATgetArgument(t, 0);
          if(((r_25 != NULL) && (r_25 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_25);
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = not_null(r_25);
      if(((w_25 != NULL) && (w_25 != t)))
        _fail(t);
      else
        w_25 = t;
      t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(v_25), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_25), (ATerm) ATempty)));
      t = xtc_register_0_1(not_null(n_3), t);
    }
  return(t);
}
ATerm xtc_register_component_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  t = (ATerm) ATempty;
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = not_null(y_25);
  t = xtc_register_component_0_1(not_null(x_25), t);
  return(t);
}
ATerm xtc_register_resource_0_1 (ATerm m_3, ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  if(match_cons(t, sym__3))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
      a_26 = ATgetArgument(t, 2);
      {
        ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
        t = not_null(c_26);
        if(((e_26 != NULL) && (e_26 != t)))
          _fail(t);
        else
          e_26 = t;
        t = not_null(d_26);
        if(((f_26 != NULL) && (f_26 != t)))
          _fail(t);
        else
          f_26 = t;
        t = not_null(a_26);
        if(((g_26 != NULL) && (g_26 != t)))
          _fail(t);
        else
          g_26 = t;
        t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(e_26), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(g_26))));
        t = xtc_register_0_1(not_null(m_3), t);
      }
    }
  else
    {
      ATerm h_26 = NULL,i_26 = NULL;
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
      t = not_null(c_26);
      if(((h_26 != NULL) && (h_26 != t)))
        _fail(t);
      else
        h_26 = t;
      t = not_null(d_26);
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(h_26), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_26), (ATerm) ATempty)));
      t = xtc_register_0_1(not_null(m_3), t);
    }
  return(t);
}
ATerm xtc_register_resource_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = (ATerm) ATempty;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  t = not_null(k_26);
  t = xtc_register_resource_0_1(not_null(j_26), t);
  return(t);
}
ATerm xtc_register_reference_0_1 (ATerm l_3, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_26 = NULL,q_26 = NULL;
            t = not_null(m_26);
            if(((p_26 != NULL) && (p_26 != t)))
              _fail(t);
            else
              p_26 = t;
            t = not_null(n_26);
            if(((q_26 != NULL) && (q_26 != t)))
              _fail(t);
            else
              q_26 = t;
            t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(q_26))));
            t = xtc_register_0_1(not_null(l_3), t);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            {
              ATerm r_26 = NULL;
              t = not_null(o_26);
              if(((r_26 != NULL) && (r_26 != t)))
                _fail(t);
              else
                r_26 = t;
              t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(r_26), (ATerm) ATempty)));
              t = xtc_register_0_1(not_null(l_3), t);
            }
          }
      }
    }
  else
    {
      ATerm s_26 = NULL;
      t = not_null(o_26);
      if(((s_26 != NULL) && (s_26 != t)))
        _fail(t);
      else
        s_26 = t;
      t = (ATerm) ATmakeAppl(sym_Reference_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(s_26), (ATerm) ATempty)));
      t = xtc_register_0_1(not_null(l_3), t);
    }
  return(t);
}
ATerm xtc_register_reference_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = (ATerm) ATempty;
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = not_null(u_26);
  t = xtc_register_reference_0_1(not_null(t_26), t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_t_39;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = term_c_41;
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = not_null(w_26);
  t = xtc_save_0_1(not_null(v_26), t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  t = term_e_41;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = not_null(y_26);
  t = xtc_dump_0_1(not_null(x_26), t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm xtc_register_tests_0_0 (ATerm t)
{
  t = apply_test_3_0(z_6, xtc_register_reference_0_0, a_7, t);
  t = apply_test_3_0(b_7, xtc_register_resource_0_0, c_7, t);
  t = apply_test_3_0(d_7, xtc_register_component_0_0, e_7, t);
  t = apply_test_3_0(f_7, xtc_register_component_0_0, g_7, t);
  t = apply_test_3_0(h_7, xtc_import_0_0, i_7, t);
  t = apply_test_3_0(j_7, xtc_import_0_0, k_7, t);
  t = apply_test_3_0(l_7, m_7, n_7, t);
  t = apply_test_3_0(o_7, p_7, q_7, t);
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = (ATerm) ATempty;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  t = not_null(a_27);
  t = xtc_load_0_1(not_null(z_26), t);
  return(t);
}
ATerm apply_test_3_0 (ATerm z_148 (ATerm), ATerm a_149 (ATerm), ATerm b_149 (ATerm), ATerm t)
{
  static ATerm r_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_149(t);
        t = a_149(t);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = term_h_35;
        t = debug_0_0(t);
        _fail(t);
      }
    return(t);
  }
  t = do_test_2_0(z_148, r_7, t);
  return(t);
}
ATerm debug_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  if(((b_27 != NULL) && (b_27 != t)))
    _fail(t);
  else
    b_27 = t;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  t = a_123(t);
  if(((c_27 != NULL) && (c_27 != t)))
    _fail(t);
  else
    c_27 = t;
  t = not_null(f_27);
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  if(((d_27 != NULL) && (d_27 != t)))
    _fail(t);
  else
    d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), not_null(c_27)));
  t = printnl_0_0(t);
  t = not_null(b_27);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATempty, not_null(h_27)));
  t = printnl_0_0(t);
  t = not_null(g_27);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm k_27 = NULL;
  if(((k_27 != NULL) && (k_27 != t)))
    _fail(t);
  else
    k_27 = t;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), term_m_41);
  t = add_0_0(t);
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  return(t);
}
ATerm record_failure_0_0 (ATerm t)
{
  t = _2_0(s_7, t_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_m_41);
  t = add_0_0(t);
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_27 = NULL;
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  return(t);
}
ATerm record_success_0_0 (ATerm t)
{
  t = _2_0(u_7, v_7, t);
  return(t);
}
ATerm do_test_2_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t)
{
  ATerm t_27 = NULL;
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = r_148(t);
  t = debug_0_0(t);
  t = not_null(t_27);
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL,v_27 = NULL;
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = not_null(u_27);
        t = s_148(t);
        t = not_null(v_27);
        t = record_success_0_0(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = record_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm apply_and_check_4_0 (ATerm c_149 (ATerm), ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm), ATerm t)
{
  static ATerm w_7 (ATerm t);
  static ATerm w_7 (ATerm t)
  {
    ATerm q_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_149(t);
        t = d_149(t);
        LocalPopChoice(z_41);
      }
    else
      {
        t = q_41;
        t = term_m_42;
        t = debug_0_0(t);
        _fail(t);
      }
    {
      ATerm n_42 = t;
      int o_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_149(t);
          LocalPopChoice(o_42);
        }
      else
        {
          t = n_42;
          t = debug_1_0(x_7, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(c_149, w_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_p_42;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = xtc_location_0_0(t);
  t = xtc_load_0_0(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm xtc_repository_tests_0_0 (ATerm t)
{
  t = apply_and_check_4_0(y_7, xtc_location_0_0, z_7, is_string_0_0, t);
  t = apply_test_3_0(a_8, b_8, c_8, t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_27 = ATgetArgument(t, 0);
      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_42, not_null(w_27), not_null(x_27));
  t = table_put_0_0(t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm y_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = SSL_string_to_int(not_null(y_27));
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm a_28 = NULL;
  if(((a_28 != NULL) && (a_28 != t)))
    _fail(t);
  else
    a_28 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(a_28);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(a_28);
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm b_28 = NULL;
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = term_s_42;
  t = set_config_0_0(t);
  t = term_t_42;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_u_42;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  t = string_to_int_0_0(t);
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, not_null(f_28));
  t = set_config_0_0(t);
  t = not_null(e_28);
  if(((d_28 != NULL) && (d_28 != t)))
    _fail(t);
  else
    d_28 = t;
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_28));
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_28 = NULL;
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = term_h_43;
  t = set_config_0_0(t);
  t = term_i_43;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, e_8, f_8, t);
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
            t = ArgOption_3_0(g_8, h_8, i_8, t);
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            t = Option_3_0(j_8, k_8, l_8, t);
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm j_28 = NULL;
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  return(t);
}
ATerm xtc_add_meta_0_1 (ATerm f_80, ATerm t)
{
  static ATerm n_8 (ATerm t);
  static ATerm n_8 (ATerm t)
  {
    ATerm k_28 = NULL,l_28 = NULL;
    if(((l_28 != NULL) && (l_28 != t)))
      _fail(t);
    else
      l_28 = t;
    if(((k_28 != NULL) && (k_28 != t)))
      _fail(t);
    else
      k_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(f_80));
    t = union_0_0(t);
    return(t);
  }
  t = _2_0(m_8, n_8, t);
  return(t);
}
ATerm xtc_add_meta_all_0_1 (ATerm e_80, ATerm t)
{
  static ATerm o_8 (ATerm t);
  static ATerm o_8 (ATerm t)
  {
    t = xtc_add_meta_0_1(not_null(e_80), t);
    return(t);
  }
  t = map_1_0(o_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  t = Fst_0_0(t);
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  t = not_null(u_28);
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  t = Snd_0_0(t);
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, not_null(r_28), not_null(s_28));
  t = table_put_0_0(t);
  return(t);
}
ATerm xtc_register_0_1 (ATerm k_3, ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  if(match_cons(t, sym_Reference_1))
    {
      o_28 = ATgetArgument(t, 0);
      {
        ATerm q_28 = NULL;
        t = not_null(o_28);
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        t = xtc_add_meta_all_0_1(not_null(k_3), t);
        t = map_1_0(p_8, t);
      }
    }
  else
    {
      ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
      if(match_cons(t, sym_Registration_2))
        {
          if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_28 = ATgetArgument(t, 0);
          if(((p_28 != NULL) && (p_28 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_28);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = not_null(p_28);
      if(((w_28 != NULL) && (w_28 != t)))
        _fail(t);
      else
        w_28 = t;
      t = not_null(n_28);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      t = not_null(w_28);
      t = xtc_add_meta_all_0_1(not_null(k_3), t);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_37, not_null(v_28), not_null(x_28));
      t = table_union_0_0(t);
    }
  return(t);
}
ATerm xtc_aterm2table_0_1 (ATerm k_79, ATerm t)
{
  static ATerm q_8 (ATerm t);
  static ATerm q_8 (ATerm t)
  {
    static ATerm r_8 (ATerm t);
    static ATerm r_8 (ATerm t)
    {
      t = xtc_register_0_1(not_null(k_79), t);
      return(t);
    }
    t = map_1_0(r_8, t);
    return(t);
  }
  t = Repository_1_0(q_8, t);
  return(t);
}
ATerm Repository_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,s_8 = NULL,i_18 = NULL;
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  if(match_cons(t, sym_Repository_1))
    {
      if(((a_29 != NULL) && (a_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  t = SSLgetAnnotations(not_null(e_29));
  if(((z_28 != NULL) && (z_28 != t)))
    _fail(t);
  else
    z_28 = t;
  t = not_null(a_29);
  t = f_109(t);
  if(((b_29 != NULL) && (b_29 != t)))
    _fail(t);
  else
    b_29 = t;
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(b_29));
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  t = SSLsetAnnotations(not_null(s_8), not_null(z_28));
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  return(t);
}
ATerm get_extension_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  if(((h_29 != NULL) && (h_29 != t)))
    _fail(t);
  else
    h_29 = t;
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_44), not_null(g_29));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm xtc_default_xt_type_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = get_extension_0_0(t);
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  {
    ATerm c_44 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL;
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = not_null(i_29);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("tbl", 0, ATtrue)))
          _fail(t);
        t = not_null(k_29);
        LocalPopChoice(j_45);
        t = (ATerm) ATinsert(ATempty, term_v_45);
      }
    else
      {
        t = c_44;
        t = not_null(j_29);
        {
          ATerm w_45 = t;
          int x_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_29 = NULL;
              if(((l_29 != NULL) && (l_29 != t)))
                _fail(t);
              else
                l_29 = t;
              t = not_null(i_29);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("af", 0, ATtrue)))
                _fail(t);
              t = not_null(l_29);
              LocalPopChoice(x_45);
              t = (ATerm) ATinsert(ATempty, term_k_46);
            }
          else
            {
              t = w_45;
              t = not_null(j_29);
              {
                ATerm l_46 = t;
                int m_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_29 = NULL;
                    if(((m_29 != NULL) && (m_29 != t)))
                      _fail(t);
                    else
                      m_29 = t;
                    t = not_null(i_29);
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("pp", 0, ATtrue)))
                      _fail(t);
                    t = not_null(m_29);
                    LocalPopChoice(m_46);
                    t = (ATerm) ATinsert(ATempty, term_k_46);
                  }
                else
                  {
                    t = l_46;
                    t = not_null(j_29);
                    {
                      ATerm n_46 = t;
                      int k_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_29 = NULL;
                          if(((n_29 != NULL) && (n_29 != t)))
                            _fail(t);
                          else
                            n_29 = t;
                          t = not_null(i_29);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg", 0, ATtrue)))
                            _fail(t);
                          t = not_null(n_29);
                          LocalPopChoice(k_47);
                          t = (ATerm) ATinsert(ATempty, term_n_47);
                        }
                      else
                        {
                          t = n_46;
                          t = not_null(j_29);
                          {
                            ATerm o_47 = t;
                            int p_47 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_29 = NULL;
                                if(((o_29 != NULL) && (o_29 != t)))
                                  _fail(t);
                                else
                                  o_29 = t;
                                t = not_null(i_29);
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtgnf", 0, ATtrue)))
                                  _fail(t);
                                t = not_null(o_29);
                                LocalPopChoice(p_47);
                                t = (ATerm) ATinsert(ATempty, term_s_47);
                              }
                            else
                              {
                                t = o_47;
                                t = not_null(j_29);
                                {
                                  ATerm w_47 = t;
                                  int x_47 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm p_29 = NULL;
                                      if(((p_29 != NULL) && (p_29 != t)))
                                        _fail(t);
                                      else
                                        p_29 = t;
                                      t = not_null(i_29);
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("rtg-nf", 0, ATtrue)))
                                        _fail(t);
                                      t = not_null(p_29);
                                      LocalPopChoice(x_47);
                                      t = (ATerm) ATinsert(ATempty, term_s_47);
                                    }
                                  else
                                    {
                                      t = w_47;
                                      t = not_null(j_29);
                                      {
                                        ATerm y_47 = t;
                                        int z_47 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_29 = NULL;
                                            if(((q_29 != NULL) && (q_29 != t)))
                                              _fail(t);
                                            else
                                              q_29 = t;
                                            t = not_null(i_29);
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("def", 0, ATtrue)))
                                              _fail(t);
                                            t = not_null(q_29);
                                            LocalPopChoice(z_47);
                                            t = (ATerm) ATinsert(ATempty, term_d_48);
                                          }
                                        else
                                          {
                                            t = y_47;
                                            t = not_null(j_29);
                                            {
                                              ATerm h_48 = t;
                                              int r_48 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_29 = NULL;
                                                  if(((r_29 != NULL) && (r_29 != t)))
                                                    _fail(t);
                                                  else
                                                    r_29 = t;
                                                  t = not_null(i_29);
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("sdf", 0, ATtrue)))
                                                    _fail(t);
                                                  t = not_null(r_29);
                                                  LocalPopChoice(r_48);
                                                  t = (ATerm) ATinsert(ATempty, term_a_49);
                                                }
                                              else
                                                {
                                                  t = h_48;
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
static ATerm u_8 (ATerm t)
{
  ATerm u_29 = NULL;
  if(((u_29 != NULL) && (u_29 != t)))
    _fail(t);
  else
    u_29 = t;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_29 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm m_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    static ATerm t_8 (ATerm t);
    static ATerm t_8 (ATerm t)
    {
      ATerm b_49 = t;
      int d_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(u_8, t_8, t);
          LocalPopChoice(d_49);
        }
      else
        {
          t = b_49;
          {
            ATerm f_49 = t;
            int g_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(v_8, w_8, t);
                LocalPopChoice(g_49);
              }
            else
              {
                t = f_49;
                t = Cons_2_0(x_8, m_134, t);
                t = (ATerm) ATempty;
              }
          }
        }
      return(t);
    }
    t = try_1_0(t_8, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm y_29 = NULL;
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(y_8, t);
  return(t);
}
ATerm has_no_extension_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(((c_30 != NULL) && (c_30 != t)))
    _fail(t);
  else
    c_30 = t;
  t = base_filename_0_0(t);
  t = basename_0_0(t);
  if(((z_29 != NULL) && (z_29 != t)))
    _fail(t);
  else
    z_29 = t;
  t = not_null(c_30);
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = base_filename_0_0(t);
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), not_null(a_30));
  t = eq_0_0(t);
  return(t);
}
ATerm xtc_default_xt_model_0_0 (ATerm t)
{
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30 = NULL;
      if(((d_30 != NULL) && (d_30 != t)))
        _fail(t);
      else
        d_30 = t;
      t = has_no_extension_0_0(t);
      t = not_null(d_30);
      LocalPopChoice(i_49);
      t = (ATerm) ATinsert(ATempty, term_i_22);
    }
  else
    {
      t = h_49;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_default_xt_meta_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = xtc_default_xt_model_0_0(t);
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = not_null(h_30);
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = xtc_default_xt_type_0_0(t);
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(f_30));
  t = conc_0_0(t);
  return(t);
}
ATerm XtcConvertToolEntry_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_30 != NULL) && (i_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_30 = ATgetArgument(t, 0);
      if(((j_30 != NULL) && (j_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  t = not_null(j_30);
  t = xtc_default_xt_meta_0_0(t);
  if(((m_30 != NULL) && (m_30 != t)))
    _fail(t);
  else
    m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_49, (ATerm) ATmakeAppl(sym_String_1, not_null(i_30)))), not_null(m_30));
  t = conc_0_0(t);
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), not_null(k_30));
  return(t);
}
ATerm XtcConvertTool_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_49 = ATgetArgument(t, 0);
      if(match_cons(p_49, sym_Tool_1))
        {
          if(((o_30 != NULL) && (o_30 != ATgetArgument(p_49, 0))))
            _fail(ATgetArgument(p_49, 0));
          else
            o_30 = ATgetArgument(p_49, 0);
        }
      else
        _fail(t);
      if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  t = not_null(p_30);
  t = map_1_0(XtcConvertToolEntry_0_0, t);
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Registration_2, not_null(o_30), not_null(q_30));
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), (ATerm) ATempty);
  return(t);
}
ATerm XtcConvertImport_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_49 = ATgetArgument(t, 0);
      if(!(match_cons(t_49, sym_Import_0)))
        _fail(t);
      if(((s_30 != NULL) && (s_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = not_null(s_30);
  t = map_1_0(z_8, t);
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  t = (ATerm) ATmakeAppl(sym_Reference_1, not_null(t_30));
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = filter_1_0(c_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_v_34;
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = term_u_49;
  if(((x_30 != NULL) && (x_30 != t)))
    _fail(t);
  else
    x_30 = t;
  t = not_null(y_30);
  t = err_0_1(not_null(x_30), t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcConvertImport_0_0(t);
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      t = XtcConvertTool_0_0(t);
    }
  return(t);
}
ATerm xtc_convert_0_0 (ATerm t)
{
  t = restore_2_0(a_9, b_9, t);
  return(t);
}
ATerm xtc_convert_repository_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(((a_31 != NULL) && (a_31 != t)))
    _fail(t);
  else
    a_31 = t;
  t = xtc_convert_0_0(t);
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = (ATerm) ATmakeAppl(sym_Repository_1, not_null(z_30));
  return(t);
}
ATerm notice_0_1 (ATerm b_79, ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = term_j_50;
  if(((b_31 != NULL) && (b_31 != t)))
    _fail(t);
  else
    b_31 = t;
  t = not_null(g_31);
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  if(((c_31 != NULL) && (c_31 != t)))
    _fail(t);
  else
    c_31 = t;
  t = not_null(d_31);
  t = log_0_3(not_null(b_31), not_null(b_79), not_null(c_31), t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_50 = ATgetArgument(t, 0);
      if(match_cons(v_50, sym_Stream_1))
        {
          if(((h_31 != NULL) && (h_31 != ATgetArgument(v_50, 0))))
            _fail(ATgetArgument(v_50, 0));
          else
            h_31 = ATgetArgument(v_50, 0);
        }
      else
        _fail(t);
      if(((i_31 != NULL) && (i_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(h_31), not_null(i_31));
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_31));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_31 != NULL) && (q_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_31 = ATgetArgument(t, 0);
      if(((l_31 != NULL) && (l_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_31);
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_w_50);
  t = open_stream_0_0(t);
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  if(((m_31 != NULL) && (m_31 != t)))
    _fail(t);
  else
    m_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(l_31));
  t = c_123(t);
  t = fclose_0_0(t);
  t = not_null(l_31);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm creat_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = SSL_creat(not_null(r_31));
  return(t);
}
ATerm split_init_last_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_31 != NULL) && (s_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_31 = ATgetFirst((ATermList) t);
        {
          ATerm k_51 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(k_51) != AT_LIST) || !(ATisEmpty(k_51))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_last_1_0(d_9, t);
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(s_31));
  return(t);
}
ATerm repeat_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  static ATerm v_31 (ATerm t);
  static ATerm v_31 (ATerm t)
  {
    ATerm b_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_115(t);
        t = v_31(t);
        LocalPopChoice(t_52);
      }
    else
      {
        t = b_52;
        t = a_116(t);
      }
    return(t);
  }
  t = v_31(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm x_31 = NULL;
  if(((x_31 != NULL) && (x_31 != t)))
    _fail(t);
  else
    x_31 = t;
  return(t);
}
ATerm repeat_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  t = repeat_2_0(c_116, e_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm a_32 = NULL;
  if(((a_32 != NULL) && (a_32 != t)))
    _fail(t);
  else
    a_32 = t;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_32 = NULL;
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  return(t);
}
ATerm at_last_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  static ATerm c_32 (ATerm t);
  static ATerm c_32 (ATerm t)
  {
    ATerm u_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_9, Nil_0_0, t);
        t = k_124(t);
        LocalPopChoice(y_52);
      }
    else
      {
        t = u_52;
        t = Cons_2_0(g_9, c_32, t);
      }
    return(t);
  }
  t = c_32(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = e_134(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = try_1_0(i_9, t);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATinsert(ATempty, term_z_52);
    }
  else
    {
      t = init_0_0(t);
      t = repeat_1_0(j_9, t);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, term_b_44);
        }
      else
        {
          t = repeat_1_0(m_9, t);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATinsert(ATempty, term_z_52);
            }
          else
            {
              ATerm i_32 = NULL;
              if(((i_32 != NULL) && (i_32 != t)))
                _fail(t);
              else
                i_32 = t;
            }
        }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm f_32 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((f_32 != NULL) && (f_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_32 = ATgetArgument(t, 0);
      {
        ATerm g_53 = ATgetArgument(t, 1);
        if(((ATgetType(g_53) != AT_INT) || (ATgetInt((ATermInt) g_53) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(f_32);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = split_init_last_0_0(t);
  t = _2_0(k_9, l_9, t);
  t = Fst_0_0(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm g_32 = NULL;
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm h_53 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_53;
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm h_32 = NULL;
  t = split_init_last_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_32 != NULL) && (h_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_32 = ATgetArgument(t, 0);
      {
        ATerm m_53 = ATgetArgument(t, 1);
        if(((ATgetType(m_53) != AT_INT) || (ATgetInt((ATermInt) m_53) != 47)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(h_32);
  return(t);
}
ATerm dirname_0_0 (ATerm t)
{
  t = string_as_chars_1_0(h_9, t);
  return(t);
}
ATerm can_create_file_0_0 (ATerm t)
{
  ATerm j_32 = NULL;
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = dirname_0_0(t);
  t = can_write_file_0_0(t);
  t = not_null(j_32);
  return(t);
}
ATerm xtc_create_file_0_0 (ATerm t)
{
  ATerm n_53 = t;
  if((PushChoice() == 0))
    {
      t = file_exists_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_53;
    }
  t = can_create_file_0_0(t);
  t = creat_0_0(t);
  return(t);
}
ATerm can_write_file_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  if(((l_32 != NULL) && (l_32 != t)))
    _fail(t);
  else
    l_32 = t;
  if(((k_32 != NULL) && (k_32 != t)))
    _fail(t);
  else
    k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), (ATerm) ATinsert(ATempty, term_s_53));
  t = access_0_0(t);
  return(t);
}
ATerm xtc_save_file_0_1 (ATerm v_79, ATerm t)
{
  ATerm t_53 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_32 = NULL;
      if(((n_32 != NULL) && (n_32 != t)))
        _fail(t);
      else
        n_32 = t;
      t = not_null(v_79);
      {
        ATerm i_54 = t;
        int j_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = can_write_file_0_0(t);
            LocalPopChoice(j_54);
          }
        else
          {
            t = i_54;
            t = xtc_create_file_0_0(t);
          }
      }
      t = not_null(n_32);
      LocalPopChoice(h_54);
      {
        ATerm o_32 = NULL,p_32 = NULL;
        if(((p_32 != NULL) && (p_32 != t)))
          _fail(t);
        else
          p_32 = t;
        if(((o_32 != NULL) && (o_32 != t)))
          _fail(t);
        else
          o_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_79), not_null(o_32));
        t = WriteToBinaryFile_0_0(t);
      }
    }
  else
    {
      t = t_53;
      {
        ATerm q_32 = NULL,r_32 = NULL;
        t = not_null(v_79);
        if(((r_32 != NULL) && (r_32 != t)))
          _fail(t);
        else
          r_32 = t;
        t = term_k_54;
        if(((q_32 != NULL) && (q_32 != t)))
          _fail(t);
        else
          q_32 = t;
        t = not_null(r_32);
        t = err_0_1(not_null(q_32), t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_create_new_0_0 (ATerm t)
{
  ATerm s_32 = NULL;
  if(((s_32 != NULL) && (s_32 != t)))
    _fail(t);
  else
    s_32 = t;
  {
    ATerm l_54 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_54;
      }
  }
  t = term_m_54;
  t = xtc_save_file_0_1(not_null(s_32), t);
  return(t);
}
ATerm xtc_load_file_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  if(((t_32 != NULL) && (t_32 != t)))
    _fail(t);
  else
    t_32 = t;
  {
    ATerm n_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL,v_32 = NULL;
        t = not_null(t_32);
        if(((v_32 != NULL) && (v_32 != t)))
          _fail(t);
        else
          v_32 = t;
        t = not_null(t_32);
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_32));
        t = read_from_0_0(t);
        LocalPopChoice(o_54);
      }
    else
      {
        t = n_54;
        {
          ATerm p_54 = t;
          int q_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
              t = not_null(t_32);
              if(((y_32 != NULL) && (y_32 != t)))
                _fail(t);
              else
                y_32 = t;
              t = not_null(t_32);
              t = xtc_create_new_0_0(t);
              t = not_null(y_32);
              if(((x_32 != NULL) && (x_32 != t)))
                _fail(t);
              else
                x_32 = t;
              if(((w_32 != NULL) && (w_32 != t)))
                _fail(t);
              else
                w_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_32));
              t = read_from_0_0(t);
              LocalPopChoice(q_54);
            }
          else
            {
              t = p_54;
              {
                ATerm z_32 = NULL,a_33 = NULL;
                t = not_null(t_32);
                if(((a_33 != NULL) && (a_33 != t)))
                  _fail(t);
                else
                  a_33 = t;
                t = term_r_54;
                if(((z_32 != NULL) && (z_32 != t)))
                  _fail(t);
                else
                  z_32 = t;
                t = not_null(a_33);
                t = err_0_1(not_null(z_32), t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm err_0_1 (ATerm z_78, ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(((g_33 != NULL) && (g_33 != t)))
    _fail(t);
  else
    g_33 = t;
  t = term_e_22;
  if(((b_33 != NULL) && (b_33 != t)))
    _fail(t);
  else
    b_33 = t;
  t = not_null(g_33);
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  if(((c_33 != NULL) && (c_33 != t)))
    _fail(t);
  else
    c_33 = t;
  t = not_null(d_33);
  t = log_0_3(not_null(b_33), not_null(z_78), not_null(c_33), t);
  return(t);
}
static ATerm x_33 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  t = not_null(k_33);
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  t = SSL_fclose(not_null(m_33));
  return(t);
}
static ATerm b_34 (ATerm o_33, ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  t = not_null(o_33);
  if(((q_33 != NULL) && (q_33 != t)))
    _fail(t);
  else
    q_33 = t;
  t = SSL_fclose(not_null(q_33));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_33 = NULL,w_33 = NULL;
  if(((w_33 != NULL) && (w_33 != t)))
    _fail(t);
  else
    w_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_33 = ATgetArgument(t, 0);
      {
        ATerm s_54 = t;
        int t_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_33(not_null(r_33), not_null(w_33), t);
            LocalPopChoice(t_54);
          }
        else
          {
            t = s_54;
            t = b_34(not_null(w_33), t);
          }
      }
    }
  else
    {
      t = b_34(not_null(w_33), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm c_34 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((c_34 != NULL) && (c_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(c_34));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_34 != NULL) && (f_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_34 = ATgetArgument(t, 0);
      if(((g_34 != NULL) && (g_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(f_34), not_null(g_34));
  if(((i_34 != NULL) && (i_34 != t)))
    _fail(t);
  else
    i_34 = t;
  if(((h_34 != NULL) && (h_34 != t)))
    _fail(t);
  else
    h_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_34));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_34 = NULL,p_34 = NULL;
  t = SSL_stdin_stream();
  if(((p_34 != NULL) && (p_34 != t)))
    _fail(t);
  else
    p_34 = t;
  if(((j_34 != NULL) && (j_34 != t)))
    _fail(t);
  else
    j_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_34));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  t = SSL_stdout_stream();
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  if(((q_34 != NULL) && (q_34 != t)))
    _fail(t);
  else
    q_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_34));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  if(((t_34 != NULL) && (t_34 != t)))
    _fail(t);
  else
    t_34 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(t_34);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(t_34);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(t_34);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm y_34 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((y_34 != NULL) && (y_34 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(y_34);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm z_34 = NULL;
  if(((z_34 != NULL) && (z_34 != t)))
    _fail(t);
  else
    z_34 = t;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm b_35 = NULL;
  if(((b_35 != NULL) && (b_35 != t)))
    _fail(t);
  else
    b_35 = t;
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_54 = ATgetArgument(t, 0);
      ATerm v_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        {
          ATerm y_54 = t;
          int z_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(n_9, o_9, t);
              t = fopen_0_0(t);
              LocalPopChoice(z_54);
            }
          else
            {
              t = y_54;
              t = _2_0(is_string_0_0, p_9, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  if(((e_35 != NULL) && (e_35 != t)))
    _fail(t);
  else
    e_35 = t;
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_35 = NULL,m_35 = NULL;
        t = not_null(e_35);
        if(((m_35 != NULL) && (m_35 != t)))
          _fail(t);
        else
          m_35 = t;
        t = not_null(e_35);
        if(((f_35 != NULL) && (f_35 != t)))
          _fail(t);
        else
          f_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), term_c_55);
        t = open_stream_0_0(t);
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
        {
          ATerm n_35 = NULL,q_35 = NULL;
          t = not_null(e_35);
          if(((q_35 != NULL) && (q_35 != t)))
            _fail(t);
          else
            q_35 = t;
          t = not_null(e_35);
          if(((n_35 != NULL) && (n_35 != t)))
            _fail(t);
          else
            n_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_55, not_null(n_35));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  if(((d_35 != NULL) && (d_35 != t)))
    _fail(t);
  else
    d_35 = t;
  t = read_from_stream_0_0(t);
  if(((c_35 != NULL) && (c_35 != t)))
    _fail(t);
  else
    c_35 = t;
  t = not_null(d_35);
  t = fclose_0_0(t);
  t = not_null(c_35);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_35 != NULL) && (r_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_35 = ATgetArgument(t, 0);
      if(((s_35 != NULL) && (s_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(r_35), not_null(s_35));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  if(((t_35 != NULL) && (t_35 != t)))
    _fail(t);
  else
    t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_35), (ATerm) ATinsert(ATempty, term_e_55));
  t = access_0_0(t);
  return(t);
}
static ATerm l_36 (ATerm x_35, ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  t = not_null(x_35);
  if(((b_36 != NULL) && (b_36 != t)))
    _fail(t);
  else
    b_36 = t;
  t = not_null(x_35);
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  t = not_null(b_36);
  if(((d_36 != NULL) && (d_36 != t)))
    _fail(t);
  else
    d_36 = t;
  t = SSL_explode_term(not_null(d_36));
  if(match_cons(t, sym__2))
    {
      ATerm f_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((y_35 != NULL) && (y_35 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_36);
  if(((a_36 != NULL) && (a_36 != t)))
    _fail(t);
  else
    a_36 = t;
  t = not_null(y_35);
  t = concat_0_0(t);
  if(((z_35 != NULL) && (z_35 != t)))
    _fail(t);
  else
    z_35 = t;
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  if(((g_36 != NULL) && (g_36 != t)))
    _fail(t);
  else
    g_36 = t;
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
            t = not_null(e_36);
            if(((h_36 != NULL) && (h_36 != t)))
              _fail(t);
            else
              h_36 = t;
            t = not_null(f_36);
            if(((i_36 != NULL) && (i_36 != t)))
              _fail(t);
            else
              i_36 = t;
            t = not_null(g_36);
            if(((k_36 != NULL) && (k_36 != t)))
              _fail(t);
            else
              k_36 = t;
            t = not_null(h_36);
            {
              static ATerm q_9 (ATerm t);
              static ATerm q_9 (ATerm t)
              {
                t = not_null(i_36);
                return(t);
              }
              t = at_end_1_0(q_9, t);
            }
            if(((j_36 != NULL) && (j_36 != t)))
              _fail(t);
            else
              j_36 = t;
            LocalPopChoice(h_55);
          }
        else
          {
            t = g_55;
            t = l_36(not_null(g_36), t);
          }
      }
    }
  else
    {
      t = l_36(not_null(g_36), t);
    }
  return(t);
}
ATerm call_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  static ATerm r_9 (ATerm t);
  static ATerm r_9 (ATerm t)
  {
    t = w_141(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(n_36));
    t = execvp_0_0(t);
    t = term_m_41;
    t = exit_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_36 = ATgetArgument(t, 0);
      if(((n_36 != NULL) && (n_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = fork_and_wait_1_0(r_9, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm p_36 = NULL;
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  t = call_1_0(s_9, t);
  return(t);
}
ATerm xtc_fetch_loc_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm xtc_find_loc_1_0 (ATerm u_153 (ATerm), ATerm t)
{
  t = xtc_find_reg_1_0(u_153, t);
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
  ATerm q_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_36 != NULL) && (q_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_36 = ATgetArgument(t, 0);
      if(((r_36 != NULL) && (r_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(q_36), not_null(r_36));
  return(t);
}
ATerm dup2_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_36 != NULL) && (s_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_36 = ATgetArgument(t, 0);
      if(((t_36 != NULL) && (t_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_dup2(not_null(s_36), not_null(t_36));
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
  ATerm u_36 = NULL;
  if(((u_36 != NULL) && (u_36 != t)))
    _fail(t);
  else
    u_36 = t;
  t = SSL_int_to_string(not_null(u_36));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_36 = ATgetArgument(t, 0);
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
        t = not_null(x_36);
        if(((a_37 != NULL) && (a_37 != t)))
          _fail(t);
        else
          a_37 = t;
        t = not_null(w_36);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        t = not_null(a_37);
        t = int_to_string_0_0(t);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_55), not_null(d_37)), term_i_55);
        t = concat_strings_0_0(t);
        if(((b_37 != NULL) && (b_37 != t)))
          _fail(t);
        else
          b_37 = t;
      }
    }
  else
    {
      ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((x_36 != NULL) && (x_36 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_36 = ATgetArgument(t, 0);
          if(((y_36 != NULL) && (y_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_36 = ATgetArgument(t, 1);
          if(((z_36 != NULL) && (z_36 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            z_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(x_36);
      if(((f_37 != NULL) && (f_37 != t)))
        _fail(t);
      else
        f_37 = t;
      t = not_null(y_36);
      if(((g_37 != NULL) && (g_37 != t)))
        _fail(t);
      else
        g_37 = t;
      t = not_null(z_36);
      if(((h_37 != NULL) && (h_37 != t)))
        _fail(t);
      else
        h_37 = t;
      t = not_null(w_36);
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      if(((p_37 != NULL) && (p_37 != t)))
        _fail(t);
      else
        p_37 = t;
      t = not_null(g_37);
      t = int_to_string_0_0(t);
      if(((o_37 != NULL) && (o_37 != t)))
        _fail(t);
      else
        o_37 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_37)), term_l_55), not_null(o_37)), term_k_55), not_null(f_37));
      t = concat_strings_0_0(t);
      if(((i_37 != NULL) && (i_37 != t)))
        _fail(t);
      else
        i_37 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  ATerm q_37 = NULL;
  static ATerm t_9 (ATerm t);
  static ATerm t_9 (ATerm t)
  {
    t = u_123(t);
    if(((q_37 != NULL) && (q_37 != t)))
      _fail(t);
    else
      q_37 = t;
    return(t);
  }
  t = fetch_1_0(t_9, t);
  t = not_null(q_37);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_37 = NULL;
  if(((r_37 != NULL) && (r_37 != t)))
    _fail(t);
  else
    r_37 = t;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_9 (ATerm t);
        static ATerm u_9 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_55 = ATgetArgument(t, 0);
              if(((r_37 != NULL) && (r_37 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_37 = ATgetArgument(t, 1);
              {
                ATerm p_55 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_72), term_z_71), term_t_71), term_d_71), term_v_70), term_p_70), term_j_70), term_o_69), term_k_69), term_g_69), term_c_69), term_i_68), term_e_68), term_g_67), term_b_66), term_y_64), term_b_64), term_u_62), term_q_62), term_w_59), term_y_56), term_u_56), term_q_56), term_i_56), term_e_56), term_a_56), term_w_55), term_s_55);
        t = fetch_elem_1_0(u_9, t);
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(r_37));
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm f_72 = ATgetArgument(t, 0);
      if(((x_37 != NULL) && (x_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_37 = ATgetArgument(t, 1);
      {
        ATerm g_72 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(x_37);
  {
    ATerm h_72 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_72;
      }
  }
  t = signal_from_number_0_0(t);
  t = signal_to_descr_0_0(t);
  if(((w_37 != NULL) && (w_37 != t)))
    _fail(t);
  else
    w_37 = t;
  if(((v_37 != NULL) && (v_37 != t)))
    _fail(t);
  else
    v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_37)), term_i_72));
  t = printnl_0_0(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_37 = NULL;
  if(((s_37 != NULL) && (s_37 != t)))
    _fail(t);
  else
    s_37 = t;
  t = try_1_0(v_9, t);
  t = not_null(s_37);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm y_37 = NULL;
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  t = SSL_waitpid(not_null(y_37));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  t = fork_0_0(t);
  if(((a_38 != NULL) && (a_38 != t)))
    _fail(t);
  else
    a_38 = t;
  {
    ATerm j_72 = t;
    int s_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_38 = NULL;
        if(((c_38 != NULL) && (c_38 != t)))
          _fail(t);
        else
          c_38 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(b_38);
        t = y_141(t);
        LocalPopChoice(s_72);
      }
    else
      {
        t = j_72;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(b_38));
        t = z_141(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm a_142 (ATerm), ATerm t)
{
  ATerm d_38 = NULL;
  static ATerm w_9 (ATerm t);
  static ATerm w_9 (ATerm t)
  {
    ATerm e_38 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_38 = ATgetArgument(t, 0);
        if(((d_38 != NULL) && (d_38 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(e_38);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm v_72 = ATgetArgument(t, 0);
        if(((ATgetType(v_72) != AT_INT) || (ATgetInt((ATermInt) v_72) != 0)))
          _fail(t);
        {
          ATerm d_73 = ATgetArgument(t, 1);
        }
        {
          ATerm e_73 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(d_38);
    return(t);
  }
  t = fork_2_0(a_142, w_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  if(((p_38 != NULL) && (p_38 != t)))
    _fail(t);
  else
    p_38 = t;
  if(((m_38 != NULL) && (m_38 != t)))
    _fail(t);
  else
    m_38 = t;
  t = not_null(p_38);
  if(((o_38 != NULL) && (o_38 != t)))
    _fail(t);
  else
    o_38 = t;
  t = STDIN__FILENO_0_0(t);
  if(((n_38 != NULL) && (n_38 != t)))
    _fail(t);
  else
    n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(n_38));
  t = dup2_0_0(t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(((t_38 != NULL) && (t_38 != t)))
    _fail(t);
  else
    t_38 = t;
  if(((q_38 != NULL) && (q_38 != t)))
    _fail(t);
  else
    q_38 = t;
  t = not_null(t_38);
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  t = STDOUT__FILENO_0_0(t);
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), not_null(r_38));
  t = dup2_0_0(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  if(((u_38 != NULL) && (u_38 != t)))
    _fail(t);
  else
    u_38 = t;
  t = not_null(x_38);
  if(((w_38 != NULL) && (w_38 != t)))
    _fail(t);
  else
    w_38 = t;
  t = STDERR__FILENO_0_0(t);
  if(((v_38 != NULL) && (v_38 != t)))
    _fail(t);
  else
    v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_38), not_null(v_38));
  t = dup2_0_0(t);
  return(t);
}
ATerm exec_newp_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  if(((l_38 != NULL) && (l_38 != t)))
    _fail(t);
  else
    l_38 = t;
  t = term_f_73;
  if(((k_38 != NULL) && (k_38 != t)))
    _fail(t);
  else
    k_38 = t;
  t = not_null(l_38);
  t = dbg_0_1(not_null(k_38), t);
  if(match_cons(t, sym__3))
    {
      if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_38 = ATgetArgument(t, 0);
      {
        ATerm g_73 = ATgetArgument(t, 1);
        if(match_cons(g_73, sym__3))
          {
            if(((f_38 != NULL) && (f_38 != ATgetArgument(g_73, 0))))
              _fail(ATgetArgument(g_73, 0));
            else
              f_38 = ATgetArgument(g_73, 0);
            if(((g_38 != NULL) && (g_38 != ATgetArgument(g_73, 1))))
              _fail(ATgetArgument(g_73, 1));
            else
              g_38 = ATgetArgument(g_73, 1);
            if(((h_38 != NULL) && (h_38 != ATgetArgument(g_73, 2))))
              _fail(ATgetArgument(g_73, 2));
            else
              h_38 = ATgetArgument(g_73, 2);
          }
        else
          _fail(t);
      }
      if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    static ATerm x_9 (ATerm t);
    static ATerm x_9 (ATerm t)
    {
      t = not_null(f_38);
      t = option_1_0(y_9, t);
      t = not_null(g_38);
      t = option_1_0(z_9, t);
      t = not_null(h_38);
      t = option_1_0(a_10, t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(j_38));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(x_9, t);
  }
  t = term_v_34;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_h_73;
  return(t);
}
ATerm exec_http_0_1 (ATerm b_88, ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = exec_http_dependencies_0_0(t);
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  if(((c_39 != NULL) && (c_39 != t)))
    _fail(t);
  else
    c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_i_73), term_w_42), not_null(c_39));
  t = conc_0_0(t);
  if(((b_39 != NULL) && (b_39 != t)))
    _fail(t);
  else
    b_39 = t;
  t = not_null(b_88);
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((y_38 != NULL) && (y_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_38 = ATgetArgument(t, 0);
      if(((z_38 != NULL) && (z_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_38 = ATgetArgument(t, 1);
      if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_39 = ATgetArgument(t, 2);
      {
        ATerm j_73 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_v_20, not_null(z_38), not_null(a_39), not_null(b_39));
  t = xtc_command_1_0(b_10, t);
  return(t);
}
ATerm xtc_execute_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  if(((g_39 != NULL) && (g_39 != t)))
    _fail(t);
  else
    g_39 = t;
  if(match_cons(t, sym__3))
    {
      if(((h_39 != NULL) && (h_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_39 = ATgetArgument(t, 0);
      if(((j_39 != NULL) && (j_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_39 = ATgetArgument(t, 1);
      if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(h_39);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm l_39 = NULL,m_39 = NULL;
      t = not_null(j_39);
      if(((m_39 != NULL) && (m_39 != t)))
        _fail(t);
      else
        m_39 = t;
      t = not_null(k_39);
      if(((l_39 != NULL) && (l_39 != t)))
        _fail(t);
      else
        l_39 = t;
      t = exec_http_0_1(not_null(m_39), t);
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
            t = not_null(i_39);
            if(((n_39 != NULL) && (n_39 != t)))
              _fail(t);
            else
              n_39 = t;
            t = not_null(j_39);
            if(((p_39 != NULL) && (p_39 != t)))
              _fail(t);
            else
              p_39 = t;
            t = not_null(k_39);
            if(((o_39 != NULL) && (o_39 != t)))
              _fail(t);
            else
              o_39 = t;
            t = exec_http_0_1(not_null(p_39), t);
          }
        }
      else
        {
          ATerm q_39 = NULL,r_39 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((i_39 != NULL) && (i_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(i_39);
          if(((q_39 != NULL) && (q_39 != t)))
            _fail(t);
          else
            q_39 = t;
          t = not_null(k_39);
          if(((r_39 != NULL) && (r_39 != t)))
            _fail(t);
          else
            r_39 = t;
          t = exec_newp_0_0(t);
        }
    }
  return(t);
}
ATerm open_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = SSL_open(not_null(s_39));
  return(t);
}
ATerm xtc_streamdef_to_fd_0_1 (ATerm j_3, ATerm t)
{
  static ATerm r_40 (ATerm x_39, ATerm c_40, ATerm t);
  static ATerm s_40 (ATerm k_40, ATerm t);
  static ATerm r_40 (ATerm x_39, ATerm c_40, ATerm t)
  {
    ATerm d_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
    t = not_null(x_39);
    if(((d_40 != NULL) && (d_40 != t)))
      _fail(t);
    else
      d_40 = t;
    t = not_null(c_40);
    if(((i_40 != NULL) && (i_40 != t)))
      _fail(t);
    else
      i_40 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm k_73 = ATgetArgument(t, 0);
        if(match_cons(k_73, sym_FILE_1))
          {
            if(((j_40 != NULL) && (j_40 != ATgetArgument(k_73, 0))))
              _fail(ATgetArgument(k_73, 0));
            else
              j_40 = ATgetArgument(k_73, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(j_40);
    t = open_0_0(t);
    if(((h_40 != NULL) && (h_40 != t)))
      _fail(t);
    else
      h_40 = t;
    return(t);
  }
  static ATerm s_40 (ATerm k_40, ATerm t)
  {
    ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
    t = not_null(k_40);
    if(((m_40 != NULL) && (m_40 != t)))
      _fail(t);
    else
      m_40 = t;
    t = not_null(j_3);
    if(match_cons(t, sym_Some_1))
      {
        ATerm l_73 = ATgetArgument(t, 0);
        if(match_cons(l_73, sym_FILE_1))
          {
            if(((n_40 != NULL) && (n_40 != ATgetArgument(l_73, 0))))
              _fail(ATgetArgument(l_73, 0));
            else
              n_40 = ATgetArgument(l_73, 0);
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    t = not_null(n_40);
    t = open_0_0(t);
    if(((l_40 != NULL) && (l_40 != t)))
      _fail(t);
    else
      l_40 = t;
    return(t);
  }
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  if(((p_40 != NULL) && (p_40 != t)))
    _fail(t);
  else
    p_40 = t;
  if(match_cons(t, sym_Std_1))
    {
      if(((q_40 != NULL) && (q_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(q_40);
  if(match_cons(t, sym_Some_1))
    {
      o_40 = ATgetArgument(t, 0);
      t = r_40(not_null(o_40), not_null(p_40), t);
    }
  else
    {
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = s_40(not_null(p_40), t);
    }
  return(t);
}
ATerm xtc_stream_to_fd_0_1 (ATerm i_3, ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  if(((u_40 != NULL) && (u_40 != t)))
    _fail(t);
  else
    u_40 = t;
  if(match_cons(t, sym_Error_1))
    {
      v_40 = ATgetArgument(t, 0);
      {
        ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
        t = not_null(v_40);
        if(((w_40 != NULL) && (w_40 != t)))
          _fail(t);
        else
          w_40 = t;
        t = not_null(u_40);
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = not_null(w_40);
        t = xtc_streamdef_to_fd_0_1(not_null(i_3), t);
        if(((x_40 != NULL) && (x_40 != t)))
          _fail(t);
        else
          x_40 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          v_40 = ATgetArgument(t, 0);
          {
            ATerm z_40 = NULL,a_41 = NULL,f_41 = NULL;
            t = not_null(v_40);
            if(((z_40 != NULL) && (z_40 != t)))
              _fail(t);
            else
              z_40 = t;
            t = not_null(u_40);
            if(((f_41 != NULL) && (f_41 != t)))
              _fail(t);
            else
              f_41 = t;
            t = not_null(z_40);
            t = xtc_streamdef_to_fd_0_1(not_null(i_3), t);
            if(((a_41 != NULL) && (a_41 != t)))
              _fail(t);
            else
              a_41 = t;
          }
        }
      else
        {
          ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(v_40);
          if(((g_41 != NULL) && (g_41 != t)))
            _fail(t);
          else
            g_41 = t;
          t = not_null(u_40);
          if(((i_41 != NULL) && (i_41 != t)))
            _fail(t);
          else
            i_41 = t;
          t = not_null(g_41);
          t = xtc_streamdef_to_fd_0_1(not_null(i_3), t);
          if(((h_41 != NULL) && (h_41 != t)))
            _fail(t);
          else
            h_41 = t;
        }
    }
  return(t);
}
ATerm xtc_argterm_to_exec_0_0 (ATerm t)
{
  ATerm m_73 = t;
  int n_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(n_73);
    }
  else
    {
      t = m_73;
      {
        ATerm r_41 = NULL,s_41 = NULL;
        if(((r_41 != NULL) && (r_41 != t)))
          _fail(t);
        else
          r_41 = t;
        if(match_cons(t, sym_URL_1))
          {
            s_41 = ATgetArgument(t, 0);
            {
              ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
              t = not_null(s_41);
              if(((t_41 != NULL) && (t_41 != t)))
                _fail(t);
              else
                t_41 = t;
              t = not_null(r_41);
              if(((v_41 != NULL) && (v_41 != t)))
                _fail(t);
              else
                v_41 = t;
              t = not_null(t_41);
              t = xtc_arg_to_string_0_0(t);
              if(((u_41 != NULL) && (u_41 != t)))
                _fail(t);
              else
                u_41 = t;
            }
          }
        else
          {
            ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((s_41 != NULL) && (s_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(s_41);
            if(((w_41 != NULL) && (w_41 != t)))
              _fail(t);
            else
              w_41 = t;
            t = not_null(r_41);
            if(((y_41 != NULL) && (y_41 != t)))
              _fail(t);
            else
              y_41 = t;
            t = not_null(w_41);
            t = xtc_arg_to_string_0_0(t);
            if(((x_41 != NULL) && (x_41 != t)))
              _fail(t);
            else
              x_41 = t;
          }
      }
    }
  return(t);
}
ATerm xtc_arg_to_exec_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  if(((b_42 != NULL) && (b_42 != t)))
    _fail(t);
  else
    b_42 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      c_42 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      {
        ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
        t = not_null(c_42);
        if(((d_42 != NULL) && (d_42 != t)))
          _fail(t);
        else
          d_42 = t;
        t = not_null(a_42);
        if(((e_42 != NULL) && (e_42 != t)))
          _fail(t);
        else
          e_42 = t;
        t = not_null(b_42);
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        t = not_null(d_42);
        t = xtc_argterm_to_exec_0_0(t);
        if(((f_42 != NULL) && (f_42 != t)))
          _fail(t);
        else
          f_42 = t;
        t = not_null(i_42);
        if(((h_42 != NULL) && (h_42 != t)))
          _fail(t);
        else
          h_42 = t;
        t = not_null(e_42);
        t = xtc_argterm_to_exec_0_0(t);
        if(((g_42 != NULL) && (g_42 != t)))
          _fail(t);
        else
          g_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_42)), not_null(f_42));
      }
    }
  else
    {
      ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
      if(match_cons(t, sym_Option_1))
        {
          if(((c_42 != NULL) && (c_42 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(c_42);
      if(((j_42 != NULL) && (j_42 != t)))
        _fail(t);
      else
        j_42 = t;
      t = not_null(b_42);
      if(((l_42 != NULL) && (l_42 != t)))
        _fail(t);
      else
        l_42 = t;
      t = not_null(j_42);
      t = xtc_argterm_to_exec_0_0(t);
      if(((k_42 != NULL) && (k_42 != t)))
        _fail(t);
      else
        k_42 = t;
      t = (ATerm) ATinsert(ATempty, not_null(k_42));
    }
  return(t);
}
ATerm xtc_args_to_exec_0_0 (ATerm t)
{
  t = mapconcat_1_0(xtc_arg_to_exec_0_0, t);
  return(t);
}
static ATerm v_43 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  t = not_null(x_42);
  if(((z_42 != NULL) && (z_42 != t)))
    _fail(t);
  else
    z_42 = t;
  t = not_null(y_42);
  if(((d_43 != NULL) && (d_43 != t)))
    _fail(t);
  else
    d_43 = t;
  t = not_null(z_42);
  t = xtc_argterm_to_http_0_0(t);
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_43 = ATgetArgument(t, 0);
      {
        ATerm k_43 = NULL;
        t = not_null(f_43);
        if(((k_43 != NULL) && (k_43 != t)))
          _fail(t);
        else
          k_43 = t;
      }
    }
  else
    {
      ATerm l_43 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((f_43 != NULL) && (f_43 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(f_43);
      if(((l_43 != NULL) && (l_43 != t)))
        _fail(t);
      else
        l_43 = t;
    }
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = not_null(d_43);
  if(((c_43 != NULL) && (c_43 != t)))
    _fail(t);
  else
    c_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_43)), term_o_73);
  t = concat_strings_0_0(t);
  if(((b_43 != NULL) && (b_43 != t)))
    _fail(t);
  else
    b_43 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(b_43)));
  return(t);
}
static ATerm w_43 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = not_null(m_43);
  if(((o_43 != NULL) && (o_43 != t)))
    _fail(t);
  else
    o_43 = t;
  t = not_null(n_43);
  if(((q_43 != NULL) && (q_43 != t)))
    _fail(t);
  else
    q_43 = t;
  t = not_null(o_43);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm p_73 = t;
    if((PushChoice() == 0))
      {
        ATerm q_73 = t;
        int r_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(c_10, t);
            LocalPopChoice(r_73);
          }
        else
          {
            t = q_73;
            t = URL_1_0(d_10, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_73;
      }
  }
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(p_43)));
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm r_43 = NULL;
  if(((r_43 != NULL) && (r_43 != t)))
    _fail(t);
  else
    r_43 = t;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm s_43 = NULL;
  if(((s_43 != NULL) && (s_43 != t)))
    _fail(t);
  else
    s_43 = t;
  return(t);
}
ATerm xtc_arg_to_http_generic_0_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((u_43 != NULL) && (u_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_74 = t;
    int q_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_43(not_null(u_43), not_null(t_43), t);
        LocalPopChoice(q_74);
      }
    else
      {
        t = p_74;
        t = w_43(not_null(u_43), not_null(t_43), t);
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm r_74 = t;
  int s_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(s_74);
    }
  else
    {
      t = r_74;
      t = xtc_arg_to_http_generic_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_http_0_0 (ATerm t)
{
  t = mapconcat_1_0(e_10, t);
  return(t);
}
static ATerm z_44 (ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  t = not_null(d_44);
  if(((f_44 != NULL) && (f_44 != t)))
    _fail(t);
  else
    f_44 = t;
  t = not_null(e_44);
  if(((j_44 != NULL) && (j_44 != t)))
    _fail(t);
  else
    j_44 = t;
  t = not_null(f_44);
  t = xtc_argterm_to_http_0_0(t);
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_44 = ATgetArgument(t, 0);
      {
        ATerm m_44 = NULL;
        t = not_null(l_44);
        if(((m_44 != NULL) && (m_44 != t)))
          _fail(t);
        else
          m_44 = t;
      }
    }
  else
    {
      ATerm n_44 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((l_44 != NULL) && (l_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(l_44);
      if(((n_44 != NULL) && (n_44 != t)))
        _fail(t);
      else
        n_44 = t;
    }
  if(((g_44 != NULL) && (g_44 != t)))
    _fail(t);
  else
    g_44 = t;
  t = not_null(j_44);
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_44)), term_t_74);
  t = concat_strings_0_0(t);
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(h_44)));
  return(t);
}
static ATerm a_45 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  t = not_null(o_44);
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  t = not_null(p_44);
  if(((u_44 != NULL) && (u_44 != t)))
    _fail(t);
  else
    u_44 = t;
  t = not_null(q_44);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm u_74 = t;
    if((PushChoice() == 0))
      {
        ATerm v_74 = t;
        int w_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(f_10, t);
            LocalPopChoice(w_74);
          }
        else
          {
            t = v_74;
            t = URL_1_0(g_10, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_74;
      }
  }
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = not_null(u_44);
  if(((t_44 != NULL) && (t_44 != t)))
    _fail(t);
  else
    t_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_44)), term_x_74);
  t = concat_strings_0_0(t);
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(s_44)));
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm v_44 = NULL;
  if(((v_44 != NULL) && (v_44 != t)))
    _fail(t);
  else
    v_44 = t;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm w_44 = NULL;
  if(((w_44 != NULL) && (w_44 != t)))
    _fail(t);
  else
    w_44 = t;
  return(t);
}
ATerm xtc_arg_to_xtservice_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  if(((x_44 != NULL) && (x_44 != t)))
    _fail(t);
  else
    x_44 = t;
  if(match_cons(t, sym_Option_1))
    {
      if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_74 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_44(not_null(y_44), not_null(x_44), t);
        LocalPopChoice(t_75);
      }
    else
      {
        t = y_74;
        t = a_45(not_null(y_44), not_null(x_44), t);
      }
  }
  return(t);
}
ATerm URL_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,h_10 = NULL,j_18 = NULL;
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  if(match_cons(t, sym_URL_1))
    {
      if(((c_45 != NULL) && (c_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_45 != NULL) && (h_45 != t)))
    _fail(t);
  else
    h_45 = t;
  t = SSLgetAnnotations(not_null(g_45));
  if(((b_45 != NULL) && (b_45 != t)))
    _fail(t);
  else
    b_45 = t;
  t = not_null(c_45);
  t = r_109(t);
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  t = (ATerm) ATmakeAppl(sym_URL_1, not_null(d_45));
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  t = SSLsetAnnotations(not_null(h_10), not_null(b_45));
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  return(t);
}
ATerm xtc_arg_to_string_0_0 (ATerm t)
{
  ATerm i_45 = NULL;
  if(match_cons(t, sym_String_1))
    {
      if(((i_45 != NULL) && (i_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_45);
  return(t);
}
ATerm xtc_argterm_to_http_0_0 (ATerm t)
{
  ATerm u_75 = t;
  int v_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_string_0_0(t);
      LocalPopChoice(v_75);
    }
  else
    {
      t = u_75;
      {
        ATerm k_45 = NULL,l_45 = NULL;
        if(((k_45 != NULL) && (k_45 != t)))
          _fail(t);
        else
          k_45 = t;
        if(match_cons(t, sym_URL_1))
          {
            l_45 = ATgetArgument(t, 0);
            {
              ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
              t = not_null(l_45);
              if(((m_45 != NULL) && (m_45 != t)))
                _fail(t);
              else
                m_45 = t;
              t = not_null(k_45);
              if(((o_45 != NULL) && (o_45 != t)))
                _fail(t);
              else
                o_45 = t;
              t = not_null(m_45);
              t = xtc_arg_to_string_0_0(t);
              if(((n_45 != NULL) && (n_45 != t)))
                _fail(t);
              else
                n_45 = t;
              t = (ATerm) ATmakeAppl(sym_URL_1, not_null(n_45));
            }
          }
        else
          {
            ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                if(((l_45 != NULL) && (l_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = not_null(l_45);
            if(((p_45 != NULL) && (p_45 != t)))
              _fail(t);
            else
              p_45 = t;
            t = not_null(k_45);
            if(((r_45 != NULL) && (r_45 != t)))
              _fail(t);
            else
              r_45 = t;
            t = not_null(p_45);
            t = xtc_arg_to_string_0_0(t);
            if(((q_45 != NULL) && (q_45 != t)))
              _fail(t);
            else
              q_45 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_45));
          }
      }
    }
  return(t);
}
static ATerm i_47 (ATerm y_45, ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
  t = not_null(y_45);
  if(((b_46 != NULL) && (b_46 != t)))
    _fail(t);
  else
    b_46 = t;
  t = not_null(z_45);
  if(((d_46 != NULL) && (d_46 != t)))
    _fail(t);
  else
    d_46 = t;
  t = not_null(a_46);
  if(((o_46 != NULL) && (o_46 != t)))
    _fail(t);
  else
    o_46 = t;
  t = not_null(b_46);
  t = xtc_argterm_to_http_0_0(t);
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = not_null(d_46);
  t = xtc_argterm_to_http_0_0(t);
  if(((p_46 != NULL) && (p_46 != t)))
    _fail(t);
  else
    p_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_46 = ATgetArgument(t, 0);
      {
        ATerm r_46 = NULL;
        t = not_null(q_46);
        if(((r_46 != NULL) && (r_46 != t)))
          _fail(t);
        else
          r_46 = t;
      }
    }
  else
    {
      ATerm s_46 = NULL;
      if(match_cons(t, sym_URL_1))
        {
          if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(q_46);
      if(((s_46 != NULL) && (s_46 != t)))
        _fail(t);
      else
        s_46 = t;
    }
  if(((e_46 != NULL) && (e_46 != t)))
    _fail(t);
  else
    e_46 = t;
  t = not_null(o_46);
  if(((g_46 != NULL) && (g_46 != t)))
    _fail(t);
  else
    g_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_46)), term_w_75), not_null(c_46));
  t = concat_strings_0_0(t);
  if(((f_46 != NULL) && (f_46 != t)))
    _fail(t);
  else
    f_46 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(f_46)));
  return(t);
}
static ATerm j_47 (ATerm t_46, ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  t = not_null(t_46);
  if(((w_46 != NULL) && (w_46 != t)))
    _fail(t);
  else
    w_46 = t;
  t = not_null(u_46);
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = not_null(v_46);
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  t = not_null(w_46);
  t = xtc_argterm_to_http_0_0(t);
  if(((x_46 != NULL) && (x_46 != t)))
    _fail(t);
  else
    x_46 = t;
  t = not_null(y_46);
  t = xtc_argterm_to_http_0_0(t);
  {
    ATerm i_78 = t;
    if((PushChoice() == 0))
      {
        ATerm j_78 = t;
        int k_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(i_10, t);
            LocalPopChoice(k_78);
          }
        else
          {
            t = j_78;
            t = URL_1_0(j_10, t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_78;
      }
  }
  if(((z_46 != NULL) && (z_46 != t)))
    _fail(t);
  else
    z_46 = t;
  t = not_null(c_47);
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_46)), term_o_78), not_null(x_46));
  t = concat_strings_0_0(t);
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_v_19, not_null(a_47)));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm d_47 = NULL;
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm e_47 = NULL;
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  return(t);
}
ATerm xtc_arg_to_http_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  if(((f_47 != NULL) && (f_47 != t)))
    _fail(t);
  else
    f_47 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      if(((g_47 != NULL) && (g_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_47 = ATgetArgument(t, 0);
      if(((h_47 != NULL) && (h_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_78 = t;
    int l_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_47(not_null(g_47), not_null(h_47), not_null(f_47), t);
        LocalPopChoice(l_79);
      }
    else
      {
        t = y_78;
        t = j_47(not_null(g_47), not_null(h_47), not_null(f_47), t);
      }
  }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm m_79 = t;
  int n_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_arg_to_http_0_0(t);
      LocalPopChoice(n_79);
    }
  else
    {
      t = m_79;
      t = xtc_arg_to_xtservice_0_0(t);
    }
  return(t);
}
ATerm xtc_args_to_xtservice_0_0 (ATerm t)
{
  t = mapconcat_1_0(k_10, t);
  return(t);
}
static ATerm d_50 (ATerm t_47, ATerm u_47, ATerm v_47, ATerm a_48, ATerm e_48, ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,s_48 = NULL,u_48 = NULL;
  t = not_null(t_47);
  if(((p_48 != NULL) && (p_48 != t)))
    _fail(t);
  else
    p_48 = t;
  t = not_null(u_47);
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  t = not_null(v_47);
  if(((n_48 != NULL) && (n_48 != t)))
    _fail(t);
  else
    n_48 = t;
  t = not_null(a_48);
  if(((q_48 != NULL) && (q_48 != t)))
    _fail(t);
  else
    q_48 = t;
  t = not_null(e_48);
  if(((j_48 != NULL) && (j_48 != t)))
    _fail(t);
  else
    j_48 = t;
  t = not_null(f_48);
  if(((i_48 != NULL) && (i_48 != t)))
    _fail(t);
  else
    i_48 = t;
  t = not_null(g_48);
  if(((u_48 != NULL) && (u_48 != t)))
    _fail(t);
  else
    u_48 = t;
  t = not_null(j_48);
  t = xtc_args_to_exec_0_0(t);
  if(((k_48 != NULL) && (k_48 != t)))
    _fail(t);
  else
    k_48 = t;
  t = not_null(p_48);
  {
    ATerm o_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_10 (ATerm t);
        static ATerm l_10 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(l_48), t);
          return(t);
        }
        t = xtc_stream_input_0_0(t);
        t = option_1_0(l_10, t);
        LocalPopChoice(p_79);
      }
    else
      {
        t = o_79;
        t = term_v_20;
      }
  }
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  t = not_null(p_48);
  {
    ATerm q_79 = t;
    int r_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_10 (ATerm t);
        static ATerm m_10 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(n_48), t);
          return(t);
        }
        t = xtc_stream_output_0_0(t);
        t = option_1_0(m_10, t);
        LocalPopChoice(r_79);
      }
    else
      {
        t = q_79;
        t = term_v_20;
      }
  }
  if(((o_48 != NULL) && (o_48 != t)))
    _fail(t);
  else
    o_48 = t;
  t = not_null(p_48);
  {
    ATerm s_79 = t;
    int t_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_10 (ATerm t);
        static ATerm n_10 (ATerm t)
        {
          t = xtc_stream_to_fd_0_1(not_null(q_48), t);
          return(t);
        }
        t = xtc_stream_error_0_0(t);
        t = option_1_0(n_10, t);
        LocalPopChoice(t_79);
      }
    else
      {
        t = s_79;
        t = term_v_20;
      }
  }
  if(((s_48 != NULL) && (s_48 != t)))
    _fail(t);
  else
    s_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(i_48), (ATerm)ATmakeAppl(sym__3, not_null(m_48), not_null(o_48), not_null(s_48)), not_null(k_48));
  return(t);
}
ATerm xtc_prepare_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,c_49 = NULL,e_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(((v_48 != NULL) && (v_48 != t)))
    _fail(t);
  else
    v_48 = t;
  if(match_cons(t, sym__3))
    {
      if(((w_48 != NULL) && (w_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_48 = ATgetArgument(t, 0);
      if(((y_48 != NULL) && (y_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_48 = ATgetArgument(t, 1);
      if(((l_49 != NULL) && (l_49 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(w_48);
  if(match_cons(t, sym_XTService_0))
    {
      ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,x_49 = NULL;
      t = not_null(y_48);
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_49 = ATgetArgument(t, 0);
          if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_49 = ATgetArgument(t, 1);
          if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_49 = ATgetArgument(t, 2);
          if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            k_49 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(l_49);
      if(match_cons(t, sym__2))
        {
          if(((m_49 != NULL) && (m_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_49 = ATgetArgument(t, 0);
          if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(k_49);
      if(((r_49 != NULL) && (r_49 != t)))
        _fail(t);
      else
        r_49 = t;
      t = not_null(m_49);
      if(((q_49 != NULL) && (q_49 != t)))
        _fail(t);
      else
        q_49 = t;
      t = not_null(v_48);
      if(((x_49 != NULL) && (x_49 != t)))
        _fail(t);
      else
        x_49 = t;
      t = not_null(r_49);
      t = xtc_args_to_xtservice_0_0(t);
      if(((s_49 != NULL) && (s_49 != t)))
        _fail(t);
      else
        s_49 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(s_49)), not_null(q_49));
    }
  else
    {
      if(match_cons(t, sym_HTTP_1))
        {
          x_48 = ATgetArgument(t, 0);
          {
            ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
            t = not_null(y_48);
            if(match_cons(t, sym_XtcConf_4))
              {
                if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_49 = ATgetArgument(t, 0);
                if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_49 = ATgetArgument(t, 1);
                if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  j_49 = ATgetArgument(t, 2);
                if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  k_49 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = not_null(l_49);
            if(match_cons(t, sym__2))
              {
                if(((m_49 != NULL) && (m_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_49 = ATgetArgument(t, 0);
                if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(x_48);
            if(((y_49 != NULL) && (y_49 != t)))
              _fail(t);
            else
              y_49 = t;
            t = not_null(k_49);
            if(((a_50 != NULL) && (a_50 != t)))
              _fail(t);
            else
              a_50 = t;
            t = not_null(m_49);
            if(((z_49 != NULL) && (z_49 != t)))
              _fail(t);
            else
              z_49 = t;
            t = not_null(v_48);
            if(((c_50 != NULL) && (c_50 != t)))
              _fail(t);
            else
              c_50 = t;
            t = not_null(a_50);
            t = xtc_args_to_http_0_0(t);
            if(((b_50 != NULL) && (b_50 != t)))
              _fail(t);
            else
              b_50 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(b_50)), not_null(z_49));
          }
        }
      else
        {
          if(match_cons(t, sym_Exec_1))
            {
              if(((x_48 != NULL) && (x_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(y_48);
          if(match_cons(t, sym_XtcConf_4))
            {
              if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_49 = ATgetArgument(t, 0);
              if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_49 = ATgetArgument(t, 1);
              if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                j_49 = ATgetArgument(t, 2);
              if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 3))))
                _fail(ATgetArgument(t, 3));
              else
                k_49 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = not_null(l_49);
          if(match_cons(t, sym__2))
            {
              if(((m_49 != NULL) && (m_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_49 = ATgetArgument(t, 0);
              if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                n_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_50(not_null(x_48), not_null(c_49), not_null(e_49), not_null(j_49), not_null(k_49), not_null(m_49), not_null(v_48), t);
        }
    }
  return(t);
}
ATerm xtc_targ_dump_0_1 (ATerm w_91, ATerm t)
{
  if(match_cons(t, sym_TVarSpec_1))
    {
      ATerm u_79 = ATgetArgument(t, 0);
      if(!(match_cons(u_79, sym_Arguments_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = not_null(w_91);
  return(t);
}
ATerm xtc_layout_dump_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL;
  static ATerm o_10 (ATerm t);
  static ATerm o_10 (ATerm t)
  {
    ATerm y_79 = t;
    int a_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_targ_dump_0_1(not_null(e_50), t);
        LocalPopChoice(a_80);
      }
    else
      {
        t = y_79;
        {
          ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
          if(((g_50 != NULL) && (g_50 != t)))
            _fail(t);
          else
            g_50 = t;
          if(((i_50 != NULL) && (i_50 != t)))
            _fail(t);
          else
            i_50 = t;
          t = not_null(g_50);
          if(((h_50 != NULL) && (h_50 != t)))
            _fail(t);
          else
            h_50 = t;
          t = (ATerm) ATinsert(ATempty, not_null(h_50));
        }
      }
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_50 = ATgetArgument(t, 0);
      if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_50);
  t = mapconcat_1_0(o_10, t);
  return(t);
}
ATerm option_isect_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_50 = ATgetArgument(t, 0);
      if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_50 != NULL) && (o_50 != t)))
    _fail(t);
  else
    o_50 = t;
  t = Fst_0_0(t);
  {
    static ATerm p_10 (ATerm t);
    static ATerm p_10 (ATerm t)
    {
      ATerm p_50 = NULL;
      ATerm h_80 = t;
      int j_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_50 (ATerm q_50, ATerm t);
          static ATerm z_50 (ATerm q_50, ATerm t)
          {
            ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
            t = not_null(q_50);
            if(((p_50 != NULL) && (p_50 != t)))
              _fail(t);
            else
              p_50 = t;
            t = not_null(q_50);
            if(((s_50 != NULL) && (s_50 != t)))
              _fail(t);
            else
              s_50 = t;
            if(((t_50 != NULL) && (t_50 != t)))
              _fail(t);
            else
              t_50 = t;
            t = not_null(k_50);
            {
              static ATerm q_10 (ATerm t);
              static ATerm q_10 (ATerm t)
              {
                ATerm u_50 = NULL,x_50 = NULL;
                if(((x_50 != NULL) && (x_50 != t)))
                  _fail(t);
                else
                  x_50 = t;
                t = (ATerm) ATmakeAppl(sym_Option_1, not_null(x_50));
                if(((p_50 != NULL) && (p_50 != t)))
                  _fail(t);
                else
                  p_50 = t;
                return(t);
              }
              t = SRTS_one(q_10, t);
            }
            t = not_null(t_50);
            if(((r_50 != NULL) && (r_50 != t)))
              _fail(t);
            else
              r_50 = t;
            t = (ATerm) ATinsert(ATempty, not_null(r_50));
            return(t);
          }
          ATerm y_50 = NULL;
          if(((y_50 != NULL) && (y_50 != t)))
            _fail(t);
          else
            y_50 = t;
          t = z_50(not_null(y_50), t);
          LocalPopChoice(j_80);
        }
      else
        {
          t = h_80;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(p_10, t);
  }
  if(((m_50 != NULL) && (m_50 != t)))
    _fail(t);
  else
    m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), not_null(m_50));
  t = diff_0_0(t);
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), not_null(n_50));
  return(t);
}
ATerm xtc_toption_to_args_2_0 (ATerm m_151 (ATerm), ATerm n_151 (ATerm), ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((a_51 != NULL) && (a_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_51 = ATgetArgument(t, 0);
      if(((d_51 != NULL) && (d_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_51 = ATgetArgument(t, 1);
      if(((c_51 != NULL) && (c_51 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((g_51 != NULL) && (g_51 != t)))
    _fail(t);
  else
    g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_51), not_null(d_51));
  t = option_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_51 = ATgetArgument(t, 0);
      if(((b_51 != NULL) && (b_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_51);
  {
    ATerm l_80 = t;
    int m_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_51 = NULL;
        if(((i_51 != NULL) && (i_51 != t)))
          _fail(t);
        else
          i_51 = t;
        {
          ATerm p_80 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_80;
            }
        }
        t = not_null(i_51);
        LocalPopChoice(m_80);
        t = m_151(t);
      }
    else
      {
        t = l_80;
        {
          ATerm q_80 = t;
          int s_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_51 = NULL;
              if(((j_51 != NULL) && (j_51 != t)))
                _fail(t);
              else
                j_51 = t;
              t = not_null(c_51);
              if(match_cons(t, sym_Default_1))
                {
                  ATerm t_80 = ATgetArgument(t, 0);
                  if(!(match_cons(t_80, sym_On_0)))
                    _fail(t);
                }
              else
                _fail(t);
              t = not_null(j_51);
              LocalPopChoice(s_80);
              t = not_null(d_51);
              t = Hd_0_0(t);
              if(((e_51 != NULL) && (e_51 != t)))
                _fail(t);
              else
                e_51 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(e_51)));
            }
          else
            {
              t = q_80;
              t = n_151(t);
            }
        }
      }
  }
  if(((f_51 != NULL) && (f_51 != t)))
    _fail(t);
  else
    f_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_51), not_null(b_51));
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm p_51 = NULL;
  if(((p_51 != NULL) && (p_51 != t)))
    _fail(t);
  else
    p_51 = t;
  return(t);
}
ATerm diff_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_51 != NULL) && (m_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_51 = ATgetArgument(t, 0);
      if(((l_51 != NULL) && (l_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_51 != NULL) && (o_51 != t)))
    _fail(t);
  else
    o_51 = t;
  t = not_null(m_51);
  {
    static ATerm q_51 (ATerm t);
    static ATerm q_51 (ATerm t)
    {
      ATerm u_80 = t;
      int w_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(w_80);
        }
      else
        {
          t = u_80;
          {
            ATerm x_80 = t;
            int z_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm r_10 (ATerm t);
                static ATerm r_10 (ATerm t)
                {
                  t = not_null(l_51);
                  return(t);
                }
                t = HdMember_p__2_0(o_127, r_10, t);
                t = q_51(t);
                LocalPopChoice(z_80);
              }
            else
              {
                t = x_80;
                t = Cons_2_0(s_10, q_51, t);
              }
          }
        }
      return(t);
    }
    t = q_51(t);
  }
  if(((n_51 != NULL) && (n_51 != t)))
    _fail(t);
  else
    n_51 = t;
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_51 != NULL) && (s_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_51 = ATgetArgument(t, 0);
      {
        ATerm a_81 = ATgetArgument(t, 1);
        if(((ATgetType(a_81) == AT_LIST) && !(ATisEmpty(a_81))))
          {
            if(((r_51 != NULL) && (r_51 != ATgetFirst((ATermList) a_81))))
              _fail(ATgetFirst((ATermList) a_81));
            else
              r_51 = ATgetFirst((ATermList) a_81);
            if(((t_51 != NULL) && (t_51 != (ATerm) ATgetNext((ATermList) a_81))))
              _fail((ATerm) ATgetNext((ATermList) a_81));
            else
              t_51 = (ATerm) ATgetNext((ATermList) a_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_51)), not_null(r_51)), not_null(t_51));
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_51 = ATgetArgument(t, 0);
      if(((v_51 != NULL) && (v_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(v_51)), not_null(u_51));
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_81 = ATgetArgument(t, 0);
      if(((ATgetType(b_81) == AT_LIST) && !(ATisEmpty(b_81))))
        {
          if(((w_51 != NULL) && (w_51 != ATgetFirst((ATermList) b_81))))
            _fail(ATgetFirst((ATermList) b_81));
          else
            w_51 = ATgetFirst((ATermList) b_81);
          if(((y_51 != NULL) && (y_51 != (ATerm) ATgetNext((ATermList) b_81))))
            _fail((ATerm) ATgetNext((ATermList) b_81));
          else
            y_51 = (ATerm) ATgetNext((ATermList) b_81);
        }
      else
        _fail(t);
      {
        ATerm d_81 = ATgetArgument(t, 1);
        if(((ATgetType(d_81) == AT_LIST) && !(ATisEmpty(d_81))))
          {
            if(((x_51 != NULL) && (x_51 != ATgetFirst((ATermList) d_81))))
              _fail(ATgetFirst((ATermList) d_81));
            else
              x_51 = ATgetFirst((ATermList) d_81);
            if(((z_51 != NULL) && (z_51 != (ATerm) ATgetNext((ATermList) d_81))))
              _fail((ATerm) ATgetNext((ATermList) d_81));
            else
              z_51 = (ATerm) ATgetNext((ATermList) d_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_51), not_null(x_51)), (ATerm) ATmakeAppl(sym__2, not_null(y_51), not_null(z_51)));
  return(t);
}
ATerm Zip1_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_81 = ATgetArgument(t, 0);
      if(((ATgetType(f_81) != AT_LIST) || !(ATisEmpty(f_81))))
        _fail(t);
      {
        ATerm g_81 = ATgetArgument(t, 1);
        if(((ATgetType(g_81) != AT_LIST) || !(ATisEmpty(g_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm genzip_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm t)
{
  static ATerm a_52 (ATerm t);
  static ATerm a_52 (ATerm t)
  {
    ATerm n_81 = t;
    int o_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_125(t);
        LocalPopChoice(o_81);
      }
    else
      {
        t = n_81;
        t = n_125(t);
        t = _2_0(p_125, a_52, t);
        t = o_125(t);
      }
    return(t);
  }
  t = a_52(t);
  return(t);
}
ATerm zip_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, r_125, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm q_52 = NULL;
  if(((q_52 != NULL) && (q_52 != t)))
    _fail(t);
  else
    q_52 = t;
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_81 = ATgetFirst((ATermList) t);
      if(match_cons(p_81, sym__2))
        {
          if(((k_52 != NULL) && (k_52 != ATgetArgument(p_81, 0))))
            _fail(ATgetArgument(p_81, 0));
          else
            k_52 = ATgetArgument(p_81, 0);
          if(((n_52 != NULL) && (n_52 != ATgetArgument(p_81, 1))))
            _fail(ATgetArgument(p_81, 1));
          else
            n_52 = ATgetArgument(p_81, 1);
        }
      else
        _fail(t);
      if(((f_52 != NULL) && (f_52 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((o_52 != NULL) && (o_52 != t)))
    _fail(t);
  else
    o_52 = t;
  t = not_null(n_52);
  if(((p_52 != NULL) && (p_52 != t)))
    _fail(t);
  else
    p_52 = t;
  t = SSL_explode_term(not_null(p_52));
  if(match_cons(t, sym__2))
    {
      if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_52 = ATgetArgument(t, 0);
      if(((e_52 != NULL) && (e_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_52);
  if(((l_52 != NULL) && (l_52 != t)))
    _fail(t);
  else
    l_52 = t;
  t = not_null(k_52);
  if(((m_52 != NULL) && (m_52 != t)))
    _fail(t);
  else
    m_52 = t;
  t = SSL_explode_term(not_null(m_52));
  if(match_cons(t, sym__2))
    {
      if(((c_52 != NULL) && (c_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_52 = ATgetArgument(t, 0);
      if(((d_52 != NULL) && (d_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_52);
  if(((h_52 != NULL) && (h_52 != t)))
    _fail(t);
  else
    h_52 = t;
  if(((j_52 != NULL) && (j_52 != t)))
    _fail(t);
  else
    j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_52), not_null(e_52));
  t = zip_1_0(t_10, t);
  if(((i_52 != NULL) && (i_52 != t)))
    _fail(t);
  else
    i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_52), not_null(f_52));
  t = conc_0_0(t);
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  return(t);
}
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_81 = ATgetFirst((ATermList) t);
      if(match_cons(r_81, sym__2))
        {
          if(((r_52 != NULL) && (r_52 != ATgetArgument(r_81, 0))))
            _fail(ATgetArgument(r_81, 0));
          else
            r_52 = ATgetArgument(r_81, 0);
          if(((r_52 != NULL) && (r_52 != ATgetArgument(r_81, 1))))
            _fail(ATgetArgument(r_81, 1));
          else
            r_52 = ATgetArgument(r_81, 1);
        }
      else
        _fail(t);
      if(((s_52 != NULL) && (s_52 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        s_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(s_52);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm v_52 = NULL;
  if(((v_52 != NULL) && (v_52 != t)))
    _fail(t);
  else
    v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_52));
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = _2_0(x_10, Nil_0_0, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm s_81 = t;
  int t_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(y_10, z_10, t);
      LocalPopChoice(t_81);
    }
  else
    {
      t = s_81;
      t = UfShift_0_0(t);
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm w_52 = NULL;
  if(((w_52 != NULL) && (w_52 != t)))
    _fail(t);
  else
    w_52 = t;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm x_52 = NULL;
  if(((x_52 != NULL) && (x_52 != t)))
    _fail(t);
  else
    x_52 = t;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm u_81 = t;
  int v_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UfIdem_0_0(t);
      LocalPopChoice(v_81);
    }
  else
    {
      t = u_81;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_81 = t;
  int z_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_10, v_10, w_10, t);
      LocalPopChoice(z_81);
    }
  else
    {
      t = w_81;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm argoption_isect_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_53 != NULL) && (b_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_53 = ATgetArgument(t, 0);
      if(((a_53 != NULL) && (a_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  t = Fst_0_0(t);
  {
    static ATerm a_11 (ATerm t);
    static ATerm a_11 (ATerm t)
    {
      ATerm f_53 = NULL,i_53 = NULL;
      ATerm a_82 = t;
      int b_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_53 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t);
          static ATerm w_53 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t)
          {
            ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
            t = not_null(j_53);
            if(((f_53 != NULL) && (f_53 != t)))
              _fail(t);
            else
              f_53 = t;
            t = not_null(k_53);
            if(((i_53 != NULL) && (i_53 != t)))
              _fail(t);
            else
              i_53 = t;
            t = not_null(l_53);
            if(((p_53 != NULL) && (p_53 != t)))
              _fail(t);
            else
              p_53 = t;
            if(((q_53 != NULL) && (q_53 != t)))
              _fail(t);
            else
              q_53 = t;
            t = not_null(a_53);
            {
              static ATerm b_11 (ATerm t);
              static ATerm b_11 (ATerm t)
              {
                if(((f_53 != NULL) && (f_53 != t)))
                  _fail(t);
                else
                  f_53 = t;
                return(t);
              }
              t = SRTS_one(b_11, t);
            }
            t = not_null(q_53);
            if(((o_53 != NULL) && (o_53 != t)))
              _fail(t);
            else
              o_53 = t;
            t = (ATerm) ATinsert(ATempty, not_null(o_53));
            return(t);
          }
          ATerm r_53 = NULL,u_53 = NULL,v_53 = NULL;
          if(((r_53 != NULL) && (r_53 != t)))
            _fail(t);
          else
            r_53 = t;
          if(match_cons(t, sym_ArgOption_2))
            {
              if(((u_53 != NULL) && (u_53 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_53 = ATgetArgument(t, 0);
              if(((v_53 != NULL) && (v_53 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                v_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_53(not_null(u_53), not_null(v_53), not_null(r_53), t);
          LocalPopChoice(b_82);
        }
      else
        {
          t = a_82;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = mapconcat_1_0(a_11, t);
  }
  if(((c_53 != NULL) && (c_53 != t)))
    _fail(t);
  else
    c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_53), not_null(c_53));
  t = diff_0_0(t);
  if(((d_53 != NULL) && (d_53 != t)))
    _fail(t);
  else
    d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_53), not_null(d_53));
  return(t);
}
ATerm xtc_targoption_to_args_3_0 (ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__4))
    {
      if(((y_53 != NULL) && (y_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_53 = ATgetArgument(t, 0);
      if(((z_53 != NULL) && (z_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_53 = ATgetArgument(t, 1);
      if(((b_54 != NULL) && (b_54 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_54 = ATgetArgument(t, 2);
      if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        x_53 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((d_54 != NULL) && (d_54 != t)))
    _fail(t);
  else
    d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_53), not_null(z_53));
  t = argoption_isect_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_54 != NULL) && (e_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_54 = ATgetArgument(t, 0);
      if(((a_54 != NULL) && (a_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_54);
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_54 = NULL;
        if(((f_54 != NULL) && (f_54 != t)))
          _fail(t);
        else
          f_54 = t;
        {
          ATerm e_82 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_82;
            }
        }
        t = not_null(f_54);
        LocalPopChoice(d_82);
        t = o_151(t);
      }
    else
      {
        t = c_82;
        {
          ATerm f_82 = t;
          int g_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_54 = NULL;
              if(((g_54 != NULL) && (g_54 != t)))
                _fail(t);
              else
                g_54 = t;
              t = not_null(b_54);
              {
                ATerm h_82 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_82;
                  }
              }
              t = not_null(g_54);
              LocalPopChoice(g_82);
              t = p_151(t);
            }
          else
            {
              t = f_82;
              t = q_151(t);
            }
        }
      }
  }
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(a_54));
  return(t);
}
static ATerm i_62 (ATerm m_56, ATerm n_56, ATerm o_56, ATerm b_57, ATerm c_57, ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  t = not_null(m_56);
  if(((f_57 != NULL) && (f_57 != t)))
    _fail(t);
  else
    f_57 = t;
  t = not_null(n_56);
  if(((g_57 != NULL) && (g_57 != t)))
    _fail(t);
  else
    g_57 = t;
  t = not_null(o_56);
  if(((e_57 != NULL) && (e_57 != t)))
    _fail(t);
  else
    e_57 = t;
  t = not_null(b_57);
  if(((d_57 != NULL) && (d_57 != t)))
    _fail(t);
  else
    d_57 = t;
  t = not_null(c_57);
  if(((k_57 != NULL) && (k_57 != t)))
    _fail(t);
  else
    k_57 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(d_57), not_null(f_57), not_null(g_57), not_null(e_57));
  {
    static ATerm d_11 (ATerm t);
    static ATerm d_11 (ATerm t)
    {
      static ATerm f_11 (ATerm t);
      static ATerm f_11 (ATerm t)
      {
        ATerm m_57 = NULL,n_57 = NULL;
        if(((n_57 != NULL) && (n_57 != t)))
          _fail(t);
        else
          n_57 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(h_57), not_null(n_57));
        return(t);
      }
      t = not_null(f_57);
      t = Hd_0_0(t);
      if(((h_57 != NULL) && (h_57 != t)))
        _fail(t);
      else
        h_57 = t;
      t = not_null(g_57);
      t = map_1_0(f_11, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(c_11, d_11, e_11, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((i_57 != NULL) && (i_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_57 = ATgetArgument(t, 0);
      if(((j_57 != NULL) && (j_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_57), not_null(j_57));
  return(t);
}
static ATerm j_62 (ATerm o_57, ATerm p_57, ATerm q_57, ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
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
  t = not_null(q_57);
  if(((t_57 != NULL) && (t_57 != t)))
    _fail(t);
  else
    t_57 = t;
  t = not_null(r_57);
  if(((u_57 != NULL) && (u_57 != t)))
    _fail(t);
  else
    u_57 = t;
  t = not_null(s_57);
  if(((z_57 != NULL) && (z_57 != t)))
    _fail(t);
  else
    z_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_57), not_null(v_57), not_null(w_57));
  t = xtc_toption_to_args_2_0(g_11, h_11, t);
  if(match_cons(t, sym__2))
    {
      if(((x_57 != NULL) && (x_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_57 = ATgetArgument(t, 0);
      if(((y_57 != NULL) && (y_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_57), not_null(y_57));
  return(t);
}
static ATerm k_62 (ATerm b_58, ATerm c_58, ATerm d_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
  t = not_null(b_58);
  if(((i_58 != NULL) && (i_58 != t)))
    _fail(t);
  else
    i_58 = t;
  t = not_null(c_58);
  if(((j_58 != NULL) && (j_58 != t)))
    _fail(t);
  else
    j_58 = t;
  t = not_null(d_58);
  if(((h_58 != NULL) && (h_58 != t)))
    _fail(t);
  else
    h_58 = t;
  t = not_null(e_58);
  if(((g_58 != NULL) && (g_58 != t)))
    _fail(t);
  else
    g_58 = t;
  t = not_null(f_58);
  if(((n_58 != NULL) && (n_58 != t)))
    _fail(t);
  else
    n_58 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(g_58), not_null(i_58), not_null(j_58), not_null(h_58));
  {
    static ATerm j_11 (ATerm t);
    static ATerm j_11 (ATerm t)
    {
      static ATerm k_11 (ATerm t);
      static ATerm k_11 (ATerm t)
      {
        ATerm p_58 = NULL,q_58 = NULL;
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(k_58), not_null(q_58));
        return(t);
      }
      t = not_null(i_58);
      t = Hd_0_0(t);
      if(((k_58 != NULL) && (k_58 != t)))
        _fail(t);
      else
        k_58 = t;
      t = not_null(j_58);
      t = map_1_0(k_11, t);
      return(t);
    }
    t = xtc_targoption_to_args_3_0(i_11, j_11, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((l_58 != NULL) && (l_58 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_58 = ATgetArgument(t, 0);
      if(((m_58 != NULL) && (m_58 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_58), not_null(m_58));
  return(t);
}
static ATerm l_62 (ATerm r_58, ATerm s_58, ATerm t_58, ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  t = not_null(r_58);
  if(((y_58 != NULL) && (y_58 != t)))
    _fail(t);
  else
    y_58 = t;
  t = not_null(s_58);
  if(((z_58 != NULL) && (z_58 != t)))
    _fail(t);
  else
    z_58 = t;
  t = not_null(t_58);
  if(((w_58 != NULL) && (w_58 != t)))
    _fail(t);
  else
    w_58 = t;
  t = not_null(u_58);
  if(((x_58 != NULL) && (x_58 != t)))
    _fail(t);
  else
    x_58 = t;
  t = not_null(v_58);
  if(((c_59 != NULL) && (c_59 != t)))
    _fail(t);
  else
    c_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(x_58), not_null(y_58), not_null(z_58));
  t = xtc_toption_to_args_2_0(l_11, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((a_59 != NULL) && (a_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_59 = ATgetArgument(t, 0);
      if(((b_59 != NULL) && (b_59 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_59), not_null(b_59));
  return(t);
}
static ATerm m_62 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  t = not_null(e_59);
  if(((l_59 != NULL) && (l_59 != t)))
    _fail(t);
  else
    l_59 = t;
  t = not_null(f_59);
  if(((m_59 != NULL) && (m_59 != t)))
    _fail(t);
  else
    m_59 = t;
  t = not_null(g_59);
  if(((k_59 != NULL) && (k_59 != t)))
    _fail(t);
  else
    k_59 = t;
  t = not_null(h_59);
  if(((j_59 != NULL) && (j_59 != t)))
    _fail(t);
  else
    j_59 = t;
  t = not_null(i_59);
  if(((r_59 != NULL) && (r_59 != t)))
    _fail(t);
  else
    r_59 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(j_59), not_null(l_59), not_null(m_59), not_null(k_59));
  {
    static ATerm n_11 (ATerm t);
    static ATerm n_11 (ATerm t)
    {
      t = not_null(l_59);
      t = Hd_0_0(t);
      if(((n_59 != NULL) && (n_59 != t)))
        _fail(t);
      else
        n_59 = t;
      t = not_null(m_59);
      t = Hd_0_0(t);
      if(((o_59 != NULL) && (o_59 != t)))
        _fail(t);
      else
        o_59 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(n_59), not_null(o_59)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(m_11, n_11, _fail, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((p_59 != NULL) && (p_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_59 = ATgetArgument(t, 0);
      if(((q_59 != NULL) && (q_59 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(q_59));
  return(t);
}
static ATerm n_62 (ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm j_60, ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  t = not_null(f_60);
  if(((m_60 != NULL) && (m_60 != t)))
    _fail(t);
  else
    m_60 = t;
  t = not_null(g_60);
  if(((n_60 != NULL) && (n_60 != t)))
    _fail(t);
  else
    n_60 = t;
  t = not_null(h_60);
  if(((k_60 != NULL) && (k_60 != t)))
    _fail(t);
  else
    k_60 = t;
  t = not_null(i_60);
  if(((l_60 != NULL) && (l_60 != t)))
    _fail(t);
  else
    l_60 = t;
  t = not_null(j_60);
  if(((q_60 != NULL) && (q_60 != t)))
    _fail(t);
  else
    q_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_60), not_null(m_60), not_null(n_60));
  t = xtc_toption_to_args_2_0(o_11, _fail, t);
  if(match_cons(t, sym__2))
    {
      if(((o_60 != NULL) && (o_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_60 = ATgetArgument(t, 0);
      if(((p_60 != NULL) && (p_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_60), not_null(p_60));
  return(t);
}
static ATerm o_62 (ATerm t_60, ATerm u_60, ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  t = not_null(t_60);
  if(((a_61 != NULL) && (a_61 != t)))
    _fail(t);
  else
    a_61 = t;
  t = not_null(u_60);
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(v_60);
  if(((z_60 != NULL) && (z_60 != t)))
    _fail(t);
  else
    z_60 = t;
  t = not_null(w_60);
  if(((y_60 != NULL) && (y_60 != t)))
    _fail(t);
  else
    y_60 = t;
  t = not_null(x_60);
  if(((g_61 != NULL) && (g_61 != t)))
    _fail(t);
  else
    g_61 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(y_60), not_null(a_61), not_null(b_61), not_null(z_60));
  {
    static ATerm q_11 (ATerm t);
    static ATerm q_11 (ATerm t)
    {
      t = not_null(a_61);
      t = Hd_0_0(t);
      if(((c_61 != NULL) && (c_61 != t)))
        _fail(t);
      else
        c_61 = t;
      t = not_null(b_61);
      t = Hd_0_0(t);
      if(((d_61 != NULL) && (d_61 != t)))
        _fail(t);
      else
        d_61 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(c_61), not_null(d_61)));
      return(t);
    }
    t = xtc_targoption_to_args_3_0(p_11, q_11, r_11, t);
  }
  if(match_cons(t, sym__2))
    {
      if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_61 = ATgetArgument(t, 0);
      if(((f_61 != NULL) && (f_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_61), not_null(f_61));
  return(t);
}
static ATerm p_62 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  t = not_null(j_61);
  if(((q_61 != NULL) && (q_61 != t)))
    _fail(t);
  else
    q_61 = t;
  t = not_null(k_61);
  if(((r_61 != NULL) && (r_61 != t)))
    _fail(t);
  else
    r_61 = t;
  t = not_null(l_61);
  if(((o_61 != NULL) && (o_61 != t)))
    _fail(t);
  else
    o_61 = t;
  t = not_null(m_61);
  if(((p_61 != NULL) && (p_61 != t)))
    _fail(t);
  else
    p_61 = t;
  t = not_null(n_61);
  if(((u_61 != NULL) && (u_61 != t)))
    _fail(t);
  else
    u_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_61), not_null(q_61), not_null(r_61));
  t = xtc_toption_to_args_2_0(s_11, t_11, t);
  if(match_cons(t, sym__2))
    {
      if(((s_61 != NULL) && (s_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_61 = ATgetArgument(t, 0);
      if(((t_61 != NULL) && (t_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_61), not_null(t_61));
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm l_57 = NULL;
  if(((l_57 != NULL) && (l_57 != t)))
    _fail(t);
  else
    l_57 = t;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm a_58 = NULL;
  if(((a_58 != NULL) && (a_58 != t)))
    _fail(t);
  else
    a_58 = t;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm o_58 = NULL;
  if(((o_58 != NULL) && (o_58 != t)))
    _fail(t);
  else
    o_58 = t;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm d_59 = NULL;
  if(((d_59 != NULL) && (d_59 != t)))
    _fail(t);
  else
    d_59 = t;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  if(((e_60 != NULL) && (e_60 != t)))
    _fail(t);
  else
    e_60 = t;
  t = Hd_0_0(t);
  if(((d_60 != NULL) && (d_60 != t)))
    _fail(t);
  else
    d_60 = t;
  t = (ATerm) ATinsert(ATempty, not_null(d_60));
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  if(((s_60 != NULL) && (s_60 != t)))
    _fail(t);
  else
    s_60 = t;
  t = Hd_0_0(t);
  if(((r_60 != NULL) && (r_60 != t)))
    _fail(t);
  else
    r_60 = t;
  t = (ATerm) ATinsert(ATempty, not_null(r_60));
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  if(((i_61 != NULL) && (i_61 != t)))
    _fail(t);
  else
    i_61 = t;
  t = Hd_0_0(t);
  if(((h_61 != NULL) && (h_61 != t)))
    _fail(t);
  else
    h_61 = t;
  t = (ATerm) ATinsert(ATempty, not_null(h_61));
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  if(((w_61 != NULL) && (w_61 != t)))
    _fail(t);
  else
    w_61 = t;
  t = Hd_0_0(t);
  if(((v_61 != NULL) && (v_61 != t)))
    _fail(t);
  else
    v_61 = t;
  t = (ATerm) ATinsert(ATempty, not_null(v_61));
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_targ_to_args_0_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL;
  if(((z_61 != NULL) && (z_61 != t)))
    _fail(t);
  else
    z_61 = t;
  if(match_cons(t, sym__2))
    {
      if(((a_62 != NULL) && (a_62 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_62 = ATgetArgument(t, 0);
      if(((h_62 != NULL) && (h_62 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_62);
  if(match_cons(t, sym_TVarStar_4))
    {
      b_62 = ATgetArgument(t, 0);
      c_62 = ATgetArgument(t, 1);
      d_62 = ATgetArgument(t, 2);
      f_62 = ATgetArgument(t, 3);
      t = not_null(b_62);
      if(match_cons(t, sym_ArgOption_0))
        {
          t = not_null(d_62);
          if(match_cons(t, sym_Some_1))
            {
              if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(e_62);
          if(match_cons(t, sym_Default_1))
            {
              if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(x_61);
          if(match_cons(t, sym_Values_1))
            {
              if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_62);
          if(match_cons(t, sym_Some_1))
            {
              if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_62(not_null(c_62), not_null(y_61), not_null(g_62), not_null(h_62), not_null(z_61), t);
        }
      else
        {
          if(!(match_cons(t, sym_Option_0)))
            _fail(t);
          t = not_null(d_62);
          if(match_cons(t, sym_Some_1))
            {
              if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(f_62);
          if(match_cons(t, sym_Some_1))
            {
              if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_62(not_null(c_62), not_null(e_62), not_null(g_62), not_null(h_62), not_null(z_61), t);
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          b_62 = ATgetArgument(t, 0);
          c_62 = ATgetArgument(t, 1);
          d_62 = ATgetArgument(t, 2);
          f_62 = ATgetArgument(t, 3);
          t = not_null(b_62);
          if(match_cons(t, sym_ArgOption_0))
            {
              t = not_null(d_62);
              if(match_cons(t, sym_Some_1))
                {
                  if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_62 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(e_62);
              if(match_cons(t, sym_Default_1))
                {
                  if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(x_61);
              if(match_cons(t, sym_Values_1))
                {
                  if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(f_62);
              if(match_cons(t, sym_Some_1))
                {
                  if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_62 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_62(not_null(c_62), not_null(y_61), not_null(g_62), not_null(h_62), not_null(z_61), t);
            }
          else
            {
              if(!(match_cons(t, sym_Option_0)))
                _fail(t);
              t = not_null(d_62);
              if(match_cons(t, sym_Some_1))
                {
                  if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_62 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(f_62);
              if(match_cons(t, sym_Some_1))
                {
                  if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_62 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_62(not_null(c_62), not_null(e_62), not_null(g_62), not_null(h_62), not_null(z_61), t);
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              b_62 = ATgetArgument(t, 0);
              c_62 = ATgetArgument(t, 1);
              d_62 = ATgetArgument(t, 2);
              f_62 = ATgetArgument(t, 3);
              t = not_null(b_62);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(d_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(e_62);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(x_61);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_62(not_null(c_62), not_null(y_61), not_null(g_62), not_null(h_62), not_null(z_61), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(d_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_62(not_null(c_62), not_null(e_62), not_null(g_62), not_null(h_62), not_null(z_61), t);
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((b_62 != NULL) && (b_62 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_62 = ATgetArgument(t, 0);
                  if(((c_62 != NULL) && (c_62 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_62 = ATgetArgument(t, 1);
                  if(((d_62 != NULL) && (d_62 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    d_62 = ATgetArgument(t, 2);
                  if(((f_62 != NULL) && (f_62 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    f_62 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(b_62);
              if(match_cons(t, sym_ArgOption_0))
                {
                  t = not_null(d_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(e_62);
                  if(match_cons(t, sym_Default_1))
                    {
                      if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(x_61);
                  if(match_cons(t, sym_Values_1))
                    {
                      if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_62(not_null(c_62), not_null(y_61), not_null(g_62), not_null(h_62), not_null(z_61), t);
                }
              else
                {
                  if(!(match_cons(t, sym_Option_0)))
                    _fail(t);
                  t = not_null(d_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(f_62);
                  if(match_cons(t, sym_Some_1))
                    {
                      if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_62(not_null(c_62), not_null(e_62), not_null(g_62), not_null(h_62), not_null(z_61), t);
                }
            }
        }
    }
  return(t);
}
ATerm xtc_streamdef_to_arg_0_1 (ATerm h_3, ATerm t)
{
  static ATerm j_63 (ATerm v_62, ATerm w_62, ATerm t);
  static ATerm k_63 (ATerm b_63, ATerm t);
  static ATerm j_63 (ATerm v_62, ATerm w_62, ATerm t)
  {
    ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
    t = not_null(v_62);
    if(((x_62 != NULL) && (x_62 != t)))
      _fail(t);
    else
      x_62 = t;
    t = not_null(w_62);
    if(((z_62 != NULL) && (z_62 != t)))
      _fail(t);
    else
      z_62 = t;
    t = not_null(h_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((a_63 != NULL) && (a_63 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_63 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(a_63);
    if(((y_62 != NULL) && (y_62 != t)))
      _fail(t);
    else
      y_62 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, not_null(x_62), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(y_62)))));
    return(t);
  }
  static ATerm k_63 (ATerm b_63, ATerm t)
  {
    ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
    t = not_null(b_63);
    if(((d_63 != NULL) && (d_63 != t)))
      _fail(t);
    else
      d_63 = t;
    t = not_null(h_3);
    if(match_cons(t, sym_FILE_1))
      {
        if(((e_63 != NULL) && (e_63 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_63 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(e_63);
    if(((c_63 != NULL) && (c_63 != t)))
      _fail(t);
    else
      c_63 = t;
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(c_63)))));
    return(t);
  }
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
  if(((g_63 != NULL) && (g_63 != t)))
    _fail(t);
  else
    g_63 = t;
  if(match_cons(t, sym_File_1))
    {
      h_63 = ATgetArgument(t, 0);
      t = not_null(h_63);
      if(match_cons(t, sym_Some_1))
        {
          f_63 = ATgetArgument(t, 0);
          t = j_63(not_null(f_63), not_null(g_63), t);
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = k_63(not_null(g_63), t);
        }
    }
  else
    {
      if(match_cons(t, sym_Std_1))
        {
          if(((h_63 != NULL) && (h_63 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(h_63);
      if(match_cons(t, sym_Some_1))
        {
          f_63 = ATgetArgument(t, 0);
          {
            ATerm i_63 = NULL;
            t = not_null(f_63);
            if(((i_63 != NULL) && (i_63 != t)))
              _fail(t);
            else
              i_63 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, not_null(i_63)));
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
ATerm xtc_stream_to_arg_0_1 (ATerm g_3, ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  if(((m_63 != NULL) && (m_63 != t)))
    _fail(t);
  else
    m_63 = t;
  if(match_cons(t, sym_Error_1))
    {
      n_63 = ATgetArgument(t, 0);
      {
        ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
        t = not_null(n_63);
        if(((p_63 != NULL) && (p_63 != t)))
          _fail(t);
        else
          p_63 = t;
        t = not_null(m_63);
        if(((r_63 != NULL) && (r_63 != t)))
          _fail(t);
        else
          r_63 = t;
        t = not_null(p_63);
        t = xtc_streamdef_to_arg_0_1(not_null(g_3), t);
        if(((q_63 != NULL) && (q_63 != t)))
          _fail(t);
        else
          q_63 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_Output_1))
        {
          n_63 = ATgetArgument(t, 0);
          {
            ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
            t = not_null(n_63);
            if(((s_63 != NULL) && (s_63 != t)))
              _fail(t);
            else
              s_63 = t;
            t = not_null(m_63);
            if(((u_63 != NULL) && (u_63 != t)))
              _fail(t);
            else
              u_63 = t;
            t = not_null(s_63);
            t = xtc_streamdef_to_arg_0_1(not_null(g_3), t);
            if(((t_63 != NULL) && (t_63 != t)))
              _fail(t);
            else
              t_63 = t;
          }
        }
      else
        {
          ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
          if(match_cons(t, sym_Input_1))
            {
              if(((n_63 != NULL) && (n_63 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(n_63);
          if(((v_63 != NULL) && (v_63 != t)))
            _fail(t);
          else
            v_63 = t;
          t = not_null(m_63);
          if(((x_63 != NULL) && (x_63 != t)))
            _fail(t);
          else
            x_63 = t;
          t = not_null(v_63);
          t = xtc_streamdef_to_arg_0_1(not_null(g_3), t);
          if(((w_63 != NULL) && (w_63 != t)))
            _fail(t);
          else
            w_63 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_input_0_0 (ATerm t)
{
  ATerm y_63 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm i_82 = ATgetArgument(t, 0);
      if(match_cons(i_82, sym_Some_1))
        {
          if(((y_63 != NULL) && (y_63 != ATgetArgument(i_82, 0))))
            _fail(ATgetArgument(i_82, 0));
          else
            y_63 = ATgetArgument(i_82, 0);
        }
      else
        _fail(t);
      {
        ATerm j_82 = ATgetArgument(t, 1);
      }
      {
        ATerm k_82 = ATgetArgument(t, 2);
      }
      {
        ATerm l_82 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(y_63);
  return(t);
}
ATerm xtc_stream_input_0_0 (ATerm t)
{
  ATerm z_63 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      if(((z_63 != NULL) && (z_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_63 = ATgetArgument(t, 0);
      {
        ATerm m_82 = ATgetArgument(t, 1);
      }
      {
        ATerm n_82 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(z_63);
  return(t);
}
ATerm xtc_desc_input_0_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  if(((c_64 != NULL) && (c_64 != t)))
    _fail(t);
  else
    c_64 = t;
  if(match_cons(t, sym_XtcDesc_1))
    {
      if(((d_64 != NULL) && (d_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_64);
  if(match_cons(t, sym_HTTP_1))
    {
      e_64 = ATgetArgument(t, 0);
      {
        ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
        t = not_null(e_64);
        if(((f_64 != NULL) && (f_64 != t)))
          _fail(t);
        else
          f_64 = t;
        t = not_null(c_64);
        if(((h_64 != NULL) && (h_64 != t)))
          _fail(t);
        else
          h_64 = t;
        t = not_null(f_64);
        t = xtc_stream_input_0_0(t);
        if(((g_64 != NULL) && (g_64 != t)))
          _fail(t);
        else
          g_64 = t;
      }
    }
  else
    {
      if(match_cons(t, sym_XTService_0))
        {
          t = term_m_21;
        }
      else
        {
          ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
          if(match_cons(t, sym_Exec_1))
            {
              if(((e_64 != NULL) && (e_64 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(e_64);
          if(((i_64 != NULL) && (i_64 != t)))
            _fail(t);
          else
            i_64 = t;
          t = not_null(c_64);
          if(((k_64 != NULL) && (k_64 != t)))
            _fail(t);
          else
            k_64 = t;
          t = not_null(i_64);
          t = xtc_stream_input_0_0(t);
          if(((j_64 != NULL) && (j_64 != t)))
            _fail(t);
          else
            j_64 = t;
        }
    }
  return(t);
}
ATerm xtc_conf_output_0_0 (ATerm t)
{
  ATerm l_64 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm o_82 = ATgetArgument(t, 0);
      ATerm p_82 = ATgetArgument(t, 1);
      if(match_cons(p_82, sym_Some_1))
        {
          if(((l_64 != NULL) && (l_64 != ATgetArgument(p_82, 0))))
            _fail(ATgetArgument(p_82, 0));
          else
            l_64 = ATgetArgument(p_82, 0);
        }
      else
        _fail(t);
      {
        ATerm q_82 = ATgetArgument(t, 2);
      }
      {
        ATerm r_82 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(l_64);
  return(t);
}
ATerm xtc_stream_output_0_0 (ATerm t)
{
  ATerm m_64 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm s_82 = ATgetArgument(t, 0);
      if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_64 = ATgetArgument(t, 1);
      {
        ATerm t_82 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(m_64);
  return(t);
}
ATerm xtc_desc_output_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm u_82 = ATgetArgument(t, 0);
      if(match_cons(u_82, sym_Exec_1))
        {
          if(((n_64 != NULL) && (n_64 != ATgetArgument(u_82, 0))))
            _fail(ATgetArgument(u_82, 0));
          else
            n_64 = ATgetArgument(u_82, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((p_64 != NULL) && (p_64 != t)))
    _fail(t);
  else
    p_64 = t;
  t = not_null(n_64);
  t = xtc_stream_output_0_0(t);
  if(((o_64 != NULL) && (o_64 != t)))
    _fail(t);
  else
    o_64 = t;
  return(t);
}
ATerm xtc_conf_error_0_0 (ATerm t)
{
  ATerm q_64 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm v_82 = ATgetArgument(t, 0);
      ATerm w_82 = ATgetArgument(t, 1);
      ATerm x_82 = ATgetArgument(t, 2);
      if(match_cons(x_82, sym_Some_1))
        {
          if(((q_64 != NULL) && (q_64 != ATgetArgument(x_82, 0))))
            _fail(ATgetArgument(x_82, 0));
          else
            q_64 = ATgetArgument(x_82, 0);
        }
      else
        _fail(t);
      {
        ATerm y_82 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = not_null(q_64);
  return(t);
}
ATerm xtc_stream_error_0_0 (ATerm t)
{
  ATerm r_64 = NULL;
  if(match_cons(t, sym_Streams_3))
    {
      ATerm z_82 = ATgetArgument(t, 0);
      ATerm a_83 = ATgetArgument(t, 1);
      if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(r_64);
  return(t);
}
ATerm xtc_desc_error_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm b_83 = ATgetArgument(t, 0);
      if(match_cons(b_83, sym_Exec_1))
        {
          if(((s_64 != NULL) && (s_64 != ATgetArgument(b_83, 0))))
            _fail(ATgetArgument(b_83, 0));
          else
            s_64 = ATgetArgument(b_83, 0);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  if(((u_64 != NULL) && (u_64 != t)))
    _fail(t);
  else
    u_64 = t;
  t = not_null(s_64);
  t = xtc_stream_error_0_0(t);
  if(((t_64 != NULL) && (t_64 != t)))
    _fail(t);
  else
    t_64 = t;
  return(t);
}
ATerm xtc_targ_to_args_0_2 (ATerm e_3, ATerm f_3, ATerm t)
{
  static ATerm d_66 (ATerm a_65, ATerm t);
  static ATerm e_66 (ATerm i_65, ATerm t);
  static ATerm f_66 (ATerm q_65, ATerm t);
  static ATerm d_66 (ATerm a_65, ATerm t)
  {
    ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
    t = not_null(a_65);
    if(((c_65 != NULL) && (c_65 != t)))
      _fail(t);
    else
      c_65 = t;
    t = not_null(e_3);
    t = xtc_desc_error_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((d_65 != NULL) && (d_65 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(d_65);
    if(((f_65 != NULL) && (f_65 != t)))
      _fail(t);
    else
      f_65 = t;
    if(((h_65 != NULL) && (h_65 != t)))
      _fail(t);
    else
      h_65 = t;
    t = not_null(f_3);
    t = xtc_conf_error_0_0(t);
    if(((g_65 != NULL) && (g_65 != t)))
      _fail(t);
    else
      g_65 = t;
    if(((e_65 != NULL) && (e_65 != t)))
      _fail(t);
    else
      e_65 = t;
    t = not_null(f_65);
    t = xtc_stream_to_arg_0_1(not_null(e_65), t);
    if(((b_65 != NULL) && (b_65 != t)))
      _fail(t);
    else
      b_65 = t;
    return(t);
  }
  static ATerm e_66 (ATerm i_65, ATerm t)
  {
    ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
    t = not_null(i_65);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
    t = not_null(e_3);
    t = xtc_desc_output_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((l_65 != NULL) && (l_65 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(l_65);
    if(((n_65 != NULL) && (n_65 != t)))
      _fail(t);
    else
      n_65 = t;
    if(((p_65 != NULL) && (p_65 != t)))
      _fail(t);
    else
      p_65 = t;
    t = not_null(f_3);
    t = xtc_conf_output_0_0(t);
    if(((o_65 != NULL) && (o_65 != t)))
      _fail(t);
    else
      o_65 = t;
    if(((m_65 != NULL) && (m_65 != t)))
      _fail(t);
    else
      m_65 = t;
    t = not_null(n_65);
    t = xtc_stream_to_arg_0_1(not_null(m_65), t);
    if(((j_65 != NULL) && (j_65 != t)))
      _fail(t);
    else
      j_65 = t;
    return(t);
  }
  static ATerm f_66 (ATerm q_65, ATerm t)
  {
    ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
    t = not_null(q_65);
    if(((s_65 != NULL) && (s_65 != t)))
      _fail(t);
    else
      s_65 = t;
    t = not_null(e_3);
    t = xtc_desc_input_0_0(t);
    if(match_cons(t, sym_Some_1))
      {
        if(((t_65 != NULL) && (t_65 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(t_65);
    if(((v_65 != NULL) && (v_65 != t)))
      _fail(t);
    else
      v_65 = t;
    if(((x_65 != NULL) && (x_65 != t)))
      _fail(t);
    else
      x_65 = t;
    t = not_null(f_3);
    t = xtc_conf_input_0_0(t);
    if(((w_65 != NULL) && (w_65 != t)))
      _fail(t);
    else
      w_65 = t;
    if(((u_65 != NULL) && (u_65 != t)))
      _fail(t);
    else
      u_65 = t;
    t = not_null(v_65);
    t = xtc_stream_to_arg_0_1(not_null(u_65), t);
    if(((r_65 != NULL) && (r_65 != t)))
      _fail(t);
    else
      r_65 = t;
    return(t);
  }
  ATerm y_65 = NULL,c_66 = NULL;
  if(((y_65 != NULL) && (y_65 != t)))
    _fail(t);
  else
    y_65 = t;
  if(match_cons(t, sym_TVarSpec_1))
    {
      if(((c_66 != NULL) && (c_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(c_66);
  if(match_cons(t, sym_Arguments_0))
    {
      t = (ATerm) ATinsert(ATempty, term_h_22);
    }
  else
    {
      if(match_cons(t, sym_Error_0))
        {
          t = d_66(not_null(y_65), t);
        }
      else
        {
          if(match_cons(t, sym_Output_0))
            {
              t = e_66(not_null(y_65), t);
            }
          else
            {
              if(!(match_cons(t, sym_Input_0)))
                _fail(t);
              t = f_66(not_null(y_65), t);
            }
        }
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm v_66 = NULL;
  if(((v_66 != NULL) && (v_66 != t)))
    _fail(t);
  else
    v_66 = t;
  return(t);
}
ATerm xtc_tor_to_args_0_2 (ATerm d_92, ATerm e_92, ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_83 = ATgetArgument(t, 0);
      if(match_cons(c_83, sym_TOr_2))
        {
          if(((i_66 != NULL) && (i_66 != ATgetArgument(c_83, 0))))
            _fail(ATgetArgument(c_83, 0));
          else
            i_66 = ATgetArgument(c_83, 0);
          if(((j_66 != NULL) && (j_66 != ATgetArgument(c_83, 1))))
            _fail(ATgetArgument(c_83, 1));
          else
            j_66 = ATgetArgument(c_83, 1);
        }
      else
        _fail(t);
      if(((k_66 != NULL) && (k_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_66), not_null(j_66));
  if(((q_66 != NULL) && (q_66 != t)))
    _fail(t);
  else
    q_66 = t;
  t = term_d_83;
  if(((p_66 != NULL) && (p_66 != t)))
    _fail(t);
  else
    p_66 = t;
  t = not_null(q_66);
  t = dbg_0_1(not_null(p_66), t);
  {
    ATerm e_83 = t;
    int f_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_66 = NULL,s_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_66), not_null(k_66));
        t = xtc_targ_thread_map_1_2(_fail, not_null(d_92), not_null(e_92), t);
        if(((s_66 != NULL) && (s_66 != t)))
          _fail(t);
        else
          s_66 = t;
        t = term_g_83;
        if(((r_66 != NULL) && (r_66 != t)))
          _fail(t);
        else
          r_66 = t;
        t = not_null(s_66);
        t = dbg_0_1(not_null(r_66), t);
        LocalPopChoice(f_83);
      }
    else
      {
        t = e_83;
        {
          ATerm t_66 = NULL,u_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_66), not_null(k_66));
          t = xtc_targ_thread_map_1_2(_fail, not_null(d_92), not_null(e_92), t);
          if(((u_66 != NULL) && (u_66 != t)))
            _fail(t);
          else
            u_66 = t;
          t = term_h_83;
          if(((t_66 != NULL) && (t_66 != t)))
            _fail(t);
          else
            t_66 = t;
          t = not_null(u_66);
          t = dbg_0_1(not_null(t_66), t);
        }
      }
  }
  t = _2_0(concat_0_0, u_11, t);
  if(match_cons(t, sym__2))
    {
      if(((m_66 != NULL) && (m_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_66 = ATgetArgument(t, 0);
      if(((n_66 != NULL) && (n_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_66), not_null(n_66));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm w_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_83 = ATgetArgument(t, 0);
      if(((ATgetType(i_83) != AT_LIST) || !(ATisEmpty(i_83))))
        _fail(t);
      if(((w_66 != NULL) && (w_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_66));
  return(t);
}
ATerm Cons_T_2_0 (ATerm g_1 (ATerm), ATerm l_1 (ATerm), ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_83 = ATgetArgument(t, 0);
      if(((ATgetType(j_83) == AT_LIST) && !(ATisEmpty(j_83))))
        {
          if(((a_67 != NULL) && (a_67 != ATgetFirst((ATermList) j_83))))
            _fail(ATgetFirst((ATermList) j_83));
          else
            a_67 = ATgetFirst((ATermList) j_83);
          if(((b_67 != NULL) && (b_67 != (ATerm) ATgetNext((ATermList) j_83))))
            _fail((ATerm) ATgetNext((ATermList) j_83));
          else
            b_67 = (ATerm) ATgetNext((ATermList) j_83);
        }
      else
        _fail(t);
      if(((x_66 != NULL) && (x_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_67 != NULL) && (e_67 != t)))
    _fail(t);
  else
    e_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_67), not_null(x_66));
  t = g_1(t);
  if(match_cons(t, sym__2))
    {
      if(((c_67 != NULL) && (c_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_67 = ATgetArgument(t, 0);
      if(((y_66 != NULL) && (y_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_67), not_null(y_66));
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_67 = ATgetArgument(t, 0);
      if(((z_66 != NULL) && (z_66 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_67)), not_null(c_67)), not_null(z_66));
  return(t);
}
ATerm thread_map_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  static ATerm f_67 (ATerm t);
  static ATerm f_67 (ATerm t)
  {
    ATerm k_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(y_130, f_67, t);
        LocalPopChoice(l_83);
      }
    else
      {
        t = k_83;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = f_67(t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm h_67 = NULL;
  if(((h_67 != NULL) && (h_67 != t)))
    _fail(t);
  else
    h_67 = t;
  return(t);
}
ATerm xtc_targ_thread_map_1_2 (ATerm s_151 (ATerm), ATerm b_92, ATerm c_92, ATerm t)
{
  static ATerm v_11 (ATerm t);
  static ATerm v_11 (ATerm t)
  {
    ATerm m_83 = t;
    int n_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_tor_to_args_0_2(not_null(b_92), not_null(c_92), t);
        LocalPopChoice(n_83);
      }
    else
      {
        t = m_83;
        {
          ATerm o_83 = t;
          int p_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm w_11 (ATerm t);
              static ATerm w_11 (ATerm t)
              {
                t = xtc_targ_to_args_0_2(not_null(b_92), not_null(c_92), t);
                return(t);
              }
              t = _2_0(w_11, x_11, t);
              LocalPopChoice(p_83);
            }
          else
            {
              t = o_83;
              {
                ATerm q_83 = t;
                int r_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = xtc_targ_to_args_0_0(t);
                    LocalPopChoice(r_83);
                  }
                else
                  {
                    t = q_83;
                    t = s_151(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = thread_map_1_0(v_11, t);
  return(t);
}
ATerm xtc_conf_args_0_0 (ATerm t)
{
  ATerm i_67 = NULL;
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm s_83 = ATgetArgument(t, 0);
      ATerm t_83 = ATgetArgument(t, 1);
      ATerm u_83 = ATgetArgument(t, 2);
      if(((i_67 != NULL) && (i_67 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        i_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(i_67);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL;
  if(((p_67 != NULL) && (p_67 != t)))
    _fail(t);
  else
    p_67 = t;
  t = Snd_0_0(t);
  if(((o_67 != NULL) && (o_67 != t)))
    _fail(t);
  else
    o_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_67));
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm q_67 = NULL;
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  if(((s_67 != NULL) && (s_67 != t)))
    _fail(t);
  else
    s_67 = t;
  t = Snd_0_0(t);
  if(((u_67 != NULL) && (u_67 != t)))
    _fail(t);
  else
    u_67 = t;
  t = term_v_83;
  if(((t_67 != NULL) && (t_67 != t)))
    _fail(t);
  else
    t_67 = t;
  t = not_null(u_67);
  t = err_0_1(not_null(t_67), t);
  t = not_null(s_67);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm w_83 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm x_83 = ATgetArgument(t, 0);
          if(!(match_cons(x_83, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_83;
    }
  return(t);
}
ATerm xtc_layout_to_args_1_2 (ATerm r_151 (ATerm), ATerm z_91, ATerm a_92, ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  if(((n_67 != NULL) && (n_67 != t)))
    _fail(t);
  else
    n_67 = t;
  if(((k_67 != NULL) && (k_67 != t)))
    _fail(t);
  else
    k_67 = t;
  t = not_null(n_67);
  if(((m_67 != NULL) && (m_67 != t)))
    _fail(t);
  else
    m_67 = t;
  t = not_null(a_92);
  t = xtc_conf_args_0_0(t);
  if(((l_67 != NULL) && (l_67 != t)))
    _fail(t);
  else
    l_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(l_67));
  t = xtc_targ_thread_map_1_2(y_11, not_null(z_91), not_null(a_92), t);
  t = _2_0(concat_0_0, z_11, t);
  {
    ATerm y_83 = t;
    int z_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_67 = NULL;
        if(((r_67 != NULL) && (r_67 != t)))
          _fail(t);
        else
          r_67 = t;
        t = Snd_0_0(t);
        {
          ATerm a_84 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_84;
            }
        }
        t = not_null(r_67);
        LocalPopChoice(z_83);
        t = restore_2_0(r_151, a_12, t);
      }
    else
      {
        t = y_83;
        t = Fst_0_0(t);
        t = filter_1_0(b_12, t);
      }
  }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm b_84 = t;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_TVarSpec_1))
        {
          ATerm c_84 = ATgetArgument(t, 0);
          if(!(match_cons(c_84, sym_Arguments_0)))
            _fail(t);
        }
      else
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_84;
    }
  return(t);
}
ATerm xtc_template_filter_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  if(((w_67 != NULL) && (w_67 != t)))
    _fail(t);
  else
    w_67 = t;
  if(((y_67 != NULL) && (y_67 != t)))
    _fail(t);
  else
    y_67 = t;
  t = filter_1_0(c_12, t);
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  {
    ATerm d_84 = t;
    int e_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_67 = NULL;
        if(((z_67 != NULL) && (z_67 != t)))
          _fail(t);
        else
          z_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_67), not_null(x_67));
        {
          ATerm f_84 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_84;
            }
        }
        t = not_null(z_67);
        LocalPopChoice(e_84);
        {
          ATerm a_68 = NULL,b_68 = NULL;
          if(((b_68 != NULL) && (b_68 != t)))
            _fail(t);
          else
            b_68 = t;
          t = term_g_84;
          if(((a_68 != NULL) && (a_68 != t)))
            _fail(t);
          else
            a_68 = t;
          t = not_null(b_68);
          t = err_0_1(not_null(a_68), t);
        }
      }
    else
      {
        t = d_84;
        {
          ATerm c_68 = NULL;
          if(((c_68 != NULL) && (c_68 != t)))
            _fail(t);
          else
            c_68 = t;
        }
      }
  }
  t = not_null(x_67);
  return(t);
}
ATerm xtc_template_to_args_0_2 (ATerm z_0, ATerm a_1, ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(((j_68 != NULL) && (j_68 != t)))
    _fail(t);
  else
    j_68 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((k_68 != NULL) && (k_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_68 = ATgetArgument(t, 0);
      if(((l_68 != NULL) && (l_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(k_68);
  if(match_cons(t, sym_Explicit_0))
    {
      ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
      t = not_null(l_68);
      if(match_cons(t, sym_Some_1))
        {
          if(((m_68 != NULL) && (m_68 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_68);
      if(match_cons(t, sym_Layout_1))
        {
          if(((n_68 != NULL) && (n_68 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_68);
      if(((o_68 != NULL) && (o_68 != t)))
        _fail(t);
      else
        o_68 = t;
      t = not_null(j_68);
      if(((q_68 != NULL) && (q_68 != t)))
        _fail(t);
      else
        q_68 = t;
      t = not_null(o_68);
      t = xtc_template_filter_0_0(t);
      t = xtc_layout_to_args_1_2(_fail, not_null(z_0), not_null(a_1), t);
      if(((p_68 != NULL) && (p_68 != t)))
        _fail(t);
      else
        p_68 = t;
    }
  else
    {
      ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
      if(!(match_cons(t, sym_Regular_0)))
        _fail(t);
      t = not_null(l_68);
      if(match_cons(t, sym_Some_1))
        {
          if(((m_68 != NULL) && (m_68 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_68);
      if(match_cons(t, sym_Layout_1))
        {
          if(((n_68 != NULL) && (n_68 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(n_68);
      if(((r_68 != NULL) && (r_68 != t)))
        _fail(t);
      else
        r_68 = t;
      t = not_null(j_68);
      if(((t_68 != NULL) && (t_68 != t)))
        _fail(t);
      else
        t_68 = t;
      t = not_null(r_68);
      t = xtc_layout_to_args_1_2(xtc_layout_dump_0_0, not_null(z_0), not_null(a_1), t);
      if(((s_68 != NULL) && (s_68 != t)))
        _fail(t);
      else
        s_68 = t;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm z_68 = NULL;
  if(((z_68 != NULL) && (z_68 != t)))
    _fail(t);
  else
    z_68 = t;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm a_69 = NULL;
  if(((a_69 != NULL) && (a_69 != t)))
    _fail(t);
  else
    a_69 = t;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm b_69 = NULL;
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  return(t);
}
ATerm xtc_model_to_args_0_1 (ATerm t_92, ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL;
  static ATerm g_12 (ATerm t);
  static ATerm g_12 (ATerm t)
  {
    t = not_null(x_68);
    t = xtc_template_to_args_0_2(not_null(y_68), not_null(t_92), t);
    return(t);
  }
  if(match_cons(t, sym_XtcModel_2))
    {
      if(((y_68 != NULL) && (y_68 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_68 = ATgetArgument(t, 0);
      if(((x_68 != NULL) && (x_68 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_92);
  t = XtcConf_4_0(d_12, e_12, f_12, g_12, t);
  return(t);
}
ATerm xtc_desugar_targ_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  if(((r_69 != NULL) && (r_69 != t)))
    _fail(t);
  else
    r_69 = t;
  if(match_cons(t, sym_TVarStar_4))
    {
      s_69 = ATgetArgument(t, 0);
      t_69 = ATgetArgument(t, 1);
      u_69 = ATgetArgument(t, 2);
      v_69 = ATgetArgument(t, 3);
      t = not_null(u_69);
      if(match_cons(t, sym_Some_1))
        {
          p_69 = ATgetArgument(t, 0);
          {
            ATerm w_69 = NULL,a_70 = NULL,b_70 = NULL;
            t = not_null(v_69);
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = not_null(s_69);
            if(((w_69 != NULL) && (w_69 != t)))
              _fail(t);
            else
              w_69 = t;
            t = not_null(t_69);
            if(((a_70 != NULL) && (a_70 != t)))
              _fail(t);
            else
              a_70 = t;
            t = not_null(p_69);
            if(((b_70 != NULL) && (b_70 != t)))
              _fail(t);
            else
              b_70 = t;
            t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(w_69), not_null(a_70), (ATerm)ATmakeAppl(sym_Some_1, not_null(b_70)), term_j_84);
          }
        }
      else
        {
          if(!(match_cons(t, sym_None_0)))
            _fail(t);
          t = not_null(v_69);
          if(match_cons(t, sym_Some_1))
            {
              q_69 = ATgetArgument(t, 0);
              {
                ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
                t = not_null(s_69);
                if(((c_70 != NULL) && (c_70 != t)))
                  _fail(t);
                else
                  c_70 = t;
                t = not_null(t_69);
                if(((d_70 != NULL) && (d_70 != t)))
                  _fail(t);
                else
                  d_70 = t;
                t = not_null(q_69);
                if(((e_70 != NULL) && (e_70 != t)))
                  _fail(t);
                else
                  e_70 = t;
                t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(c_70), not_null(d_70), term_m_84, (ATerm) ATmakeAppl(sym_Some_1, not_null(e_70)));
              }
            }
          else
            {
              ATerm f_70 = NULL,g_70 = NULL;
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(s_69);
              if(((f_70 != NULL) && (f_70 != t)))
                _fail(t);
              else
                f_70 = t;
              t = not_null(t_69);
              if(((g_70 != NULL) && (g_70 != t)))
                _fail(t);
              else
                g_70 = t;
              t = (ATerm) ATmakeAppl(sym_TVarStar_4, not_null(f_70), not_null(g_70), term_m_84, term_j_84);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_TVarPlus_4))
        {
          s_69 = ATgetArgument(t, 0);
          t_69 = ATgetArgument(t, 1);
          u_69 = ATgetArgument(t, 2);
          v_69 = ATgetArgument(t, 3);
          t = not_null(u_69);
          if(match_cons(t, sym_Some_1))
            {
              p_69 = ATgetArgument(t, 0);
              {
                ATerm h_70 = NULL,i_70 = NULL,l_70 = NULL;
                t = not_null(v_69);
                if(!(match_cons(t, sym_None_0)))
                  _fail(t);
                t = not_null(s_69);
                if(((h_70 != NULL) && (h_70 != t)))
                  _fail(t);
                else
                  h_70 = t;
                t = not_null(t_69);
                if(((i_70 != NULL) && (i_70 != t)))
                  _fail(t);
                else
                  i_70 = t;
                t = not_null(p_69);
                if(((l_70 != NULL) && (l_70 != t)))
                  _fail(t);
                else
                  l_70 = t;
                t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(h_70), not_null(i_70), (ATerm)ATmakeAppl(sym_Some_1, not_null(l_70)), term_j_84);
              }
            }
          else
            {
              if(!(match_cons(t, sym_None_0)))
                _fail(t);
              t = not_null(v_69);
              if(match_cons(t, sym_Some_1))
                {
                  q_69 = ATgetArgument(t, 0);
                  {
                    ATerm m_70 = NULL,q_70 = NULL,r_70 = NULL;
                    t = not_null(s_69);
                    if(((m_70 != NULL) && (m_70 != t)))
                      _fail(t);
                    else
                      m_70 = t;
                    t = not_null(t_69);
                    if(((q_70 != NULL) && (q_70 != t)))
                      _fail(t);
                    else
                      q_70 = t;
                    t = not_null(q_69);
                    if(((r_70 != NULL) && (r_70 != t)))
                      _fail(t);
                    else
                      r_70 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(m_70), not_null(q_70), term_m_84, (ATerm) ATmakeAppl(sym_Some_1, not_null(r_70)));
                  }
                }
              else
                {
                  ATerm w_70 = NULL,x_70 = NULL;
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(s_69);
                  if(((w_70 != NULL) && (w_70 != t)))
                    _fail(t);
                  else
                    w_70 = t;
                  t = not_null(t_69);
                  if(((x_70 != NULL) && (x_70 != t)))
                    _fail(t);
                  else
                    x_70 = t;
                  t = (ATerm) ATmakeAppl(sym_TVarPlus_4, not_null(w_70), not_null(x_70), term_m_84, term_j_84);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_TVarOne_4))
            {
              s_69 = ATgetArgument(t, 0);
              t_69 = ATgetArgument(t, 1);
              u_69 = ATgetArgument(t, 2);
              v_69 = ATgetArgument(t, 3);
              t = not_null(u_69);
              if(match_cons(t, sym_Some_1))
                {
                  p_69 = ATgetArgument(t, 0);
                  {
                    ATerm z_70 = NULL,a_71 = NULL,f_71 = NULL;
                    t = not_null(v_69);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(s_69);
                    if(((z_70 != NULL) && (z_70 != t)))
                      _fail(t);
                    else
                      z_70 = t;
                    t = not_null(t_69);
                    if(((a_71 != NULL) && (a_71 != t)))
                      _fail(t);
                    else
                      a_71 = t;
                    t = not_null(p_69);
                    if(((f_71 != NULL) && (f_71 != t)))
                      _fail(t);
                    else
                      f_71 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(z_70), not_null(a_71), (ATerm)ATmakeAppl(sym_Some_1, not_null(f_71)), term_j_84);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(v_69);
                  if(match_cons(t, sym_Some_1))
                    {
                      q_69 = ATgetArgument(t, 0);
                      {
                        ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
                        t = not_null(s_69);
                        if(((g_71 != NULL) && (g_71 != t)))
                          _fail(t);
                        else
                          g_71 = t;
                        t = not_null(t_69);
                        if(((h_71 != NULL) && (h_71 != t)))
                          _fail(t);
                        else
                          h_71 = t;
                        t = not_null(q_69);
                        if(((i_71 != NULL) && (i_71 != t)))
                          _fail(t);
                        else
                          i_71 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(g_71), not_null(h_71), term_m_84, (ATerm) ATmakeAppl(sym_Some_1, not_null(i_71)));
                      }
                    }
                  else
                    {
                      ATerm j_71 = NULL,k_71 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(s_69);
                      if(((j_71 != NULL) && (j_71 != t)))
                        _fail(t);
                      else
                        j_71 = t;
                      t = not_null(t_69);
                      if(((k_71 != NULL) && (k_71 != t)))
                        _fail(t);
                      else
                        k_71 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOne_4, not_null(j_71), not_null(k_71), term_m_84, term_j_84);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_TVarOpt_4))
                {
                  if(((s_69 != NULL) && (s_69 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_69 = ATgetArgument(t, 0);
                  if(((t_69 != NULL) && (t_69 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    t_69 = ATgetArgument(t, 1);
                  if(((u_69 != NULL) && (u_69 != ATgetArgument(t, 2))))
                    _fail(ATgetArgument(t, 2));
                  else
                    u_69 = ATgetArgument(t, 2);
                  if(((v_69 != NULL) && (v_69 != ATgetArgument(t, 3))))
                    _fail(ATgetArgument(t, 3));
                  else
                    v_69 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = not_null(u_69);
              if(match_cons(t, sym_Some_1))
                {
                  p_69 = ATgetArgument(t, 0);
                  {
                    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
                    t = not_null(v_69);
                    if(!(match_cons(t, sym_None_0)))
                      _fail(t);
                    t = not_null(s_69);
                    if(((l_71 != NULL) && (l_71 != t)))
                      _fail(t);
                    else
                      l_71 = t;
                    t = not_null(t_69);
                    if(((m_71 != NULL) && (m_71 != t)))
                      _fail(t);
                    else
                      m_71 = t;
                    t = not_null(p_69);
                    if(((n_71 != NULL) && (n_71 != t)))
                      _fail(t);
                    else
                      n_71 = t;
                    t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(l_71), not_null(m_71), (ATerm)ATmakeAppl(sym_Some_1, not_null(n_71)), term_j_84);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_None_0)))
                    _fail(t);
                  t = not_null(v_69);
                  if(match_cons(t, sym_Some_1))
                    {
                      q_69 = ATgetArgument(t, 0);
                      {
                        ATerm o_71 = NULL,q_71 = NULL,r_71 = NULL;
                        t = not_null(s_69);
                        if(((o_71 != NULL) && (o_71 != t)))
                          _fail(t);
                        else
                          o_71 = t;
                        t = not_null(t_69);
                        if(((q_71 != NULL) && (q_71 != t)))
                          _fail(t);
                        else
                          q_71 = t;
                        t = not_null(q_69);
                        if(((r_71 != NULL) && (r_71 != t)))
                          _fail(t);
                        else
                          r_71 = t;
                        t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(o_71), not_null(q_71), term_m_84, (ATerm) ATmakeAppl(sym_Some_1, not_null(r_71)));
                      }
                    }
                  else
                    {
                      ATerm x_71 = NULL,y_71 = NULL;
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = not_null(s_69);
                      if(((x_71 != NULL) && (x_71 != t)))
                        _fail(t);
                      else
                        x_71 = t;
                      t = not_null(t_69);
                      if(((y_71 != NULL) && (y_71 != t)))
                        _fail(t);
                      else
                        y_71 = t;
                      t = (ATerm) ATmakeAppl(sym_TVarOpt_4, not_null(x_71), not_null(y_71), term_m_84, term_j_84);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm xtc_desugar_template_0_0 (ATerm t)
{
  ATerm e_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
  if(((l_72 != NULL) && (l_72 != t)))
    _fail(t);
  else
    l_72 = t;
  if(match_cons(t, sym_Template_2))
    {
      if(((m_72 != NULL) && (m_72 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_72 = ATgetArgument(t, 0);
      if(((n_72 != NULL) && (n_72 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_72);
  if(match_cons(t, sym_Some_1))
    {
      e_72 = ATgetArgument(t, 0);
      {
        ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
        t = not_null(m_72);
        if(!(match_cons(t, sym_Implicit_0)))
          _fail(t);
        t = not_null(e_72);
        if(match_cons(t, sym_Layout_1))
          {
            if(((k_72 != NULL) && (k_72 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              k_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(k_72);
        if(((o_72 != NULL) && (o_72 != t)))
          _fail(t);
        else
          o_72 = t;
        t = not_null(l_72);
        if(((q_72 != NULL) && (q_72 != t)))
          _fail(t);
        else
          q_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), term_f_22), term_d_22), term_b_22), not_null(o_72));
        t = union_0_0(t);
        if(((p_72 != NULL) && (p_72 != t)))
          _fail(t);
        else
          p_72 = t;
        t = (ATerm) ATmakeAppl(sym_Template_2, term_a_21, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Layout_1, not_null(p_72))));
      }
    }
  else
    {
      ATerm r_72 = NULL;
      if(!(match_cons(t, sym_None_0)))
        _fail(t);
      t = not_null(m_72);
      if(((r_72 != NULL) && (r_72 != t)))
        _fail(t);
      else
        r_72 = t;
      t = (ATerm) ATmakeAppl(sym_Template_2, not_null(r_72), term_y_20);
    }
  return(t);
}
ATerm xtc_desugar_desc_0_0 (ATerm t)
{
  if(match_cons(t, sym_XtcDesc_1))
    {
      ATerm n_84 = ATgetArgument(t, 0);
      if(!(match_cons(n_84, sym_XT_0)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_21;
  return(t);
}
ATerm bottomup_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  static ATerm h_12 (ATerm t);
  static ATerm h_12 (ATerm t)
  {
    t = bottomup_1_0(a_117, t);
    return(t);
  }
  t = SRTS_all(h_12, t);
  t = a_117(t);
  return(t);
}
ATerm innermost_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  static ATerm i_12 (ATerm t);
  static ATerm i_12 (ATerm t)
  {
    static ATerm j_12 (ATerm t);
    static ATerm j_12 (ATerm t)
    {
      t = f_121(t);
      t = innermost_1_0(f_121, t);
      return(t);
    }
    t = try_1_0(j_12, t);
    return(t);
  }
  t = bottomup_1_0(i_12, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm o_84 = t;
  int p_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_desc_0_0(t);
      LocalPopChoice(p_84);
    }
  else
    {
      t = o_84;
      {
        ATerm q_84 = t;
        int r_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_desugar_template_0_0(t);
            LocalPopChoice(r_84);
          }
        else
          {
            t = q_84;
            t = xtc_desugar_targ_0_0(t);
          }
      }
    }
  return(t);
}
ATerm xtc_desugar_model_0_0 (ATerm t)
{
  t = innermost_1_0(k_12, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm t_72 = NULL;
  if(((t_72 != NULL) && (t_72 != t)))
    _fail(t);
  else
    t_72 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  static ATerm u_72 (ATerm t);
  static ATerm u_72 (ATerm t)
  {
    ATerm s_84 = t;
    int t_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_12, u_72, t);
        LocalPopChoice(t_84);
      }
    else
      {
        t = s_84;
        t = Nil_0_0(t);
        t = z_123(t);
      }
    return(t);
  }
  t = u_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_84 = t;
  int v_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(v_84);
    }
  else
    {
      t = u_84;
      {
        ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
        if(((w_72 != NULL) && (w_72 != t)))
          _fail(t);
        else
          w_72 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_72 != NULL) && (x_72 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_72 = ATgetFirst((ATermList) t);
            if(((y_72 != NULL) && (y_72 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(x_72);
        if(((z_72 != NULL) && (z_72 != t)))
          _fail(t);
        else
          z_72 = t;
        t = not_null(y_72);
        if(((a_73 != NULL) && (a_73 != t)))
          _fail(t);
        else
          a_73 = t;
        t = not_null(w_72);
        if(((c_73 != NULL) && (c_73 != t)))
          _fail(t);
        else
          c_73 = t;
        t = not_null(z_72);
        {
          static ATerm m_12 (ATerm t);
          static ATerm m_12 (ATerm t)
          {
            t = not_null(a_73);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_12, t);
        }
        if(((b_73 != NULL) && (b_73 != t)))
          _fail(t);
        else
          b_73 = t;
      }
    }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm h_77 (ATerm s_73, ATerm t_73, ATerm u_73, ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  t = not_null(s_73);
  if(((v_73 != NULL) && (v_73 != t)))
    _fail(t);
  else
    v_73 = t;
  t = not_null(t_73);
  if(((w_73 != NULL) && (w_73 != t)))
    _fail(t);
  else
    w_73 = t;
  t = not_null(u_73);
  if(((y_73 != NULL) && (y_73 != t)))
    _fail(t);
  else
    y_73 = t;
  t = not_null(v_73);
  t = is_string_0_0(t);
  t = not_null(w_73);
  {
    ATerm w_84 = t;
    int x_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(n_12, t);
        LocalPopChoice(x_84);
      }
    else
      {
        t = w_84;
        t = XtcQuery_2_0(o_12, p_12, t);
      }
  }
  {
    ATerm y_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_74 = NULL;
        if(((c_74 != NULL) && (c_74 != t)))
          _fail(t);
        else
          c_74 = t;
        t = xtc_find_0_0(t);
        if(((x_73 != NULL) && (x_73 != t)))
          _fail(t);
        else
          x_73 = t;
        t = not_null(c_74);
        LocalPopChoice(z_84);
        {
          ATerm d_74 = NULL,e_74 = NULL;
          if(((e_74 != NULL) && (e_74 != t)))
            _fail(t);
          else
            e_74 = t;
          t = term_a_85;
          if(((d_74 != NULL) && (d_74 != t)))
            _fail(t);
          else
            d_74 = t;
          t = not_null(e_74);
          t = dbg_0_1(not_null(d_74), t);
        }
      }
    else
      {
        t = y_84;
        {
          ATerm f_74 = NULL,g_74 = NULL;
          if(((g_74 != NULL) && (g_74 != t)))
            _fail(t);
          else
            g_74 = t;
          t = term_b_85;
          if(((f_74 != NULL) && (f_74 != t)))
            _fail(t);
          else
            f_74 = t;
          t = not_null(g_74);
          t = err_0_1(not_null(f_74), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(v_73)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(x_73)))));
  return(t);
}
static ATerm i_77 (ATerm h_74, ATerm i_74, ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  t = not_null(h_74);
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(i_74);
  if(((l_74 != NULL) && (l_74 != t)))
    _fail(t);
  else
    l_74 = t;
  t = not_null(j_74);
  {
    ATerm c_85 = t;
    int d_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcQuery_1_0(q_12, t);
        LocalPopChoice(d_85);
      }
    else
      {
        t = c_85;
        t = XtcQuery_2_0(r_12, s_12, t);
      }
  }
  {
    ATerm e_85 = t;
    int f_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_74 = NULL;
        if(((z_74 != NULL) && (z_74 != t)))
          _fail(t);
        else
          z_74 = t;
        t = xtc_find_0_0(t);
        if(((k_74 != NULL) && (k_74 != t)))
          _fail(t);
        else
          k_74 = t;
        t = not_null(z_74);
        LocalPopChoice(f_85);
        {
          ATerm a_75 = NULL,b_75 = NULL;
          if(((b_75 != NULL) && (b_75 != t)))
            _fail(t);
          else
            b_75 = t;
          t = term_a_85;
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
        t = e_85;
        {
          ATerm c_75 = NULL,d_75 = NULL;
          if(((d_75 != NULL) && (d_75 != t)))
            _fail(t);
          else
            d_75 = t;
          t = term_b_85;
          if(((c_75 != NULL) && (c_75 != t)))
            _fail(t);
          else
            c_75 = t;
          t = not_null(d_75);
          t = err_0_1(not_null(c_75), t);
        }
      }
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(k_74)))));
  return(t);
}
static ATerm j_77 (ATerm e_75, ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL;
  t = not_null(e_75);
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  t = not_null(e_75);
  if(((h_75 != NULL) && (h_75 != t)))
    _fail(t);
  else
    h_75 = t;
  t = not_null(f_75);
  if(match_cons(t, sym_URL_1))
    {
      if(((i_75 != NULL) && (i_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_75);
  if(((g_75 != NULL) && (g_75 != t)))
    _fail(t);
  else
    g_75 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(g_75)))));
  return(t);
}
static ATerm k_77 (ATerm j_75, ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
  t = not_null(j_75);
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  t = not_null(j_75);
  if(((m_75 != NULL) && (m_75 != t)))
    _fail(t);
  else
    m_75 = t;
  t = not_null(k_75);
  if(match_cons(t, sym_FILE_1))
    {
      if(((n_75 != NULL) && (n_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(n_75);
  if(((l_75 != NULL) && (l_75 != t)))
    _fail(t);
  else
    l_75 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(l_75)))));
  return(t);
}
static ATerm l_77 (ATerm o_75, ATerm p_75, ATerm q_75, ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  t = not_null(o_75);
  if(((r_75 != NULL) && (r_75 != t)))
    _fail(t);
  else
    r_75 = t;
  t = not_null(p_75);
  if(((s_75 != NULL) && (s_75 != t)))
    _fail(t);
  else
    s_75 = t;
  t = not_null(q_75);
  if(((y_75 != NULL) && (y_75 != t)))
    _fail(t);
  else
    y_75 = t;
  t = not_null(r_75);
  t = is_string_0_0(t);
  t = not_null(s_75);
  if(match_cons(t, sym_URL_1))
    {
      if(((z_75 != NULL) && (z_75 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(z_75);
  if(((x_75 != NULL) && (x_75 != t)))
    _fail(t);
  else
    x_75 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(r_75)), (ATerm) ATmakeAppl(sym_URL_1, (ATerm) ATmakeAppl(sym_String_1, not_null(x_75)))));
  return(t);
}
static ATerm m_77 (ATerm a_76, ATerm b_76, ATerm c_76, ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
  t = not_null(a_76);
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = not_null(b_76);
  if(((e_76 != NULL) && (e_76 != t)))
    _fail(t);
  else
    e_76 = t;
  t = not_null(c_76);
  if(((g_76 != NULL) && (g_76 != t)))
    _fail(t);
  else
    g_76 = t;
  t = not_null(d_76);
  t = is_string_0_0(t);
  t = not_null(e_76);
  if(match_cons(t, sym_FILE_1))
    {
      if(((h_76 != NULL) && (h_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(h_76);
  if(((f_76 != NULL) && (f_76 != t)))
    _fail(t);
  else
    f_76 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(d_76)), (ATerm) ATmakeAppl(sym_FILE_1, (ATerm) ATmakeAppl(sym_String_1, not_null(f_76)))));
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm z_73 = NULL;
  if(((z_73 != NULL) && (z_73 != t)))
    _fail(t);
  else
    z_73 = t;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm a_74 = NULL;
  if(((a_74 != NULL) && (a_74 != t)))
    _fail(t);
  else
    a_74 = t;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm b_74 = NULL;
  if(((b_74 != NULL) && (b_74 != t)))
    _fail(t);
  else
    b_74 = t;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm m_74 = NULL;
  if(((m_74 != NULL) && (m_74 != t)))
    _fail(t);
  else
    m_74 = t;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm n_74 = NULL;
  if(((n_74 != NULL) && (n_74 != t)))
    _fail(t);
  else
    n_74 = t;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm o_74 = NULL;
  if(((o_74 != NULL) && (o_74 != t)))
    _fail(t);
  else
    o_74 = t;
  return(t);
}
ATerm xtc_desugar_arg_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL;
  if(((j_76 != NULL) && (j_76 != t)))
    _fail(t);
  else
    j_76 = t;
  if(match_cons(t, sym_ArgOption_2))
    {
      k_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
      t = not_null(k_76);
      if(match_cons(t, sym_String_1))
        {
          i_76 = ATgetArgument(t, 0);
          {
            ATerm g_85 = t;
            int h_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_77(not_null(i_76), not_null(l_76), not_null(j_76), t);
                LocalPopChoice(h_85);
              }
            else
              {
                t = g_85;
                {
                  ATerm i_85 = t;
                  int j_85 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_77(not_null(j_76), t);
                      LocalPopChoice(j_85);
                    }
                  else
                    {
                      t = i_85;
                      {
                        ATerm k_85 = t;
                        int l_85 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = k_77(not_null(j_76), t);
                            LocalPopChoice(l_85);
                          }
                        else
                          {
                            t = k_85;
                            {
                              ATerm m_76 = NULL,n_76 = NULL;
                              t = not_null(j_76);
                              if(((m_76 != NULL) && (m_76 != t)))
                                _fail(t);
                              else
                                m_76 = t;
                              t = not_null(j_76);
                              if(((n_76 != NULL) && (n_76 != t)))
                                _fail(t);
                              else
                                n_76 = t;
                              t = not_null(m_76);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(m_76))));
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
          ATerm m_85 = t;
          int n_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_77(not_null(j_76), t);
              LocalPopChoice(n_85);
            }
          else
            {
              t = m_85;
              {
                ATerm o_85 = t;
                int p_85 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_77(not_null(j_76), t);
                    LocalPopChoice(p_85);
                  }
                else
                  {
                    t = o_85;
                    {
                      ATerm o_76 = NULL,p_76 = NULL;
                      t = not_null(j_76);
                      if(((o_76 != NULL) && (o_76 != t)))
                        _fail(t);
                      else
                        o_76 = t;
                      t = not_null(j_76);
                      if(((p_76 != NULL) && (p_76 != t)))
                        _fail(t);
                      else
                        p_76 = t;
                      t = not_null(o_76);
                      t = is_string_0_0(t);
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(o_76))));
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
          k_76 = ATgetArgument(t, 0);
          {
            ATerm q_85 = t;
            int r_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_77(not_null(k_76), not_null(j_76), t);
                LocalPopChoice(r_85);
              }
            else
              {
                t = q_85;
                {
                  ATerm s_85 = t;
                  int u_85 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_77(not_null(j_76), t);
                      LocalPopChoice(u_85);
                    }
                  else
                    {
                      t = s_85;
                      {
                        ATerm v_85 = t;
                        int w_85 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = k_77(not_null(j_76), t);
                            LocalPopChoice(w_85);
                          }
                        else
                          {
                            t = v_85;
                            {
                              ATerm q_76 = NULL,r_76 = NULL;
                              t = not_null(j_76);
                              if(((q_76 != NULL) && (q_76 != t)))
                                _fail(t);
                              else
                                q_76 = t;
                              t = not_null(j_76);
                              if(((r_76 != NULL) && (r_76 != t)))
                                _fail(t);
                              else
                                r_76 = t;
                              t = not_null(q_76);
                              t = is_string_0_0(t);
                              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(q_76))));
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
              k_76 = ATgetArgument(t, 0);
              l_76 = ATgetArgument(t, 1);
              {
                ATerm x_85 = t;
                int y_85 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_77(not_null(j_76), t);
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
                          t = k_77(not_null(j_76), t);
                          LocalPopChoice(a_86);
                        }
                      else
                        {
                          t = z_85;
                          {
                            ATerm b_86 = t;
                            int c_86 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_76 = NULL,t_76 = NULL;
                                t = not_null(j_76);
                                if(((s_76 != NULL) && (s_76 != t)))
                                  _fail(t);
                                else
                                  s_76 = t;
                                t = not_null(j_76);
                                if(((t_76 != NULL) && (t_76 != t)))
                                  _fail(t);
                                else
                                  t_76 = t;
                                t = not_null(s_76);
                                t = is_string_0_0(t);
                                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(s_76))));
                                LocalPopChoice(c_86);
                              }
                            else
                              {
                                t = b_86;
                                {
                                  ATerm d_86 = t;
                                  int e_86 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = l_77(not_null(k_76), not_null(l_76), not_null(j_76), t);
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
                                            t = m_77(not_null(k_76), not_null(l_76), not_null(j_76), t);
                                            LocalPopChoice(g_86);
                                          }
                                        else
                                          {
                                            t = f_86;
                                            {
                                              ATerm h_86 = t;
                                              int i_86 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL;
                                                  t = not_null(k_76);
                                                  if(((u_76 != NULL) && (u_76 != t)))
                                                    _fail(t);
                                                  else
                                                    u_76 = t;
                                                  t = not_null(l_76);
                                                  if(((v_76 != NULL) && (v_76 != t)))
                                                    _fail(t);
                                                  else
                                                    v_76 = t;
                                                  t = not_null(j_76);
                                                  if(((w_76 != NULL) && (w_76 != t)))
                                                    _fail(t);
                                                  else
                                                    w_76 = t;
                                                  t = not_null(u_76);
                                                  t = is_string_0_0(t);
                                                  t = not_null(v_76);
                                                  t = is_string_0_0(t);
                                                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ArgOption_2, (ATerm)ATmakeAppl(sym_String_1, not_null(u_76)), (ATerm) ATmakeAppl(sym_String_1, not_null(v_76))));
                                                  LocalPopChoice(i_86);
                                                }
                                              else
                                                {
                                                  t = h_86;
                                                  {
                                                    ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL;
                                                    t = not_null(k_76);
                                                    if(((y_76 != NULL) && (y_76 != t)))
                                                      _fail(t);
                                                    else
                                                      y_76 = t;
                                                    t = not_null(l_76);
                                                    if(((x_76 != NULL) && (x_76 != t)))
                                                      _fail(t);
                                                    else
                                                      x_76 = t;
                                                    t = not_null(j_76);
                                                    if(((a_77 != NULL) && (a_77 != t)))
                                                      _fail(t);
                                                    else
                                                      a_77 = t;
                                                    t = not_null(y_76);
                                                    t = is_string_0_0(t);
                                                    t = not_null(x_76);
                                                    {
                                                      static ATerm t_12 (ATerm t);
                                                      static ATerm t_12 (ATerm t)
                                                      {
                                                        ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL;
                                                        if(((c_77 != NULL) && (c_77 != t)))
                                                          _fail(t);
                                                        else
                                                          c_77 = t;
                                                        if(((e_77 != NULL) && (e_77 != t)))
                                                          _fail(t);
                                                        else
                                                          e_77 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_76), not_null(c_77));
                                                        t = xtc_desugar_arg_0_0(t);
                                                        if(((d_77 != NULL) && (d_77 != t)))
                                                          _fail(t);
                                                        else
                                                          d_77 = t;
                                                        return(t);
                                                      }
                                                      t = mapconcat_1_0(t_12, t);
                                                    }
                                                    if(((z_76 != NULL) && (z_76 != t)))
                                                      _fail(t);
                                                    else
                                                      z_76 = t;
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
              ATerm j_86 = t;
              int k_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_77(not_null(j_76), t);
                  LocalPopChoice(k_86);
                }
              else
                {
                  t = j_86;
                  {
                    ATerm l_86 = t;
                    int m_86 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_77(not_null(j_76), t);
                        LocalPopChoice(m_86);
                      }
                    else
                      {
                        t = l_86;
                        {
                          ATerm f_77 = NULL,g_77 = NULL;
                          t = not_null(j_76);
                          if(((f_77 != NULL) && (f_77 != t)))
                            _fail(t);
                          else
                            f_77 = t;
                          t = not_null(j_76);
                          if(((g_77 != NULL) && (g_77 != t)))
                            _fail(t);
                          else
                            g_77 = t;
                          t = not_null(f_77);
                          t = is_string_0_0(t);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Option_1, (ATerm) ATmakeAppl(sym_String_1, not_null(f_77))));
                        }
                      }
                  }
                }
            }
        }
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm n_86 = t;
  int o_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_desugar_arg_0_0(t);
      LocalPopChoice(o_86);
    }
  else
    {
      t = n_86;
      {
        ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL;
        if(((e_78 != NULL) && (e_78 != t)))
          _fail(t);
        else
          e_78 = t;
        if(((g_78 != NULL) && (g_78 != t)))
          _fail(t);
        else
          g_78 = t;
        t = not_null(e_78);
        if(((f_78 != NULL) && (f_78 != t)))
          _fail(t);
        else
          f_78 = t;
        t = (ATerm) ATinsert(ATempty, not_null(f_78));
      }
    }
  return(t);
}
ATerm xtc_desugar_args_0_0 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  static ATerm h_78 (ATerm t);
  static ATerm h_78 (ATerm t)
  {
    ATerm p_86 = t;
    int q_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_77 != NULL) && (n_77 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_77 = ATgetFirst((ATermList) t);
            {
              ATerm r_86 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(r_86) == AT_LIST) && !(ATisEmpty(r_86))))
                {
                  if(((o_77 != NULL) && (o_77 != ATgetFirst((ATermList) r_86))))
                    _fail(ATgetFirst((ATermList) r_86));
                  else
                    o_77 = ATgetFirst((ATermList) r_86);
                  if(((p_77 != NULL) && (p_77 != (ATerm) ATgetNext((ATermList) r_86))))
                    _fail((ATerm) ATgetNext((ATermList) r_86));
                  else
                    p_77 = (ATerm) ATgetNext((ATermList) r_86);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_86);
        {
          ATerm s_86 = t;
          int t_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_77 = NULL;
              if(((q_77 != NULL) && (q_77 != t)))
                _fail(t);
              else
                q_77 = t;
              t = not_null(n_77);
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              t = not_null(q_77);
              LocalPopChoice(t_86);
              {
                ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
                if(((u_77 != NULL) && (u_77 != t)))
                  _fail(t);
                else
                  u_77 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_77), not_null(o_77));
                if(((w_77 != NULL) && (w_77 != t)))
                  _fail(t);
                else
                  w_77 = t;
                t = term_u_86;
                if(((v_77 != NULL) && (v_77 != t)))
                  _fail(t);
                else
                  v_77 = t;
                t = not_null(w_77);
                t = dbg_0_1(not_null(v_77), t);
                t = xtc_desugar_arg_0_0(t);
                if(((r_77 != NULL) && (r_77 != t)))
                  _fail(t);
                else
                  r_77 = t;
                t = not_null(u_77);
                if(((t_77 != NULL) && (t_77 != t)))
                  _fail(t);
                else
                  t_77 = t;
                t = not_null(p_77);
                t = h_78(t);
                if(((s_77 != NULL) && (s_77 != t)))
                  _fail(t);
                else
                  s_77 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(s_77)), not_null(r_77));
              }
            }
          else
            {
              t = s_86;
              {
                ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
                if(((a_78 != NULL) && (a_78 != t)))
                  _fail(t);
                else
                  a_78 = t;
                t = not_null(n_77);
                {
                  ATerm v_86 = t;
                  int w_86 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = xtc_desugar_arg_0_0(t);
                      LocalPopChoice(w_86);
                    }
                  else
                    {
                      t = v_86;
                      {
                        ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
                        if(((b_78 != NULL) && (b_78 != t)))
                          _fail(t);
                        else
                          b_78 = t;
                        if(((d_78 != NULL) && (d_78 != t)))
                          _fail(t);
                        else
                          d_78 = t;
                        t = not_null(b_78);
                        if(((c_78 != NULL) && (c_78 != t)))
                          _fail(t);
                        else
                          c_78 = t;
                        t = (ATerm) ATinsert(ATempty, not_null(c_78));
                      }
                    }
                }
                if(((x_77 != NULL) && (x_77 != t)))
                  _fail(t);
                else
                  x_77 = t;
                t = not_null(a_78);
                if(((z_77 != NULL) && (z_77 != t)))
                  _fail(t);
                else
                  z_77 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(o_77)), not_null(p_77));
                t = conc_0_0(t);
                t = h_78(t);
                if(((y_77 != NULL) && (y_77 != t)))
                  _fail(t);
                else
                  y_77 = t;
                t = (ATerm) ATinsert(CheckATermList(not_null(y_77)), not_null(x_77));
              }
            }
        }
      }
    else
      {
        t = p_86;
        {
          ATerm x_86 = t;
          int y_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(u_12, h_78, t);
              LocalPopChoice(y_86);
            }
          else
            {
              t = x_86;
              t = Nil_0_0(t);
            }
        }
      }
    return(t);
  }
  t = h_78(t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm l_78 = NULL;
  if(((l_78 != NULL) && (l_78 != t)))
    _fail(t);
  else
    l_78 = t;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm m_78 = NULL;
  if(((m_78 != NULL) && (m_78 != t)))
    _fail(t);
  else
    m_78 = t;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm n_78 = NULL;
  if(((n_78 != NULL) && (n_78 != t)))
    _fail(t);
  else
    n_78 = t;
  return(t);
}
ATerm xtc_desugar_conf_0_0 (ATerm t)
{
  t = XtcConf_4_0(v_12, w_12, x_12, xtc_desugar_args_0_0, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm x_78 = NULL;
  if(((x_78 != NULL) && (x_78 != t)))
    _fail(t);
  else
    x_78 = t;
  return(t);
}
ATerm xtc_component_configure_0_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  t = _2_0(xtc_desugar_conf_0_0, y_12, t);
  if(match_cons(t, sym__2))
    {
      if(((p_78 != NULL) && (p_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_78 = ATgetArgument(t, 0);
      if(((q_78 != NULL) && (q_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = Snd_0_0(t);
  if(((w_78 != NULL) && (w_78 != t)))
    _fail(t);
  else
    w_78 = t;
  t = term_z_86;
  if(((v_78 != NULL) && (v_78 != t)))
    _fail(t);
  else
    v_78 = t;
  t = not_null(w_78);
  t = xtc_fetch_meta_0_1(not_null(v_78), t);
  t = xtc_desugar_model_0_0(t);
  if(match_cons(t, sym_XtcModel_2))
    {
      ATerm a_87 = ATgetArgument(t, 0);
      if(match_cons(a_87, sym_XtcDesc_1))
        {
          if(((r_78 != NULL) && (r_78 != ATgetArgument(a_87, 0))))
            _fail(ATgetArgument(a_87, 0));
          else
            r_78 = ATgetArgument(a_87, 0);
        }
      else
        _fail(t);
      {
        ATerm b_87 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = xtc_model_to_args_0_1(not_null(p_78), t);
  if(((s_78 != NULL) && (s_78 != t)))
    _fail(t);
  else
    s_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(r_78), not_null(s_78), not_null(q_78));
  t = xtc_prepare_0_0(t);
  if(((u_78 != NULL) && (u_78 != t)))
    _fail(t);
  else
    u_78 = t;
  if(((t_78 != NULL) && (t_78 != t)))
    _fail(t);
  else
    t_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(r_78), not_null(s_78), not_null(t_78));
  return(t);
}
ATerm mapconcat_1_0 (ATerm v_130 (ATerm), ATerm t)
{
  t = foldr_3_0(Nil_0_0, conc_0_0, v_130, t);
  return(t);
}
ATerm xtc_filter_meta_0_1 (ATerm i_80, ATerm t)
{
  static ATerm z_12 (ATerm t);
  static ATerm z_12 (ATerm t)
  {
    ATerm k_80 = NULL;
    ATerm c_87 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_81 (ATerm n_80, ATerm t);
        static ATerm q_81 (ATerm n_80, ATerm t)
        {
          ATerm o_80 = NULL,r_80 = NULL,v_80 = NULL,y_80 = NULL,c_81 = NULL,e_81 = NULL;
          t = not_null(n_80);
          if(((y_80 != NULL) && (y_80 != t)))
            _fail(t);
          else
            y_80 = t;
          t = not_null(n_80);
          if(((c_81 != NULL) && (c_81 != t)))
            _fail(t);
          else
            c_81 = t;
          t = not_null(y_80);
          if(((e_81 != NULL) && (e_81 != t)))
            _fail(t);
          else
            e_81 = t;
          t = SSL_explode_term(not_null(e_81));
          if(match_cons(t, sym__2))
            {
              if(((k_80 != NULL) && (k_80 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_80 = ATgetArgument(t, 0);
              {
                ATerm e_87 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = not_null(c_81);
          if(((v_80 != NULL) && (v_80 != t)))
            _fail(t);
          else
            v_80 = t;
          t = not_null(i_80);
          {
            ATerm f_87 = t;
            if((PushChoice() == 0))
              {
                static ATerm a_13 (ATerm t);
                static ATerm a_13 (ATerm t)
                {
                  ATerm h_81 = NULL,i_81 = NULL,l_81 = NULL;
                  if(((h_81 != NULL) && (h_81 != t)))
                    _fail(t);
                  else
                    h_81 = t;
                  if(((i_81 != NULL) && (i_81 != t)))
                    _fail(t);
                  else
                    i_81 = t;
                  t = not_null(h_81);
                  if(((l_81 != NULL) && (l_81 != t)))
                    _fail(t);
                  else
                    l_81 = t;
                  t = SSL_explode_term(not_null(l_81));
                  if(match_cons(t, sym__2))
                    {
                      if(((k_80 != NULL) && (k_80 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_80 = ATgetArgument(t, 0);
                      {
                        ATerm g_87 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(i_81);
                  return(t);
                }
                t = SRTS_one(a_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_87;
              }
          }
          t = not_null(v_80);
          if(((r_80 != NULL) && (r_80 != t)))
            _fail(t);
          else
            r_80 = t;
          if(((o_80 != NULL) && (o_80 != t)))
            _fail(t);
          else
            o_80 = t;
          t = (ATerm) ATinsert(ATempty, not_null(o_80));
          return(t);
        }
        ATerm m_81 = NULL;
        if(((m_81 != NULL) && (m_81 != t)))
          _fail(t);
        else
          m_81 = t;
        t = q_81(not_null(m_81), t);
        LocalPopChoice(d_87);
      }
    else
      {
        t = c_87;
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = mapconcat_1_0(z_12, t);
  return(t);
}
ATerm xtc_override_meta_0_1 (ATerm g_80, ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,o_91 = NULL,p_91 = NULL,r_91 = NULL,s_91 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_91 != NULL) && (l_91 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_91 = ATgetArgument(t, 0);
      if(((s_91 != NULL) && (s_91 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_91);
  t = xtc_filter_meta_0_1(not_null(g_80), t);
  if(((o_91 != NULL) && (o_91 != t)))
    _fail(t);
  else
    o_91 = t;
  if(((r_91 != NULL) && (r_91 != t)))
    _fail(t);
  else
    r_91 = t;
  if(((p_91 != NULL) && (p_91 != t)))
    _fail(t);
  else
    p_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_91), not_null(g_80));
  t = union_0_0(t);
  if(((m_91 != NULL) && (m_91 != t)))
    _fail(t);
  else
    m_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_91), not_null(m_91));
  return(t);
}
ATerm xtc_reconfigure_0_2 (ATerm i_87, ATerm j_87, ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,l_92 = NULL,m_92 = NULL,p_92 = NULL,q_92 = NULL,l_93 = NULL,m_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_87 = ATgetArgument(t, 0);
      if(match_cons(h_87, sym_XtcConf_4))
        {
          if(((u_91 != NULL) && (u_91 != ATgetArgument(h_87, 0))))
            _fail(ATgetArgument(h_87, 0));
          else
            u_91 = ATgetArgument(h_87, 0);
          if(((v_91 != NULL) && (v_91 != ATgetArgument(h_87, 1))))
            _fail(ATgetArgument(h_87, 1));
          else
            v_91 = ATgetArgument(h_87, 1);
          if(((l_92 != NULL) && (l_92 != ATgetArgument(h_87, 2))))
            _fail(ATgetArgument(h_87, 2));
          else
            l_92 = ATgetArgument(h_87, 2);
          if(((m_92 != NULL) && (m_92 != ATgetArgument(h_87, 3))))
            _fail(ATgetArgument(h_87, 3));
          else
            m_92 = ATgetArgument(h_87, 3);
        }
      else
        _fail(t);
      {
        ATerm k_87 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((m_93 != NULL) && (m_93 != t)))
    _fail(t);
  else
    m_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_87), not_null(m_92));
  t = conc_0_0(t);
  if(((p_92 != NULL) && (p_92 != t)))
    _fail(t);
  else
    p_92 = t;
  t = not_null(m_93);
  if(((l_93 != NULL) && (l_93 != t)))
    _fail(t);
  else
    l_93 = t;
  t = not_null(i_87);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((q_92 != NULL) && (q_92 != t)))
    _fail(t);
  else
    q_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_XtcConf_4, not_null(u_91), not_null(v_91), not_null(l_92), not_null(p_92)), not_null(q_92));
  return(t);
}
ATerm xtc_fetch_meta_0_0 (ATerm t)
{
  t = Snd_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm b_95 = NULL;
  if(match_cons(t, sym_Arguments_1))
    {
      if(((b_95 != NULL) && (b_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(b_95);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm c_95 = NULL;
  if(((c_95 != NULL) && (c_95 != t)))
    _fail(t);
  else
    c_95 = t;
  return(t);
}
ATerm xtc_component_inherit_0_0 (ATerm t)
{
  ATerm q_93 = NULL,t_93 = NULL,v_93 = NULL,x_93 = NULL,z_93 = NULL,b_94 = NULL,e_94 = NULL,g_94 = NULL,i_94 = NULL,k_94 = NULL,w_94 = NULL,x_94 = NULL,a_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_87 = ATgetArgument(t, 0);
      if(match_cons(l_87, sym_XtcConf_4))
        {
          ATerm m_87 = ATgetArgument(l_87, 0);
          ATerm n_87 = ATgetArgument(l_87, 1);
          ATerm o_87 = ATgetArgument(l_87, 2);
          ATerm p_87 = ATgetArgument(l_87, 3);
        }
      else
        _fail(t);
      if(((q_93 != NULL) && (q_93 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_94 != NULL) && (w_94 != t)))
    _fail(t);
  else
    w_94 = t;
  t = not_null(q_93);
  if(((a_95 != NULL) && (a_95 != t)))
    _fail(t);
  else
    a_95 = t;
  t = term_q_87;
  if(((x_94 != NULL) && (x_94 != t)))
    _fail(t);
  else
    x_94 = t;
  t = not_null(a_95);
  t = xtc_fetch_meta_0_1(not_null(x_94), t);
  if(match_cons(t, sym_XtcInherit_2))
    {
      if(((t_93 != NULL) && (t_93 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_93 = ATgetArgument(t, 0);
      {
        ATerm r_87 = ATgetArgument(t, 1);
        if(match_cons(r_87, sym_Some_1))
          {
            if(((v_93 != NULL) && (v_93 != ATgetArgument(r_87, 0))))
              _fail(ATgetArgument(r_87, 0));
            else
              v_93 = ATgetArgument(r_87, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_93);
  t = xtc_fetch_meta_0_0(t);
  {
    static ATerm b_13 (ATerm t);
    static ATerm b_13 (ATerm t)
    {
      ATerm s_87 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_XtcInherit_2))
            {
              if(((t_93 != NULL) && (t_93 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_93 = ATgetArgument(t, 0);
              {
                ATerm t_87 = ATgetArgument(t, 1);
                if(match_cons(t_87, sym_Some_1))
                  {
                    if(((v_93 != NULL) && (v_93 != ATgetArgument(t_87, 0))))
                      _fail(ATgetArgument(t_87, 0));
                    else
                      v_93 = ATgetArgument(t_87, 0);
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
          t = s_87;
        }
      return(t);
    }
    t = filter_1_0(b_13, t);
  }
  if(((x_93 != NULL) && (x_93 != t)))
    _fail(t);
  else
    x_93 = t;
  t = not_null(w_94);
  if(((g_94 != NULL) && (g_94 != t)))
    _fail(t);
  else
    g_94 = t;
  if(((k_94 != NULL) && (k_94 != t)))
    _fail(t);
  else
    k_94 = t;
  t = not_null(v_93);
  t = try_1_0(c_13, t);
  if(((i_94 != NULL) && (i_94 != t)))
    _fail(t);
  else
    i_94 = t;
  if(((e_94 != NULL) && (e_94 != t)))
    _fail(t);
  else
    e_94 = t;
  t = not_null(g_94);
  t = xtc_reconfigure_0_2(not_null(t_93), not_null(e_94), t);
  {
    static ATerm e_13 (ATerm t);
    static ATerm e_13 (ATerm t)
    {
      t = xtc_override_meta_0_1(not_null(x_93), t);
      return(t);
    }
    t = _2_0(d_13, e_13, t);
  }
  if(((b_94 != NULL) && (b_94 != t)))
    _fail(t);
  else
    b_94 = t;
  t = term_u_87;
  if(((z_93 != NULL) && (z_93 != t)))
    _fail(t);
  else
    z_93 = t;
  t = not_null(b_94);
  t = dbg_0_1(not_null(z_93), t);
  t = xtc_component_configure_0_0(t);
  return(t);
}
ATerm xtc_configure_0_0 (ATerm t)
{
  ATerm v_87 = t;
  int w_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_component_inherit_0_0(t);
      LocalPopChoice(w_87);
    }
  else
    {
      t = v_87;
      t = xtc_component_configure_0_0(t);
    }
  return(t);
}
ATerm XtcContract_3_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,n_95 = NULL,o_95 = NULL,f_13 = NULL,k_18 = NULL;
  if(((n_95 != NULL) && (n_95 != t)))
    _fail(t);
  else
    n_95 = t;
  if(match_cons(t, sym_XtcContract_3))
    {
      if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_95 = ATgetArgument(t, 0);
      if(((f_95 != NULL) && (f_95 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_95 = ATgetArgument(t, 1);
      if(((g_95 != NULL) && (g_95 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((o_95 != NULL) && (o_95 != t)))
    _fail(t);
  else
    o_95 = t;
  t = SSLgetAnnotations(not_null(n_95));
  if(((d_95 != NULL) && (d_95 != t)))
    _fail(t);
  else
    d_95 = t;
  t = not_null(e_95);
  t = m_109(t);
  if(((h_95 != NULL) && (h_95 != t)))
    _fail(t);
  else
    h_95 = t;
  t = not_null(f_95);
  t = n_109(t);
  if(((i_95 != NULL) && (i_95 != t)))
    _fail(t);
  else
    i_95 = t;
  t = not_null(g_95);
  t = o_109(t);
  if(((j_95 != NULL) && (j_95 != t)))
    _fail(t);
  else
    j_95 = t;
  if(((l_95 != NULL) && (l_95 != t)))
    _fail(t);
  else
    l_95 = t;
  if(((k_18 != NULL) && (k_18 != t)))
    _fail(t);
  else
    k_18 = t;
  t = (ATerm) ATmakeAppl(sym_XtcContract_3, not_null(h_95), not_null(i_95), not_null(j_95));
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = SSLsetAnnotations(not_null(f_13), not_null(d_95));
  if(((k_95 != NULL) && (k_95 != t)))
    _fail(t);
  else
    k_95 = t;
  return(t);
}
ATerm xtc_fetch_meta_0_1 (ATerm j_81, ATerm t)
{
  ATerm p_95 = NULL;
  if(((p_95 != NULL) && (p_95 != t)))
    _fail(t);
  else
    p_95 = t;
  t = not_null(j_81);
  t = is_string_0_0(t);
  t = not_null(p_95);
  {
    static ATerm g_13 (ATerm t);
    static ATerm g_13 (ATerm t)
    {
      ATerm q_95 = NULL,u_95 = NULL,v_95 = NULL;
      if(((q_95 != NULL) && (q_95 != t)))
        _fail(t);
      else
        q_95 = t;
      if(((u_95 != NULL) && (u_95 != t)))
        _fail(t);
      else
        u_95 = t;
      t = not_null(q_95);
      if(((v_95 != NULL) && (v_95 != t)))
        _fail(t);
      else
        v_95 = t;
      t = SSL_explode_term(not_null(v_95));
      if(match_cons(t, sym__2))
        {
          if(((j_81 != NULL) && (j_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_81 = ATgetArgument(t, 0);
          {
            ATerm x_87 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(u_95);
      return(t);
    }
    t = collect_all_1_0(g_13, t);
  }
  t = Hd_0_0(t);
  return(t);
}
ATerm xtc_fetch_contracts_0_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL;
  if(((y_95 != NULL) && (y_95 != t)))
    _fail(t);
  else
    y_95 = t;
  t = term_y_87;
  if(((x_95 != NULL) && (x_95 != t)))
    _fail(t);
  else
    x_95 = t;
  t = not_null(y_95);
  t = xtc_fetch_meta_0_1(not_null(x_95), t);
  if(match_cons(t, sym_XtcContracts_1))
    {
      if(((w_95 != NULL) && (w_95 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(w_95);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm i_96 = NULL;
  if(((i_96 != NULL) && (i_96 != t)))
    _fail(t);
  else
    i_96 = t;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm j_96 = NULL;
  if(((j_96 != NULL) && (j_96 != t)))
    _fail(t);
  else
    j_96 = t;
  return(t);
}
ATerm xtc_fetch_contracts_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL;
  t = xtc_fetch_contracts_0_0(t);
  {
    static ATerm h_13 (ATerm t);
    static ATerm h_13 (ATerm t)
    {
      static ATerm i_13 (ATerm t);
      static ATerm i_13 (ATerm t)
      {
        ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
        if(((d_96 != NULL) && (d_96 != t)))
          _fail(t);
        else
          d_96 = t;
        if(((h_96 != NULL) && (h_96 != t)))
          _fail(t);
        else
          h_96 = t;
        if(((e_96 != NULL) && (e_96 != t)))
          _fail(t);
        else
          e_96 = t;
        t = not_null(h_96);
        if(((g_96 != NULL) && (g_96 != t)))
          _fail(t);
        else
          g_96 = t;
        t = term_c_88;
        t = t_151(t);
        if(((f_96 != NULL) && (f_96 != t)))
          _fail(t);
        else
          f_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_96), not_null(f_96));
        t = eq_0_0(t);
        t = not_null(d_96);
        return(t);
      }
      t = XtcContract_3_0(i_13, j_13, k_13, t);
      return(t);
    }
    t = filter_1_0(h_13, t);
  }
  if(((c_96 != NULL) && (c_96 != t)))
    _fail(t);
  else
    c_96 = t;
  t = term_y_87;
  if(((b_96 != NULL) && (b_96 != t)))
    _fail(t);
  else
    b_96 = t;
  t = not_null(c_96);
  t = dbg_0_1(not_null(b_96), t);
  return(t);
}
ATerm warn_0_1 (ATerm a_79, ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
  if(((s_96 != NULL) && (s_96 != t)))
    _fail(t);
  else
    s_96 = t;
  t = term_d_88;
  if(((n_96 != NULL) && (n_96 != t)))
    _fail(t);
  else
    n_96 = t;
  t = not_null(s_96);
  if(((p_96 != NULL) && (p_96 != t)))
    _fail(t);
  else
    p_96 = t;
  if(((r_96 != NULL) && (r_96 != t)))
    _fail(t);
  else
    r_96 = t;
  if(((q_96 != NULL) && (q_96 != t)))
    _fail(t);
  else
    q_96 = t;
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = not_null(p_96);
  t = log_0_3(not_null(n_96), not_null(a_79), not_null(o_96), t);
  return(t);
}
ATerm xtc_enforce_contract_0_0 (ATerm t)
{
  ATerm e_88 = t;
  int f_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_96 = NULL;
      if(((t_96 != NULL) && (t_96 != t)))
        _fail(t);
      else
        t_96 = t;
      t = term_g_88;
      t = get_config_0_0(t);
      t = not_null(t_96);
      LocalPopChoice(f_88);
      {
        ATerm u_96 = NULL,v_96 = NULL;
        if(((v_96 != NULL) && (v_96 != t)))
          _fail(t);
        else
          v_96 = t;
        t = term_h_88;
        if(((u_96 != NULL) && (u_96 != t)))
          _fail(t);
        else
          u_96 = t;
        t = not_null(v_96);
        t = err_0_1(not_null(u_96), t);
        _fail(t);
      }
    }
  else
    {
      t = e_88;
      {
        ATerm w_96 = NULL,x_96 = NULL;
        if(((x_96 != NULL) && (x_96 != t)))
          _fail(t);
        else
          x_96 = t;
        t = term_i_88;
        if(((w_96 != NULL) && (w_96 != t)))
          _fail(t);
        else
          w_96 = t;
        t = not_null(x_96);
        t = warn_0_1(not_null(w_96), t);
      }
    }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  ATerm j_88 = t;
  int k_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_115(t);
      t = w_115(t);
      LocalPopChoice(k_88);
    }
  else
    {
      t = j_88;
      t = w_115(t);
      _fail(t);
    }
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  if(((a_97 != NULL) && (a_97 != t)))
    _fail(t);
  else
    a_97 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_96 != NULL) && (y_96 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_96 = ATgetArgument(t, 0);
      if(((z_96 != NULL) && (z_96 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(y_96), t);
  t = hashtable_remove_0_1(not_null(z_96), t);
  t = not_null(a_97);
  return(t);
}
ATerm rm_config_0_0 (ATerm t)
{
  ATerm b_97 = NULL;
  if(((b_97 != NULL) && (b_97 != t)))
    _fail(t);
  else
    b_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, not_null(b_97));
  t = table_remove_0_0(t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm e_97 = NULL;
  if(((e_97 != NULL) && (e_97 != t)))
    _fail(t);
  else
    e_97 = t;
  t = term_m_88;
  t = set_config_0_0(t);
  t = not_null(e_97);
  return(t);
}
ATerm xtc_cc_disable_1_0 (ATerm x_151 (ATerm), ATerm t)
{
  ATerm n_88 = t;
  int o_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_97 = NULL;
      if(((c_97 != NULL) && (c_97 != t)))
        _fail(t);
      else
        c_97 = t;
      t = term_l_88;
      t = get_config_0_0(t);
      t = not_null(c_97);
      LocalPopChoice(o_88);
      {
        ATerm d_97 = NULL;
        if(((d_97 != NULL) && (d_97 != t)))
          _fail(t);
        else
          d_97 = t;
        t = term_l_88;
        t = rm_config_0_0(t);
        t = not_null(d_97);
        t = restore_always_2_0(x_151, l_13, t);
      }
    }
  else
    {
      t = n_88;
      t = x_151(t);
    }
  return(t);
}
ATerm some_or_empty_0_0 (ATerm t)
{
  ATerm p_88 = t;
  int q_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL;
      if(((g_97 != NULL) && (g_97 != t)))
        _fail(t);
      else
        g_97 = t;
      if(match_cons(t, sym_Some_1))
        {
          if(((h_97 != NULL) && (h_97 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(h_97);
      if(((i_97 != NULL) && (i_97 != t)))
        _fail(t);
      else
        i_97 = t;
      LocalPopChoice(q_88);
    }
  else
    {
      t = p_88;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm xtc_cc_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  static ATerm c_99 (ATerm q_97, ATerm r_97, ATerm s_97, ATerm t_97, ATerm t);
  static ATerm d_99 (ATerm f_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm j_98, ATerm t);
  static ATerm c_99 (ATerm q_97, ATerm r_97, ATerm s_97, ATerm t_97, ATerm t)
  {
    ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
    t = not_null(q_97);
    if(((w_97 != NULL) && (w_97 != t)))
      _fail(t);
    else
      w_97 = t;
    t = not_null(r_97);
    if(((y_97 != NULL) && (y_97 != t)))
      _fail(t);
    else
      y_97 = t;
    t = not_null(s_97);
    if(((u_97 != NULL) && (u_97 != t)))
      _fail(t);
    else
      u_97 = t;
    t = not_null(t_97);
    t = Fst_0_0(t);
    t = x_0(t);
    if(((v_97 != NULL) && (v_97 != t)))
      _fail(t);
    else
      v_97 = t;
    t = not_null(u_97);
    t = some_or_empty_0_0(t);
    {
      ATerm r_88 = t;
      int s_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
          if(((z_97 != NULL) && (z_97 != t)))
            _fail(t);
          else
            z_97 = t;
          if(match_cons(t, sym_Arguments_1))
            {
              if(((a_98 != NULL) && (a_98 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(a_98);
          if(((b_98 != NULL) && (b_98 != t)))
            _fail(t);
          else
            b_98 = t;
          LocalPopChoice(s_88);
        }
      else
        {
          t = r_88;
          t = Nil_0_0(t);
        }
    }
    if(((x_97 != NULL) && (x_97 != t)))
      _fail(t);
    else
      x_97 = t;
    {
      ATerm t_88 = t;
      int u_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
          static ATerm m_13 (ATerm t);
          static ATerm m_13 (ATerm t)
          {
            t = xtc_dispatch_0_1(not_null(y_97), t);
            return(t);
          }
          if(((c_98 != NULL) && (c_98 != t)))
            _fail(t);
          else
            c_98 = t;
          if(((e_98 != NULL) && (e_98 != t)))
            _fail(t);
          else
            e_98 = t;
          t = not_null(c_98);
          t = xtc_new_file_0_0(t);
          if(((d_98 != NULL) && (d_98 != t)))
            _fail(t);
          else
            d_98 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(v_97), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_98))), not_null(w_97), not_null(x_97));
          t = xtc_cc_disable_1_0(m_13, t);
          LocalPopChoice(u_88);
        }
      else
        {
          t = t_88;
          t = xtc_enforce_contract_0_0(t);
        }
    }
    return(t);
  }
  static ATerm d_99 (ATerm f_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm j_98, ATerm t)
  {
    ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
    t = not_null(f_98);
    if(((l_98 != NULL) && (l_98 != t)))
      _fail(t);
    else
      l_98 = t;
    t = not_null(g_98);
    if(((m_98 != NULL) && (m_98 != t)))
      _fail(t);
    else
      m_98 = t;
    t = not_null(h_98);
    if(((n_98 != NULL) && (n_98 != t)))
      _fail(t);
    else
      n_98 = t;
    t = not_null(i_98);
    if(((k_98 != NULL) && (k_98 != t)))
      _fail(t);
    else
      k_98 = t;
    t = not_null(j_98);
    if(((o_98 != NULL) && (o_98 != t)))
      _fail(t);
    else
      o_98 = t;
    {
      ATerm v_88 = t;
      int w_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(k_98);
          t = xtc_fetch_contracts_1_0(x_0, t);
          LocalPopChoice(w_88);
          {
            static ATerm n_13 (ATerm t);
            static ATerm n_13 (ATerm t)
            {
              ATerm p_98 = NULL,q_98 = NULL;
              if(((q_98 != NULL) && (q_98 != t)))
                _fail(t);
              else
                q_98 = t;
              if(((p_98 != NULL) && (p_98 != t)))
                _fail(t);
              else
                p_98 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__3, not_null(l_98), not_null(m_98), not_null(n_98)), not_null(p_98));
              t = xtc_cc_1_0(x_0, t);
              return(t);
            }
            t = map_1_0(n_13, t);
          }
        }
      else
        {
          t = v_88;
          {
            ATerm r_98 = NULL;
            if(((r_98 != NULL) && (r_98 != t)))
              _fail(t);
            else
              r_98 = t;
          }
        }
    }
    t = not_null(o_98);
    return(t);
  }
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL;
  if(((v_98 != NULL) && (v_98 != t)))
    _fail(t);
  else
    v_98 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_98 != NULL) && (w_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_98 = ATgetArgument(t, 0);
      if(((b_99 != NULL) && (b_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_98);
  if(match_cons(t, sym__3))
    {
      x_98 = ATgetArgument(t, 0);
      y_98 = ATgetArgument(t, 1);
      z_98 = ATgetArgument(t, 2);
      t = not_null(b_99);
      if(match_cons(t, sym_XtcContract_3))
        {
          if(((s_98 != NULL) && (s_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_98 = ATgetArgument(t, 0);
          if(((t_98 != NULL) && (t_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_98 = ATgetArgument(t, 1);
          if(((u_98 != NULL) && (u_98 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_99(not_null(z_98), not_null(t_98), not_null(u_98), not_null(v_98), t);
    }
  else
    {
      if(match_cons(t, sym_XtcConf_4))
        {
          if(((x_98 != NULL) && (x_98 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_98 = ATgetArgument(t, 0);
          if(((y_98 != NULL) && (y_98 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_98 = ATgetArgument(t, 1);
          if(((z_98 != NULL) && (z_98 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            z_98 = ATgetArgument(t, 2);
          if(((a_99 != NULL) && (a_99 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            a_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_99(not_null(x_98), not_null(y_98), not_null(z_98), not_null(b_99), not_null(v_98), t);
    }
  return(t);
}
ATerm xtc_check_contract_0_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
  if(((e_99 != NULL) && (e_99 != t)))
    _fail(t);
  else
    e_99 = t;
  t = term_l_88;
  t = get_config_0_0(t);
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  t = term_x_88;
  if(((f_99 != NULL) && (f_99 != t)))
    _fail(t);
  else
    f_99 = t;
  t = not_null(g_99);
  t = notice_0_1(not_null(f_99), t);
  t = not_null(e_99);
  return(t);
}
ATerm xtc_cc_wrap_1_0 (ATerm u_151 (ATerm), ATerm t)
{
  ATerm h_99 = NULL;
  ATerm y_88 = t;
  int z_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_99 = NULL;
      if(((i_99 != NULL) && (i_99 != t)))
        _fail(t);
      else
        i_99 = t;
      t = xtc_check_contract_0_0(t);
      t = not_null(i_99);
      LocalPopChoice(z_88);
      {
        ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL;
        if(((n_99 != NULL) && (n_99 != t)))
          _fail(t);
        else
          n_99 = t;
        t = term_a_89;
        if(((m_99 != NULL) && (m_99 != t)))
          _fail(t);
        else
          m_99 = t;
        t = not_null(n_99);
        t = dbg_0_1(not_null(m_99), t);
        t = xtc_cc_1_0(Fst_0_0, t);
        if(((l_99 != NULL) && (l_99 != t)))
          _fail(t);
        else
          l_99 = t;
        t = u_151(t);
        if(((h_99 != NULL) && (h_99 != t)))
          _fail(t);
        else
          h_99 = t;
        t = not_null(l_99);
        t = xtc_cc_1_0(Snd_0_0, t);
        t = not_null(h_99);
        if(((k_99 != NULL) && (k_99 != t)))
          _fail(t);
        else
          k_99 = t;
        t = term_b_89;
        if(((j_99 != NULL) && (j_99 != t)))
          _fail(t);
        else
          j_99 = t;
        t = not_null(k_99);
        t = dbg_0_1(not_null(j_99), t);
      }
    }
  else
    {
      t = y_88;
      t = u_151(t);
    }
  return(t);
}
ATerm xtc_import_ref_remote_0_0 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_99 != NULL) && (p_99 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_99 = ATgetArgument(t, 0);
      if(((o_99 != NULL) && (o_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_99 != NULL) && (r_99 != t)))
    _fail(t);
  else
    r_99 = t;
  if(((s_99 != NULL) && (s_99 != t)))
    _fail(t);
  else
    s_99 = t;
  t = not_null(p_99);
  {
    ATerm c_89 = t;
    if((PushChoice() == 0))
      {
        t = file_exists_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_89;
      }
  }
  t = not_null(s_99);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm d_89 = ATgetArgument(t, 0);
      if(((q_99 != NULL) && (q_99 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_99), not_null(q_99));
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL;
  t = term_k_37;
  t = table_getlist_0_0(t);
  {
    ATerm e_89 = t;
    int f_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SRTS_one(xtc_import_ref_local_0_0, t);
        LocalPopChoice(f_89);
      }
    else
      {
        t = e_89;
        t = SRTS_one(xtc_import_ref_remote_0_0, t);
      }
  }
  if(((u_99 != NULL) && (u_99 != t)))
    _fail(t);
  else
    u_99 = t;
  if(((t_99 != NULL) && (t_99 != t)))
    _fail(t);
  else
    t_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_37, not_null(t_99));
  t = table_putlist_0_0(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm b_100 = NULL;
  if(((b_100 != NULL) && (b_100 != t)))
    _fail(t);
  else
    b_100 = t;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm c_100 = NULL;
  if(((c_100 != NULL) && (c_100 != t)))
    _fail(t);
  else
    c_100 = t;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm d_100 = NULL;
  if(((d_100 != NULL) && (d_100 != t)))
    _fail(t);
  else
    d_100 = t;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm e_100 = NULL;
  if(((e_100 != NULL) && (e_100 != t)))
    _fail(t);
  else
    e_100 = t;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm f_100 = NULL;
  if(((f_100 != NULL) && (f_100 != t)))
    _fail(t);
  else
    f_100 = t;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm g_100 = NULL;
  if(((g_100 != NULL) && (g_100 != t)))
    _fail(t);
  else
    g_100 = t;
  return(t);
}
ATerm xtc_find_reg_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm g_89 = t;
  int h_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_89 = t;
      if((PushChoice() == 0))
        {
          ATerm j_89 = t;
          int k_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(o_13, t);
              LocalPopChoice(k_89);
            }
          else
            {
              t = j_89;
              t = XtcQuery_2_0(p_13, q_13, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_89;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_1_0(w_0, t);
      LocalPopChoice(h_89);
    }
  else
    {
      t = g_89;
      {
        ATerm l_89 = t;
        int m_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(r_13, t);
            LocalPopChoice(m_89);
          }
        else
          {
            t = l_89;
            t = XtcQuery_2_0(s_13, t_13, t);
          }
      }
      {
        ATerm n_89 = t;
        int o_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(w_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(o_89);
          }
        else
          {
            t = n_89;
            {
              ATerm h_100 = NULL,i_100 = NULL;
              if(((h_100 != NULL) && (h_100 != t)))
                _fail(t);
              else
                h_100 = t;
              if(((i_100 != NULL) && (i_100 != t)))
                _fail(t);
              else
                i_100 = t;
              t = not_null(h_100);
              t = xtc_import_0_0(t);
              t = not_null(i_100);
              t = xtc_find_reg_1_0(w_0, t);
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
ATerm restore_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t)
{
  ATerm p_89 = t;
  int q_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_115(t);
      LocalPopChoice(q_89);
    }
  else
    {
      t = p_89;
      t = u_115(t);
      _fail(t);
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL;
  if(((k_100 != NULL) && (k_100 != t)))
    _fail(t);
  else
    k_100 = t;
  t = term_r_89;
  if(((j_100 != NULL) && (j_100 != t)))
    _fail(t);
  else
    j_100 = t;
  t = not_null(k_100);
  t = err_0_1(not_null(j_100), t);
  return(t);
}
ATerm xtc_dispatch_find_reg_0_0 (ATerm t)
{
  t = restore_2_0(xtc_find_reg_0_0, u_13, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = xtc_configure_0_0(t);
  t = xtc_execute_0_0(t);
  return(t);
}
ATerm xtc_dispatch_0_1 (ATerm t_85, ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL;
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  t = term_s_89;
  if(((q_100 != NULL) && (q_100 != t)))
    _fail(t);
  else
    q_100 = t;
  t = not_null(r_100);
  t = dbg_0_1(not_null(q_100), t);
  if(match_cons(t, sym_XtcConf_4))
    {
      ATerm t_89 = ATgetArgument(t, 0);
      ATerm u_89 = ATgetArgument(t, 1);
      if(match_cons(u_89, sym_Some_1))
        {
          if(((l_100 != NULL) && (l_100 != ATgetArgument(u_89, 0))))
            _fail(ATgetArgument(u_89, 0));
          else
            l_100 = ATgetArgument(u_89, 0);
        }
      else
        _fail(t);
      {
        ATerm v_89 = ATgetArgument(t, 2);
      }
      {
        ATerm w_89 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((p_100 != NULL) && (p_100 != t)))
    _fail(t);
  else
    p_100 = t;
  if(((m_100 != NULL) && (m_100 != t)))
    _fail(t);
  else
    m_100 = t;
  t = not_null(p_100);
  if(((o_100 != NULL) && (o_100 != t)))
    _fail(t);
  else
    o_100 = t;
  t = not_null(t_85);
  t = xtc_dispatch_find_reg_0_0(t);
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_100), not_null(n_100));
  t = xtc_cc_wrap_1_0(v_13, t);
  t = not_null(l_100);
  return(t);
}
ATerm Some_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,a_101 = NULL,w_13 = NULL,l_18 = NULL;
  if(((x_100 != NULL) && (x_100 != t)))
    _fail(t);
  else
    x_100 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((t_100 != NULL) && (t_100 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((a_101 != NULL) && (a_101 != t)))
    _fail(t);
  else
    a_101 = t;
  t = SSLgetAnnotations(not_null(x_100));
  if(((s_100 != NULL) && (s_100 != t)))
    _fail(t);
  else
    s_100 = t;
  t = not_null(t_100);
  t = r_107(t);
  if(((u_100 != NULL) && (u_100 != t)))
    _fail(t);
  else
    u_100 = t;
  if(((w_100 != NULL) && (w_100 != t)))
    _fail(t);
  else
    w_100 = t;
  if(((l_18 != NULL) && (l_18 != t)))
    _fail(t);
  else
    l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(u_100));
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = SSLsetAnnotations(not_null(w_13), not_null(s_100));
  if(((v_100 != NULL) && (v_100 != t)))
    _fail(t);
  else
    v_100 = t;
  return(t);
}
ATerm option_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm x_89 = t;
  int y_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = None_0_0(t);
      LocalPopChoice(y_89);
    }
  else
    {
      t = x_89;
      t = Some_1_0(t_132, t);
    }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm b_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_89 = ATgetFirst((ATermList) t);
      if(((b_101 != NULL) && (b_101 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(b_101);
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm c_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((c_101 != NULL) && (c_101 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        c_101 = ATgetFirst((ATermList) t);
      {
        ATerm a_90 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_90) != AT_LIST) || !(ATisEmpty(a_90))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(c_101);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_90 = t;
  int c_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      LocalPopChoice(c_90);
    }
  else
    {
      t = b_90;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm h_101 = NULL;
  if(((h_101 != NULL) && (h_101 != t)))
    _fail(t);
  else
    h_101 = t;
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  static ATerm i_101 (ATerm t);
  static ATerm i_101 (ATerm t)
  {
    ATerm d_90 = t;
    int e_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_124(t);
        LocalPopChoice(e_90);
      }
    else
      {
        t = d_90;
        t = Cons_2_0(x_13, i_101, t);
      }
    return(t);
  }
  t = i_101(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm o_101 = NULL;
  if(((o_101 != NULL) && (o_101 != t)))
    _fail(t);
  else
    o_101 = t;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm p_101 = NULL;
  if(((p_101 != NULL) && (p_101 != t)))
    _fail(t);
  else
    p_101 = t;
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_123 (ATerm), ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL;
  static ATerm y_13 (ATerm t);
  static ATerm y_13 (ATerm t)
  {
    t = Cons_2_0(v_123, z_13, t);
    {
      static ATerm b_14 (ATerm t);
      static ATerm b_14 (ATerm t)
      {
        if(((l_101 != NULL) && (l_101 != t)))
          _fail(t);
        else
          l_101 = t;
        return(t);
      }
      t = Cons_2_0(a_14, b_14, t);
    }
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(y_13, t);
  if(((n_101 != NULL) && (n_101 != t)))
    _fail(t);
  else
    n_101 = t;
  if(((m_101 != NULL) && (m_101 != t)))
    _fail(t);
  else
    m_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_101), not_null(l_101));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  ATerm f_90 = t;
  int g_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(i_133, t);
      LocalPopChoice(g_90);
    }
  else
    {
      t = f_90;
      {
        ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
        if(((u_101 != NULL) && (u_101 != t)))
          _fail(t);
        else
          u_101 = t;
        if(((w_101 != NULL) && (w_101 != t)))
          _fail(t);
        else
          w_101 = t;
        t = not_null(u_101);
        if(((v_101 != NULL) && (v_101 != t)))
          _fail(t);
        else
          v_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_101), (ATerm) ATempty);
      }
    }
  if(((x_101 != NULL) && (x_101 != t)))
    _fail(t);
  else
    x_101 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_101 != NULL) && (y_101 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_101 = ATgetArgument(t, 0);
      if(((b_102 != NULL) && (b_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_101);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(b_102);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((c_102 != NULL) && (c_102 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                c_102 = ATgetFirst((ATermList) t);
              if(((d_102 != NULL) && (d_102 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                d_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(b_102);
          if(((e_102 != NULL) && (e_102 != t)))
            _fail(t);
          else
            e_102 = t;
          t = not_null(x_101);
          if(((g_102 != NULL) && (g_102 != t)))
            _fail(t);
          else
            g_102 = t;
          t = not_null(e_102);
          t = list_tokenize_1_0(i_133, t);
          if(((f_102 != NULL) && (f_102 != t)))
            _fail(t);
          else
            f_102 = t;
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_101 != NULL) && (z_101 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_101 = ATgetFirst((ATermList) t);
          if(((a_102 != NULL) && (a_102 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_102);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm h_102 = NULL;
          t = not_null(y_101);
          if(((h_102 != NULL) && (h_102 != t)))
            _fail(t);
          else
            h_102 = t;
          t = (ATerm) ATinsert(ATempty, not_null(h_102));
        }
      else
        {
          ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((c_102 != NULL) && (c_102 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                c_102 = ATgetFirst((ATermList) t);
              if(((d_102 != NULL) && (d_102 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                d_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(y_101);
          if(((i_102 != NULL) && (i_102 != t)))
            _fail(t);
          else
            i_102 = t;
          t = not_null(b_102);
          if(((j_102 != NULL) && (j_102 != t)))
            _fail(t);
          else
            j_102 = t;
          t = not_null(x_101);
          if(((l_102 != NULL) && (l_102 != t)))
            _fail(t);
          else
            l_102 = t;
          t = not_null(j_102);
          t = list_tokenize_1_0(i_133, t);
          if(((k_102 != NULL) && (k_102 != t)))
            _fail(t);
          else
            k_102 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(k_102)), not_null(i_102));
        }
    }
  return(t);
}
ATerm string_tokenize_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = list_tokenize_1_0(h_133, t);
  t = map_1_0(implode_string_0_0, t);
  return(t);
}
ATerm string_tokenize_0_1 (ATerm h_46, ATerm t)
{
  static ATerm c_14 (ATerm t);
  static ATerm c_14 (ATerm t)
  {
    ATerm m_102 = NULL;
    static ATerm d_14 (ATerm t);
    static ATerm d_14 (ATerm t)
    {
      if(((m_102 != NULL) && (m_102 != t)))
        _fail(t);
      else
        m_102 = t;
      return(t);
    }
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    t = not_null(h_46);
    t = fetch_1_0(d_14, t);
    return(t);
  }
  t = string_tokenize_1_0(c_14, t);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_102 != NULL) && (n_102 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_102 = ATgetArgument(t, 0);
      if(((o_102 != NULL) && (o_102 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_102);
  t = string_tokenize_0_1(not_null(n_102), t);
  return(t);
}
ATerm base_filename_0_0 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL;
  if(((q_102 != NULL) && (q_102 != t)))
    _fail(t);
  else
    q_102 = t;
  if(((p_102 != NULL) && (p_102 != t)))
    _fail(t);
  else
    p_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_52), not_null(p_102));
  t = string_tokenize_0_0(t);
  t = last_0_0(t);
  return(t);
}
ATerm isdir_0_0 (ATerm t)
{
  ATerm r_102 = NULL;
  if(((r_102 != NULL) && (r_102 != t)))
    _fail(t);
  else
    r_102 = t;
  t = SSL_S_ISDIR(not_null(r_102));
  return(t);
}
static ATerm a_103 (ATerm t_102, ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL;
  t = not_null(t_102);
  if(((u_102 != NULL) && (u_102 != t)))
    _fail(t);
  else
    u_102 = t;
  t = SSL_filemode(not_null(u_102));
  if(match_cons(t, sym__2))
    {
      if(((v_102 != NULL) && (v_102 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_102 = ATgetArgument(t, 0);
      {
        ATerm h_90 = ATgetArgument(t, 1);
        if(((ATgetType(h_90) != AT_INT) || (ATgetInt((ATermInt) h_90) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(v_102);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm w_102 = NULL;
  if(((w_102 != NULL) && (w_102 != t)))
    _fail(t);
  else
    w_102 = t;
  {
    ATerm i_90 = t;
    int j_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_103(not_null(w_102), t);
        LocalPopChoice(j_90);
      }
    else
      {
        t = i_90;
        {
          ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL;
          t = not_null(w_102);
          if(((z_102 != NULL) && (z_102 != t)))
            _fail(t);
          else
            z_102 = t;
          t = not_null(w_102);
          if(((y_102 != NULL) && (y_102 != t)))
            _fail(t);
          else
            y_102 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_90, not_null(y_102));
          t = conc_strings_0_0(t);
          t = perror_0_0(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_103 != NULL) && (c_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_103 = ATgetArgument(t, 0);
      if(((b_103 != NULL) && (b_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_103 != NULL) && (e_103 != t)))
    _fail(t);
  else
    e_103 = t;
  {
    ATerm l_90 = t;
    int m_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_103 = NULL;
        if(((f_103 != NULL) && (f_103 != t)))
          _fail(t);
        else
          f_103 = t;
        t = not_null(b_103);
        t = file_exists_0_0(t);
        t = filemode_0_0(t);
        t = isdir_0_0(t);
        t = not_null(f_103);
        LocalPopChoice(m_90);
        {
          ATerm g_103 = NULL,h_103 = NULL;
          if(((h_103 != NULL) && (h_103 != t)))
            _fail(t);
          else
            h_103 = t;
          t = not_null(c_103);
          t = base_filename_0_0(t);
          if(((g_103 != NULL) && (g_103 != t)))
            _fail(t);
          else
            g_103 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_103)), term_n_90), not_null(b_103));
          t = concat_strings_0_0(t);
        }
      }
    else
      {
        t = l_90;
        t = not_null(b_103);
      }
  }
  if(((d_103 != NULL) && (d_103 != t)))
    _fail(t);
  else
    d_103 = t;
  t = SSL_copy(not_null(c_103), not_null(d_103));
  return(t);
}
ATerm xtc_ensure_file_0_0 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  if(((j_103 != NULL) && (j_103 != t)))
    _fail(t);
  else
    j_103 = t;
  if(match_cons(t, sym_URL_1))
    {
      k_103 = ATgetArgument(t, 0);
      t = not_null(j_103);
      t = read_from_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm l_103 = NULL,m_103 = NULL;
          t = not_null(j_103);
          if(((m_103 != NULL) && (m_103 != t)))
            _fail(t);
          else
            m_103 = t;
          t = term_v_34;
          t = xtc_new_file_0_0(t);
          if(((l_103 != NULL) && (l_103 != t)))
            _fail(t);
          else
            l_103 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_90, not_null(l_103));
          t = copy_file_0_0(t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_103));
        }
      else
        {
          if(match_cons(t, sym_FILE_1))
            {
              if(((k_103 != NULL) && (k_103 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(j_103);
        }
    }
  return(t);
}
ATerm XtcConf_4_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,e_14 = NULL,m_18 = NULL;
  if(((y_103 != NULL) && (y_103 != t)))
    _fail(t);
  else
    y_103 = t;
  if(match_cons(t, sym_XtcConf_4))
    {
      if(((o_103 != NULL) && (o_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_103 = ATgetArgument(t, 0);
      if(((p_103 != NULL) && (p_103 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_103 = ATgetArgument(t, 1);
      if(((q_103 != NULL) && (q_103 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_103 = ATgetArgument(t, 2);
      if(((r_103 != NULL) && (r_103 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        r_103 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((z_103 != NULL) && (z_103 != t)))
    _fail(t);
  else
    z_103 = t;
  t = SSLgetAnnotations(not_null(y_103));
  if(((n_103 != NULL) && (n_103 != t)))
    _fail(t);
  else
    n_103 = t;
  t = not_null(o_103);
  t = l_111(t);
  if(((s_103 != NULL) && (s_103 != t)))
    _fail(t);
  else
    s_103 = t;
  t = not_null(p_103);
  t = m_111(t);
  if(((t_103 != NULL) && (t_103 != t)))
    _fail(t);
  else
    t_103 = t;
  t = not_null(q_103);
  t = n_111(t);
  if(((u_103 != NULL) && (u_103 != t)))
    _fail(t);
  else
    u_103 = t;
  t = not_null(r_103);
  t = o_111(t);
  if(((v_103 != NULL) && (v_103 != t)))
    _fail(t);
  else
    v_103 = t;
  if(((x_103 != NULL) && (x_103 != t)))
    _fail(t);
  else
    x_103 = t;
  if(((m_18 != NULL) && (m_18 != t)))
    _fail(t);
  else
    m_18 = t;
  t = (ATerm) ATmakeAppl(sym_XtcConf_4, not_null(s_103), not_null(t_103), not_null(u_103), not_null(v_103));
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = SSLsetAnnotations(not_null(e_14), not_null(n_103));
  if(((w_103 != NULL) && (w_103 != t)))
    _fail(t);
  else
    w_103 = t;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = option_1_0(xtc_ensure_file_0_0, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = option_1_0(i_14, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = option_1_0(k_14, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = FILE_1_0(j_14, t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm g_104 = NULL;
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = FILE_1_0(l_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm h_104 = NULL;
  if(((h_104 != NULL) && (h_104 != t)))
    _fail(t);
  else
    h_104 = t;
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm p_90 = t;
  int q_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
      t = XtcConf_4_0(f_14, g_14, h_14, is_list_0_0, t);
      if(((d_104 != NULL) && (d_104 != t)))
        _fail(t);
      else
        d_104 = t;
      if(((f_104 != NULL) && (f_104 != t)))
        _fail(t);
      else
        f_104 = t;
      t = u_0(t);
      if(((e_104 != NULL) && (e_104 != t)))
        _fail(t);
      else
        e_104 = t;
      if(((c_104 != NULL) && (c_104 != t)))
        _fail(t);
      else
        c_104 = t;
      t = not_null(d_104);
      t = xtc_dispatch_0_1(not_null(c_104), t);
      LocalPopChoice(q_90);
    }
  else
    {
      t = p_90;
      {
        ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
        t = is_list_0_0(t);
        if(((i_104 != NULL) && (i_104 != t)))
          _fail(t);
        else
          i_104 = t;
        t = u_0(t);
        t = xtc_find_loc_0_0(t);
        t = file_exists_0_0(t);
        if(((k_104 != NULL) && (k_104 != t)))
          _fail(t);
        else
          k_104 = t;
        if(((j_104 != NULL) && (j_104 != t)))
          _fail(t);
        else
          j_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_104), not_null(i_104));
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
ATerm FILE_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,m_14 = NULL,n_18 = NULL;
  if(((q_104 != NULL) && (q_104 != t)))
    _fail(t);
  else
    q_104 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((m_104 != NULL) && (m_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((r_104 != NULL) && (r_104 != t)))
    _fail(t);
  else
    r_104 = t;
  t = SSLgetAnnotations(not_null(q_104));
  if(((l_104 != NULL) && (l_104 != t)))
    _fail(t);
  else
    l_104 = t;
  t = not_null(m_104);
  t = q_109(t);
  if(((n_104 != NULL) && (n_104 != t)))
    _fail(t);
  else
    n_104 = t;
  if(((p_104 != NULL) && (p_104 != t)))
    _fail(t);
  else
    p_104 = t;
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_104));
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = SSLsetAnnotations(not_null(m_14), not_null(l_104));
  if(((o_104 != NULL) && (o_104 != t)))
    _fail(t);
  else
    o_104 = t;
  return(t);
}
ATerm close_0_0 (ATerm t)
{
  ATerm s_104 = NULL;
  if(((s_104 != NULL) && (s_104 != t)))
    _fail(t);
  else
    s_104 = t;
  t = SSL_close(not_null(s_104));
  return(t);
}
ATerm assert_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_104 != NULL) && (v_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_104 = ATgetArgument(t, 0);
      if(((t_104 != NULL) && (t_104 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_104 != NULL) && (y_104 != t)))
    _fail(t);
  else
    y_104 = t;
  t = b_112(t);
  if(((u_104 != NULL) && (u_104 != t)))
    _fail(t);
  else
    u_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_104), not_null(v_104), not_null(t_104));
  t = table_push_0_0(t);
  {
    ATerm r_90 = t;
    int s_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_104), term_t_90);
        t = table_get_0_0(t);
        {
          ATerm u_90 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_90;
            }
        }
        LocalPopChoice(s_90);
      }
    else
      {
        t = r_90;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((w_104 != NULL) && (w_104 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        w_104 = ATgetFirst((ATermList) t);
      if(((x_104 != NULL) && (x_104 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        x_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(u_104), term_t_90, (ATerm) ATinsert(CheckATermList(not_null(x_104)), (ATerm) ATinsert(CheckATermList(not_null(w_104)), not_null(v_104))));
  t = table_put_0_0(t);
  t = not_null(y_104);
  return(t);
}
ATerm perror_0_0 (ATerm t)
{
  ATerm z_104 = NULL;
  if(((z_104 != NULL) && (z_104 != t)))
    _fail(t);
  else
    z_104 = t;
  t = SSL_perror(not_null(z_104));
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_105 = NULL;
  ATerm v_90 = t;
  int w_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm g_105 (ATerm c_105, ATerm t);
      static ATerm g_105 (ATerm c_105, ATerm t)
      {
        ATerm d_105 = NULL,e_105 = NULL;
        t = not_null(c_105);
        if(((e_105 != NULL) && (e_105 != t)))
          _fail(t);
        else
          e_105 = t;
        t = not_null(c_105);
        if(((d_105 != NULL) && (d_105 != t)))
          _fail(t);
        else
          d_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_105), term_x_90);
        t = conc_strings_0_0(t);
        if(((b_105 != NULL) && (b_105 != t)))
          _fail(t);
        else
          b_105 = t;
        t = SSL_mkstemp(not_null(b_105));
        return(t);
      }
      ATerm f_105 = NULL;
      if(((f_105 != NULL) && (f_105 != t)))
        _fail(t);
      else
        f_105 = t;
      t = g_105(not_null(f_105), t);
      LocalPopChoice(w_90);
    }
  else
    {
      t = v_90;
      t = term_y_90;
      t = perror_0_0(t);
      _fail(t);
    }
  return(t);
}
ATerm strcat_0_0 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_105 != NULL) && (h_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_105 = ATgetArgument(t, 0);
      if(((i_105 != NULL) && (i_105 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_strcat(not_null(h_105), not_null(i_105));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = strcat_0_0(t);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm z_90 = t;
  int a_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_91;
      t = getenv_0_0(t);
      LocalPopChoice(a_91);
    }
  else
    {
      t = z_90;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
ATerm new_temp_file_0_0 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL;
  if(((k_105 != NULL) && (k_105 != t)))
    _fail(t);
  else
    k_105 = t;
  t = temp_dir_0_0(t);
  if(((j_105 != NULL) && (j_105 != t)))
    _fail(t);
  else
    j_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_105), term_c_91);
  t = conc_strings_0_0(t);
  t = mkstemp_0_0(t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_d_91;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
  t = new_temp_file_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((m_105 != NULL) && (m_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_105 = ATgetArgument(t, 0);
      if(((l_105 != NULL) && (l_105 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_105 != NULL) && (n_105 != t)))
    _fail(t);
  else
    n_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_105), term_v_34);
  t = assert_1_0(n_14, t);
  t = not_null(l_105);
  t = close_0_0(t);
  t = not_null(m_105);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm u_105 = NULL;
  if(((u_105 != NULL) && (u_105 != t)))
    _fail(t);
  else
    u_105 = t;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm), ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL;
  if(((p_105 != NULL) && (p_105 != t)))
    _fail(t);
  else
    p_105 = t;
  if(((r_105 != NULL) && (r_105 != t)))
    _fail(t);
  else
    r_105 = t;
  t = xtc_new_file_0_0(t);
  if(((q_105 != NULL) && (q_105 != t)))
    _fail(t);
  else
    q_105 = t;
  {
    ATerm e_91 = t;
    int f_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_105 = NULL,t_105 = NULL;
        t = not_null(p_105);
        {
          ATerm g_91 = t;
          int h_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(o_14, t);
              LocalPopChoice(h_91);
            }
          else
            {
              t = g_91;
              t = stdin_0_0(t);
            }
        }
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = q_153(t);
        if(((s_105 != NULL) && (s_105 != t)))
          _fail(t);
        else
          s_105 = t;
        t = (ATerm) ATmakeAppl(sym_XtcConf_4, (ATerm)ATmakeAppl(sym_Some_1, not_null(p_105)), (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_105))), term_v_20, not_null(s_105));
        LocalPopChoice(f_91);
      }
    else
      {
        t = e_91;
        {
          ATerm v_105 = NULL,w_105 = NULL;
          t = not_null(p_105);
          t = None_0_0(t);
          if(((w_105 != NULL) && (w_105 != t)))
            _fail(t);
          else
            w_105 = t;
          t = q_153(t);
          if(((v_105 != NULL) && (v_105 != t)))
            _fail(t);
          else
            v_105 = t;
          t = (ATerm) ATmakeAppl(sym_XtcConf_4, term_v_20, (ATerm)ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_105))), term_v_20, not_null(v_105));
        }
      }
  }
  t = xtc_command_1_0(p_153, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_105));
  return(t);
}
ATerm xtc_generate_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t)
{
  t = term_v_20;
  t = xtc_transform_file_2_0(j_153, k_153, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm x_105 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_105 != NULL) && (x_105 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_105 = ATgetFirst((ATermList) t);
      {
        ATerm i_91 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(x_105);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL;
  static ATerm p_14 (ATerm t);
  static ATerm p_14 (ATerm t)
  {
    ATerm a_106 = NULL,b_106 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((a_106 != NULL) && (a_106 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_106 = ATgetArgument(t, 0);
        if(((b_106 != NULL) && (b_106 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_106 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_105), not_null(a_106), not_null(b_106));
    t = table_put_0_0(t);
    return(t);
  }
  if(match_cons(t, sym__2))
    {
      if(((z_105 != NULL) && (z_105 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_105 = ATgetArgument(t, 0);
      if(((y_105 != NULL) && (y_105 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_105);
  t = map_1_0(p_14, t);
  return(t);
}
ATerm XtcImported_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_XtcImported_0)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  if(!(match_cons(t, sym_XtcLoaded_0)))
    _fail(t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm j_91 = t;
  if((PushChoice() == 0))
    {
      t = XtcImported_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_91;
    }
  return(t);
}
ATerm xtc_import_ref_0_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_106 != NULL) && (e_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_106 = ATgetArgument(t, 0);
      if(((c_106 != NULL) && (c_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_106 != NULL) && (g_106 != t)))
    _fail(t);
  else
    g_106 = t;
  t = not_null(c_106);
  {
    ATerm k_91 = t;
    if((PushChoice() == 0))
      {
        t = SRTS_one(q_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_91;
      }
  }
  t = not_null(c_106);
  t = filter_1_0(r_14, t);
  if(((f_106 != NULL) && (f_106 != t)))
    _fail(t);
  else
    f_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_106), (ATerm) ATinsert(ATempty, term_w_35));
  t = union_0_0(t);
  if(((d_106 != NULL) && (d_106 != t)))
    _fail(t);
  else
    d_106 = t;
  t = not_null(e_106);
  if(((i_106 != NULL) && (i_106 != t)))
    _fail(t);
  else
    i_106 = t;
  if(((k_106 != NULL) && (k_106 != t)))
    _fail(t);
  else
    k_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_p_35), not_null(f_106));
  t = conc_0_0(t);
  if(((j_106 != NULL) && (j_106 != t)))
    _fail(t);
  else
    j_106 = t;
  if(((h_106 != NULL) && (h_106 != t)))
    _fail(t);
  else
    h_106 = t;
  t = not_null(i_106);
  t = xtc_load_0_1(not_null(h_106), t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_106), not_null(d_106));
  return(t);
}
ATerm xtc_import_ref_local_0_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_106 != NULL) && (m_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_106 = ATgetArgument(t, 0);
      if(((l_106 != NULL) && (l_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_106 != NULL) && (o_106 != t)))
    _fail(t);
  else
    o_106 = t;
  if(((p_106 != NULL) && (p_106 != t)))
    _fail(t);
  else
    p_106 = t;
  t = not_null(m_106);
  t = file_exists_0_0(t);
  t = not_null(p_106);
  t = xtc_import_ref_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm n_91 = ATgetArgument(t, 0);
      if(((n_106 != NULL) && (n_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_106), not_null(n_106));
  return(t);
}
ATerm xtc_import_local_0_0 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL;
  t = term_k_37;
  t = table_getlist_0_0(t);
  t = SRTS_one(xtc_import_ref_local_0_0, t);
  if(((r_106 != NULL) && (r_106 != t)))
    _fail(t);
  else
    r_106 = t;
  if(((q_106 != NULL) && (q_106 != t)))
    _fail(t);
  else
    q_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_37, not_null(q_106));
  t = table_putlist_0_0(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL;
  if(((v_106 != NULL) && (v_106 != t)))
    _fail(t);
  else
    v_106 = t;
  if(((w_106 != NULL) && (w_106 != t)))
    _fail(t);
  else
    w_106 = t;
  t = not_null(v_106);
  if(((x_106 != NULL) && (x_106 != t)))
    _fail(t);
  else
    x_106 = t;
  t = SSL_explode_term(not_null(x_106));
  if(match_cons(t, sym__2))
    {
      ATerm q_91 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_91) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_91 = ATgetArgument(t, 1);
        if(((ATgetType(t_91) == AT_LIST) && !(ATisEmpty(t_91))))
          {
            if(((s_106 != NULL) && (s_106 != ATgetFirst((ATermList) t_91))))
              _fail(ATgetFirst((ATermList) t_91));
            else
              s_106 = ATgetFirst((ATermList) t_91);
            {
              ATerm x_91 = (ATerm) ATgetNext((ATermList) t_91);
              if(((ATgetType(x_91) == AT_LIST) && !(ATisEmpty(x_91))))
                {
                  if(((u_106 != NULL) && (u_106 != ATgetFirst((ATermList) x_91))))
                    _fail(ATgetFirst((ATermList) x_91));
                  else
                    u_106 = ATgetFirst((ATermList) x_91);
                  if(((t_106 != NULL) && (t_106 != (ATerm) ATgetNext((ATermList) x_91))))
                    _fail((ATerm) ATgetNext((ATermList) x_91));
                  else
                    t_106 = (ATerm) ATgetNext((ATermList) x_91);
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
  t = not_null(u_106);
  return(t);
}
ATerm xtc_query_one_2_0 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL;
  if(((b_107 != NULL) && (b_107 != t)))
    _fail(t);
  else
    b_107 = t;
  if(((d_107 != NULL) && (d_107 != t)))
    _fail(t);
  else
    d_107 = t;
  t = not_null(b_107);
  if(((e_107 != NULL) && (e_107 != t)))
    _fail(t);
  else
    e_107 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      f_107 = ATgetArgument(t, 0);
      t = not_null(f_107);
      if(((a_107 != NULL) && (a_107 != t)))
        _fail(t);
      else
        a_107 = t;
      t = not_null(e_107);
    }
  else
    {
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((f_107 != NULL) && (f_107 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_107 = ATgetArgument(t, 0);
          if(((g_107 != NULL) && (g_107 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(f_107);
      if(((a_107 != NULL) && (a_107 != t)))
        _fail(t);
      else
        a_107 = t;
      t = not_null(g_107);
      if(((z_106 != NULL) && (z_106 != t)))
        _fail(t);
      else
        z_106 = t;
      t = not_null(e_107);
    }
  {
    ATerm y_91 = t;
    int f_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
        t = not_null(b_107);
        if(((l_107 != NULL) && (l_107 != t)))
          _fail(t);
        else
          l_107 = t;
        t = term_g_92;
        if(((k_107 != NULL) && (k_107 != t)))
          _fail(t);
        else
          k_107 = t;
        t = not_null(l_107);
        t = xtc_query_one_2_1(a_151, b_151, not_null(k_107), t);
        if(((h_107 != NULL) && (h_107 != t)))
          _fail(t);
        else
          h_107 = t;
        t = not_null(b_107);
        if(((j_107 != NULL) && (j_107 != t)))
          _fail(t);
        else
          j_107 = t;
        t = term_h_92;
        if(((i_107 != NULL) && (i_107 != t)))
          _fail(t);
        else
          i_107 = t;
        t = not_null(j_107);
        t = dbg_0_1(not_null(i_107), t);
        t = not_null(h_107);
        LocalPopChoice(f_92);
      }
    else
      {
        t = y_91;
        {
          ATerm m_107 = NULL,n_107 = NULL;
          t = not_null(a_107);
          if(((n_107 != NULL) && (n_107 != t)))
            _fail(t);
          else
            n_107 = t;
          t = term_t_37;
          if(((m_107 != NULL) && (m_107 != t)))
            _fail(t);
          else
            m_107 = t;
          t = not_null(n_107);
          t = xtc_query_one_2_1(a_151, b_151, not_null(m_107), t);
          t = xtc_cache_put_0_1(not_null(b_107), t);
        }
      }
  }
  if(((c_107 != NULL) && (c_107 != t)))
    _fail(t);
  else
    c_107 = t;
  return(t);
}
ATerm crush_3_0 (ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  if(((s_107 != NULL) && (s_107 != t)))
    _fail(t);
  else
    s_107 = t;
  if(((t_107 != NULL) && (t_107 != t)))
    _fail(t);
  else
    t_107 = t;
  t = not_null(s_107);
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  t = SSL_explode_term(not_null(u_107));
  if(match_cons(t, sym__2))
    {
      ATerm i_92 = ATgetArgument(t, 0);
      if(((o_107 != NULL) && (o_107 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_107);
  if(((q_107 != NULL) && (q_107 != t)))
    _fail(t);
  else
    q_107 = t;
  t = not_null(o_107);
  t = foldr_3_0(g_135, h_135, i_135, t);
  if(((p_107 != NULL) && (p_107 != t)))
    _fail(t);
  else
    p_107 = t;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_all_2_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  static ATerm a_108 (ATerm t);
  static ATerm a_108 (ATerm t)
  {
    ATerm j_92 = t;
    int k_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL;
        if(((v_107 != NULL) && (v_107 != t)))
          _fail(t);
        else
          v_107 = t;
        if(((z_107 != NULL) && (z_107 != t)))
          _fail(t);
        else
          z_107 = t;
        t = not_null(v_107);
        t = i_129(t);
        if(((w_107 != NULL) && (w_107 != t)))
          _fail(t);
        else
          w_107 = t;
        t = not_null(z_107);
        if(((y_107 != NULL) && (y_107 != t)))
          _fail(t);
        else
          y_107 = t;
        t = crush_3_0(s_14, j_129, a_108, t);
        if(((x_107 != NULL) && (x_107 != t)))
          _fail(t);
        else
          x_107 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(x_107)), not_null(w_107));
        LocalPopChoice(k_92);
      }
    else
      {
        t = j_92;
        t = crush_3_0(t_14, j_129, a_108, t);
      }
    return(t);
  }
  t = a_108(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  t = collect_all_2_0(h_129, union_0_0, t);
  return(t);
}
ATerm xtc_has_meta_0_1 (ATerm t_0, ATerm t)
{
  static ATerm n_108 (ATerm d_108, ATerm t);
  static ATerm o_108 (ATerm j_108, ATerm t);
  static ATerm n_108 (ATerm d_108, ATerm t)
  {
    ATerm e_108 = NULL,f_108 = NULL;
    t = not_null(d_108);
    if(((e_108 != NULL) && (e_108 != t)))
      _fail(t);
    else
      e_108 = t;
    t = not_null(d_108);
    if(((f_108 != NULL) && (f_108 != t)))
      _fail(t);
    else
      f_108 = t;
    t = not_null(t_0);
    t = is_list_0_0(t);
    {
      ATerm n_92 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_92;
        }
    }
    {
      static ATerm u_14 (ATerm t);
      static ATerm u_14 (ATerm t)
      {
        ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
        if(((h_108 != NULL) && (h_108 != t)))
          _fail(t);
        else
          h_108 = t;
        if(((i_108 != NULL) && (i_108 != t)))
          _fail(t);
        else
          i_108 = t;
        t = not_null(e_108);
        t = xtc_has_meta_0_1(not_null(h_108), t);
        t = not_null(h_108);
        return(t);
      }
      t = filter_1_0(u_14, t);
    }
    if(((t_0 != NULL) && (t_0 != t)))
      _fail(t);
    else
      t_0 = t;
    t = not_null(e_108);
    return(t);
  }
  static ATerm o_108 (ATerm j_108, ATerm t)
  {
    ATerm k_108 = NULL;
    t = not_null(j_108);
    if(((k_108 != NULL) && (k_108 != t)))
      _fail(t);
    else
      k_108 = t;
    t = not_null(j_108);
    {
      static ATerm v_14 (ATerm t);
      static ATerm v_14 (ATerm t)
      {
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        return(t);
      }
      t = collect_all_1_0(v_14, t);
    }
    {
      ATerm o_92 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_92;
        }
    }
    t = not_null(k_108);
    return(t);
  }
  ATerm l_108 = NULL;
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  {
    ATerm r_92 = t;
    int s_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_108 = NULL;
        t = not_null(l_108);
        if(((m_108 != NULL) && (m_108 != t)))
          _fail(t);
        else
          m_108 = t;
        t = not_null(t_0);
        t = Nil_0_0(t);
        t = not_null(m_108);
        LocalPopChoice(s_92);
      }
    else
      {
        t = r_92;
        {
          ATerm u_92 = t;
          int v_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_108(not_null(l_108), t);
              LocalPopChoice(v_92);
            }
          else
            {
              t = u_92;
              t = o_108(not_null(l_108), t);
            }
        }
      }
  }
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm p_108 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_108 != NULL) && (p_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_108 = ATgetArgument(t, 0);
      if(((p_108 != NULL) && (p_108 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((r_108 != NULL) && (r_108 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        r_108 = ATgetFirst((ATermList) t);
      if(((q_108 != NULL) && (q_108 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((s_108 != NULL) && (s_108 != t)))
    _fail(t);
  else
    s_108 = t;
  t = x_127(t);
  {
    static ATerm w_14 (ATerm t);
    static ATerm w_14 (ATerm t)
    {
      ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL;
      if(((t_108 != NULL) && (t_108 != t)))
        _fail(t);
      else
        t_108 = t;
      if(((v_108 != NULL) && (v_108 != t)))
        _fail(t);
      else
        v_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_108), not_null(t_108));
      t = w_127(t);
      if(((u_108 != NULL) && (u_108 != t)))
        _fail(t);
      else
        u_108 = t;
      return(t);
    }
    t = fetch_1_0(w_14, t);
  }
  t = not_null(q_108);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm b_109 = NULL;
  if(((b_109 != NULL) && (b_109 != t)))
    _fail(t);
  else
    b_109 = t;
  return(t);
}
ATerm union_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_108 != NULL) && (y_108 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_108 = ATgetArgument(t, 0);
      if(((x_108 != NULL) && (x_108 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_109 != NULL) && (a_109 != t)))
    _fail(t);
  else
    a_109 = t;
  t = not_null(y_108);
  {
    static ATerm c_109 (ATerm t);
    static ATerm c_109 (ATerm t)
    {
      ATerm w_92 = t;
      int x_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(x_108);
          LocalPopChoice(x_92);
        }
      else
        {
          t = w_92;
          {
            ATerm y_92 = t;
            int z_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm x_14 (ATerm t);
                static ATerm x_14 (ATerm t)
                {
                  t = not_null(x_108);
                  return(t);
                }
                t = HdMember_p__2_0(t_127, x_14, t);
                t = c_109(t);
                LocalPopChoice(z_92);
              }
            else
              {
                t = y_92;
                t = Cons_2_0(y_14, c_109, t);
              }
          }
        }
      return(t);
    }
    t = c_109(t);
  }
  if(((z_108 != NULL) && (z_108 != t)))
    _fail(t);
  else
    z_108 = t;
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_union_0_0 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL,p_109 = NULL,s_109 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((h_109 != NULL) && (h_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_109 = ATgetArgument(t, 0);
      if(((i_109 != NULL) && (i_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_109 = ATgetArgument(t, 1);
      if(((g_109 != NULL) && (g_109 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_109 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((j_109 != NULL) && (j_109 != t)))
    _fail(t);
  else
    j_109 = t;
  if(((l_109 != NULL) && (l_109 != t)))
    _fail(t);
  else
    l_109 = t;
  if(((s_109 != NULL) && (s_109 != t)))
    _fail(t);
  else
    s_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_109), not_null(i_109));
  {
    ATerm a_93 = t;
    int b_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        LocalPopChoice(b_93);
      }
    else
      {
        t = a_93;
        t = (ATerm) ATempty;
      }
  }
  if(((p_109 != NULL) && (p_109 != t)))
    _fail(t);
  else
    p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_109), not_null(p_109));
  t = union_0_0(t);
  if(((k_109 != NULL) && (k_109 != t)))
    _fail(t);
  else
    k_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_109), not_null(i_109), not_null(k_109));
  t = set_0_0(t);
  t = not_null(j_109);
  return(t);
}
ATerm xtc_cache_put_0_1 (ATerm k_81, ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL;
  if(((t_109 != NULL) && (t_109 != t)))
    _fail(t);
  else
    t_109 = t;
  if(((x_109 != NULL) && (x_109 != t)))
    _fail(t);
  else
    x_109 = t;
  if(((w_109 != NULL) && (w_109 != t)))
    _fail(t);
  else
    w_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_92, not_null(k_81), (ATerm) ATinsert(ATempty, not_null(w_109)));
  t = table_union_0_0(t);
  t = not_null(k_81);
  if(((v_109 != NULL) && (v_109 != t)))
    _fail(t);
  else
    v_109 = t;
  t = term_c_93;
  if(((u_109 != NULL) && (u_109 != t)))
    _fail(t);
  else
    u_109 = t;
  t = not_null(v_109);
  t = dbg_0_1(not_null(u_109), t);
  t = not_null(t_109);
  return(t);
}
ATerm MkCons_0_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_109 != NULL) && (y_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_109 = ATgetArgument(t, 0);
      if(((z_109 != NULL) && (z_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(z_109)), not_null(y_109));
  return(t);
}
ATerm foldr_3_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t)
{
  ATerm d_93 = t;
  int e_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = j_130(t);
      LocalPopChoice(e_93);
    }
  else
    {
      t = d_93;
      {
        ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL,h_110 = NULL,i_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL;
        if(((b_110 != NULL) && (b_110 != t)))
          _fail(t);
        else
          b_110 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_110 != NULL) && (c_110 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_110 = ATgetFirst((ATermList) t);
            if(((d_110 != NULL) && (d_110 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_110);
        if(((e_110 != NULL) && (e_110 != t)))
          _fail(t);
        else
          e_110 = t;
        t = not_null(d_110);
        if(((f_110 != NULL) && (f_110 != t)))
          _fail(t);
        else
          f_110 = t;
        t = not_null(b_110);
        if(((h_110 != NULL) && (h_110 != t)))
          _fail(t);
        else
          h_110 = t;
        if(((o_110 != NULL) && (o_110 != t)))
          _fail(t);
        else
          o_110 = t;
        t = not_null(e_110);
        t = l_130(t);
        if(((i_110 != NULL) && (i_110 != t)))
          _fail(t);
        else
          i_110 = t;
        t = not_null(o_110);
        if(((n_110 != NULL) && (n_110 != t)))
          _fail(t);
        else
          n_110 = t;
        t = not_null(f_110);
        t = foldr_3_0(j_130, k_130, l_130, t);
        if(((m_110 != NULL) && (m_110 != t)))
          _fail(t);
        else
          m_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_110), not_null(m_110));
        t = k_130(t);
        if(((g_110 != NULL) && (g_110 != t)))
          _fail(t);
        else
          g_110 = t;
      }
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm f_93 = t;
  int g_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(is_list_0_0, c_15, t);
      LocalPopChoice(g_93);
      t = conc_0_0(t);
    }
  else
    {
      t = f_93;
      t = MkCons_0_0(t);
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm h_93 = t;
  int i_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      LocalPopChoice(i_93);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = h_93;
      {
        ATerm s_110 = NULL;
        if(((s_110 != NULL) && (s_110 != t)))
          _fail(t);
        else
          s_110 = t;
      }
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm r_110 = NULL;
  if(((r_110 != NULL) && (r_110 != t)))
    _fail(t);
  else
    r_110 = t;
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(z_14, a_15, b_15, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_110 = NULL;
  static ATerm d_15 (ATerm t);
  static ATerm d_15 (ATerm t)
  {
    ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL;
    if(((u_110 != NULL) && (u_110 != t)))
      _fail(t);
    else
      u_110 = t;
    if(((w_110 != NULL) && (w_110 != t)))
      _fail(t);
    else
      w_110 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_110), not_null(u_110));
    t = table_get_0_0(t);
    if(((v_110 != NULL) && (v_110 != t)))
      _fail(t);
    else
      v_110 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_110), not_null(v_110));
    return(t);
  }
  if(((t_110 != NULL) && (t_110 != t)))
    _fail(t);
  else
    t_110 = t;
  t = table_keys_0_0(t);
  t = map_1_0(d_15, t);
  return(t);
}
ATerm xtc_query_all_2_1 (ATerm g_151 (ATerm), ATerm h_151 (ATerm), ATerm y_81, ATerm t)
{
  t = not_null(y_81);
  t = table_getlist_0_0(t);
  {
    static ATerm e_15 (ATerm t);
    static ATerm e_15 (ATerm t)
    {
      ATerm x_110 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm j_93 = ATgetArgument(t, 0);
          if(((x_110 != NULL) && (x_110 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_110 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_110);
      t = g_151(t);
      return(t);
    }
    t = filter_1_0(e_15, t);
  }
  t = flatten_list_0_0(t);
  t = h_151(t);
  return(t);
}
ATerm fputs_0_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_110 != NULL) && (y_110 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_110 = ATgetArgument(t, 0);
      {
        ATerm k_93 = ATgetArgument(t, 1);
        if(match_cons(k_93, sym_Stream_1))
          {
            if(((z_110 != NULL) && (z_110 != ATgetArgument(k_93, 0))))
              _fail(ATgetArgument(k_93, 0));
            else
              z_110 = ATgetArgument(k_93, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputs(not_null(y_110), not_null(z_110));
  if(((b_111 != NULL) && (b_111 != t)))
    _fail(t);
  else
    b_111 = t;
  if(((a_111 != NULL) && (a_111 != t)))
    _fail(t);
  else
    a_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_111));
  return(t);
}
ATerm log_puts_0_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  if(((f_111 != NULL) && (f_111 != t)))
    _fail(t);
  else
    f_111 = t;
  if(((c_111 != NULL) && (c_111 != t)))
    _fail(t);
  else
    c_111 = t;
  t = not_null(f_111);
  if(((e_111 != NULL) && (e_111 != t)))
    _fail(t);
  else
    e_111 = t;
  t = term_v_34;
  t = log_stream_0_0(t);
  if(((d_111 != NULL) && (d_111 != t)))
    _fail(t);
  else
    d_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_111), not_null(d_111));
  t = fputs_0_0(t);
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_93 = ATgetArgument(t, 0);
      if(match_cons(n_93, sym_Stream_1))
        {
          if(((g_111 != NULL) && (g_111 != ATgetArgument(n_93, 0))))
            _fail(ATgetArgument(n_93, 0));
          else
            g_111 = ATgetArgument(n_93, 0);
        }
      else
        _fail(t);
      if(((h_111 != NULL) && (h_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(g_111), not_null(h_111));
  if(((j_111 != NULL) && (j_111 != t)))
    _fail(t);
  else
    j_111 = t;
  if(((i_111 != NULL) && (i_111 != t)))
    _fail(t);
  else
    i_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_111));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_111 = NULL,p_111 = NULL;
  t = SSL_stderr_stream();
  if(((p_111 != NULL) && (p_111 != t)))
    _fail(t);
  else
    p_111 = t;
  if(((k_111 != NULL) && (k_111 != t)))
    _fail(t);
  else
    k_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_111));
  return(t);
}
ATerm log_stream_0_0 (ATerm t)
{
  ATerm o_93 = t;
  int p_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_93;
      t = get_config_0_0(t);
      LocalPopChoice(p_93);
    }
  else
    {
      t = o_93;
      t = term_v_34;
      t = stderr_stream_0_0(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm q_111 = NULL,r_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_111 != NULL) && (q_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_111 = ATgetArgument(t, 0);
      if(((r_111 != NULL) && (r_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(q_111), not_null(r_111));
        LocalPopChoice(u_93);
      }
    else
      {
        t = s_93;
        t = SSL_subtr(not_null(q_111), not_null(r_111));
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  static ATerm s_111 (ATerm t);
  static ATerm s_111 (ATerm t)
  {
    ATerm w_93 = t;
    int y_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_116(t);
        LocalPopChoice(y_93);
      }
    else
      {
        t = w_93;
        t = r_116(t);
        t = s_111(t);
      }
    return(t);
  }
  t = s_111(t);
  return(t);
}
ATerm for_3_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  t = t_116(t);
  t = while_not_2_0(u_116, v_116, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm t_111 = NULL,v_111 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_111 != NULL) && (t_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_111 = ATgetArgument(t, 0);
      if(((v_111 != NULL) && (v_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_111), not_null(v_111), (ATerm) ATempty);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_94 = ATgetArgument(t, 0);
      if(((ATgetType(a_94) != AT_INT) || (ATgetInt((ATermInt) a_94) != 0)))
        _fail(t);
      if(((w_111 != NULL) && (w_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_111 = ATgetArgument(t, 1);
      if(((x_111 != NULL) && (x_111 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(x_111);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((y_111 != NULL) && (y_111 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_111 = ATgetArgument(t, 0);
      if(((z_111 != NULL) && (z_111 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_111 = ATgetArgument(t, 1);
      if(((a_112 != NULL) && (a_112 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_112 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((e_112 != NULL) && (e_112 != t)))
    _fail(t);
  else
    e_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_111), term_m_41);
  t = geq_0_0(t);
  t = not_null(e_112);
  if(((d_112 != NULL) && (d_112 != t)))
    _fail(t);
  else
    d_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_111), term_m_41);
  t = subt_0_0(t);
  if(((c_112 != NULL) && (c_112 != t)))
    _fail(t);
  else
    c_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_112), not_null(z_111), (ATerm) ATinsert(CheckATermList(not_null(a_112)), not_null(z_111)));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(f_15, g_15, h_15, t);
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
  ATerm f_112 = NULL;
  if(((f_112 != NULL) && (f_112 != t)))
    _fail(t);
  else
    f_112 = t;
  t = SSL_strlen(not_null(f_112));
  return(t);
}
ATerm string_length_0_0 (ATerm t)
{
  t = strlen_0_0(t);
  return(t);
}
ATerm severity_string_0_0 (ATerm t)
{
  ATerm h_112 = NULL;
  if(((h_112 != NULL) && (h_112 != t)))
    _fail(t);
  else
    h_112 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_c_94;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_d_94;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_f_94;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_h_94;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_j_94;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_l_94;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_m_94;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_n_94;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_o_94;
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm i_112 = NULL;
  if(((i_112 != NULL) && (i_112 != t)))
    _fail(t);
  else
    i_112 = t;
  t = SSL_concat_strings(not_null(i_112));
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm j_112 = NULL;
  if(((j_112 != NULL) && (j_112 != t)))
    _fail(t);
  else
    j_112 = t;
  t = SSL_implode_string(not_null(j_112));
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm l_112 = NULL;
  if(((l_112 != NULL) && (l_112 != t)))
    _fail(t);
  else
    l_112 = t;
  return(t);
}
ATerm at_suffix_rev_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  static ATerm m_112 (ATerm t);
  static ATerm m_112 (ATerm t)
  {
    ATerm p_94 = t;
    int q_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_15, m_112, t);
        LocalPopChoice(q_94);
      }
    else
      {
        t = p_94;
        t = h_124(t);
      }
    return(t);
  }
  t = m_112(t);
  return(t);
}
ATerm get_filename_0_0 (ATerm t)
{
  ATerm n_112 = NULL;
  t = explode_string_0_0(t);
  {
    static ATerm j_15 (ATerm t);
    static ATerm j_15 (ATerm t)
    {
      static ATerm k_15 (ATerm t);
      static ATerm k_15 (ATerm t)
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_94 = ATgetFirst((ATermList) t);
            if(((ATgetType(r_94) != AT_INT) || (ATgetInt((ATermInt) r_94) != 47)))
              _fail(t);
            if(((n_112 != NULL) && (n_112 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        return(t);
      }
      t = at_suffix_rev_1_0(k_15, t);
      t = not_null(n_112);
      return(t);
    }
    t = try_1_0(j_15, t);
  }
  t = implode_string_0_0(t);
  return(t);
}
ATerm log_src_0_0 (ATerm t)
{
  ATerm s_94 = t;
  int t_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = whoami_0_0(t);
      t = get_filename_0_0(t);
      LocalPopChoice(t_94);
    }
  else
    {
      t = s_94;
      t = term_u_94;
    }
  return(t);
}
ATerm log_0_2 (ATerm h_79, ATerm i_79, ATerm t)
{
  static ATerm l_15 (ATerm t);
  static ATerm l_15 (ATerm t)
  {
    ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
    if(((o_112 != NULL) && (o_112 != t)))
      _fail(t);
    else
      o_112 = t;
    if(((s_112 != NULL) && (s_112 != t)))
      _fail(t);
    else
      s_112 = t;
    t = log_src_0_0(t);
    if(((p_112 != NULL) && (p_112 != t)))
      _fail(t);
    else
      p_112 = t;
    t = not_null(s_112);
    if(((r_112 != NULL) && (r_112 != t)))
      _fail(t);
    else
      r_112 = t;
    t = not_null(h_79);
    t = severity_string_0_0(t);
    if(((q_112 != NULL) && (q_112 != t)))
      _fail(t);
    else
      q_112 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_95), not_null(i_79)), term_z_94), not_null(p_112)), term_y_94), not_null(q_112)), term_v_94);
    t = concat_strings_0_0(t);
    t = log_puts_0_0(t);
    t = not_null(o_112);
    return(t);
  }
  t = if_log_severity_1_1(l_15, not_null(h_79), t);
  return(t);
}
ATerm log_if_verbose_1_1 (ATerm t_150 (ATerm), ATerm d_79, ATerm t)
{
  ATerm r_95 = t;
  int s_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL;
      if(((u_112 != NULL) && (u_112 != t)))
        _fail(t);
      else
        u_112 = t;
      if(((w_112 != NULL) && (w_112 != t)))
        _fail(t);
      else
        w_112 = t;
      t = term_g_19;
      {
        ATerm t_95 = t;
        int z_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            LocalPopChoice(z_95);
          }
        else
          {
            t = t_95;
            t = term_p_20;
          }
      }
      if(((v_112 != NULL) && (v_112 != t)))
        _fail(t);
      else
        v_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_112), not_null(d_79));
      t = geq_0_0(t);
      t = not_null(u_112);
      LocalPopChoice(s_95);
      t = t_150(t);
    }
  else
    {
      t = r_95;
      {
        ATerm x_112 = NULL;
        if(((x_112 != NULL) && (x_112 != t)))
          _fail(t);
        else
          x_112 = t;
      }
    }
  return(t);
}
ATerm verbose_level_0_0 (ATerm t)
{
  ATerm z_112 = NULL;
  if(((z_112 != NULL) && (z_112 != t)))
    _fail(t);
  else
    z_112 = t;
  if(match_cons(t, sym_Vomit_0))
    {
      t = term_i_69;
    }
  else
    {
      if(match_cons(t, sym_Debug_0))
        {
          t = term_o_63;
        }
      else
        {
          if(match_cons(t, sym_Info_0))
            {
              t = term_y_55;
            }
          else
            {
              if(match_cons(t, sym_Notice_0))
                {
                  t = term_u_55;
                }
              else
                {
                  if(match_cons(t, sym_Warning_0))
                    {
                      t = term_m_41;
                    }
                  else
                    {
                      if(match_cons(t, sym_Error_0))
                        {
                          t = term_p_20;
                        }
                      else
                        {
                          if(match_cons(t, sym_Critical_0))
                            {
                              t = term_a_96;
                            }
                          else
                            {
                              if(match_cons(t, sym_Alert_0))
                                {
                                  t = term_k_96;
                                }
                              else
                                {
                                  if(!(match_cons(t, sym_Emergency_0)))
                                    _fail(t);
                                  t = term_l_96;
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
ATerm if_log_severity_1_1 (ATerm u_150 (ATerm), ATerm j_79, ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL;
  if(((b_113 != NULL) && (b_113 != t)))
    _fail(t);
  else
    b_113 = t;
  if(((d_113 != NULL) && (d_113 != t)))
    _fail(t);
  else
    d_113 = t;
  t = not_null(j_79);
  t = verbose_level_0_0(t);
  if(((c_113 != NULL) && (c_113 != t)))
    _fail(t);
  else
    c_113 = t;
  if(((a_113 != NULL) && (a_113 != t)))
    _fail(t);
  else
    a_113 = t;
  t = not_null(b_113);
  t = log_if_verbose_1_1(u_150, not_null(a_113), t);
  return(t);
}
ATerm log_0_3 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm t)
{
  static ATerm m_15 (ATerm t);
  static ATerm m_15 (ATerm t)
  {
    ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
    t = log_0_2(not_null(e_79), not_null(f_79), t);
    if(((e_113 != NULL) && (e_113 != t)))
      _fail(t);
    else
      e_113 = t;
    if(((i_113 != NULL) && (i_113 != t)))
      _fail(t);
    else
      i_113 = t;
    if(((k_113 != NULL) && (k_113 != t)))
      _fail(t);
    else
      k_113 = t;
    t = not_null(e_79);
    t = severity_string_0_0(t);
    t = string_length_0_0(t);
    if(((j_113 != NULL) && (j_113 != t)))
      _fail(t);
    else
      j_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_113), term_y_55);
    t = add_0_0(t);
    if(((h_113 != NULL) && (h_113 != t)))
      _fail(t);
    else
      h_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_113), term_m_96);
    t = copy_char_0_0(t);
    t = log_puts_0_0(t);
    if(((g_113 != NULL) && (g_113 != t)))
      _fail(t);
    else
      g_113 = t;
    t = log_stream_0_0(t);
    if(((f_113 != NULL) && (f_113 != t)))
      _fail(t);
    else
      f_113 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_113), not_null(g_79));
    t = write_in_text_to_stream_0_0(t);
    t = term_m_95;
    t = log_puts_0_0(t);
    t = not_null(e_113);
    return(t);
  }
  t = if_log_severity_1_1(m_15, not_null(e_79), t);
  return(t);
}
ATerm dbg_0_1 (ATerm c_79, ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  if(((q_113 != NULL) && (q_113 != t)))
    _fail(t);
  else
    q_113 = t;
  t = term_f_97;
  if(((l_113 != NULL) && (l_113 != t)))
    _fail(t);
  else
    l_113 = t;
  t = not_null(q_113);
  if(((n_113 != NULL) && (n_113 != t)))
    _fail(t);
  else
    n_113 = t;
  if(((p_113 != NULL) && (p_113 != t)))
    _fail(t);
  else
    p_113 = t;
  if(((o_113 != NULL) && (o_113 != t)))
    _fail(t);
  else
    o_113 = t;
  if(((m_113 != NULL) && (m_113 != t)))
    _fail(t);
  else
    m_113 = t;
  t = not_null(n_113);
  t = log_0_3(not_null(l_113), not_null(c_79), not_null(m_113), t);
  return(t);
}
ATerm xtc_query_one_2_1 (ATerm e_151 (ATerm), ATerm f_151 (ATerm), ATerm x_81, ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL;
  if(((s_113 != NULL) && (s_113 != t)))
    _fail(t);
  else
    s_113 = t;
  if(((r_113 != NULL) && (r_113 != t)))
    _fail(t);
  else
    r_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_81), not_null(r_113));
  t = table_get_0_0(t);
  t = e_151(t);
  t = f_151(t);
  return(t);
}
ATerm xtc_query_all_2_0 (ATerm c_151 (ATerm), ATerm d_151 (ATerm), ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  if(((t_113 != NULL) && (t_113 != t)))
    _fail(t);
  else
    t_113 = t;
  if(((v_113 != NULL) && (v_113 != t)))
    _fail(t);
  else
    v_113 = t;
  {
    ATerm j_97 = t;
    int k_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL;
        t = not_null(t_113);
        if(((a_114 != NULL) && (a_114 != t)))
          _fail(t);
        else
          a_114 = t;
        t = term_g_92;
        if(((z_113 != NULL) && (z_113 != t)))
          _fail(t);
        else
          z_113 = t;
        t = not_null(a_114);
        t = xtc_query_one_2_1(c_151, d_151, not_null(z_113), t);
        if(((w_113 != NULL) && (w_113 != t)))
          _fail(t);
        else
          w_113 = t;
        t = not_null(t_113);
        if(((y_113 != NULL) && (y_113 != t)))
          _fail(t);
        else
          y_113 = t;
        t = term_h_92;
        if(((x_113 != NULL) && (x_113 != t)))
          _fail(t);
        else
          x_113 = t;
        t = not_null(y_113);
        t = dbg_0_1(not_null(x_113), t);
        t = not_null(w_113);
        LocalPopChoice(k_97);
      }
    else
      {
        t = j_97;
        {
          ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
          if(((b_114 != NULL) && (b_114 != t)))
            _fail(t);
          else
            b_114 = t;
          if(((d_114 != NULL) && (d_114 != t)))
            _fail(t);
          else
            d_114 = t;
          t = term_t_37;
          if(((c_114 != NULL) && (c_114 != t)))
            _fail(t);
          else
            c_114 = t;
          t = not_null(d_114);
          t = xtc_query_all_2_1(c_151, d_151, not_null(c_114), t);
          t = xtc_cache_put_0_1(not_null(t_113), t);
        }
      }
  }
  if(((u_113 != NULL) && (u_113 != t)))
    _fail(t);
  else
    u_113 = t;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm s_114 = NULL;
  if(((s_114 != NULL) && (s_114 != t)))
    _fail(t);
  else
    s_114 = t;
  return(t);
}
ATerm xtc_search_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
  if(((h_114 != NULL) && (h_114 != t)))
    _fail(t);
  else
    h_114 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      i_114 = ATgetArgument(t, 0);
      {
        ATerm l_97 = t;
        int m_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
            t = not_null(h_114);
            if(((k_114 != NULL) && (k_114 != t)))
              _fail(t);
            else
              k_114 = t;
            t = not_null(i_114);
            if(((j_114 != NULL) && (j_114 != t)))
              _fail(t);
            else
              j_114 = t;
            t = not_null(h_114);
            if(((n_114 != NULL) && (n_114 != t)))
              _fail(t);
            else
              n_114 = t;
            t = not_null(j_114);
            t = is_list_0_0(t);
            t = not_null(k_114);
            {
              static ATerm n_15 (ATerm t);
              static ATerm n_15 (ATerm t)
              {
                t = xtc_has_meta_0_1(not_null(j_114), t);
                return(t);
              }
              t = xtc_query_all_2_0(n_15, r_0, t);
            }
            if(((m_114 != NULL) && (m_114 != t)))
              _fail(t);
            else
              m_114 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_114), not_null(m_114));
            LocalPopChoice(m_97);
          }
        else
          {
            t = l_97;
            {
              ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL;
              t = not_null(h_114);
              if(((p_114 != NULL) && (p_114 != t)))
                _fail(t);
              else
                p_114 = t;
              t = not_null(i_114);
              if(((o_114 != NULL) && (o_114 != t)))
                _fail(t);
              else
                o_114 = t;
              t = not_null(h_114);
              if(((r_114 != NULL) && (r_114 != t)))
                _fail(t);
              else
                r_114 = t;
              t = not_null(o_114);
              t = is_string_0_0(t);
              t = not_null(p_114);
              t = xtc_query_one_2_0(o_15, r_0, t);
              if(((q_114 != NULL) && (q_114 != t)))
                _fail(t);
              else
                q_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_114), not_null(q_114));
            }
          }
      }
    }
  else
    {
      ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL,y_114 = NULL;
      if(match_cons(t, sym_XtcQuery_2))
        {
          if(((i_114 != NULL) && (i_114 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_114 = ATgetArgument(t, 0);
          if(((g_114 != NULL) && (g_114 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(h_114);
      if(((v_114 != NULL) && (v_114 != t)))
        _fail(t);
      else
        v_114 = t;
      t = not_null(i_114);
      if(((u_114 != NULL) && (u_114 != t)))
        _fail(t);
      else
        u_114 = t;
      t = not_null(g_114);
      if(((t_114 != NULL) && (t_114 != t)))
        _fail(t);
      else
        t_114 = t;
      t = not_null(h_114);
      if(((y_114 != NULL) && (y_114 != t)))
        _fail(t);
      else
        y_114 = t;
      t = not_null(u_114);
      t = is_string_0_0(t);
      t = not_null(t_114);
      t = is_list_0_0(t);
      t = not_null(v_114);
      {
        static ATerm p_15 (ATerm t);
        static ATerm p_15 (ATerm t)
        {
          t = xtc_has_meta_0_1(not_null(t_114), t);
          return(t);
        }
        t = xtc_query_one_2_0(p_15, r_0, t);
      }
      if(((x_114 != NULL) && (x_114 != t)))
        _fail(t);
      else
        x_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_114), not_null(x_114));
    }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm z_114 = NULL;
  if(((z_114 != NULL) && (z_114 != t)))
    _fail(t);
  else
    z_114 = t;
  t = SSL_getenv(not_null(z_114));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_97 = t;
  int o_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_97;
      t = getenv_0_0(t);
      LocalPopChoice(o_97);
    }
  else
    {
      t = n_97;
      {
        ATerm v_99 = t;
        int w_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetInternalDefaultXtcRepository_0_0(t);
            LocalPopChoice(w_99);
          }
        else
          {
            t = v_99;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_init_0_0 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL;
  if(((e_115 != NULL) && (e_115 != t)))
    _fail(t);
  else
    e_115 = t;
  if(((g_115 != NULL) && (g_115 != t)))
    _fail(t);
  else
    g_115 = t;
  t = xtc_location_0_0(t);
  if(((f_115 != NULL) && (f_115 != t)))
    _fail(t);
  else
    f_115 = t;
  if(((a_115 != NULL) && (a_115 != t)))
    _fail(t);
  else
    a_115 = t;
  t = not_null(e_115);
  if(((d_115 != NULL) && (d_115 != t)))
    _fail(t);
  else
    d_115 = t;
  t = (ATerm) ATempty;
  if(((b_115 != NULL) && (b_115 != t)))
    _fail(t);
  else
    b_115 = t;
  t = not_null(d_115);
  t = xtc_init_0_2(not_null(a_115), not_null(b_115), t);
  return(t);
}
ATerm XtcQuery_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_15 = NULL,o_18 = NULL;
  if(((o_115 != NULL) && (o_115 != t)))
    _fail(t);
  else
    o_115 = t;
  if(match_cons(t, sym_XtcQuery_2))
    {
      if(((i_115 != NULL) && (i_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_115 = ATgetArgument(t, 0);
      if(((j_115 != NULL) && (j_115 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_115 != NULL) && (p_115 != t)))
    _fail(t);
  else
    p_115 = t;
  t = SSLgetAnnotations(not_null(o_115));
  if(((h_115 != NULL) && (h_115 != t)))
    _fail(t);
  else
    h_115 = t;
  t = not_null(i_115);
  t = k_110(t);
  if(((k_115 != NULL) && (k_115 != t)))
    _fail(t);
  else
    k_115 = t;
  t = not_null(j_115);
  t = l_110(t);
  if(((l_115 != NULL) && (l_115 != t)))
    _fail(t);
  else
    l_115 = t;
  if(((n_115 != NULL) && (n_115 != t)))
    _fail(t);
  else
    n_115 = t;
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(k_115), not_null(l_115));
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = SSLsetAnnotations(not_null(q_15), not_null(h_115));
  if(((m_115 != NULL) && (m_115 != t)))
    _fail(t);
  else
    m_115 = t;
  return(t);
}
ATerm XtcQuery_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL,x_115 = NULL,y_115 = NULL,d_116 = NULL,e_116 = NULL,r_15 = NULL,p_18 = NULL;
  if(((d_116 != NULL) && (d_116 != t)))
    _fail(t);
  else
    d_116 = t;
  if(match_cons(t, sym_XtcQuery_1))
    {
      if(((r_115 != NULL) && (r_115 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((e_116 != NULL) && (e_116 != t)))
    _fail(t);
  else
    e_116 = t;
  t = SSLgetAnnotations(not_null(d_116));
  if(((q_115 != NULL) && (q_115 != t)))
    _fail(t);
  else
    q_115 = t;
  t = not_null(r_115);
  t = j_110(t);
  if(((s_115 != NULL) && (s_115 != t)))
    _fail(t);
  else
    s_115 = t;
  if(((y_115 != NULL) && (y_115 != t)))
    _fail(t);
  else
    y_115 = t;
  if(((p_18 != NULL) && (p_18 != t)))
    _fail(t);
  else
    p_18 = t;
  t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(s_115));
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  t = SSLsetAnnotations(not_null(r_15), not_null(q_115));
  if(((x_115 != NULL) && (x_115 != t)))
    _fail(t);
  else
    x_115 = t;
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm f_116 = NULL;
  if(((f_116 != NULL) && (f_116 != t)))
    _fail(t);
  else
    f_116 = t;
  t = SSL_is_string(not_null(f_116));
  return(t);
}
ATerm xtc_desugar_query_0_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL;
  if(((j_116 != NULL) && (j_116 != t)))
    _fail(t);
  else
    j_116 = t;
  if(match_cons(t, sym__2))
    {
      h_116 = ATgetArgument(t, 0);
      i_116 = ATgetArgument(t, 1);
      {
        ATerm x_99 = t;
        int y_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_116 = NULL,l_116 = NULL,m_116 = NULL;
            t = not_null(j_116);
            if(((k_116 != NULL) && (k_116 != t)))
              _fail(t);
            else
              k_116 = t;
            t = not_null(j_116);
            if(((m_116 != NULL) && (m_116 != t)))
              _fail(t);
            else
              m_116 = t;
            t = not_null(k_116);
            t = is_list_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(k_116));
            LocalPopChoice(y_99);
          }
        else
          {
            t = x_99;
            {
              ATerm z_99 = t;
              int a_100 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,w_116 = NULL;
                  t = not_null(h_116);
                  if(((o_116 != NULL) && (o_116 != t)))
                    _fail(t);
                  else
                    o_116 = t;
                  t = not_null(i_116);
                  if(((n_116 != NULL) && (n_116 != t)))
                    _fail(t);
                  else
                    n_116 = t;
                  t = not_null(j_116);
                  if(((w_116 != NULL) && (w_116 != t)))
                    _fail(t);
                  else
                    w_116 = t;
                  t = not_null(o_116);
                  t = is_string_0_0(t);
                  t = not_null(n_116);
                  t = is_list_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(o_116), not_null(n_116));
                  LocalPopChoice(a_100);
                }
              else
                {
                  t = z_99;
                  {
                    ATerm f_101 = t;
                    int g_101 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
                        t = not_null(h_116);
                        if(((x_116 != NULL) && (x_116 != t)))
                          _fail(t);
                        else
                          x_116 = t;
                        t = not_null(i_116);
                        if(((y_116 != NULL) && (y_116 != t)))
                          _fail(t);
                        else
                          y_116 = t;
                        t = not_null(j_116);
                        if(((z_116 != NULL) && (z_116 != t)))
                          _fail(t);
                        else
                          z_116 = t;
                        t = not_null(x_116);
                        t = is_string_0_0(t);
                        t = not_null(y_116);
                        t = is_string_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_XtcQuery_2, not_null(x_116), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_XtcMeta_2, term_o_49, (ATerm) ATmakeAppl(sym_String_1, not_null(y_116)))));
                        LocalPopChoice(g_101);
                      }
                    else
                      {
                        t = f_101;
                        {
                          ATerm b_117 = NULL,c_117 = NULL;
                          t = not_null(j_116);
                          if(((b_117 != NULL) && (b_117 != t)))
                            _fail(t);
                          else
                            b_117 = t;
                          t = not_null(j_116);
                          if(((c_117 != NULL) && (c_117 != t)))
                            _fail(t);
                          else
                            c_117 = t;
                          t = not_null(b_117);
                          t = is_string_0_0(t);
                          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(b_117));
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
      ATerm j_101 = t;
      int k_101 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL;
          t = not_null(j_116);
          if(((d_117 != NULL) && (d_117 != t)))
            _fail(t);
          else
            d_117 = t;
          t = not_null(j_116);
          if(((f_117 != NULL) && (f_117 != t)))
            _fail(t);
          else
            f_117 = t;
          t = not_null(d_117);
          t = is_list_0_0(t);
          t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(d_117));
          LocalPopChoice(k_101);
        }
      else
        {
          t = j_101;
          {
            ATerm g_117 = NULL,h_117 = NULL;
            t = not_null(j_116);
            if(((g_117 != NULL) && (g_117 != t)))
              _fail(t);
            else
              g_117 = t;
            t = not_null(j_116);
            if(((h_117 != NULL) && (h_117 != t)))
              _fail(t);
            else
              h_117 = t;
            t = not_null(g_117);
            t = is_string_0_0(t);
            t = (ATerm) ATmakeAppl(sym_XtcQuery_1, not_null(g_117));
          }
        }
    }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm o_117 = NULL;
  if(((o_117 != NULL) && (o_117 != t)))
    _fail(t);
  else
    o_117 = t;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_117 = NULL;
  if(((p_117 != NULL) && (p_117 != t)))
    _fail(t);
  else
    p_117 = t;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm q_117 = NULL;
  if(((q_117 != NULL) && (q_117 != t)))
    _fail(t);
  else
    q_117 = t;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm r_117 = NULL;
  if(((r_117 != NULL) && (r_117 != t)))
    _fail(t);
  else
    r_117 = t;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm s_117 = NULL;
  if(((s_117 != NULL) && (s_117 != t)))
    _fail(t);
  else
    s_117 = t;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm t_117 = NULL;
  if(((t_117 != NULL) && (t_117 != t)))
    _fail(t);
  else
    t_117 = t;
  return(t);
}
ATerm xtc_find_reg_local_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_101 = t;
  int r_101 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_101 = t;
      if((PushChoice() == 0))
        {
          ATerm t_101 = t;
          int s_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = XtcQuery_1_0(s_15, t);
              LocalPopChoice(s_102);
            }
          else
            {
              t = t_101;
              t = XtcQuery_2_0(u_15, v_15, t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_101;
        }
      t = xtc_desugar_query_0_0(t);
      t = xtc_find_reg_local_1_0(p_0, t);
      LocalPopChoice(r_101);
    }
  else
    {
      t = q_101;
      {
        ATerm i_103 = t;
        int a_104 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = XtcQuery_1_0(w_15, t);
            LocalPopChoice(a_104);
          }
        else
          {
            t = i_103;
            t = XtcQuery_2_0(x_15, y_15, t);
          }
      }
      {
        ATerm b_104 = t;
        int a_105 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_init_0_0(t);
            t = xtc_search_1_0(p_0, t);
            t = Snd_0_0(t);
            LocalPopChoice(a_105);
          }
        else
          {
            t = b_104;
            {
              ATerm u_117 = NULL,v_117 = NULL;
              if(((u_117 != NULL) && (u_117 != t)))
                _fail(t);
              else
                u_117 = t;
              if(((v_117 != NULL) && (v_117 != t)))
                _fail(t);
              else
                v_117 = t;
              t = not_null(u_117);
              t = xtc_import_local_0_0(t);
              t = not_null(v_117);
              t = xtc_find_reg_local_1_0(p_0, t);
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
ATerm filter_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  ATerm o_105 = t;
  int y_106 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(y_106);
    }
  else
    {
      t = o_105;
      {
        ATerm b_108 = t;
        int c_108 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_15 (ATerm t);
            static ATerm z_15 (ATerm t)
            {
              t = filter_1_0(l_131, t);
              return(t);
            }
            t = Cons_2_0(l_131, z_15, t);
            LocalPopChoice(c_108);
          }
        else
          {
            t = b_108;
            {
              ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL,a_118 = NULL;
              if(((x_117 != NULL) && (x_117 != t)))
                _fail(t);
              else
                x_117 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((y_117 != NULL) && (y_117 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    y_117 = ATgetFirst((ATermList) t);
                  if(((z_117 != NULL) && (z_117 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    z_117 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(z_117);
              if(((a_118 != NULL) && (a_118 != t)))
                _fail(t);
              else
                a_118 = t;
              t = filter_1_0(l_131, t);
            }
          }
      }
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm w_108 = t;
  if((PushChoice() == 0))
    {
      t = xtc_find_reg_local_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_108;
    }
  return(t);
}
ATerm xtc_check_dependencies_local_0_0 (ATerm t)
{
  ATerm b_118 = NULL;
  if(((b_118 != NULL) && (b_118 != t)))
    _fail(t);
  else
    b_118 = t;
  t = filter_1_0(a_16, t);
  t = Nil_0_0(t);
  return(t);
}
ATerm exec_http_dependencies_0_0 (ATerm t)
{
  ATerm a_110 = t;
  int p_110 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_118 = NULL;
      if(((d_118 != NULL) && (d_118 != t)))
        _fail(t);
      else
        d_118 = t;
      t = (ATerm) ATinsert(ATempty, term_h_73);
      {
        ATerm q_110 = t;
        if((PushChoice() == 0))
          {
            t = xtc_check_dependencies_local_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_110;
          }
      }
      t = not_null(d_118);
      LocalPopChoice(p_110);
      {
        ATerm e_118 = NULL,f_118 = NULL;
        if(((f_118 != NULL) && (f_118 != t)))
          _fail(t);
        else
          f_118 = t;
        t = term_g_112;
        if(((e_118 != NULL) && (e_118 != t)))
          _fail(t);
        else
          e_118 = t;
        t = not_null(f_118);
        t = err_0_1(not_null(e_118), t);
        _fail(t);
      }
    }
  else
    {
      t = a_110;
      {
        ATerm g_118 = NULL;
        if(((g_118 != NULL) && (g_118 != t)))
          _fail(t);
        else
          g_118 = t;
      }
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_h_73;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm h_118 = NULL,i_118 = NULL;
  if(((i_118 != NULL) && (i_118 != t)))
    _fail(t);
  else
    i_118 = t;
  if(((h_118 != NULL) && (h_118 != t)))
    _fail(t);
  else
    h_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, term_i_73), term_w_42), not_null(h_118));
  t = conc_0_0(t);
  return(t);
}
ATerm exec_http_0_0 (ATerm t)
{
  t = exec_http_dependencies_0_0(t);
  t = xtc_generate_2_0(b_16, c_16, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL;
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  if(match_cons(t, sym_URL_1))
    {
      l_118 = ATgetArgument(t, 0);
      {
        ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL;
        t = not_null(l_118);
        if(((o_118 != NULL) && (o_118 != t)))
          _fail(t);
        else
          o_118 = t;
        t = is_url_http_0_0(t);
        if(((n_118 != NULL) && (n_118 != t)))
          _fail(t);
        else
          n_118 = t;
        if(((m_118 != NULL) && (m_118 != t)))
          _fail(t);
        else
          m_118 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, term_t_112), not_null(m_118));
        t = exec_http_0_0(t);
        t = read_from_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_stdin_0))
        {
          ATerm p_118 = NULL,q_118 = NULL;
          t = not_null(k_118);
          if(((q_118 != NULL) && (q_118 != t)))
            _fail(t);
          else
            q_118 = t;
          t = term_o_90;
          t = ReadFromFile_0_0(t);
          if(((p_118 != NULL) && (p_118 != t)))
            _fail(t);
          else
            p_118 = t;
        }
      else
        {
          ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              if(((l_118 != NULL) && (l_118 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(l_118);
          if(((r_118 != NULL) && (r_118 != t)))
            _fail(t);
          else
            r_118 = t;
          t = not_null(k_118);
          if(((t_118 != NULL) && (t_118 != t)))
            _fail(t);
          else
            t_118 = t;
          t = not_null(r_118);
          t = file_exists_0_0(t);
          t = ReadFromFile_0_0(t);
          if(((s_118 != NULL) && (s_118 != t)))
            _fail(t);
          else
            s_118 = t;
        }
    }
  return(t);
}
ATerm xtc_load_url_0_0 (ATerm t)
{
  ATerm u_118 = NULL;
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  {
    ATerm y_112 = t;
    int e_114 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_118 = NULL,w_118 = NULL;
        t = not_null(u_118);
        if(((w_118 != NULL) && (w_118 != t)))
          _fail(t);
        else
          w_118 = t;
        t = not_null(u_118);
        if(((v_118 != NULL) && (v_118 != t)))
          _fail(t);
        else
          v_118 = t;
        t = (ATerm) ATmakeAppl(sym_URL_1, not_null(v_118));
        t = read_from_0_0(t);
        LocalPopChoice(e_114);
      }
    else
      {
        t = y_112;
        {
          ATerm x_118 = NULL,y_118 = NULL;
          t = not_null(u_118);
          if(((y_118 != NULL) && (y_118 != t)))
            _fail(t);
          else
            y_118 = t;
          t = term_f_114;
          if(((x_118 != NULL) && (x_118 != t)))
            _fail(t);
          else
            x_118 = t;
          t = not_null(y_118);
          t = err_0_1(not_null(x_118), t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL;
  if(((b_119 != NULL) && (b_119 != t)))
    _fail(t);
  else
    b_119 = t;
  if(((c_119 != NULL) && (c_119 != t)))
    _fail(t);
  else
    c_119 = t;
  t = not_null(b_119);
  if(((d_119 != NULL) && (d_119 != t)))
    _fail(t);
  else
    d_119 = t;
  t = SSL_explode_term(not_null(d_119));
  if(match_cons(t, sym__2))
    {
      ATerm b_116 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_116) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_116 = ATgetArgument(t, 1);
        if(((ATgetType(g_116) == AT_LIST) && !(ATisEmpty(g_116))))
          {
            if(((a_119 != NULL) && (a_119 != ATgetFirst((ATermList) g_116))))
              _fail(ATgetFirst((ATermList) g_116));
            else
              a_119 = ATgetFirst((ATermList) g_116);
            if(((z_118 != NULL) && (z_118 != (ATerm) ATgetNext((ATermList) g_116))))
              _fail((ATerm) ATgetNext((ATermList) g_116));
            else
              z_118 = (ATerm) ATgetNext((ATermList) g_116);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(a_119);
  return(t);
}
ATerm _2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL,d_16 = NULL,q_18 = NULL;
  if(((l_119 != NULL) && (l_119 != t)))
    _fail(t);
  else
    l_119 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_119 != NULL) && (f_119 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_119 = ATgetArgument(t, 0);
      if(((g_119 != NULL) && (g_119 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_119 != NULL) && (m_119 != t)))
    _fail(t);
  else
    m_119 = t;
  t = SSLgetAnnotations(not_null(l_119));
  if(((e_119 != NULL) && (e_119 != t)))
    _fail(t);
  else
    e_119 = t;
  t = not_null(f_119);
  t = d_101(t);
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  t = not_null(g_119);
  t = e_101(t);
  if(((i_119 != NULL) && (i_119 != t)))
    _fail(t);
  else
    i_119 = t;
  if(((k_119 != NULL) && (k_119 != t)))
    _fail(t);
  else
    k_119 = t;
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_119), not_null(i_119));
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = SSLsetAnnotations(not_null(d_16), not_null(e_119));
  if(((j_119 != NULL) && (j_119 != t)))
    _fail(t);
  else
    j_119 = t;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm d_120 = NULL;
  if(((d_120 != NULL) && (d_120 != t)))
    _fail(t);
  else
    d_120 = t;
  return(t);
}
ATerm left_match_0_0 (ATerm t)
{
  static ATerm e_120 (ATerm t);
  static ATerm e_120 (ATerm t)
  {
    ATerm s_116 = t;
    int i_117 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
        if(((r_119 != NULL) && (r_119 != t)))
          _fail(t);
        else
          r_119 = t;
        if(match_cons(t, sym__2))
          {
            if(((s_119 != NULL) && (s_119 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              s_119 = ATgetArgument(t, 0);
            if(((v_119 != NULL) && (v_119 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(s_119);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_119 != NULL) && (t_119 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_119 = ATgetFirst((ATermList) t);
            if(((u_119 != NULL) && (u_119 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_119 = (ATerm) ATgetNext((ATermList) t);
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
        t = not_null(t_119);
        if(((z_119 != NULL) && (z_119 != t)))
          _fail(t);
        else
          z_119 = t;
        t = not_null(u_119);
        if(((y_119 != NULL) && (y_119 != t)))
          _fail(t);
        else
          y_119 = t;
        t = not_null(w_119);
        if(((z_119 != NULL) && (z_119 != t)))
          _fail(t);
        else
          z_119 = t;
        t = not_null(x_119);
        if(((a_120 != NULL) && (a_120 != t)))
          _fail(t);
        else
          a_120 = t;
        t = not_null(r_119);
        if(((c_120 != NULL) && (c_120 != t)))
          _fail(t);
        else
          c_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_119), not_null(a_120));
        t = e_120(t);
        if(((b_120 != NULL) && (b_120 != t)))
          _fail(t);
        else
          b_120 = t;
        LocalPopChoice(i_117);
      }
    else
      {
        t = s_116;
        t = _2_0(e_16, Nil_0_0, t);
      }
    return(t);
  }
  t = e_120(t);
  t = Fst_0_0(t);
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm f_120 = NULL;
  if(((f_120 != NULL) && (f_120 != t)))
    _fail(t);
  else
    f_120 = t;
  t = SSL_explode_string(not_null(f_120));
  return(t);
}
ATerm string_starts_with_0_1 (ATerm g_43, ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
  if(((g_120 != NULL) && (g_120 != t)))
    _fail(t);
  else
    g_120 = t;
  if(((k_120 != NULL) && (k_120 != t)))
    _fail(t);
  else
    k_120 = t;
  t = explode_string_0_0(t);
  if(((h_120 != NULL) && (h_120 != t)))
    _fail(t);
  else
    h_120 = t;
  t = not_null(k_120);
  if(((j_120 != NULL) && (j_120 != t)))
    _fail(t);
  else
    j_120 = t;
  t = not_null(g_43);
  t = explode_string_0_0(t);
  if(((i_120 != NULL) && (i_120 != t)))
    _fail(t);
  else
    i_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_120), not_null(i_120));
  t = left_match_0_0(t);
  t = not_null(g_120);
  return(t);
}
ATerm is_url_http_0_0 (ATerm t)
{
  ATerm l_120 = NULL;
  if(((l_120 != NULL) && (l_120 != t)))
    _fail(t);
  else
    l_120 = t;
  {
    ATerm j_117 = t;
    int k_117 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_120 = NULL,n_120 = NULL;
        t = not_null(l_120);
        if(((n_120 != NULL) && (n_120 != t)))
          _fail(t);
        else
          n_120 = t;
        t = term_l_117;
        if(((m_120 != NULL) && (m_120 != t)))
          _fail(t);
        else
          m_120 = t;
        t = not_null(n_120);
        t = string_starts_with_0_1(not_null(m_120), t);
        LocalPopChoice(k_117);
      }
    else
      {
        t = j_117;
        {
          ATerm o_120 = NULL,p_120 = NULL;
          t = not_null(l_120);
          if(((p_120 != NULL) && (p_120 != t)))
            _fail(t);
          else
            p_120 = t;
          t = term_m_117;
          if(((o_120 != NULL) && (o_120 != t)))
            _fail(t);
          else
            o_120 = t;
          t = not_null(p_120);
          t = string_starts_with_0_1(not_null(o_120), t);
        }
      }
  }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm u_120 = NULL;
  if(((u_120 != NULL) && (u_120 != t)))
    _fail(t);
  else
    u_120 = t;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm z_120 = NULL;
  if(((z_120 != NULL) && (z_120 != t)))
    _fail(t);
  else
    z_120 = t;
  return(t);
}
ATerm xtc_load_0_1 (ATerm z_79, ATerm t)
{
  ATerm s_120 = NULL;
  if(((s_120 != NULL) && (s_120 != t)))
    _fail(t);
  else
    s_120 = t;
  {
    ATerm n_117 = t;
    int w_117 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_120 = NULL;
        if(((t_120 != NULL) && (t_120 != t)))
          _fail(t);
        else
          t_120 = t;
        t = is_url_http_0_0(t);
        t = not_null(t_120);
        LocalPopChoice(w_117);
        t = xtc_load_url_0_0(t);
      }
    else
      {
        t = n_117;
        t = xtc_load_file_0_0(t);
      }
  }
  {
    ATerm c_118 = t;
    int j_118 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Repository_1_0(f_16, t);
        LocalPopChoice(j_118);
      }
    else
      {
        t = c_118;
        {
          ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL;
          if(((v_120 != NULL) && (v_120 != t)))
            _fail(t);
          else
            v_120 = t;
          if(((w_120 != NULL) && (w_120 != t)))
            _fail(t);
          else
            w_120 = t;
          t = not_null(s_120);
          if(((y_120 != NULL) && (y_120 != t)))
            _fail(t);
          else
            y_120 = t;
          t = term_n_119;
          if(((x_120 != NULL) && (x_120 != t)))
            _fail(t);
          else
            x_120 = t;
          t = not_null(y_120);
          t = notice_0_1(not_null(x_120), t);
          t = not_null(w_120);
          t = xtc_convert_repository_0_0(t);
        }
      }
  }
  t = Repository_1_0(g_16, t);
  t = xtc_aterm2table_0_1(not_null(z_79), t);
  return(t);
}
ATerm hashtable_keys_0_0 (ATerm t)
{
  ATerm a_121 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((a_121 != NULL) && (a_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_keys(not_null(a_121));
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm b_121 = NULL;
  if(((b_121 != NULL) && (b_121 != t)))
    _fail(t);
  else
    b_121 = t;
  t = lookup_table_0_1(not_null(b_121), t);
  t = hashtable_keys_0_0(t);
  return(t);
}
ATerm xtc_init_0_2 (ATerm c_80, ATerm d_80, ATerm t)
{
  ATerm c_121 = NULL;
  if(((c_121 != NULL) && (c_121 != t)))
    _fail(t);
  else
    c_121 = t;
  {
    ATerm o_119 = t;
    int p_119 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_37;
        t = table_keys_0_0(t);
        {
          ATerm q_119 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_119;
            }
        }
        LocalPopChoice(p_119);
      }
    else
      {
        t = o_119;
        t = not_null(c_80);
        t = xtc_load_0_1(not_null(d_80), t);
      }
  }
  t = not_null(c_121);
  return(t);
}
ATerm xtc_init_0_1 (ATerm b_80, ATerm t)
{
  ATerm d_121 = NULL,e_121 = NULL;
  if(((e_121 != NULL) && (e_121 != t)))
    _fail(t);
  else
    e_121 = t;
  t = (ATerm) ATempty;
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  t = not_null(e_121);
  t = xtc_init_0_2(not_null(b_80), not_null(d_121), t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_121 = NULL,j_121 = NULL,k_121 = NULL,l_121 = NULL,m_121 = NULL;
  if(((i_121 != NULL) && (i_121 != t)))
    _fail(t);
  else
    i_121 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(i_121);
      t = register_usage_1_0(o_0, t);
    }
  else
    {
      ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_121 != NULL) && (j_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_121 = ATgetFirst((ATermList) t);
          if(((k_121 != NULL) && (k_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_121);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_121 != NULL) && (l_121 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_121 = ATgetFirst((ATermList) t);
          if(((m_121 != NULL) && (m_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_121);
      if(((p_121 != NULL) && (p_121 != t)))
        _fail(t);
      else
        p_121 = t;
      t = not_null(l_121);
      if(((n_121 != NULL) && (n_121 != t)))
        _fail(t);
      else
        n_121 = t;
      t = not_null(m_121);
      if(((o_121 != NULL) && (o_121 != t)))
        _fail(t);
      else
        o_121 = t;
      t = not_null(i_121);
      if(((s_121 != NULL) && (s_121 != t)))
        _fail(t);
      else
        s_121 = t;
      t = not_null(p_121);
      t = k_0(t);
      t = not_null(s_121);
      if(((r_121 != NULL) && (r_121 != t)))
        _fail(t);
      else
        r_121 = t;
      t = not_null(n_121);
      t = m_0(t);
      if(((q_121 != NULL) && (q_121 != t)))
        _fail(t);
      else
        q_121 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(o_121)), not_null(q_121));
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm u_121 = NULL;
  if(((u_121 != NULL) && (u_121 != t)))
    _fail(t);
  else
    u_121 = t;
  if(match_string(t, "-r"))
    {
      t = not_null(u_121);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = not_null(u_121);
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL;
  if(((v_121 != NULL) && (v_121 != t)))
    _fail(t);
  else
    v_121 = t;
  if(((x_121 != NULL) && (x_121 != t)))
    _fail(t);
  else
    x_121 = t;
  if(((z_121 != NULL) && (z_121 != t)))
    _fail(t);
  else
    z_121 = t;
  if(((y_121 != NULL) && (y_121 != t)))
    _fail(t);
  else
    y_121 = t;
  if(((w_121 != NULL) && (w_121 != t)))
    _fail(t);
  else
    w_121 = t;
  t = not_null(x_121);
  t = xtc_init_0_1(not_null(w_121), t);
  t = not_null(v_121);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_q_120;
  return(t);
}
ATerm repository_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_16, i_16, j_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--enforce", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm a_122 = NULL;
  if(((a_122 != NULL) && (a_122 != t)))
    _fail(t);
  else
    a_122 = t;
  t = term_r_120;
  t = set_config_0_0(t);
  t = term_m_88;
  t = set_config_0_0(t);
  t = not_null(a_122);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_g_121;
  return(t);
}
ATerm xtc_enforce_option_0_0 (ATerm t)
{
  t = Option_3_0(k_16, l_16, m_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--check", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm b_122 = NULL;
  if(((b_122 != NULL) && (b_122 != t)))
    _fail(t);
  else
    b_122 = t;
  t = term_m_88;
  t = set_config_0_0(t);
  t = not_null(b_122);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_h_121;
  return(t);
}
ATerm xtc_check_option_0_0 (ATerm t)
{
  t = Option_3_0(n_16, o_16, p_16, t);
  return(t);
}
ATerm xtc_contract_options_0_0 (ATerm t)
{
  ATerm t_121 = t;
  int d_122 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_check_option_0_0(t);
      LocalPopChoice(d_122);
    }
  else
    {
      t = t_121;
      t = xtc_enforce_option_0_0(t);
    }
  return(t);
}
ATerm long_description_1_0 (ATerm p_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm short_description_1_0 (ATerm o_145 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  static ATerm c_122 (ATerm t);
  static ATerm c_122 (ATerm t)
  {
    ATerm u_122 = t;
    int i_123 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(i_123);
      }
    else
      {
        t = u_122;
        t = Cons_2_0(k_123, c_122, t);
      }
    return(t);
  }
  t = c_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
  if(((g_122 != NULL) && (g_122 != t)))
    _fail(t);
  else
    g_122 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_122 = ATgetFirst((ATermList) t);
      f_122 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL;
        t = not_null(e_122);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = not_null(f_122);
        if(((i_122 != NULL) && (i_122 != t)))
          _fail(t);
        else
          i_122 = t;
        t = not_null(g_122);
        if(((k_122 != NULL) && (k_122 != t)))
          _fail(t);
        else
          k_122 = t;
        t = not_null(i_122);
        if(((m_122 != NULL) && (m_122 != t)))
          _fail(t);
        else
          m_122 = t;
        if(((r_122 != NULL) && (r_122 != t)))
          _fail(t);
        else
          r_122 = t;
        t = h_0(t);
        if(((n_122 != NULL) && (n_122 != t)))
          _fail(t);
        else
          n_122 = t;
        t = not_null(r_122);
        if(((q_122 != NULL) && (q_122 != t)))
          _fail(t);
        else
          q_122 = t;
        t = not_null(h_122);
        t = f_0(t);
        if(((p_122 != NULL) && (p_122 != t)))
          _fail(t);
        else
          p_122 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(n_122)), not_null(p_122));
        if(((l_122 != NULL) && (l_122 != t)))
          _fail(t);
        else
          l_122 = t;
        t = not_null(m_122);
        {
          static ATerm q_16 (ATerm t);
          static ATerm q_16 (ATerm t)
          {
            t = not_null(l_122);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_16, t);
        }
        if(((j_122 != NULL) && (j_122 != t)))
          _fail(t);
        else
          j_122 = t;
      }
    }
  else
    {
      ATerm s_122 = NULL,t_122 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(g_122);
      if(((t_122 != NULL) && (t_122 != t)))
        _fail(t);
      else
        t_122 = t;
      t = term_v_34;
      t = h_0(t);
      if(((s_122 != NULL) && (s_122 != t)))
        _fail(t);
      else
        s_122 = t;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm v_122 = NULL;
  if(((v_122 != NULL) && (v_122 != t)))
    _fail(t);
  else
    v_122 = t;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(r_16, s_16, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm x_122 = NULL,y_122 = NULL;
  if(((y_122 != NULL) && (y_122 != t)))
    _fail(t);
  else
    y_122 = t;
  if(((x_122 != NULL) && (x_122 != t)))
    _fail(t);
  else
    x_122 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_122)), term_l_123);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm t)
{
  ATerm w_122 = NULL;
  static ATerm x_16 (ATerm t);
  static ATerm x_16 (ATerm t)
  {
    ATerm z_122 = NULL,b_123 = NULL;
    if(((b_123 != NULL) && (b_123 != t)))
      _fail(t);
    else
      b_123 = t;
    t = r_145(t);
    if(((z_122 != NULL) && (z_122 != t)))
      _fail(t);
    else
      z_122 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(z_122)), term_m_95);
    t = echo_0_0(t);
    return(t);
  }
  ATerm p_123 = t;
  int t_123 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_124;
      t = get_config_0_0(t);
      if(((w_122 != NULL) && (w_122 != t)))
        _fail(t);
      else
        w_122 = t;
      LocalPopChoice(t_123);
    }
  else
    {
      t = p_123;
      {
        static ATerm t_16 (ATerm t);
        static ATerm t_16 (ATerm t)
        {
          static ATerm u_16 (ATerm t);
          static ATerm u_16 (ATerm t)
          {
            if(((w_122 != NULL) && (w_122 != t)))
              _fail(t);
            else
              w_122 = t;
            return(t);
          }
          t = Program_1_0(u_16, t);
          return(t);
        }
        t = option_defined_1_0(t_16, t);
      }
    }
  {
    static ATerm v_16 (ATerm t);
    static ATerm v_16 (ATerm t)
    {
      t = q_145(t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(v_16, t);
  }
  t = term_e_124;
  t = echo_0_0(t);
  t = term_q_124;
  t = table_get_0_0(t);
  t = reverse_0_0(t);
  t = map_1_0(w_16, t);
  t = try_1_0(x_16, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL,j_123 = NULL,m_123 = NULL,y_16 = NULL,r_18 = NULL;
  if(((j_123 != NULL) && (j_123 != t)))
    _fail(t);
  else
    j_123 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((e_123 != NULL) && (e_123 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((m_123 != NULL) && (m_123 != t)))
    _fail(t);
  else
    m_123 = t;
  t = SSLgetAnnotations(not_null(j_123));
  if(((d_123 != NULL) && (d_123 != t)))
    _fail(t);
  else
    d_123 = t;
  t = not_null(e_123);
  t = d_109(t);
  if(((f_123 != NULL) && (f_123 != t)))
    _fail(t);
  else
    f_123 = t;
  if(((h_123 != NULL) && (h_123 != t)))
    _fail(t);
  else
    h_123 = t;
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_123));
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  t = SSLsetAnnotations(not_null(y_16), not_null(d_123));
  if(((g_123 != NULL) && (g_123 != t)))
    _fail(t);
  else
    g_123 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_123 = NULL,o_123 = NULL;
  static ATerm b_17 (ATerm t);
  static ATerm c_17 (ATerm t);
  static ATerm b_17 (ATerm t)
  {
    static ATerm d_17 (ATerm t);
    static ATerm d_17 (ATerm t)
    {
      t = not_null(n_123);
      return(t);
    }
    t = short_description_1_0(d_17, t);
    return(t);
  }
  static ATerm c_17 (ATerm t)
  {
    static ATerm e_17 (ATerm t);
    static ATerm e_17 (ATerm t)
    {
      t = not_null(n_123);
      return(t);
    }
    t = long_description_1_0(e_17, t);
    return(t);
  }
  if(((o_123 != NULL) && (o_123 != t)))
    _fail(t);
  else
    o_123 = t;
  {
    ATerm j_125 = t;
    int q_125 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_124;
        t = get_config_0_0(t);
        if(((n_123 != NULL) && (n_123 != t)))
          _fail(t);
        else
          n_123 = t;
        LocalPopChoice(q_125);
      }
    else
      {
        t = j_125;
        {
          static ATerm z_16 (ATerm t);
          static ATerm z_16 (ATerm t)
          {
            static ATerm a_17 (ATerm t);
            static ATerm a_17 (ATerm t)
            {
              if(((n_123 != NULL) && (n_123 != t)))
                _fail(t);
              else
                n_123 = t;
              return(t);
            }
            t = Program_1_0(a_17, t);
            return(t);
          }
          t = option_defined_1_0(z_16, t);
        }
      }
  }
  t = not_null(o_123);
  t = default_system_usage_2_0(b_17, c_17, t);
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm x_126 = t;
  int y_126 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      LocalPopChoice(y_126);
    }
  else
    {
      t = x_126;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,w_123 = NULL;
  if(((q_123 != NULL) && (q_123 != t)))
    _fail(t);
  else
    q_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(q_123);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_123 != NULL) && (r_123 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_123 = ATgetFirst((ATermList) t);
          if(((w_123 != NULL) && (w_123 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_123);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,b_124 = NULL;
  if(((x_123 != NULL) && (x_123 != t)))
    _fail(t);
  else
    x_123 = t;
  if(((b_124 != NULL) && (b_124 != t)))
    _fail(t);
  else
    b_124 = t;
  {
    ATerm e_127 = t;
    int p_127 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(p_127);
      }
    else
      {
        t = e_127;
        {
          ATerm c_124 = NULL,f_124 = NULL,g_124 = NULL;
          if(((c_124 != NULL) && (c_124 != t)))
            _fail(t);
          else
            c_124 = t;
          if(((g_124 != NULL) && (g_124 != t)))
            _fail(t);
          else
            g_124 = t;
          t = not_null(c_124);
          if(((f_124 != NULL) && (f_124 != t)))
            _fail(t);
          else
            f_124 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_124));
        }
      }
  }
  if(((y_123 != NULL) && (y_123 != t)))
    _fail(t);
  else
    y_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_127, not_null(y_123));
  t = printnl_0_0(t);
  t = not_null(x_123);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_124;
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
  ATerm y_127 = t;
  int h_128 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      LocalPopChoice(h_128);
    }
  else
    {
      t = y_127;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_124 = NULL,m_124 = NULL;
  t = report_run_time_0_0(t);
  if(((m_124 != NULL) && (m_124 != t)))
    _fail(t);
  else
    m_124 = t;
  t = term_v_34;
  t = whoami_0_0(t);
  if(((j_124 != NULL) && (j_124 != t)))
    _fail(t);
  else
    j_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATinsert(ATempty, term_u_128), not_null(j_124)));
  t = printnl_0_0(t);
  t = term_m_41;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_124;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm n_124 = NULL;
  if(((n_124 != NULL) && (n_124 != t)))
    _fail(t);
  else
    n_124 = t;
  t = SSL_TicksToSeconds(not_null(n_124));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_124 != NULL) && (o_124 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_124 = ATgetArgument(t, 0);
      if(((p_124 != NULL) && (p_124 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_129 = t;
    int k_129 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(o_124), not_null(p_124));
        LocalPopChoice(k_129);
      }
    else
      {
        t = c_129;
        t = SSL_addr(not_null(o_124), not_null(p_124));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t)
{
  ATerm d_130 = t;
  int r_130 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = h_130(t);
      LocalPopChoice(r_130);
    }
  else
    {
      t = d_130;
      {
        ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL;
        if(((r_124 != NULL) && (r_124 != t)))
          _fail(t);
        else
          r_124 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_124 != NULL) && (s_124 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_124 = ATgetFirst((ATermList) t);
            if(((t_124 != NULL) && (t_124 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_124 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(s_124);
        if(((u_124 != NULL) && (u_124 != t)))
          _fail(t);
        else
          u_124 = t;
        t = not_null(t_124);
        if(((v_124 != NULL) && (v_124 != t)))
          _fail(t);
        else
          v_124 = t;
        t = not_null(r_124);
        if(((x_124 != NULL) && (x_124 != t)))
          _fail(t);
        else
          x_124 = t;
        if(((z_124 != NULL) && (z_124 != t)))
          _fail(t);
        else
          z_124 = t;
        t = not_null(v_124);
        t = foldr_2_0(h_130, i_130, t);
        if(((y_124 != NULL) && (y_124 != t)))
          _fail(t);
        else
          y_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_124), not_null(y_124));
        t = i_130(t);
        if(((w_124 != NULL) && (w_124 != t)))
          _fail(t);
        else
          w_124 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL;
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  if(((e_125 != NULL) && (e_125 != t)))
    _fail(t);
  else
    e_125 = t;
  t = not_null(d_125);
  if(((f_125 != NULL) && (f_125 != t)))
    _fail(t);
  else
    f_125 = t;
  t = SSL_explode_term(not_null(f_125));
  if(match_cons(t, sym__2))
    {
      ATerm w_130 = ATgetArgument(t, 0);
      if(((a_125 != NULL) && (a_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_125);
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = not_null(a_125);
  t = foldr_2_0(e_135, f_135, t);
  if(((b_125 != NULL) && (b_125 != t)))
    _fail(t);
  else
    b_125 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(f_17, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_125 != NULL) && (g_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_125 = ATgetArgument(t, 0);
      if(((h_125 != NULL) && (h_125 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_125 != NULL) && (i_125 != t)))
    _fail(t);
  else
    i_125 = t;
  {
    ATerm z_130 = t;
    int j_131 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(g_125), not_null(h_125));
        LocalPopChoice(j_131);
      }
    else
      {
        t = z_130;
        t = SSL_gtr(not_null(g_125), not_null(h_125));
      }
  }
  t = not_null(i_125);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_125 = NULL;
  ATerm k_131 = t;
  int m_131 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_125 = NULL,s_125 = NULL,t_125 = NULL;
      if(((l_125 != NULL) && (l_125 != t)))
        _fail(t);
      else
        l_125 = t;
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
      t = not_null(s_125);
      if(((k_125 != NULL) && (k_125 != t)))
        _fail(t);
      else
        k_125 = t;
      t = not_null(t_125);
      if(((k_125 != NULL) && (k_125 != t)))
        _fail(t);
      else
        k_125 = t;
      t = not_null(l_125);
      LocalPopChoice(m_131);
    }
  else
    {
      t = k_131;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  static ATerm g_17 (ATerm t);
  static ATerm g_17 (ATerm t)
  {
    ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL;
    if(((u_125 != NULL) && (u_125 != t)))
      _fail(t);
    else
      u_125 = t;
    if(((w_125 != NULL) && (w_125 != t)))
      _fail(t);
    else
      w_125 = t;
    t = term_g_19;
    t = get_config_0_0(t);
    if(((v_125 != NULL) && (v_125 != t)))
      _fail(t);
    else
      v_125 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_125), term_m_41);
    t = geq_0_0(t);
    t = not_null(u_125);
    t = n_140(t);
    return(t);
  }
  t = try_1_0(g_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL;
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = run_time_0_0(t);
  if(((x_125 != NULL) && (x_125 != t)))
    _fail(t);
  else
    x_125 = t;
  t = not_null(a_126);
  if(((z_125 != NULL) && (z_125 != t)))
    _fail(t);
  else
    z_125 = t;
  t = term_v_34;
  t = whoami_0_0(t);
  if(((y_125 != NULL) && (y_125 != t)))
    _fail(t);
  else
    y_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_131), not_null(x_125)), term_k_55), not_null(y_125)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_p_20;
  t = exit_0_0(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL;
  if(((b_126 != NULL) && (b_126 != t)))
    _fail(t);
  else
    b_126 = t;
  if(((c_126 != NULL) && (c_126 != t)))
    _fail(t);
  else
    c_126 = t;
  t = term_o_131;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_131, term_p_131, not_null(b_126));
  t = table_put_0_0(t);
  t = not_null(c_126);
  return(t);
}
ATerm hashtable_remove_0_1 (ATerm x_59, ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((d_126 != NULL) && (d_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_remove(not_null(d_126), not_null(x_59));
  if(((f_126 != NULL) && (f_126 != t)))
    _fail(t);
  else
    f_126 = t;
  if(((e_126 != NULL) && (e_126 != t)))
    _fail(t);
  else
    e_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(e_126));
  return(t);
}
ATerm hashtable_destroy_0_0 (ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((g_126 != NULL) && (g_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_destroy(not_null(g_126));
  if(((i_126 != NULL) && (i_126 != t)))
    _fail(t);
  else
    i_126 = t;
  if(((h_126 != NULL) && (h_126 != t)))
    _fail(t);
  else
    h_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(h_126));
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL;
  if(((j_126 != NULL) && (j_126 != t)))
    _fail(t);
  else
    j_126 = t;
  if(((k_126 != NULL) && (k_126 != t)))
    _fail(t);
  else
    k_126 = t;
  t = table_hashtable_0_0(t);
  if(((l_126 != NULL) && (l_126 != t)))
    _fail(t);
  else
    l_126 = t;
  t = lookup_table_0_1(not_null(j_126), t);
  t = hashtable_destroy_0_0(t);
  t = not_null(l_126);
  t = hashtable_remove_0_1(not_null(j_126), t);
  t = not_null(k_126);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm m_126 = NULL;
  if(((m_126 != NULL) && (m_126 != t)))
    _fail(t);
  else
    m_126 = t;
  t = SSL_exit(not_null(m_126));
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_126 != NULL) && (n_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_126 = ATgetArgument(t, 0);
      if(((o_126 != NULL) && (o_126 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((p_126 != NULL) && (p_126 != t)))
    _fail(t);
  else
    p_126 = t;
  t = SSL_printnl(not_null(n_126), not_null(o_126));
  t = not_null(p_126);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,i_17 = NULL,s_18 = NULL;
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((r_126 != NULL) && (r_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = SSLgetAnnotations(not_null(v_126));
  if(((q_126 != NULL) && (q_126 != t)))
    _fail(t);
  else
    q_126 = t;
  t = not_null(r_126);
  t = e_109(t);
  if(((s_126 != NULL) && (s_126 != t)))
    _fail(t);
  else
    s_126 = t;
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_126));
  if(((i_17 != NULL) && (i_17 != t)))
    _fail(t);
  else
    i_17 = t;
  t = SSLsetAnnotations(not_null(i_17), not_null(q_126));
  if(((t_126 != NULL) && (t_126 != t)))
    _fail(t);
  else
    t_126 = t;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm z_126 = NULL;
  if(((z_126 != NULL) && (z_126 != t)))
    _fail(t);
  else
    z_126 = t;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm a_127 = NULL;
  if(((a_127 != NULL) && (a_127 != t)))
    _fail(t);
  else
    a_127 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  static ATerm b_127 (ATerm t);
  static ATerm b_127 (ATerm t)
  {
    ATerm q_131 = t;
    int r_131 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_123, j_17, t);
        LocalPopChoice(r_131);
      }
    else
      {
        t = q_131;
        t = Cons_2_0(k_17, b_127, t);
      }
    return(t);
  }
  t = b_127(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm h_144 (ATerm), ATerm t)
{
  t = fetch_1_0(h_144, t);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL;
  if(((d_127 != NULL) && (d_127 != t)))
    _fail(t);
  else
    d_127 = t;
  if(((c_127 != NULL) && (c_127 != t)))
    _fail(t);
  else
    c_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, not_null(c_127));
  t = table_get_0_0(t);
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm s_131 = t;
  int t_131 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_115(t);
      LocalPopChoice(t_131);
    }
  else
    {
      t = s_131;
      {
        ATerm f_127 = NULL,g_127 = NULL;
        if(((f_127 != NULL) && (f_127 != t)))
          _fail(t);
        else
          f_127 = t;
        if(((g_127 != NULL) && (g_127 != t)))
          _fail(t);
        else
          g_127 = t;
      }
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_v_131;
  t = set_config_0_0(t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_w_131;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm h_127 = NULL;
  if(((h_127 != NULL) && (h_127 != t)))
    _fail(t);
  else
    h_127 = t;
  t = term_v_131;
  t = set_config_0_0(t);
  t = term_y_131;
  t = set_config_0_0(t);
  t = term_z_131;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_c_132;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_132 = t;
  int e_132 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_17, m_17, n_17, t);
      LocalPopChoice(e_132);
    }
  else
    {
      t = d_132;
      t = Option_3_0(o_17, p_17, q_17, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_127 != NULL) && (i_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_127 = ATgetArgument(t, 0);
      if(((j_127 != NULL) && (j_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(i_127), t);
  t = hashtable_get_0_1(not_null(j_127), t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_127 = NULL,l_127 = NULL,m_127 = NULL,n_127 = NULL,q_127 = NULL,r_127 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((l_127 != NULL) && (l_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_127 = ATgetArgument(t, 0);
      if(((m_127 != NULL) && (m_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_127 = ATgetArgument(t, 1);
      if(((k_127 != NULL) && (k_127 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((n_127 != NULL) && (n_127 != t)))
    _fail(t);
  else
    n_127 = t;
  if(((r_127 != NULL) && (r_127 != t)))
    _fail(t);
  else
    r_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_127), not_null(m_127));
  {
    ATerm f_132 = t;
    int g_132 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        LocalPopChoice(g_132);
      }
    else
      {
        t = f_132;
        t = (ATerm) ATempty;
      }
  }
  if(((q_127 != NULL) && (q_127 != t)))
    _fail(t);
  else
    q_127 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_127), not_null(m_127), (ATerm) ATinsert(CheckATermList(not_null(q_127)), not_null(k_127)));
  t = table_put_0_0(t);
  t = not_null(n_127);
  return(t);
}
ATerm register_usage_1_0 (ATerm n_145 (ATerm), ATerm t)
{
  ATerm s_127 = NULL,v_127 = NULL;
  if(((v_127 != NULL) && (v_127 != t)))
    _fail(t);
  else
    v_127 = t;
  t = term_v_34;
  t = n_145(t);
  if(((s_127 != NULL) && (s_127 != t)))
    _fail(t);
  else
    s_127 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_124, term_l_124, not_null(s_127));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL;
  if(((z_127 != NULL) && (z_127 != t)))
    _fail(t);
  else
    z_127 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(z_127);
      t = register_usage_1_0(e_0, t);
    }
  else
    {
      ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL,g_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((a_128 != NULL) && (a_128 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_128 = ATgetFirst((ATermList) t);
          if(((b_128 != NULL) && (b_128 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(a_128);
      if(((d_128 != NULL) && (d_128 != t)))
        _fail(t);
      else
        d_128 = t;
      t = not_null(b_128);
      if(((c_128 != NULL) && (c_128 != t)))
        _fail(t);
      else
        c_128 = t;
      t = not_null(z_127);
      if(((g_128 != NULL) && (g_128 != t)))
        _fail(t);
      else
        g_128 = t;
      t = not_null(d_128);
      t = b_0(t);
      t = not_null(g_128);
      if(((f_128 != NULL) && (f_128 != t)))
        _fail(t);
      else
        f_128 = t;
      t = term_v_34;
      t = c_0(t);
      if(((e_128 != NULL) && (e_128 != t)))
        _fail(t);
      else
        e_128 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(c_128)), not_null(e_128));
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm i_128 = NULL;
  if(((i_128 != NULL) && (i_128 != t)))
    _fail(t);
  else
    i_128 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(i_128);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(i_128);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(i_128);
        }
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_i_132;
  t = set_config_0_0(t);
  t = term_j_132;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_k_132;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(r_17, s_17, t_17, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((j_128 != NULL) && (j_128 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        j_128 = ATgetFirst((ATermList) t);
      if(((k_128 != NULL) && (k_128 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        k_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(k_128)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_128)));
  return(t);
}
ATerm Cons_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,u_17 = NULL,t_18 = NULL;
  if(((s_128 != NULL) && (s_128 != t)))
    _fail(t);
  else
    s_128 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((m_128 != NULL) && (m_128 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        m_128 = ATgetFirst((ATermList) t);
      if(((n_128 != NULL) && (n_128 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        n_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((t_128 != NULL) && (t_128 != t)))
    _fail(t);
  else
    t_128 = t;
  t = SSLgetAnnotations(not_null(s_128));
  if(((l_128 != NULL) && (l_128 != t)))
    _fail(t);
  else
    l_128 = t;
  t = not_null(m_128);
  t = y_100(t);
  if(((o_128 != NULL) && (o_128 != t)))
    _fail(t);
  else
    o_128 = t;
  t = not_null(n_128);
  t = z_100(t);
  if(((p_128 != NULL) && (p_128 != t)))
    _fail(t);
  else
    p_128 = t;
  if(((r_128 != NULL) && (r_128 != t)))
    _fail(t);
  else
    r_128 = t;
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  t = (ATerm) ATinsert(CheckATermList(not_null(p_128)), not_null(o_128));
  if(((u_17 != NULL) && (u_17 != t)))
    _fail(t);
  else
    u_17 = t;
  t = SSLsetAnnotations(not_null(u_17), not_null(l_128));
  if(((q_128 != NULL) && (q_128 != t)))
    _fail(t);
  else
    q_128 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
  if(((y_128 != NULL) && (y_128 != t)))
    _fail(t);
  else
    y_128 = t;
  if(((a_129 != NULL) && (a_129 != t)))
    _fail(t);
  else
    a_129 = t;
  if(((z_128 != NULL) && (z_128 != t)))
    _fail(t);
  else
    z_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_124, not_null(z_128));
  t = set_config_0_0(t);
  t = not_null(y_128);
  if(((x_128 != NULL) && (x_128 != t)))
    _fail(t);
  else
    x_128 = t;
  if(((w_128 != NULL) && (w_128 != t)))
    _fail(t);
  else
    w_128 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_128));
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm b_129 = NULL;
  if(((b_129 != NULL) && (b_129 != t)))
    _fail(t);
  else
    b_129 = t;
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_145 (ATerm), ATerm t)
{
  ATerm v_128 = NULL;
  static ATerm x_17 (ATerm t);
  static ATerm x_17 (ATerm t)
  {
    ATerm l_132 = t;
    int m_132 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_132 = t;
        int o_132 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            LocalPopChoice(o_132);
          }
        else
          {
            t = n_132;
            t = l_145(t);
            t = Cons_2_0(y_17, x_17, t);
          }
        LocalPopChoice(m_132);
      }
    else
      {
        t = l_132;
        t = UndefinedOption_0_0(t);
      }
    return(t);
  }
  if(((v_128 != NULL) && (v_128 != t)))
    _fail(t);
  else
    v_128 = t;
  {
    static ATerm v_17 (ATerm t);
    static ATerm v_17 (ATerm t)
    {
      t = term_p_132;
      t = l_145(t);
      return(t);
    }
    t = try_1_0(v_17, t);
  }
  t = not_null(v_128);
  t = Cons_2_0(w_17, x_17, t);
  return(t);
}
ATerm hashtable_put_0_2 (ATerm s_59, ATerm t_59, ATerm t)
{
  ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((d_129 != NULL) && (d_129 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_put(not_null(d_129), not_null(s_59), not_null(t_59));
  if(((f_129 != NULL) && (f_129 != t)))
    _fail(t);
  else
    f_129 = t;
  if(((e_129 != NULL) && (e_129 != t)))
    _fail(t);
  else
    e_129 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(e_129));
  return(t);
}
ATerm hashtable_get_0_1 (ATerm v_59, ATerm t)
{
  ATerm g_129 = NULL;
  if(match_cons(t, sym_Hashtable_1))
    {
      if(((g_129 != NULL) && (g_129 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_hashtable_get(not_null(g_129), not_null(v_59));
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_60, ATerm b_60, ATerm t)
{
  ATerm l_129 = NULL,m_129 = NULL;
  t = SSL_hashtable_create(not_null(a_60), not_null(b_60));
  if(((m_129 != NULL) && (m_129 != t)))
    _fail(t);
  else
    m_129 = t;
  if(((l_129 != NULL) && (l_129 != t)))
    _fail(t);
  else
    l_129 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(l_129));
  return(t);
}
ATerm new_hashtable_0_0 (ATerm t)
{
  ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL;
  if(((q_129 != NULL) && (q_129 != t)))
    _fail(t);
  else
    q_129 = t;
  t = term_q_132;
  if(((n_129 != NULL) && (n_129 != t)))
    _fail(t);
  else
    n_129 = t;
  t = not_null(q_129);
  if(((p_129 != NULL) && (p_129 != t)))
    _fail(t);
  else
    p_129 = t;
  t = term_r_132;
  if(((o_129 != NULL) && (o_129 != t)))
    _fail(t);
  else
    o_129 = t;
  t = not_null(p_129);
  t = new_hashtable_0_2(not_null(n_129), not_null(o_129), t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL;
  if(((r_129 != NULL) && (r_129 != t)))
    _fail(t);
  else
    r_129 = t;
  if(((u_129 != NULL) && (u_129 != t)))
    _fail(t);
  else
    u_129 = t;
  t = new_hashtable_0_0(t);
  if(((s_129 != NULL) && (s_129 != t)))
    _fail(t);
  else
    s_129 = t;
  t = not_null(u_129);
  if(((t_129 != NULL) && (t_129 != t)))
    _fail(t);
  else
    t_129 = t;
  t = table_hashtable_0_0(t);
  t = hashtable_put_0_2(not_null(r_129), not_null(s_129), t);
  t = not_null(t_129);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_129 = NULL,w_129 = NULL;
  t = SSL_table_hashtable();
  if(((w_129 != NULL) && (w_129 != t)))
    _fail(t);
  else
    w_129 = t;
  if(((v_129 != NULL) && (v_129 != t)))
    _fail(t);
  else
    v_129 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, not_null(v_129));
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_56, ATerm t)
{
  t = table_hashtable_0_0(t);
  {
    ATerm s_132 = t;
    int u_132 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = hashtable_get_0_1(not_null(p_56), t);
        LocalPopChoice(u_132);
      }
    else
      {
        t = s_132;
        {
          ATerm x_129 = NULL,y_129 = NULL;
          if(((x_129 != NULL) && (x_129 != t)))
            _fail(t);
          else
            x_129 = t;
          if(((y_129 != NULL) && (y_129 != t)))
            _fail(t);
          else
            y_129 = t;
          t = not_null(p_56);
          t = table_create_0_0(t);
          t = not_null(y_129);
          t = hashtable_get_0_1(not_null(p_56), t);
        }
      }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL;
  if(((c_130 != NULL) && (c_130 != t)))
    _fail(t);
  else
    c_130 = t;
  if(match_cons(t, sym__3))
    {
      if(((z_129 != NULL) && (z_129 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_129 = ATgetArgument(t, 0);
      if(((a_130 != NULL) && (a_130 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_130 = ATgetArgument(t, 1);
      if(((b_130 != NULL) && (b_130 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = lookup_table_0_1(not_null(z_129), t);
  t = hashtable_put_0_2(not_null(a_130), not_null(b_130), t);
  t = not_null(c_130);
  return(t);
}
ATerm parse_options_3_0 (ATerm i_145 (ATerm), ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL;
  if(((g_130 != NULL) && (g_130 != t)))
    _fail(t);
  else
    g_130 = t;
  t = term_v_132;
  t = table_put_0_0(t);
  t = not_null(g_130);
  {
    static ATerm z_17 (ATerm t);
    static ATerm z_17 (ATerm t)
    {
      ATerm w_132 = t;
      int x_132 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_145(t);
          LocalPopChoice(x_132);
        }
      else
        {
          t = w_132;
          {
            ATerm y_132 = t;
            int z_132 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                LocalPopChoice(z_132);
              }
            else
              {
                t = y_132;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_17, t);
  }
  {
    static ATerm a_18 (ATerm t);
    static ATerm a_18 (ATerm t)
    {
      ATerm a_133 = t;
      int b_133 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_130 (ATerm m_130, ATerm t);
          static ATerm q_130 (ATerm m_130, ATerm t)
          {
            ATerm n_130 = NULL;
            t = not_null(m_130);
            if(((n_130 != NULL) && (n_130 != t)))
              _fail(t);
            else
              n_130 = t;
            t = not_null(m_130);
            {
              ATerm c_133 = t;
              int d_133 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_132;
                  t = get_config_0_0(t);
                  LocalPopChoice(d_133);
                }
              else
                {
                  t = c_133;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = not_null(n_130);
            t = j_145(t);
            t = term_p_20;
            t = exit_0_0(t);
            return(t);
          }
          ATerm o_130 = NULL;
          if(((o_130 != NULL) && (o_130 != t)))
            _fail(t);
          else
            o_130 = t;
          {
            ATerm e_133 = t;
            int f_133 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_130(not_null(o_130), t);
                LocalPopChoice(f_133);
              }
            else
              {
                t = e_133;
                {
                  ATerm p_130 = NULL;
                  t = not_null(o_130);
                  if(((p_130 != NULL) && (p_130 != t)))
                    _fail(t);
                  else
                    p_130 = t;
                  t = term_u_131;
                  t = get_config_0_0(t);
                  t = not_null(p_130);
                  t = k_145(t);
                  t = term_p_20;
                  t = exit_0_0(t);
                }
              }
          }
          LocalPopChoice(b_133);
        }
      else
        {
          t = a_133;
          {
            static ATerm b_18 (ATerm t);
            static ATerm b_18 (ATerm t)
            {
              static ATerm c_18 (ATerm t);
              static ATerm c_18 (ATerm t)
              {
                if(((e_130 != NULL) && (e_130 != t)))
                  _fail(t);
                else
                  e_130 = t;
                return(t);
              }
              t = Undefined_1_0(c_18, t);
              return(t);
            }
            t = option_defined_1_0(b_18, t);
          }
          t = (ATerm) ATmakeAppl(sym__2, term_l_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_130)), term_g_133));
          t = printnl_0_0(t);
          t = j_145(t);
          t = term_m_41;
          t = exit_0_0(t);
        }
      return(t);
    }
    t = try_1_0(a_18, t);
  }
  if(((f_130 != NULL) && (f_130 != t)))
    _fail(t);
  else
    f_130 = t;
  t = term_i_124;
  t = table_destroy_0_0(t);
  t = not_null(f_130);
  return(t);
}
ATerm option_wrap_5_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t)
{
  t = parse_options_3_0(l_143, m_143, n_143, t);
  t = store_options_0_0(t);
  t = o_143(t);
  {
    ATerm j_133 = t;
    int k_133 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(k_133);
      }
    else
      {
        t = j_133;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  t = option_wrap_5_0(h_143, i_143, system_about_0_0, j_143, k_143, t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm s_130 = NULL;
  if(((s_130 != NULL) && (s_130 != t)))
    _fail(t);
  else
    s_130 = t;
  return(t);
}
ATerm option_wrap_2_0 (ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm t)
{
  t = option_wrap_4_0(f_143, system_usage_0_0, d_18, g_143, t);
  return(t);
}
ATerm xtc_wrap_2_0 (ATerm k_152 (ATerm), ATerm l_152 (ATerm), ATerm t)
{
  static ATerm e_18 (ATerm t);
  static ATerm e_18 (ATerm t)
  {
    ATerm l_133 = t;
    int m_133 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_152(t);
        LocalPopChoice(m_133);
      }
    else
      {
        t = l_133;
        t = xtc_contract_options_0_0(t);
      }
    return(t);
  }
  t = option_wrap_2_0(e_18, l_152, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm n_133 = t;
  int o_133 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = repository_option_0_0(t);
      LocalPopChoice(o_133);
    }
  else
    {
      t = n_133;
      t = verbose_option_0_0(t);
    }
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL,x_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL;
  t = term_q_133;
  t = set_config_0_0(t);
  if(((i_131 != NULL) && (i_131 != t)))
    _fail(t);
  else
    i_131 = t;
  t = term_r_133;
  if(((h_131 != NULL) && (h_131 != t)))
    _fail(t);
  else
    h_131 = t;
  t = not_null(i_131);
  t = named_test_suite_1_1(xtc_repository_tests_0_0, not_null(h_131), t);
  if(((g_131 != NULL) && (g_131 != t)))
    _fail(t);
  else
    g_131 = t;
  t = term_s_133;
  if(((f_131 != NULL) && (f_131 != t)))
    _fail(t);
  else
    f_131 = t;
  t = not_null(g_131);
  t = named_test_suite_1_1(xtc_register_tests_0_0, not_null(f_131), t);
  if(((e_131 != NULL) && (e_131 != t)))
    _fail(t);
  else
    e_131 = t;
  t = term_t_133;
  if(((d_131 != NULL) && (d_131 != t)))
    _fail(t);
  else
    d_131 = t;
  t = not_null(e_131);
  t = named_test_suite_1_1(xtc_search_tests_0_0, not_null(d_131), t);
  if(((c_131 != NULL) && (c_131 != t)))
    _fail(t);
  else
    c_131 = t;
  t = term_u_133;
  if(((b_131 != NULL) && (b_131 != t)))
    _fail(t);
  else
    b_131 = t;
  t = not_null(c_131);
  t = named_test_suite_1_1(xtc_find_tests_0_0, not_null(b_131), t);
  if(((a_131 != NULL) && (a_131 != t)))
    _fail(t);
  else
    a_131 = t;
  t = term_v_133;
  if(((x_130 != NULL) && (x_130 != t)))
    _fail(t);
  else
    x_130 = t;
  t = not_null(a_131);
  t = named_test_suite_1_1(xtc_model_tests_0_0, not_null(x_130), t);
  if(((u_130 != NULL) && (u_130 != t)))
    _fail(t);
  else
    u_130 = t;
  t = term_w_133;
  if(((t_130 != NULL) && (t_130 != t)))
    _fail(t);
  else
    t_130 = t;
  t = not_null(u_130);
  t = named_test_suite_1_1(xtc_adapt_tests_0_0, not_null(t_130), t);
  return(t);
}
ATerm main_lib_test_0_0 (ATerm t)
{
  t = xtc_wrap_2_0(f_18, g_18, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = main_lib_test_0_0(t);
  return(t);
}
