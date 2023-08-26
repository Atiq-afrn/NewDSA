#include <iostream>
using namespace std;
// constructor overloading
class complex
{
    int a, b;
    string ab;

public:
    complex(string);
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
        cout<<ab<<endl;
    }
};
complex::complex(string str)
{
    ab = str;

    a=0;
    b=0;
}
int main()
{
    complex a(20, 10);

    complex v("my name is Atiqullah khan");
    a.showdata();
    v.showdata();
}