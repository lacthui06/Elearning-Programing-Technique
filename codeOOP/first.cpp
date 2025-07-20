#include <iostream>
using namespace std;
class student{
    private :
        string name;
        int age;
    public:
        void setAge( int newAge){
            if (newAge > 0) age = newAge;
        }
        int getAge(){
            return age;
        }
};
int main(){
    student s1,s2;
    // s1.age = 20; (sai)
    s1.setAge(20);
    // cout<< s1.age; (sai)
    cout<< s1.getAge();
    s1.setAge(-5);
    cout<< s1.getAge();
}