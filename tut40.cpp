/*
 #include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The student roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float mat, float phy)
{
    maths = mat;
    physics = phy;
}
void Exam::get_marks()
{
    cout << "The obtained marks in maths is" << maths << endl;
    cout << "The obtained marks in physics is " << physics << endl;
}
class Result : public Exam
{
    float percentag;

public:
    void show_result()
    {
        {

            get_roll_number();
            get_marks();

            cout << " The result of the student in percentage " << (maths + physics) / 2 << endl;
        }
    }
};

int main()
{
    /*
    // notes
    // if we are inheriting from B from A and C from B (A->B->C)
    // Class A have no base class its the base class
    // base class of B is A
    // and the base class of C is B
    // A-->B-->--C this the inheritance path


    Result Atiq;
    Atiq.set_roll_number(1001);
    Atiq.set_marks(92.0, 90.0);
    Atiq.show_result();
}

*/
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    int set_roll_number(int);
    void get_roll_number();
};
int Student ::set_roll_number(int roll)
{
    roll_number = roll;
}
void Student::get_roll_number()
{
    cout << "The student roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float math, float phy)
{
    maths = math;
    physics = phy;
}
void Exam::get_marks()
{
    cout << "The obtained marks by student in maths are " << maths << endl;
    cout << "The obtained marks by student in phsyics are " << physics << endl;
}
class Result : public Exam
{
    public:
    void show_result()
    {
        get_roll_number();
        get_marks();

        cout << "The percentage obtained by the student are " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Atiq;
    Atiq.set_roll_number(200);
    Atiq.set_marks(90.1,92.3);
    Atiq.show_result();

}