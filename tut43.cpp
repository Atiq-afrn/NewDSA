// /* ambigiuty in the class called 
// when the  there are same type of constructor in all class and created a  so the compiler get confused which constructor is called */
// #include <iostream>
// using namespace std;
// class base1
// {
// public:
//     void greet()
//     {
//         cout << "hello how are you " << endl;
//     }
// };
// class base2
// {
// public:
//     void greet()
//     {
//         cout << " kese ho " << endl;
//     }
// };
// class derived : public base1, public base2
// {
// public:
//     void greet()
//     {
//         base1::greet();
//     }
// };
// int main()
// {
//     // base1 base1obj;
//     // base2 base2obj;
//     // base1obj.greet();
//     // base2obj.greet();
//     derived obj;
//     obj.greet();
// }
#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<sizeof(a); 
}