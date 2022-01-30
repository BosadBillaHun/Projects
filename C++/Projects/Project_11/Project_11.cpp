// Find amount of Electric Charge flown in a circuit

#include<iostream>
using namespace std;

int main()
{
    cout<<endl;
    cout<<"\tCalculation of Electric Charge flowing in a circuit"<<endl;
    float I, Q, t;
    /*
    I = current
    C = electric charge
    t = time
    */
    char value;
    cout<<"What is the required calculation?"<<endl;
    cout<<"Work Done (W), Current (I), Charge (Q): ";
    cin>>value;
    cout<<endl;
    //Entering Values
    switch (value)
    {
    case 'Q':
        cout<<"Enter I: ";
        cin>>I;

        cout<<"Enter time duration [in seconds]: ";
        cin>>t;

        cout<<endl;
        //Calculation of electric charge
        Q = I * t;
        cout<<"Amount of Electric Charge flowing in the circuit is "<<Q<<" C."<<endl; //unit of charge is Coulomb (C)
        break;
    
    case 'I':
        cout<<"Enter Q: ";
        cin>>Q;

        cout<<"Enter time duration [in seconds]: ";
        cin>>t;

        cout<<endl;
        //Calculation of electric charge
        I = Q / t;
        cout<<"Amount of Electric Charge flowing in the circuit is "<<I<<" A."<<endl; //unit of current (I) is Ampere (A)
        break;
    
    case 't':
        cout<<"Enter Q: ";
        cin>>Q;

        cout<<"Enter I: ";
        cin>>I;

        cout<<endl;
        //Calculation of electric charge
        t = Q / I;
        cout<<"Amount of Electric Charge flowing in the circuit is "<<t<<" seconds."<<endl;
        break;
    
    default:
        cout<<"Invalid term"<<endl;
        break;
    }

    return 0;
}