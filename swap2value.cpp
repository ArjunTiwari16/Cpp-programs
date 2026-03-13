#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    cout<<"before swap "<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    // //OR
    // int temp=x;
    // x=y;
    // y=temp;
    cout<<"after swap "<<x<<" "<<y;
}