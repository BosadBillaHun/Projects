//Check the given number is POSITIVE or NEGATIVE

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n>0){
        cout<<"POSITIVE"<<endl;
    }
    else{
        cout<<"NEGATIVE"<<endl;
    }

    return 0;
}