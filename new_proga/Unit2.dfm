object Form2: TForm2
  Left = 574
  Top = 99
  Width = 463
  Height = 484
  Caption = #1058#1077#1086#1088#1080#1103
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 0
    Width = 87
    Height = 29
    Caption = #1058#1077#1086#1088#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 30
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object BitBtn1: TBitBtn
    Left = 24
    Top = 384
    Width = 121
    Height = 49
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 0
    OnClick = BitBtn1Click
    Kind = bkCancel
  end
  object DBRichEdit1: TDBRichEdit
    Left = 8
    Top = 40
    Width = 433
    Height = 337
    DataSource = Form1.DataSource4
    ScrollBars = ssVertical
    TabOrder = 1
  end
end
