#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    std::string str_1,str_2;char temp;
    std::cin>>str_1>>str_2;
    std::cout<<str_1.size()<<" "<<str_2.size()<<std::endl;
    std::cout<<str_1+str_2<<std::endl;
    temp=str_2[0];
    str_2[0]=str_1[0];
    str_1[0]=temp;
    std::cout<<str_1<<" "<<str_2<<std::endl;
     
    return 0;
}
