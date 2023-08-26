#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 20;
    data2 = 30;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}
class derived : private base // data is derivedfrom base class publically ;
{
    int data3;
    public:
    void process();
    int display();
};
void derived :: process()
{
    data3 = data2* getdata1();
}
int derived :: display()
{
    setdata();
    cout<<"The value of data1 is "<<getdata1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of the  data3 is "<<data3<<endl;
}
int main()
{
    derived afrn;
   // afrn.setdata();
    afrn.process();
    afrn.display();
}