#include<iostream>
using namespace std;
int main()
{
    int a;
    char b;
    cout<<"Enter the character : ";
    cin>>b;
    a=b;
    cout<<"The ASCII value of "<<b<<" is "<<a<<endl;

    switch (a)
    {
        case 65 ... 90 :
        cout<<"It is a capital letter. "<<endl;
        break;

        case 97 ... 122 :
        cout<<"It is a small letter. "<<endl;
        break;

        case 48 ... 57 :
        cout<<"It is a number. "<<endl;
        break;

        case 0 ... 47:
        case 58 ... 64 :
        case 91 ... 96:
        case 123 ... 127:
        cout<<"It is a special charater. "<<endl;
        break;

        default:
        cout<<"Not Valid";
        break;
        
    }


}
