//---------------------------------------------------------------------------

#ifndef fm_TestResH
#define fm_TestResH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "FMX_fm_Res.h"
#include "FMX_NNConfig.h"
//---------------------------------------------------------------------------
class TfmTestRes : public TfmFRes
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
  __fastcall TfmTestRes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmTestRes *fmTestRes;
//---------------------------------------------------------------------------
#endif
