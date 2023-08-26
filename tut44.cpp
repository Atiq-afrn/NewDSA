#include <iostream>
using namespace std;
class Student

{
protected:
    int roll_no;

public:
    void set_roll_no(int x)
    {
        roll_no = x;
    }
    void get_roll_no()
    {
        cout << "Student roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float, float);
    void get_marks()
    {
        cout << "Obtained marks by student in maths are " << maths << endl;
        cout << "Obtained marks by the student in physics are " << physics << endl;
    }
};
void Test::set_marks(float x, float y)
{
    maths = x;
    physics = y;
}
class Sport : virtual public Student
{
protected:
    int score;

public:
    void set_score(int x)
    {
        score = x;
    }
    void get_score()
    {
        cout << "The total scored by the student is " << score << endl;
    }
};
class Result : public Test, public Sport
{
protected:
    int total;

public:
    void get_total()
    {
        
        get_roll_no();
        get_marks();
        get_score();
        cout<<"The final result " << maths + physics + score << endl;
    }
};
int main()
{
    Result obj;
    obj.set_roll_no(2001);
    obj.set_marks(98.23, 65.23);
    obj.set_score(200);
    obj.get_total();
}