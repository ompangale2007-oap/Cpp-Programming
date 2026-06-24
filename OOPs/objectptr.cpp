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
void change(player* c){
        (*c).avg =88.9;
    }
int main(){
 player s1 = {"p1",20000,56.3};
    change(&s1);
            player*p1 =&s1;
                cout<<(*p1).run<<endl;
            
                    cout<<p1->name<<endl;
                        cout<<(*p1).avg;
        
}