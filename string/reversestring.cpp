#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    cout<<s<<endl;
    int a = s.length()/2;
     reverse(s.begin(),s.end()); // Reversing the entire string
    // reverse(s.begin(),s.begin()+a); // Reversing the HALF of string
    cout<<"Reversed string: "<<s<<endl;
}