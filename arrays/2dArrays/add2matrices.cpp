#include<iostream>
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
    int brr[2][3];
    cout<<"Enter 2nd matrix element"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        cin>>brr[i][j];
        }
        cout<<endl;
    }
    cout<<"some of two matrix is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
        }
        cout<<endl;
    }
}