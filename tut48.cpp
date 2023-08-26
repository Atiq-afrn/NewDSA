#include<iostream>
using namespace std;
/*
class B:public A
{
    order of the execution of the constructor is first A() and then B() 

}
class :public A,public C
{
    the order of execution of the constructor is  
    A() and  then C()
}
class A:public B,virtual public C
{
    the order of the execution of the constructor is th first virtual class get reference 
    C() then  B() 
}
*/
// class Base1
// {
//     int data1;
//     public:
//     Base1(int x)
//     {
//         data1=x;
//         cout<<"The Base1 constructor is called "<<endl;
//     }
//     void get_data()
//     {
//         cout<<" The value of data1 is "<<data1<<endl;
//     }

// };
// class Base2
// {
//     int data2;
//     public:
//     Base2(int x)
//     {
//         data2=x;
//         cout<<"The Base2 constructor is called "<<endl;
//     }
//     void get_data()
//     {
//         cout<<" The value of data2 is "<<data2<<endl;
//     }

// };
// class Derived :public Base1,public Base2
// {
// int derived1,derived2;
// public:
// Derived(int a,int b,int c,int d):Base1(a),Base2(b)

// {
//     derived1=c;
//     derived2=d;
//     cout <<"The derived constructor is called "<<endl;
// }
// void print_data()
// {
//     Base1::get_data();

//     cout<<"The value of derived1 is "<<derived1<<endl;
//     cout<<"The value of the derived2 is "<<derived2<<endl;
// }
// };
// int main()
// {
//     Derived obj(10,20,30,40);
    
//     obj.print_data();
    
// }

#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9,j=10;
    for(int i=1;i<=10;i++)
    {
     cout<<a*i<<" "<<b*i<<" ";
     cout<<c*i<<" "<<d*i<<" ";
     cout<<e*i<<" "<<f*i<<" ";
     cout<<g*i<<" "<<h*i<<" ";
     cout<<j*i<<" "<<endl;
    }
}