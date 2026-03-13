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
    int transpose[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
        //arr[i][j];
        //cout<<arr[i][j]<<" ";
        transpose[i][j] = arr[j][i];
        }
        cout<<endl;
    }
    cout<<"Transpose of the matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}