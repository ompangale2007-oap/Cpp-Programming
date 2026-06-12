#include <iostream>
using namespace std;
int main() {
    int binary;
    cout<<"ENTER BINARY NUMBER : ";
    cin>>binary;
               int abc=binary;
               
               int decimal=0;
               
               int base=1;
               
    while(binary>0){
               int last_digit = binary %10;
              
              binary = binary /10;
               
               decimal +=last_digit*base;
               
               base*=2;
               
              }
               cout<<decimal;
               
              }