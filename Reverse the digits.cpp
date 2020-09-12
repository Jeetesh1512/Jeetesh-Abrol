#include<iostream>
using namespace std;
int main()
{
	int num,i,rev=0;
	cout<<"Enter the number: ";
	cin>>num;
	while (num!=0)
	{
		i=num%10;
		rev=rev*10+i;
		num=num/10;
	}
	cout<<"REVERSE: "<<rev;
	return 0;
}
