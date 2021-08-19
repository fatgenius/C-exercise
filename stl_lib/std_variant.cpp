/*********************************************
 * C++ std lib
 * std_variant
 * ***************************************************/

#include <variant>
#include <string>
#include <cassert>
#include <iostream>

using std::cout;
using std::endl;

int main(){
    std::variant<int, float> v1;
     v1 =12;
    cout<<std::get<int>(v1)<<endl;
    std::variant<int, float> v2{3.24f};
    cout<< std::get<1>(v2)<<endl;
    

return 0;

}