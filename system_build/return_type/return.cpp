/****************************************
 * this is using tuple
 * for testing return 
 * will be coding tuple in the future
 * **********************/

/*******************************
 * this is for c++ 17 
 * so complie it by using: g++ -std=c++17 
 * how to change the vscode gcc complier will do it in the future
 * ******************************/


#include <iostream>
#include <tuple>

using namespace std;


auto foo(){
   return make_tuple("little belly", 0);
}

int main(){

   auto [name, Value] = foo();

   cout << name << "has value: "<< Value <<endl;
   return 0;

}