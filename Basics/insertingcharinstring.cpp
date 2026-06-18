#include<iostream>
using namespace std;
int main()
{
    char str[50]="COLLEGE";
    cout<<str<<endl;
    for(int i =4;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='N';
    cout<<str;

}