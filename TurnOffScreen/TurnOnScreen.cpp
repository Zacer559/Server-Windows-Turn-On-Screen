#include <windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

	int main()
	{
		mouse_event(MOUSEEVENTF_MOVE, 0, 1, 0, NULL);
		Sleep(40);
		mouse_event(MOUSEEVENTF_MOVE, 0, -1, 0, NULL);
		return 0;

	}
	
