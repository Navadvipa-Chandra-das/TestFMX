//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fm_TestFMX.h"
#include "TestFMXPCH1.h"
#include "dm_Test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "NNConfig"
#pragma link "NNNumberToWords"
#pragma resource "*.fmx"
TfmTestFMX *fmTestFMX;
//---------------------------------------------------------------------------
__fastcall TfmTestFMX::TfmTestFMX(TComponent* Owner)
: Fmx::Forms::TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfmTestFMX::cfTestLoad(TObject *param_0)
{
  laBottom->Height = cfTest->Filer->ReadInt();
  Width = cfTest->Filer->ReadInt();
  Height = cfTest->Filer->ReadInt();
  Left = cfTest->Filer->ReadInt();
  Top = cfTest->Filer->ReadInt();
  Edit1->Text = cfTest->Filer->ReadString();
  Edit2->Text = cfTest->Filer->ReadString();
  Edit3->Text = cfTest->Filer->ReadString();
  cfTest->Filer->ReadFont( Edit1->Font );
  cfTest->Filer->ReadFont( Edit2->Font );
  cfTest->Filer->ReadFont( Edit3->Font );
  Edit4->Text = cfTest->Filer->ReadString();
  Edit5->Text = cfTest->Filer->ReadString();
  Edit6->Text = cfTest->Filer->ReadString();
  cfTest->Filer->ReadTextSettings( Edit4->TextSettings );
  cfTest->Filer->ReadTextSettings( Edit5->TextSettings );
  cfTest->Filer->ReadTextSettings( Edit6->TextSettings );
}
//--------0-------------------------------------------------------------------

void __fastcall TfmTestFMX::cfTestSave(TObject *param_0)
{
  cfTest->Filer->WriteInt( laBottom->Height );
  cfTest->Filer->WriteInt( Width );
  cfTest->Filer->WriteInt( Height );
  cfTest->Filer->WriteInt( Left );
  cfTest->Filer->WriteInt( Top );
  cfTest->Filer->WriteString( Edit1->Text );
  cfTest->Filer->WriteString( Edit2->Text );
  cfTest->Filer->WriteString( Edit3->Text );
  cfTest->Filer->WriteFont( Edit1->Font );
  cfTest->Filer->WriteFont( Edit2->Font );
  cfTest->Filer->WriteFont( Edit3->Font );
  cfTest->Filer->WriteString( Edit4->Text );
  cfTest->Filer->WriteString( Edit5->Text );
  cfTest->Filer->WriteString( Edit6->Text );
  cfTest->Filer->WriteTextSettings( Edit4->TextSettings );
  cfTest->Filer->WriteTextSettings( Edit5->TextSettings );
  cfTest->Filer->WriteTextSettings( Edit6->TextSettings );
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::FormCreate(TObject *Sender)
{
  cfTest->Load();
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::FormDestroy(TObject *Sender)
{
  cfTest->Save();
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::EditEnter(TObject *Sender)
{
  fCurrentEdit = (( TEdit* )( Sender ));

  cbBold->IsChecked      = fCurrentEdit->Font->Style.Contains( fsBold );
  cbItalic->IsChecked    = fCurrentEdit->Font->Style.Contains( fsItalic );
  cbUnderline->IsChecked = fCurrentEdit->Font->Style.Contains( fsUnderline );
  cbStrikeOut->IsChecked = fCurrentEdit->Font->Style.Contains( fsStrikeOut );

  nbFontSize->Value = fCurrentEdit->Font->Size;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::cbBoldChange(TObject *Sender)
{
  if ( cbBold->IsChecked )
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style << fsBold;
  else
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style >> fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::cbItalicChange(TObject *Sender)
{
  if ( cbItalic->IsChecked )
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style << fsItalic;
  else
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style >> fsItalic;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::cbUnderlineChange(TObject *Sender)
{
  if ( cbUnderline->IsChecked )
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style << fsUnderline;
  else
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style >> fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::cbStrikeOutChange(TObject *Sender)
{
  if ( cbStrikeOut->IsChecked )
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style << fsStrikeOut;
  else
    fCurrentEdit->Font->Style = fCurrentEdit->Font->Style >> fsStrikeOut;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::nbFontSizeChange(TObject *Sender)
{
  fCurrentEdit->Font->Size = nbFontSize->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::FormClose(TObject *Sender, TCloseAction &Action)
{
  Action = TCloseAction::caFree;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::edNumberChange(TObject *Sender)
{
  ntwTest->Value = edNumber->Text;
  meNumberWords->Lines->Text = ntwTest->Text;
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::edTestPtrDblClick(TObject *Sender)
{
  String S = edTestPtr->Text;
  WideChar *c = S.c_str();
  while ( *c != '\0' )
  {
    meTestPtr->Lines->Add( String( *c ) + L" == " + String( sizeof( *c ) ) );
    ++c;
  }
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::edSizeOfWideCharClick(TObject *Sender)
{
  edSizeOfWideChar->Text = sizeof( WideChar );
}
//---------------------------------------------------------------------------
