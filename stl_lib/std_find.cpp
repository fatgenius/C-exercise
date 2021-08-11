/**************************************************
 * This is the c++ std lib 
 * this is about using algrthom 
 * this is one is using sort function
 * try not write our own sort function unless you are smart that the experts
 * ******************************************/
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

int main(){

    std::vector<int> number = {1,2,3};
    std::vector<std::string> names = {"du","mu","ren"};
    const std::string find_string_element ="du";
    const  int  find_num_element=5;

    // here we are using find algorithm
    auto find_string = std::find(names.begin(),names.end(),find_string_element);
    if (find_string != std::end(names) )
    {
        cout<<"the container do have string: " << find_string_element<<endl;
    }else{
        cout<<"the container can not find it"<<endl;
    }
    
    auto find_num = std::find(number.begin(),number.end(),find_num_element);

    if (find_num != std::end(number))
    {
                cout<<"the container do have number: " << find_num_element<<endl;

     }else{
         cout<<"the container can not find: "<<find_num_element<<endl;
     }

     return 0;
    


}

