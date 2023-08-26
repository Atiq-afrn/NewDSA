// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;
//     friend complex sumOfcomplex(complex o1,complex o2); // after the friend the complex is the data type just like the int,void double etc

// public:
//     void setdata(int C1, int C2)
//     {
//         a = C1;
//         b = C2;
//     }
//     void showdata()
//     {
//         cout<<"your complex number is "<<a<<" + i"<<b<<endl;
//     }
// };
// complex sumOfcomplex(complex o1,complex o2)
// {
//     complex sum;
//     sum.setdata((o1.a + o2.a),(o1.b + o2.b));
// return sum;

// }
// int main()
// {
//     complex Atiq,khan, sum;
//     Atiq.setdata(20,30);
//     Atiq.showdata();

//     khan.setdata(10,30);
//     khan.showdata();

//     sum=sumOfcomplex(Atiq,khan);
//     sum.showdata();

// }
#include<iostream>
using namespace std;
class Atiq{
    int a=10,b=20;
    public:
    void showdata()
    {
        cout<<a<<b;
    }
};
