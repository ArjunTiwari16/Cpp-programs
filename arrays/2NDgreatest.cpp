#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int mx = INT_MIN;
    for(int j=0;j<n;j++) mx=max(mx,arr[j]);
    int smx = INT_MIN;
    for(int j=0;j<n;j++) 
    if(mx!=arr[j]) smx=max(smx,arr[j]);     
    cout<<smx;  
}