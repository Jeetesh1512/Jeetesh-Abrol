#include<iostream>
using namespace std;
int avg(float arr[], int n)
{
    float average,sum=0.0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
average=sum/n;
return average;    
}

int main()
{
    float arr[5000];
    int n;
    cout<<"Enter the numbers for average: ";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<i+1<<". Enter the data: ";
        cin>>arr[i];
    }
cout<<"The average of the entered data is: "<<avg(arr,n)<<endl;
}
