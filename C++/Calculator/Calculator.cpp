//Calculator program
#include<iostream>
using namespace std;

int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a * factorial(a-1);
}
int main()
{
    float x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    char op;
    cout<<"'+' : Sum"<<endl;
    cout<<"'*' : Product"<<endl;
    cout<<"'-' : Difference"<<endl;
    cout<<"'/' : Quotient"<<endl;
    cout<<"'!' : Factorial"<<endl;
    cout<<"Enter any operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Sum = "<<x+y<<endl;
        break;
    case '-':
        cout<<"Difference = "<<x-y<<endl;
        break;
    case '*':
        cout<<"Product = "<<x*y<<endl;
        break;
    case '/':
        cout<<"Quotient = "<<x/y<<endl;
        break;
    case '!':
        cout<<"Factorial = "<<factorial(x)<<endl;
        break;
    default:
        cout<<"Enter another operator: "<<endl;
        break;
    }

    return 0;
}