#include<iostream>
using namespace std;
int sum(int x){
    if(x==0 || x==1) return 1;
    return x * sum(x-1);
}
int main()
{
    int x;
    cout<<"ENTER x : ";
    cin>>x;
    cout<<sum(x);
}