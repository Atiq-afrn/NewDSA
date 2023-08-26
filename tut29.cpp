#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex(void); // this is the defaul constructor
    // constructor is special type member function which is autometically initialized when the object 
    // is created
    // constructor always declared in public section
    //the constructor which have no parametere is called the default constructor
    //constructor has no return type
    // constructor is used to initialize the object
    // we cant refer to their address 
    void show(void)
    {
        cout << "your number is " << a << " i+" << b << endl;
    }
};
complex::complex()
{
    a = 10;
    b = 20;
}

int main()
{
    complex ab;
    ab.show();
}