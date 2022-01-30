//Even or Odd

#include<iostream>
using namespace std;

bool even_odd(int num){
    if(num%2==0){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(even_odd(n)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }

    return 0;
}