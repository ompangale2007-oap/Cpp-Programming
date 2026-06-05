#include<iostream>
using namespace std;
int main()
{
   int m;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>m;
    int n;
    cout<<"ENTER NUMBER OF COLUMNS : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
        cout<<(char)(j+96)<<" ";
        cout<<endl;
    } 
}