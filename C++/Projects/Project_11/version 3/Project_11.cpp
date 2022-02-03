#include<iostream>
using namespace std;

class Electric
{
    private:
        float I, Q, t;
        char value;
    public:
        void inValues(void);
        void calc(void);
        void current(void);
        void charge(void);
        void time(void);
};
void Electric :: inValues(void){
    cout<<"What is the required calculation?"<<endl;
    cout<<"Current (I), Charge (Q), time (t): ";
    cin>>value;
    cout<<endl;
}
void Electric :: calc(void){
    inValues();
    switch (value)
    {
    case 'I':
        current();
        break;
    case 'Q':
        charge();
        break;
    case 't':
        time();
        break;
    
    default:
        break;
    }
}
void Electric :: current(void){
    cout<<"Enter Q: ";
    cin>>Q;
    cout<<"Enter time duration [in seconds]: ";
    cin>>t;
    cout<<endl;
    //Calculation of electric charge
    I = Q / t;
    cout<<"Amount of Electric Charge flowing in the circuit is "<<I<<" A."<<endl; //unit of current (I) is Ampere (A)
}
void Electric :: charge(void){
    cout<<"Enter I: ";
    cin>>I;
    cout<<"Enter time duration [in seconds]: ";
    cin>>t;
    cout<<endl;
    //Calculation of electric charge
    Q = I * t;
    cout<<"Amount of Electric Charge flowing in the circuit is "<<Q<<" C."<<endl; //unit of charge is Coulomb (C)
}
void Electric :: time(void){
    cout<<"Enter Q: ";
    cin>>Q;
    cout<<"Enter I: ";
    cin>>I;
    cout<<endl;
    //Calculation of electric charge
    t = Q / I;
    cout<<"Amount of Electric Charge flowing in the circuit is "<<t<<" seconds."<<endl;
}

int main()
{
    system("cls");
    cout<<"\tCalculation of Electric Charge flowing in a circuit"<<endl;
    cout<<endl;

    Electric num;
    num.calc();

    return 0;
}