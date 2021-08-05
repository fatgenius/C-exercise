#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;


int main(){

    std::vector<int> number = {1,2,3};
    std::vector<std::string> names = {"du","mu","ren"};

     // add new element by using emplace_basck

    names.emplace_back("dad");

    cout<<"first name: "<<names.front()<<endl;
    cout<<"last name: "<< names.back()<<endl;
    cout<<"last name: "<<number.back()<<endl;


    return 0;

}