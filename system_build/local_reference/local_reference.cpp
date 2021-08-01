/****************************
 * return type is funny should always keep something in line  12
 * 
 * *****************************/

# include <iostream>
using namespace std;

int& multip( int num){
    int re_vel =0;
    re_vel = 10*num ;
    cout <<"always keep something here"<<endl; 
    return re_vel;

}

int main(){
    int val = multip(10);
    cout << "value is : "<<val<< endl; 
    return 0;

}