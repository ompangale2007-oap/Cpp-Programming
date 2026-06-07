#include<iostream>
using namespace std;
void rec(int x){
    if(x==0) return;
    
    rec(x-1);
    cout<<x<<endl;
}
int main()
{
    int n;
    cout<<"ENTER n : ";
    cin>>n;
    rec(n);
}