#include <iostream>
#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream filename{"123.txt"};

    int num = 0;
    string ext;

    filename >> num >> ext;

    cout << "number is :" << num << endl;
    cout << "ext is : " << ext <<endl;

    return 0;




}