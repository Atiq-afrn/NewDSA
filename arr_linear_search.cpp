// #include <iostream>
// using namespace std;
// int main()
// {
   
//     int arr[3];
//     cout << "enter the array " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the key for linear search " << endl;
//     cin >> key;
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout<<i;
//         }
//     }
//     return -1;
// }

#include<iostream>
using namespace std;
int binary_search(int arr[],int key)
{
    int s=0;
    int  e=5;
   for(int i=0;i<5;i++)
  // while(s<=e)
    {
       int mid=(s+e)/2;
       if(arr[mid]==key)
       {
        return mid;
       }
       else if(arr[mid]>key)
       {
        e=mid-1;
       }
       else if(arr[mid]<key)
       {
        s=mid+1;
       }
    }
    return -1;
}
int main()
{
    // int n;
    cout<<"Enter the array size "<<endl;
    // cin>>n;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int key;

    cout<<"Enter the key to search "<<endl;
    cin>>key;
    cout<<binary_search(arr,key);
}