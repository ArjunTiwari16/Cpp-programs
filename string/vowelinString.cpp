#include<iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter string";
    getline(cin,x); 
    cout<<x<<endl;
    int count = 0;
    for(int i = 0; i < x.length(); i++){
        char ch = x[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    cout << "Number of vowels in the string: " << count << endl;
}