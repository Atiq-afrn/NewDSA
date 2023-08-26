#include <iostream>
using namespace std;
/*
 Default visibility mode is private in inheritance
 public visibility mode: public member of the base class become the public member of the derived class
 private visibility mod: public member of the base class become the private member of the derived class
 private member of the base class never be inherited

 */

class employee
{

public:
    int id;
    int salery;
    employee(int i)
    {
        id = i;
        salery = 500;
    }
    employee() {}
};

class programmer : employee
{
public:
    programmer(int inpId ,int sal)
    {
        id = inpId;
        salery=sal;
    }
    int programmercode = 200;
    void showdata()
    {
        cout<<"The id of the employee programmer "<<id<<endl;
        cout<<"salery of the employee programmer "<<salery<<endl;
    }
};

int main()
{
    employee atiq(40), afrn(41);

    cout << atiq.salery << endl;

    cout << afrn.salery << endl;

    programmer shafiq(20,5000);
    //cout << " this is the programmer code" << shafiq.programmercode << endl;
    shafiq.showdata();
    
}