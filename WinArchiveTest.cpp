#include "WinArchiveTest.h"
#include <Message.h>
#include <File.h>
#include <Resources.h>
#include <support/Debug.h>


int main()
{
	new WinArchiveTestApp();
	be_app->Run();
	delete be_app;
	return 0;
}

WinArchiveTestApp::WinArchiveTestApp():BApplication(APP_SIGNATURE) {
	TRACE();
	testWin=NULL;
}

WinArchiveTestApp::~WinArchiveTestApp() {
	TRACE();
}

bool WinArchiveTestApp::QuitRequested() {
	TRACE();
	return true;
}

void WinArchiveTestApp::ArgvReceived(int32 argc, char **argv) {
	if (argc>1)
	{
		BMessage	unarchivedMessage	= BMessage();
		BFile		storedWindowFile	= BFile(argv[1],B_READ_ONLY);
		BResources	res;
		int32		idFound;
		int32		i = 0;
		char		*object;
		char		*nameFound;
		size_t		lengthFound;
		size_t		size;
		
		if (res.SetTo(&storedWindowFile) != B_NO_ERROR) 
 			printf("This is not a resource file \n");
 			
 		while (res.GetResourceInfo('ARCV',i, &idFound,(const char**) &nameFound,&lengthFound)==true)
 		{
			object = (char*) res.LoadResource('ARCV', nameFound, &size);
			if (!object) {									//Check the pointer
				printf("Can't find window %s in resource\n", nameFound);
	 			return;
			}
 			unarchivedMessage.Unflatten(object);
 			unarchivedMessage.PrintToStream();
			testWin = new BWindow(&unarchivedMessage);
			testWin->Show();
			i++;
		}
		
		
		//maybe archive it again and show the generated message
	}
}
