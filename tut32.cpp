#include<iostream>
using namespace std;
class atiq
{
    int value1,value2,value3;
    public:
    atiq(int a,int b,int c=90)
    {
        value1=a;
        value2=b;
        value3=c;

    }
    void shownumbers();
    


};
void atiq:: shownumbers()
{
    cout<<"your number is "<<value1<<" "<<value2<<"    and "<<value3<<endl;
}
int main()
{
    atiq b(20,20);
    b.shownumbers();
    
}