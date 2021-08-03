/******************************************************
 * This one is for show us never use using namespace std directly
 * just use what we need 
 * should be cool 
 ****************************************************/

#include <cmath>
#include <iostream>

// we used to using namespace std but it`s not good 
// do it here like this way 

using std::cout;
using std::endl;


double pow(double x, int exp){
    double res =1.0;

    for(int i = 0; i< exp; i++)
    {
        res *= x;
    }
    return res;
}


int main(){

    cout<< "hey, so long"<<pow(3.0,2)<<endl;
    return 0;

}