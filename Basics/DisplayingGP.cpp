#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"ENTER NUMBER OF TERMS : ";
    cin>>n;
    int a;
    cout<<"ENTER 1ST TERM : ";
    cin>>a;
    int r;
    cout<<"ENTER COMMON RATIO : ";
    cin>>r;

    for(int i = 1; i <= n; i++) 
    {
        cout << a << " ";
        a = a * r;
    }
}