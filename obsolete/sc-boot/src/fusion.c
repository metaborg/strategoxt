#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,m_45);
VARDECL(AFun,b_41);
VARDECL(AFun,w_39);
VARDECL(AFun,l_39);
VARDECL(AFun,d_34);
VARDECL(AFun,u_33);
VARDECL(AFun,j_33);
VARDECL(AFun,v_32);
VARDECL(AFun,m_31);
VARDECL(AFun,z_30);
VARDECL(AFun,k_30);
VARDECL(AFun,g_29);
VARDECL(AFun,k_28);
VARDECL(AFun,p_26);
VARDECL(AFun,c_19);
VARDECL(AFun,v_16);
VARDECL(AFun,u_16);
VARDECL(AFun,j_16);
VARDECL(AFun,q_10);
VARDECL(AFun,u_6);
VARDECL(AFun,d_5);
VARDECL(AFun,l_4);
VARDECL(AFun,k_4);
VARDECL(AFun,i_4);
VARDECL(AFun,t_3);
VARDECL(AFun,m_3);
VARDECL(AFun,j_3);
VARDECL(AFun,i_3);
VARDECL(AFun,h_3);
VARDECL(AFun,g_3);
VARDECL(AFun,f_3);
VARDECL(AFun,e_3);
VARDECL(AFun,c_3);
VARDECL(AFun,a_3);
VARDECL(AFun,y_2);
VARDECL(AFun,w_2);
VARDECL(AFun,t_2);
VARDECL(AFun,q_2);
VARDECL(AFun,n_2);
VARDECL(AFun,u_1);
VARDECL(AFun,m_1);
VARDECL(AFun,c_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,s_0);
VARDECL(AFun,r_0);
VARDECL(AFun,l_0);
VARDECL(AFun,k_0);
VARDECL(AFun,i_0);
VARDECL(AFun,e_0);
VARDECL(AFun,d_0);
VARDECL(AFun,c_0);
VARDECL(AFun,b_0);
VARDECL(AFun,a_0);
PROCDECL(_stratego_e_9);
PROCDECL(_stratego_f_9);
PROCDECL(_stratego_h_9);
PROCDECL(_stratego_i_9);
PROCDECL(_stratego_j_9);
PROCDECL(_stratego_k_9);
PROCDECL(_stratego_l_9);
PROCDECL(_stratego_m_9);
PROCDECL(_stratego_s_9);
PROCDECL(_stratego_t_9);
PROCDECL(_stratego_u_9);
PROCDECL(_stratego_v_9);
PROCDECL(_stratego_w_9);
PROCDECL(_stratego_x_9);
PROCDECL(_stratego_y_9);
PROCDECL(_stratego_z_9);
PROCDECL(_stratego_a_10);
PROCDECL(_stratego_b_10);
PROCDECL(_stratego_d_10);
PROCDECL(_stratego_e_10);
PROCDECL(_stratego_f_10);
PROCDECL(_stratego_g_10);
PROCDECL(_stratego_h_10);
PROCDECL(_stratego_i_10);
PROCDECL(_stratego_r_10);
PROCDECL(_stratego_s_10);
PROCDECL(_stratego_n_12);
PROCDECL(_stratego_o_12);
PROCDECL(_stratego_p_12);
PROCDECL(_stratego_q_12);
PROCDECL(_stratego_r_12);
PROCDECL(_stratego_s_12);
PROCDECL(_stratego_t_12);
PROCDECL(_stratego_u_12);
PROCDECL(_stratego_v_12);
PROCDECL(_stratego_w_12);
PROCDECL(_stratego_x_12);
PROCDECL(_stratego_y_12);
PROCDECL(_stratego_z_12);
PROCDECL(_stratego_a_13);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(m_45,ATmakeAFun("Undefined",1,0));
  MOVE(b_41,ATmakeAFun("Statistics",0,0));
  MOVE(w_39,ATmakeAFun("DeclVersion",1,0));
  MOVE(l_39,ATmakeAFun("Verbose",0,0));
  MOVE(d_34,ATmakeAFun("Help",0,0));
  MOVE(u_33,ATmakeAFun("Version",0,0));
  MOVE(j_33,ATmakeAFun("stdin",0,0));
  MOVE(v_32,ATmakeAFun("Input",1,0));
  MOVE(m_31,ATmakeAFun("Binary",0,0));
  MOVE(z_30,ATmakeAFun("stdout",0,0));
  MOVE(k_30,ATmakeAFun("Output",1,0));
  MOVE(g_29,ATmakeAFun("Runtime",1,0));
  MOVE(k_28,ATmakeAFun("Silent",0,0));
  MOVE(p_26,ATmakeAFun("Program",1,0));
  MOVE(c_19,ATmakeAFun("Mark",0,0));
  MOVE(v_16,ATmakeAFun("SVar",1,0));
  MOVE(u_16,ATmakeAFun("All",1,0));
  MOVE(j_16,ATmakeAFun("Rec",2,0));
  MOVE(q_10,ATmakeAFun("DynamicRules",1,0));
  MOVE(u_6,ATmakeAFun("LRule",1,0));
  MOVE(d_5,ATmakeAFun("Call",2,0));
  MOVE(l_4,ATmakeAFun("StratRule",3,0));
  MOVE(k_4,ATmakeAFun("Rule",3,0));
  MOVE(i_4,ATmakeAFun("SRule",1,0));
  MOVE(t_3,ATmakeAFun("Con",3,0));
  MOVE(m_3,ATmakeAFun("Wld",0,0));
  MOVE(j_3,ATmakeAFun("Let",2,0));
  MOVE(i_3,ATmakeAFun("LChoice",2,0));
  MOVE(h_3,ATmakeAFun("Choice",2,0));
  MOVE(g_3,ATmakeAFun("Fail",0,0));
  MOVE(f_3,ATmakeAFun("Id",0,0));
  MOVE(e_3,ATmakeAFun("InfixApp",3,0));
  MOVE(c_3,ATmakeAFun("AM",2,0));
  MOVE(a_3,ATmakeAFun("MA",2,0));
  MOVE(y_2,ATmakeAFun("BA",2,0));
  MOVE(w_2,ATmakeAFun("Lets",2,0));
  MOVE(t_2,ATmakeAFun("LChoices",1,0));
  MOVE(q_2,ATmakeAFun("Choices",1,0));
  MOVE(n_2,ATmakeAFun("Seqs",1,0));
  MOVE(u_1,ATmakeAFun("App",2,0));
  MOVE(m_1,ATmakeAFun("Cong",2,0));
  MOVE(c_1,ATmakeAFun("Op",2,0));
  MOVE(b_1,ATmakeAFun("Prim",1,0));
  MOVE(a_1,ATmakeAFun("BAM",3,0));
  MOVE(z_0,ATmakeAFun("Where",1,0));
  MOVE(y_0,ATmakeAFun("Seq",2,0));
  MOVE(x_0,ATmakeAFun("Scope",2,0));
  MOVE(s_0,ATmakeAFun("Var",1,0));
  MOVE(r_0,ATmakeAFun("Explode",2,0));
  MOVE(l_0,ATmakeAFun("ExplodeCong",2,0));
  MOVE(k_0,ATmakeAFun("Build",1,0));
  MOVE(i_0,ATmakeAFun("Match",1,0));
  MOVE(e_0,ATmakeAFun("TNil",0,0));
  MOVE(d_0,ATmakeAFun("Nil",0,0));
  MOVE(c_0,ATmakeAFun("Cons",2,0));
  MOVE(b_0,ATmakeAFun("stderr",0,0));
  MOVE(a_0,ATmakeAFun("TCons",2,0));
ENDPROC

PROC(_stratego_e_9)
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_n_12);
  Epopd(0,1);
  Tpop();
ENDPROC

PROC(_stratego_f_9)
  Epushd(0,3);
  MoveTop(0,1);
  goto l_6;
  l_6 :
  TestFunFC(i_0,&&h_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_0);
  goto v_13;
  h_0 :
  TestFunFC(k_0,&&j_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_0);
  goto w_13;
  j_0 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(g_0);
  goto x_13;
  g_0 :
  goto f_0;
  v_13 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_0);
  z_13 :
  Cpush(o_0);
  Epushd(2,3);
  MoveTop(2,1);
  goto f_6;
  f_6 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(q_0);
  goto a_14;
  q_0 :
  goto p_0;
  a_14 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(1,1)));
  Return();
  p_0 :
  Epopd(2,3);
  goto n_0;
  o_0 :
  IsAppl();
  OneInit();
  u_0 :
  OneNextSon();
  Cpush(u_0);
  Rpush(w_0);
  goto z_13;
  w_0 :
  Cpop();
  OneBuild();
  goto t_0;
  n_0 :
  Cpop();
  t_0 :
  Return();
  m_0 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(1,1);
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(i_0,Egetd(1,4)),(ATerm)ATmakeAppl1(z_0,(ATerm)ATmakeAppl3(a_1,(ATerm)ATmakeAppl1(b_1,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl1(s_0,Egetd(1,1)),(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(1,3),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TNil"),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl0(d_0)))))))));
  Epopd(1,4);
  Return();
  w_13 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(d_1);
  d_14 :
  Cpush(f_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_6;
  j_6 :
  TestFunFC(r_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(h_1);
  goto e_14;
  h_1 :
  goto g_1;
  e_14 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(1,1)));
  Return();
  g_1 :
  Epopd(2,3);
  goto e_1;
  f_1 :
  IsAppl();
  OneInit();
  j_1 :
  OneNextSon();
  Cpush(j_1);
  Rpush(l_1);
  goto d_14;
  l_1 :
  Cpop();
  OneBuild();
  goto i_1;
  e_1 :
  Cpop();
  i_1 :
  Return();
  d_1 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl3(a_1,(ATerm)ATmakeAppl1(b_1,ATmakeString("_ST_mkterm")),(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(1,2),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(1,3),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TNil"),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl1(s_0,Egetd(1,1))),(ATerm)ATmakeAppl1(k_0,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  x_13 :
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(b_1,ATmakeString("_ST_explode_term")),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl2(m_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(m_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(m_1,ATmakeString("TNil"),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl1(b_1,ATmakeString("_ST_mkterm")))));
  Return();
  f_0 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_h_9)
  Epushd(0,2);
  MoveTop(0,1);
  goto l_14;
  l_14 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(o_1);
  goto y_14;
  o_1 :
  goto n_1;
  y_14 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(p_1);
  a_15 :
  Cpush(r_1);
  Epushd(2,3);
  MoveTop(2,1);
  goto j_14;
  j_14 :
  TestFunFC(u_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(t_1);
  goto b_15;
  t_1 :
  goto s_1;
  b_15 :
  Move(1,2,2,2);
  Move(1,3,2,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(1,1)));
  Return();
  s_1 :
  Epopd(2,3);
  goto q_1;
  r_1 :
  IsAppl();
  OneInit();
  w_1 :
  OneNextSon();
  Cpush(w_1);
  Rpush(y_1);
  goto a_15;
  y_1 :
  Cpop();
  OneBuild();
  goto v_1;
  q_1 :
  Cpop();
  v_1 :
  Return();
  p_1 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl3(a_1,Egetd(1,2),Egetd(1,3),(ATerm)ATmakeAppl1(s_0,Egetd(1,1))),(ATerm)ATmakeAppl1(k_0,Egetd(1,4)))));
  Epopd(1,4);
  Return();
  n_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_i_9)
  Epushd(0,2);
  MoveTop(0,1);
  goto i_15;
  i_15 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(a_2);
  goto u_15;
  a_2 :
  goto z_1;
  u_15 :
  Epushd(1,3);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(b_2);
  v_15 :
  Cpush(d_2);
  Epushd(2,4);
  MoveTop(2,1);
  goto f_15;
  f_15 :
  TestFunFC(u_1,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  goto g_15;
  g_15 :
  TestFunFC(k_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(f_2);
  goto w_15;
  f_2 :
  goto e_2;
  w_15 :
  Move(1,2,2,3);
  Move(1,1,2,4);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Return();
  e_2 :
  Epopd(2,4);
  goto c_2;
  d_2 :
  IsAppl();
  OneInit();
  h_2 :
  OneNextSon();
  Cpush(h_2);
  Rpush(j_2);
  goto v_15;
  j_2 :
  Cpop();
  OneBuild();
  goto g_2;
  c_2 :
  Cpop();
  g_2 :
  Return();
  b_2 :
  MoveTop(1,3);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl1(k_0,Egetd(1,3)));
  Epopd(1,3);
  Return();
  z_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_j_9)
  Epushd(0,6);
  MoveTop(0,3);
  goto k_16;
  k_16 :
  TestFunFC(n_2,&&m_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto l_16;
  l_16 :
  TestFunFC(d_0,&&o_2,Egetd(0,4));
  Rpush(l_2);
  goto o_17;
  o_2 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(l_2);
  goto p_17;
  m_2 :
  TestFunFC(q_2,&&p_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto m_16;
  m_16 :
  TestFunFC(d_0,&&r_2,Egetd(0,4));
  Rpush(l_2);
  goto q_17;
  r_2 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(l_2);
  goto r_17;
  p_2 :
  TestFunFC(t_2,&&s_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  goto n_16;
  n_16 :
  TestFunFC(d_0,&&u_2,Egetd(0,4));
  Rpush(l_2);
  goto s_17;
  u_2 :
  TestFunFC(c_0,&&fail,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  Rpush(l_2);
  goto t_17;
  s_2 :
  TestFunFC(w_2,&&v_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(l_2);
  goto u_17;
  v_2 :
  TestFunFC(y_2,&&x_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(l_2);
  goto v_17;
  x_2 :
  TestFunFC(a_3,&&z_2,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(l_2);
  goto w_17;
  z_2 :
  TestFunFC(c_3,&&b_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(l_2);
  goto x_17;
  b_3 :
  TestFunFC(a_1,&&d_3,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(l_2);
  goto y_17;
  d_3 :
  TestFunFC(e_3,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(l_2);
  goto z_17;
  l_2 :
  goto k_2;
  o_17 :
  Tset((ATerm)ATmakeAppl0(f_3));
  Return();
  p_17 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,1),(ATerm)ATmakeAppl1(n_2,Egetd(0,2))));
  Return();
  q_17 :
  Tset((ATerm)ATmakeAppl0(g_3));
  Return();
  r_17 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(h_3,Egetd(0,1),(ATerm)ATmakeAppl1(q_2,Egetd(0,2))));
  Return();
  s_17 :
  Tset((ATerm)ATmakeAppl0(g_3));
  Return();
  t_17 :
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(i_3,Egetd(0,1),(ATerm)ATmakeAppl1(t_2,Egetd(0,2))));
  Return();
  u_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(j_3,Egetd(0,4),Egetd(0,5)));
  Return();
  v_17 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(k_0,Egetd(0,5)),Egetd(0,4)));
  Return();
  w_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(i_0,Egetd(0,4)),Egetd(0,5)));
  Return();
  x_17 :
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,4),(ATerm)ATmakeAppl1(i_0,Egetd(0,5))));
  Return();
  y_17 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl1(n_2,(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(k_0,Egetd(0,5)),(ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(i_0,Egetd(0,6)),(ATerm)ATmakeAppl0(d_0))))));
  Return();
  z_17 :
  NotNULLd(0,5);
  NotNULLd(0,4);
  NotNULLd(0,6);
  Tset((ATerm)ATmakeAppl2(u_1,Egetd(0,5),(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TCons"),(ATerm)ATmakeAppl2(c_0,Egetd(0,6),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl2(c_1,ATmakeString("TNil"),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl0(d_0))))));
  Return();
  k_2 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_k_9)
  Epushd(0,1);
  MoveTop(0,1);
  goto b_18;
  b_18 :
  TestFunFC(m_3,&&fail,Egetd(0,1));
  Rpush(l_3);
  goto f_18;
  l_3 :
  goto k_3;
  f_18 :
  Return();
  k_3 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_9)
  Cpush(n_3);
  Tdupl();
  Rpush(o_3);
  p_18 :
  Cpush(q_3);
  Epushd(0,4);
  MoveTop(0,1);
  goto h_18;
  h_18 :
  TestFunFC(t_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(s_3);
  goto q_18;
  s_3 :
  goto r_3;
  q_18 :
  Return();
  r_3 :
  Epopd(0,4);
  goto p_3;
  q_3 :
  Ccall(_stratego_k_9);
  goto u_3;
  p_3 :
  Cpop();
  u_3 :
  AllInit();
  v_3 :
  AllNextSon(&&w_3);
  Rpush(x_3);
  goto p_18;
  x_3 :
  goto v_3;
  w_3 :
  AllBuild();
  Return();
  o_3 :
  Cpop();
  Crestore();
  Cjump();
  n_3 :
ENDPROC

PROC(_stratego_m_9)
  Cpush(y_3);
  Tdupl();
  Rpush(z_3);
  y_18 :
  Epushd(0,4);
  MoveTop(0,2);
  goto t_18;
  t_18 :
  TestFunFC(t_3,&&c_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  Rpush(b_4);
  goto z_18;
  c_4 :
  TestFunFC(u_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_4);
  goto a_19;
  b_4 :
  goto a_4;
  z_18 :
  Return();
  a_19 :
  Return();
  a_4 :
  AllInit();
  d_4 :
  AllNextSon(&&e_4);
  Rpush(f_4);
  goto y_18;
  f_4 :
  goto d_4;
  e_4 :
  AllBuild();
  Epopd(0,4);
  Return();
  z_3 :
  Cpop();
  Crestore();
  Cjump();
  y_3 :
ENDPROC

PROC(_stratego_s_9)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_19;
  d_19 :
  TestFunFC(i_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto e_19;
  e_19 :
  TestFunFC(k_4,&&j_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_4);
  goto q_19;
  j_4 :
  TestFunFC(l_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(h_4);
  goto r_19;
  h_4 :
  goto g_4;
  q_19 :
  Tdupl();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_m_9);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_l_9);
  Tpop();
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(n_2,(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(i_0,Egetd(0,3)),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(k_0,Egetd(0,4)),(ATerm)ATmakeAppl0(d_0))))));
  Return();
  r_19 :
  NotNULLd(0,3);
  NotNULLd(0,5);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(n_2,(ATerm)ATmakeAppl2(c_0,Egetd(0,3),(ATerm)ATmakeAppl2(c_0,Egetd(0,5),(ATerm)ATmakeAppl2(c_0,Egetd(0,4),(ATerm)ATmakeAppl0(d_0))))));
  Return();
  g_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_t_9)
  Epushd(0,5);
  MoveTop(0,1);
  goto e_20;
  e_20 :
  TestFunFC(i_4,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto f_20;
  f_20 :
  TestFunFC(k_4,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,5,0,2,2);
  Rpush(n_4);
  goto l_21;
  n_4 :
  goto m_4;
  l_21 :
  Epushd(1,8);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_f_10);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(o_4);
  n_21 :
  Cpush(q_4);
  Epushd(2,5);
  MoveTop(2,1);
  goto v_19;
  v_19 :
  TestFunFC(t_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto w_19;
  w_19 :
  TestFunFC(s_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  Rpush(s_4);
  goto o_21;
  s_4 :
  goto r_4;
  o_21 :
  Move(1,4,2,3);
  Move(1,2,2,4);
  Move(1,3,2,5);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(1,4)));
  Return();
  r_4 :
  Epopd(2,5);
  goto p_4;
  q_4 :
  IsAppl();
  OneInit();
  v_4 :
  OneNextSon();
  Cpush(v_4);
  Rpush(x_4);
  goto n_21;
  x_4 :
  Cpop();
  OneBuild();
  goto u_4;
  p_4 :
  Cpop();
  u_4 :
  Return();
  o_4 :
  MoveTop(1,5);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(y_4);
  q_21 :
  Cpush(a_5);
  Epushd(2,7);
  MoveTop(2,1);
  goto z_19;
  z_19 :
  TestFunFC(t_3,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,4,2,1,1);
  MoveArg(2,5,2,1,2);
  goto a_20;
  a_20 :
  TestFunFC(s_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  goto b_20;
  b_20 :
  TestFunFC(d_5,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto c_20;
  c_20 :
  TestFunFC(d_0,&&fail,Egetd(2,7));
  Rpush(c_5);
  goto r_21;
  c_5 :
  goto b_5;
  r_21 :
  Move(1,4,2,3);
  Move(1,6,2,4);
  Move(1,7,2,6);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(1,1)));
  Return();
  b_5 :
  Epopd(2,7);
  goto z_4;
  a_5 :
  IsAppl();
  OneInit();
  f_5 :
  OneNextSon();
  Cpush(f_5);
  Rpush(h_5);
  goto q_21;
  h_5 :
  Cpop();
  OneBuild();
  goto e_5;
  z_4 :
  Cpop();
  e_5 :
  Return();
  y_4 :
  MoveTop(1,8);
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(0,5);
  NotNULLd(1,7);
  NotNULLd(1,2);
  NotNULLd(1,6);
  NotNULLd(1,4);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(x_0,(ATerm)ATmakeAppl2(c_0,Egetd(1,1),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl1(i_4,(ATerm)ATmakeAppl3(k_4,Egetd(1,5),Egetd(1,8),(ATerm)ATmakeAppl2(y_0,Egetd(0,5),(ATerm)ATmakeAppl3(a_1,(ATerm)ATmakeAppl2(d_5,Egetd(1,7),(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(i_4,(ATerm)ATmakeAppl3(k_4,Egetd(1,2),Egetd(1,6),(ATerm)ATmakeAppl0(f_3))),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl1(s_0,Egetd(1,4)),(ATerm)ATmakeAppl1(s_0,Egetd(1,1))))))));
  Epopd(1,8);
  Return();
  m_4 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_u_9)
  Rpush(i_5);
  t_21 :
  Cpush(k_5);
  Cpush(m_5);
  Ccall(_stratego_t_9);
  Rpush(n_5);
  goto t_21;
  n_5 :
  goto l_5;
  m_5 :
  Ccontinue(o_5);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_5);
  goto t_21;
  p_5 :
  AllBuild();
  goto l_5;
  o_5 :
  Ccall(_stratego_s_9);
  goto q_5;
  l_5 :
  Cpop();
  q_5 :
  goto j_5;
  k_5 :
  goto r_5;
  j_5 :
  Cpop();
  r_5 :
  Return();
  i_5 :
ENDPROC

PROC(_stratego_v_9)
  Rpush(s_5);
  d_22 :
  Cpush(u_5);
  Ccall(_stratego_u_9);
  goto t_5;
  u_5 :
  goto v_5;
  t_5 :
  Cpop();
  v_5 :
  Cpush(x_5);
  w_5 :
  Cpush(z_5);
  Ccall(_stratego_j_9);
  goto y_5;
  z_5 :
  Ccontinue(a_6);
  Cpush(c_6);
  Ccall(_stratego_i_9);
  goto b_6;
  c_6 :
  Ccontinue(d_6);
  Epushd(0,4);
  MoveTop(0,1);
  goto v_21;
  v_21 :
  TestFunFC(k_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  goto w_21;
  w_21 :
  TestFunFC(u_1,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(g_6);
  goto f_22;
  g_6 :
  goto e_6;
  f_22 :
  NotNULLd(0,4);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(k_0,Egetd(0,4)),Egetd(0,3)));
  Return();
  e_6 :
  Epopd(0,4);
  goto b_6;
  d_6 :
  Ccall(_stratego_h_9);
  goto h_6;
  b_6 :
  Cpop();
  h_6 :
  goto y_5;
  a_6 :
  Ccall(_stratego_f_9);
  goto i_6;
  y_5 :
  Cpop();
  i_6 :
  Tduplinv();
  goto w_5;
  x_5 :
  AllInit();
  k_6 :
  AllNextSon(&&p_6);
  Rpush(q_6);
  goto d_22;
  q_6 :
  goto k_6;
  p_6 :
  AllBuild();
  Return();
  s_5 :
ENDPROC

PROC(_stratego_w_9)
  Epushd(0,6);
  MoveTop(0,2);
  goto i_22;
  i_22 :
  TestFunFC(x_0,&&t_6,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,1,0,2,1);
  Rpush(s_6);
  goto v_22;
  t_6 :
  TestFunFC(u_6,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto j_22;
  j_22 :
  TestFunFC(k_4,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  MoveArg(0,6,0,3,2);
  Rpush(s_6);
  goto w_22;
  s_6 :
  goto r_6;
  v_22 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  w_22 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_z_9);
  Return();
  r_6 :
  Epopd(0,6);
ENDPROC

PROC(_stratego_x_9)
  Epushd(0,7);
  MoveTop(0,1);
  goto z_23;
  z_23 :
  TestFunFC(c_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,7,0,1,1);
  goto a_24;
  a_24 :
  TestFunFC(a_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto b_24;
  b_24 :
  TestFunFC(a_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,6,0,4,1);
  goto c_24;
  c_24 :
  TestFunFC(e_0,&&fail,Egetd(0,6));
  Rpush(w_6);
  goto d_26;
  w_6 :
  goto v_6;
  d_26 :
  Epushd(1,9);
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  _ST_explode_term();
  MoveTop(2,1);
  goto z_22;
  z_22 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto a_23;
  a_23 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto b_23;
  b_23 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(y_6);
  goto e_26;
  y_6 :
  goto x_6;
  e_26 :
  Move(1,1,2,2);
  Move(1,3,2,4);
  Return();
  x_6 :
  Epopd(2,5);
  Tpop();
  Tdupl();
  Epushd(2,5);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  _ST_explode_term();
  MoveTop(2,1);
  goto d_23;
  d_23 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto e_23;
  e_23 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto f_23;
  f_23 :
  TestFunFC(e_0,&&fail,Egetd(2,5));
  Rpush(a_7);
  goto f_26;
  a_7 :
  goto z_6;
  f_26 :
  Move(1,1,2,2);
  Move(1,2,2,4);
  Return();
  z_6 :
  Epopd(2,5);
  Tpop();
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(1,3),(ATerm)ATmakeAppl0(e_0))));
  Rpush(b_7);
  g_26 :
  Epushd(2,9);
  MoveTop(2,1);
  goto m_23;
  m_23 :
  TestFunFC(a_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,5,2,1,1);
  goto n_23;
  n_23 :
  TestFunFC(d_0,&&e_7,Egetd(2,2));
  goto o_23;
  o_23 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto p_23;
  p_23 :
  TestFunFC(d_0,&&fail,Egetd(2,6));
  goto q_23;
  q_23 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(d_7);
  goto h_26;
  e_7 :
  TestFunFC(c_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto r_23;
  r_23 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,9,2,5,1);
  goto s_23;
  s_23 :
  TestFunFC(c_0,&&fail,Egetd(2,6));
  MoveArg(2,7,2,6,0);
  MoveArg(2,8,2,6,1);
  goto t_23;
  t_23 :
  TestFunFC(e_0,&&fail,Egetd(2,9));
  Rpush(d_7);
  goto i_26;
  d_7 :
  goto c_7;
  h_26 :
  Tset((ATerm)ATmakeAppl0(d_0));
  Return();
  i_26 :
  Epushd(3,5);
  NotNULLd(2,3);
  NotNULLd(2,7);
  NotNULLd(2,4);
  NotNULLd(2,8);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,3),(ATerm)ATmakeAppl2(a_0,Egetd(2,7),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(a_0,Egetd(2,4),(ATerm)ATmakeAppl2(a_0,Egetd(2,8),(ATerm)ATmakeAppl0(e_0))),(ATerm)ATmakeAppl0(e_0))));
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(g_7);
  goto g_26;
  g_7 :
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  MoveTop(3,1);
  goto j_23;
  j_23 :
  TestFunFC(a_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  goto k_23;
  k_23 :
  TestFunFC(a_0,&&fail,Egetd(3,3));
  MoveArg(3,4,3,3,0);
  MoveArg(3,5,3,3,1);
  goto l_23;
  l_23 :
  TestFunFC(e_0,&&fail,Egetd(3,5));
  Rpush(h_7);
  goto j_26;
  h_7 :
  goto f_7;
  j_26 :
  NotNULLd(3,2);
  NotNULLd(3,4);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(3,2),Egetd(3,4)));
  Return();
  f_7 :
  Epopd(3,5);
  Return();
  c_7 :
  Epopd(2,9);
  Return();
  b_7 :
  MoveTop(1,4);
  NotNULLd(1,4);
  NotNULLd(0,7);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,4),(ATerm)ATmakeAppl2(a_0,Egetd(0,7),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(1,5);
  goto w_23;
  w_23 :
  TestFunFC(a_0,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,7,1,5,1);
  goto x_23;
  x_23 :
  TestFunFC(a_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  MoveArg(1,9,1,7,1);
  goto y_23;
  y_23 :
  TestFunFC(e_0,&&fail,Egetd(1,9));
  Rpush(j_7);
  goto l_26;
  j_7 :
  goto i_7;
  l_26 :
  NotNULLd(1,6);
  Tset(Egetd(1,6));
  Rpush(k_7);
  m_26 :
  Cpush(m_7);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_7);
  goto m_26;
  n_7 :
  AllBuild();
  goto l_7;
  m_7 :
  Ccall(_stratego_a_13);
  NotNULLd(1,8);
  Tset(Egetd(1,8));
  goto o_7;
  l_7 :
  Cpop();
  o_7 :
  Return();
  k_7 :
  Return();
  i_7 :
  Epopd(1,9);
  Return();
  v_6 :
  Epopd(0,7);
ENDPROC

PROC(_stratego_y_9)
  Epushd(0,5);
  MoveTop(0,1);
  goto d_27;
  d_27 :
  TestFunFC(a_0,&&r_7,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto e_27;
  e_27 :
  TestFunFC(a_0,&&s_7,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_27;
  f_27 :
  TestFunFC(e_0,&&t_7,Egetd(0,5));
  Cpush(v_7);
  Rpush(w_7);
  goto p_28;
  w_7 :
  goto u_7;
  v_7 :
  Rpush(y_7);
  goto q_28;
  y_7 :
  goto x_7;
  u_7 :
  Cpop();
  x_7 :
  goto q_7;
  t_7 :
  Rpush(q_7);
  goto p_28;
  s_7 :
  Rpush(q_7);
  goto p_28;
  r_7 :
  Rpush(q_7);
  goto p_28;
  q_7 :
  goto p_7;
  p_28 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(d_0),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Rpush(z_7);
  r_28 :
  Cpush(b_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_13);
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  goto a_8;
  b_8 :
  Cpush(e_8);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(g_8);
  Epushd(1,7);
  MoveTop(1,1);
  goto q_26;
  q_26 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,7,1,1,1);
  goto r_26;
  r_26 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto s_26;
  s_26 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto t_26;
  t_26 :
  TestFunFC(e_0,&&fail,Egetd(1,6));
  Rpush(i_8);
  goto s_28;
  i_8 :
  goto h_8;
  s_28 :
  Epushd(2,1);
  Move(1,3,1,5);
  Move(2,1,1,7);
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Epopd(2,1);
  Return();
  h_8 :
  Epopd(1,7);
  goto f_8;
  g_8 :
  Ccall(_stratego_x_9);
  goto j_8;
  f_8 :
  Cpop();
  j_8 :
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  goto d_8;
  e_8 :
  Epushd(1,7);
  MoveTop(1,1);
  goto v_26;
  v_26 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto w_26;
  w_26 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,7,1,3,1);
  goto x_26;
  x_26 :
  TestFunFC(c_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto y_26;
  y_26 :
  TestFunFC(e_0,&&fail,Egetd(1,7));
  Rpush(m_8);
  goto t_28;
  m_8 :
  goto l_8;
  t_28 :
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,Egetd(1,5),Egetd(1,2)),(ATerm)ATmakeAppl2(a_0,Egetd(1,6),(ATerm)ATmakeAppl0(e_0))));
  Return();
  l_8 :
  Epopd(1,7);
  goto k_8;
  d_8 :
  Cpop();
  k_8 :
  Rpush(n_8);
  goto r_28;
  n_8 :
  goto c_8;
  a_8 :
  Cpop();
  c_8 :
  Return();
  z_7 :
  Return();
  q_28 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(o_8);
  u_28 :
  Cpush(q_8);
  Ccall(_stratego_a_13);
  goto p_8;
  q_8 :
  Ccontinue(r_8);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_27;
  c_27 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(u_8);
  goto v_28;
  u_8 :
  goto s_8;
  v_28 :
  Tdupl();
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(v_8);
  w_28 :
  Cpush(x_8);
  Epushd(2,3);
  MoveTop(2,1);
  goto b_27;
  b_27 :
  TestFunFC(c_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(z_8);
  goto x_28;
  z_8 :
  goto y_8;
  x_28 :
  Move(1,2,2,2);
  Return();
  y_8 :
  Epopd(2,3);
  goto w_8;
  x_8 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_9);
  goto w_28;
  b_9 :
  AllBuild();
  goto a_9;
  w_8 :
  Cpop();
  a_9 :
  Return();
  v_8 :
  Tpop();
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(c_9);
  goto u_28;
  c_9 :
  Return();
  s_8 :
  Epopd(1,3);
  goto p_8;
  r_8 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_9);
  goto u_28;
  n_9 :
  AllBuild();
  goto d_9;
  p_8 :
  Cpop();
  d_9 :
  Return();
  o_8 :
  Return();
  p_7 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_9)
  Rpush(o_9);
  z_33 :
  Cpush(q_9);
  Epushd(0,2);
  MoveTop(0,1);
  goto z_28;
  z_28 :
  TestFunFC(s_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(j_10);
  goto a_34;
  j_10 :
  goto r_9;
  a_34 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl0(d_0)));
  Return();
  r_9 :
  Epopd(0,2);
  goto p_9;
  q_9 :
  Ccontinue(k_10);
  Epushd(0,3);
  Tdupl();
  Epushd(1,1);
  Cpush(m_10);
  Ccall(_stratego_w_9);
  goto l_10;
  m_10 :
  Epushd(2,2);
  MoveTop(2,1);
  goto b_29;
  b_29 :
  TestFunFC(q_10,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  Rpush(p_10);
  goto b_34;
  p_10 :
  goto o_10;
  b_34 :
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Ccall(_stratego_z_9);
  Return();
  o_10 :
  Epopd(2,2);
  goto n_10;
  l_10 :
  Cpop();
  n_10 :
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  Tpop();
  Cpush(u_10);
  TestFunTop(x_0);
  TravInit();
  OneNextSon();
  Tset((ATerm)ATmakeAppl0(d_0));
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(v_10);
  goto z_33;
  v_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_y_9);
  Epopd(1,2);
  AllBuild();
  goto t_10;
  u_10 :
  TestFunTop(q_10);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  Rpush(x_10);
  goto z_33;
  x_10 :
  MoveTop(1,2);
  NotNULLd(1,2);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_y_9);
  Epopd(1,2);
  AllBuild();
  goto w_10;
  t_10 :
  Cpop();
  w_10 :
  MoveTop(0,2);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  _ST_explode_term();
  MoveTop(1,1);
  goto l_29;
  l_29 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_29;
  m_29 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto n_29;
  n_29 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Rpush(z_10);
  goto k_34;
  z_10 :
  goto y_10;
  k_34 :
  Move(0,3,1,4);
  Return();
  y_10 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(a_11);
  l_34 :
  Cpush(c_11);
  Ccall(_stratego_a_13);
  Tset((ATerm)ATmakeAppl0(d_0));
  goto b_11;
  c_11 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_29;
  z_29 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(f_11);
  goto m_34;
  f_11 :
  goto e_11;
  m_34 :
  Epushd(2,6);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(g_11);
  goto l_34;
  g_11 :
  MoveTop(2,1);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(1,2),(ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(2,2);
  goto w_29;
  w_29 :
  TestFunFC(a_0,&&fail,Egetd(2,2));
  MoveArg(2,3,2,2,0);
  MoveArg(2,4,2,2,1);
  goto x_29;
  x_29 :
  TestFunFC(a_0,&&fail,Egetd(2,4));
  MoveArg(2,5,2,4,0);
  MoveArg(2,6,2,4,1);
  goto y_29;
  y_29 :
  TestFunFC(e_0,&&fail,Egetd(2,6));
  Rpush(k_11);
  goto p_34;
  k_11 :
  goto h_11;
  p_34 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(l_11);
  q_34 :
  Cpush(n_11);
  Ccall(_stratego_a_13);
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  goto m_11;
  n_11 :
  Ccontinue(o_11);
  Epushd(3,3);
  MoveTop(3,1);
  goto v_29;
  v_29 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_11);
  goto r_34;
  q_11 :
  goto p_11;
  r_34 :
  Tdupl();
  NotNULLd(2,5);
  Tset(Egetd(2,5));
  Rpush(r_11);
  s_34 :
  Cpush(t_11);
  Epushd(4,3);
  MoveTop(4,1);
  goto u_29;
  u_29 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(v_11);
  goto t_34;
  v_11 :
  goto u_11;
  t_34 :
  Move(3,2,4,2);
  Return();
  u_11 :
  Epopd(4,3);
  goto s_11;
  t_11 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_11);
  goto s_34;
  x_11 :
  AllBuild();
  goto w_11;
  s_11 :
  Cpop();
  w_11 :
  Return();
  r_11 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(y_11);
  goto q_34;
  y_11 :
  Return();
  p_11 :
  Epopd(3,3);
  goto m_11;
  o_11 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_12);
  goto q_34;
  a_12 :
  AllBuild();
  goto z_11;
  m_11 :
  Cpop();
  z_11 :
  Return();
  l_11 :
  Return();
  h_11 :
  Epopd(2,6);
  Return();
  e_11 :
  Epopd(1,3);
  goto d_11;
  b_11 :
  Cpop();
  d_11 :
  Return();
  a_11 :
  Epopd(0,3);
  goto p_9;
  k_10 :
  Epushd(0,2);
  MoveTop(0,1);
  Tdupl();
  Epushd(1,5);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  _ST_explode_term();
  MoveTop(1,1);
  goto c_30;
  c_30 :
  TestFunFC(a_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_30;
  f_30 :
  TestFunFC(a_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,5,1,3,1);
  goto g_30;
  g_30 :
  TestFunFC(e_0,&&fail,Egetd(1,5));
  Rpush(d_12);
  goto v_34;
  d_12 :
  goto c_12;
  v_34 :
  Move(0,2,1,4);
  Return();
  c_12 :
  Epopd(1,5);
  Tpop();
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(e_12);
  w_34 :
  Cpush(g_12);
  Ccall(_stratego_a_13);
  Tset((ATerm)ATmakeAppl0(d_0));
  goto f_12;
  g_12 :
  Epushd(1,3);
  MoveTop(1,1);
  goto s_30;
  s_30 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(j_12);
  goto x_34;
  j_12 :
  goto i_12;
  x_34 :
  Epushd(2,7);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Rpush(k_12);
  goto z_33;
  k_12 :
  MoveTop(2,1);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(l_12);
  goto w_34;
  l_12 :
  MoveTop(2,2);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(2,1),(ATerm)ATmakeAppl2(a_0,Egetd(2,2),(ATerm)ATmakeAppl0(e_0))));
  MoveTop(2,3);
  goto p_30;
  p_30 :
  TestFunFC(a_0,&&fail,Egetd(2,3));
  MoveArg(2,4,2,3,0);
  MoveArg(2,5,2,3,1);
  goto q_30;
  q_30 :
  TestFunFC(a_0,&&fail,Egetd(2,5));
  MoveArg(2,6,2,5,0);
  MoveArg(2,7,2,5,1);
  goto r_30;
  r_30 :
  TestFunFC(e_0,&&fail,Egetd(2,7));
  Rpush(e_13);
  goto a_35;
  e_13 :
  goto m_12;
  a_35 :
  NotNULLd(2,4);
  Tset(Egetd(2,4));
  Rpush(f_13);
  b_35 :
  Cpush(i_13);
  Ccall(_stratego_a_13);
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  goto h_13;
  i_13 :
  Ccontinue(j_13);
  Epushd(3,3);
  MoveTop(3,1);
  goto o_30;
  o_30 :
  TestFunFC(c_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(s_13);
  goto c_35;
  s_13 :
  goto k_13;
  c_35 :
  Tdupl();
  NotNULLd(2,6);
  Tset(Egetd(2,6));
  Rpush(t_13);
  d_35 :
  Cpush(y_13);
  Epushd(4,3);
  MoveTop(4,1);
  goto n_30;
  n_30 :
  TestFunFC(c_0,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,3,4,1,1);
  Rpush(c_14);
  goto e_35;
  c_14 :
  goto b_14;
  e_35 :
  Move(3,2,4,2);
  Return();
  b_14 :
  Epopd(4,3);
  goto u_13;
  y_13 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_14);
  goto d_35;
  g_14 :
  AllBuild();
  goto f_14;
  u_13 :
  Cpop();
  f_14 :
  Return();
  t_13 :
  Tpop();
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_14);
  goto b_35;
  h_14 :
  Return();
  k_13 :
  Epopd(3,3);
  goto h_13;
  j_13 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_14);
  goto b_35;
  k_14 :
  AllBuild();
  goto i_14;
  h_13 :
  Cpop();
  i_14 :
  Return();
  f_13 :
  Return();
  m_12 :
  Epopd(2,7);
  Return();
  i_12 :
  Epopd(1,3);
  goto h_12;
  f_12 :
  Cpop();
  h_12 :
  Return();
  e_12 :
  Epopd(0,2);
  goto b_12;
  p_9 :
  Cpop();
  b_12 :
  Return();
  o_9 :
ENDPROC

PROC(_stratego_a_10)
  Epushd(0,5);
  MoveTop(0,1);
  goto i_35;
  i_35 :
  TestFunFC(h_3,&&z_14,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto j_35;
  j_35 :
  TestFunFC(h_3,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(x_14);
  goto a_36;
  z_14 :
  TestFunFC(y_0,&&c_15,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto k_35;
  k_35 :
  TestFunFC(y_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(x_14);
  goto b_36;
  c_15 :
  TestFunFC(i_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto l_35;
  l_35 :
  TestFunFC(i_3,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(x_14);
  goto c_36;
  x_14 :
  goto o_14;
  a_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(h_3,Egetd(0,3),(ATerm)ATmakeAppl2(h_3,Egetd(0,4),Egetd(0,5))));
  Return();
  b_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(y_0,Egetd(0,3),(ATerm)ATmakeAppl2(y_0,Egetd(0,4),Egetd(0,5))));
  Return();
  c_36 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(i_3,Egetd(0,3),(ATerm)ATmakeAppl2(i_3,Egetd(0,4),Egetd(0,5))));
  Return();
  o_14 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_b_10)
  Rpush(d_15);
  q_38 :
  AllInit();
  e_15 :
  AllNextSon(&&h_15);
  Rpush(l_15);
  goto q_38;
  l_15 :
  goto e_15;
  h_15 :
  AllBuild();
  Cpush(x_15);
  Cpush(z_15);
  Epushd(0,5);
  MoveTop(0,1);
  goto p_36;
  p_36 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,5,0,1,1);
  goto q_36;
  q_36 :
  TestFunFC(h_3,&&c_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_16);
  goto r_38;
  c_16 :
  TestFunFC(i_3,&&d_16,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_16);
  goto s_38;
  d_16 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(b_16);
  goto t_38;
  b_16 :
  goto a_16;
  r_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(h_3,(ATerm)ATmakeAppl2(y_0,Egetd(0,3),Egetd(0,5)),(ATerm)ATmakeAppl2(y_0,Egetd(0,4),Egetd(0,5))));
  Return();
  s_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(i_3,(ATerm)ATmakeAppl2(y_0,Egetd(0,3),Egetd(0,5)),(ATerm)ATmakeAppl2(y_0,Egetd(0,4),Egetd(0,5))));
  Return();
  t_38 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,Egetd(0,3),(ATerm)ATmakeAppl2(y_0,Egetd(0,4),Egetd(0,5))));
  Return();
  a_16 :
  Epopd(0,5);
  goto y_15;
  z_15 :
  Ccontinue(e_16);
  Ccall(_stratego_a_10);
  goto y_15;
  e_16 :
  Epushd(0,13);
  MoveTop(0,1);
  goto v_36;
  v_36 :
  TestFunFC(y_0,&&i_16,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,11,0,1,1);
  goto w_36;
  w_36 :
  TestFunFC(k_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(h_16);
  goto u_38;
  i_16 :
  TestFunFC(u_1,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,11,0,1,1);
  goto x_36;
  x_36 :
  TestFunFC(j_16,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto y_36;
  y_36 :
  TestFunFC(y_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,10,0,4,1);
  goto a_37;
  a_37 :
  TestFunFC(u_16,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  goto b_37;
  b_37 :
  TestFunFC(d_5,&&fail,Egetd(0,6));
  MoveArg(0,7,0,6,0);
  MoveArg(0,9,0,6,1);
  goto c_37;
  c_37 :
  TestFunFC(v_16,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  goto d_37;
  d_37 :
  TestFunFC(d_0,&&fail,Egetd(0,9));
  goto e_37;
  e_37 :
  TestFunFC(c_1,&&fail,Egetd(0,11));
  MoveArg(0,12,0,11,0);
  MoveArg(0,13,0,11,1);
  Rpush(h_16);
  goto v_38;
  h_16 :
  goto g_16;
  u_38 :
  NotNULLd(0,11);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(k_0,(ATerm)ATmakeAppl2(u_1,Egetd(0,11),Egetd(0,3))));
  Return();
  v_38 :
  Epushd(1,4);
  Move(0,3,0,8);
  Move(1,2,0,10);
  Move(1,1,0,12);
  Move(1,3,0,13);
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Rpush(w_16);
  w_38 :
  Cpush(y_16);
  Ccall(_stratego_a_13);
  goto x_16;
  y_16 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(2,1);
  MoveTop(2,1);
  NotNULLd(0,3);
  NotNULLd(1,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(u_1,(ATerm)ATmakeAppl2(j_16,Egetd(0,3),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(u_16,(ATerm)ATmakeAppl2(d_5,(ATerm)ATmakeAppl1(v_16,Egetd(0,3)),(ATerm)ATmakeAppl0(d_0))),Egetd(1,2))),Egetd(2,1)));
  Epopd(2,1);
  OneNextSon();
  Rpush(a_17);
  goto w_38;
  a_17 :
  AllBuild();
  goto z_16;
  x_16 :
  Cpop();
  z_16 :
  Return();
  w_16 :
  MoveTop(1,4);
  NotNULLd(1,2);
  NotNULLd(1,1);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(u_1,Egetd(1,2),(ATerm)ATmakeAppl2(c_1,Egetd(1,1),Egetd(1,4))));
  Epopd(1,4);
  Return();
  g_16 :
  Epopd(0,13);
  goto f_16;
  y_15 :
  Cpop();
  f_16 :
  Rpush(b_17);
  goto q_38;
  b_17 :
  goto t_15;
  x_15 :
  goto c_17;
  t_15 :
  Cpop();
  c_17 :
  Return();
  d_15 :
ENDPROC

PROC(_stratego_d_10)
  Rpush(d_17);
  s_39 :
  AllInit();
  e_17 :
  AllNextSon(&&f_17);
  Rpush(g_17);
  goto s_39;
  g_17 :
  goto e_17;
  f_17 :
  AllBuild();
  Cpush(i_17);
  Epushd(0,5);
  MoveTop(0,1);
  goto c_39;
  c_39 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto d_39;
  d_39 :
  TestFunFC(h_3,&&l_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_17);
  goto t_39;
  l_17 :
  TestFunFC(i_3,&&m_17,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_17);
  goto u_39;
  m_17 :
  TestFunFC(x_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  Rpush(k_17);
  goto v_39;
  k_17 :
  goto j_17;
  t_39 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(h_3,(ATerm)ATmakeAppl2(y_0,Egetd(0,2),Egetd(0,4)),(ATerm)ATmakeAppl2(y_0,Egetd(0,2),Egetd(0,5))));
  Return();
  u_39 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(i_3,(ATerm)ATmakeAppl2(y_0,Egetd(0,2),Egetd(0,4)),(ATerm)ATmakeAppl2(y_0,Egetd(0,2),Egetd(0,5))));
  Return();
  v_39 :
  NotNULLd(0,4);
  NotNULLd(0,2);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(x_0,Egetd(0,4),(ATerm)ATmakeAppl2(y_0,Egetd(0,2),Egetd(0,5))));
  Return();
  j_17 :
  Rpush(n_17);
  goto s_39;
  n_17 :
  Epopd(0,5);
  goto h_17;
  i_17 :
  goto a_18;
  h_17 :
  Cpop();
  a_18 :
  Return();
  d_17 :
ENDPROC

PROC(_stratego_e_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_39;
  x_39 :
  TestFunFC(f_3,&&fail,Egetd(0,1));
  Rpush(e_18);
  goto z_39;
  e_18 :
  goto d_18;
  z_39 :
  Return();
  d_18 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_f_10)
  _ST_new();
ENDPROC

PROC(_stratego_g_10)
  Epushd(0,1);
  Cpush(i_18);
  Epushd(1,16);
  MoveTop(1,1);
  goto e_40;
  e_40 :
  TestFunFC(j_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto f_40;
  f_40 :
  TestFunFC(y_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,9,1,3,1);
  goto g_40;
  g_40 :
  TestFunFC(u_16,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto h_40;
  h_40 :
  TestFunFC(d_5,&&fail,Egetd(1,5));
  MoveArg(1,6,1,5,0);
  MoveArg(1,8,1,5,1);
  goto i_40;
  i_40 :
  TestFunFC(v_16,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  goto j_40;
  j_40 :
  TestFunFC(d_0,&&fail,Egetd(1,8));
  goto k_40;
  k_40 :
  TestFunFC(i_3,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  MoveArg(1,16,1,9,1);
  goto l_40;
  l_40 :
  TestFunFC(y_0,&&fail,Egetd(1,10));
  MoveArg(1,11,1,10,0);
  MoveArg(1,12,1,10,1);
  goto m_40;
  m_40 :
  TestFunFC(d_5,&&fail,Egetd(1,12));
  MoveArg(1,13,1,12,0);
  MoveArg(1,15,1,12,1);
  goto n_40;
  n_40 :
  TestFunFC(v_16,&&fail,Egetd(1,13));
  MoveArg(1,14,1,13,0);
  goto o_40;
  o_40 :
  TestFunFC(d_0,&&fail,Egetd(1,15));
  goto p_40;
  p_40 :
  TestFunFC(f_3,&&fail,Egetd(1,16));
  Rpush(k_18);
  goto n_46;
  k_18 :
  goto j_18;
  n_46 :
  Epushd(2,4);
  Move(1,2,1,7);
  Move(2,1,1,11);
  Move(1,2,1,14);
  Tdupl();
  Epushd(3,3);
  Ccall(_stratego_f_10);
  MoveTop(3,1);
  Move(2,2,3,1);
  Ccall(_stratego_f_10);
  MoveTop(3,2);
  Move(2,3,3,2);
  Ccall(_stratego_f_10);
  MoveTop(3,3);
  Move(2,4,3,3);
  Epopd(3,3);
  Tpop();
  NotNULLd(2,2);
  NotNULLd(2,1);
  NotNULLd(2,4);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(j_16,Egetd(2,2),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(u_16,(ATerm)ATmakeAppl2(d_5,(ATerm)ATmakeAppl1(v_16,Egetd(2,2)),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl2(j_16,Egetd(2,3),(ATerm)ATmakeAppl2(i_3,(ATerm)ATmakeAppl2(y_0,Egetd(2,1),(ATerm)ATmakeAppl2(j_16,Egetd(2,4),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(u_16,(ATerm)ATmakeAppl2(d_5,(ATerm)ATmakeAppl1(v_16,Egetd(2,4)),(ATerm)ATmakeAppl0(d_0))),(ATerm)ATmakeAppl2(d_5,(ATerm)ATmakeAppl1(v_16,Egetd(2,3)),(ATerm)ATmakeAppl0(d_0))))),(ATerm)ATmakeAppl0(f_3))))));
  Epopd(2,4);
  Return();
  j_18 :
  Epopd(1,16);
  goto g_18;
  i_18 :
  goto r_18;
  g_18 :
  Cpop();
  r_18 :
  TestFunTop(j_16);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  TestFunTop(u_16);
  TravInit();
  OneNextSon();
  TestFunTop(d_5);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto r_40;
  r_40 :
  TestFunFC(v_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(b_19);
  goto r_46;
  b_19 :
  goto s_18;
  r_46 :
  Return();
  s_18 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_13);
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(j_16);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  Move(0,1,1,1);
  Epopd(1,1);
  OneNextSon();
  TestFunTop(i_3);
  TravInit();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl0(c_19),Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  TestFunTop(j_16);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(y_0);
  TravInit();
  OneNextSon();
  TestFunTop(u_16);
  TravInit();
  OneNextSon();
  TestFunTop(d_5);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto v_40;
  v_40 :
  TestFunFC(v_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(l_19);
  goto u_46;
  l_19 :
  goto k_19;
  u_46 :
  Return();
  k_19 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_13);
  AllBuild();
  AllBuild();
  OneNextSon();
  TestFunTop(d_5);
  TravInit();
  OneNextSon();
  Epushd(1,2);
  MoveTop(1,1);
  goto x_40;
  x_40 :
  TestFunFC(v_16,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(n_19);
  goto v_46;
  n_19 :
  goto m_19;
  v_46 :
  Move(0,1,1,2);
  Return();
  m_19 :
  Epopd(1,2);
  OneNextSon();
  Ccall(_stratego_a_13);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  OneNextSon();
  Ccall(_stratego_e_10);
  AllBuild();
  AllBuild();
  AllBuild();
  AllBuild();
  Tdupl();
  Tset(ATmakeString("this looks like an innermost"));
  Ccall(_stratego_e_9);
  Tpop();
  Ccall(_stratego_d_10);
  Ccall(_stratego_b_10);
  Rpush(o_19);
  w_46 :
  Cpush(s_19);
  Epushd(1,10);
  MoveTop(1,1);
  goto i_42;
  i_42 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto j_42;
  j_42 :
  TestFunFC(c_19,&&fail,Egetd(1,2));
  goto k_42;
  k_42 :
  TestFunFC(y_0,&&fail,Egetd(1,3));
  MoveArg(1,4,1,3,0);
  MoveArg(1,6,1,3,1);
  goto l_42;
  l_42 :
  TestFunFC(i_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  goto m_42;
  m_42 :
  TestFunFC(k_0,&&x_19,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  Rpush(u_19);
  goto x_46;
  x_19 :
  TestFunFC(y_0,&&fail,Egetd(1,6));
  MoveArg(1,7,1,6,0);
  MoveArg(1,9,1,6,1);
  goto n_42;
  n_42 :
  TestFunFC(z_0,&&fail,Egetd(1,7));
  MoveArg(1,8,1,7,0);
  goto o_42;
  o_42 :
  TestFunFC(k_0,&&fail,Egetd(1,9));
  MoveArg(1,10,1,9,0);
  Rpush(u_19);
  goto y_46;
  u_19 :
  goto t_19;
  x_46 :
  Epushd(2,3);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Ccall(_stratego_z_9);
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,7);
  Tset(Egetd(1,7));
  Rpush(y_19);
  a_47 :
  Cpush(l_20);
  Epushd(4,15);
  MoveTop(4,1);
  goto f_41;
  f_41 :
  TestFunFC(u_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,14,4,1,1);
  goto g_41;
  g_41 :
  TestFunFC(j_16,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto h_41;
  h_41 :
  TestFunFC(y_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,10,4,4,1);
  goto i_41;
  i_41 :
  TestFunFC(u_16,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  goto j_41;
  j_41 :
  TestFunFC(d_5,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,9,4,6,1);
  goto k_41;
  k_41 :
  TestFunFC(v_16,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  goto l_41;
  l_41 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  goto m_41;
  m_41 :
  TestFunFC(d_5,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,13,4,10,1);
  goto n_41;
  n_41 :
  TestFunFC(v_16,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  goto o_41;
  o_41 :
  TestFunFC(d_0,&&fail,Egetd(4,13));
  goto p_41;
  p_41 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  MoveArg(4,15,4,14,0);
  Rpush(n_20);
  goto b_47;
  n_20 :
  goto m_20;
  b_47 :
  Tdupl();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(z_20);
  c_47 :
  Cpush(m_21);
  Epushd(5,3);
  MoveTop(5,1);
  goto d_41;
  d_41 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(s_21);
  goto d_47;
  s_21 :
  goto p_21;
  d_47 :
  Move(4,15,5,2);
  Return();
  p_21 :
  Epopd(5,3);
  goto k_21;
  m_21 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_22);
  goto c_47;
  b_22 :
  AllBuild();
  goto u_21;
  k_21 :
  Cpop();
  u_21 :
  Return();
  z_20 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Move(2,2,0,1);
  Tpop();
  NotNULLd(4,15);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(4,15)));
  Return();
  m_20 :
  Epopd(4,15);
  goto d_20;
  l_20 :
  AllInit();
  g_22 :
  AllNextSon(&&h_22);
  Rpush(q_22);
  goto a_47;
  q_22 :
  goto g_22;
  h_22 :
  AllBuild();
  goto c_22;
  d_20 :
  Cpop();
  c_22 :
  Return();
  y_19 :
  MoveTop(3,2);
  Move(2,3,3,2);
  Epopd(3,2);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(i_0,Egetd(1,5)),(ATerm)ATmakeAppl1(k_0,Egetd(2,3))));
  Epopd(2,3);
  Return();
  y_46 :
  Epushd(2,3);
  Tdupl();
  Epushd(3,2);
  NotNULLd(1,5);
  Tset(Egetd(1,5));
  Ccall(_stratego_z_9);
  MoveTop(3,1);
  Move(2,1,3,1);
  NotNULLd(1,10);
  Tset(Egetd(1,10));
  Rpush(r_22);
  h_47 :
  Cpush(t_22);
  Epushd(4,15);
  MoveTop(4,1);
  goto w_41;
  w_41 :
  TestFunFC(u_1,&&fail,Egetd(4,1));
  MoveArg(4,2,4,1,0);
  MoveArg(4,14,4,1,1);
  goto x_41;
  x_41 :
  TestFunFC(j_16,&&fail,Egetd(4,2));
  MoveArg(4,3,4,2,0);
  MoveArg(4,4,4,2,1);
  goto y_41;
  y_41 :
  TestFunFC(y_0,&&fail,Egetd(4,4));
  MoveArg(4,5,4,4,0);
  MoveArg(4,10,4,4,1);
  goto z_41;
  z_41 :
  TestFunFC(u_16,&&fail,Egetd(4,5));
  MoveArg(4,6,4,5,0);
  goto a_42;
  a_42 :
  TestFunFC(d_5,&&fail,Egetd(4,6));
  MoveArg(4,7,4,6,0);
  MoveArg(4,9,4,6,1);
  goto b_42;
  b_42 :
  TestFunFC(v_16,&&fail,Egetd(4,7));
  MoveArg(4,8,4,7,0);
  goto c_42;
  c_42 :
  TestFunFC(d_0,&&fail,Egetd(4,9));
  goto d_42;
  d_42 :
  TestFunFC(d_5,&&fail,Egetd(4,10));
  MoveArg(4,11,4,10,0);
  MoveArg(4,13,4,10,1);
  goto e_42;
  e_42 :
  TestFunFC(v_16,&&fail,Egetd(4,11));
  MoveArg(4,12,4,11,0);
  goto f_42;
  f_42 :
  TestFunFC(d_0,&&fail,Egetd(4,13));
  goto g_42;
  g_42 :
  TestFunFC(s_0,&&fail,Egetd(4,14));
  MoveArg(4,15,4,14,0);
  Rpush(x_22);
  goto i_47;
  x_22 :
  goto u_22;
  i_47 :
  Tdupl();
  NotNULLd(2,1);
  Tset(Egetd(2,1));
  Rpush(y_22);
  j_47 :
  Cpush(g_23);
  Epushd(5,3);
  MoveTop(5,1);
  goto u_41;
  u_41 :
  TestFunFC(c_0,&&fail,Egetd(5,1));
  MoveArg(5,2,5,1,0);
  MoveArg(5,3,5,1,1);
  Rpush(i_23);
  goto k_47;
  i_23 :
  goto h_23;
  k_47 :
  Move(4,15,5,2);
  Return();
  h_23 :
  Epopd(5,3);
  goto c_23;
  g_23 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_23);
  goto j_47;
  v_23 :
  AllBuild();
  goto u_23;
  c_23 :
  Cpop();
  u_23 :
  Return();
  y_22 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Move(2,2,0,1);
  Tpop();
  NotNULLd(4,15);
  Tset((ATerm)ATmakeAppl1(s_0,Egetd(4,15)));
  Return();
  u_22 :
  Epopd(4,15);
  goto s_22;
  t_22 :
  AllInit();
  o_24 :
  AllNextSon(&&p_24);
  Rpush(j_25);
  goto h_47;
  j_25 :
  goto o_24;
  p_24 :
  AllBuild();
  goto n_24;
  s_22 :
  Cpop();
  n_24 :
  Return();
  r_22 :
  MoveTop(3,2);
  Move(2,3,3,2);
  Epopd(3,2);
  Tpop();
  NotNULLd(1,5);
  NotNULLd(1,8);
  NotNULLd(2,3);
  Tset((ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(i_0,Egetd(1,5)),(ATerm)ATmakeAppl2(y_0,(ATerm)ATmakeAppl1(z_0,Egetd(1,8)),(ATerm)ATmakeAppl1(k_0,Egetd(2,3)))));
  Epopd(2,3);
  Return();
  t_19 :
  Epopd(1,10);
  goto p_19;
  s_19 :
  AllInit();
  l_25 :
  AllNextSon(&&m_25);
  Rpush(s_25);
  goto w_46;
  s_25 :
  goto l_25;
  m_25 :
  AllBuild();
  goto k_25;
  p_19 :
  Cpop();
  k_25 :
  Return();
  o_19 :
  Ccall(_stratego_v_9);
  Tdupl();
  Tset(ATmakeString("fused application of innermost"));
  Ccall(_stratego_e_9);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_h_10)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_47;
  o_47 :
  TestFunFC(e_0,&&fail,Egetd(0,1));
  Rpush(v_25);
  goto q_47;
  v_25 :
  goto t_25;
  q_47 :
  Return();
  t_25 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_i_10)
  Epushd(0,1);
  Tdupl();
  Rpush(b_26);
  z_47 :
  Cpush(k_26);
  Epushd(1,4);
  MoveTop(1,1);
  goto s_47;
  s_47 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto t_47;
  t_47 :
  TestFunFC(p_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(o_26);
  goto a_48;
  o_26 :
  goto n_26;
  a_48 :
  Move(0,1,1,3);
  Return();
  n_26 :
  Epopd(1,4);
  goto c_26;
  k_26 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_26);
  goto z_47;
  z_26 :
  AllBuild();
  goto u_26;
  c_26 :
  Cpop();
  u_26 :
  Return();
  b_26 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(d_0)))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_n_12);
  Tset(MakeInt(1));
  Ccall(_stratego_s_10);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_r_10)
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(d_0)),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_n_12);
  Tset(MakeInt(1));
  Ccall(_stratego_s_10);
ENDPROC

PROC(_stratego_s_10)
  _ST_exit();
ENDPROC

PROC(_stratego_n_12)
  _ST_printnl();
ENDPROC

PROC(_stratego_o_12)
  Epushd(0,2);
  Tdupl();
  Cpush(l_27);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(t_27);
  Tdupl();
  Rpush(c_28);
  x_48 :
  Cpush(e_28);
  Epushd(1,3);
  MoveTop(1,1);
  goto c_48;
  c_48 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto d_48;
  d_48 :
  TestFunFC(k_28,&&fail,Egetd(1,2));
  Rpush(g_28);
  goto y_48;
  g_28 :
  goto f_28;
  y_48 :
  Return();
  f_28 :
  Epopd(1,3);
  goto d_28;
  e_28 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_28);
  goto x_48;
  y_28 :
  AllBuild();
  goto l_28;
  d_28 :
  Cpop();
  l_28 :
  Return();
  c_28 :
  Cpop();
  Crestore();
  Cjump();
  t_27 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(a_29);
  z_48 :
  Cpush(d_29);
  Epushd(1,4);
  MoveTop(1,1);
  goto f_48;
  f_48 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto g_48;
  g_48 :
  TestFunFC(g_29,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_29);
  goto a_49;
  f_29 :
  goto e_29;
  a_49 :
  Move(0,2,1,3);
  Return();
  e_29 :
  Epopd(1,4);
  goto c_29;
  d_29 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_29);
  goto z_48;
  i_29 :
  AllBuild();
  goto h_29;
  c_29 :
  Cpop();
  h_29 :
  Return();
  a_29 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(j_29);
  b_49 :
  Cpush(o_29);
  Epushd(1,4);
  MoveTop(1,1);
  goto i_48;
  i_48 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto j_48;
  j_48 :
  TestFunFC(p_26,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(q_29);
  goto c_49;
  q_29 :
  goto p_29;
  c_49 :
  Move(0,1,1,3);
  Return();
  p_29 :
  Epopd(1,4);
  goto k_29;
  o_29 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_29);
  goto b_49;
  s_29 :
  AllBuild();
  goto r_29;
  k_29 :
  Cpop();
  r_29 :
  Return();
  j_29 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl0(b_0),(ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,Egetd(0,1),(ATerm)ATmakeAppl2(c_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(c_0,Egetd(0,2),(ATerm)ATmakeAppl2(c_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(d_0))))),(ATerm)ATmakeAppl0(e_0))));
  Ccall(_stratego_n_12);
  goto a_27;
  l_27 :
  goto t_29;
  a_27 :
  Cpop();
  t_29 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_s_10);
  Epopd(0,2);
ENDPROC

PROC(_stratego_p_12)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_q_12)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_r_12)
  Epushd(0,1);
  Tdupl();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Cpush(b_30);
  Rpush(d_30);
  c_50 :
  Cpush(h_30);
  Epushd(1,4);
  MoveTop(1,1);
  goto e_49;
  e_49 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto f_49;
  f_49 :
  TestFunFC(k_30,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(j_30);
  goto d_50;
  j_30 :
  goto i_30;
  d_50 :
  Move(0,1,1,3);
  Return();
  i_30 :
  Epopd(1,4);
  goto e_30;
  h_30 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_30);
  goto c_50;
  m_30 :
  AllBuild();
  goto l_30;
  e_30 :
  Cpop();
  l_30 :
  Return();
  d_30 :
  goto a_30;
  b_30 :
  Tset((ATerm)ATmakeAppl0(z_30));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(z_30));
  MoveTop(0,1);
  Tpop();
  goto v_30;
  a_30 :
  Cpop();
  v_30 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl2(a_0,Egetd(1,1),(ATerm)ATmakeAppl0(e_0))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  Cpush(e_31);
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(f_31);
  i_50 :
  Cpush(i_31);
  Epushd(1,3);
  MoveTop(1,1);
  goto l_49;
  l_49 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto m_49;
  m_49 :
  TestFunFC(m_31,&&fail,Egetd(1,2));
  Rpush(l_31);
  goto j_50;
  l_31 :
  goto k_31;
  j_50 :
  Return();
  k_31 :
  Epopd(1,3);
  goto g_31;
  i_31 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_31);
  goto i_50;
  y_31 :
  AllBuild();
  goto p_31;
  g_31 :
  Cpop();
  p_31 :
  Return();
  f_31 :
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_q_12);
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  goto c_31;
  e_31 :
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_p_12);
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  goto z_31;
  c_31 :
  Cpop();
  z_31 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_s_12)
  _ST_dtime();
ENDPROC

PROC(_stratego_t_12)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_u_12)
  Epushd(0,3);
  Tdupl();
  Cpush(b_32);
  Rpush(d_32);
  d_51 :
  Cpush(k_32);
  Epushd(1,4);
  MoveTop(1,1);
  goto l_50;
  l_50 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto m_50;
  m_50 :
  TestFunFC(v_32,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(p_32);
  goto e_51;
  p_32 :
  goto o_32;
  e_51 :
  Move(0,1,1,3);
  Return();
  o_32 :
  Epopd(1,4);
  goto j_32;
  k_32 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_33);
  goto d_51;
  f_33 :
  AllBuild();
  goto e_33;
  j_32 :
  Cpop();
  e_33 :
  Return();
  d_32 :
  goto a_32;
  b_32 :
  Tset((ATerm)ATmakeAppl0(j_33));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(j_33));
  MoveTop(0,1);
  Tpop();
  goto h_33;
  a_32 :
  Cpop();
  h_33 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_t_12);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(a_0,Egetd(0,2),(ATerm)ATmakeAppl2(a_0,Egetd(0,3),(ATerm)ATmakeAppl0(e_0))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_v_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto k_51;
  k_51 :
  TestFunFC(u_33,&&fail,Egetd(0,1));
  Rpush(q_33);
  goto m_51;
  q_33 :
  goto p_33;
  m_51 :
  Return();
  p_33 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_w_12)
  Epushd(0,1);
  MoveTop(0,1);
  goto o_51;
  o_51 :
  TestFunFC(d_34,&&fail,Egetd(0,1));
  Rpush(c_34);
  goto q_51;
  c_34 :
  goto v_33;
  q_51 :
  Return();
  v_33 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_x_12)
  _ST_table_put();
ENDPROC

PROC(_stratego_y_12)
  _ST_create_table();
ENDPROC

PROC(_stratego_z_12)
  Epushd(0,5);
  MoveTop(0,3);
  goto e_54;
  e_54 :
  TestFunFC(c_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto f_54;
  f_54 :
  TestFunFC(c_0,&&g_34,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(i_34);
  Rpush(j_34);
  goto y_57;
  j_34 :
  goto h_34;
  i_34 :
  Ccontinue(n_34);
  Rpush(o_34);
  goto z_57;
  o_34 :
  goto h_34;
  n_34 :
  Ccontinue(u_34);
  Rpush(y_34);
  goto a_58;
  y_34 :
  goto h_34;
  u_34 :
  Ccontinue(z_34);
  Rpush(f_35);
  goto b_58;
  f_35 :
  goto h_34;
  z_34 :
  Ccontinue(g_35);
  Rpush(h_35);
  goto c_58;
  h_35 :
  goto h_34;
  g_35 :
  Ccontinue(r_35);
  Rpush(s_35);
  goto d_58;
  s_35 :
  goto h_34;
  r_35 :
  Ccontinue(t_35);
  Rpush(u_35);
  goto e_58;
  u_35 :
  goto h_34;
  t_35 :
  Ccontinue(v_35);
  Rpush(w_35);
  goto f_58;
  w_35 :
  goto h_34;
  v_35 :
  Ccontinue(x_35);
  Rpush(y_35);
  goto g_58;
  y_35 :
  goto h_34;
  x_35 :
  Ccontinue(z_35);
  Rpush(d_36);
  goto h_58;
  d_36 :
  goto h_34;
  z_35 :
  Ccontinue(e_36);
  Rpush(f_36);
  goto i_58;
  f_36 :
  goto h_34;
  e_36 :
  Ccontinue(g_36);
  Rpush(h_36);
  goto j_58;
  h_36 :
  goto h_34;
  g_36 :
  Ccontinue(i_36);
  Rpush(j_36);
  goto k_58;
  j_36 :
  goto h_34;
  i_36 :
  Ccontinue(k_36);
  Rpush(l_36);
  goto l_58;
  l_36 :
  goto h_34;
  k_36 :
  Rpush(n_36);
  goto m_58;
  n_36 :
  goto m_36;
  h_34 :
  Cpop();
  m_36 :
  goto f_34;
  g_34 :
  Cpush(r_36);
  Rpush(s_36);
  goto y_57;
  s_36 :
  goto o_36;
  r_36 :
  Ccontinue(t_36);
  Rpush(u_36);
  goto z_57;
  u_36 :
  goto o_36;
  t_36 :
  Ccontinue(z_36);
  Rpush(k_37);
  goto a_58;
  k_37 :
  goto o_36;
  z_36 :
  Ccontinue(l_37);
  Rpush(m_37);
  goto b_58;
  m_37 :
  goto o_36;
  l_37 :
  Ccontinue(n_37);
  Rpush(o_37);
  goto c_58;
  o_37 :
  goto o_36;
  n_37 :
  Ccontinue(p_37);
  Rpush(q_37);
  goto i_58;
  q_37 :
  goto o_36;
  p_37 :
  Ccontinue(r_37);
  Rpush(s_37);
  goto j_58;
  s_37 :
  goto o_36;
  r_37 :
  Ccontinue(g_38);
  Rpush(h_38);
  goto k_58;
  h_38 :
  goto o_36;
  g_38 :
  Ccontinue(j_38);
  Rpush(n_38);
  goto l_58;
  n_38 :
  goto o_36;
  j_38 :
  Rpush(x_38);
  goto m_58;
  x_38 :
  goto p_38;
  o_36 :
  Cpop();
  p_38 :
  goto f_34;
  f_34 :
  goto e_34;
  y_57 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto h_52;
  h_52 :
  TestStr(1,1,"-S",&&fail);
  Rpush(z_38);
  goto n_58;
  z_38 :
  goto y_38;
  n_58 :
  Return();
  y_38 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(k_28));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(k_28),Egetd(0,5)));
  Return();
  z_57 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_52;
  k_52 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(b_39);
  goto p_58;
  b_39 :
  goto a_39;
  p_58 :
  Return();
  a_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(k_28));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(k_28),Egetd(0,5)));
  Return();
  a_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto n_52;
  n_52 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(k_39);
  goto r_58;
  k_39 :
  goto j_39;
  r_58 :
  Return();
  j_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(l_39));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(l_39),Egetd(0,5)));
  Return();
  b_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_52;
  q_52 :
  TestStr(1,1,"-v",&&fail);
  Rpush(n_39);
  goto t_58;
  n_39 :
  goto m_39;
  t_58 :
  Return();
  m_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_33));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(u_33),Egetd(0,5)));
  Return();
  c_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_52;
  t_52 :
  TestStr(1,1,"--version",&&fail);
  Rpush(p_39);
  goto v_58;
  p_39 :
  goto o_39;
  v_58 :
  Return();
  o_39 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_33));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(u_33),Egetd(0,5)));
  Return();
  d_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_52;
  w_52 :
  TestStr(1,1,"@version",&&fail);
  Rpush(r_39);
  goto x_58;
  r_39 :
  goto q_39;
  x_58 :
  Return();
  q_39 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(w_39,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(w_39,Egetd(0,1)),Egetd(0,2)));
  Return();
  e_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_53;
  a_53 :
  TestStr(1,1,"-i",&&fail);
  Rpush(b_40);
  goto a_59;
  b_40 :
  goto a_40;
  a_59 :
  Return();
  a_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(v_32,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(v_32,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto e_53;
  e_53 :
  TestStr(1,1,"--input",&&fail);
  Rpush(d_40);
  goto d_59;
  d_40 :
  goto c_40;
  d_59 :
  Return();
  c_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(v_32,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(v_32,Egetd(0,1)),Egetd(0,2)));
  Return();
  g_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_53;
  i_53 :
  TestStr(1,1,"-o",&&fail);
  Rpush(s_40);
  goto g_59;
  s_40 :
  goto q_40;
  g_59 :
  Return();
  q_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(k_30,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(k_30,Egetd(0,1)),Egetd(0,2)));
  Return();
  h_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto m_53;
  m_53 :
  TestStr(1,1,"--output",&&fail);
  Rpush(u_40);
  goto j_59;
  u_40 :
  goto t_40;
  j_59 :
  Return();
  t_40 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(k_30,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(k_30,Egetd(0,1)),Egetd(0,2)));
  Return();
  i_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto q_53;
  q_53 :
  TestStr(1,1,"-b",&&fail);
  Rpush(y_40);
  goto m_59;
  y_40 :
  goto w_40;
  m_59 :
  Return();
  w_40 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(m_31));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(m_31),Egetd(0,5)));
  Return();
  j_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto t_53;
  t_53 :
  TestStr(1,1,"-s",&&fail);
  Rpush(a_41);
  goto o_59;
  a_41 :
  goto z_40;
  o_59 :
  Return();
  z_40 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_41));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(b_41),Egetd(0,5)));
  Return();
  k_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto w_53;
  w_53 :
  TestStr(1,1,"--help",&&fail);
  Rpush(e_41);
  goto q_59;
  e_41 :
  goto c_41;
  q_59 :
  Return();
  c_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_34));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(d_34),Egetd(0,5)));
  Return();
  l_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto z_53;
  z_53 :
  TestStr(1,1,"-h",&&fail);
  Rpush(r_41);
  goto s_59;
  r_41 :
  goto q_41;
  s_59 :
  Return();
  q_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_34));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(d_34),Egetd(0,5)));
  Return();
  m_58 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_54;
  c_54 :
  TestStr(1,1,"-?",&&fail);
  Rpush(t_41);
  goto u_59;
  t_41 :
  goto s_41;
  u_59 :
  Return();
  s_41 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(d_34));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl0(d_34),Egetd(0,5)));
  Return();
  e_34 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_13)
  Epushd(0,1);
  MoveTop(0,1);
  goto x_59;
  x_59 :
  TestFunFC(d_0,&&fail,Egetd(0,1));
  Rpush(h_42);
  goto z_59;
  h_42 :
  goto v_41;
  z_59 :
  Return();
  v_41 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Epushd(0,1);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(p_26,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(g_43);
  g_61 :
  Cpush(h_44);
  Cpush(c_45);
  Ccall(_stratego_a_13);
  goto i_44;
  c_45 :
  Ccall(_stratego_z_12);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_45);
  goto g_61;
  h_45 :
  AllBuild();
  goto d_45;
  i_44 :
  Cpop();
  d_45 :
  goto s_43;
  h_44 :
  Epushd(1,3);
  MoveTop(1,1);
  goto c_60;
  c_60 :
  TestFunFC(c_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(l_45);
  goto h_61;
  l_45 :
  goto k_45;
  h_61 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(m_45,Egetd(1,2)),Egetd(1,3)));
  Return();
  k_45 :
  Epopd(1,3);
  goto j_45;
  s_43 :
  Cpop();
  j_45 :
  Return();
  g_43 :
  AllBuild();
  MoveTop(0,1);
  Tdupl();
  Tset(ATmakeString("option-table"));
  Ccall(_stratego_y_12);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(a_0,ATmakeString("option-table"),(ATerm)ATmakeAppl2(a_0,ATmakeString("options"),(ATerm)ATmakeAppl2(a_0,Egetd(0,1),(ATerm)ATmakeAppl0(e_0)))));
  Ccall(_stratego_x_12);
  Tpop();
  Cpush(h_46);
  Rpush(l_46);
  j_61 :
  Cpush(p_46);
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  Cpush(s_46);
  Ccall(_stratego_w_12);
  goto q_46;
  s_46 :
  Ccontinue(t_46);
  Epushd(1,2);
  MoveTop(1,1);
  goto f_60;
  f_60 :
  TestFunFC(m_45,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(e_47);
  goto k_61;
  e_47 :
  goto z_46;
  k_61 :
  Return();
  z_46 :
  Epopd(1,2);
  goto q_46;
  t_46 :
  Ccall(_stratego_v_12);
  goto f_47;
  q_46 :
  Cpop();
  f_47 :
  OneNextSon();
  AllBuild();
  goto o_46;
  p_46 :
  TestFunTop(c_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_47);
  goto j_61;
  l_47 :
  AllBuild();
  goto g_47;
  o_46 :
  Cpop();
  g_47 :
  Return();
  l_46 :
  Ccall(_stratego_i_10);
  goto g_46;
  h_46 :
  Ccontinue(m_47);
  Epushd(1,6);
  Ccall(_stratego_u_12);
  Tdupl();
  Ccall(_stratego_s_12);
  Tpop();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(a_0);
  TravInit();
  OneNextSon();
  Rpush(n_47);
  l_61 :
  Cpush(b_48);
  Ccall(_stratego_g_10);
  goto r_47;
  b_48 :
  AllInit();
  h_48 :
  AllNextSon(&&d_49);
  Rpush(g_49);
  goto l_61;
  g_49 :
  goto h_48;
  d_49 :
  AllBuild();
  goto e_48;
  r_47 :
  Cpop();
  e_48 :
  Return();
  n_47 :
  OneNextSon();
  Ccall(_stratego_h_10);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_s_12);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto i_60;
  i_60 :
  TestFunFC(a_0,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto j_60;
  j_60 :
  TestFunFC(a_0,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto k_60;
  k_60 :
  TestFunFC(e_0,&&fail,Egetd(1,6));
  Rpush(i_49);
  goto n_61;
  i_49 :
  goto h_49;
  n_61 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(a_0,(ATerm)ATmakeAppl2(c_0,(ATerm)ATmakeAppl1(g_29,Egetd(1,1)),Egetd(1,3)),(ATerm)ATmakeAppl2(a_0,Egetd(1,5),(ATerm)ATmakeAppl0(e_0))));
  Return();
  h_49 :
  Ccall(_stratego_r_12);
  Ccall(_stratego_o_12);
  Epopd(1,6);
  goto g_46;
  m_47 :
  Ccall(_stratego_r_10);
  goto j_49;
  g_46 :
  Cpop();
  j_49 :
  Epopd(0,1);
ENDPROC

DOIT

