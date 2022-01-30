// Arithmetic mean

#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    cout<<"------ Arithmetic Mean ------"<<endl;
    cout<<endl;

    int size;
    cout<<"Enter total number of digits: ";
    cin>>size;

    float value [size];
    cout<<"Enter values: ";
    for(int i=0; i<size; i++){
        cin>>value[i];
    }

    float mean, sum=0;
    for(int j=0; j<size; j++){
        sum = sum + value[j];
    }
    mean = sum / size;
    cout<<"Mean = "<<mean<<endl;

    return 0;
}