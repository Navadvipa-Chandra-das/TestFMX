//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fm_TestRes.h"
#include "dm_Test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "FMX_fm_Res"
#pragma link "FMX_NNConfig"
#pragma resource "*.fmx"
TfmTestRes *fmTestRes;
//---------------------------------------------------------------------------
__fastcall TfmTestRes::TfmTestRes(TComponent* Owner)
  : TfmFRes(Owner)
{
}
//---------------------------------------------------------------------------
