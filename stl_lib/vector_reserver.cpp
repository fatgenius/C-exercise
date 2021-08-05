/****************************************************
 * vector reserve
 *  reserve (n) is use to make sure the vector has enough meomory
 *  to sore n items
 *  this is the using reserve example in vector
 * ***********************************************/ 

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;


int main(){


    const int N = 100;
    std::vector<int> vec;
    vec.reserve(N);

    for(int i=0;i<N;++i){
        vec.emplace_back(i);
    }



    
 
 return 0;

}


