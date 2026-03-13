#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows";
    cin>>r;
    for(int i=0;i<r;i++){
        for(int j=0;j<r-i;j++){
        cout<<" ";}
        
        for(int j=0;j<=i;j++){
           // if(i==j || (i+j)==(r-1))
             cout<<"*";
            //else cout<<" ";
        }
        cout<<endl;
    }
}