#include<iostream>
using namespace std;
class student{  // user define data type
    public:
    string name;
    int rollno;
    float gpa;
};
void print(student s){
    cout<<s.name<<endl<<s.rollno<<endl<<s.gpa<<endl;
}
int main(){
        student s;
    cout<<"Enter name of student";
    getline(cin,s.name);
    cout<<"Enter roll no of student";
    cin>>s.rollno;
    cout<<"Enter gpa of student";
    cin>>s.gpa;

        student s2;
    cout<<"Enter name of student";
    //cin>>s2.name;
    cin.ignore(); // Flush leftover newline from previous input
    getline(cin,s2.name);
    cout<<"Enter roll no of student";
    cin>>s2.rollno;
    cout<<"Enter gpa of student";
    cin>>s2.gpa;

    print(s);
    print(s2);
}