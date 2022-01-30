#include<iostream>
using namespace std;

int main()
{
    cout<<"This is an Experimental file."<<endl;

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int bin [32];
    int i=0;

    while(n>0){
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        cout<<bin[j]<<" ";
    }

    return 0;
}