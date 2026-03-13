#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter 1st matrix element"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        }
        cout<<endl;
    }
    int mx = INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        mx = max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}