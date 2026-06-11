#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"ENTER x CO-ORDINATE : ";
    cin>>x;
    int y;
    cout<<"ENTER y CO-ORDINATE : ";
    cin>>y;
    
    if (x > 0 && y > 0) {
    cout << "LIES IN 1ST QUADRANT" ;
    } 
    else if (x < 0 && y > 0) {
        cout <<"LIES IN 2ND QUADRANT"  ;
    } 
    else if (x < 0 && y < 0) {
    cout << "LIES IN 3RD QUADRANT" ;
    } 
    else if (x > 0 && y < 0) {
        cout << "LIES IN 4TH QUADRANT"; 
    }
    else if (x == 0 && y == 0) {
        cout << "AT ORIGIN ";
    } 
    else if (x == 0) {
        cout << "ON Y AXIS";
    } 
    else {
        cout << "ON X AXIS";
    }
}