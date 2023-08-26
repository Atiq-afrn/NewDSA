#include<iostream>
using namespace std;
class y;
class x
{
    int a;
    friend void  swapdata(x &,y &);

public:
    void getnumber(int v1)
    {
        a = v1;
       
    }
    void shownumber()
    {
         cout << a << endl;
    }
    
};
class y
{
    int b;
     friend void swapdata(x &,y &);
     public: 
    int getnumber(int v2)
    {
        b = v2;
        
    }
    void shownumber()
    {
        cout <<" "<< b << endl;
    }
    
};
void swapdata(x &o1, y &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
int main()
{
    x a1;
    a1.getnumber(50);

    y a2;
    a2.getnumber(30);
    swapdata(a1,a2);

    cout<<"The value of data after swap is ";
    a1.shownumber();
    cout<<"The value of the number after the exchange";
    a2.shownumber();


}