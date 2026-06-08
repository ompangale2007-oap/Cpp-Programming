#include<iostream>
using namespace std;
int main()
{

    int array[]={5,6,7,98};

        int n =sizeof(array)/4;
              int minimum = array[0];
          for(int i=0;i<n;i++){
        if(array[i] < minimum){
        minimum = array[i];

        }
   
    }
    cout<<minimum;
}