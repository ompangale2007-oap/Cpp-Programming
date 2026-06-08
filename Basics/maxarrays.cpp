#include<iostream>
using namespace std;
int main()
{

    int array[]={5,6,7,98};

        int n =sizeof(array)/4;
              int maximum = array[0];
          for(int i=0;i<n;i++){
        if(array[i] > maximum){
        maximum = array[i];

        }
   
    }
    cout<<maximum;
}