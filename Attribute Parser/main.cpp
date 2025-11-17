#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;

struct tag
{
    std::string tag_name;
    std::unordered_map<std::string,std::string> attributes ;
};

int main() 
{
    int n,q;
    tag Tags;
    std::vector<std::string> tag_stack;
    std::unordered_map<std::string,tag> tag_map;
    std::cin>>n>>q;
    cin.ignore(); // ignore trailing newline
    while(n--)
    {
        std::string current_line;
        std::getline(std::cin,current_line);
        if(current_line[1]=='/')
        {
            tag_stack.pop_back();
            continue;
        }
        else
        {
            tag new_tag;
            current_line = current_line.substr(1,current_line.size()-2);
            std::stringstream ss(current_line);
            ss>>new_tag.tag_name;
            std::string full_path;
            if(tag_stack.empty()==true)
            {
                full_path = new_tag.tag_name;
            }
            else
            {
                full_path = tag_stack.back()+'.'+new_tag.tag_name;
            }
            tag_stack.push_back(full_path);
            std::string attr,eq,value;
            while(ss>>attr>>eq>>value)
            {
                new_tag.attributes[attr] = value.substr(1,value.size()-2);
            }
            tag_map[full_path]=new_tag;
        }

    }
    
    while(q--)
    {
        std::string query;
        std::getline(std::cin,query);
        std::string tag_path = query.substr(0,query.find('~'));
        std::string tag_attr = query.substr(query.find('~')+1);
        if(tag_map.count(tag_path)&&tag_map[tag_path].attributes.count(tag_attr))
        {
            std::cout<<tag_map[tag_path].attributes[tag_attr]<<std::endl;
        }
        else
        {
            std::cout<<"Not Found!"<<std::endl;
        }
    }
    
    
    return 0;
}
