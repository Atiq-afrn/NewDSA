// #include <iostream>
// using namespace std;
// class Shop
// {
//     int id;
//     float price;

// public:
//     void set_data(int x, float y)
//     {
//         id = x;
//         price = y;
//     }
//     void get_data()
//     {
//         cout << "The  id  of the items " << id << endl;
//         cout << "The price of item is " << price << endl;
//     }
// };
// int main()
// {
//     int size;
//     cout << "Enter the size of the object " << endl;
//     cin >> size;
//     Shop *ptr = new Shop[size];
//     Shop *ptrTemp = ptr;
//     int p, i;
//     float q;
//     for (i = 0; i < size; i++)
//     {

//         cout << "Enter the prcie of the items " << endl;
//         cin >> q ;
//         cout<<"Enter the id of the items "<<i+1<<endl;
//         cin>>p;
//         ptr->set_data(p, q);
//         ptr++;
//     }
//     for (i = 0; i < size; i++)
//     {
//         cout << "The item number " << i + 1 << endl;
//         ptrTemp->get_data();
//         ptr++;
//     }
// }

// how to creat the array of abject

#include <iostream>
using namespace std;
class Shop
{
    int price;
    int id;

public:
    void set_data(float x, int y)
    {
        price = x;
        id = y;
    }
    void get_data()
    {
        cout << "The price of the items is " << price << endl;
        cout << "The id of the items is " << id << endl;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the array object " <<endl;
    cin >> size;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp=ptr;
    float p;
    int e,i;
     for(int i=0;i<size;i++)
     {
        cout<<"Enter the price of the items "<<i+1<<endl;
        cin>>p;
        cout<<"Enter the id of the items "<<i+1<<endl;
        cin>>e;
        ptr->set_data(p,e);
        ptr++;
     }
     for(i=0;i<size;i++)
     {
        cout<<"The item number is "<<endl;
        ptrTemp->get_data();
        ptrTemp++;

     }

}