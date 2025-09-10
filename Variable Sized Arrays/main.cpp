#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,q,k,sk,i,j=0;
std::vector<std::vector<int>> VecArr;
void vidPrintDataBaseContent(int32_t i32NumnberOfQureies)
{
    for(int i=0 ; i<i32NumnberOfQureies;i++)
    {
        int _1D ; std::cin>>_1D;
        int _2D ; std::cin>>_2D;
        std::cout<<VecArr[_1D][_2D]<<std::endl;
    }
}
void vidDataBaseHandler(int32_t i32NumnberOfQureies)
{
 
    uint32_t u32Iterator=0;
    uint32_t u32Rows=0;
    VecArr.reserve(i32NumnberOfQureies);
     while (u32Iterator<i32NumnberOfQureies)
    {
        cin>>u32Rows;
        VecArr[u32Iterator].reserve(u32Rows);
        for(int i=0;i<u32Rows;i++)
        {
           cin>>VecArr[u32Iterator][i];
        }
        u32Iterator++;
    }
    vidPrintDataBaseContent(i32NumnberOfQureies);
 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    
    std::cin>>n>>q;
    vidDataBaseHandler(q);
    
    return 0;
}
