#include <stratego.h>
#include <stratego-lib.h>
#include <stratego-ext.h>

VARDECL(AFun,b_101);
VARDECL(AFun,u_97);
VARDECL(AFun,p_96);
VARDECL(AFun,t_95);
VARDECL(AFun,g_89);
VARDECL(AFun,a_89);
VARDECL(AFun,u_88);
VARDECL(AFun,g_88);
VARDECL(AFun,n_87);
VARDECL(AFun,d_87);
VARDECL(AFun,z_86);
VARDECL(AFun,a_85);
VARDECL(AFun,b_83);
VARDECL(AFun,j_82);
VARDECL(AFun,g_82);
VARDECL(AFun,w_49);
VARDECL(AFun,p_44);
VARDECL(AFun,k_28);
VARDECL(AFun,j_28);
VARDECL(AFun,h_28);
VARDECL(AFun,x_27);
VARDECL(AFun,w_27);
VARDECL(AFun,t_26);
VARDECL(AFun,r_26);
VARDECL(AFun,f_26);
VARDECL(AFun,d_26);
VARDECL(AFun,b_26);
VARDECL(AFun,z_25);
VARDECL(AFun,x_25);
VARDECL(AFun,v_25);
VARDECL(AFun,q_25);
VARDECL(AFun,o_25);
VARDECL(AFun,p_21);
VARDECL(AFun,n_21);
VARDECL(AFun,l_21);
VARDECL(AFun,j_21);
VARDECL(AFun,h_21);
VARDECL(AFun,z_20);
VARDECL(AFun,n_20);
VARDECL(AFun,g_20);
VARDECL(AFun,z_19);
VARDECL(AFun,w_18);
VARDECL(AFun,k_18);
VARDECL(AFun,s_17);
VARDECL(AFun,r_17);
VARDECL(AFun,q_14);
VARDECL(AFun,q_13);
VARDECL(AFun,e_12);
VARDECL(AFun,c_12);
VARDECL(AFun,a_12);
VARDECL(AFun,v_11);
VARDECL(AFun,q_11);
VARDECL(AFun,p_11);
VARDECL(AFun,l_11);
VARDECL(AFun,g_11);
VARDECL(AFun,w_10);
VARDECL(AFun,u_10);
VARDECL(AFun,r_10);
VARDECL(AFun,m_8);
VARDECL(AFun,k_8);
VARDECL(AFun,r_5);
VARDECL(AFun,g_5);
VARDECL(AFun,l_4);
VARDECL(AFun,j_4);
VARDECL(AFun,h_4);
VARDECL(AFun,d_4);
VARDECL(AFun,c_4);
VARDECL(AFun,b_4);
VARDECL(AFun,z_3);
VARDECL(AFun,k_3);
VARDECL(AFun,j_3);
VARDECL(AFun,f_1);
VARDECL(AFun,b_1);
VARDECL(AFun,a_1);
VARDECL(AFun,z_0);
VARDECL(AFun,y_0);
VARDECL(AFun,x_0);
VARDECL(AFun,w_0);
VARDECL(AFun,v_0);
VARDECL(AFun,l_0);
PROCDECL(_stratego_x_35);
PROCDECL(_stratego_y_35);
PROCDECL(_stratego_z_35);
PROCDECL(_stratego_a_36);
PROCDECL(_stratego_b_36);
PROCDECL(_stratego_c_36);
PROCDECL(_stratego_d_36);
PROCDECL(_stratego_e_36);
PROCDECL(_stratego_f_36);
PROCDECL(_stratego_g_36);
PROCDECL(_stratego_h_36);
PROCDECL(_stratego_i_36);
PROCDECL(_stratego_j_36);
PROCDECL(_stratego_k_36);
PROCDECL(_stratego_l_36);
PROCDECL(_stratego_m_36);
PROCDECL(_stratego_n_36);
PROCDECL(_stratego_o_36);
PROCDECL(_stratego_p_36);
PROCDECL(_stratego_q_36);
PROCDECL(_stratego_r_36);
PROCDECL(_stratego_s_36);
PROCDECL(_stratego_t_36);
PROCDECL(_stratego_u_36);
PROCDECL(_stratego_v_36);
PROCDECL(_stratego_w_36);
PROCDECL(_stratego_x_36);
PROCDECL(_stratego_y_36);
PROCDECL(_stratego_z_36);
PROCDECL(_stratego_a_37);
PROCDECL(_stratego_b_37);
PROCDECL(_stratego_c_37);
PROCDECL(_stratego_d_37);
PROCDECL(_stratego_e_37);
PROCDECL(_stratego_f_37);
PROCDECL(_stratego_g_37);
PROCDECL(_stratego_h_37);
PROCDECL(_stratego_i_37);
PROCDECL(_stratego_j_37);
PROCDECL(_stratego_k_37);
PROCDECL(_stratego_l_37);
PROCDECL(_stratego_m_37);
PROCDECL(_stratego_n_37);
PROCDECL(_stratego_o_37);
PROCDECL(_stratego_p_37);
PROCDECL(_stratego_q_37);
PROCDECL(_stratego_r_37);
PROCDECL(_stratego_s_37);
PROCDECL(_stratego_t_37);
PROCDECL(_stratego_main);

PROC(_stratego_init_afuns)
  MOVE(b_101,ATmakeAFun("Undefined",1,0));
  MOVE(u_97,ATmakeAFun("Statistics",0,0));
  MOVE(p_96,ATmakeAFun("DeclVersion",1,0));
  MOVE(t_95,ATmakeAFun("Verbose",0,0));
  MOVE(g_89,ATmakeAFun("Help",0,0));
  MOVE(a_89,ATmakeAFun("Version",0,0));
  MOVE(u_88,ATmakeAFun("stdin",0,0));
  MOVE(g_88,ATmakeAFun("Input",1,0));
  MOVE(n_87,ATmakeAFun("Binary",0,0));
  MOVE(d_87,ATmakeAFun("stdout",0,0));
  MOVE(z_86,ATmakeAFun("Output",1,0));
  MOVE(a_85,ATmakeAFun("Runtime",1,0));
  MOVE(b_83,ATmakeAFun("Silent",0,0));
  MOVE(j_82,ATmakeAFun("stderr",0,0));
  MOVE(g_82,ATmakeAFun("Program",1,0));
  MOVE(w_49,ATmakeAFun("Module",2,0));
  MOVE(p_44,ATmakeAFun("Constructors",1,0));
  MOVE(k_28,ATmakeAFun("SDef",3,0));
  MOVE(j_28,ATmakeAFun("Overlay",3,0));
  MOVE(h_28,ATmakeAFun("Build",1,0));
  MOVE(x_27,ATmakeAFun("Some",1,0));
  MOVE(w_27,ATmakeAFun("Call",2,0));
  MOVE(t_26,ATmakeAFun("Str",1,0));
  MOVE(r_26,ATmakeAFun("List",1,0));
  MOVE(f_26,ATmakeAFun("non-assoc",0,0));
  MOVE(d_26,ATmakeAFun("assoc",0,0));
  MOVE(b_26,ATmakeAFun("right",0,0));
  MOVE(z_25,ATmakeAFun("left",0,0));
  MOVE(x_25,ATmakeAFun("memo",0,0));
  MOVE(v_25,ATmakeAFun("constructor",0,0));
  MOVE(q_25,ATmakeAFun("atr",1,0));
  MOVE(o_25,ATmakeAFun("attrs",1,0));
  MOVE(p_21,ATmakeAFun("context-free-syntax",1,0));
  MOVE(n_21,ATmakeAFun("Strategies",1,0));
  MOVE(l_21,ATmakeAFun("Rules",1,0));
  MOVE(j_21,ATmakeAFun("Overlays",1,0));
  MOVE(h_21,ATmakeAFun("Signature",1,0));
  MOVE(z_20,ATmakeAFun("Exports",1,0));
  MOVE(n_20,ATmakeAFun("Imports",1,0));
  MOVE(g_20,ATmakeAFun("Module",3,0));
  MOVE(z_19,ATmakeAFun("Definition",1,0));
  MOVE(w_18,ATmakeAFun("OpDecl",2,0));
  MOVE(k_18,ATmakeAFun("cons",1,0));
  MOVE(s_17,ATmakeAFun("FunType",2,0));
  MOVE(r_17,ATmakeAFun("ConstType",1,0));
  MOVE(q_14,ATmakeAFun("sort",1,0));
  MOVE(q_13,ATmakeAFun("alt",2,0));
  MOVE(e_12,ATmakeAFun("pair",2,0));
  MOVE(c_12,ATmakeAFun("iter-sep-n",3,0));
  MOVE(a_12,ATmakeAFun("iter-n",2,0));
  MOVE(v_11,ATmakeAFun("iter-star-sep",2,0));
  MOVE(q_11,ATmakeAFun("dummy",0,0));
  MOVE(p_11,ATmakeAFun("iter-sep",2,0));
  MOVE(l_11,ATmakeAFun("iter-star",1,0));
  MOVE(g_11,ATmakeAFun("iter",1,0));
  MOVE(w_10,ATmakeAFun("seq",2,0));
  MOVE(u_10,ATmakeAFun("lex",1,0));
  MOVE(r_10,ATmakeAFun("bracket-symbol",1,0));
  MOVE(m_8,ATmakeAFun("TNil",0,0));
  MOVE(k_8,ATmakeAFun("TCons",2,0));
  MOVE(r_5,ATmakeAFun("prod-fun",4,0));
  MOVE(g_5,ATmakeAFun("label",2,0));
  MOVE(l_4,ATmakeAFun("layout",0,0));
  MOVE(j_4,ATmakeAFun("opt",1,0));
  MOVE(h_4,ATmakeAFun("cf",1,0));
  MOVE(d_4,ATmakeAFun("no-attrs",0,0));
  MOVE(c_4,ATmakeAFun("prod",3,0));
  MOVE(b_4,ATmakeAFun("appl",2,0));
  MOVE(z_3,ATmakeAFun("char-class",1,0));
  MOVE(k_3,ATmakeAFun("Var",1,0));
  MOVE(j_3,ATmakeAFun("lit",1,0));
  MOVE(f_1,ATmakeAFun("Id",0,0));
  MOVE(b_1,ATmakeAFun("Tuple",1,0));
  MOVE(a_1,ATmakeAFun("SVar",1,0));
  MOVE(z_0,ATmakeAFun("App",2,0));
  MOVE(y_0,ATmakeAFun("Nil",0,0));
  MOVE(x_0,ATmakeAFun("Op",2,0));
  MOVE(w_0,ATmakeAFun("variable",1,0));
  MOVE(v_0,ATmakeAFun("layout-variable",1,0));
  MOVE(l_0,ATmakeAFun("Cons",2,0));
ENDPROC

PROC(_stratego_x_35)
  Rpush(a_0);
  h_0 :
  Cpush(g_0);
  Ccall(_stratego_s_37);
  goto f_0;
  g_0 :
  Epushd(0,3);
  MoveTop(0,1);
  goto b_0;
  b_0 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(k_0);
  goto h_5;
  k_0 :
  goto j_0;
  h_5 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(m_0);
  l_8 :
  Cpush(o_0);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_0);
  goto l_8;
  p_0 :
  AllBuild();
  goto n_0;
  o_0 :
  Ccall(_stratego_s_37);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(r_0);
  goto h_0;
  r_0 :
  goto q_0;
  n_0 :
  Cpop();
  q_0 :
  Return();
  m_0 :
  Return();
  j_0 :
  Epopd(0,3);
  goto i_0;
  f_0 :
  Cpop();
  i_0 :
  Return();
  a_0 :
ENDPROC

PROC(_stratego_y_35)
  Epushd(0,2);
  MoveTop(0,1);
  goto i_11;
  i_11 :
  TestFunFC(v_0,&&u_0,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_0);
  goto n_11;
  u_0 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(t_0);
  goto o_11;
  t_0 :
  goto s_0;
  n_11 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("empty-layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  o_11 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(z_0,(ATerm)ATmakeAppl1(a_1,Egetd(0,2)),(ATerm)ATmakeAppl1(b_1,(ATerm)ATmakeAppl0(y_0))));
  Return();
  s_0 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_z_35)
  Epushd(0,2);
  MoveTop(0,1);
  goto r_11;
  r_11 :
  TestFunFC(v_0,&&e_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_1);
  goto w_11;
  e_1 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_1);
  goto x_11;
  d_1 :
  goto c_1;
  w_11 :
  Tset((ATerm)ATmakeAppl0(f_1));
  Return();
  x_11 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl1(a_1,Egetd(0,2)));
  Return();
  c_1 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_a_36)
  Epushd(0,1);
  Ccall(_stratego_t_36);
  MoveTop(0,1);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,MakeInt(34),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,MakeInt(34),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(y_0)))));
  Ccall(_stratego_x_35);
  Ccall(_stratego_s_36);
  Epopd(0,1);
ENDPROC

PROC(_stratego_b_36)
  Epushd(0,3);
  MoveTop(0,1);
  goto i_12;
  i_12 :
  TestInt(0,1,34,&&j_1);
  Cpush(l_1);
  Rpush(m_1);
  goto d_13;
  m_1 :
  goto k_1;
  l_1 :
  Rpush(o_1);
  goto f_13;
  o_1 :
  goto n_1;
  k_1 :
  Cpop();
  n_1 :
  goto h_1;
  j_1 :
  TestInt(0,1,92,&&p_1);
  Cpush(r_1);
  Rpush(s_1);
  goto e_13;
  s_1 :
  goto q_1;
  r_1 :
  Rpush(u_1);
  goto f_13;
  u_1 :
  goto t_1;
  q_1 :
  Cpop();
  t_1 :
  goto h_1;
  p_1 :
  TestFunFC(l_0,&&i_1,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto j_12;
  j_12 :
  TestInt(0,2,34,&&w_1);
  Cpush(y_1);
  Rpush(z_1);
  goto f_13;
  z_1 :
  goto x_1;
  y_1 :
  Rpush(b_2);
  goto g_13;
  b_2 :
  goto a_2;
  x_1 :
  Cpop();
  a_2 :
  goto h_1;
  w_1 :
  TestInt(0,2,92,&&c_2);
  Cpush(e_2);
  Rpush(f_2);
  goto f_13;
  f_2 :
  goto d_2;
  e_2 :
  Rpush(h_2);
  goto h_13;
  h_2 :
  goto g_2;
  d_2 :
  Cpop();
  g_2 :
  goto h_1;
  c_2 :
  TestInt(0,2,10,&&v_1);
  Cpush(j_2);
  Rpush(k_2);
  goto f_13;
  k_2 :
  goto i_2;
  j_2 :
  Rpush(m_2);
  goto i_13;
  m_2 :
  goto l_2;
  i_2 :
  Cpop();
  l_2 :
  goto h_1;
  v_1 :
  Rpush(h_1);
  goto f_13;
  i_1 :
  Rpush(h_1);
  goto f_13;
  h_1 :
  goto g_1;
  d_13 :
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl2(l_0,MakeInt(34),(ATerm)ATmakeAppl0(y_0))));
  Return();
  e_13 :
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl0(y_0))));
  Return();
  f_13 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl0(y_0)));
  Return();
  g_13 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl2(l_0,MakeInt(34),Egetd(0,3))));
  Return();
  h_13 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl2(l_0,MakeInt(92),Egetd(0,3))));
  Return();
  i_13 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),(ATerm)ATmakeAppl2(l_0,MakeInt(110),Egetd(0,3))));
  Return();
  g_1 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_c_36)
  Cpush(o_2);
  Ccall(_stratego_t_36);
  Rpush(p_2);
  j_13 :
  Cpush(r_2);
  Ccall(_stratego_s_37);
  goto q_2;
  r_2 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_b_36);
  OneNextSon();
  Rpush(t_2);
  goto j_13;
  t_2 :
  AllBuild();
  goto s_2;
  q_2 :
  Cpop();
  s_2 :
  Return();
  p_2 :
  Ccall(_stratego_x_35);
  Ccall(_stratego_s_36);
  goto n_2;
  o_2 :
  Ccall(_stratego_t_36);
  Rpush(v_2);
  k_13 :
  Cpush(x_2);
  Ccall(_stratego_b_36);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_2);
  goto k_13;
  y_2 :
  AllBuild();
  AllBuild();
  goto w_2;
  x_2 :
  Ccontinue(z_2);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(a_3);
  goto k_13;
  a_3 :
  AllBuild();
  goto w_2;
  z_2 :
  Ccall(_stratego_s_37);
  goto b_3;
  w_2 :
  Cpop();
  b_3 :
  Return();
  v_2 :
  Ccall(_stratego_s_36);
  goto u_2;
  n_2 :
  Cpop();
  u_2 :
ENDPROC

PROC(_stratego_d_36)
  Epushd(0,2);
  MoveTop(0,1);
  goto n_13;
  n_13 :
  TestFunFC(v_0,&&e_3,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_3);
  goto s_13;
  e_3 :
  TestFunFC(w_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(d_3);
  goto t_13;
  d_3 :
  goto c_3;
  s_13 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  t_13 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Return();
  c_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_e_36)
  _ST_int_to_string();
ENDPROC

PROC(_stratego_f_36)
  Epushd(0,2);
  MoveTop(0,1);
  goto f_14;
  f_14 :
  TestFunFC(v_0,&&h_3,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_3);
  goto i_22;
  h_3 :
  TestFunFC(w_0,&&i_3,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_3);
  goto k_22;
  i_3 :
  TestFunFC(j_3,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  Rpush(g_3);
  goto l_22;
  g_3 :
  goto f_3;
  i_22 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl1(k_3,Egetd(0,2)));
  Return();
  k_22 :
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl1(k_3,Egetd(0,2)));
  Return();
  l_22 :
  Epushd(1,2);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl1(j_3,Egetd(0,2)));
  MoveTop(1,1);
  goto e_14;
  e_14 :
  TestFunFC(j_3,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(m_3);
  goto t_22;
  m_3 :
  goto l_3;
  t_22 :
  Epushd(2,3);
  Tdupl();
  Epushd(3,3);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  Cpush(o_3);
  Ccall(_stratego_u_36);
  Ccall(_stratego_r_36);
  goto n_3;
  o_3 :
  goto p_3;
  n_3 :
  Cpop();
  p_3 :
  MoveTop(3,1);
  Move(2,1,3,1);
  Ccall(_stratego_t_36);
  Rpush(q_3);
  r_25 :
  Cpush(s_3);
  Ccall(_stratego_s_37);
  goto r_3;
  s_3 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_e_36);
  OneNextSon();
  Rpush(u_3);
  goto r_25;
  u_3 :
  AllBuild();
  goto t_3;
  r_3 :
  Cpop();
  t_3 :
  Return();
  q_3 :
  MoveTop(3,2);
  Move(2,2,3,2);
  NotNULLd(2,2);
  Tset(Egetd(2,2));
  Rpush(v_3);
  t_25 :
  Cpush(x_3);
  Ccall(_stratego_s_37);
  goto w_3;
  x_3 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(4,1);
  MoveTop(4,1);
  NotNULLd(4,1);
  Tset((ATerm)ATmakeAppl1(z_3,(ATerm)ATmakeAppl2(l_0,Egetd(4,1),(ATerm)ATmakeAppl0(y_0))));
  Epopd(4,1);
  OneNextSon();
  Rpush(a_4);
  goto t_25;
  a_4 :
  AllBuild();
  goto y_3;
  w_3 :
  Cpop();
  y_3 :
  Return();
  v_3 :
  MoveTop(3,3);
  Move(2,3,3,3);
  Epopd(3,3);
  Tpop();
  NotNULLd(2,3);
  NotNULLd(2,1);
  NotNULLd(2,2);
  Tset((ATerm)ATmakeAppl2(b_4,(ATerm)ATmakeAppl3(c_4,Egetd(2,3),(ATerm)ATmakeAppl1(j_3,Egetd(2,1)),(ATerm)ATmakeAppl0(d_4)),Egetd(2,2)));
  Epopd(2,3);
  Return();
  l_3 :
  Epopd(1,2);
  Return();
  f_3 :
  Epopd(0,2);
ENDPROC

PROC(_stratego_g_36)
  _ST_new();
ENDPROC

PROC(_stratego_h_36)
  Epushd(0,3);
  MoveTop(0,2);
  goto e_27;
  e_27 :
  TestFunFC(h_4,&&g_4,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  goto f_27;
  f_27 :
  TestFunFC(j_4,&&i_4,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  goto g_27;
  g_27 :
  TestFunFC(l_4,&&k_4,Egetd(0,1));
  Cpush(n_4);
  Rpush(o_4);
  goto p_27;
  o_4 :
  goto m_4;
  n_4 :
  Rpush(q_4);
  goto q_27;
  q_4 :
  goto p_4;
  m_4 :
  Cpop();
  p_4 :
  goto f_4;
  k_4 :
  Rpush(f_4);
  goto q_27;
  i_4 :
  Rpush(f_4);
  goto q_27;
  g_4 :
  TestFunFC(j_3,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(f_4);
  goto r_27;
  f_4 :
  goto e_4;
  p_27 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_g_36);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(v_0,Egetd(1,1)));
  Epopd(1,1);
  Return();
  q_27 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_g_36);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(w_0,Egetd(1,1)));
  Epopd(1,1);
  Return();
  r_27 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(j_3,Egetd(0,3)));
  Return();
  e_4 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_i_36)
  Epushd(0,3);
  MoveTop(0,3);
  goto l_30;
  l_30 :
  TestFunFC(j_3,&&u_4,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  Cpush(w_4);
  Rpush(x_4);
  goto l_35;
  x_4 :
  goto v_4;
  w_4 :
  Rpush(z_4);
  goto w_37;
  z_4 :
  goto y_4;
  v_4 :
  Cpop();
  y_4 :
  goto s_4;
  u_4 :
  TestFunFC(z_3,&&a_5,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  Cpush(c_5);
  Rpush(d_5);
  goto u_37;
  d_5 :
  goto b_5;
  c_5 :
  Rpush(f_5);
  goto w_37;
  f_5 :
  goto e_5;
  b_5 :
  Cpop();
  e_5 :
  goto s_4;
  a_5 :
  TestFunFC(g_5,&&t_4,Egetd(0,3));
  MoveArg(0,1,0,3,0);
  MoveArg(0,2,0,3,1);
  Cpush(j_5);
  Rpush(k_5);
  goto v_37;
  k_5 :
  goto i_5;
  j_5 :
  Rpush(m_5);
  goto w_37;
  m_5 :
  goto l_5;
  i_5 :
  Cpop();
  l_5 :
  goto s_4;
  t_4 :
  Rpush(s_4);
  goto w_37;
  s_4 :
  goto r_4;
  l_35 :
  Return();
  u_37 :
  Return();
  v_37 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_i_36);
  Return();
  w_37 :
  Epushd(1,0);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(h_4,Egetd(0,3)));
  Epopd(1,0);
  Return();
  r_4 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_j_36)
  Cpush(o_5);
  Epushd(0,5);
  MoveTop(0,1);
  goto c_38;
  c_38 :
  TestFunFC(r_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(q_5);
  goto g_39;
  q_5 :
  goto p_5;
  g_39 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(s_5);
  h_39 :
  Cpush(u_5);
  Ccall(_stratego_s_37);
  goto t_5;
  u_5 :
  Ccontinue(v_5);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_37);
  AllBuild();
  goto t_5;
  v_5 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(3,1);
  Rpush(x_5);
  goto h_39;
  x_5 :
  MoveTop(3,1);
  Tset((ATerm)ATmakeAppl1(j_3,ATmakeString(",")));
  NotNULLd(3,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_3,ATmakeString(",")),Egetd(3,1)));
  Epopd(3,1);
  AllBuild();
  goto w_5;
  t_5 :
  Cpop();
  w_5 :
  Return();
  s_5 :
  MoveTop(2,1);
  NotNULLd(0,2);
  NotNULLd(2,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_3,Egetd(0,2)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_3,ATmakeString("(")),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl2(l_0,Egetd(2,1),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_3,ATmakeString(")")),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(y_0)))));
  Ccall(_stratego_x_35);
  MoveTop(2,2);
  Move(1,1,2,2);
  Epopd(2,2);
  Tpop();
  NotNULLd(1,1);
  NotNULLd(0,4);
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl3(c_4,Egetd(1,1),Egetd(0,4),Egetd(0,5)));
  Epopd(1,1);
  Return();
  p_5 :
  Epopd(0,5);
  goto n_5;
  o_5 :
  goto y_5;
  n_5 :
  Cpop();
  y_5 :
  Cpush(a_6);
  TestFunTop(c_4);
  TravInit();
  OneNextSon();
  Rpush(b_6);
  m_39 :
  Cpush(d_6);
  Ccall(_stratego_s_37);
  goto c_6;
  d_6 :
  Ccontinue(e_6);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_37);
  AllBuild();
  goto c_6;
  e_6 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(0,1);
  Rpush(g_6);
  goto m_39;
  g_6 :
  MoveTop(0,1);
  Tset((ATerm)ATmakeAppl1(j_4,(ATerm)ATmakeAppl0(l_4)));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_4,(ATerm)ATmakeAppl0(l_4)),Egetd(0,1)));
  Epopd(0,1);
  AllBuild();
  goto f_6;
  c_6 :
  Cpop();
  f_6 :
  Return();
  b_6 :
  Rpush(h_6);
  p_39 :
  Cpush(j_6);
  Ccall(_stratego_s_37);
  goto i_6;
  j_6 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(m_6);
  Ccall(_stratego_i_36);
  goto l_6;
  m_6 :
  goto n_6;
  l_6 :
  Cpop();
  n_6 :
  OneNextSon();
  Rpush(o_6);
  goto p_39;
  o_6 :
  AllBuild();
  goto k_6;
  i_6 :
  Cpop();
  k_6 :
  Return();
  h_6 :
  OneNextSon();
  Cpush(q_6);
  Ccall(_stratego_i_36);
  goto p_6;
  q_6 :
  goto r_6;
  p_6 :
  Cpop();
  r_6 :
  OneNextSon();
  AllBuild();
  goto z_5;
  a_6 :
  TestFunTop(c_4);
  TravInit();
  OneNextSon();
  Rpush(t_6);
  q_39 :
  Cpush(v_6);
  Ccall(_stratego_s_37);
  goto u_6;
  v_6 :
  Ccontinue(w_6);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_37);
  AllBuild();
  goto u_6;
  w_6 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Epushd(0,1);
  Rpush(y_6);
  goto q_39;
  y_6 :
  MoveTop(0,1);
  Tset((ATerm)ATmakeAppl1(j_4,(ATerm)ATmakeAppl0(l_4)));
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_4,(ATerm)ATmakeAppl0(l_4)),Egetd(0,1)));
  Epopd(0,1);
  AllBuild();
  goto x_6;
  u_6 :
  Cpop();
  x_6 :
  Return();
  t_6 :
  Rpush(z_6);
  t_39 :
  Cpush(b_7);
  Ccall(_stratego_s_37);
  goto a_7;
  b_7 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(e_7);
  Ccall(_stratego_i_36);
  goto d_7;
  e_7 :
  goto f_7;
  d_7 :
  Cpop();
  f_7 :
  OneNextSon();
  Rpush(g_7);
  goto t_39;
  g_7 :
  AllBuild();
  goto c_7;
  a_7 :
  Cpop();
  c_7 :
  Return();
  z_6 :
  OneNextSon();
  Cpush(i_7);
  Ccall(_stratego_i_36);
  goto h_7;
  i_7 :
  goto j_7;
  h_7 :
  Cpop();
  j_7 :
  OneNextSon();
  AllBuild();
  goto s_6;
  z_5 :
  Cpop();
  s_6 :
ENDPROC

PROC(_stratego_k_36)
  Epushd(0,1);
  MoveTop(0,1);
  goto a_40;
  a_40 :
  TestStr(0,1,"module",&&m_7);
  Rpush(l_7);
  goto c_40;
  m_7 :
  TestStr(0,1,"exports",&&n_7);
  Rpush(l_7);
  goto d_40;
  n_7 :
  TestStr(0,1,"hiddens",&&o_7);
  Rpush(l_7);
  goto e_40;
  o_7 :
  TestStr(0,1,"id",&&p_7);
  Rpush(l_7);
  goto f_40;
  p_7 :
  TestStr(0,1,"imports",&&q_7);
  Rpush(l_7);
  goto g_40;
  q_7 :
  TestStr(0,1,"sorts",&&fail);
  Rpush(l_7);
  goto h_40;
  l_7 :
  goto k_7;
  c_40 :
  Tset(ATmakeString("Module"));
  Return();
  d_40 :
  Tset(ATmakeString("Exports"));
  Return();
  e_40 :
  Tset(ATmakeString("Hiddens"));
  Return();
  f_40 :
  Tset(ATmakeString("Id"));
  Return();
  g_40 :
  Tset(ATmakeString("Imports"));
  Return();
  h_40 :
  Tset(ATmakeString("Sorts"));
  Return();
  k_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_l_36)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_40;
  m_40 :
  TestInt(0,1,45,&&t_7);
  Cpush(v_7);
  Rpush(w_7);
  goto r_40;
  w_7 :
  goto u_7;
  v_7 :
  Ccontinue(x_7);
  Rpush(y_7);
  goto s_40;
  y_7 :
  goto u_7;
  x_7 :
  Ccontinue(z_7);
  Rpush(a_8);
  goto t_40;
  a_8 :
  goto u_7;
  z_7 :
  Rpush(c_8);
  goto u_40;
  c_8 :
  goto b_8;
  u_7 :
  Cpop();
  b_8 :
  goto s_7;
  t_7 :
  Cpush(e_8);
  Rpush(f_8);
  goto r_40;
  f_8 :
  goto d_8;
  e_8 :
  Ccontinue(g_8);
  Rpush(h_8);
  goto s_40;
  h_8 :
  goto d_8;
  g_8 :
  Rpush(j_8);
  goto t_40;
  j_8 :
  goto i_8;
  d_8 :
  Cpop();
  i_8 :
  goto s_7;
  s_7 :
  goto r_7;
  r_40 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,MakeInt(57),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,MakeInt(48),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Return();
  s_40 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,MakeInt(90),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,MakeInt(65),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Return();
  t_40 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,MakeInt(122),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,MakeInt(97),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Return();
  u_40 :
  Tset((ATerm)ATmakeAppl0(m_8));
  Return();
  r_7 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_m_36)
  _ST_gt();
ENDPROC

PROC(_stratego_n_36)
  Cpush(n_8);
  Tdupl();
  Ccall(_stratego_m_36);
  Cpop();
  Crestore();
  Cjump();
  n_8 :
ENDPROC

PROC(_stratego_o_36)
  Epushd(0,1);
  MoveTop(0,1);
  Cpush(q_8);
  Rpush(r_8);
  goto a_41;
  r_8 :
  goto p_8;
  q_8 :
  Rpush(t_8);
  goto b_41;
  t_8 :
  goto s_8;
  p_8 :
  Cpop();
  s_8 :
  goto o_8;
  a_41 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,MakeInt(90),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,MakeInt(65),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Return();
  b_41 :
  Tdupl();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,MakeInt(122),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,MakeInt(97),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_n_36);
  Return();
  o_8 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_36)
  Tdupl();
  Ccall(_stratego_t_36);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_o_36);
  OneNextSon();
  Rpush(u_8);
  g_41 :
  Cpush(w_8);
  Ccall(_stratego_s_37);
  goto v_8;
  w_8 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(z_8);
  Ccall(_stratego_l_36);
  goto y_8;
  z_8 :
  Epushd(0,1);
  MoveTop(0,1);
  goto e_41;
  e_41 :
  TestInt(0,1,39,&&d_9);
  Rpush(c_9);
  goto h_41;
  d_9 :
  TestInt(0,1,95,&&fail);
  Rpush(c_9);
  goto i_41;
  c_9 :
  goto b_9;
  h_41 :
  Tset((ATerm)ATmakeAppl0(m_8));
  Return();
  i_41 :
  Tset((ATerm)ATmakeAppl0(m_8));
  Return();
  b_9 :
  Epopd(0,1);
  goto a_9;
  y_8 :
  Cpop();
  a_9 :
  OneNextSon();
  Rpush(e_9);
  goto g_41;
  e_9 :
  AllBuild();
  goto x_8;
  v_8 :
  Cpop();
  x_8 :
  Return();
  u_8 :
  AllBuild();
  Tpop();
ENDPROC

PROC(_stratego_q_36)
  Epushd(0,5);
  MoveTop(0,5);
  goto q_41;
  q_41 :
  TestFunFC(l_0,&&h_9,Egetd(0,5));
  MoveArg(0,3,0,5,0);
  MoveArg(0,4,0,5,1);
  goto r_41;
  r_41 :
  TestFunFC(l_0,&&i_9,Egetd(0,4));
  MoveArg(0,1,0,4,0);
  MoveArg(0,2,0,4,1);
  goto s_41;
  s_41 :
  TestInt(0,1,34,&&k_9);
  goto t_41;
  t_41 :
  TestInt(0,3,92,&&l_9);
  Cpush(n_9);
  Rpush(o_9);
  goto l_42;
  o_9 :
  goto m_9;
  n_9 :
  Rpush(q_9);
  goto n_42;
  q_9 :
  goto p_9;
  m_9 :
  Cpop();
  p_9 :
  goto g_9;
  l_9 :
  Rpush(g_9);
  goto n_42;
  k_9 :
  TestInt(0,1,92,&&j_9);
  goto u_41;
  u_41 :
  TestInt(0,3,92,&&r_9);
  Cpush(t_9);
  Rpush(u_9);
  goto m_42;
  u_9 :
  goto s_9;
  t_9 :
  Rpush(w_9);
  goto n_42;
  w_9 :
  goto v_9;
  s_9 :
  Cpop();
  v_9 :
  goto g_9;
  r_9 :
  Rpush(g_9);
  goto n_42;
  j_9 :
  goto v_41;
  v_41 :
  x_9 :
  Rpush(g_9);
  goto n_42;
  i_9 :
  goto v_41;
  h_9 :
  TestFunFC(y_0,&&fail,Egetd(0,5));
  Rpush(g_9);
  goto o_42;
  g_9 :
  goto f_9;
  l_42 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_q_36);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(34),Egetd(1,1)));
  Epopd(1,1);
  Return();
  m_42 :
  Epushd(1,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_q_36);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(l_0,MakeInt(92),Egetd(1,1)));
  Epopd(1,1);
  Return();
  n_42 :
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_q_36);
  MoveTop(1,1);
  NotNULLd(0,3);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(0,3),Egetd(1,1)));
  Epopd(1,1);
  Return();
  o_42 :
  Tset((ATerm)ATmakeAppl0(y_0));
  Return();
  f_9 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_r_36)
  Ccall(_stratego_t_36);
  Ccall(_stratego_q_36);
  Ccall(_stratego_s_36);
ENDPROC

PROC(_stratego_s_36)
  _ST_implode_string();
ENDPROC

PROC(_stratego_t_36)
  _ST_explode_string();
ENDPROC

PROC(_stratego_u_36)
  Epushd(0,3);
  Ccall(_stratego_t_36);
  Tdupl();
  Epushd(1,3);
  MoveTop(1,1);
  goto v_42;
  v_42 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(a_10);
  goto q_43;
  a_10 :
  goto z_9;
  q_43 :
  Epushd(2,1);
  NotNULLd(1,2);
  Tset(Egetd(1,2));
  MoveTop(2,1);
  goto u_42;
  u_42 :
  TestInt(2,1,34,&&fail);
  Rpush(c_10);
  goto r_43;
  c_10 :
  goto b_10;
  r_43 :
  Return();
  b_10 :
  Epopd(2,1);
  Return();
  z_9 :
  Epopd(1,3);
  Tpop();
  MoveTop(0,1);
  goto b_43;
  b_43 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(d_10);
  goto s_43;
  d_10 :
  goto y_9;
  s_43 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(e_10);
  t_43 :
  Cpush(g_10);
  Epushd(1,3);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_s_37);
  AllBuild();
  MoveTop(1,1);
  goto y_42;
  y_42 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto z_42;
  z_42 :
  TestInt(1,2,34,&&fail);
  goto a_43;
  a_43 :
  TestFunFC(y_0,&&fail,Egetd(1,3));
  Rpush(i_10);
  goto u_43;
  i_10 :
  goto h_10;
  u_43 :
  Tset((ATerm)ATmakeAppl0(y_0));
  Return();
  h_10 :
  Epopd(1,3);
  goto f_10;
  g_10 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(k_10);
  goto t_43;
  k_10 :
  AllBuild();
  goto j_10;
  f_10 :
  Cpop();
  j_10 :
  Return();
  e_10 :
  Ccall(_stratego_s_36);
  Return();
  y_9 :
  Epopd(0,3);
ENDPROC

PROC(_stratego_v_36)
  Cpush(m_10);
  Ccall(_stratego_u_36);
  Ccall(_stratego_r_36);
  goto l_10;
  m_10 :
  goto n_10;
  l_10 :
  Cpop();
  n_10 :
  Ccall(_stratego_p_36);
ENDPROC

PROC(_stratego_w_36)
  Epushd(0,10);
  MoveTop(0,2);
  goto l_45;
  l_45 :
  TestFunFC(r_10,&&q_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto m_48;
  q_10 :
  TestFunFC(h_4,&&s_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto n_48;
  s_10 :
  TestFunFC(u_10,&&t_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto o_48;
  t_10 :
  TestFunFC(w_10,&&v_10,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Cpush(y_10);
  Rpush(z_10);
  goto p_48;
  z_10 :
  goto x_10;
  y_10 :
  Ccontinue(a_11);
  Rpush(b_11);
  goto q_48;
  b_11 :
  goto x_10;
  a_11 :
  Rpush(d_11);
  goto r_48;
  d_11 :
  goto c_11;
  x_10 :
  Cpop();
  c_11 :
  goto p_10;
  v_10 :
  TestFunFC(j_4,&&e_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto s_48;
  e_11 :
  TestFunFC(g_11,&&f_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto t_48;
  f_11 :
  TestFunFC(l_11,&&h_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto u_48;
  h_11 :
  TestFunFC(p_11,&&m_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto m_45;
  m_45 :
  TestFunFC(q_11,&&fail,Egetd(0,4));
  Rpush(p_10);
  goto v_48;
  m_11 :
  TestFunFC(v_11,&&u_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto n_45;
  n_45 :
  TestFunFC(q_11,&&fail,Egetd(0,4));
  Rpush(p_10);
  goto w_48;
  u_11 :
  TestFunFC(a_12,&&y_11,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_10);
  goto x_48;
  y_11 :
  TestFunFC(c_12,&&b_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  MoveArg(0,1,0,2,2);
  goto o_45;
  o_45 :
  TestFunFC(q_11,&&fail,Egetd(0,4));
  Rpush(p_10);
  goto y_48;
  b_12 :
  TestFunFC(e_12,&&d_12,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto p_45;
  p_45 :
  TestFunFC(q_11,&&f_12,Egetd(0,4));
  goto q_45;
  q_45 :
  TestFunFC(q_11,&&g_12,Egetd(0,3));
  Cpush(n_12);
  Rpush(o_12);
  goto z_48;
  o_12 :
  goto h_12;
  n_12 :
  Ccontinue(p_12);
  Rpush(q_12);
  goto a_49;
  q_12 :
  goto h_12;
  p_12 :
  Rpush(s_12);
  goto b_49;
  s_12 :
  goto r_12;
  h_12 :
  Cpop();
  r_12 :
  goto p_10;
  g_12 :
  Cpush(u_12);
  Rpush(v_12);
  goto a_49;
  v_12 :
  goto t_12;
  u_12 :
  Rpush(x_12);
  goto b_49;
  x_12 :
  goto w_12;
  t_12 :
  Cpop();
  w_12 :
  goto p_10;
  f_12 :
  goto r_45;
  r_45 :
  TestFunFC(q_11,&&y_12,Egetd(0,3));
  Cpush(a_13);
  Rpush(b_13);
  goto z_48;
  b_13 :
  goto z_12;
  a_13 :
  Rpush(l_13);
  goto b_49;
  l_13 :
  goto c_13;
  z_12 :
  Cpop();
  c_13 :
  goto p_10;
  y_12 :
  Rpush(p_10);
  goto b_49;
  d_12 :
  TestFunFC(q_13,&&m_13,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto s_45;
  s_45 :
  TestFunFC(q_11,&&r_13,Egetd(0,4));
  goto t_45;
  t_45 :
  TestFunFC(q_11,&&u_13,Egetd(0,3));
  Cpush(w_13);
  Rpush(x_13);
  goto c_49;
  x_13 :
  goto v_13;
  w_13 :
  Ccontinue(y_13);
  Rpush(z_13);
  goto d_49;
  z_13 :
  goto v_13;
  y_13 :
  Rpush(b_14);
  goto e_49;
  b_14 :
  goto a_14;
  v_13 :
  Cpop();
  a_14 :
  goto p_10;
  u_13 :
  Cpush(d_14);
  Rpush(g_14);
  goto d_49;
  g_14 :
  goto c_14;
  d_14 :
  Rpush(i_14);
  goto e_49;
  i_14 :
  goto h_14;
  c_14 :
  Cpop();
  h_14 :
  goto p_10;
  r_13 :
  goto u_45;
  u_45 :
  TestFunFC(q_11,&&j_14,Egetd(0,3));
  Cpush(l_14);
  Rpush(m_14);
  goto c_49;
  m_14 :
  goto k_14;
  l_14 :
  Rpush(o_14);
  goto e_49;
  o_14 :
  goto n_14;
  k_14 :
  Cpop();
  n_14 :
  goto p_10;
  j_14 :
  Rpush(p_10);
  goto e_49;
  m_13 :
  TestFunFC(q_14,&&p_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto f_49;
  p_14 :
  TestFunFC(z_3,&&r_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto g_49;
  r_14 :
  TestFunFC(j_3,&&s_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  Rpush(p_10);
  goto h_49;
  s_14 :
  TestFunFC(g_5,&&t_14,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  Rpush(p_10);
  goto i_49;
  t_14 :
  TestFunFC(x_0,&&fail,Egetd(0,2));
  MoveArg(0,3,0,2,0);
  MoveArg(0,4,0,2,1);
  goto v_45;
  v_45 :
  TestStr(0,3,"Option",&&fail);
  goto w_45;
  w_45 :
  TestFunFC(l_0,&&fail,Egetd(0,4));
  MoveArg(0,5,0,4,0);
  MoveArg(0,10,0,4,1);
  goto x_45;
  x_45 :
  TestFunFC(x_0,&&fail,Egetd(0,5));
  MoveArg(0,6,0,5,0);
  MoveArg(0,7,0,5,1);
  goto y_45;
  y_45 :
  TestStr(0,6,"List",&&fail);
  goto z_45;
  z_45 :
  TestFunFC(l_0,&&fail,Egetd(0,7));
  MoveArg(0,8,0,7,0);
  MoveArg(0,9,0,7,1);
  goto a_46;
  a_46 :
  TestFunFC(y_0,&&fail,Egetd(0,9));
  goto b_46;
  b_46 :
  TestFunFC(y_0,&&fail,Egetd(0,10));
  Rpush(p_10);
  goto j_49;
  p_10 :
  goto o_10;
  m_48 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  n_48 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  o_48 :
  Tset((ATerm)ATmakeAppl1(k_3,ATmakeString("String")));
  Return();
  p_48 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(0,3),Egetd(0,4)));
  Rpush(v_14);
  k_49 :
  Cpush(x_14);
  Ccall(_stratego_s_37);
  goto w_14;
  x_14 :
  Ccontinue(y_14);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(z_14);
  Tdupl();
  Epushd(2,1);
  MoveTop(2,1);
  goto u_44;
  u_44 :
  TestFunFC(q_11,&&fail,Egetd(2,1));
  Rpush(b_15);
  goto l_49;
  b_15 :
  goto a_15;
  l_49 :
  Return();
  a_15 :
  Epopd(2,1);
  Cpop();
  Crestore();
  Cjump();
  z_14 :
  OneNextSon();
  Rpush(c_15);
  goto k_49;
  c_15 :
  AllBuild();
  goto w_14;
  y_14 :
  Epushd(2,3);
  MoveTop(2,1);
  goto w_44;
  w_44 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  Rpush(f_15);
  goto m_49;
  f_15 :
  goto e_15;
  m_49 :
  NotNULLd(2,3);
  Tset(Egetd(2,3));
  Rpush(g_15);
  goto k_49;
  g_15 :
  Return();
  e_15 :
  Epopd(2,3);
  goto d_15;
  w_14 :
  Cpop();
  d_15 :
  Return();
  v_14 :
  MoveTop(1,1);
  goto y_44;
  y_44 :
  TestFunFC(y_0,&&fail,Egetd(1,1));
  Rpush(h_15);
  goto n_49;
  h_15 :
  goto u_14;
  n_49 :
  Return();
  u_14 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl1(k_3,ATmakeString("EmptySeq")));
  Return();
  q_48 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(0,3),Egetd(0,4)));
  Rpush(j_15);
  o_49 :
  Cpush(l_15);
  Ccall(_stratego_s_37);
  goto k_15;
  l_15 :
  Ccontinue(m_15);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(n_15);
  Tdupl();
  Epushd(3,1);
  MoveTop(3,1);
  goto a_45;
  a_45 :
  TestFunFC(q_11,&&fail,Egetd(3,1));
  Rpush(p_15);
  goto p_49;
  p_15 :
  goto o_15;
  p_49 :
  Return();
  o_15 :
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  n_15 :
  OneNextSon();
  Rpush(q_15);
  goto o_49;
  q_15 :
  AllBuild();
  goto k_15;
  m_15 :
  Epushd(3,3);
  MoveTop(3,1);
  goto c_45;
  c_45 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_15);
  goto q_49;
  t_15 :
  goto s_15;
  q_49 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(u_15);
  goto o_49;
  u_15 :
  Return();
  s_15 :
  Epopd(3,3);
  goto r_15;
  k_15 :
  Cpop();
  r_15 :
  Return();
  j_15 :
  MoveTop(2,1);
  goto e_45;
  e_45 :
  TestFunFC(l_0,&&fail,Egetd(2,1));
  MoveArg(2,2,2,1,0);
  MoveArg(2,3,2,1,1);
  goto f_45;
  f_45 :
  TestFunFC(y_0,&&fail,Egetd(2,3));
  Rpush(v_15);
  goto r_49;
  v_15 :
  goto i_15;
  r_49 :
  Move(1,1,2,2);
  Return();
  i_15 :
  Epopd(2,3);
  Tpop();
  NotNULLd(1,1);
  Tset(Egetd(1,1));
  Epopd(1,1);
  Return();
  r_48 :
  Epushd(1,1);
  Tdupl();
  Epushd(2,1);
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(0,3),Egetd(0,4)));
  Rpush(w_15);
  s_49 :
  Cpush(y_15);
  Ccall(_stratego_s_37);
  goto x_15;
  y_15 :
  Ccontinue(z_15);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(a_16);
  Tdupl();
  Epushd(3,1);
  MoveTop(3,1);
  goto h_45;
  h_45 :
  TestFunFC(q_11,&&fail,Egetd(3,1));
  Rpush(c_16);
  goto t_49;
  c_16 :
  goto b_16;
  t_49 :
  Return();
  b_16 :
  Epopd(3,1);
  Cpop();
  Crestore();
  Cjump();
  a_16 :
  OneNextSon();
  Rpush(d_16);
  goto s_49;
  d_16 :
  AllBuild();
  goto x_15;
  z_15 :
  Epushd(3,3);
  MoveTop(3,1);
  goto j_45;
  j_45 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(i_16);
  goto u_49;
  i_16 :
  goto f_16;
  u_49 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(j_16);
  goto s_49;
  j_16 :
  Return();
  f_16 :
  Epopd(3,3);
  goto e_16;
  x_15 :
  Cpop();
  e_16 :
  Return();
  w_15 :
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(b_1,Egetd(1,1)));
  Epopd(1,1);
  Return();
  s_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("Option"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  t_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  u_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  v_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  w_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  x_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  y_48 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  z_48 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  a_49 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Return();
  b_49 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("Prod"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl2(l_0,Egetd(0,4),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  c_49 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("Option"),(ATerm)ATmakeAppl2(l_0,Egetd(0,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  d_49 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("Option"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl0(y_0))));
  Return();
  e_49 :
  NotNULLd(0,3);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("Either"),(ATerm)ATmakeAppl2(l_0,Egetd(0,3),(ATerm)ATmakeAppl2(l_0,Egetd(0,4),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  f_49 :
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl1(k_3,Egetd(0,3)));
  Return();
  g_49 :
  Tset((ATerm)ATmakeAppl1(k_3,ATmakeString("String")));
  Return();
  h_49 :
  Tset((ATerm)ATmakeAppl0(q_11));
  Return();
  i_49 :
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Return();
  j_49 :
  NotNULLd(0,8);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("List"),(ATerm)ATmakeAppl2(l_0,Egetd(0,8),(ATerm)ATmakeAppl0(y_0))));
  Return();
  o_10 :
  Epopd(0,10);
ENDPROC

PROC(_stratego_x_36)
  Rpush(k_16);
  k_50 :
  AllInit();
  l_16 :
  AllNextSon(&&m_16);
  Rpush(n_16);
  goto k_50;
  n_16 :
  goto l_16;
  m_16 :
  AllBuild();
  Cpush(p_16);
  Cpush(r_16);
  Ccall(_stratego_w_36);
  goto q_16;
  r_16 :
  Epushd(0,1);
  MoveTop(0,1);
  Tdupl();
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Cpush(u_16);
  Tdupl();
  Cpush(w_16);
  Ccall(_stratego_s_37);
  goto v_16;
  w_16 :
  Epushd(1,3);
  MoveTop(1,1);
  goto y_49;
  y_49 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(z_16);
  goto m_50;
  z_16 :
  goto y_16;
  m_50 :
  Return();
  y_16 :
  Epopd(1,3);
  goto x_16;
  v_16 :
  Cpop();
  x_16 :
  Cpop();
  Crestore();
  Cjump();
  u_16 :
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  IsAppl();
  OneInit();
  a_17 :
  OneNextSon();
  Cpush(a_17);
  Epushd(1,1);
  MoveTop(1,1);
  goto a_50;
  a_50 :
  TestFunFC(q_11,&&fail,Egetd(1,1));
  Rpush(d_17);
  goto n_50;
  d_17 :
  goto c_17;
  n_50 :
  Return();
  c_17 :
  Epopd(1,1);
  Cpop();
  OneBuild();
  Tpop();
  Tset((ATerm)ATmakeAppl0(q_11));
  Epopd(0,1);
  goto t_16;
  q_16 :
  Cpop();
  t_16 :
  Rpush(e_17);
  goto k_50;
  e_17 :
  goto o_16;
  p_16 :
  goto f_17;
  o_16 :
  Cpop();
  f_17 :
  Return();
  k_16 :
  Cpush(g_17);
  Tdupl();
  Epushd(0,1);
  MoveTop(0,1);
  goto c_50;
  c_50 :
  TestFunFC(q_11,&&fail,Egetd(0,1));
  Rpush(i_17);
  goto o_50;
  i_17 :
  goto h_17;
  o_50 :
  Return();
  h_17 :
  Epopd(0,1);
  Cpop();
  Crestore();
  Cjump();
  g_17 :
ENDPROC

PROC(_stratego_y_36)
  Epushd(0,5);
  MoveTop(0,1);
  goto r_50;
  r_50 :
  TestFunFC(k_8,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  goto s_50;
  s_50 :
  TestFunFC(k_8,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto t_50;
  t_50 :
  TestFunFC(m_8,&&fail,Egetd(0,5));
  goto u_50;
  u_50 :
  TestFunFC(y_0,&&l_17,Egetd(0,2));
  Cpush(n_17);
  Rpush(o_17);
  goto d_51;
  o_17 :
  goto m_17;
  n_17 :
  Rpush(q_17);
  goto e_51;
  q_17 :
  goto p_17;
  m_17 :
  Cpop();
  p_17 :
  goto k_17;
  l_17 :
  Rpush(k_17);
  goto e_51;
  k_17 :
  goto j_17;
  d_51 :
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl1(r_17,Egetd(0,4)));
  Return();
  e_51 :
  NotNULLd(0,2);
  NotNULLd(0,4);
  Tset((ATerm)ATmakeAppl2(s_17,Egetd(0,2),Egetd(0,4)));
  Return();
  j_17 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_z_36)
  Epushd(0,5);
  MoveTop(0,1);
  goto z_51;
  z_51 :
  TestFunFC(c_4,&&v_17,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(u_17);
  goto v_53;
  v_17 :
  TestFunFC(r_5,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  MoveArg(0,5,0,1,3);
  Rpush(u_17);
  goto w_53;
  u_17 :
  goto t_17;
  v_53 :
  Epushd(1,6);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Ccall(_stratego_x_36);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Rpush(w_17);
  y_53 :
  Cpush(y_17);
  Ccall(_stratego_s_37);
  goto x_17;
  y_17 :
  Ccontinue(z_17);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_36);
  OneNextSon();
  Rpush(a_18);
  goto y_53;
  a_18 :
  AllBuild();
  goto x_17;
  z_17 :
  Epushd(3,3);
  MoveTop(3,1);
  goto j_51;
  j_51 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(d_18);
  goto z_53;
  d_18 :
  goto c_18;
  z_53 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(e_18);
  goto y_53;
  e_18 :
  Return();
  c_18 :
  Epopd(3,3);
  goto b_18;
  x_17 :
  Cpop();
  b_18 :
  Return();
  w_17 :
  MoveTop(2,2);
  Move(1,2,2,2);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(f_18);
  b_54 :
  Cpush(h_18);
  Epushd(3,2);
  MoveTop(3,1);
  goto m_51;
  m_51 :
  TestFunFC(k_18,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(j_18);
  goto c_54;
  j_18 :
  goto i_18;
  c_54 :
  Move(1,3,3,2);
  Return();
  i_18 :
  Epopd(3,2);
  goto g_18;
  h_18 :
  IsAppl();
  OneInit();
  m_18 :
  OneNextSon();
  Cpush(m_18);
  Rpush(p_18);
  goto b_54;
  p_18 :
  Cpop();
  OneBuild();
  goto l_18;
  g_18 :
  Cpop();
  l_18 :
  Return();
  f_18 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_v_36);
  MoveTop(2,3);
  Move(1,4,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Cpush(u_18);
  Ccall(_stratego_k_36);
  goto t_18;
  u_18 :
  goto v_18;
  t_18 :
  Cpop();
  v_18 :
  MoveTop(1,5);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(1,2),(ATerm)ATmakeAppl2(k_8,Egetd(1,1),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_y_36);
  MoveTop(1,6);
  NotNULLd(1,5);
  NotNULLd(1,6);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(1,5),Egetd(1,6)));
  Epopd(1,6);
  Return();
  w_53 :
  Epushd(1,5);
  Tdupl();
  Epushd(2,3);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Ccall(_stratego_x_36);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(z_18);
  h_54 :
  Cpush(b_19);
  Ccall(_stratego_s_37);
  goto a_19;
  b_19 :
  Ccontinue(c_19);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_x_36);
  OneNextSon();
  Rpush(d_19);
  goto h_54;
  d_19 :
  AllBuild();
  goto a_19;
  c_19 :
  Epushd(3,3);
  MoveTop(3,1);
  goto s_51;
  s_51 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(g_19);
  goto i_54;
  g_19 :
  goto f_19;
  i_54 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(h_19);
  goto h_54;
  h_19 :
  Return();
  f_19 :
  Epopd(3,3);
  goto e_19;
  a_19 :
  Cpop();
  e_19 :
  Return();
  z_18 :
  MoveTop(2,2);
  Move(1,2,2,2);
  Cpush(j_19);
  NotNULLd(0,5);
  Tset(Egetd(0,5));
  Rpush(k_19);
  k_54 :
  Cpush(m_19);
  Epushd(3,2);
  MoveTop(3,1);
  goto v_51;
  v_51 :
  TestFunFC(k_18,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(o_19);
  goto l_54;
  o_19 :
  goto n_19;
  l_54 :
  Move(1,3,3,2);
  Return();
  n_19 :
  Epopd(3,2);
  goto l_19;
  m_19 :
  IsAppl();
  OneInit();
  q_19 :
  OneNextSon();
  Cpush(q_19);
  Rpush(s_19);
  goto k_54;
  s_19 :
  Cpop();
  OneBuild();
  goto p_19;
  l_19 :
  Cpop();
  p_19 :
  Return();
  k_19 :
  goto i_19;
  j_19 :
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Move(1,3,0,2);
  goto t_19;
  i_19 :
  Cpop();
  t_19 :
  NotNULLd(1,3);
  Tset(Egetd(1,3));
  Ccall(_stratego_v_36);
  MoveTop(2,3);
  Move(1,4,2,3);
  Epopd(2,3);
  Tpop();
  NotNULLd(1,4);
  Tset(Egetd(1,4));
  Cpush(v_19);
  Ccall(_stratego_k_36);
  goto u_19;
  v_19 :
  goto w_19;
  u_19 :
  Cpop();
  w_19 :
  MoveTop(1,5);
  NotNULLd(1,5);
  NotNULLd(1,2);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(w_18,Egetd(1,5),(ATerm)ATmakeAppl2(s_17,Egetd(1,2),Egetd(1,1))));
  Epopd(1,5);
  Return();
  t_17 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_a_37)
  Cpush(y_19);
  TestFunTop(z_19);
  TravInit();
  OneNextSon();
  Rpush(a_20);
  n_116 :
  Cpush(c_20);
  Ccall(_stratego_s_37);
  goto b_20;
  c_20 :
  Ccontinue(d_20);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto n_65;
  n_65 :
  TestFunFC(g_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(f_20);
  goto o_116;
  f_20 :
  goto e_20;
  o_116 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_20);
  p_116 :
  Cpush(j_20);
  Ccall(_stratego_s_37);
  goto i_20;
  j_20 :
  Ccontinue(k_20);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  goto r_54;
  r_54 :
  TestFunFC(n_20,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(m_20);
  goto q_116;
  m_20 :
  goto l_20;
  q_116 :
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_20,Egetd(3,2)),(ATerm)ATmakeAppl0(y_0)));
  Return();
  l_20 :
  Epopd(3,2);
  OneNextSon();
  Rpush(o_20);
  goto p_116;
  o_20 :
  AllBuild();
  goto i_20;
  k_20 :
  Epushd(3,3);
  MoveTop(3,1);
  goto t_54;
  t_54 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(r_20);
  goto r_116;
  r_20 :
  goto q_20;
  r_116 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(s_20);
  goto p_116;
  s_20 :
  Return();
  q_20 :
  Epopd(3,3);
  goto p_20;
  i_20 :
  Cpop();
  p_20 :
  Return();
  h_20 :
  Ccall(_stratego_x_35);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(t_20);
  t_116 :
  Cpush(v_20);
  Ccall(_stratego_s_37);
  goto u_20;
  v_20 :
  Ccontinue(w_20);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  goto h_65;
  h_65 :
  TestFunFC(z_20,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(y_20);
  goto u_116;
  y_20 :
  goto x_20;
  u_116 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(a_21);
  v_116 :
  Cpush(c_21);
  Epushd(6,3);
  MoveTop(6,1);
  goto n_64;
  n_64 :
  TestFunFC(h_21,&&f_21,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto w_116;
  f_21 :
  TestFunFC(j_21,&&i_21,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto x_116;
  i_21 :
  TestFunFC(l_21,&&k_21,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto y_116;
  k_21 :
  TestFunFC(n_21,&&m_21,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto z_116;
  m_21 :
  TestFunFC(p_21,&&o_21,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto a_117;
  o_21 :
  TestFunFC(n_20,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(e_21);
  goto b_117;
  e_21 :
  goto d_21;
  w_116 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(h_21,Egetd(6,2)));
  Return();
  x_116 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(j_21,Egetd(6,2)));
  Return();
  y_116 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(l_21,Egetd(6,2)));
  Return();
  z_116 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(n_21,Egetd(6,2)));
  Return();
  a_117 :
  Epushd(7,5);
  Tdupl();
  Epushd(8,4);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(q_21);
  c_117 :
  Cpush(s_21);
  Ccall(_stratego_s_37);
  goto r_21;
  s_21 :
  Ccontinue(t_21);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_36);
  OneNextSon();
  Rpush(u_21);
  goto c_117;
  u_21 :
  AllBuild();
  goto r_21;
  t_21 :
  Epushd(9,3);
  MoveTop(9,1);
  goto d_55;
  d_55 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(x_21);
  goto d_117;
  x_21 :
  goto w_21;
  d_117 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(y_21);
  goto c_117;
  y_21 :
  Return();
  w_21 :
  Epopd(9,3);
  goto v_21;
  r_21 :
  Cpop();
  v_21 :
  Return();
  q_21 :
  MoveTop(8,1);
  Move(7,1,8,1);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(z_21);
  f_117 :
  Cpush(b_22);
  Ccall(_stratego_s_37);
  goto a_22;
  b_22 :
  Ccontinue(c_22);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto x_57;
  x_57 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(e_22);
  goto j_117;
  e_22 :
  goto d_22;
  j_117 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(f_22);
  k_117 :
  Cpush(j_22);
  Ccall(_stratego_s_37);
  goto h_22;
  j_22 :
  Ccontinue(m_22);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(n_22);
  goto k_117;
  n_22 :
  AllBuild();
  goto h_22;
  m_22 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_55;
  l_55 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(q_22);
  goto l_117;
  q_22 :
  goto p_22;
  l_117 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(r_22);
  goto k_117;
  r_22 :
  Return();
  p_22 :
  Epopd(13,3);
  goto o_22;
  h_22 :
  Cpop();
  o_22 :
  Return();
  f_22 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(s_22);
  n_117 :
  Cpush(v_22);
  Ccall(_stratego_s_37);
  goto u_22;
  v_22 :
  Ccontinue(w_22);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(x_22);
  goto n_117;
  x_22 :
  AllBuild();
  goto u_22;
  w_22 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_55;
  o_55 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(a_23);
  goto o_117;
  a_23 :
  goto z_22;
  o_117 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(b_23);
  goto n_117;
  b_23 :
  Return();
  z_22 :
  Epopd(13,3);
  goto y_22;
  u_22 :
  Cpop();
  y_22 :
  Return();
  s_22 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(c_23);
  q_117 :
  Cpush(e_23);
  Ccall(_stratego_s_37);
  goto d_23;
  e_23 :
  Ccontinue(f_23);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(g_23);
  goto q_117;
  g_23 :
  AllBuild();
  goto d_23;
  f_23 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_55;
  r_55 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(j_23);
  goto r_117;
  j_23 :
  goto i_23;
  r_117 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(k_23);
  goto q_117;
  k_23 :
  Return();
  i_23 :
  Epopd(13,3);
  goto h_23;
  d_23 :
  Cpop();
  h_23 :
  Return();
  c_23 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(l_23);
  t_117 :
  Cpush(n_23);
  Ccall(_stratego_s_37);
  goto m_23;
  n_23 :
  Ccontinue(o_23);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_55;
  u_55 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(q_23);
  goto u_117;
  q_23 :
  goto p_23;
  u_117 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  p_23 :
  Epopd(13,2);
  OneNextSon();
  Rpush(r_23);
  goto t_117;
  r_23 :
  AllBuild();
  goto m_23;
  o_23 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_55;
  w_55 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(u_23);
  goto v_117;
  u_23 :
  goto t_23;
  v_117 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(v_23);
  goto t_117;
  v_23 :
  Return();
  t_23 :
  Epopd(13,3);
  goto s_23;
  m_23 :
  Cpop();
  s_23 :
  Return();
  l_23 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(x_23);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(y_23);
  x_117 :
  Cpush(a_24);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_55;
  z_55 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(c_24);
  goto y_117;
  c_24 :
  goto b_24;
  y_117 :
  Move(10,6,13,2);
  Return();
  b_24 :
  Epopd(13,2);
  goto z_23;
  a_24 :
  IsAppl();
  OneInit();
  e_24 :
  OneNextSon();
  Cpush(e_24);
  Rpush(g_24);
  goto x_117;
  g_24 :
  Cpop();
  OneBuild();
  goto d_24;
  z_23 :
  Cpop();
  d_24 :
  Return();
  y_23 :
  goto w_23;
  x_23 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_56;
  c_56 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(j_24);
  goto z_117;
  j_24 :
  goto i_24;
  z_117 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  i_24 :
  Epopd(13,5);
  goto h_24;
  w_23 :
  Cpop();
  h_24 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(k_24);
  c_118 :
  Cpush(m_24);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_24);
  goto c_118;
  n_24 :
  AllBuild();
  goto l_24;
  m_24 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto o_24;
  l_24 :
  Cpop();
  o_24 :
  Return();
  k_24 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(p_24);
  e_118 :
  Cpush(r_24);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(s_24);
  goto e_118;
  s_24 :
  AllBuild();
  goto q_24;
  r_24 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto t_24;
  q_24 :
  Cpop();
  t_24 :
  Return();
  p_24 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(u_24);
  g_118 :
  Cpush(w_24);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_24);
  goto g_118;
  x_24 :
  AllBuild();
  goto v_24;
  w_24 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto y_24;
  v_24 :
  Cpop();
  y_24 :
  Return();
  u_24 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(a_25);
  z_24 :
  Rpush(b_25);
  j_118 :
  Cpush(d_25);
  IsAppl();
  SomeInit();
  e_25 :
  SomeNextSon(&&f_25);
  Cpush(e_25);
  Rpush(g_25);
  goto j_118;
  g_25 :
  Cpop();
  CounterOK();
  goto e_25;
  f_25 :
  SomeBuild();
  goto c_25;
  d_25 :
  Epushd(13,4);
  MoveTop(13,3);
  goto n_57;
  n_57 :
  TestFunFC(b_4,&&k_25,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(j_25);
  goto k_118;
  k_25 :
  TestFunFC(c_4,&&l_25,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(j_25);
  goto l_118;
  l_25 :
  TestFunFC(d_4,&&m_25,Egetd(13,3));
  Rpush(j_25);
  goto m_118;
  m_25 :
  TestFunFC(o_25,&&n_25,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto n_118;
  n_25 :
  TestFunFC(q_25,&&p_25,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto o_118;
  p_25 :
  TestFunFC(k_18,&&s_25,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto p_118;
  s_25 :
  TestFunFC(v_25,&&u_25,Egetd(13,3));
  Rpush(j_25);
  goto q_118;
  u_25 :
  TestFunFC(x_25,&&w_25,Egetd(13,3));
  Rpush(j_25);
  goto r_118;
  w_25 :
  TestFunFC(z_25,&&y_25,Egetd(13,3));
  Rpush(j_25);
  goto s_118;
  y_25 :
  TestFunFC(b_26,&&a_26,Egetd(13,3));
  Rpush(j_25);
  goto t_118;
  a_26 :
  TestFunFC(d_26,&&c_26,Egetd(13,3));
  Rpush(j_25);
  goto u_118;
  c_26 :
  TestFunFC(f_26,&&e_26,Egetd(13,3));
  Rpush(j_25);
  goto v_118;
  e_26 :
  TestFunFC(h_4,&&g_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto w_118;
  g_26 :
  TestFunFC(u_10,&&h_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto x_118;
  h_26 :
  TestFunFC(j_3,&&i_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto y_118;
  i_26 :
  TestFunFC(q_14,&&j_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto z_118;
  j_26 :
  TestFunFC(j_4,&&k_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto a_119;
  k_26 :
  TestFunFC(w_10,&&l_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(j_25);
  goto b_119;
  l_26 :
  TestFunFC(g_11,&&m_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto c_119;
  m_26 :
  TestFunFC(l_11,&&n_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto d_119;
  n_26 :
  TestFunFC(p_11,&&o_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(j_25);
  goto e_119;
  o_26 :
  TestFunFC(v_11,&&p_26,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(j_25);
  goto f_119;
  p_26 :
  TestFunFC(l_4,&&q_26,Egetd(13,3));
  Rpush(j_25);
  goto g_119;
  q_26 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(j_25);
  goto h_119;
  j_25 :
  goto i_25;
  k_118 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  l_118 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  m_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  n_118 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto i_57;
  i_57 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto j_57;
  j_57 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto k_57;
  k_57 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(u_26);
  goto j_119;
  u_26 :
  goto s_26;
  j_119 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(v_26);
  k_119 :
  Cpush(x_26);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_26);
  goto k_119;
  y_26 :
  AllBuild();
  goto w_26;
  x_26 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto z_26;
  w_26 :
  Cpop();
  z_26 :
  Return();
  v_26 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  s_26 :
  Epopd(14,6);
  Return();
  o_118 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  p_118 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  q_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  r_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  s_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  t_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  u_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  v_118 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  w_118 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  x_118 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  y_118 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  z_118 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  a_119 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  b_119 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  c_119 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  d_119 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  e_119 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  f_119 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  g_119 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  h_119 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  i_25 :
  Epopd(13,4);
  goto h_25;
  c_25 :
  Cpop();
  h_25 :
  Return();
  b_25 :
  Tduplinv();
  goto z_24;
  a_25 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(a_27);
  p_119 :
  Cpush(c_27);
  Ccall(_stratego_s_37);
  goto b_27;
  c_27 :
  Ccontinue(d_27);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(o_27);
  goto p_119;
  o_27 :
  AllBuild();
  goto b_27;
  d_27 :
  Epushd(13,3);
  MoveTop(13,1);
  goto q_57;
  q_57 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(u_27);
  goto q_119;
  u_27 :
  goto t_27;
  q_119 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(v_27);
  goto p_119;
  v_27 :
  Return();
  t_27 :
  Epopd(13,3);
  goto s_27;
  b_27 :
  Cpop();
  s_27 :
  Return();
  a_27 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(y_27);
  t_119 :
  Cpush(a_28);
  Ccall(_stratego_s_37);
  goto z_27;
  a_28 :
  Ccontinue(b_28);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(c_28);
  goto t_119;
  c_28 :
  AllBuild();
  goto z_27;
  b_28 :
  Epushd(13,3);
  MoveTop(13,1);
  goto u_57;
  u_57 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(f_28);
  goto u_119;
  f_28 :
  goto e_28;
  u_119 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(g_28);
  goto t_119;
  g_28 :
  Return();
  e_28 :
  Epopd(13,3);
  goto d_28;
  z_27 :
  Cpop();
  d_28 :
  Return();
  y_27 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  d_22 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto z_57;
  z_57 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto a_58;
  a_58 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto b_58;
  b_58 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto c_58;
  c_58 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(l_28);
  goto x_119;
  l_28 :
  goto i_28;
  x_119 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  i_28 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,2);
  Tset(Egetd(9,2));
  Epopd(9,4);
  OneNextSon();
  Rpush(m_28);
  goto f_117;
  m_28 :
  AllBuild();
  goto a_22;
  c_22 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_58;
  e_58 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(p_28);
  goto y_119;
  p_28 :
  goto o_28;
  y_119 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(q_28);
  goto f_117;
  q_28 :
  Return();
  o_28 :
  Epopd(9,3);
  goto n_28;
  a_22 :
  Cpop();
  n_28 :
  Return();
  z_21 :
  MoveTop(8,2);
  Move(7,2,8,2);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(r_28);
  a_120 :
  Cpush(t_28);
  Ccall(_stratego_s_37);
  goto s_28;
  t_28 :
  Ccontinue(u_28);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto x_60;
  x_60 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(w_28);
  goto e_120;
  w_28 :
  goto v_28;
  e_120 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(x_28);
  f_120 :
  Cpush(z_28);
  Ccall(_stratego_s_37);
  goto y_28;
  z_28 :
  Ccontinue(a_29);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(b_29);
  goto f_120;
  b_29 :
  AllBuild();
  goto y_28;
  a_29 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_58;
  l_58 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(e_29);
  goto g_120;
  e_29 :
  goto d_29;
  g_120 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(f_29);
  goto f_120;
  f_29 :
  Return();
  d_29 :
  Epopd(13,3);
  goto c_29;
  y_28 :
  Cpop();
  c_29 :
  Return();
  x_28 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(g_29);
  i_120 :
  Cpush(i_29);
  Ccall(_stratego_s_37);
  goto h_29;
  i_29 :
  Ccontinue(j_29);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(k_29);
  goto i_120;
  k_29 :
  AllBuild();
  goto h_29;
  j_29 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_58;
  o_58 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(n_29);
  goto j_120;
  n_29 :
  goto m_29;
  j_120 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(o_29);
  goto i_120;
  o_29 :
  Return();
  m_29 :
  Epopd(13,3);
  goto l_29;
  h_29 :
  Cpop();
  l_29 :
  Return();
  g_29 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(p_29);
  l_120 :
  Cpush(r_29);
  Ccall(_stratego_s_37);
  goto q_29;
  r_29 :
  Ccontinue(s_29);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(t_29);
  goto l_120;
  t_29 :
  AllBuild();
  goto q_29;
  s_29 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_58;
  r_58 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(w_29);
  goto m_120;
  w_29 :
  goto v_29;
  m_120 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(x_29);
  goto l_120;
  x_29 :
  Return();
  v_29 :
  Epopd(13,3);
  goto u_29;
  q_29 :
  Cpop();
  u_29 :
  Return();
  p_29 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(y_29);
  o_120 :
  Cpush(a_30);
  Ccall(_stratego_s_37);
  goto z_29;
  a_30 :
  Ccontinue(b_30);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_58;
  u_58 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(d_30);
  goto p_120;
  d_30 :
  goto c_30;
  p_120 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  c_30 :
  Epopd(13,2);
  OneNextSon();
  Rpush(e_30);
  goto o_120;
  e_30 :
  AllBuild();
  goto z_29;
  b_30 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_58;
  w_58 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(h_30);
  goto q_120;
  h_30 :
  goto g_30;
  q_120 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(i_30);
  goto o_120;
  i_30 :
  Return();
  g_30 :
  Epopd(13,3);
  goto f_30;
  z_29 :
  Cpop();
  f_30 :
  Return();
  y_29 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(k_30);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(n_30);
  s_120 :
  Cpush(r_30);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_58;
  z_58 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(t_30);
  goto t_120;
  t_30 :
  goto s_30;
  t_120 :
  Move(10,6,13,2);
  Return();
  s_30 :
  Epopd(13,2);
  goto o_30;
  r_30 :
  IsAppl();
  OneInit();
  v_30 :
  OneNextSon();
  Cpush(v_30);
  Rpush(x_30);
  goto s_120;
  x_30 :
  Cpop();
  OneBuild();
  goto u_30;
  o_30 :
  Cpop();
  u_30 :
  Return();
  n_30 :
  goto j_30;
  k_30 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_59;
  c_59 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(a_31);
  goto u_120;
  a_31 :
  goto z_30;
  u_120 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  z_30 :
  Epopd(13,5);
  goto y_30;
  j_30 :
  Cpop();
  y_30 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(b_31);
  x_120 :
  Cpush(d_31);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_31);
  goto x_120;
  e_31 :
  AllBuild();
  goto c_31;
  d_31 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto f_31;
  c_31 :
  Cpop();
  f_31 :
  Return();
  b_31 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(g_31);
  z_120 :
  Cpush(i_31);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_31);
  goto z_120;
  j_31 :
  AllBuild();
  goto h_31;
  i_31 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto k_31;
  h_31 :
  Cpop();
  k_31 :
  Return();
  g_31 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(l_31);
  b_121 :
  Cpush(n_31);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_31);
  goto b_121;
  o_31 :
  AllBuild();
  goto m_31;
  n_31 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto p_31;
  m_31 :
  Cpop();
  p_31 :
  Return();
  l_31 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(r_31);
  q_31 :
  Rpush(s_31);
  e_121 :
  Cpush(u_31);
  IsAppl();
  SomeInit();
  v_31 :
  SomeNextSon(&&w_31);
  Cpush(v_31);
  Rpush(x_31);
  goto e_121;
  x_31 :
  Cpop();
  CounterOK();
  goto v_31;
  w_31 :
  SomeBuild();
  goto t_31;
  u_31 :
  Epushd(13,4);
  MoveTop(13,3);
  goto n_60;
  n_60 :
  TestFunFC(b_4,&&b_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(a_32);
  goto f_121;
  b_32 :
  TestFunFC(c_4,&&c_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(a_32);
  goto g_121;
  c_32 :
  TestFunFC(d_4,&&d_32,Egetd(13,3));
  Rpush(a_32);
  goto h_121;
  d_32 :
  TestFunFC(o_25,&&e_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto i_121;
  e_32 :
  TestFunFC(q_25,&&f_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto j_121;
  f_32 :
  TestFunFC(k_18,&&g_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto k_121;
  g_32 :
  TestFunFC(v_25,&&h_32,Egetd(13,3));
  Rpush(a_32);
  goto l_121;
  h_32 :
  TestFunFC(x_25,&&i_32,Egetd(13,3));
  Rpush(a_32);
  goto m_121;
  i_32 :
  TestFunFC(z_25,&&j_32,Egetd(13,3));
  Rpush(a_32);
  goto n_121;
  j_32 :
  TestFunFC(b_26,&&k_32,Egetd(13,3));
  Rpush(a_32);
  goto o_121;
  k_32 :
  TestFunFC(d_26,&&l_32,Egetd(13,3));
  Rpush(a_32);
  goto p_121;
  l_32 :
  TestFunFC(f_26,&&m_32,Egetd(13,3));
  Rpush(a_32);
  goto q_121;
  m_32 :
  TestFunFC(h_4,&&n_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto r_121;
  n_32 :
  TestFunFC(u_10,&&o_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto s_121;
  o_32 :
  TestFunFC(j_3,&&p_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto t_121;
  p_32 :
  TestFunFC(q_14,&&q_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto u_121;
  q_32 :
  TestFunFC(j_4,&&r_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto v_121;
  r_32 :
  TestFunFC(w_10,&&s_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(a_32);
  goto w_121;
  s_32 :
  TestFunFC(g_11,&&t_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto x_121;
  t_32 :
  TestFunFC(l_11,&&u_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto y_121;
  u_32 :
  TestFunFC(p_11,&&v_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(a_32);
  goto z_121;
  v_32 :
  TestFunFC(v_11,&&w_32,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(a_32);
  goto a_122;
  w_32 :
  TestFunFC(l_4,&&x_32,Egetd(13,3));
  Rpush(a_32);
  goto b_122;
  x_32 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(a_32);
  goto c_122;
  a_32 :
  goto z_31;
  f_121 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  g_121 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  h_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  i_121 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto i_60;
  i_60 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto j_60;
  j_60 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto k_60;
  k_60 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(z_32);
  goto e_122;
  z_32 :
  goto y_32;
  e_122 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(a_33);
  f_122 :
  Cpush(c_33);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(d_33);
  goto f_122;
  d_33 :
  AllBuild();
  goto b_33;
  c_33 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto e_33;
  b_33 :
  Cpop();
  e_33 :
  Return();
  a_33 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  y_32 :
  Epopd(14,6);
  Return();
  j_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  k_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  l_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  m_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  n_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  o_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  p_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  q_121 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  r_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  s_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  t_121 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  u_121 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  v_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  w_121 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  x_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  y_121 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  z_121 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  a_122 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  b_122 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  c_122 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  z_31 :
  Epopd(13,4);
  goto y_31;
  t_31 :
  Cpop();
  y_31 :
  Return();
  s_31 :
  Tduplinv();
  goto q_31;
  r_31 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(f_33);
  k_122 :
  Cpush(h_33);
  Ccall(_stratego_s_37);
  goto g_33;
  h_33 :
  Ccontinue(i_33);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(j_33);
  goto k_122;
  j_33 :
  AllBuild();
  goto g_33;
  i_33 :
  Epushd(13,3);
  MoveTop(13,1);
  goto q_60;
  q_60 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(m_33);
  goto l_122;
  m_33 :
  goto l_33;
  l_122 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(n_33);
  goto k_122;
  n_33 :
  Return();
  l_33 :
  Epopd(13,3);
  goto k_33;
  g_33 :
  Cpop();
  k_33 :
  Return();
  f_33 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(o_33);
  o_122 :
  Cpush(q_33);
  Ccall(_stratego_s_37);
  goto p_33;
  q_33 :
  Ccontinue(r_33);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(s_33);
  goto o_122;
  s_33 :
  AllBuild();
  goto p_33;
  r_33 :
  Epushd(13,3);
  MoveTop(13,1);
  goto u_60;
  u_60 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(v_33);
  goto p_122;
  v_33 :
  goto u_33;
  p_122 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(w_33);
  goto o_122;
  w_33 :
  Return();
  u_33 :
  Epopd(13,3);
  goto t_33;
  p_33 :
  Cpop();
  t_33 :
  Return();
  o_33 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  v_28 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto z_60;
  z_60 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto a_61;
  a_61 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto b_61;
  b_61 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto c_61;
  c_61 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(y_33);
  goto s_122;
  y_33 :
  goto x_33;
  s_122 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  x_33 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Epopd(9,4);
  OneNextSon();
  Rpush(z_33);
  goto a_120;
  z_33 :
  AllBuild();
  goto s_28;
  u_28 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_61;
  e_61 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(c_34);
  goto t_122;
  c_34 :
  goto b_34;
  t_122 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(d_34);
  goto a_120;
  d_34 :
  Return();
  b_34 :
  Epopd(9,3);
  goto a_34;
  s_28 :
  Cpop();
  a_34 :
  Return();
  r_28 :
  MoveTop(8,3);
  Move(7,3,8,3);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(e_34);
  v_122 :
  Cpush(g_34);
  Ccall(_stratego_s_37);
  goto f_34;
  g_34 :
  Ccontinue(h_34);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto y_63;
  y_63 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(j_34);
  goto z_122;
  j_34 :
  goto i_34;
  z_122 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(k_34);
  a_123 :
  Cpush(m_34);
  Ccall(_stratego_s_37);
  goto l_34;
  m_34 :
  Ccontinue(n_34);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(o_34);
  goto a_123;
  o_34 :
  AllBuild();
  goto l_34;
  n_34 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_61;
  l_61 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(r_34);
  goto b_123;
  r_34 :
  goto q_34;
  b_123 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(s_34);
  goto a_123;
  s_34 :
  Return();
  q_34 :
  Epopd(13,3);
  goto p_34;
  l_34 :
  Cpop();
  p_34 :
  Return();
  k_34 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(t_34);
  d_123 :
  Cpush(v_34);
  Ccall(_stratego_s_37);
  goto u_34;
  v_34 :
  Ccontinue(w_34);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(x_34);
  goto d_123;
  x_34 :
  AllBuild();
  goto u_34;
  w_34 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_61;
  o_61 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(a_35);
  goto e_123;
  a_35 :
  goto z_34;
  e_123 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(b_35);
  goto d_123;
  b_35 :
  Return();
  z_34 :
  Epopd(13,3);
  goto y_34;
  u_34 :
  Cpop();
  y_34 :
  Return();
  t_34 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(c_35);
  g_123 :
  Cpush(e_35);
  Ccall(_stratego_s_37);
  goto d_35;
  e_35 :
  Ccontinue(f_35);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(g_35);
  goto g_123;
  g_35 :
  AllBuild();
  goto d_35;
  f_35 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_61;
  r_61 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(j_35);
  goto h_123;
  j_35 :
  goto i_35;
  h_123 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(k_35);
  goto g_123;
  k_35 :
  Return();
  i_35 :
  Epopd(13,3);
  goto h_35;
  d_35 :
  Cpop();
  h_35 :
  Return();
  c_35 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(m_35);
  j_123 :
  Cpush(o_35);
  Ccall(_stratego_s_37);
  goto n_35;
  o_35 :
  Ccontinue(p_35);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_61;
  u_61 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(r_35);
  goto k_123;
  r_35 :
  goto q_35;
  k_123 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  q_35 :
  Epopd(13,2);
  OneNextSon();
  Rpush(s_35);
  goto j_123;
  s_35 :
  AllBuild();
  goto n_35;
  p_35 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_61;
  w_61 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(v_35);
  goto l_123;
  v_35 :
  goto u_35;
  l_123 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(w_35);
  goto j_123;
  w_35 :
  Return();
  u_35 :
  Epopd(13,3);
  goto t_35;
  n_35 :
  Cpop();
  t_35 :
  Return();
  m_35 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(y_37);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(z_37);
  n_123 :
  Cpush(b_38);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_61;
  z_61 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(e_38);
  goto o_123;
  e_38 :
  goto d_38;
  o_123 :
  Move(10,6,13,2);
  Return();
  d_38 :
  Epopd(13,2);
  goto a_38;
  b_38 :
  IsAppl();
  OneInit();
  g_38 :
  OneNextSon();
  Cpush(g_38);
  Rpush(n_38);
  goto n_123;
  n_38 :
  Cpop();
  OneBuild();
  goto f_38;
  a_38 :
  Cpop();
  f_38 :
  Return();
  z_37 :
  goto x_37;
  y_37 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_62;
  c_62 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(s_38);
  goto p_123;
  s_38 :
  goto p_38;
  p_123 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  p_38 :
  Epopd(13,5);
  goto o_38;
  x_37 :
  Cpop();
  o_38 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(t_38);
  s_123 :
  Cpush(w_38);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(z_38);
  goto s_123;
  z_38 :
  AllBuild();
  goto u_38;
  w_38 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto a_39;
  u_38 :
  Cpop();
  a_39 :
  Return();
  t_38 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(b_39);
  u_123 :
  Cpush(e_39);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_39);
  goto u_123;
  f_39 :
  AllBuild();
  goto d_39;
  e_39 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto i_39;
  d_39 :
  Cpop();
  i_39 :
  Return();
  b_39 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(j_39);
  w_123 :
  Cpush(l_39);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_39);
  goto w_123;
  n_39 :
  AllBuild();
  goto k_39;
  l_39 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto o_39;
  k_39 :
  Cpop();
  o_39 :
  Return();
  j_39 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(s_39);
  r_39 :
  Rpush(u_39);
  z_123 :
  Cpush(w_39);
  IsAppl();
  SomeInit();
  x_39 :
  SomeNextSon(&&y_39);
  Cpush(x_39);
  Rpush(z_39);
  goto z_123;
  z_39 :
  Cpop();
  CounterOK();
  goto x_39;
  y_39 :
  SomeBuild();
  goto v_39;
  w_39 :
  Epushd(13,4);
  MoveTop(13,3);
  goto o_63;
  o_63 :
  TestFunFC(b_4,&&l_40,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(k_40);
  goto a_124;
  l_40 :
  TestFunFC(c_4,&&o_40,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(k_40);
  goto b_124;
  o_40 :
  TestFunFC(d_4,&&p_40,Egetd(13,3));
  Rpush(k_40);
  goto c_124;
  p_40 :
  TestFunFC(o_25,&&q_40,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto d_124;
  q_40 :
  TestFunFC(q_25,&&v_40,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto e_124;
  v_40 :
  TestFunFC(k_18,&&w_40,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto f_124;
  w_40 :
  TestFunFC(v_25,&&y_40,Egetd(13,3));
  Rpush(k_40);
  goto g_124;
  y_40 :
  TestFunFC(x_25,&&z_40,Egetd(13,3));
  Rpush(k_40);
  goto h_124;
  z_40 :
  TestFunFC(z_25,&&c_41,Egetd(13,3));
  Rpush(k_40);
  goto i_124;
  c_41 :
  TestFunFC(b_26,&&d_41,Egetd(13,3));
  Rpush(k_40);
  goto j_124;
  d_41 :
  TestFunFC(d_26,&&j_41,Egetd(13,3));
  Rpush(k_40);
  goto k_124;
  j_41 :
  TestFunFC(f_26,&&k_41,Egetd(13,3));
  Rpush(k_40);
  goto l_124;
  k_41 :
  TestFunFC(h_4,&&l_41,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto m_124;
  l_41 :
  TestFunFC(u_10,&&m_41,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto n_124;
  m_41 :
  TestFunFC(j_3,&&n_41,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto o_124;
  n_41 :
  TestFunFC(q_14,&&o_41,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto p_124;
  o_41 :
  TestFunFC(j_4,&&p_41,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto q_124;
  p_41 :
  TestFunFC(w_10,&&b_42,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(k_40);
  goto r_124;
  b_42 :
  TestFunFC(g_11,&&d_42,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto s_124;
  d_42 :
  TestFunFC(l_11,&&e_42,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto t_124;
  e_42 :
  TestFunFC(p_11,&&g_42,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(k_40);
  goto u_124;
  g_42 :
  TestFunFC(v_11,&&h_42,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(k_40);
  goto v_124;
  h_42 :
  TestFunFC(l_4,&&i_42,Egetd(13,3));
  Rpush(k_40);
  goto w_124;
  i_42 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(k_40);
  goto x_124;
  k_40 :
  goto j_40;
  a_124 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  b_124 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  c_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  d_124 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto j_63;
  j_63 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto k_63;
  k_63 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto l_63;
  l_63 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(p_42);
  goto z_124;
  p_42 :
  goto k_42;
  z_124 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(q_42);
  a_125 :
  Cpush(s_42);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(t_42);
  goto a_125;
  t_42 :
  AllBuild();
  goto r_42;
  s_42 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto w_42;
  r_42 :
  Cpop();
  w_42 :
  Return();
  q_42 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  k_42 :
  Epopd(14,6);
  Return();
  e_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  f_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  g_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  h_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  i_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  j_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  k_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  l_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  m_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  n_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  o_124 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  p_124 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  q_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  r_124 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  s_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  t_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  u_124 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  v_124 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  w_124 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  x_124 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  j_40 :
  Epopd(13,4);
  goto i_40;
  v_39 :
  Cpop();
  i_40 :
  Return();
  u_39 :
  Tduplinv();
  goto r_39;
  s_39 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(x_42);
  f_125 :
  Cpush(g_43);
  Ccall(_stratego_s_37);
  goto f_43;
  g_43 :
  Ccontinue(l_43);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(m_43);
  goto f_125;
  m_43 :
  AllBuild();
  goto f_43;
  l_43 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_63;
  r_63 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(x_43);
  goto g_125;
  x_43 :
  goto w_43;
  g_125 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(y_43);
  goto f_125;
  y_43 :
  Return();
  w_43 :
  Epopd(13,3);
  goto v_43;
  f_43 :
  Cpop();
  v_43 :
  Return();
  x_42 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(z_43);
  j_125 :
  Cpush(b_44);
  Ccall(_stratego_s_37);
  goto a_44;
  b_44 :
  Ccontinue(c_44);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(d_44);
  goto j_125;
  d_44 :
  AllBuild();
  goto a_44;
  c_44 :
  Epushd(13,3);
  MoveTop(13,1);
  goto v_63;
  v_63 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(g_44);
  goto k_125;
  g_44 :
  goto f_44;
  k_125 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(h_44);
  goto j_125;
  h_44 :
  Return();
  f_44 :
  Epopd(13,3);
  goto e_44;
  a_44 :
  Cpop();
  e_44 :
  Return();
  z_43 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  i_34 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto a_64;
  a_64 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto b_64;
  b_64 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto c_64;
  c_64 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto d_64;
  d_64 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(j_44);
  goto n_125;
  j_44 :
  goto i_44;
  n_125 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  i_44 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Epopd(9,4);
  OneNextSon();
  Rpush(k_44);
  goto v_122;
  k_44 :
  AllBuild();
  goto f_34;
  h_34 :
  Epushd(9,3);
  MoveTop(9,1);
  goto f_64;
  f_64 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(n_44);
  goto o_125;
  n_44 :
  goto m_44;
  o_125 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(o_44);
  goto v_122;
  o_44 :
  Return();
  m_44 :
  Epopd(9,3);
  goto l_44;
  f_34 :
  Cpop();
  l_44 :
  Return();
  e_34 :
  MoveTop(8,4);
  Move(7,4,8,4);
  Epopd(8,4);
  Tpop();
  NotNULLd(7,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(p_44,Egetd(7,1)),(ATerm)ATmakeAppl0(y_0)));
  Rpush(q_44);
  q_125 :
  Cpush(s_44);
  Ccall(_stratego_s_37);
  goto r_44;
  s_44 :
  Ccontinue(t_44);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(v_44);
  Tdupl();
  Epushd(8,2);
  MoveTop(8,1);
  goto i_64;
  i_64 :
  TestFunFC(p_44,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  goto j_64;
  j_64 :
  TestFunFC(y_0,&&fail,Egetd(8,2));
  Rpush(z_44);
  goto r_125;
  z_44 :
  goto x_44;
  r_125 :
  Return();
  x_44 :
  Epopd(8,2);
  Cpop();
  Crestore();
  Cjump();
  v_44 :
  OneNextSon();
  Rpush(b_45);
  goto q_125;
  b_45 :
  AllBuild();
  goto r_44;
  t_44 :
  Epushd(8,3);
  MoveTop(8,1);
  goto l_64;
  l_64 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(i_45);
  goto s_125;
  i_45 :
  goto g_45;
  s_125 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(k_45);
  goto q_125;
  k_45 :
  Return();
  g_45 :
  Epopd(8,3);
  goto d_45;
  r_44 :
  Cpop();
  d_45 :
  Return();
  q_44 :
  MoveTop(7,5);
  NotNULLd(7,5);
  NotNULLd(7,2);
  NotNULLd(7,3);
  NotNULLd(7,4);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(h_21,Egetd(7,5)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_21,Egetd(7,2)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_21,Egetd(7,3)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_21,Egetd(7,4)),(ATerm)ATmakeAppl0(y_0))))));
  Epopd(7,5);
  Return();
  b_117 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_20,Egetd(6,2)),(ATerm)ATmakeAppl0(y_0)));
  Return();
  d_21 :
  MoveTop(6,3);
  NotNULLd(6,3);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(6,3),(ATerm)ATmakeAppl0(y_0)));
  Epopd(6,3);
  goto b_21;
  c_21 :
  Epushd(6,2);
  MoveTop(6,1);
  Tdupl();
  Epushd(7,5);
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  _ST_explode_term();
  MoveTop(7,1);
  goto r_64;
  r_64 :
  TestFunFC(k_8,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto s_64;
  s_64 :
  TestFunFC(k_8,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto t_64;
  t_64 :
  TestFunFC(m_8,&&fail,Egetd(7,5));
  Rpush(o_46);
  goto w_125;
  o_46 :
  goto n_46;
  w_125 :
  Move(6,2,7,4);
  Return();
  n_46 :
  Epopd(7,5);
  Tpop();
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(p_46);
  x_125 :
  Cpush(v_46);
  Ccall(_stratego_s_37);
  Tset((ATerm)ATmakeAppl0(y_0));
  goto q_46;
  v_46 :
  Epushd(7,3);
  MoveTop(7,1);
  goto f_65;
  f_65 :
  TestFunFC(l_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(z_46);
  goto y_125;
  z_46 :
  goto y_46;
  y_125 :
  Epushd(8,7);
  NotNULLd(7,2);
  Tset(Egetd(7,2));
  Rpush(f_47);
  goto v_116;
  f_47 :
  MoveTop(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(g_47);
  goto x_125;
  g_47 :
  MoveTop(8,2);
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(8,1),(ATerm)ATmakeAppl2(k_8,Egetd(8,2),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(8,3);
  goto c_65;
  c_65 :
  TestFunFC(k_8,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto d_65;
  d_65 :
  TestFunFC(k_8,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto e_65;
  e_65 :
  TestFunFC(m_8,&&fail,Egetd(8,7));
  Rpush(l_47);
  goto b_126;
  l_47 :
  goto k_47;
  b_126 :
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(r_47);
  c_126 :
  Cpush(u_47);
  Ccall(_stratego_s_37);
  NotNULLd(8,6);
  Tset(Egetd(8,6));
  goto s_47;
  u_47 :
  Ccontinue(v_47);
  Epushd(9,3);
  MoveTop(9,1);
  goto b_65;
  b_65 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(x_47);
  goto d_126;
  x_47 :
  goto w_47;
  d_126 :
  Tdupl();
  NotNULLd(8,6);
  Tset(Egetd(8,6));
  Rpush(y_47);
  e_126 :
  Cpush(a_48);
  Epushd(10,3);
  MoveTop(10,1);
  goto a_65;
  a_65 :
  TestFunFC(l_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(c_48);
  goto f_126;
  c_48 :
  goto b_48;
  f_126 :
  Move(9,2,10,2);
  Return();
  b_48 :
  Epopd(10,3);
  goto z_47;
  a_48 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(e_48);
  goto e_126;
  e_48 :
  AllBuild();
  goto d_48;
  z_47 :
  Cpop();
  d_48 :
  Return();
  y_47 :
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(f_48);
  goto c_126;
  f_48 :
  Return();
  w_47 :
  Epopd(9,3);
  goto s_47;
  v_47 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_48);
  goto c_126;
  h_48 :
  AllBuild();
  goto g_48;
  s_47 :
  Cpop();
  g_48 :
  Return();
  r_47 :
  Return();
  k_47 :
  Epopd(8,7);
  Return();
  y_46 :
  Epopd(7,3);
  goto w_46;
  q_46 :
  Cpop();
  w_46 :
  Return();
  p_46 :
  Epopd(6,2);
  goto m_46;
  b_21 :
  Cpop();
  m_46 :
  Return();
  a_21 :
  Ccall(_stratego_x_35);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  x_20 :
  Epopd(3,2);
  OneNextSon();
  Rpush(i_48);
  goto t_116;
  i_48 :
  AllBuild();
  goto u_20;
  w_20 :
  Epushd(3,3);
  MoveTop(3,1);
  goto j_65;
  j_65 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(l_48);
  goto h_126;
  l_48 :
  goto k_48;
  h_126 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(v_49);
  goto t_116;
  v_49 :
  Return();
  k_48 :
  Epopd(3,3);
  goto j_48;
  u_20 :
  Cpop();
  j_48 :
  Return();
  t_20 :
  Ccall(_stratego_x_35);
  MoveTop(2,2);
  Move(1,2,2,2);
  Tset((ATerm)ATmakeAppl1(n_20,(ATerm)ATmakeAppl2(l_0,ATmakeString("Prelude"),(ATerm)ATmakeAppl0(y_0))));
  Tdupl();
  Tset((ATerm)ATmakeAppl1(n_20,(ATerm)ATmakeAppl2(l_0,ATmakeString("Prelude"),(ATerm)ATmakeAppl0(y_0))));
  MoveTop(1,3);
  Tpop();
  Epopd(2,2);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,Egetd(1,3),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl2(l_0,Egetd(1,2),(ATerm)ATmakeAppl0(y_0)))));
  Ccall(_stratego_x_35);
  MoveTop(1,4);
  NotNULLd(0,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(w_49,Egetd(0,2),Egetd(1,4)));
  Epopd(1,4);
  Return();
  e_20 :
  Epopd(0,4);
  OneNextSon();
  Rpush(x_49);
  goto n_116;
  x_49 :
  AllBuild();
  goto b_20;
  d_20 :
  Epushd(0,3);
  MoveTop(0,1);
  goto p_65;
  p_65 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(e_50);
  goto l_126;
  e_50 :
  goto b_50;
  l_126 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(l_50);
  goto n_116;
  l_50 :
  Return();
  b_50 :
  Epopd(0,3);
  goto z_49;
  b_20 :
  Cpop();
  z_49 :
  Return();
  a_20 :
  AllBuild();
  goto x_19;
  y_19 :
  TestFunTop(z_19);
  TravInit();
  OneNextSon();
  Rpush(q_50);
  m_126 :
  Cpush(b_51);
  Ccall(_stratego_s_37);
  goto a_51;
  b_51 :
  Ccontinue(c_51);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(0,4);
  MoveTop(0,1);
  goto m_76;
  m_76 :
  TestFunFC(g_20,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  MoveArg(0,4,0,1,2);
  Rpush(g_51);
  goto n_126;
  g_51 :
  goto f_51;
  n_126 :
  Epushd(1,4);
  Tdupl();
  Epushd(2,2);
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(h_51);
  o_126 :
  Cpush(k_51);
  Ccall(_stratego_s_37);
  goto i_51;
  k_51 :
  Ccontinue(l_51);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  goto s_65;
  s_65 :
  TestFunFC(n_20,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(o_51);
  goto p_126;
  o_51 :
  goto n_51;
  p_126 :
  NotNULLd(3,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_20,Egetd(3,2)),(ATerm)ATmakeAppl0(y_0)));
  Return();
  n_51 :
  Epopd(3,2);
  OneNextSon();
  Rpush(p_51);
  goto o_126;
  p_51 :
  AllBuild();
  goto i_51;
  l_51 :
  Epushd(3,3);
  MoveTop(3,1);
  goto u_65;
  u_65 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(t_51);
  goto q_126;
  t_51 :
  goto r_51;
  q_126 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(u_51);
  goto o_126;
  u_51 :
  Return();
  r_51 :
  Epopd(3,3);
  goto q_51;
  i_51 :
  Cpop();
  q_51 :
  Return();
  h_51 :
  Ccall(_stratego_x_35);
  MoveTop(2,1);
  Move(1,1,2,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  Rpush(w_51);
  s_126 :
  Cpush(y_51);
  Ccall(_stratego_s_37);
  goto x_51;
  y_51 :
  Ccontinue(f_52);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(3,2);
  MoveTop(3,1);
  goto g_76;
  g_76 :
  TestFunFC(z_20,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  Rpush(h_52);
  goto t_126;
  h_52 :
  goto g_52;
  t_126 :
  Epushd(4,1);
  Tdupl();
  Epushd(5,1);
  NotNULLd(3,2);
  Tset(Egetd(3,2));
  Rpush(q_52);
  u_126 :
  Cpush(x_52);
  Epushd(6,3);
  MoveTop(6,1);
  goto m_75;
  m_75 :
  TestFunFC(h_21,&&b_53,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto v_126;
  b_53 :
  TestFunFC(j_21,&&c_53,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto w_126;
  c_53 :
  TestFunFC(l_21,&&d_53,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto x_126;
  d_53 :
  TestFunFC(n_21,&&m_53,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto y_126;
  m_53 :
  TestFunFC(p_21,&&n_53,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto z_126;
  n_53 :
  TestFunFC(n_20,&&fail,Egetd(6,1));
  MoveArg(6,2,6,1,0);
  Rpush(a_53);
  goto a_127;
  a_53 :
  goto z_52;
  v_126 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(h_21,Egetd(6,2)));
  Return();
  w_126 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(j_21,Egetd(6,2)));
  Return();
  x_126 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(l_21,Egetd(6,2)));
  Return();
  y_126 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl1(n_21,Egetd(6,2)));
  Return();
  z_126 :
  Epushd(7,5);
  Tdupl();
  Epushd(8,4);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(r_53);
  b_127 :
  Cpush(x_53);
  Ccall(_stratego_s_37);
  goto u_53;
  x_53 :
  Ccontinue(a_54);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_36);
  OneNextSon();
  Rpush(d_54);
  goto b_127;
  d_54 :
  AllBuild();
  goto u_53;
  a_54 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_66;
  e_66 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(g_54);
  goto c_127;
  g_54 :
  goto f_54;
  c_127 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(j_54);
  goto b_127;
  j_54 :
  Return();
  f_54 :
  Epopd(9,3);
  goto e_54;
  u_53 :
  Cpop();
  e_54 :
  Return();
  r_53 :
  MoveTop(8,1);
  Move(7,1,8,1);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(m_54);
  e_127 :
  Cpush(o_54);
  Ccall(_stratego_s_37);
  goto n_54;
  o_54 :
  Ccontinue(p_54);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto x_68;
  x_68 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(s_54);
  goto i_127;
  s_54 :
  goto q_54;
  i_127 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(u_54);
  j_127 :
  Cpush(w_54);
  Ccall(_stratego_s_37);
  goto v_54;
  w_54 :
  Ccontinue(x_54);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(y_54);
  goto j_127;
  y_54 :
  AllBuild();
  goto v_54;
  x_54 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_66;
  l_66 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(b_55);
  goto k_127;
  b_55 :
  goto a_55;
  k_127 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(c_55);
  goto j_127;
  c_55 :
  Return();
  a_55 :
  Epopd(13,3);
  goto z_54;
  v_54 :
  Cpop();
  z_54 :
  Return();
  u_54 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(e_55);
  m_127 :
  Cpush(g_55);
  Ccall(_stratego_s_37);
  goto f_55;
  g_55 :
  Ccontinue(h_55);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(i_55);
  goto m_127;
  i_55 :
  AllBuild();
  goto f_55;
  h_55 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_66;
  o_66 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(m_55);
  goto n_127;
  m_55 :
  goto k_55;
  n_127 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(n_55);
  goto m_127;
  n_55 :
  Return();
  k_55 :
  Epopd(13,3);
  goto j_55;
  f_55 :
  Cpop();
  j_55 :
  Return();
  e_55 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(p_55);
  p_127 :
  Cpush(s_55);
  Ccall(_stratego_s_37);
  goto q_55;
  s_55 :
  Ccontinue(t_55);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(v_55);
  goto p_127;
  v_55 :
  AllBuild();
  goto q_55;
  t_55 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_66;
  r_66 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(a_56);
  goto q_127;
  a_56 :
  goto y_55;
  q_127 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(b_56);
  goto p_127;
  b_56 :
  Return();
  y_55 :
  Epopd(13,3);
  goto x_55;
  q_55 :
  Cpop();
  x_55 :
  Return();
  p_55 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(d_56);
  s_127 :
  Cpush(f_56);
  Ccall(_stratego_s_37);
  goto e_56;
  f_56 :
  Ccontinue(g_56);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_66;
  u_66 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(i_56);
  goto t_127;
  i_56 :
  goto h_56;
  t_127 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  h_56 :
  Epopd(13,2);
  OneNextSon();
  Rpush(j_56);
  goto s_127;
  j_56 :
  AllBuild();
  goto e_56;
  g_56 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_66;
  w_66 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(m_56);
  goto u_127;
  m_56 :
  goto l_56;
  u_127 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(n_56);
  goto s_127;
  n_56 :
  Return();
  l_56 :
  Epopd(13,3);
  goto k_56;
  e_56 :
  Cpop();
  k_56 :
  Return();
  d_56 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(p_56);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(q_56);
  w_127 :
  Cpush(s_56);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_66;
  z_66 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(u_56);
  goto x_127;
  u_56 :
  goto t_56;
  x_127 :
  Move(10,6,13,2);
  Return();
  t_56 :
  Epopd(13,2);
  goto r_56;
  s_56 :
  IsAppl();
  OneInit();
  w_56 :
  OneNextSon();
  Cpush(w_56);
  Rpush(y_56);
  goto w_127;
  y_56 :
  Cpop();
  OneBuild();
  goto v_56;
  r_56 :
  Cpop();
  v_56 :
  Return();
  q_56 :
  goto o_56;
  p_56 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_67;
  c_67 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(b_57);
  goto y_127;
  b_57 :
  goto a_57;
  y_127 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  a_57 :
  Epopd(13,5);
  goto z_56;
  o_56 :
  Cpop();
  z_56 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(c_57);
  b_128 :
  Cpush(e_57);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(f_57);
  goto b_128;
  f_57 :
  AllBuild();
  goto d_57;
  e_57 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto g_57;
  d_57 :
  Cpop();
  g_57 :
  Return();
  c_57 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(h_57);
  d_128 :
  Cpush(m_57);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(o_57);
  goto d_128;
  o_57 :
  AllBuild();
  goto l_57;
  m_57 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto p_57;
  l_57 :
  Cpop();
  p_57 :
  Return();
  h_57 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(r_57);
  f_128 :
  Cpush(t_57);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_57);
  goto f_128;
  v_57 :
  AllBuild();
  goto s_57;
  t_57 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto w_57;
  s_57 :
  Cpop();
  w_57 :
  Return();
  r_57 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(d_58);
  y_57 :
  Rpush(f_58);
  i_128 :
  Cpush(h_58);
  IsAppl();
  SomeInit();
  i_58 :
  SomeNextSon(&&j_58);
  Cpush(i_58);
  Rpush(k_58);
  goto i_128;
  k_58 :
  Cpop();
  CounterOK();
  goto i_58;
  j_58 :
  SomeBuild();
  goto g_58;
  h_58 :
  Epushd(13,4);
  MoveTop(13,3);
  goto n_68;
  n_68 :
  TestFunFC(b_4,&&q_58,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(p_58);
  goto j_128;
  q_58 :
  TestFunFC(c_4,&&s_58,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(p_58);
  goto k_128;
  s_58 :
  TestFunFC(d_4,&&t_58,Egetd(13,3));
  Rpush(p_58);
  goto l_128;
  t_58 :
  TestFunFC(o_25,&&v_58,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto m_128;
  v_58 :
  TestFunFC(q_25,&&x_58,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto n_128;
  x_58 :
  TestFunFC(k_18,&&y_58,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto o_128;
  y_58 :
  TestFunFC(v_25,&&a_59,Egetd(13,3));
  Rpush(p_58);
  goto p_128;
  a_59 :
  TestFunFC(x_25,&&b_59,Egetd(13,3));
  Rpush(p_58);
  goto q_128;
  b_59 :
  TestFunFC(z_25,&&d_59,Egetd(13,3));
  Rpush(p_58);
  goto r_128;
  d_59 :
  TestFunFC(b_26,&&e_59,Egetd(13,3));
  Rpush(p_58);
  goto s_128;
  e_59 :
  TestFunFC(d_26,&&f_59,Egetd(13,3));
  Rpush(p_58);
  goto t_128;
  f_59 :
  TestFunFC(f_26,&&g_59,Egetd(13,3));
  Rpush(p_58);
  goto u_128;
  g_59 :
  TestFunFC(h_4,&&h_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto v_128;
  h_59 :
  TestFunFC(u_10,&&i_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto w_128;
  i_59 :
  TestFunFC(j_3,&&j_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto x_128;
  j_59 :
  TestFunFC(q_14,&&k_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto y_128;
  k_59 :
  TestFunFC(j_4,&&l_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto z_128;
  l_59 :
  TestFunFC(w_10,&&m_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(p_58);
  goto a_129;
  m_59 :
  TestFunFC(g_11,&&n_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto b_129;
  n_59 :
  TestFunFC(l_11,&&o_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto c_129;
  o_59 :
  TestFunFC(p_11,&&p_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(p_58);
  goto d_129;
  p_59 :
  TestFunFC(v_11,&&q_59,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(p_58);
  goto e_129;
  q_59 :
  TestFunFC(l_4,&&r_59,Egetd(13,3));
  Rpush(p_58);
  goto f_129;
  r_59 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(p_58);
  goto g_129;
  p_58 :
  goto n_58;
  j_128 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  k_128 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  l_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  m_128 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto i_68;
  i_68 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto j_68;
  j_68 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto k_68;
  k_68 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(t_59);
  goto i_129;
  t_59 :
  goto s_59;
  i_129 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(u_59);
  j_129 :
  Cpush(w_59);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(x_59);
  goto j_129;
  x_59 :
  AllBuild();
  goto v_59;
  w_59 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto y_59;
  v_59 :
  Cpop();
  y_59 :
  Return();
  u_59 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  s_59 :
  Epopd(14,6);
  Return();
  n_128 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  o_128 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  p_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  q_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  r_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  s_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  t_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  u_128 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  v_128 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  w_128 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  x_128 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  y_128 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  z_128 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  a_129 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  b_129 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  c_129 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  d_129 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  e_129 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  f_129 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  g_129 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  n_58 :
  Epopd(13,4);
  goto m_58;
  g_58 :
  Cpop();
  m_58 :
  Return();
  f_58 :
  Tduplinv();
  goto y_57;
  d_58 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(z_59);
  o_129 :
  Cpush(b_60);
  Ccall(_stratego_s_37);
  goto a_60;
  b_60 :
  Ccontinue(c_60);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(d_60);
  goto o_129;
  d_60 :
  AllBuild();
  goto a_60;
  c_60 :
  Epushd(13,3);
  MoveTop(13,1);
  goto q_68;
  q_68 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(g_60);
  goto p_129;
  g_60 :
  goto f_60;
  p_129 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(h_60);
  goto o_129;
  h_60 :
  Return();
  f_60 :
  Epopd(13,3);
  goto e_60;
  a_60 :
  Cpop();
  e_60 :
  Return();
  z_59 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(l_60);
  s_129 :
  Cpush(o_60);
  Ccall(_stratego_s_37);
  goto m_60;
  o_60 :
  Ccontinue(p_60);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(r_60);
  goto s_129;
  r_60 :
  AllBuild();
  goto m_60;
  p_60 :
  Epushd(13,3);
  MoveTop(13,1);
  goto u_68;
  u_68 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(v_60);
  goto t_129;
  v_60 :
  goto t_60;
  t_129 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(w_60);
  goto s_129;
  w_60 :
  Return();
  t_60 :
  Epopd(13,3);
  goto s_60;
  m_60 :
  Cpop();
  s_60 :
  Return();
  l_60 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  q_54 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto z_68;
  z_68 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto a_69;
  a_69 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto b_69;
  b_69 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto c_69;
  c_69 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(d_61);
  goto w_129;
  d_61 :
  goto y_60;
  w_129 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  y_60 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,2);
  Tset(Egetd(9,2));
  Epopd(9,4);
  OneNextSon();
  Rpush(f_61);
  goto e_127;
  f_61 :
  AllBuild();
  goto n_54;
  p_54 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_69;
  e_69 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(i_61);
  goto x_129;
  i_61 :
  goto h_61;
  x_129 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(j_61);
  goto e_127;
  j_61 :
  Return();
  h_61 :
  Epopd(9,3);
  goto g_61;
  n_54 :
  Cpop();
  g_61 :
  Return();
  m_54 :
  MoveTop(8,2);
  Move(7,2,8,2);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(k_61);
  z_129 :
  Cpush(n_61);
  Ccall(_stratego_s_37);
  goto m_61;
  n_61 :
  Ccontinue(p_61);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto x_71;
  x_71 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(s_61);
  goto d_130;
  s_61 :
  goto q_61;
  d_130 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(t_61);
  e_130 :
  Cpush(x_61);
  Ccall(_stratego_s_37);
  goto v_61;
  x_61 :
  Ccontinue(y_61);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(a_62);
  goto e_130;
  a_62 :
  AllBuild();
  goto v_61;
  y_61 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_69;
  l_69 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(e_62);
  goto f_130;
  e_62 :
  goto d_62;
  f_130 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(f_62);
  goto e_130;
  f_62 :
  Return();
  d_62 :
  Epopd(13,3);
  goto b_62;
  v_61 :
  Cpop();
  b_62 :
  Return();
  t_61 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(g_62);
  h_130 :
  Cpush(i_62);
  Ccall(_stratego_s_37);
  goto h_62;
  i_62 :
  Ccontinue(j_62);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(k_62);
  goto h_130;
  k_62 :
  AllBuild();
  goto h_62;
  j_62 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_69;
  o_69 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(n_62);
  goto i_130;
  n_62 :
  goto m_62;
  i_130 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(o_62);
  goto h_130;
  o_62 :
  Return();
  m_62 :
  Epopd(13,3);
  goto l_62;
  h_62 :
  Cpop();
  l_62 :
  Return();
  g_62 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(p_62);
  k_130 :
  Cpush(r_62);
  Ccall(_stratego_s_37);
  goto q_62;
  r_62 :
  Ccontinue(s_62);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(t_62);
  goto k_130;
  t_62 :
  AllBuild();
  goto q_62;
  s_62 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_69;
  r_69 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(w_62);
  goto l_130;
  w_62 :
  goto v_62;
  l_130 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(x_62);
  goto k_130;
  x_62 :
  Return();
  v_62 :
  Epopd(13,3);
  goto u_62;
  q_62 :
  Cpop();
  u_62 :
  Return();
  p_62 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(y_62);
  n_130 :
  Cpush(a_63);
  Ccall(_stratego_s_37);
  goto z_62;
  a_63 :
  Ccontinue(b_63);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_69;
  u_69 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(d_63);
  goto o_130;
  d_63 :
  goto c_63;
  o_130 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  c_63 :
  Epopd(13,2);
  OneNextSon();
  Rpush(e_63);
  goto n_130;
  e_63 :
  AllBuild();
  goto z_62;
  b_63 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_69;
  w_69 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(h_63);
  goto p_130;
  h_63 :
  goto g_63;
  p_130 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(i_63);
  goto n_130;
  i_63 :
  Return();
  g_63 :
  Epopd(13,3);
  goto f_63;
  z_62 :
  Cpop();
  f_63 :
  Return();
  y_62 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(n_63);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(p_63);
  r_130 :
  Cpush(s_63);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_69;
  z_69 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(u_63);
  goto s_130;
  u_63 :
  goto t_63;
  s_130 :
  Move(10,6,13,2);
  Return();
  t_63 :
  Epopd(13,2);
  goto q_63;
  s_63 :
  IsAppl();
  OneInit();
  x_63 :
  OneNextSon();
  Cpush(x_63);
  Rpush(e_64);
  goto r_130;
  e_64 :
  Cpop();
  OneBuild();
  goto w_63;
  q_63 :
  Cpop();
  w_63 :
  Return();
  p_63 :
  goto m_63;
  n_63 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_70;
  c_70 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(k_64);
  goto t_130;
  k_64 :
  goto h_64;
  t_130 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  h_64 :
  Epopd(13,5);
  goto g_64;
  m_63 :
  Cpop();
  g_64 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(m_64);
  w_130 :
  Cpush(p_64);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(q_64);
  goto w_130;
  q_64 :
  AllBuild();
  goto o_64;
  p_64 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto u_64;
  o_64 :
  Cpop();
  u_64 :
  Return();
  m_64 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(v_64);
  y_130 :
  Cpush(x_64);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(y_64);
  goto y_130;
  y_64 :
  AllBuild();
  goto w_64;
  x_64 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto z_64;
  w_64 :
  Cpop();
  z_64 :
  Return();
  v_64 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(g_65);
  a_131 :
  Cpush(k_65);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(l_65);
  goto a_131;
  l_65 :
  AllBuild();
  goto i_65;
  k_65 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto m_65;
  i_65 :
  Cpop();
  m_65 :
  Return();
  g_65 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(q_65);
  o_65 :
  Rpush(r_65);
  d_131 :
  Cpush(v_65);
  IsAppl();
  SomeInit();
  w_65 :
  SomeNextSon(&&x_65);
  Cpush(w_65);
  Rpush(y_65);
  goto d_131;
  y_65 :
  Cpop();
  CounterOK();
  goto w_65;
  x_65 :
  SomeBuild();
  goto t_65;
  v_65 :
  Epushd(13,4);
  MoveTop(13,3);
  goto n_71;
  n_71 :
  TestFunFC(b_4,&&c_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(b_66);
  goto e_131;
  c_66 :
  TestFunFC(c_4,&&d_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(b_66);
  goto f_131;
  d_66 :
  TestFunFC(d_4,&&f_66,Egetd(13,3));
  Rpush(b_66);
  goto g_131;
  f_66 :
  TestFunFC(o_25,&&g_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto h_131;
  g_66 :
  TestFunFC(q_25,&&h_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto i_131;
  h_66 :
  TestFunFC(k_18,&&i_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto j_131;
  i_66 :
  TestFunFC(v_25,&&j_66,Egetd(13,3));
  Rpush(b_66);
  goto k_131;
  j_66 :
  TestFunFC(x_25,&&k_66,Egetd(13,3));
  Rpush(b_66);
  goto l_131;
  k_66 :
  TestFunFC(z_25,&&m_66,Egetd(13,3));
  Rpush(b_66);
  goto m_131;
  m_66 :
  TestFunFC(b_26,&&n_66,Egetd(13,3));
  Rpush(b_66);
  goto n_131;
  n_66 :
  TestFunFC(d_26,&&p_66,Egetd(13,3));
  Rpush(b_66);
  goto o_131;
  p_66 :
  TestFunFC(f_26,&&q_66,Egetd(13,3));
  Rpush(b_66);
  goto p_131;
  q_66 :
  TestFunFC(h_4,&&s_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto q_131;
  s_66 :
  TestFunFC(u_10,&&t_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto r_131;
  t_66 :
  TestFunFC(j_3,&&v_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto s_131;
  v_66 :
  TestFunFC(q_14,&&x_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto t_131;
  x_66 :
  TestFunFC(j_4,&&y_66,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto u_131;
  y_66 :
  TestFunFC(w_10,&&a_67,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(b_66);
  goto v_131;
  a_67 :
  TestFunFC(g_11,&&b_67,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto w_131;
  b_67 :
  TestFunFC(l_11,&&d_67,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto x_131;
  d_67 :
  TestFunFC(p_11,&&e_67,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(b_66);
  goto y_131;
  e_67 :
  TestFunFC(v_11,&&f_67,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(b_66);
  goto z_131;
  f_67 :
  TestFunFC(l_4,&&g_67,Egetd(13,3));
  Rpush(b_66);
  goto a_132;
  g_67 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(b_66);
  goto b_132;
  b_66 :
  goto a_66;
  e_131 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  f_131 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  g_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  h_131 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto i_71;
  i_71 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto j_71;
  j_71 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto k_71;
  k_71 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(i_67);
  goto d_132;
  i_67 :
  goto h_67;
  d_132 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(j_67);
  e_132 :
  Cpush(l_67);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_67);
  goto e_132;
  m_67 :
  AllBuild();
  goto k_67;
  l_67 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto n_67;
  k_67 :
  Cpop();
  n_67 :
  Return();
  j_67 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  h_67 :
  Epopd(14,6);
  Return();
  i_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  j_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  k_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  l_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  m_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  n_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  o_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  p_131 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  q_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  r_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  s_131 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  t_131 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  u_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  v_131 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  w_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  x_131 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  y_131 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  z_131 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  a_132 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  b_132 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  a_66 :
  Epopd(13,4);
  goto z_65;
  t_65 :
  Cpop();
  z_65 :
  Return();
  r_65 :
  Tduplinv();
  goto o_65;
  q_65 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(o_67);
  j_132 :
  Cpush(q_67);
  Ccall(_stratego_s_37);
  goto p_67;
  q_67 :
  Ccontinue(r_67);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(s_67);
  goto j_132;
  s_67 :
  AllBuild();
  goto p_67;
  r_67 :
  Epushd(13,3);
  MoveTop(13,1);
  goto q_71;
  q_71 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(v_67);
  goto k_132;
  v_67 :
  goto u_67;
  k_132 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(w_67);
  goto j_132;
  w_67 :
  Return();
  u_67 :
  Epopd(13,3);
  goto t_67;
  p_67 :
  Cpop();
  t_67 :
  Return();
  o_67 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(x_67);
  n_132 :
  Cpush(z_67);
  Ccall(_stratego_s_37);
  goto y_67;
  z_67 :
  Ccontinue(a_68);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(b_68);
  goto n_132;
  b_68 :
  AllBuild();
  goto y_67;
  a_68 :
  Epushd(13,3);
  MoveTop(13,1);
  goto u_71;
  u_71 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(e_68);
  goto o_132;
  e_68 :
  goto d_68;
  o_132 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(f_68);
  goto n_132;
  f_68 :
  Return();
  d_68 :
  Epopd(13,3);
  goto c_68;
  y_67 :
  Cpop();
  c_68 :
  Return();
  x_67 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  q_61 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto z_71;
  z_71 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto a_72;
  a_72 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto b_72;
  b_72 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto c_72;
  c_72 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(h_68);
  goto r_132;
  h_68 :
  goto g_68;
  r_132 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  g_68 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Epopd(9,4);
  OneNextSon();
  Rpush(l_68);
  goto z_129;
  l_68 :
  AllBuild();
  goto m_61;
  p_61 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_72;
  e_72 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(p_68);
  goto s_132;
  p_68 :
  goto o_68;
  s_132 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(r_68);
  goto z_129;
  r_68 :
  Return();
  o_68 :
  Epopd(9,3);
  goto m_68;
  m_61 :
  Cpop();
  m_68 :
  Return();
  k_61 :
  MoveTop(8,3);
  Move(7,3,8,3);
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(s_68);
  u_132 :
  Cpush(v_68);
  Ccall(_stratego_s_37);
  goto t_68;
  v_68 :
  Ccontinue(w_68);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(9,4);
  MoveTop(9,1);
  Tdupl();
  Epushd(10,23);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Tdupl();
  Epushd(11,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  Ccall(_stratego_j_36);
  MoveTop(11,1);
  Move(10,10,11,1);
  NotNULLd(10,10);
  Tset(Egetd(10,10));
  MoveTop(11,2);
  goto x_74;
  x_74 :
  TestFunFC(c_4,&&fail,Egetd(11,2));
  MoveArg(11,3,11,2,0);
  MoveArg(11,4,11,2,1);
  MoveArg(11,5,11,2,2);
  Rpush(d_69);
  goto y_132;
  d_69 :
  goto y_68;
  y_132 :
  Epushd(12,11);
  Move(10,2,11,3);
  Move(10,1,11,4);
  Move(10,5,11,5);
  NotNULLd(10,2);
  Tset(Egetd(10,2));
  Rpush(f_69);
  z_132 :
  Cpush(h_69);
  Ccall(_stratego_s_37);
  goto g_69;
  h_69 :
  Ccontinue(i_69);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_36);
  OneNextSon();
  Rpush(j_69);
  goto z_132;
  j_69 :
  AllBuild();
  goto g_69;
  i_69 :
  Epushd(13,3);
  MoveTop(13,1);
  goto l_72;
  l_72 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(n_69);
  goto a_133;
  n_69 :
  goto m_69;
  a_133 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(p_69);
  goto z_132;
  p_69 :
  Return();
  m_69 :
  Epopd(13,3);
  goto k_69;
  g_69 :
  Cpop();
  k_69 :
  Return();
  f_69 :
  MoveTop(12,1);
  Move(10,15,12,1);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(q_69);
  c_133 :
  Cpush(t_69);
  Ccall(_stratego_s_37);
  goto s_69;
  t_69 :
  Ccontinue(v_69);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_f_36);
  OneNextSon();
  Rpush(x_69);
  goto c_133;
  x_69 :
  AllBuild();
  goto s_69;
  v_69 :
  Epushd(13,3);
  MoveTop(13,1);
  goto o_72;
  o_72 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(b_70);
  goto d_133;
  b_70 :
  goto a_70;
  d_133 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(d_70);
  goto c_133;
  d_70 :
  Return();
  a_70 :
  Epopd(13,3);
  goto y_69;
  s_69 :
  Cpop();
  y_69 :
  Return();
  q_69 :
  MoveTop(12,2);
  Move(10,11,12,2);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(e_70);
  f_133 :
  Cpush(g_70);
  Ccall(_stratego_s_37);
  goto f_70;
  g_70 :
  Ccontinue(h_70);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_d_36);
  OneNextSon();
  Rpush(i_70);
  goto f_133;
  i_70 :
  AllBuild();
  goto f_70;
  h_70 :
  Epushd(13,3);
  MoveTop(13,1);
  goto r_72;
  r_72 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(l_70);
  goto g_133;
  l_70 :
  goto k_70;
  g_133 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(m_70);
  goto f_133;
  m_70 :
  Return();
  k_70 :
  Epopd(13,3);
  goto j_70;
  f_70 :
  Cpop();
  j_70 :
  Return();
  e_70 :
  MoveTop(12,3);
  Move(10,3,12,3);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(n_70);
  i_133 :
  Cpush(p_70);
  Ccall(_stratego_s_37);
  goto o_70;
  p_70 :
  Ccontinue(q_70);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(13,2);
  MoveTop(13,1);
  goto u_72;
  u_72 :
  TestFunFC(w_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(s_70);
  goto j_133;
  s_70 :
  goto r_70;
  j_133 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Return();
  r_70 :
  Epopd(13,2);
  OneNextSon();
  Rpush(t_70);
  goto i_133;
  t_70 :
  AllBuild();
  goto o_70;
  q_70 :
  Epushd(13,3);
  MoveTop(13,1);
  goto w_72;
  w_72 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(w_70);
  goto k_133;
  w_70 :
  goto v_70;
  k_133 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(x_70);
  goto i_133;
  x_70 :
  Return();
  v_70 :
  Epopd(13,3);
  goto u_70;
  o_70 :
  Cpop();
  u_70 :
  Return();
  n_70 :
  MoveTop(12,4);
  Move(10,4,12,4);
  Cpush(z_70);
  NotNULLd(10,5);
  Tset(Egetd(10,5));
  Rpush(a_71);
  m_133 :
  Cpush(c_71);
  Epushd(13,2);
  MoveTop(13,1);
  goto z_72;
  z_72 :
  TestFunFC(k_18,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  Rpush(e_71);
  goto n_133;
  e_71 :
  goto d_71;
  n_133 :
  Move(10,6,13,2);
  Return();
  d_71 :
  Epopd(13,2);
  goto b_71;
  c_71 :
  IsAppl();
  OneInit();
  g_71 :
  OneNextSon();
  Cpush(g_71);
  Rpush(l_71);
  goto m_133;
  l_71 :
  Cpop();
  OneBuild();
  goto f_71;
  b_71 :
  Cpop();
  f_71 :
  Return();
  a_71 :
  goto y_70;
  z_70 :
  Epushd(13,5);
  NotNULLd(9,1);
  Tset(Egetd(9,1));
  MoveTop(13,1);
  goto c_73;
  c_73 :
  TestFunFC(r_5,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  MoveArg(13,4,13,1,2);
  MoveArg(13,5,13,1,3);
  Rpush(p_71);
  goto o_133;
  p_71 :
  goto o_71;
  o_133 :
  NotNULLd(13,2);
  Tset(Egetd(13,2));
  Move(10,6,13,2);
  Return();
  o_71 :
  Epopd(13,5);
  goto m_71;
  y_70 :
  Cpop();
  m_71 :
  NotNULLd(10,6);
  Tset(Egetd(10,6));
  Ccall(_stratego_v_36);
  MoveTop(12,5);
  Move(10,8,12,5);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(r_71);
  r_133 :
  Cpush(t_71);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(v_71);
  goto r_133;
  v_71 :
  AllBuild();
  goto s_71;
  t_71 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-overlay"));
  Ccall(_stratego_t_36);
  goto w_71;
  s_71 :
  Cpop();
  w_71 :
  Return();
  r_71 :
  Ccall(_stratego_s_36);
  MoveTop(12,6);
  Move(10,14,12,6);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(y_71);
  t_133 :
  Cpush(f_72);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_72);
  goto t_133;
  g_72 :
  AllBuild();
  goto d_72;
  f_72 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-match"));
  Ccall(_stratego_t_36);
  goto h_72;
  d_72 :
  Cpop();
  h_72 :
  Return();
  y_71 :
  Ccall(_stratego_s_36);
  MoveTop(12,7);
  Move(10,7,12,7);
  NotNULLd(10,8);
  Tset(Egetd(10,8));
  Ccall(_stratego_t_36);
  Rpush(i_72);
  v_133 :
  Cpush(k_72);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(m_72);
  goto v_133;
  m_72 :
  AllBuild();
  goto j_72;
  k_72 :
  Ccall(_stratego_s_37);
  Tset(ATmakeString("-build"));
  Ccall(_stratego_t_36);
  goto n_72;
  j_72 :
  Cpop();
  n_72 :
  Return();
  i_72 :
  Ccall(_stratego_s_36);
  MoveTop(12,8);
  Move(10,9,12,8);
  NotNULLd(10,10);
  NotNULLd(10,11);
  Tset((ATerm)ATmakeAppl2(b_4,Egetd(10,10),Egetd(10,11)));
  Cpush(q_72);
  p_72 :
  Rpush(s_72);
  y_133 :
  Cpush(v_72);
  IsAppl();
  SomeInit();
  x_72 :
  SomeNextSon(&&y_72);
  Cpush(x_72);
  Rpush(a_73);
  goto y_133;
  a_73 :
  Cpop();
  CounterOK();
  goto x_72;
  y_72 :
  SomeBuild();
  goto t_72;
  v_72 :
  Epushd(13,4);
  MoveTop(13,3);
  goto n_74;
  n_74 :
  TestFunFC(b_4,&&f_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(e_73);
  goto z_133;
  f_73 :
  TestFunFC(c_4,&&g_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  MoveArg(13,1,13,3,2);
  Rpush(e_73);
  goto a_134;
  g_73 :
  TestFunFC(d_4,&&h_73,Egetd(13,3));
  Rpush(e_73);
  goto b_134;
  h_73 :
  TestFunFC(o_25,&&i_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto c_134;
  i_73 :
  TestFunFC(q_25,&&j_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto d_134;
  j_73 :
  TestFunFC(k_18,&&k_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto e_134;
  k_73 :
  TestFunFC(v_25,&&l_73,Egetd(13,3));
  Rpush(e_73);
  goto f_134;
  l_73 :
  TestFunFC(x_25,&&m_73,Egetd(13,3));
  Rpush(e_73);
  goto g_134;
  m_73 :
  TestFunFC(z_25,&&n_73,Egetd(13,3));
  Rpush(e_73);
  goto h_134;
  n_73 :
  TestFunFC(b_26,&&o_73,Egetd(13,3));
  Rpush(e_73);
  goto i_134;
  o_73 :
  TestFunFC(d_26,&&p_73,Egetd(13,3));
  Rpush(e_73);
  goto j_134;
  p_73 :
  TestFunFC(f_26,&&q_73,Egetd(13,3));
  Rpush(e_73);
  goto k_134;
  q_73 :
  TestFunFC(h_4,&&r_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto l_134;
  r_73 :
  TestFunFC(u_10,&&s_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto m_134;
  s_73 :
  TestFunFC(j_3,&&t_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto n_134;
  t_73 :
  TestFunFC(q_14,&&u_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto o_134;
  u_73 :
  TestFunFC(j_4,&&v_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto p_134;
  v_73 :
  TestFunFC(w_10,&&w_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(e_73);
  goto q_134;
  w_73 :
  TestFunFC(g_11,&&x_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto r_134;
  x_73 :
  TestFunFC(l_11,&&y_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto s_134;
  y_73 :
  TestFunFC(p_11,&&z_73,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(e_73);
  goto t_134;
  z_73 :
  TestFunFC(v_11,&&a_74,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  MoveArg(13,2,13,3,1);
  Rpush(e_73);
  goto u_134;
  a_74 :
  TestFunFC(l_4,&&b_74,Egetd(13,3));
  Rpush(e_73);
  goto v_134;
  b_74 :
  TestFunFC(z_3,&&fail,Egetd(13,3));
  MoveArg(13,4,13,3,0);
  Rpush(e_73);
  goto w_134;
  e_73 :
  goto d_73;
  z_133 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("appl"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  a_134 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  NotNULLd(13,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("prod"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl2(l_0,Egetd(13,1),(ATerm)ATmakeAppl0(y_0))))));
  Return();
  b_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("no-attrs"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  c_134 :
  Epushd(14,6);
  NotNULLd(0,2);
  Tset(Egetd(0,2));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(13,4);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(13,4),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(x_0,ATmakeString("'id"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(14,2);
  goto i_74;
  i_74 :
  TestFunFC(k_8,&&fail,Egetd(14,2));
  MoveArg(14,3,14,2,0);
  MoveArg(14,4,14,2,1);
  goto j_74;
  j_74 :
  TestFunFC(k_8,&&fail,Egetd(14,4));
  MoveArg(14,5,14,4,0);
  MoveArg(14,6,14,4,1);
  goto k_74;
  k_74 :
  TestFunFC(m_8,&&fail,Egetd(14,6));
  Rpush(d_74);
  goto y_134;
  d_74 :
  goto c_74;
  y_134 :
  Epushd(15,1);
  NotNULLd(14,3);
  Tset(Egetd(14,3));
  Rpush(e_74);
  z_134 :
  Cpush(g_74);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(h_74);
  goto z_134;
  h_74 :
  AllBuild();
  goto f_74;
  g_74 :
  Ccall(_stratego_s_37);
  NotNULLd(14,5);
  Tset(Egetd(14,5));
  goto l_74;
  f_74 :
  Cpop();
  l_74 :
  Return();
  e_74 :
  MoveTop(15,1);
  NotNULLd(15,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("attrs"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(15,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(15,1);
  Return();
  c_74 :
  Epopd(14,6);
  Return();
  d_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("atr"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  e_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cons"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  f_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("constructor"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  g_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("memo"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  h_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("left"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  i_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("right"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  j_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  k_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("non-assoc"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  l_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("cf"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  m_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lex"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  n_134 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_c_36);
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("lit"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  o_134 :
  Epushd(14,1);
  NotNULLd(13,4);
  Tset(Egetd(13,4));
  Ccall(_stratego_a_36);
  MoveTop(14,1);
  NotNULLd(14,1);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("sort"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(t_26,Egetd(14,1)),(ATerm)ATmakeAppl0(y_0))));
  Epopd(14,1);
  Return();
  p_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("opt"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  q_134 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("seq"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,2)),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  r_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  s_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl0(y_0))));
  Return();
  t_134 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  u_134 :
  NotNULLd(13,4);
  NotNULLd(13,2);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("iter-star-sep"),(ATerm)ATmakeAppl2(l_0,Egetd(13,4),(ATerm)ATmakeAppl2(l_0,Egetd(13,2),(ATerm)ATmakeAppl0(y_0)))));
  Return();
  v_134 :
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("layout"),(ATerm)ATmakeAppl0(y_0)));
  Return();
  w_134 :
  NotNULLd(13,4);
  Tset((ATerm)ATmakeAppl2(x_0,ATmakeString("char-class"),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(r_26,Egetd(13,4)),(ATerm)ATmakeAppl0(y_0))));
  Return();
  d_73 :
  Epopd(13,4);
  goto b_73;
  t_72 :
  Cpop();
  b_73 :
  Return();
  s_72 :
  Tduplinv();
  goto p_72;
  q_72 :
  MoveTop(12,9);
  Move(10,12,12,9);
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(m_74);
  e_135 :
  Cpush(p_74);
  Ccall(_stratego_s_37);
  goto o_74;
  p_74 :
  Ccontinue(r_74);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_z_35);
  OneNextSon();
  Rpush(s_74);
  goto e_135;
  s_74 :
  AllBuild();
  goto o_74;
  r_74 :
  Epushd(13,3);
  MoveTop(13,1);
  goto q_74;
  q_74 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(w_74);
  goto f_135;
  w_74 :
  goto v_74;
  f_135 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(y_74);
  goto e_135;
  y_74 :
  Return();
  v_74 :
  Epopd(13,3);
  goto t_74;
  o_74 :
  Cpop();
  t_74 :
  Return();
  m_74 :
  MoveTop(12,10);
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,10);
  Tset((ATerm)ATmakeAppl2(w_27,(ATerm)ATmakeAppl1(a_1,Egetd(10,14)),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(12,10),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,13);
  Tpop();
  NotNULLd(10,15);
  Tset(Egetd(10,15));
  Rpush(d_75);
  i_135 :
  Cpush(g_75);
  Ccall(_stratego_s_37);
  goto f_75;
  g_75 :
  Ccontinue(j_75);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Ccall(_stratego_y_35);
  OneNextSon();
  Rpush(l_75);
  goto i_135;
  l_75 :
  AllBuild();
  goto f_75;
  j_75 :
  Epushd(13,3);
  MoveTop(13,1);
  goto u_74;
  u_74 :
  TestFunFC(l_0,&&fail,Egetd(13,1));
  MoveArg(13,2,13,1,0);
  MoveArg(13,3,13,1,1);
  Rpush(p_75);
  goto j_135;
  p_75 :
  goto o_75;
  j_135 :
  NotNULLd(13,3);
  Tset(Egetd(13,3));
  Rpush(t_75);
  goto i_135;
  t_75 :
  Return();
  o_75 :
  Epopd(13,3);
  goto n_75;
  f_75 :
  Cpop();
  n_75 :
  Return();
  d_75 :
  MoveTop(12,11);
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  Tdupl();
  NotNULLd(10,14);
  NotNULLd(12,11);
  Tset((ATerm)ATmakeAppl1(h_28,(ATerm)ATmakeAppl2(x_0,Egetd(10,14),Egetd(12,11))));
  MoveTop(10,16);
  Tpop();
  Epopd(12,11);
  Return();
  y_68 :
  Epopd(11,5);
  Tpop();
  NotNULLd(10,14);
  NotNULLd(10,3);
  NotNULLd(10,12);
  NotNULLd(10,7);
  NotNULLd(10,13);
  NotNULLd(10,9);
  NotNULLd(10,4);
  NotNULLd(10,16);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(j_28,Egetd(10,14),Egetd(10,3),Egetd(10,12)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,7),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,13)),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl3(k_28,Egetd(10,9),(ATerm)ATmakeAppl1(x_27,(ATerm)ATmakeAppl2(k_8,Egetd(10,4),(ATerm)ATmakeAppl0(m_8))),Egetd(10,16)),(ATerm)ATmakeAppl0(m_8)))));
  MoveTop(10,17);
  goto z_74;
  z_74 :
  TestFunFC(k_8,&&fail,Egetd(10,17));
  MoveArg(10,18,10,17,0);
  MoveArg(10,19,10,17,1);
  goto a_75;
  a_75 :
  TestFunFC(k_8,&&fail,Egetd(10,19));
  MoveArg(10,20,10,19,0);
  MoveArg(10,21,10,19,1);
  goto b_75;
  b_75 :
  TestFunFC(k_8,&&fail,Egetd(10,21));
  MoveArg(10,22,10,21,0);
  MoveArg(10,23,10,21,1);
  goto c_75;
  c_75 :
  TestFunFC(m_8,&&fail,Egetd(10,23));
  Rpush(v_75);
  goto m_135;
  v_75 :
  goto u_75;
  m_135 :
  Move(9,2,10,18);
  Move(9,3,10,20);
  Move(9,4,10,22);
  Return();
  u_75 :
  Epopd(10,23);
  Tpop();
  NotNULLd(9,4);
  Tset(Egetd(9,4));
  Epopd(9,4);
  OneNextSon();
  Rpush(w_75);
  goto u_132;
  w_75 :
  AllBuild();
  goto t_68;
  w_68 :
  Epushd(9,3);
  MoveTop(9,1);
  goto e_75;
  e_75 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(f_76);
  goto n_135;
  f_76 :
  goto y_75;
  n_135 :
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(h_76);
  goto u_132;
  h_76 :
  Return();
  y_75 :
  Epopd(9,3);
  goto x_75;
  t_68 :
  Cpop();
  x_75 :
  Return();
  s_68 :
  MoveTop(8,4);
  Move(7,4,8,4);
  Epopd(8,4);
  Tpop();
  NotNULLd(7,1);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(p_44,Egetd(7,1)),(ATerm)ATmakeAppl0(y_0)));
  Rpush(j_76);
  p_135 :
  Cpush(l_76);
  Ccall(_stratego_s_37);
  goto k_76;
  l_76 :
  Ccontinue(n_76);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(t_76);
  Tdupl();
  Epushd(8,2);
  MoveTop(8,1);
  goto h_75;
  h_75 :
  TestFunFC(p_44,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  goto i_75;
  i_75 :
  TestFunFC(y_0,&&fail,Egetd(8,2));
  Rpush(v_76);
  goto q_135;
  v_76 :
  goto u_76;
  q_135 :
  Return();
  u_76 :
  Epopd(8,2);
  Cpop();
  Crestore();
  Cjump();
  t_76 :
  OneNextSon();
  Rpush(b_77);
  goto p_135;
  b_77 :
  AllBuild();
  goto k_76;
  n_76 :
  Epushd(8,3);
  MoveTop(8,1);
  goto k_75;
  k_75 :
  TestFunFC(l_0,&&fail,Egetd(8,1));
  MoveArg(8,2,8,1,0);
  MoveArg(8,3,8,1,1);
  Rpush(k_77);
  goto r_135;
  k_77 :
  goto g_77;
  r_135 :
  NotNULLd(8,3);
  Tset(Egetd(8,3));
  Rpush(o_77);
  goto p_135;
  o_77 :
  Return();
  g_77 :
  Epopd(8,3);
  goto f_77;
  k_76 :
  Cpop();
  f_77 :
  Return();
  j_76 :
  MoveTop(7,5);
  NotNULLd(7,5);
  NotNULLd(7,2);
  NotNULLd(7,3);
  NotNULLd(7,4);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(h_21,Egetd(7,5)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(j_21,Egetd(7,2)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_21,Egetd(7,3)),(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_21,Egetd(7,4)),(ATerm)ATmakeAppl0(y_0))))));
  Epopd(7,5);
  Return();
  a_127 :
  NotNULLd(6,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(n_20,Egetd(6,2)),(ATerm)ATmakeAppl0(y_0)));
  Return();
  z_52 :
  MoveTop(6,3);
  NotNULLd(6,3);
  Tset((ATerm)ATmakeAppl2(l_0,Egetd(6,3),(ATerm)ATmakeAppl0(y_0)));
  Epopd(6,3);
  goto r_52;
  x_52 :
  Epushd(6,2);
  MoveTop(6,1);
  Tdupl();
  Epushd(7,5);
  NotNULLd(6,1);
  Tset(Egetd(6,1));
  _ST_explode_term();
  MoveTop(7,1);
  goto q_75;
  q_75 :
  TestFunFC(k_8,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  goto r_75;
  r_75 :
  TestFunFC(k_8,&&fail,Egetd(7,3));
  MoveArg(7,4,7,3,0);
  MoveArg(7,5,7,3,1);
  goto s_75;
  s_75 :
  TestFunFC(m_8,&&fail,Egetd(7,5));
  Rpush(r_77);
  goto v_135;
  r_77 :
  goto q_77;
  v_135 :
  Move(6,2,7,4);
  Return();
  q_77 :
  Epopd(7,5);
  Tpop();
  NotNULLd(6,2);
  Tset(Egetd(6,2));
  Rpush(s_77);
  w_135 :
  Cpush(b_78);
  Ccall(_stratego_s_37);
  Tset((ATerm)ATmakeAppl0(y_0));
  goto a_78;
  b_78 :
  Epushd(7,3);
  MoveTop(7,1);
  goto e_76;
  e_76 :
  TestFunFC(l_0,&&fail,Egetd(7,1));
  MoveArg(7,2,7,1,0);
  MoveArg(7,3,7,1,1);
  Rpush(j_78);
  goto x_135;
  j_78 :
  goto i_78;
  x_135 :
  Epushd(8,7);
  NotNULLd(7,2);
  Tset(Egetd(7,2));
  Rpush(i_79);
  goto u_126;
  i_79 :
  MoveTop(8,1);
  NotNULLd(7,3);
  Tset(Egetd(7,3));
  Rpush(j_79);
  goto w_135;
  j_79 :
  MoveTop(8,2);
  NotNULLd(8,1);
  NotNULLd(8,2);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(8,1),(ATerm)ATmakeAppl2(k_8,Egetd(8,2),(ATerm)ATmakeAppl0(m_8))));
  MoveTop(8,3);
  goto b_76;
  b_76 :
  TestFunFC(k_8,&&fail,Egetd(8,3));
  MoveArg(8,4,8,3,0);
  MoveArg(8,5,8,3,1);
  goto c_76;
  c_76 :
  TestFunFC(k_8,&&fail,Egetd(8,5));
  MoveArg(8,6,8,5,0);
  MoveArg(8,7,8,5,1);
  goto d_76;
  d_76 :
  TestFunFC(m_8,&&fail,Egetd(8,7));
  Rpush(p_79);
  goto a_136;
  p_79 :
  goto o_79;
  a_136 :
  NotNULLd(8,4);
  Tset(Egetd(8,4));
  Rpush(u_79);
  b_136 :
  Cpush(z_79);
  Ccall(_stratego_s_37);
  NotNULLd(8,6);
  Tset(Egetd(8,6));
  goto v_79;
  z_79 :
  Ccontinue(d_80);
  Epushd(9,3);
  MoveTop(9,1);
  goto a_76;
  a_76 :
  TestFunFC(l_0,&&fail,Egetd(9,1));
  MoveArg(9,2,9,1,0);
  MoveArg(9,3,9,1,1);
  Rpush(n_80);
  goto c_136;
  n_80 :
  goto e_80;
  c_136 :
  Tdupl();
  NotNULLd(8,6);
  Tset(Egetd(8,6));
  Rpush(o_80);
  d_136 :
  Cpush(s_80);
  Epushd(10,3);
  MoveTop(10,1);
  goto z_75;
  z_75 :
  TestFunFC(l_0,&&fail,Egetd(10,1));
  MoveArg(10,2,10,1,0);
  MoveArg(10,3,10,1,1);
  Rpush(a_81);
  goto e_136;
  a_81 :
  goto z_80;
  e_136 :
  Move(9,2,10,2);
  Return();
  z_80 :
  Epopd(10,3);
  goto p_80;
  s_80 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(c_81);
  goto d_136;
  c_81 :
  AllBuild();
  goto b_81;
  p_80 :
  Cpop();
  b_81 :
  Return();
  o_80 :
  Tpop();
  NotNULLd(9,3);
  Tset(Egetd(9,3));
  Rpush(d_81);
  goto b_136;
  d_81 :
  Return();
  e_80 :
  Epopd(9,3);
  goto v_79;
  d_80 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_81);
  goto b_136;
  g_81 :
  AllBuild();
  goto e_81;
  v_79 :
  Cpop();
  e_81 :
  Return();
  u_79 :
  Return();
  o_79 :
  Epopd(8,7);
  Return();
  i_78 :
  Epopd(7,3);
  goto e_78;
  a_78 :
  Cpop();
  e_78 :
  Return();
  s_77 :
  Epopd(6,2);
  goto p_77;
  r_52 :
  Cpop();
  p_77 :
  Return();
  q_52 :
  Ccall(_stratego_x_35);
  MoveTop(5,1);
  Move(4,1,5,1);
  Epopd(5,1);
  Tpop();
  NotNULLd(4,1);
  Tset(Egetd(4,1));
  Epopd(4,1);
  Return();
  g_52 :
  Epopd(3,2);
  OneNextSon();
  Rpush(m_81);
  goto s_126;
  m_81 :
  AllBuild();
  goto x_51;
  f_52 :
  Epushd(3,3);
  MoveTop(3,1);
  goto i_76;
  i_76 :
  TestFunFC(l_0,&&fail,Egetd(3,1));
  MoveArg(3,2,3,1,0);
  MoveArg(3,3,3,1,1);
  Rpush(q_81);
  goto g_136;
  q_81 :
  goto p_81;
  g_136 :
  NotNULLd(3,3);
  Tset(Egetd(3,3));
  Rpush(r_81);
  goto s_126;
  r_81 :
  Return();
  p_81 :
  Epopd(3,3);
  goto n_81;
  x_51 :
  Cpop();
  n_81 :
  Return();
  w_51 :
  Ccall(_stratego_x_35);
  MoveTop(2,2);
  Move(1,2,2,2);
  Tset((ATerm)ATmakeAppl1(n_20,(ATerm)ATmakeAppl2(l_0,ATmakeString("Prelude"),(ATerm)ATmakeAppl0(y_0))));
  Tdupl();
  Tset((ATerm)ATmakeAppl1(n_20,(ATerm)ATmakeAppl2(l_0,ATmakeString("Prelude"),(ATerm)ATmakeAppl0(y_0))));
  MoveTop(1,3);
  Tpop();
  Epopd(2,2);
  Tpop();
  NotNULLd(1,3);
  NotNULLd(1,1);
  NotNULLd(1,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl2(l_0,Egetd(1,3),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl2(l_0,Egetd(1,1),(ATerm)ATmakeAppl2(l_0,Egetd(1,2),(ATerm)ATmakeAppl0(y_0)))));
  Ccall(_stratego_x_35);
  MoveTop(1,4);
  NotNULLd(0,2);
  NotNULLd(1,4);
  Tset((ATerm)ATmakeAppl2(w_49,Egetd(0,2),Egetd(1,4)));
  Epopd(1,4);
  Return();
  f_51 :
  Epopd(0,4);
  OneNextSon();
  Rpush(s_81);
  goto m_126;
  s_81 :
  AllBuild();
  goto a_51;
  c_51 :
  Epushd(0,3);
  MoveTop(0,1);
  goto o_76;
  o_76 :
  TestFunFC(l_0,&&fail,Egetd(0,1));
  MoveArg(0,2,0,1,0);
  MoveArg(0,3,0,1,1);
  Rpush(v_81);
  goto k_136;
  v_81 :
  goto u_81;
  k_136 :
  NotNULLd(0,3);
  Tset(Egetd(0,3));
  Rpush(x_81);
  goto m_126;
  x_81 :
  Return();
  u_81 :
  Epopd(0,3);
  goto t_81;
  a_51 :
  Cpop();
  t_81 :
  Return();
  q_50 :
  AllBuild();
  goto p_50;
  x_19 :
  Cpop();
  p_50 :
ENDPROC

PROC(_stratego_b_37)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_136;
  m_136 :
  TestFunFC(m_8,&&fail,Egetd(0,1));
  Rpush(a_82);
  goto o_136;
  a_82 :
  goto y_81;
  o_136 :
  Return();
  y_81 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_c_37)
  Epushd(0,1);
  Tdupl();
  Rpush(b_82);
  x_136 :
  Cpush(d_82);
  Epushd(1,4);
  MoveTop(1,1);
  goto q_136;
  q_136 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto r_136;
  r_136 :
  TestFunFC(g_82,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(f_82);
  goto y_136;
  f_82 :
  goto e_82;
  y_136 :
  Move(0,1,1,3);
  Return();
  e_82 :
  Epopd(1,4);
  goto c_82;
  d_82 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(i_82);
  goto x_136;
  i_82 :
  AllBuild();
  goto h_82;
  c_82 :
  Cpop();
  h_82 :
  Return();
  b_82 :
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl0(j_82),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,ATmakeString("usage : "),(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl2(l_0,ATmakeString(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"),(ATerm)ATmakeAppl0(y_0)))),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_f_37);
  Tset(MakeInt(1));
  Ccall(_stratego_e_37);
  Tpop();
  Epopd(0,1);
ENDPROC

PROC(_stratego_d_37)
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl0(j_82),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,ATmakeString("rewriting failed"),(ATerm)ATmakeAppl0(y_0)),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_f_37);
  Tset(MakeInt(1));
  Ccall(_stratego_e_37);
ENDPROC

PROC(_stratego_e_37)
  _ST_exit();
ENDPROC

PROC(_stratego_f_37)
  _ST_printnl();
ENDPROC

PROC(_stratego_g_37)
  Epushd(0,2);
  Tdupl();
  Cpush(p_82);
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Cpush(q_82);
  Tdupl();
  Rpush(s_82);
  v_137 :
  Cpush(x_82);
  Epushd(1,3);
  MoveTop(1,1);
  goto a_137;
  a_137 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto b_137;
  b_137 :
  TestFunFC(b_83,&&fail,Egetd(1,2));
  Rpush(a_83);
  goto w_137;
  a_83 :
  goto y_82;
  w_137 :
  Return();
  y_82 :
  Epopd(1,3);
  goto t_82;
  x_82 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(n_83);
  goto v_137;
  n_83 :
  AllBuild();
  goto m_83;
  t_82 :
  Cpop();
  m_83 :
  Return();
  s_82 :
  Cpop();
  Crestore();
  Cjump();
  q_82 :
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Rpush(q_83);
  x_137 :
  Cpush(v_83);
  Epushd(1,4);
  MoveTop(1,1);
  goto d_137;
  d_137 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto e_137;
  e_137 :
  TestFunFC(a_85,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(v_84);
  goto y_137;
  v_84 :
  goto u_84;
  y_137 :
  Move(0,2,1,3);
  Return();
  u_84 :
  Epopd(1,4);
  goto u_83;
  v_83 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(g_85);
  goto x_137;
  g_85 :
  AllBuild();
  goto b_85;
  u_83 :
  Cpop();
  b_85 :
  Return();
  q_83 :
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Rpush(h_85);
  z_137 :
  Cpush(p_85);
  Epushd(1,4);
  MoveTop(1,1);
  goto g_137;
  g_137 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto h_137;
  h_137 :
  TestFunFC(g_82,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(z_85);
  goto a_138;
  z_85 :
  goto q_85;
  a_138 :
  Move(0,1,1,3);
  Return();
  q_85 :
  Epopd(1,4);
  goto l_85;
  p_85 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_86);
  goto z_137;
  j_86 :
  AllBuild();
  goto a_86;
  l_85 :
  Cpop();
  a_86 :
  Return();
  h_85 :
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl0(j_82),(ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,Egetd(0,1),(ATerm)ATmakeAppl2(l_0,ATmakeString(" ("),(ATerm)ATmakeAppl2(l_0,Egetd(0,2),(ATerm)ATmakeAppl2(l_0,ATmakeString(" secs)"),(ATerm)ATmakeAppl0(y_0))))),(ATerm)ATmakeAppl0(m_8))));
  Ccall(_stratego_f_37);
  goto k_82;
  p_82 :
  goto k_86;
  k_82 :
  Cpop();
  k_86 :
  Tpop();
  Tset(MakeInt(0));
  Ccall(_stratego_e_37);
  Epopd(0,2);
ENDPROC

PROC(_stratego_h_37)
  _ST_WriteToTextFile();
ENDPROC

PROC(_stratego_i_37)
  _ST_WriteToBinaryFile();
ENDPROC

PROC(_stratego_j_37)
  Epushd(0,1);
  Tdupl();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Cpush(m_86);
  Rpush(n_86);
  a_139 :
  Cpush(q_86);
  Epushd(1,4);
  MoveTop(1,1);
  goto c_138;
  c_138 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto d_138;
  d_138 :
  TestFunFC(z_86,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(x_86);
  goto b_139;
  x_86 :
  goto w_86;
  b_139 :
  Move(0,1,1,3);
  Return();
  w_86 :
  Epopd(1,4);
  goto o_86;
  q_86 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(b_87);
  goto a_139;
  b_87 :
  AllBuild();
  goto a_87;
  o_86 :
  Cpop();
  a_87 :
  Return();
  n_86 :
  goto l_86;
  m_86 :
  Tset((ATerm)ATmakeAppl0(d_87));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(d_87));
  MoveTop(0,1);
  Tpop();
  goto c_87;
  l_86 :
  Cpop();
  c_87 :
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  Tpop();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(0,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl2(k_8,Egetd(1,1),(ATerm)ATmakeAppl0(m_8))));
  Epopd(1,1);
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  Cpush(g_87);
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Rpush(h_87);
  g_139 :
  Cpush(k_87);
  Epushd(1,3);
  MoveTop(1,1);
  goto j_138;
  j_138 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  goto k_138;
  k_138 :
  TestFunFC(n_87,&&fail,Egetd(1,2));
  Rpush(m_87);
  goto h_139;
  m_87 :
  goto l_87;
  h_139 :
  Return();
  l_87 :
  Epopd(1,3);
  goto j_87;
  k_87 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_87);
  goto g_139;
  p_87 :
  AllBuild();
  goto o_87;
  j_87 :
  Cpop();
  o_87 :
  Return();
  h_87 :
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Ccall(_stratego_i_37);
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  goto e_87;
  g_87 :
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Ccall(_stratego_h_37);
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  goto q_87;
  e_87 :
  Cpop();
  q_87 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_k_37)
  _ST_dtime();
ENDPROC

PROC(_stratego_l_37)
  _ST_ReadFromFile();
ENDPROC

PROC(_stratego_m_37)
  Epushd(0,3);
  Tdupl();
  Cpush(s_87);
  Rpush(t_87);
  b_140 :
  Cpush(z_87);
  Epushd(1,4);
  MoveTop(1,1);
  goto j_139;
  j_139 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,4,1,1,1);
  goto k_139;
  k_139 :
  TestFunFC(g_88,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  Rpush(c_88);
  goto c_140;
  c_88 :
  goto b_88;
  c_140 :
  Move(0,1,1,3);
  Return();
  b_88 :
  Epopd(1,4);
  goto y_87;
  z_87 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(j_88);
  goto b_140;
  j_88 :
  AllBuild();
  goto h_88;
  y_87 :
  Cpop();
  h_88 :
  Return();
  t_87 :
  goto r_87;
  s_87 :
  Tset((ATerm)ATmakeAppl0(u_88));
  Tdupl();
  Tset((ATerm)ATmakeAppl0(u_88));
  MoveTop(0,1);
  Tpop();
  goto k_88;
  r_87 :
  Cpop();
  k_88 :
  Tpop();
  MoveTop(0,2);
  NotNULLd(0,1);
  Tset(Egetd(0,1));
  Ccall(_stratego_l_37);
  MoveTop(0,3);
  NotNULLd(0,2);
  NotNULLd(0,3);
  Tset((ATerm)ATmakeAppl2(k_8,Egetd(0,2),(ATerm)ATmakeAppl2(k_8,Egetd(0,3),(ATerm)ATmakeAppl0(m_8))));
  Epopd(0,3);
ENDPROC

PROC(_stratego_n_37)
  Epushd(0,1);
  MoveTop(0,1);
  goto i_140;
  i_140 :
  TestFunFC(a_89,&&fail,Egetd(0,1));
  Rpush(x_88);
  goto k_140;
  x_88 :
  goto w_88;
  k_140 :
  Return();
  w_88 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_o_37)
  Epushd(0,1);
  MoveTop(0,1);
  goto m_140;
  m_140 :
  TestFunFC(g_89,&&fail,Egetd(0,1));
  Rpush(f_89);
  goto o_140;
  f_89 :
  goto c_89;
  o_140 :
  Return();
  c_89 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_p_37)
  _ST_table_put();
ENDPROC

PROC(_stratego_q_37)
  _ST_create_table();
ENDPROC

PROC(_stratego_r_37)
  Epushd(0,5);
  MoveTop(0,3);
  goto c_143;
  c_143 :
  TestFunFC(l_0,&&fail,Egetd(0,3));
  MoveArg(0,4,0,3,0);
  MoveArg(0,5,0,3,1);
  goto d_143;
  d_143 :
  TestFunFC(l_0,&&h_90,Egetd(0,5));
  MoveArg(0,1,0,5,0);
  MoveArg(0,2,0,5,1);
  Cpush(n_90);
  Rpush(s_90);
  goto v_146;
  s_90 :
  goto m_90;
  n_90 :
  Ccontinue(t_90);
  Rpush(x_90);
  goto w_146;
  x_90 :
  goto m_90;
  t_90 :
  Ccontinue(b_91);
  Rpush(c_91);
  goto x_146;
  c_91 :
  goto m_90;
  b_91 :
  Ccontinue(l_91);
  Rpush(m_91);
  goto y_146;
  m_91 :
  goto m_90;
  l_91 :
  Ccontinue(v_91);
  Rpush(w_91);
  goto z_146;
  w_91 :
  goto m_90;
  v_91 :
  Ccontinue(x_91);
  Rpush(y_91);
  goto a_147;
  y_91 :
  goto m_90;
  x_91 :
  Ccontinue(z_91);
  Rpush(a_92);
  goto b_147;
  a_92 :
  goto m_90;
  z_91 :
  Ccontinue(c_92);
  Rpush(i_92);
  goto c_147;
  i_92 :
  goto m_90;
  c_92 :
  Ccontinue(j_92);
  Rpush(l_92);
  goto d_147;
  l_92 :
  goto m_90;
  j_92 :
  Ccontinue(m_92);
  Rpush(n_92);
  goto e_147;
  n_92 :
  goto m_90;
  m_92 :
  Ccontinue(o_92);
  Rpush(p_92);
  goto f_147;
  p_92 :
  goto m_90;
  o_92 :
  Ccontinue(q_92);
  Rpush(s_92);
  goto g_147;
  s_92 :
  goto m_90;
  q_92 :
  Ccontinue(t_92);
  Rpush(v_92);
  goto h_147;
  v_92 :
  goto m_90;
  t_92 :
  Ccontinue(w_92);
  Rpush(x_92);
  goto i_147;
  x_92 :
  goto m_90;
  w_92 :
  Rpush(z_92);
  goto j_147;
  z_92 :
  goto y_92;
  m_90 :
  Cpop();
  y_92 :
  goto g_90;
  h_90 :
  Cpush(b_93);
  Rpush(c_93);
  goto v_146;
  c_93 :
  goto a_93;
  b_93 :
  Ccontinue(d_93);
  Rpush(e_93);
  goto w_146;
  e_93 :
  goto a_93;
  d_93 :
  Ccontinue(f_93);
  Rpush(k_93);
  goto x_146;
  k_93 :
  goto a_93;
  f_93 :
  Ccontinue(l_93);
  Rpush(n_93);
  goto y_146;
  n_93 :
  goto a_93;
  l_93 :
  Ccontinue(o_93);
  Rpush(s_93);
  goto z_146;
  s_93 :
  goto a_93;
  o_93 :
  Ccontinue(t_93);
  Rpush(v_93);
  goto f_147;
  v_93 :
  goto a_93;
  t_93 :
  Ccontinue(w_93);
  Rpush(h_94);
  goto g_147;
  h_94 :
  goto a_93;
  w_93 :
  Ccontinue(i_94);
  Rpush(p_94);
  goto h_147;
  p_94 :
  goto a_93;
  i_94 :
  Ccontinue(q_94);
  Rpush(s_94);
  goto i_147;
  s_94 :
  goto a_93;
  q_94 :
  Rpush(v_94);
  goto j_147;
  v_94 :
  goto t_94;
  a_93 :
  Cpop();
  t_94 :
  goto g_90;
  g_90 :
  goto k_89;
  v_146 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto f_141;
  f_141 :
  TestStr(1,1,"-S",&&fail);
  Rpush(h_95);
  goto k_147;
  h_95 :
  goto y_94;
  k_147 :
  Return();
  y_94 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_83));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(b_83),Egetd(0,5)));
  Return();
  w_146 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto i_141;
  i_141 :
  TestStr(1,1,"--silent",&&fail);
  Rpush(k_95);
  goto m_147;
  k_95 :
  goto i_95;
  m_147 :
  Return();
  i_95 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(b_83));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(b_83),Egetd(0,5)));
  Return();
  x_146 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto l_141;
  l_141 :
  TestStr(1,1,"--verbose",&&fail);
  Rpush(s_95);
  goto o_147;
  s_95 :
  goto m_95;
  o_147 :
  Return();
  m_95 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(t_95));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(t_95),Egetd(0,5)));
  Return();
  y_146 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_141;
  o_141 :
  TestStr(1,1,"-v",&&fail);
  Rpush(y_95);
  goto q_147;
  y_95 :
  goto x_95;
  q_147 :
  Return();
  x_95 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_89));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(a_89),Egetd(0,5)));
  Return();
  z_146 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_141;
  r_141 :
  TestStr(1,1,"--version",&&fail);
  Rpush(h_96);
  goto s_147;
  h_96 :
  goto g_96;
  s_147 :
  Return();
  g_96 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(a_89));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(a_89),Egetd(0,5)));
  Return();
  a_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_141;
  u_141 :
  TestStr(1,1,"@version",&&fail);
  Rpush(l_96);
  goto u_147;
  l_96 :
  goto j_96;
  u_147 :
  Return();
  j_96 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(p_96,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(p_96,Egetd(0,1)),Egetd(0,2)));
  Return();
  b_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto y_141;
  y_141 :
  TestStr(1,1,"-i",&&fail);
  Rpush(v_96);
  goto x_147;
  v_96 :
  goto q_96;
  x_147 :
  Return();
  q_96 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_88,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(g_88,Egetd(0,1)),Egetd(0,2)));
  Return();
  c_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto c_142;
  c_142 :
  TestStr(1,1,"--input",&&fail);
  Rpush(x_96);
  goto a_148;
  x_96 :
  goto w_96;
  a_148 :
  Return();
  w_96 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(g_88,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(g_88,Egetd(0,1)),Egetd(0,2)));
  Return();
  d_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto g_142;
  g_142 :
  TestStr(1,1,"-o",&&fail);
  Rpush(h_97);
  goto d_148;
  h_97 :
  goto d_97;
  d_148 :
  Return();
  d_97 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(z_86,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(z_86,Egetd(0,1)),Egetd(0,2)));
  Return();
  e_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto k_142;
  k_142 :
  TestStr(1,1,"--output",&&fail);
  Rpush(m_97);
  goto g_148;
  m_97 :
  goto i_97;
  g_148 :
  Return();
  i_97 :
  Epopd(1,1);
  Tpop();
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl1(z_86,Egetd(0,1)));
  NotNULLd(0,1);
  NotNULLd(0,2);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(z_86,Egetd(0,1)),Egetd(0,2)));
  Return();
  f_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto o_142;
  o_142 :
  TestStr(1,1,"-b",&&fail);
  Rpush(r_97);
  goto j_148;
  r_97 :
  goto q_97;
  j_148 :
  Return();
  q_97 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(n_87));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(n_87),Egetd(0,5)));
  Return();
  g_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto r_142;
  r_142 :
  TestStr(1,1,"-s",&&fail);
  Rpush(t_97);
  goto l_148;
  t_97 :
  goto s_97;
  l_148 :
  Return();
  s_97 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(u_97));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(u_97),Egetd(0,5)));
  Return();
  h_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto u_142;
  u_142 :
  TestStr(1,1,"--help",&&fail);
  Rpush(d_98);
  goto n_148;
  d_98 :
  goto c_98;
  n_148 :
  Return();
  c_98 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(g_89));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(g_89),Egetd(0,5)));
  Return();
  i_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto x_142;
  x_142 :
  TestStr(1,1,"-h",&&fail);
  Rpush(k_98);
  goto p_148;
  k_98 :
  goto g_98;
  p_148 :
  Return();
  g_98 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(g_89));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(g_89),Egetd(0,5)));
  Return();
  j_147 :
  Tdupl();
  Epushd(1,1);
  NotNULLd(0,4);
  Tset(Egetd(0,4));
  MoveTop(1,1);
  goto a_143;
  a_143 :
  TestStr(1,1,"-?",&&fail);
  Rpush(k_99);
  goto r_148;
  k_99 :
  goto l_98;
  r_148 :
  Return();
  l_98 :
  Epopd(1,1);
  Tpop();
  Tset((ATerm)ATmakeAppl0(g_89));
  NotNULLd(0,5);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl0(g_89),Egetd(0,5)));
  Return();
  k_89 :
  Epopd(0,5);
ENDPROC

PROC(_stratego_s_37)
  Epushd(0,1);
  MoveTop(0,1);
  goto u_148;
  u_148 :
  TestFunFC(y_0,&&fail,Egetd(0,1));
  Rpush(q_99);
  goto w_148;
  q_99 :
  goto l_99;
  w_148 :
  Return();
  l_99 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_t_37)
  Epushd(0,1);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Epushd(1,1);
  MoveTop(1,1);
  NotNULLd(1,1);
  Tset((ATerm)ATmakeAppl1(g_82,Egetd(1,1)));
  Epopd(1,1);
  OneNextSon();
  Rpush(r_99);
  d_150 :
  Cpush(x_99);
  Cpush(f_100);
  Ccall(_stratego_s_37);
  goto b_100;
  f_100 :
  Ccall(_stratego_r_37);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(p_100);
  goto d_150;
  p_100 :
  AllBuild();
  goto g_100;
  b_100 :
  Cpop();
  g_100 :
  goto w_99;
  x_99 :
  Epushd(1,3);
  MoveTop(1,1);
  goto z_148;
  z_148 :
  TestFunFC(l_0,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  MoveArg(1,3,1,1,1);
  Rpush(a_101);
  goto e_150;
  a_101 :
  goto z_100;
  e_150 :
  NotNULLd(1,2);
  NotNULLd(1,3);
  Tset((ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(b_101,Egetd(1,2)),Egetd(1,3)));
  Return();
  z_100 :
  Epopd(1,3);
  goto q_100;
  w_99 :
  Cpop();
  q_100 :
  Return();
  r_99 :
  AllBuild();
  MoveTop(0,1);
  Tdupl();
  Tset(ATmakeString("option-table"));
  Ccall(_stratego_q_37);
  NotNULLd(0,1);
  Tset((ATerm)ATmakeAppl2(k_8,ATmakeString("option-table"),(ATerm)ATmakeAppl2(k_8,ATmakeString("options"),(ATerm)ATmakeAppl2(k_8,Egetd(0,1),(ATerm)ATmakeAppl0(m_8)))));
  Ccall(_stratego_p_37);
  Tpop();
  Cpush(d_101);
  Rpush(e_101);
  g_150 :
  Cpush(m_101);
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  Cpush(p_101);
  Ccall(_stratego_o_37);
  goto n_101;
  p_101 :
  Ccontinue(q_101);
  Epushd(1,2);
  MoveTop(1,1);
  goto c_149;
  c_149 :
  TestFunFC(b_101,&&fail,Egetd(1,1));
  MoveArg(1,2,1,1,0);
  Rpush(s_101);
  goto h_150;
  s_101 :
  goto r_101;
  h_150 :
  Return();
  r_101 :
  Epopd(1,2);
  goto n_101;
  q_101 :
  Ccall(_stratego_n_37);
  goto t_101;
  n_101 :
  Cpop();
  t_101 :
  OneNextSon();
  AllBuild();
  goto g_101;
  m_101 :
  TestFunTop(l_0);
  TravInit();
  OneNextSon();
  OneNextSon();
  Rpush(w_101);
  goto g_150;
  w_101 :
  AllBuild();
  goto u_101;
  g_101 :
  Cpop();
  u_101 :
  Return();
  e_101 :
  Ccall(_stratego_c_37);
  goto c_101;
  d_101 :
  Ccontinue(x_101);
  Epushd(1,6);
  Ccall(_stratego_m_37);
  Tdupl();
  Ccall(_stratego_k_37);
  Tpop();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  OneNextSon();
  TestFunTop(k_8);
  TravInit();
  OneNextSon();
  Ccall(_stratego_a_37);
  OneNextSon();
  Ccall(_stratego_b_37);
  AllBuild();
  AllBuild();
  Tdupl();
  Epushd(2,1);
  Ccall(_stratego_k_37);
  MoveTop(2,1);
  Move(1,1,2,1);
  Epopd(2,1);
  Tpop();
  MoveTop(1,2);
  goto f_149;
  f_149 :
  TestFunFC(k_8,&&fail,Egetd(1,2));
  MoveArg(1,3,1,2,0);
  MoveArg(1,4,1,2,1);
  goto g_149;
  g_149 :
  TestFunFC(k_8,&&fail,Egetd(1,4));
  MoveArg(1,5,1,4,0);
  MoveArg(1,6,1,4,1);
  goto h_149;
  h_149 :
  TestFunFC(m_8,&&fail,Egetd(1,6));
  Rpush(a_102);
  goto j_150;
  a_102 :
  goto z_101;
  j_150 :
  NotNULLd(1,1);
  NotNULLd(1,3);
  NotNULLd(1,5);
  Tset((ATerm)ATmakeAppl2(k_8,(ATerm)ATmakeAppl2(l_0,(ATerm)ATmakeAppl1(a_85,Egetd(1,1)),Egetd(1,3)),(ATerm)ATmakeAppl2(k_8,Egetd(1,5),(ATerm)ATmakeAppl0(m_8))));
  Return();
  z_101 :
  Ccall(_stratego_j_37);
  Ccall(_stratego_g_37);
  Epopd(1,6);
  goto c_101;
  x_101 :
  Ccall(_stratego_d_37);
  goto b_102;
  c_101 :
  Cpop();
  b_102 :
  Epopd(0,1);
ENDPROC

PROC(_stratego_main)
  Ccall(_stratego_t_37);
ENDPROC

DOIT

