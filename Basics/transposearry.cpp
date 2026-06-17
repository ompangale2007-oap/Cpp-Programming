#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{23,4,4},{1,24,5}};
    
    for(int i=0;i<3;i++){
        for(int j=i+1;i<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }
    for(int i=0;i<3;i++){
        for(int j=0;i<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}