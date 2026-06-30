#include<iostream>
using namespace std;
class base{
    public:
    void dis(){
        cout<<"Base"<<endl;
    }
};
class derived : public base{
    public:
    void dis(){
        cout<<"Derived"<<endl;
    }
};
int main(){
    derived object;
    object.dis();
object.base::dis();
}