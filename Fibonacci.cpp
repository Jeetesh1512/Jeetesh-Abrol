#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,third,n,i=2;
    cout<<"How many numbers do you want to see in the fibonacci series? : ";
    cin>>n;
    cout<<"\nFibonacci Series: ";
    cout<<first<<" "<<second;
    while (i<n)
    {
        third=first+second;
        cout<<" "<<third;
        first=second;
        second=third;
        i+=1;
    }
    return 0;
}