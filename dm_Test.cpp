//---------------------------------------------------------------------------


#pragma hdrstop

#include "dm_Test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"
TdmTest *dmTest;
//---------------------------------------------------------------------------
__fastcall TdmTest::TdmTest(TComponent* Owner)
  : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
