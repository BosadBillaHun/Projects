/*
Classes are user-defined data-types and are a template for creating objects.
Classes consist of variables and functions which are also called class members.
*/

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    /*
    All the variables and functions declared under a private access modifier can only be used inside the class.
    They are not permissible to be used by any object or function outside the class.
    */
    public:
    /*
    All the variables and functions declared under public access modifier will be available for everyone.
    They can be accessed both inside and outside the class.
    Dot (.) operator is used in the program to access public data members directly.
    */
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"value of a = "<<a<<endl;
            cout<<"value of b = "<<b<<endl;
            cout<<"value of c = "<<c<<endl;
            cout<<"value of d = "<<d<<endl;
            cout<<"value of e = "<<e<<endl;
        }
};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

class Valorant
{
    public:
        void setGuns(char gun);
        void getGuns(){
                char gun;
                cin>>gun;
                switch (gun)
                {
                case 'a':
                    cout<<"Vandle"<<endl;
                    cout<<"Phantom"<<endl;
                    break;
                case 's':
                    cout<<"Operator"<<endl;
                    cout<<"Marshal"<<endl;
                    break;
                case 'm':
                    cout<<"Spectre"<<endl;
                    cout<<"Stinger"<<endl;
                    break;
                case 'l':
                    cout<<"Aries"<<endl;
                    cout<<"Odin"<<endl;
                    break;
                
                default:
                    break;
                }
        }
};
void Valorant :: setGuns(char gun){
    cout<<"Guns in Valorant"<<endl;
}

int main()
{
    Employee Bruce;
    // Bruce.a = 199; //This will show error as the variabe 'a' is private
    Bruce.d=9;
    Bruce.e=8;
    Bruce.setData(1,23,5);
    Bruce.getData();

    Valorant Jett;
    Jett.setGuns('s');
    Jett.getGuns();

    return 0;
}