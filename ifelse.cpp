#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number";
    cin>>x;
    if(x==0) cout<<"even number";
    else if(x%2==0) cout<<"even number";
    else cout<<"odd number";
}