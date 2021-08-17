/**************************************************
 * This is the c++ std lib 
 * this is about using algrthom 
 * this consist
 *  - for each
 *  - rotate
 *  - accumulate
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





    //using the fot each to print all the elements
    auto print = [](const int& n){cout<<" "<<n;};

    std::for_each(vec.begin(),vec.end(),print);

    cout<<endl;

    //rotate
    std::rotate(vec.begin(),vec.begin()+2,vec.end());
    std::for_each(vec.begin(),vec.end(),print);
    cout<<endl;

    //acumulate


    //std mini_element()
    auto result = std::min_element(vec.begin(),vec.end());
    auto mini_element = std::distance(vec.begin(),result);
    cout<<"the mini element location is at "<<mini_element<<endl;


    //std mini & max elements
    using std::minmax_element;
    auto v = {1,2,3,4,5,3,3,33333,22222,4444,1111,33333,44444,223,4444};
    //this is c++17 g++ -std=c++17 -g 
    auto [min ,max] =minmax_element(v.begin(),v.end());
    cout<<"mini is"<<min<<endl;
    // this is address
    cout<<"max is "<<*max<<endl;




    



    return 0;
}