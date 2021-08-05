/**************************************
 * vector is most wiledy used in c++
 *  to add new element in vector the emplace_back is faster
 *  used add new elelment is push_back is work but is relavently slow
 *  to remove all the vector elements we use clear()
 *********************************************/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;


int main(){

    std::vector<int> number = {1,2,3};
    std::vector<std::string> names = {"du","mu","ren"};

     // add new element by using emplace_basck

    names.emplace_back("dad");  // this is fast 
    number.push_back(9); // this is slow

    cout<<"first name: "<<names.front()<<endl;
    cout<<"last name: "<< names.back()<<endl;
    cout<<"last name: "<<number.back()<<endl;


    return 0;

}