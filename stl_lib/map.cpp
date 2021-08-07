/***************************************
 * the most common used container in C++ is map
 * sort associative container 
 * contain key value pairs
 * keys are sort by using < operator
 * std::map < key_T value_T> m {{key1,value1}........};
 * check size: m.size()
 * add items m.emplace(key, value)
 * modify: m[key] = value
 * get ref to item m.at(key)
 * check m.count()>0
 * build g++ -std=c++17 -g xxxx -o xxxx
 * *************************************/

#include <map>
#include <iostream>

using namespace std;

int main(){
    using StudentList = std::map<int,string>;
    StudentList students;

    students.emplace(111,"duzhi");
    students.emplace(10,"hey");
    students.emplace(1,"good");

    for(const auto& [id,name] : students){
        cout<<"id is: "<<id<< "name is: "<<name<<endl;
    }

    return 0;
}