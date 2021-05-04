//---------------------------------------------------------------------------

#ifndef dm_TestH
#define dm_TestH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.FMXUI.Wait.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.PG.hpp>
#include <FireDAC.Phys.PGDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
//---------------------------------------------------------------------------
class TdmTest : public TDataModule
{
__published:	// IDE-managed Components
  TFDConnection *coTest;
  TFDPhysPgDriverLink *pgDriverLink;
  TFDTransaction *trzTest;
  TFDQuery *guCount;
  TFDQuery *quTest;
  TIntegerField *quTestUserID;
  TWideStringField *quTestName;
  TWideStringField *quTestFIO;
  TWideStringField *quTestNote;
  TWideStringField *guCountUserRegKey;
  TBlobField *guCountUserData;
private:	// User declarations
public:		// User declarations
  __fastcall TdmTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdmTest *dmTest;
//---------------------------------------------------------------------------
#endif
