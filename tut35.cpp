#include<iostream>
using namespace std;
int counter=0;
class num{
    public:
    num()
    { counter++;
        cout<<"we running the constructor of the this class "<<counter <<endl;

    }
    ~num()
    {
        cout<<"we are destroying the objects  destructor program "<<endl;
        counter--;
    }

};
int main()
{cout<<"we are in the main block"<<endl;
cout<<"creating object of the num class "<<endl;
num n1;
{
    cout<<"We are entering in block "<<endl;
    cout<<"we are creating two more objects "<<endl;
    num n2,n3;
    cout<<"we are exiting from the block "<<endl;
}
cout<<"back to main block  "<<endl;

    
}