#include<iostream>
using namespace std;
void print(int x){
if(x==0) return;  //base case
cout<<x;     //work
print(x-1);  //call
}
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    print(n);
}