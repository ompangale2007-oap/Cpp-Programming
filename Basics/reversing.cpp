#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="REVERSING";
    cout<<s<<endl;
    int n = s.length();
 
    reverse(s.begin(),s.begin()+3);
    cout<<s;
}
