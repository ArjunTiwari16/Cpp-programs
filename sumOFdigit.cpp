#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int i=0;
    while(n>0){
        //int ld=n%10;
        n=n/10;
        //i+=ld;
        i++;
    }
    cout<<"sum of digit is "<<i;
}