#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,n;
    //This is a simple calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
    cout <<"This is a simple calculator.\n";
    cout<<"Enter the value of 1st number.\n";
    cin >> a;
    cout<<"Enter the value of 2nd number.\n";
    cin>> b;
    cout<<"please choose the option according to the arithmetic operations.\n";
    cout<<"1. For addition of two numbers\n";
    cout<<"2. For subtraction of two numbers\n";
    cout<<"3. For multiplication of two numbers\n";
    cout<<"4. For division of two numbers\n";
    cin >> n;
    rerun:
    switch(n)
    {
        case 1:
            {
             cout <<a+b;
             break;
            }
        case 2:
            {
             cout <<a-b;
             break;
            }
        case 3:
            {
             cout <<a*b;
             break;
            }
        case 4:
            {
             cout <<a/b;
             break;
            }
        default:
            {
             cout<<"Please Enter the option number.\n";
             goto rerun;
            }

    }
    return 0;
}
