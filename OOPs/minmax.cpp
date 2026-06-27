#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v={1,4,56,6,7};
int min = v[0];
    int max = v[0];

    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < min) {
            min = v[i];
        }
        if (v[i] > max) {
            max = v[i]; 
        }
    }
cout<<max<<endl;
cout<<min;
}