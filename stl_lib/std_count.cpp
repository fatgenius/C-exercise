/**************************************************
 * This is the c++ std lib 
 * this is about using algrthom 
 * this is one is using count function: count how many time happends
 * try not write our own sort function unless you are smart that the experts
 * ******************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

int main(){
    const int count_num_element= 3;
    std::vector<int> vec ={1,2,2,2,3,4,4,4,22,31,456,543,34};
    
    int times= std::count(vec.begin(),vec.end(),count_num_element);

    cout<<"how many time the element "<<count_num_element<<" happends: "<<times<<endl;

    return 0;


}