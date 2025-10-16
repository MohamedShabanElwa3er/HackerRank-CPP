#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template <>
struct Traits<Color>
{
    static std::string name(int indx)
    {
        std::string color_name = " ";
        switch(indx) 
        {
            case 0:
            color_name = "red";
            break;
            case 1:
            color_name = "green";
            break;
            case 2:
            color_name = "orange";
            break;
            default:
            color_name = "unknown";
            break;
        }
        return color_name ;
    }
};
template <>
struct Traits<Fruit>
{
    static std::string name(int indx)
    {
        std::string fruit_name = " ";
        switch(indx) 
        {
            case 0:
            fruit_name = "apple";
            break;
            case 1:
            fruit_name = "orange";
            break;
            case 2:
            fruit_name = "pear";
            break;
            default:
            fruit_name = "unknown";
            break;
        }
        return fruit_name ;
    }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
