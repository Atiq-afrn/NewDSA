// #include<iostream>
// using namespace std;
// class A   // In this program the base class will be printed first then derived class

// {
//     public:
//     A()
//     {
//         cout<<"A"<<endl;
//     }

// };
// class B:public A
// {
//     public:
//     B(){
//         cout<<"B"<<endl;
//     }
// };
// int main()
// {
//     B obj;

// }

// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     A(int x)
//     {
//         cout<<"A"<<x<<endl;
//     }
// };
// class B :public A
// {
//     public:
//     B(int x,int y):A(x)
//     {

// cout<<"B"<<y<<endl;
//     }
// };
// int main()
// {
//     B obj(40,30);

// }

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     A()
//     {
//         cout << "A" << endl;
//     }
// };
// class C
// {
// public:
//     C()
//     {
//         cout << "C" << endl;
//     }
// };
// class B : public C, A
// {
//     public:
//     B()
//     {
//         cout << "B" << endl;
//     }
// };
// int main()
// {
//     B obj;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{

    int a = 0;
    do
    {
        cout << a+a<< endl;
        a+=2;
    } while (a <= 100);
}