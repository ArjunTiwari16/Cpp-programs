#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number";
    cin>>n;
    int* p = &n;  //pointer
    cout<<p<<endl;
    cout<<&n<<endl;
    cout<<*p<<endl;
    cout<<n;
}