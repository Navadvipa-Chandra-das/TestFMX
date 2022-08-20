//---------------------------------------------------------------------------

#ifndef fm_TestResH
#define fm_TestResH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "FMX_NNConfig.h"
#include "FMX_NNFmRes.h"
//---------------------------------------------------------------------------
class TfmTestRes : public TfmfRes
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
