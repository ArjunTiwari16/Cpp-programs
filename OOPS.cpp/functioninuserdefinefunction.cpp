#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int run;
            //same name ,using (this) keyword
    cricketer(string name,int run){
        this->name = name;
        this->run = run;
    }
    void print(){
        cout<<"Name of cricketer : "<<name<<endl;
        cout<<"run : "<<run<<endl;  
    }
};

int main(){

    cricketer a("Rohit sharma",18000);
    cricketer b("Virat kohali",25000);

    a.print();
    b.print();
}