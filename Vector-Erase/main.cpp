#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
   int first=0;
   int a=0;
   int b=0;
   int n=0;
   std::vector<int>v;
   std::cin>>n;
   int number=0;
   for(int i=0;i<n;i++)
   {
       std::cin>>number;
       v.insert(v.begin()+i,number);
   }
   std::cin>>first;
   std::cin>>a>>b;
   v.erase(v.begin()+first-1);
   v.erase(v.begin()+a-1,v.begin()+b-1);
   std::cout<<v.size()<<std::endl;
   for(int i=0;i<v.size();i++)
   {
   std::cout<<v[i]<<" ";

   }
    return 0;
}
