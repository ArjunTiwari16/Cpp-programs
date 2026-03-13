#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool flag=true;
    int a=0,b=n-1;
    while (a<b)
    {
        if(arr[a]!=arr[b]) flag=false;
        a++,b--;
    }
if(flag==true) cout<<"yes,it is palindrom";
else cout<<"no,it is not palindrom";
}