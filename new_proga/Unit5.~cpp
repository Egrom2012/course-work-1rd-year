//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit5.h"
#include <iostream>
#include <fstream>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
extern String b;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn2Click(TObject *Sender)
{
String z;
int t=0;
z = Form1->DataSource4->DataSet->FieldByName("Razdel")->Value;
if (b=="1.1.1")
{
if(Edit1->Text == "t<-6")
t=t+1;
if(Edit2->Text == "t>-3")
t=t+1;
if(Edit3->Text == "t<-6")
t=t+1;
}
if (b=="1.1.2")
{
if(Edit1->Text == "-2;6")
t=t+1;
if(Edit2->Text == "3")
t=t+1;
if(Edit3->Text == "-1")
t=t+1;
}
if (b=="1.2.1")
{
if(Edit1->Text == "-14")
t=t+1;
if(Edit2->Text == "2")
t=t+1;
if(Edit3->Text == "8")
t=t+1;
}
if (b=="1.2.2")
{
if(Edit1->Text == "5")
t=t+1;
if(Edit2->Text == "-2")
t=t+1;
if(Edit3->Text == "-1")
t=t+1;
}
if (b=="2.1.1")
{
if(Edit1->Text == "126")
t=t+1;
if(Edit2->Text == "325")
t=t+1;
if(Edit3->Text == "196,2")
t=t+1;
}
if (b=="2.1.2")
{
if(Edit1->Text == "326")
t=t+1;
if(Edit2->Text == "263")
t=t+1;
if(Edit3->Text == "999")
t=t+1;
}
if (b=="2.2.1")
{
if(Edit1->Text == "476")
t=t+1;
if(Edit2->Text == "911")
t=t+1;
if(Edit3->Text == "25")
t=t+1;
}
if (b=="2.2.2")
{
if(Edit1->Text == "111")
t=t+1;
if(Edit2->Text == "27")
t=t+1;
if(Edit3->Text == "837")
t=t+1;
} 
ShowMessage("правильно " + (IntToStr(t)) + " из 3");
ofstream fan ("temp.txt",ios::app);
if (!fan.is_open()) // если файл не открыт
ShowMessage("Файл не открыт");
else
{
fan <<"Раздел" <<endl;
fan <<z.c_str()<<endl;
fan <<t<< endl;
fan <<"3"<<endl;
}
fan.close();
t=0;
Close();
}
//---------------------------------------------------------------------------
 