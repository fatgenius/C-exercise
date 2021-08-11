/**************************************************
 * This is the c++ std lib 
 * this is about using algrthom 
 * this is one is using sort function
 * try not write our own sort function unless you are smart that the experts
 * ******************************************/


#include <iostream>
#include <array>
#include <algorithm>

using std::cout;
using std::endl;

int main(){


    std::array<int,10 > s {1,2222,31,43333,5212,644,71,8888,9,0};
    cout<<"berore soring : "<<endl;
      for (const auto& hey :s)
    {
        cout<< hey<<" ";
    }    

     cout<<"\n"<<"after soring : "<<endl;
    
    //now we are sorting

    std::sort(s.begin(),s.end());
    for (const auto& hey :s){ cout<< hey<<" ";}    










    return 0;
}