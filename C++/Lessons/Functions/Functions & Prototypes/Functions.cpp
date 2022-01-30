#include<iostream>
using namespace std;

/*
Functions are the main part of top-down structured programming.
We break the code into small pieces and make functions of that code.
Functions help us to reuse the code easily.
*/

//Function for Sum
int sum(int a, int b){
    /* Formal Parameters "a" and "b" will be taking values from 
    actual parameters "n1" and "n2"*/
    int c = a + b;
    return c;
}

// Function Prototype
int prd(int p, int q);
void g(void); //void in () is optional
void b();

int main()
{
    g();
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    // n1 and n2 are Actual Parameters
    cout<<"Sum = "<<sum(n1, n2)<<endl;
    
    int m1, m2;
    cout<<"Enter two numbers: ";
    cin>>m1>>m2;
    // m1 and m2 are Actual Paraneters
    cout<<"Product = "<<prd(m1, m2)<<endl;

    b();

    return 0;
}

// Function Prototype
// type function_name (arguments);

int prd(int p, int q){
    /* Formal Parameters "p" and "q" will be taking values from 
    Actual Parameters "m1" and "m2"*/
    int u = p * q;
    return u;
}

void g(){
    cout<<"Hey there! Welcome back."<<endl;
}
void b(){
    cout<<"Good Bye, see ya later."<<endl;
}