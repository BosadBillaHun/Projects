// Return on Investment

#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    cout<<"\t Return on Investment"<<endl;
    int p, t, r;

    cout<<"Enter Present amount invested: ";
    cin>>p;
    cout<<"Enter Time duration (in years): ";
    cin>>t;
    cout<<"Enter Rate of interest: ";
    cin>>r;

    int R, SUM;
    R = p * t * r/100;
    cout<<"Return on Investment after "<<t<<" years is "<<R<<endl;
    SUM = p + R;
    cout<<"Total amount present after "<<t<<" years = "<<SUM<<endl;

    return 0;
}