#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int arr[n];
    int a=sizeof(arr)/4;
    for(int i=0;i<a;i++){
        arr[i] = (i+1)*(i+1) ;
        cout<<arr[i]<<" ";
    }
}