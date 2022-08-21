//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
#include <iostream>
#include <fstream>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
extern String b;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender)//закрыть тест
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn2Click(TObject *Sender)//проверка теста
{
String z;
int t=0;
z = Form1->DataSource1->DataSet->FieldByName("Tema")->Value;
if (b=="1.1.0")
{
if(Edit1->Text == "x<8")
t=t+1;
if(Edit2->Text == "x<-0,05")
t=t+1;
if(Edit3->Text == "x>5")
t=t+1;
if(Edit4->Text == "x<1")
t=t+1;
}
if (b=="1.2.0")
{
if(Edit1->Text == "2")
t=t+1;
if(Edit2->Text == "2")
t=t+1;
if(Edit3->Text == "4")
t=t+1;
if(Edit4->Text == "4")
t=t+1;
}
if (b=="2.1.0")
{
if(Edit1->Text == "1")
t=t+1;
if(Edit2->Text == "2")
t=t+1;
if(Edit3->Text == "3")
t=t+1;
if(Edit4->Text == "4")
t=t+1;
}
if (b=="2.2.0")
{
if(Edit1->Text == "1")
t=t+1;
if(Edit2->Text == "2")
t=t+1;
if(Edit3->Text == "3")
t=t+1;
if(Edit4->Text == "4")
t=t+1;
}
ShowMessage("правильно " + (IntToStr(t)) + " из 4");
ofstream fan ("temp.txt",ios::app);
if (!fan.is_open()) // если файл не открыт
ShowMessage("Файл не открыт");
else
{
fan <<"Тема" <<endl;
fan <<z.c_str()<<endl;
fan <<t<< endl;
fan <<"4"<<endl;
}
fan.close();
t=0;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormShow(TObject *Sender)
{
for(int i=0; i<ComponentCount; i++)
{
if(Components[i]->ClassNameIs("TEdit"))
((TEdit*)Components[i])->Text = "";
}
}
//---------------------------------------------------------------------------

