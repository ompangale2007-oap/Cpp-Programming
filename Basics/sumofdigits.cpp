#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER n : ";
    cin>>n;
    int sum = 0;

    
    
       while(n!=0)
    {
        int last_digit;
        last_digit= n % 10;
        
        n = n / 10;
        sum = sum + last_digit;
                
    }
    cout<<"SUM OF ALL DIGITS  IS : "<<sum;
}