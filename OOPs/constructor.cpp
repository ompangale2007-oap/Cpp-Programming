#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float cgpa;
        student(){}
    student(string s,int r, float g){
        name =s;
        roll=r;
        cgpa=g;
    }};
void print(student c){
    cout<<c.name<<" "<<c.roll<<" "<<c.cgpa<<endl;}
int main(){
    student c1 = student("s1",81,9.78);

    student c2;c2.name = "s2"; c2.roll = 79; c2.cgpa = 9.22;
    
    student c3 = student("s3",77,8.9);c3.name="H4";
    
    student c4 = student("s4",81,9.78);

    student c5(c4);

    print(c1); print(c2); print(c3); print(c4); print(c5);

}