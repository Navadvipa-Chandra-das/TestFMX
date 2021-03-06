object dmTest: TdmTest
  OldCreateOrder = False
  Height = 293
  Width = 338
  object coTest: TFDConnection
    Params.Strings = (
      'Database=NizhnyayaNavadvipa'
      'User_Name=Navadvipa Chandra das'
      'Password=lila_smaranam'
      'Server=127.0.0.1'
      'OidAsBlob=No'
      'DriverID=PG_N'
      'UnknownFormat=Error'
      'Port=5432')
    LoginPrompt = False
    Transaction = trzTest
    Left = 25
    Top = 31
  end
  object pgDriverLink: TFDPhysPgDriverLink
    DriverID = 'PG_N'
    VendorLib = 'C:\PostgreSQL\psqlODBC\bin\libpq.dll'
    Left = 25
    Top = 79
  end
  object trzTest: TFDTransaction
    Connection = coTest
    Left = 91
    Top = 84
  end
  object guCount: TFDQuery
    Connection = coTest
    Transaction = trzTest
    SQL.Strings = (
      'select'
      '  a."UserRegKey"'
      ', a."UserData"'
      'from &TableUserReg a'
      'where a."UserRegKey" = :UserRegKey')
    Left = 91
    Top = 31
    ParamData = <
      item
        Name = 'USERREGKEY'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end>
    MacroData = <
      item
        Value = '"UserReg"'
        Name = 'TABLEUSERREG'
        DataType = mdIdentifier
      end>
    object guCountUserRegKey: TWideStringField
      FieldName = 'UserRegKey'
      Origin = '"UserRegKey"'
      Size = 720
    end
    object guCountUserData: TBlobField
      FieldName = 'UserData'
      Origin = '"UserData"'
    end
  end
  object quTest: TFDQuery
    Connection = coTest
    Transaction = trzTest
    SQL.Strings = (
      'select'
      '  a."UserID"'
      ', a."Name"'
      ', a."FIO"'
      ', a."Note"'
      'from'
      '  "NizhnyayaNavadvipa"."Users" a')
    Left = 25
    Top = 132
    object quTestUserID: TIntegerField
      DisplayLabel = #1055#1050' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      FieldName = 'UserID'
      Origin = '"UserID"'
    end
    object quTestName: TWideStringField
      DisplayLabel = #1051#1086#1075#1080#1085' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      DisplayWidth = 20
      FieldName = 'Name'
      Origin = '"Name"'
      Size = 32
    end
    object quTestFIO: TWideStringField
      DisplayLabel = #1060#1072#1084#1080#1083#1080#1103' '#1048#1084#1103' '#1054#1090#1095#1077#1089#1090#1074#1086
      DisplayWidth = 30
      FieldName = 'FIO'
      Origin = '"FIO"'
      Size = 100
    end
    object quTestNote: TWideStringField
      DisplayLabel = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1081
      DisplayWidth = 30
      FieldName = 'Note'
      Origin = '"Note"'
      Size = 100
    end
  end
  object quUpdateBlob: TFDQuery
    Connection = coTest
    Transaction = trzTest
    SQL.Strings = (
      'call "UpdateUserReg"( :KEY_, :LOB_ );')
    Left = 155
    Top = 31
    ParamData = <
      item
        Name = 'KEY_'
        ParamType = ptInput
      end
      item
        Position = 2
        Name = 'LOB_'
        ArrayType = atArray
        ParamType = ptInput
      end>
  end
end
