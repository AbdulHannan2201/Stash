#include"../include/utils.hpp"

void typeOut(const string& type, int time)
{
    for(char c: type)
    {
        cout<<c<<flush;
        this_thread::sleep_for(chrono::milliseconds(time));
    }
    cout<<"\n";
}
void clrscr()
{
std::cout << "\033[2J\033[1;1H";
}

string prntRed(const string& red)
{
 return std::string("\033[31m") + red + "\033[0m";
}

string prntGreen(const string& Green)
{
 return std::string("\033[32m") + Green + "\033[0m";
}