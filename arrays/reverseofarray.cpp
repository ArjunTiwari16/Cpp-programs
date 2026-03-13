#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //reverse
    int j=0,k=n-1;
    while(j<k)
    {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
        j++,k--;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}