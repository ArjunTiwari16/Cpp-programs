#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;
    if(a>b) {
    if(a>c) 
        cout<<a<<" :  is gratest";
    else 
        cout<<c<<" :  is greatest";
    }
    else 
    if(b>c)
        cout<<b<<" :  is greatest";
    else
        cout<<c<<" :  is greatest";

}