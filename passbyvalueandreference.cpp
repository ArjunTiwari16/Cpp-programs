//Pass by Value******
#include<iostream>
using namespace std;
void swap(int x,int y){
int temp=x;
    x=y;
    y=temp;
    }
int main(){
    int x,y;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    cout<<"before swap "<<x<<" "<<y<<endl;
     swap(x,y);
    cout<<"after swap "<<x<<" "<<y;
}

// Pass by Reference ****
// #include<iostream>
// using namespace std;
// void swap(int& x,int& y){//only add &(address) operator
// int temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x,y;
//     cout<<"Enter first number";
//     cin>>x;
//     cout<<"Enter second number";
//     cin>>y;
//     cout<<"before swap "<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<"after swap "<<x<<" "<<y;
// }