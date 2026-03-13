#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    cout << "Original string: " << s << endl;
    s.pop_back(); // reducing a character () to the end of the string
    cout << "String after pop_back: " << s << endl;
}