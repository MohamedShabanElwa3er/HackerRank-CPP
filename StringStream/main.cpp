#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    std::stringstream ss(str);
    std::string word;
    std::vector<int>v;
     while(getline(ss,word,','))
    {
        std::stringstream istream(word);
        int ival;
        if(istream>>ival && istream.eof())
        {
            v.push_back(ival);
        }
    }
     
 return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
