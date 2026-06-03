#include<iostream>
using namespace std;
int main()
{
    int CP;
    cout<<"COSTING PRICE : ";
    cin>>CP;
    int SP;
     cout<<"SELLING PRICE : ";
    cin>>SP;
    if(SP>CP){
        cout<<"profit"<<endl;
        cout<<"And profit is : ";
        cout<<SP-CP;
    }
    else if(SP<CP){
    cout<<"loss"<<endl;
    cout<<"And loss is : ";
    cout<<CP-SP;
    }
    else 
    cout<<"no profit , no loss";
    
}