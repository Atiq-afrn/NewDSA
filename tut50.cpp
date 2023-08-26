#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *ptr = &a;
    cout << *(ptr) << endl;
    float *p = new float(20.10);
    cout << *(p) << endl;
// dynamically memory allocation with the help of (new kew words)
    int *arr=new int[3];
  arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete [] arr; // dynamicallyy deletion of the array (delete is a key and also a operatorOKKO)
    cout<<"the value of the array at 0 is "<<arr[0]<<endl;
    cout<<"the value of the array at 1 is "<<arr[1]<<endl;
    cout<<"the value of the array  at 2 is "<<arr[2]<<endl;
}