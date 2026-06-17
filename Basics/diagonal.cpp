#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{2,3,4},{4,5,6},{7,9,2}};
    cout<<"1st DIAGONAL IS : "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i][i]<<" "<<endl;

    }
    cout<<"2nd DIAGONAL IS : "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i][2-i]<<" "<<endl;

    }
}