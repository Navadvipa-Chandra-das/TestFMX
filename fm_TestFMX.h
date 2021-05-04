//---------------------------------------------------------------------------

#ifndef fm_TestFMXH
#define fm_TestFMXH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.DateTimeCtrls.hpp>
#include <FMX.MultiView.hpp>
#include <FMX.Edit.hpp>
#include <FMX.ComboEdit.hpp>
#include <FMX.ExtCtrls.hpp>
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
#include <FireDAC.Comp.BatchMove.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <System.Rtti.hpp>
#include <FMX.Layouts.hpp>
#include "NNConfig.h"
#include <Data.Bind.Controls.hpp>
#include <Fmx.Bind.Navigator.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.NumberBox.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Memo.hpp>
#include "NNNumberToWords.h"
//---------------------------------------------------------------------------
class TfmTestFMX : public TForm
{
__published:	// IDE-managed Components
	TGrid *grUsers;
  TLayout *laBottom;
	TSplitter *Splitter1;
	TLang *Lang1;
	TLabel *Label1;
  TNNConfig *cfTest;
  TEdit *Edit1;
  TEdit *Edit2;
  TEdit *Edit3;
  TDateColumn *DateColumn1;
  TComboEdit *ComboEdit1;
  TTabControl *TabControl1;
  TTabItem *TabItem1;
  TTabItem *TabItem2;
  TCheckBox *cbBold;
  TCheckBox *cbItalic;
  TCheckBox *cbUnderline;
  TCheckBox *cbStrikeOut;
  TNumberBox *nbFontSize;
  TColorAnimation *ColorAnimation1;
  TEdit *Edit4;
  TEdit *Edit5;
  TEdit *Edit6;
  TComboEdit *ComboEdit2;
  TNNNumberToWords *ntwTest;
  TMemo *meNumberWords;
  TEdit *edNumber;
  TTabItem *TabItem3;
  TMemo *meTestPtr;
  TEdit *edTestPtr;
  TEdit *edSizeOfWideChar;
  void __fastcall cfTestLoad(TObject *param_0);
  void __fastcall cfTestSave(TObject *param_0);
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall FormDestroy(TObject *Sender);
  void __fastcall EditEnter(TObject *Sender);
  void __fastcall cbBoldChange(TObject *Sender);
  void __fastcall cbItalicChange(TObject *Sender);
  void __fastcall cbUnderlineChange(TObject *Sender);
  void __fastcall cbStrikeOutChange(TObject *Sender);
  void __fastcall nbFontSizeChange(TObject *Sender);
  void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
  void __fastcall edNumberChange(TObject *Sender);
  void __fastcall edTestPtrDblClick(TObject *Sender);
  void __fastcall edSizeOfWideCharClick(TObject *Sender);
private:	// User declarations
  TEdit *fCurrentEdit;
public:		// User declarations
	__fastcall TfmTestFMX(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfmTestFMX *fmTestFMX;
//---------------------------------------------------------------------------
#endif