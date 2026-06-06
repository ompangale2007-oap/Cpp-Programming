#include<iostream>
using namespace std;

int function(int x){
int product=1;
for(int i=1;i<=x;i++){
product *= i;

}
return product;
}
int main()
{
    int n;
    cout<<"ENTER n : ";
    cin>>n;
    int r;
    cout<<"ENTER r : ";
    cin>>r;
    
    cout<< function(n)/  function(n-r);
}