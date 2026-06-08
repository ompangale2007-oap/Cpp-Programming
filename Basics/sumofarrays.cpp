#include<iostream>
using namespace std;
int main()
{
    int array[]={5,6,8,9,};
    int n =sizeof(array)/4;
    int sum = 0;
    for(int i=0;i<n;i++)
    sum = sum +  array[i];
    cout<<sum;
}
