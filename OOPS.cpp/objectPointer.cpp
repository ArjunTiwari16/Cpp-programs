#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int run;
    cricketer(string n,int r){
        name = n;
        run = r;
    }
};
void print(cricketer* c1){
    cout<<(*c1).name<<" "<<(*c1).run<<endl;
}
int main(){
    cricketer c1("Virat kohali",25000);

    cout<<c1.name<<" "<<c1.run<<endl;
    cricketer* p = &c1;
    //(*p).name = "Arjun";
          // OR   //
    p->name = "Arjun";
    print(p);

        //dynamic memory alocation
    cricketer* c2 = new cricketer("Rohit sharma",18000);
    //cout<<(*c2).name<<" "<<(*c2).run<<endl;
    cout<<c2->name<<" "<<c2->run<<endl;
}  