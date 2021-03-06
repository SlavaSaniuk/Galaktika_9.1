//------------------------------------------------------------------------------
//                                                      (c) ��௮��� �����⨪�
// �����⨪� 8.10 - ������ �����⨪�
// �᭮��� ����⠭�� ������ �����⨪�
//------------------------------------------------------------------------------

#ifndef __oper_inc__
#define __oper_inc__

// ����⠭�� ����� ��� ��� ���� TekMC.SP
cgVidUch_Sklad = 0;         // �����᪮� ���
cgVidUch_UPL   = 0; // 1;   // ��� � ���㫥 "��ࠢ����� �ந�����⢥���� �����⨪��"
cgVidUch_TORO  = 0; // 2;   // ��� � ���㫥 "��孨�᪮� ���㦨����� � ६��� ����㤮�����"
cgVidUch_UKS   = 0; // 3;   // ��� � ���㫥 "��ࠢ����� ����⠫�묨 �������ﬨ � ��ந⥫��⢮�"

// ����⠭�� ����� ��� ��� ���� SklOrder.SP
cgVidUchO_FIRST = 0;   // ��� �ᯮ�짮����� � 横��� �� ����� ���, ����. for(v:=cgVidUchO_FIRST; v<=cgVidUchO_LAST; v++) {...
cgVidUchO_Sklad = 0;   // �����᪮� ���
cgVidUchO_UPL   = 1;   // ��� � ���㫥 "��ࠢ����� �ந�����⢥���� �����⨪��"
cgVidUchO_TORO  = 2;   // ��� � ���㫥 "��孨�᪮� ���㦨����� � ६��� ����㤮�����"
cgVidUchO_UKS   = 3;   // ��� � ���㫥 "��ࠢ����� ����⠫�묨 �������ﬨ � ��ந⥫��⢮�"
cgVidUchO_LAST  = cgVidUchO_UKS; // ��� �ᯮ�짮����� � 横��� �� ����� ���, ����. for(v:=cgVidUchO_FIRST; v<=cgVidUchO_LAST; v++) {...

// ����⠭�� ����� ����権 ��� ���� SklOrder.VidOrder
cgVidOrder_Receipt   = 0; // ��室
cgVidOrder_Discharge = 1; // ��室

// ��⮢�� ��᪠ ����� ���
cgVidUchRun_Sklad = 0000010b; // �����
cgVidUchRun_UPL   = 0000100b; // �ந�����⢮
cgVidUchRun_TORO  = 0001000b; // �������
cgVidUchRun_UKS   = 0010000b; // ��ந⥫��⢮
cgVidUchRun_All   = 0011110b; // �� ���� ���

// �ਧ��� �� ��� ��㣨 � ᮯ஢���⥫��� ���㬥��� (SpSopr.PrMC)
cgPr_None = 0; // �� ��।����
cgPr_MC   = 1; // ��
cgPr_Usl  = 2; // ��㣠

#end