#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int num)
    {
        a = num;
    }
    number(number &obj) // when no copy constructor is not  found the  complier asign a default copy cosntrcutor

    {
        cout << "copy contructor is called " << endl;
        a = obj.a;
    }
    void displaydata()
    {
        cout << "The data which u have entred is " << a << endl;
    }
};
int main()
{
    number a(20), b, c;

    a.displaydata();
    b.displaydata();
    c.displaydata();

    number a1(c);
    a1.displaydata();

    number z3 = c; // copy constructor invocked because we created the object in the same line
    
}