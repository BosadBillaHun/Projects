// Nesting of member functions
#include<iostream>
#include<string>
using namespace std;

class binary{

    string s; // by default members of class are private
    void chk_bin(void); //Check Binary
    // this member can be only used by class members (private) and cannot be used in Driver's code

    public:
        void read(void);
        void chk_bin(void); //Check Binary
        void conv(void);
        void display(void);
};
void binary :: read(void){
    cout<<"Enter a Binary number: ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void binary :: conv(void){
    chk_bin();
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){
    cout<<"------ Displaying Binary Number ------"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // can be nested in function class, at binary conv
    b.display();
    b.conv();
    b.display();

    return 0;
}

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      • members are public
//      • No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private