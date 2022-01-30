// Recursions & Recursive Functions in C++
/*
When a function calls itself it is called recursion and the function which is calling itself is called a recursive function.
The recursive function consists of a base case and recursive condition.
It is very important to add a base case in recursive function otherwise recursive function will never stop executing.
*/

#include<iostream>
using namespace std;

int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a * factorial(a-1);
}

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2) + fib(a-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"------ Factonial of a number ------"<<endl;
    cout<<"Factorial = "<<factorial(n)<<endl;

    cout<<endl;

    cout<<"------ Fibonacci Series ------"<<endl;
    cout<<"Fibonacci = "<<fib(n);


    return 0;
}