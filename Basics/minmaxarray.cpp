#include <iostream>
using namespace std;
void minmax(int arr[] , int n){
    
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
         if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"MAXIMUM VALUE IS : "<<max<<endl;
    cout<<"MINIMUM VALUE IS : "<<min<<endl;
}
int main() {
     int arr[]={1,54,55,43,222,5};
     int n=sizeof(arr)/4;
    minmax(arr,n);
}