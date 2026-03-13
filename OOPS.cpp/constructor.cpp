#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int rollno;
    float gpa;
    student(){
        //default constructer, if we run both type of initialization at a time then we need this
    } 
        
    
    student(string n,int a,int r,float g){  //constructer
        name = n;
        age = a;
        rollno = r;
        gpa = g;
    }
};
void print(student a){
    cout<<"Name of student : "<<a.name<<endl;
    cout<<"age : "<<a.age<< "year"<<endl;
    cout<<"Roll no : "<<a.rollno<<endl;
    cout<<"gpa : "<<a.gpa<<endl;
}
int main(){

    //1st type
    student a("Arjun tiwari",20,51,8.5);

    //2nd type
    student b; // use default constructer
    b.name = "Karan tiwari";
    b.age = 21;
    b.rollno = 54;
    b.gpa = 8.7;

    //output
    print(a);
    print(b);
}