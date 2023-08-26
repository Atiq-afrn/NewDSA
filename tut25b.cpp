#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void getdata(int v1, int v2)

    {
        a = v1;
        b = v2;
    }
    void setdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void showNumber()
    {
        cout << "your complex number is " << a << " + i" << b << endl;
    }
};
int main()
{
    complex C1, C2, C3;
    C1.getdata(20, 30);
    C1.showNumber();

    C2.getdata(10, 20);
    C2.showNumber();

    C3.setdata(C1, C2);
    C3.showNumber();
}