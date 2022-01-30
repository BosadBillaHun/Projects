// Inline Function, Default Arguments, Constant Argument

#include<iostream>
using namespace std;

/*
Inline functions are used to reduce the function call.
When one function is being called multiply times in the program it increases the execution time,
so inline function is used to reduce time and increase program efficiency.
If the inline function is being used when the function is called,
the inline function expands the whole function code at the point of a function call,
instead of running the function. Inline functions are considered to be used when the function is small otherwise it will not perform well.
Inline is not recommended when static variables are being used in the function.
*/

inline int prd(int a, int b){
    return a * b;
}
//Static variable
//not recommended to use with inline function
int prd_static(int x, int y){
    static int c=0; //This statement executes only once
    c = c + 1; // next time function is runned, the value of 'c' is retained (like increment/decrement in loop)
    return x*y+c;
}

/*
Default arguments are those values which are used by the function if we don’t input our value.
It is recommended to write default arguments after the other arguments.
*/

//Default Argument
float money_received(int currentMoney, float interest = 1.04){
    return currentMoney * interest;
}

int main()
{
    // int a, b;
    // cout<<"Enter values: ";
    // cin>>a>>b;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;
    // cout<<"Product = "<<prd(a,b)<<endl;

    // cout<<endl;

    // cout<<"Static = "<<prd_static(a,b)<<endl;
    // cout<<"Static = "<<prd_static(a,b)<<endl;
    // cout<<"Static = "<<prd_static(a,b)<<endl;
    // cout<<"Static = "<<prd_static(a,b)<<endl;

    int money = 100000;
    cout<<"Current = "<<money<<endl;
    cout<<"After 1 year = "<<money_received(money)<<endl;
    cout<<endl;
    cout<<"For VIP:"<<endl;
    cout<<"Current = "<<money<<endl;
    cout<<"After 1 year = "<<money_received(money, 1.1)<<endl;

    return 0;
}

/*
Constant arguments are used when you don’t want your values to be changed or modified by the function
*/
//Constant Variable
int string_length(const char *p){
    
}