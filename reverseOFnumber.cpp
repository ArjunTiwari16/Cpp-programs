#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int i=0,r=0;
    while(n>0){
        int ld=n%10;
        i=i*10;
        r+=ld;//for sum of number
        i=i+ld;
        n=n/10;
    }
    cout<<"reverse of digit is "<<i<<endl;
    cout<<"sum of digit is "<<r;
}