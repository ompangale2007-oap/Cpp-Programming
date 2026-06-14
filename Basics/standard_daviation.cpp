#include<iostream>
#include<cmath>
using namespace std;
float  stnd(int arr[],int n){
    float sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    float mean;
        mean = sum / n;
         
         float sq=0;
         for(int i=0;i<n;i++){
             sq +=pow(arr[i] - mean, 2);
    }
    float variance = sq / n;
    return sqrt(variance);
}

int main()
{
    int arr[]={1,33,2,4,5,5,4};
    int n = sizeof(arr)/4;
    cout<<stnd(arr,n);
    
}
