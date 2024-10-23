#include <iostream>
#include <windows.h>
#include <pybind11/pybind11.h>

int main()
{
    //gets a pointer of type HANDLE that points to the standard output
    //(when you use cout)
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    std::cout << " " << '\n'
        << R"(    ___       ___       ___       ___       ___   )" << '\n'
        << R"(   /\  \     /\__\     /\  \     /\  \     /\__\  )" << '\n'
        << R"(  /::\  \   /:/  /    /::\  \   /::\  \   /:/__/_ )" << '\n'
        << R"( /::\:\__\ /:/__/    /::\:\__\ /::\:\__\ /::\/\__\)" << '\n'
        << R"( \/\::/  / \:\  \    \:\:\/  / \/\::/  / \/\::/  /)" << '\n'
        << R"(   /:/  /   \:\__\    \:\/  /     \/__/    /:/  / )" << '\n'
        << R"(   \/__/     \/__/     \/__/               \/__/  )" << '\n';


    SetConsoleTextAttribute(hConsole, 7);
    std::cout << "Hello World!\n";
    std::cout << "test_change";
}