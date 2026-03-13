#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    cout<<s<<" "<<s.length()<<endl;
    s.clear(); // clearing  all to the string
    cout<<"String after clear: "<<s<<" "<<s.length()<<endl;
}