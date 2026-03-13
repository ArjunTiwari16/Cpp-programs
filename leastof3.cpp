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
    if(a<b && a<c) cout<<"a is smalest : "<<a;
    else if(b<a && b<c) cout<<"b is smalest : "<<b;
    else cout<<"c is smalest : "<<c;
}