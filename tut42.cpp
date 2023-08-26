#include <iostream>
#include <math.h>
using namespace std;
/*
teat 
Creat two class
 1. creat calculator take two input using utility function
 and perform the +,-,*,/
 and display the result using another function
2. creat the scintific calculator
take  two input  and perform the any four scientifi calculation by your choice
and display the result using the utility function

3. creat the another class  that is hybridcalculator and inherits these class
*/
class Simple_calculator
{
protected:
    float first_no;
    float second_no;

public:
    void set_number(float, float);
    void calculation_pr();
};
void Simple_calculator::set_number(float x, float y)
{
    first_no = x;
    second_no = y;
}
void Simple_calculator::calculation_pr()
{
    int choice;
    float result;
    cout << "Enter the two number " << endl;
    cin >> first_no >> second_no;
    cout << "Enter the choice " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        result = first_no + second_no;
        cout << " your result is " << result << endl;
        break;
    case 2:
        result = first_no - second_no;
        cout << "your result is " << result << endl;
        break;
    case 3:
        result = first_no * second_no;
        cout << "your result is " << result << endl;
        break;
    case 4:

        try
        {
            if (second_no == 0)
            throw(second_no);
            else
            {
                result = first_no / second_no;
                cout << "your result is " << result << endl;
            }
        }
        catch (float x)
        {
            cout << "The value of the second number can't be zero " << endl;
        }

        break;
    }
}
class Scientific_calc
{
protected:
    int first_number;
    int second_number;

public:
    void set_number(float);
    void scientific_calc();
};
void Scientific_calc::set_number(float a)
{
    first_number = a;
}
void Scientific_calc::scientific_calc()
{

    int choice;
    cout << "Enter number for calculation " << endl;
    cin >> first_number;
    cout << "Enter the choice " << endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout << sqrt(first_number) << endl;
        break;
    case 2:
        cout << log(first_number) << endl;
        break;
    case 3:
        cout << round(first_number) << endl;
        break;
    case 4:
        cout << floor(first_number) << endl;
    }
}
class Hybrid_calc : public Simple_calculator, public Scientific_calc
{
public:
    void hybrid()
    {
        calculation_pr();
        scientific_calc();
    }
};
int main()
{
    Hybrid_calc Atiq;
    Atiq.calculation_pr();
    Atiq.scientific_calc();
}