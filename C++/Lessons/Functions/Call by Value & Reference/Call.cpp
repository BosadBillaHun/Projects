#include<iostream>
using namespace std;
/*
Call by value is a method in C++ to pass the values to the function arguments.
In case of call by value the copies of actual parameters are sent to the formal parameter,
which means that if we change the values inside the function that will not affect the actual values.
*/
//This will not swap n1 and n2
void swap(int a, int b){ //temp  a and b
    int temp = a;        //4     4     8
    a =b;                //4     8     8
    b = temp;            //4     8     4
}

/*
A call by the pointer is a method in C++ to pass the values to the function arguments.
In the case of call by pointer, the address of actual parameters is sent to the formal parameter,
which means that if we change the values inside the function that will affect the actual values.
*/
//Call by Reference using pointers
void swap_pointer(int* a, int* b){ //temp  a and b
    int temp = *a;        //4     4     8
    *a = *b;              //4     8     8
    *b = temp;            //4     8     4
}

/*
Call by reference is a method in C++ to pass the values to the function arguments.
In the case of call by reference, the reference of actual parameters is sent to the formal parameter,
which means that if we change the values inside the function that will affect the actual values.
*/
//Call by Reference using C++ Reference Variables
void swap_ref_var(int &a, int &b){  //temp  a and b
    int temp = a;                   //4     4     8
    a = b;                         //4     8     8
    b = temp;                     //4     8     4
}
int & swap_ref_var_call(int &a, int &b){  //temp  a and b
    int temp = a;                   //4     4     8
    a = b;                         //4     8     8
    b = temp;                     //4     8     4
    return a;
}

int main()
{
    int n1, n2;
    n1 = 4;
    n2 = 8;
    cout<<"Value of n1 = "<<n1<<endl;
    cout<<"Value of n2 = "<<n2<<endl;
    // swap(n1,n2); //This will not swap n1 and n2
    // swap_pointer(&n1, &n2); //This will not swap n1 and n2
    swap_ref_var(n1, n2); //This will not swap n1 and n2
    cout<<"Value of n1 = "<<n1<<endl;
    cout<<"Value of n2 = "<<n2<<endl;
    //Calling Reference variable
    swap_ref_var_call(n1, n2) = 556;
    cout<<"Value ref = "<<n1<<" "<<n2<<endl;

    return 0;
}