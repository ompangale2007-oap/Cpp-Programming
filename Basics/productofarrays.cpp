#include<iostream>
using namespace std;
int main()
{
    int array[]={5,6,8,8};
    int n =sizeof(array)/4;
    int product = 1;
    for(int i=0;i<n;i++)
    product *=array[i];
    cout<<product;
}
