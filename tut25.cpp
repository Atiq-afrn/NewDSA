#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salery;

public: 
void getIS(void)
    {
        cout << "Enter the salery of employee" << endl;
        cin >> salery;
        cout << "Enter the employee ID" << endl;
        cin >> id;
    }
    void show(void)
    {
        cout << "Salery of the employee is " << salery << "  with the ID " << id<<endl;
    }
};
int main()
{
    Employee ati[4];
    for (int i = 0; i < 1; i++)
    {
        ati[i].getIS();
        ati[i].show();
    }
    return(1);
}