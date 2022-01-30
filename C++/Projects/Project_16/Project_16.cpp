// Decimal to Octal

#include<iostream>
using namespace std;

void octal(int n){
    int oct[100];
    int i=0;
    while(n!=0){
        oct[i] = n % 8;
        n = n / 8;
        i++;
    }
    for(int j = i-1; j>=0; j--){
        cout<<oct[j];
    }
}

int main()
{
    cout<<"------ Decimal to Octal ------"<<endl;

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The Octal form for number 'n' = ";
    octal(n);

    return 0;
}