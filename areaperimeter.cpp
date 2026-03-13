#include<iostream>
using namespace std;
int main(){
    float l,b,area,perimeter;
    cout<<"Enter Length of Rectangle ";
    cin>>l;
    cout<<"Enter Breadth of Reactangle ";
    cin>>b;
    area = l*b,perimeter=2*(l+b);
    if(area==perimeter) cout<<"Area and Peremeter are equal";
    else if(area>perimeter) cout<<"Area is greater than its peremeter";
    else cout<<"Perimeter is greater than its area";
}