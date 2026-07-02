#include<iostream>
using namespace std;
class bank_acc{
    private:
    double balance;
    public:
    bank_acc(double initial_bal){
        if(initial_bal>=0)
        balance = initial_bal;
        else 
        balance=0;
    }
double getbalance(){
    return balance;
}
 void deposit(double amount){
    if(amount>0){
        balance +=amount;
    
    }
    else{
        cout<<"invalid deposit amount ";
    }
 }
};
int main(){
    bank_acc Acc(200.0);
    Acc.deposit(500.0);
    cout<<"current balance : "<<Acc.getbalance()<<endl;
    Acc.deposit(-30.4);
    
}