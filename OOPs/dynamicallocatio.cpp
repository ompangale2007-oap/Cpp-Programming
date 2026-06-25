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
     
};

int main(){
 player s1 = {"p1",20000,56.3};
  player* s2 = new player("p2",30000,86.3);
    cout<<s1.name<<" "<<s1.run<<" "<<s1.avg<<endl;
    cout<<s2->name<<" "<<s2->run<<" "<<s2->avg<<endl;
}