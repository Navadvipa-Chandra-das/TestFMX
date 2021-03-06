//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fm_TestFMX.h"
#include "TestFMXPCH1.h"
#include "dm_Test.h"
#include "FMX_NNStream.h"
#include "FMX_NNCommon.h"
#include <memory>
#include "fm_TestRes.h"
#include <fmx.DialogService.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "FMX_NNConfig"
#pragma link "FMX_NNNumberToWords"
#pragma link "FMX_fm_Res"
#pragma resource "*.fmx"
TfmTestFMX *fmTestFMX;
//---------------------------------------------------------------------------
__fastcall TfmTestFMX::TfmTestFMX(TComponent* Owner)
: inherited(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfmTestFMX::cfgResLoad(TObject *param_0)
{
  inherited::cfgResLoad( param_0 );

  laBottom->Height = cfgRes->Filer->ReadInt();
//  Width = cfgRes->Filer->ReadInt();
//  Height = cfgRes->Filer->ReadInt();
//  Left = cfTest->Filer->ReadInt();
//  Top = cfTest->Filer->ReadInt();
  Edit1->Text = cfgRes->Filer->ReadString();
  Edit2->Text = cfgRes->Filer->ReadString();
  Edit3->Text = cfgRes->Filer->ReadString();
  cfgRes->Filer->ReadFont( Edit1->Font );
  cfgRes->Filer->ReadFont( Edit2->Font );
  cfgRes->Filer->ReadFont( Edit3->Font );
  Edit4->Text = cfgRes->Filer->ReadString();
  Edit5->Text = cfgRes->Filer->ReadString();
  Edit6->Text = cfgRes->Filer->ReadString();
  cfgRes->Filer->ReadTextSettings( Edit4->TextSettings );
  cfgRes->Filer->ReadTextSettings( Edit5->TextSettings );
  cfgRes->Filer->ReadTextSettings( Edit6->TextSettings );
  tcTest->TabIndex = cfgRes->Filer->ReadInt();
  edNumber->Text = cfgRes->Filer->ReadString();
}
//--------0-------------------------------------------------------------------

void __fastcall TfmTestFMX::cfgResSave(TObject *param_0)
{
  inherited::cfgResSave( param_0 );

  cfgRes->Filer->WriteInt( laBottom->Height );
//  cfgRes->Filer->WriteInt( Width );
//  cfgRes->Filer->WriteInt( Height );
//  cfgRes->Filer->WriteInt( Left );
//  cfgRes->Filer->WriteInt( Top );
  cfgRes->Filer->WriteString( Edit1->Text );
  cfgRes->Filer->WriteString( Edit2->Text );
  cfgRes->Filer->WriteString( Edit3->Text );
  cfgRes->Filer->WriteFont( Edit1->Font );
  cfgRes->Filer->WriteFont( Edit2->Font );
  cfgRes->Filer->WriteFont( Edit3->Font );
  cfgRes->Filer->WriteString( Edit4->Text );
  cfgRes->Filer->WriteString( Edit5->Text );
  cfgRes->Filer->WriteString( Edit6->Text );
  cfgRes->Filer->WriteTextSettings( Edit4->TextSettings );
  cfgRes->Filer->WriteTextSettings( Edit5->TextSettings );
  cfgRes->Filer->WriteTextSettings( Edit6->TextSettings );
  cfgRes->Filer->WriteInt( tcTest->TabIndex );
  cfgRes->Filer->WriteString( edNumber->Text );
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
  TDialogService::MessageDialog( "REre!", TMsgDlgType::mtConfirmation,
	mbOKCancel,
	TMsgDlgBtn::mbOK, 0,
	TestKuKu );

  String S = edTestPtr->Text;
  WideChar *c = S.c_str();
  while ( *c != '\0' )
  {
	meTestPtr->Lines->Add( String( *c ) + L" == " + String( sizeof( *c ) ) );
	++c;
	Sleep( 1000 );

  }
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::TestKuKu( System::TObject* S
	   , const System::Uitypes::TModalResult AResult )
{
  Sleep( 1000 );
}

void __fastcall TfmTestFMX::edSizeOfWideCharClick(TObject *Sender)
{
  edSizeOfWideChar->Text = sizeof( WideChar );
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::Button1Click(TObject *Sender)
{
  NNF::FormCreate( __classid( TfmTestRes ), &fmTestRes );
  NNF::FormShow( fmTestRes );
}
//---------------------------------------------------------------------------

void __fastcall TfmTestFMX::Button2Click(TObject *Sender)
{
  dmTest->guCount->Params->Items[ 0 ]->AsString = L"????????? ???? 0";
  dmTest->guCount->Open();

  int N = 108;
  TMemoryStream *ms = new TMemoryStream();
  ms->Write( &N, sizeof( N ) );
  ms->Position = 0;
  try {
    dmTest->guCount->Edit();
    dmTest->guCountUserData->LoadFromStream( ms );
  } __finally {
    delete ms;
  }
  dmTest->guCount->Post();

}
//---------------------------------------------------------------------------

