#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of arry made";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = true;
    int j=0,k=n-1;
    while(j<k){
    if(arr[j]!=arr[k]){ 
    flag = false;
        break;
}
    j++;
    k--;
    }
    if(flag == true) cout<<"given array is palindrom";
    else cout<<"no palindrom";
}