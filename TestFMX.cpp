//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("FrameTest.cpp", Frame3); /* TFrame: File Type */
USEFORM("fm_TestFMX.cpp", fmTestFMX);
USEFORM("dm_Test.cpp", dmTest); /* TDataModule: File Type */
USEFORM("Unit3.cpp", Form3);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TdmTest), &dmTest);
     Application->CreateForm(__classid(TfmTestFMX), &fmTestFMX);
     Application->CreateForm(__classid(TForm3), &Form3);
     Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
