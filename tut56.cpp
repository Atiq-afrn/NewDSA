#include<iostream>
using namespace std;
class baseclass
{
    int base_var=10; 
    public:
    virtual void display()
    {
        cout<<"The value of base class variabel is "<<base_var<<endl;
    }
};
 class derived_class:public baseclass
 {

int derived_var=20;
public:
void display()
{
    cout<<"The value of the deived class is "<<derived_var<<endl;
}
 };
int main()
{

  baseclass obj_base;
  baseclass *base_pointer;
  derived_class obj_derived;
  base_pointer= &obj_derived;
  base_pointer->display(); 
}
