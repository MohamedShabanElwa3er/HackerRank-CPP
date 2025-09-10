#include <iostream>
#include <cstdio>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(const int a,const int b,const int c , const int d)
{
    std::vector<int> v = {a,b,c,d};
    auto [min,max]=std::minmax_element(v.begin(),v.end());
    return *max;
}
int main() {
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;

    std::cout<<max_of_four(a,b,c,d);
    
    return 0;
}
