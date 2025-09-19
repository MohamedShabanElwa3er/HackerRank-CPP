#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    int number=0;
    std::vector<int>v;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
       std::cin>>number;
       v.push_back(number);
    } 
    
    std::sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
    std::cout<<v[i]<<" ";
        
    }
    
       
    return 0;
}
