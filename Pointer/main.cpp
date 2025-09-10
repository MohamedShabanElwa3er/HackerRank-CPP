#include <stdio.h>
#include <cmath>
#include <iostream>
void update(int *a,int *b) {
    
    int temp=*a;
    *a=(*a)+(*b);
    *b=abs(((temp)-(*b)));      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    std::cin>>a>>b;
    update(pa, pb);
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;

    return 0;
}
