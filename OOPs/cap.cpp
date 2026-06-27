#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v(6);
for(int i=0;i<6;++i){
    v.push_back(i);
    cout<<"capacity of vector is : "<<v.capacity()<<endl;
}

}