// Calculation of Potential Difference

#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    system ("cls"); //or clrscr(); system("cls"); clears the terminal
    cout << "\tCalculation of Potential Difference" << endl;
    cout<<endl;
    int V, W, Q;
    /*
    V = Potential Difference
    W = Work Done
    Q = Charge*/

    // Entering values
    char value;
    cout << "What is the required Calculation?"<<endl;
    cout << "Potential Difference (V), Work Done (W), Charge (Q): ";
    cin >> value;

    switch (value)
    {
    case 'V':
        cout << "Enter W: ";
        cin >> W;
        cout << "Enter Q: ";
        cin >> Q;

        cout << endl;
        // Calculation
        V = W / Q;
        cout << "Potential Difference is " << V << " V." << endl; //Unit of Potential Difference is volt (V)
        break;

    case 'W':
        cout<<"Enter V: ";
        cin>>V;
        cout<<"Enter Q: ";
        cin>>Q;

        cout<<endl;
        //Calculation
        W = V * Q;
        cout<<"Work Done is "<<W<<" J."<<endl; //Unit of Work Done is Joule (J)
        break;

    case 'Q':
        cout<<"Enter W: ";
        cin>>W;
        cout<<"Enter V: ";
        cin>>V;

        cout<<endl;
        //Calculation
        Q = W / V;
        cout<<"Amount of Charge flown is "<<Q<<" C."<<endl; //Unit of Charge is Coulomb (C)
        break;

    default:
        cout<<"Invalid term."<<endl;
        break;
    }

    return 0;
}