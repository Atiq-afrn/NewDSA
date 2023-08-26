// #include <iostream>
// using namespace std;
// class point
// {
//     int x, y;

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void display()
//     {
//         cout<<"your point is ("<<x<<","<<y<<")"<<endl;
//     }
// };
// int main()
// {
//     point c(10,30);
//     c.display();

//     point d(5,6);
//     d.display();
// }
// take  two point and print the distance between them in using quadrant formula
// by using the function(_which u have to declare the function as friend function)
// using the c++ sqrt maths library

#include <iostream>
#include <math.h>
using namespace std;
class y;
class x
{
    friend void takeco_ordiante(x ab,y cd);

    int x1, y1;
    friend class y;

public:
    void getnumber(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
};
class y
{
    
    int x2, y2;

friend void takeco_ordiante(x ab,y cd);
public:
    void getnumber(int c, int d)
    {
        x2 = c;
        y2 = d;
    }
   
};
void takeco_ordiante(x ab,y cd)
{
   // cout << "enter the co-ordunate" << endl;
   //  cin >> ab.x1 >>ab.y1 >>cd.x2 >>cd.y2;
   // cout<< ab.x1<<ab.y1<<cd.x2 <<cd.y2;
    int sq1=(cd.x2 - ab.x1);
    int sq2=(cd.y2 -ab.y1);
    int res=pow(sq1,sq2);
    int final_res=sqrt(res);
    cout<<"The distance between two point is "<<final_res<<endl;
    
}

int main()
{
x Atiq;
Atiq.getnumber(5,6);
y khan;
khan.getnumber(9,6);
takeco_ordiante(Atiq,khan);

}