#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age=0;
    int standard=0;
    std::string first_name;
    std::string last_name;
    
    public:
    Student(){}
    void set_age(int a){age = a ;}
    void set_standard(int s){standard=s;}
    void set_first_name(std::string n){first_name=n;}
    void set_last_name(std::string l){last_name=l;}
    int get_age(void){return age;}
    int get_standard(void){return standard; }
    std::string get_first_name(void){return first_name;}
    std::string get_last_name(void){return last_name;}
    std::string to_string(){
        
        
        std::stringstream s;
        
        // s<<age<<first_name<<last_name<<standard;
        
        s<<age<<','<<first_name<<','<<last_name<<','<<standard;
        
        return s.str() ;
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
