#include<iostream>
using namespace std;
int main()
{

    int array[3][3]={5,6,7,98};

        
              int maximum = array[0][0];
          for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
        if(array[i][j] > maximum){
        maximum = array[i][j];

        }
   
    }
    
}
cout<<maximum;
}