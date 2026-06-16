#include <iostream>
using namespace std; 
int main() {
    
    int arr[]={1,23,4,5,3,5,56,8};
    
                int n=sizeof(arr)/4;
                int even=0;
                int odd=0;
    
    for(int i=0;i<n;i++){
            if(arr[i] % 2==0){
            even++;
     
        }
            else{
            odd++;
        }
    }
    
cout<<"EVEN COUNTING  : "<<even<<endl;
cout<<"ODD COUNTING : "<<odd<<endl;
}