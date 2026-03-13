#include<iostream>
using namespace std;
int main(){
    int arr[5][4];
    cout<<"Enter 1st matrix element"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
        cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum = 0;
    int x1,y1,x2,y2;
    cout<<"Enter x1"<<endl;
    cin>>x1;
    cout<<"Enter y1"<<endl;
    cin>>y1;
    cout<<"Enter x2"<<endl;
    cin>>x2;
    cout<<"Enter y2"<<endl;
    cin>>y2;
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){   
        sum += arr[i-1][j-1];
        }
    }
    cout<<sum;
}