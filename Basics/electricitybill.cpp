#include<iostream>
 using namespace std;
 int main()
{
 float unit;
 cout<<"ENTER HOW MANY UNIT CONSUMED: ";
 cin>>unit;

 float total_bill=0.0;

if(unit<=100){
 total_bill = unit * 3.50;
 }

else if(unit<=300){
 total_bill=(100 * 3.50) +((unit - 100)* 5.50);
 }

else{
 total_bill=(100 * 3.50)+ (200 *5.50)+((unit - 300) * 8.00);
 }
 
 cout<<"TOTAL ELECTRICITY BILL IS: "<<total_bill<<" rs";
 }