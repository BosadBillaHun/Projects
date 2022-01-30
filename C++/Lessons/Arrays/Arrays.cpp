//Arrays

#include<iostream>
using namespace std;

int main()
{
    /*Declaration of Array:
    data_type  variable-name [size] = {parameters}*/
    int array[4] = {10, 20, 30, 40};

    int sum = array[2] + array[3];

    cout<<"Sum [2]+[3]: "<<sum<<endl;
    cout<<"Array [1]: "<<array[1]<<endl;

    /*Arrays from users*/
    int size;
    cout<<"Give Size of Array: ";
    cin>>size;

    int array_user [size];
    cout<<"Enter values: ";

    for(int i=0;i<size;i++){
        cin>>array_user[i];
    }
    for(int i=0;i<size;i++){
        cout<<array_user[i]*2<<", ";
    }
    cout<<endl;
    //Pointers and Arrays
    int pointer[4] = {25,36,47,58};
    int* p = pointer;
    cout<<"Array *(p)  : "<<*p<<endl;
    cout<<"Array *(p+1): "<<*(p+1)<<endl;
    cout<<"Array *(p+2): "<<*(p+2)<<endl;
    cout<<"Array *(p+3): "<<*(p+3)<<endl;

    return 0;
}