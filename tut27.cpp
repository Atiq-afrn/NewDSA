// #include <iostream>
// using namespace std;
//  class complex;
// class calculator
// {
// public:

//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumComplex(complex,complex);
//     int sumlastComplex(complex, complex);
// };

// class complex
// {

//     int a, b;
//     // This the way by which we can declere individual function as class and we can also declere the whole class to access th
//     // data member of another class

//     // friend int calculator::sumComplex(complex , complex);
//     // friend int calculator::sumlastComplex(complex , complex);
//     friend class calculator;

// public:
//     void setdata(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void showdata()
//     {
//         cout << "your number is " << a << "and " << b;
//         //cout<<"your result of two number is"<<re<<endl;
//     }
// };
// int calculator::sumComplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int calculator::sumlastComplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     complex Atiq,Atiq2;
//     Atiq.setdata(20,32);

//     Atiq2.setdata(10,20);

//     calculator afrn;
//     int sum=afrn.sumComplex(Atiq,Atiq2);
//     cout<<"your real number is "<<sum<<endl;
//     calculator insha;
//     int comp=insha.sumlastComplex(Atiq,Atiq2);
//     cout<<"your complex number is "<<comp<<endl;
//     afrn.add(60,70);

// }
/*
#include <iostream>
using namespace std;
class y;
class x
{
    friend void add(x o1,y o2);
    int data;

public:
    void setdata(int v1)
    {
        data = v1;
    }
};
class y
{
    friend void add(x o1,y o2);
    int num;
    public:
    void setdata(int v2)
    {
        num = v2;
    }
};
void add(x o1, y o2)
{
    cout << "sum of the classes x and y is " << o1.data + o2.num << endl;
}
int main()
{
    x a;
    a.setdata(50);

    y b;
    b.setdata(50);
    add(a,b);
}3
*/
