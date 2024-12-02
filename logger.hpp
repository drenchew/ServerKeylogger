
#ifdef _WIN32
#include<iostream>
#include<Windows.h>
#include<winuser.h>
#include<fstream>
#endif

//ShowWindow(GetConsoleWindow(), SW_HIDE);

class Logger
{
private:
    std::ofstream file;
	std::string filename;
public:
    Logger() noexcept {
        
		file.open("log.txt", std::ios::app);
    }
    ~Logger() {
		file.close();
    }
    void log_to_file(std::string&& str ) {
        try
        {
            file << str;
        }
        catch (const std::exception&)
        {
            std::cerr << "Error writing to file" << std::endl;
        }

    }
    void log_to_console(char ch) {
        std::cout << ch;
    }
};


