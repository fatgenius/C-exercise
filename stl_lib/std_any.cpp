/*********************************************
 * C++ std lib
 * std_any
 * any type example
 * ***************************************************/
#include <any>
#include <utility>
#include <string>
#include <cassert>
#include <iostream>

using std::cout;
using std::endl;


int main(){

    std::any a;

    a = 1;
    cout<<std::any_cast<int>(a)<<endl;

    a = 1.5;
    cout<<std::any_cast<double>(a)<<endl;

    a = true;
    cout<<std::boolalpha<<std::any_cast<bool>(a)<<endl;
    
    return 0;
}