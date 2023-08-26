#include <iostream>
using namespace std;
class number
{
    int a, b;
    string str;

public:
    number(int, int,string); // parametrized constructor decleration
    void showdata()
    {
        cout << "your number is " << a << " + i" << b <<" "<<str<< endl;
    }
};
number::number(int x, int y,string z)
{
    cout << "your number is " << endl;
    a = x;
    b = y;
    str=z;
}

int main()
{
    number a(20, 30,"khan");
    a.showdata();
}