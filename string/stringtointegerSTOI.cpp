#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int num = stoi(s); // Converting string to integer
    cout<< "The integer representation of the string is: " << num << endl;
    cout << "Total number of digits in the string is: " << s.length() <<endl;
}