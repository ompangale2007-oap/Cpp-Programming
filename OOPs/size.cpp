#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v(6);
for(int i=0;i<6;++i){
    v.push_back(i);
    cout<<"size of vector is : "<<v.size()<<endl;
}

}