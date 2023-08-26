#include<iostream>
using namespace std;
class complex{
    int real, complex;
    public:
    void set_data(int a, int b)
    {
real=a;
complex=b;
    }
    void get_data()
    {
        cout<<"The real part is "<<real<<endl;
        cout<<" The complex part is "<<complex<<endl;
    }

};
int main()
{

   complex c1;

   complex *ptr=&c1;  
//    c1.set_data(20,30);
//    c1.get_data(); 
(*ptr).set_data(20,60);
(*ptr).get_data();

complex *ptr1=new complex;
ptr1->set_data(40,60);
ptr1->get_data();
int i;
cout<<sizeof(i);

}