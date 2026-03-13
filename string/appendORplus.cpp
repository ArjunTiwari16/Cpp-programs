#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    cout<<s<<endl;
    //s.append(" Tiwari"); // Appending " Tiwari" to the string
    // OR
    s += " Tiwari"; // Using the += operator to append
    s = "Tiwari " + s;
    cout<<"String after append: "<<s<<endl;
}