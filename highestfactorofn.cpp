#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0)
        { 
        cout<<i;
        break;
        }
}
// int a=1;
// for(int i=1;i<=n/2;i++){
//     if(n%i==0) a=i;
// }
// cout<<a;
}