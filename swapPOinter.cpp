//Pass by Reference ****
#include<iostream>
using namespace std;
void swap(int* a,int* b){
int temp=*a;
    *a=*b;
    *b=temp;
    }
int main(){
    int x,y;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    cout<<"before swap "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"after swap "<<x<<" "<<y;
}