// Sum of all Natural numbers

#include<iostream>
using namespace std;

int SumNatural(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    return sum;
}
int SumFormula(int num){
    int sum;
    sum = num*(num+1)/2;
    return sum;
}

int main()
{
    cout<<"------ Sum of All Nartual Numbers ------"<<endl;

    int n;
    // cout<<"Enter a number: ";
    // cin>>n;

    cout<<"Sum of narutal no. = "<<SumNatural(n)<<endl;
    cout<<"Sum by formula = "<<SumFormula(n)<<endl;

    return 0;
}