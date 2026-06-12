#include <iostream>
using namespace std;

int main() {
   int start;
   cout << "ENTER STARTING RANGE : ";
   cin >> start;
   
   int end;
   cout << "ENTER ENDING RANGE : ";
   cin >> end;
   
   for (int i = start; i <= end; ++i) {
        if (i <= 1) {
            continue;
        }
 int j;
        for ( j = 2; j <= i ; ++j) {
            if (i % j == 0) {
                break;           
            }
        } 
        if (j > i / 2) {
            cout << i << " ";
        } 
   } 
}