#ifndef WINARCHIVETEST_H
#define WINARCHIVETEST_H
#include <Application.h>
#include <Window.h>

#define	APP_SIGNATURE			"application/x-vnd.WinArchiveTest"

class WinArchiveTestApp :	public BApplication {
    public:
								WinArchiveTestApp();
								~WinArchiveTestApp();
	virtual void				ArgvReceived(int32 argc, char **argv);
	virtual	bool				QuitRequested(void);
	BWindow						*testWin;

};



#endif
