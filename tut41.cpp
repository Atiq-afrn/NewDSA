// #include <iostream>
// using namespace std; // Example of multiple inheritance

// /*
// 1. The inherited member function will be look like this

//     Data member
//      int1--> protected
//      int2---> protected

//       member Function
//      get_int1--->public
//      get_int2--->public
//      show_data--->public

// */
// class Base1
// {
// protected:
//     int int1;

// public:
//     void get_Int1(int x)
//     {
//         int1 = x;
//     }
// };
// class Base2
// {
// protected:
//     int int2;

// public:
//     void get_int2(int x)
//     {
//         int2 = x;
//     }
// };
// class Base3 : public Base1, public Base2
// {
// public:
//     void show_data()
//     {

//         cout << int1 << " " << int2 << endl;

//         cout << "The sum of the two values is " << int1 + int2 << endl;
//     }
// };
// int main()
// {
//     Base3 obj;
//     obj.get_Int1(10);
//     obj.get_int2(20);
//     obj.show_data();
// }

#include <iostream>
using namespace std;
class Student
{
protected:
    string str;
    int roll_nunmber;

public:
    void set_details(int x, string str1)
    {
        roll_nunmber = x;
        str = str1;
    }
};
class Marks
{
protected:
    int physics;
    int maths;

public:
    void set_marks(int x, int y)
    {
        physics = x;
        maths = y;
    }
};
class Display : public Student, public Marks
{
    public:
    int display_details()
    {
        cout<<"Student name is "<<str<<endl;
        cout<<"Student roll number is "<<roll_nunmber<<endl;
        cout << "Student obtained marks in Maths " << maths << endl;
        cout << "Student obtained marks in Physics " << physics << endl;
        cout<<"The total percentage obtained by student is "<<(maths+physics)/2<<endl;
    }
};
int main()
{

   Display obj;
   obj.set_details(20,"Atiqullah khan");
   obj.set_marks(90,98);
   obj.display_details();
}
