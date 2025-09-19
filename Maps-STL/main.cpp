#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      std::map<std::string,int> mymap;
      int Q_count;
      int t;
      std::string name;
      int degree;
      std::cin>>Q_count;
      for(int i=0;i<Q_count;i++)
      {
        cin>>t;
        cin>>name;
        if(t==1)
        {
            cin>>degree;
            if(mymap.find(name)!=mymap.end())
            {
                mymap[name]+=degree;
            }
            else {
            
            mymap.insert(make_pair(name,degree));
            }
            
        }
        else if (t==2) 
        {
            mymap.erase(name);
        }
        else if (t==3)
        {
            std::cout<<mymap[name]<<std::endl;
        }
        else {
        
        }
      }
      
    return 0;
}
