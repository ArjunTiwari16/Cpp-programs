#include<iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter string";
    //cin>>x;     //if we enter space than it can not recognize word after space
    //then we can use it getlin(cin,name of string)//
    getline(cin,x); 
    cout<<x<<endl;
    string str = "Arjun is a student";
    cout<<str;
}