#include <iostream>
#include <cstdio>
#include <array>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(const int a,const int b,const int c , const int d)
{
    std::array<int, 4> arr = {a,b,c,d};
    auto [min,max]=std::minmax_element(arr.begin(),arr.end());
    return *max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
