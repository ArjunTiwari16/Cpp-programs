#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter an integer: ";   
    cin >> x;
    string str = to_string(x); // Converting integer to string
    cout << "The string representation of the integer is: " << str << endl;
    cout<<"Total number of digit is ; "<<str.length() << endl; // Displaying the length of the string
}