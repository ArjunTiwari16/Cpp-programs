#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    string model;
    int capacity;
    float bhp;

    Car()
    {
        // default constructor ,,for (type 2)
    }

    Car(string n, string m, int c, float b)
    {
        name = n;
        model = m;
        capacity = c;
        bhp = b;
    }
};

void print(Car x)
{
    cout << "Name of Car : " << x.name << endl;
    cout << "Model of Car : " << x.model << endl;
    cout << "Sheat : " << x.capacity << endl;
    cout << "bhp : " << x.bhp << endl;
}

int main()
{
    // type 1
    Car a("TOYOTA FORTUNER", "SUV", 7, 405);

    // type 2
    Car b;
    b.name = "TATA SAFARI";
    b.model = "SUV";
    b.capacity = 7;
    b.bhp = 380;
    // output
    print(a);
    print(b);

    return 0;
}