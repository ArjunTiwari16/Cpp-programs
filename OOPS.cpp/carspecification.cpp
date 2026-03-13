#include<iostream>
using namespace std;
class cars{
    public:
    string name;
    int hp;
    float torque;
    float engine;
};

void print(cars c){
    cout<<c.name<<endl<<c.hp<<endl<<c.torque<<endl<<c.engine<<endl;
}
int main(){
    cout<<"Specification of cars"<<endl;

    cars c;
    cout<<"Enter name of car";
    cin.ignore();
    //getline(cin,c.name);
    cout<<"Enter HP of car";
    cin>>c.hp;
    cout<<"Enter torque of car";
    cin>>c.torque;
    cout<<"Enter Engine CC of car";
    cin>>c.engine;
  
    
    cars c2;
    cout<<"Enter name of car";
    cin.ignore();
    getline(cin,c2.name);
    cout<<"Enter HP of car";
    cin>>c2.hp;
    cout<<"Enter torque of car";
    cin>>c2.torque;
    cout<<"Enter Engine CC of car";
    cin>>c2.engine;
    
    print(c);
    print(c2);
    
}