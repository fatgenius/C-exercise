/************************************
 * This is std array example
 * everyone will have fun
 * ***********************************/


#include <iostream>
#include <array>

using std::cout;
using std::endl;


int main(){
    std::array<float,3> data {10.0F,100.0f,1000.0f};

    for (const auto& hey :data)
    {
        cout<< hey<<endl;
    }
    

    cout<<"data empty: "<< data.empty()<< endl;
    cout<<"data size: "<< data.size() << endl;

}