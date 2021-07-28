#include "tools.hpp"


int main(){
    MakeItRain();
    MakeItSunny();
    return 0;
}


/***********************************
 * first steps
 * build a object file compile modules
 * c++ -std=c++14 -c tools.cpp -o tools.o  
 * this build all the binary code for this library
 * *************************************/


/****************************************
 * build a arc
 * organize moudules into libraries
 * ar rcs libtools.a tools.o
 **************************************/


/*****************************************
 * link libraries when building code
 * c++ -std=c++14 main.cpp -L . -ltools -o main
 * use -L . -l  to finish the building
 * ***************************************/