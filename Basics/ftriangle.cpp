#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER NO OF ROWS : ";
    cin>>n;
    int m;
    cout<<"ENTER NO OF COLUMNS : ";
    cin>>m;
    int number=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
        
}