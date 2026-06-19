#include <iostream>
using namespace std;
int p(int n, int m){
    if(m==0 ){
        return 1;
    }
    return n*p(n , m-1);
}
int main() {
    int n;
    cout<<"Enter base : ";
    cin>>n;
    int m;
    cout<<"Enter index : ";
    cin>>m;
    cout<<n<<" to the power "<<m<<" is : "<<n<<"^"<<m<<" = "<<p(n , m);
    
}