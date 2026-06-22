#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
    }
    person(string name ,int age){
        this->name = name;
        this->age = age;
    }
};
    void print(person c){
    cout<<c.name<<" "<<c.age<<endl;
}

int main(){
    person c1;
         c1.name = "s1";
         c1.age = 21;

    person c2;
        c2.name = "s2";
        c2.age = 25;

            print(c1);
            print(c2);
}