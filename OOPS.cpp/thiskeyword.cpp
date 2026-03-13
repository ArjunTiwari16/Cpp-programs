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
                   //   OR   //
               // different name
    // cricketer(string n,int r){
    //     run = r;
    //     name = n;
    // }
};

void print(cricketer a){
    cout<<"Name of cricketer : "<<a.name<<endl;
    cout<<"run : "<<a.run<<endl;
}

int main(){

    cricketer a("Rohit sharma",18000);
    cricketer b("Virat kohali",25000);

    print(a);
    print(b);
}