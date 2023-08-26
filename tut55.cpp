// #include <iostream>
// using namespace std;
// class Base_Class
// {

// public:
//     int var_base;
//     void get_data()
//     {
//         cout << "the value of the valriable is " << var_base << endl;
//     }
// };
// class Derived : public Base_Class
// {
// public:
// int var_base;

//      void show_data()
//      {
//         cout<<"the value base class var is "<<var_base<<endl;
//         cout<<"The value of  derived var is "<<var_base<<endl;
//      }
// };
//  int main()
// {

//     Base_Class *base_class_pointer;
//     Base_Class obj_base;
//     Derived obj_derived;
//     base_class_pointer = &obj_derived;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int a=0;  // 1,2,4,7,11

//    for(int i=0;i<4;i++)
//    {
//     a=a+i;
//     cout<<a<<endl;
//    }

//     return 0;
// }

#include <iostream>
using namespace std;
class baseclass
{
    int var_base;

public:
    void base_display()
    {
        var_base = 2000;
        cout << "Display the baseclass variable " << var_base << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "Display the derived class varible " << var_derived << endl;
    }
};
int main()
{
    baseclass *pointer_base;
    baseclass obj_base;
    derivedclass obj_derived;
    pointer_base = &obj_base;
    // pointing the base class pointer to derived class object 02241792999
    // obj_base.base_display();
    // pointer_base->var_base = 52;
    // pointer_base->base_display();
    obj_base.base_display();
    derivedclass *derived_pointer;
    // derivedclass obj_derived;
    derived_pointer = &obj_derived;
    derived_pointer->var_derived = 1000;
    derived_pointer->display();
}
