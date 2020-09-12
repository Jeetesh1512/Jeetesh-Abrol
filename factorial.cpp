#include<iostream>
using namespace std;
int main()
{
    int i,x,f=1;
    cout<<"Enter the number for factorial: ";
    cin>>x;
    for(i=1;i<=x;++i){
        f=f*i;
    }
    cout<<"The factorial of "<<x<<" is: "<<f;
    return 0;
}
