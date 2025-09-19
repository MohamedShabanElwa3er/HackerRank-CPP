#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    
    int Q;
    int y;
    int member=0;
    std::set<int>sset;
     
    std::cin>>Q;
    for (int i=0; i<Q; i++)
    {
        std::cin>>y;
        std::cin>>member;
        if (y==1)
        {
            sset.insert(member);
        }
        else if (y==2)
        {
            sset.erase(member);
        }
        else if(y==3)
        {
            std::set<int>::iterator itr = sset.find(member);
            if(itr != sset.end())
            {
                std::cout<<"Yes"<<std::endl;
            }
            else  
            {
                std::cout<<"No"<<std::endl;
            }
        }
        else 
        {
            /* Do Nothing */
        }
    }  
    return 0;
}



