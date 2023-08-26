#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void set_data(int a)
    {
       this-> a=a;  // This is the key words which is a pointer which point the object that is 
                   //invockes the member function of the class 
    }
    void get_data()
    {
        cout<<"The value of the a is "<<a<<endl;
    }
};
int main()
{
    A khan;
    khan.set_data(50);
    khan.get_data();
    
}