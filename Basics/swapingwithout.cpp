#include<iostream>
using namespace std;
void reverse(int &x,int &y){
    // int temp;
    // temp=x;
    // x=y;
    // y=temp;y
    x=x+y;
    y=x-y;
    x=x-y;
    
}
int main()
{
    int x;
    cin>>x;
    int y;
    cin>>y;
    reverse(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
}
