object Form5: TForm5
  Left = 452
  Top = 168
  Width = 568
  Height = 480
  Caption = #1055#1088#1072#1082#1090#1080#1082#1072
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
    Left = 232
    Top = 272
    Width = 116
    Height = 20
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1086#1090#1074#1077#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 32
    Top = 312
    Width = 24
    Height = 20
    Caption = #8470'1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 32
    Top = 360
    Width = 24
    Height = 20
    Caption = #8470'2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 336
    Top = 312
    Width = 24
    Height = 20
    Caption = #8470'3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object DBRichEdit1: TDBRichEdit
    Left = 8
    Top = 8
    Width = 537
    Height = 249
    DataSource = Form1.DataSource4
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 56
    Top = 400
    Width = 153
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkCancel
  end
  object BitBtn2: TBitBtn
    Left = 360
    Top = 400
    Width = 153
    Height = 25
    Caption = #1047#1072#1082#1086#1085#1095#1080#1090#1100' '#1087#1088#1072#1082#1090#1080#1082#1091
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkAll
  end
  object Edit1: TEdit
    Left = 64
    Top = 312
    Width = 161
    Height = 21
    TabOrder = 3
  end
  object Edit2: TEdit
    Left = 64
    Top = 360
    Width = 161
    Height = 21
    TabOrder = 4
  end
  object Edit3: TEdit
    Left = 368
    Top = 312
    Width = 161
    Height = 21
    TabOrder = 5
  end
end
