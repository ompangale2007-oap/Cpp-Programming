#include<iostream>
using namespace std;
class vec{
    public:
    int size;
    int capacity;
    int* arr;
vec(){
     size;
     capacity;
     arr= new int[1];
}
void add(int ele){
    if(size==capacity){
        capacity*= 2;
        int* arr2=new int[capacity];
        for(int i=0;i<size;i++){
        arr2[i]=arr[i];
        }
        arr=arr2;
    }
    arr[size++]=ele;
}
    void print(){
        for (int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};
int main(){
vec v;
v.add(10);
v.print();
}