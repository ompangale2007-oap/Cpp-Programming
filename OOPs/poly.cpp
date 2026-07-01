#include<iostream>
using namespace std;
class calc{
    public:
    int add(int a, int b){
    return a+b;
    }
    double add(double a,double b){
return a+b;
    }
};
int main(){
calc c;
cout<<"single addition : "<<c.add(7,8)<<endl;
cout<<"double addition : "<<c.add(7.7,8.7)<<endl;
}