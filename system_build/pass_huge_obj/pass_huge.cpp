/**********************************************************
 * the best way to pass big object is by passing reference not by value
 * void dosth(std::string sth) is slow
 * void dosth(std::string& sth) is fast
 * use const of the string 
 * function calls are expensive sometimes we could use inline to help complier
 * this will save lots of time
 * ************************************************************/

#include <iostream>
using namespace std;

inline int fac(int  num){
    if (num < 2)
    {
        return 2;
    }
    return num*fac(num-1);
}

int main(){
    int faca = fac(0);
     int facb = fac(1);
      int facc = fac(2);
       int facd = fac(3);
        int face = fac(4);

    return faca+facb+facc+facd+face;
}