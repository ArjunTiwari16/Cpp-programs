#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    cout << "Original string: " << s << endl;
    s.push_back('A'); // Adding a character 'A' to the end of the string
    cout << "String after push_back: " << s << endl;
}