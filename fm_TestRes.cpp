//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fm_TestRes.h"
#include "dm_Test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "fm_Res"
#pragma link "NNConfig"
#pragma resource "*.fmx"
TfmTestRes *fmTestRes;
//---------------------------------------------------------------------------
__fastcall TfmTestRes::TfmTestRes(TComponent* Owner)
  : TfmRes(Owner)
{
}
//---------------------------------------------------------------------------