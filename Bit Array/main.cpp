#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    uint32_t N,S,P,Q=0;
    uint64_t mod = 1U<<31U;
    uint32_t count=0;
    uint32_t a=0;
    uint32_t prev=a;

    std::cin>>N>>S>>P>>Q;
    a=S%mod;
    count++;
    for(uint32_t i=1 ; i<N ; i++)
    {
        a=(a*P+Q)%mod;
        count += (a !=prev) ? 1:0;
        prev = a;
    }
   
    std::cout<<count<<std::endl;
    return 0;
}
