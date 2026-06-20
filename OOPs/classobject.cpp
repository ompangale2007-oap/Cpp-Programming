#include<iostream>
using namespace std;
class student{
    public : 
    string name;
    float cgpa;
    int roll;
};
void print(student c){
    c.name;
    c.cgpa;
    c.roll;
    cout<<c.name<<" "<<c.cgpa<<" "<<c.roll<<endl;
}
int main()
{
    student c1;
    c1.name="S1";
    c1.cgpa=8.80;
    c1.roll=92;

     student c2;
    c2.name="S2";
    c2.cgpa=9.90;
    c2.roll=89;
    
    print(c1);
    print(c2);
}