//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include <iostream>
#include <fstream>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
String b;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)//������� ��������
{
Close();
ofstream fan ("temp.txt");
if (!fan.is_open()) // ���� ���� �� ������
ShowMessage("�� ������� ������� ����������");
else
fan.close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)//������� �������� � �������� ��
{
for (int i=0; i < PageControl1->PageCount; ++i)
PageControl1->Pages[i]->TabVisible = false;
PageControl1->ActivePage = TabSheet4;
ADOTable1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)// ������� � �����
{
PageControl1->ActivePage = TabSheet2;
b = DataSource2->DataSet->FieldByName("Predmet")->Value;
ADOQuery1->Close();
ADOQuery1->SQL->Clear();
if (b=="����������")
ADOQuery1->SQL->Text ="SELECT * FROM Tema WHERE Kod_tema LIKE '1%'";
if (b=="������")
ADOQuery1->SQL->Text ="SELECT * FROM Tema WHERE Kod_tema LIKE '2%'";
ADOTable1->Close();
ADOQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn3Click(TObject *Sender)// ����� � ���������
{
PageControl1->ActivePage = TabSheet1;
ADOQuery1->Close();
ADOTable1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn4Click(TObject *Sender)  //������� � ��������
{
PageControl1->ActivePage = TabSheet3;
b = DataSource1->DataSet->FieldByName("Kod_tema")->Value;
ADOQuery2->Close();
ADOQuery2->SQL->Clear();
if (b=="1.1.0")
ADOQuery2->SQL->Text ="SELECT * FROM Razdel WHERE Kod LIKE  '1.1%'";
if (b=="1.2.0")
ADOQuery2->SQL->Text ="SELECT * FROM Razdel WHERE Kod LIKE  '1.2.%'";
if (b=="2.1.0")
ADOQuery2->SQL->Text ="SELECT * FROM Razdel WHERE Kod LIKE  '2.1.%'";
if (b=="2.2.0")
ADOQuery2->SQL->Text ="SELECT * FROM Razdel WHERE Kod LIKE  '2.2.%'";
ADOQuery2->Open();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn8Click(TObject *Sender)// ����� � �����
{
ADOQuery2->Close();
PageControl1->ActivePage = TabSheet2;
ADOQuery1->Close();
ADOQuery1->Open();     
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn7Click(TObject *Sender)//��������
{

Form5->Show();
Form5->DBRichEdit1->DataField = "praktika";
b = DataSource4->DataSet->FieldByName("Kod")->Value;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)// ����
{
Form4->Show();
Form4->DBRichEdit1->DataField = "test";
b = DataSource1->DataSet->FieldByName("Kod_tema")->Value;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn9Click(TObject *Sender)// ������ ��������
{
PageControl1->ActivePage = TabSheet1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn11Click(TObject *Sender)// ��������� ��������
{
PageControl1->ActivePage = TabSheet4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn10Click(TObject *Sender)// �����
{
PageControl1->ActivePage = TabSheet5;
StringGrid1->Cells[0][0]="����/������";
StringGrid1->Cells[1][0]="��������";
StringGrid1->Cells[2][0]="����������";
StringGrid1->Cells[3][0]="��";


ifstream fin("temp.txt");
if (!fin.is_open()) // ���� ���� �� ������
ShowMessage("���� �� ������");
else
{
int i=1;
string str = "";
while (!fin.eof())
{
StringGrid1->RowCount= StringGrid1->RowCount+1;
for (int f=0;f<4;f++)
{
getline(fin,str);
StringGrid1->Cells[f][i]= str.c_str();
}
i++;
}

}
fin.close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn13Click(TObject *Sender)// ��������� � ������
{
PageControl1->ActivePage = TabSheet4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn14Click(TObject *Sender)//� ������ �� � ���������
{
PageControl1->ActivePage = TabSheet4;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn12Click(TObject *Sender)//� ���������
{
PageControl1->ActivePage = TabSheet6;        
}
//---------------------------------------------------------------------------



void __fastcall TForm1::BitBtn15Click(TObject *Sender)//������ ������
{
TPrinter *printer = Printer();
        printer->BeginDoc();
        printer->Canvas->TextOut(100,100,"��������� ���� � �������");
        printer->Canvas->TextOut(100,200,"����/������");
        printer->Canvas->TextOut(600,200,"��������");
        printer->Canvas->TextOut(1900,200,"����������");
        printer->Canvas->TextOut(2450,200,"��");
        for(int i=1; i<StringGrid1->RowCount-2; i++)
        {
        printer->Canvas->TextOut(100,200*i+300,StringGrid1->Cells[0][i]);
        printer->Canvas->TextOut(500,200*i+300,StringGrid1->Cells[1][i]);
        printer->Canvas->TextOut(2000,200*i+300,StringGrid1->Cells[2][i]);
        printer->Canvas->TextOut(2500,200*i+300,StringGrid1->Cells[3][i]);
        }    
        printer->EndDoc();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn17Click(TObject *Sender)// �������� ������
{
ofstream fan ("resultat.txt");
if (!fan.is_open()) // ���� ���� �� ������
ShowMessage("�� ������� ��������");
else
fan.close();
ShowMessage("������ �������.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn16Click(TObject *Sender) //���������� ������
{
ofstream AllOrder("resultat.txt", ios::app);
for(int i = 0; i < StringGrid1->RowCount; i++)
{
StringGrid1->Rows[i]->Delimiter = ' ';
String s = StringGrid1->Rows[i]->DelimitedText;
std::string st(AnsiString(s).c_str());
AllOrder << st << endl;
}
AllOrder.close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn6Click(TObject *Sender)//������
{
Form2->Show();
Form2->DBRichEdit1->DataField = "Teoria";
}
//---------------------------------------------------------------------------



