// Structures, Unions & Enums

#include <iostream>
using namespace std;

/*The structure is a user-defined data type that is available in C++.
Structures are used to combine different types of data types,
just like an array is used to combine the same type of data types*/

// typedef = shortform of struct variable_name
typedef struct student
{
    /* data */
    int roll_no;
    string section;
    float percentage;
} st;

union money
{
    /* data */
    int rupee;
    char value;
    float BTC;
};
/*
Unions are similar to structures but they provide better memory management
then structures.
Unions use shared memory so only 1 variable can be used at a time.
*/

int main()
{
    /*
    Enums are user-defined types which consist of named constants.
    Enums are used to make the program more readable.
    */
    enum Meal {breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    Meal m_3 = dinner;
    cout<<m_3<<endl;

    struct student shrigiri;
    st Chris;
    shrigiri.roll_no = 45;
    shrigiri.section = "CS";
    shrigiri.percentage = 83.6;

    cout << "The value is " << shrigiri.roll_no << endl;
    cout << "The value is " << shrigiri.section << endl;
    cout << "The value is " << shrigiri.percentage << endl;

    cout<<endl;

    union money m1;
    // m1.rupee = 50;
    // m1.value = 'f';
    m1.BTC = 0.0014;
    // cout<<"Money value = "<<m1.rupee<<endl;
    // cout<<"Money value = "<<m1.value<<endl;
    cout<<"Money value = "<<m1.BTC<<endl;


    return 0;
}