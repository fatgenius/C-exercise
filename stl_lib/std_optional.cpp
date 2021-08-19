/***********************************************
 * C++ std_lib
 * std_optional lib
 * ************************************************/


#include <optional>
#include <string>
#include <utility>
#include <iostream>


using std::cout;
using std::endl;

std::optional<std::string> StringHey(bool creat){

    if (creat)
    {
        return "hello world";
    }
    return{};
}

int main(){

        cout<<StringHey(true).value()<<endl;
        cout<<StringHey(false).value_or("no")<<endl;


    return 0;
}