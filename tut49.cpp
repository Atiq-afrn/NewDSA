#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
   // test(int i,int j):a(i), b(i+j)
   test(int i,int j): b(j),a(i+b)
   
    {
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
    }

};
int main()
{
 test t(10,20);
 
}