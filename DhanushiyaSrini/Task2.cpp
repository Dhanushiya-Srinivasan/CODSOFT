// Basic Calculator
#include <iostream>

using namespace std;

int main()
{
    int num1,num2,operation;
    cout<<"Enter Number One : ";
    cin>>num1;
    cout<<"Enter Number Two : ";
    cin>>num2;
    cout<<"Operations are : \n   Press Number '1' for Addition \n   Press Number '2' for Subtraction \n   Press Number '3' for Multiplication \n   Press Number '4' for Division";
    cout<<"\nEnter Operation Number : ";
    cin>>operation;
    
    if (operation==1)
    {
        int sum;
        sum=num1+num2;
        cout<<"Sum of the Given two Numbers are = "<<sum;
    }

    else if (operation==2)
    {
        int sub;
        sub=num1-num2;
        cout<<"Difference between Given two Numbers are = "<<sub;
    }

    else if (operation==3)
    {
        int mul;
        mul=num1*num2;
        cout<<"Product of the Given two Numbers are = "<<mul;
    }

    else if (operation==4)
    {
        int div;
        div=num1/num2;
        cout<<"Quotient of the Given two Numbers are = "<<div;
    }

    else
    {
        cout<<"Invalid Operation !";
    }

    return 0;  
}