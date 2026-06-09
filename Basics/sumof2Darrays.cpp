#include<iostream>
using namespace std;
int main()
{
    int array[3][3]={2,3,4,5,6,7};
    int arr[3][3]={7,8,8,9,6,5};
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sum[3][3] = array[i][j]+arr[i][j];
            
        cout<<sum[3][3]<<"  ";
    }
}
cout<<endl;
}

    
    