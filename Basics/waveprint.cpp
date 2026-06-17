#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{2,3,4},{3,5,6},{78,64,90}};
    cout<<"WAVE PRINT : ";
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";

            }
        }
        else{
            for(int i=2;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}