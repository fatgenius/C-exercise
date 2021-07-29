/********************************
 * some basic C++ code to introduce the C++
 * in C++ we could use enum to do lots of shits
 * to improve our debugging  compare with c c++ is cool
***********************************/



# include <iostream>
using  namespace std;

int main(){
    enum class RGB { RED,GREEN, BLUE};
    RGB color =  RGB::GREEN;
    switch (color)
    {
    case RGB::GREEN: cout<<"green \n"; break;
    case RGB::BLUE:  cout<<"BLUE \n"; break;
    case RGB::RED:   cout<<"RED \n"; break;
    }
    return 0;
}