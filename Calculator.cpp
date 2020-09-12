#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float num1,num2,x,y,result;
    int i=0,j,f;
    char op;
    for(i=0;i<5000;++i){
    cout<<"\n\nWhat do you Want to do\n1 - Simple calculation\n2 - Trigonometric Calculation\n";
    cin>>j;
    if(j==1){
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"\nEnter the operator(+,-,*,/):--  ";
        cin>>op;
        cout<<"\nEnter the second number: ";
        cin>>num2;
        if(op=='+'){
            result=num1+num2;
            cout<<"\nThe sum is: "<<result<<endl;
        }
        else if(op=='-'){
            result=num1-num2;
            cout<<"The difference is: "<<result<<endl;
        }
        else if(op=='*'){
            result=num1-num2;
            cout<<"The product is: "<<result<<endl;
        }
        else if(op=='/'){
            result=num1/num2;
            cout<<"The Quotient is: "<<result<<endl;
        }
        else cout<<"The operator entered is in valid!!!!!";
    }
    else if(j==2){
        cout<<"Enter the angle in degrees: ";
        cin>>x;
        y=x*(3.14159/180);
        cout<<"\nEnter the trigonometric function\n1-- Sin\n2--cosine\n3--tan\n4--cosec\n5--sec\n6--cot \n";
        cin>>f;

        if(f==1){
            cout<<"The sine is: "<<fixed<<setprecision(5)<<sin(y);
        }
        else if (f==2){
            cout<<"The cosine is: "<<fixed<<setprecision(5)<<(cos(y))<<endl;
        }
        else if (f==2){
            cout<<fixed<<setprecision(5)<<tan(y);
        }
        else if (f==4){
            cout<<fixed<<setprecision(5)<<(1/(sin(y)));
        }
        else if (f==5){
            cout<<fixed<<setprecision(5)<<(1/(cos(y)));
        }
        else if(f==6){
            cout<<fixed<<setprecision(5)<<(1/(tan(y)));
        }
        else cout<<"The operator is in valid!!!!";
    }
    }
}
