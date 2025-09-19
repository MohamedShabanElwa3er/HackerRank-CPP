#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N=0;
    int Q;
    int Y;
    
    
    std::cin>>N;
    int x[N];
    //std::vector<int>v(N);
    for(int i=0;i<N;i++)
    {
        std::cin>>x[i];
    }
    
    std::vector<int>v(x,x+N);
    std::cin>>Q;
    
    for(int i=0;i<Q;i++)
    {
        std::cin>>Y;
        
        std::vector<int>::iterator low;
        
        low = std::lower_bound(v.begin(),v.end(),Y);
        
        int index = low-v.begin();
        if(v[index]==Y)
        {
            std::cout<<"Yes "<<(low-v.begin())+1<<std::endl;
        }
        else
        {
            
            std::cout<<"No "<<(low-v.begin())+1<<std::endl;
        }
    }
    
    
    
    
    
    
    
    
    return 0;
}
