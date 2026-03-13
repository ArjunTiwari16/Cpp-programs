#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price";
    cin>>cp;
    cout<<"Enter Selling Price";
    cin>>sp;
    if(cp==sp) cout<<"No Profit and Loss";
    else if(sp>cp) cout<<"Profit is "<<sp-cp;
    else cout<<"Loss is "<<cp-sp;
}