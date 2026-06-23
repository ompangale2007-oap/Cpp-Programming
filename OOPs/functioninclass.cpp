#include<iostream>
using namespace std;
class player{
    public:
             string name;
            int run;
            float avg;
    player(){
    }
    player(string name , int run ,float avg){
              this->name=name;
             this->run=run;
             this->avg=avg;
    }
    void print(){
            cout<<name<<" "<<run<<" "<<avg<<endl;
    }
    int matches(){
               return run/avg;
    }
};
int main(){
            player s1 = {"p1",20000,56.3};
            player s2 = {"p2",30000,58.6};
            s1.print();
            s2.print();
    cout<<s1.matches();
}