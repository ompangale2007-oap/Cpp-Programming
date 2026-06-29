#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll;
    float cgpa;
    float marks;
    public:
        student(){}
    student(string s,int r, float g,float m){
        name =s;
        roll=r;
        cgpa=g;
        marks = m;
    }
float getmarks(){
    return marks;
}
void setmarks(float m){
    marks=m;
}
};
int main(){
    student c1("s1",81,9.78,90.8);
cout<<c1.getmarks()<<endl;
c1.setmarks(97.89);
}