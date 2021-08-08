/******************************************
 * The unoredered map container in c++
 * implemented as hash table
 * key typle has be hashtable
 * typlically use int string as key
 * faster than std::map
 * ************************************/

#include <map>
#include <iostream>
#include <unordered_map>


using namespace std;

int main(){
    using StudentList =  std::unordered_map<int,string>;

    StudentList students;

    students.emplace(111,"duzhi");
    students.emplace(10,"hey");
    students.emplace(1,"good");

    for(const auto& [id,name] : students){
        cout<<"id is: "<<id<< "name is: "<<name<<endl;
    }

    return 0;




}