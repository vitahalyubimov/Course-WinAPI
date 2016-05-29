#include "include.h"
#include "Application.h"

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpczCmd, INT nShowCmd)
{
	Application app;
	return app.runProgramm();
}