#include<iostream>
using namespace std;
int main()
{
    int arr[3],i,sum=0;
    cout<<"Enter the sides of triangle: ";
    for (i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    cout<<"The sides of triangle are: ";
    for (i=0;i<3;i++)
    {
        cout<<arr[i]<<" ,";
    }
    if (arr[0]+arr[1]>arr[2] && arr[1]+arr[2]>arr[0] && arr[2]+arr[0]>arr[1])
    {
        cout<<"\nIt is a triangle. ";
    }
    else
    {
        cout<<"\nIt is not a triangle. ";
    }

    return 0;
}
