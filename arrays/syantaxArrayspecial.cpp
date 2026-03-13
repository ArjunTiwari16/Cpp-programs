#include<iostream>
using namespace std;
void loop(int n){
    if(n==0) return;
    cout<<n;
    loop(n-1); 
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    cin>>arr[i];}
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<endl;}
    loop(arr[5]);
}