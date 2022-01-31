//Checking eligibility for Driving Licence

#include<iostream>
#include<string>
using namespace std;

class information
{
    private:
        string name;
        int age;

    public:
        void enter_name(void);
        void enter_age(void);
        void check_elg(void);
};
void information :: enter_name(void){
    cout<<"Enter Your Name: ";
    cin>>name;
}
void information :: enter_age(void){
    cout<<"Enter Your Age: ";
    cin>>age;
}
void information :: check_elg(void){
    enter_name();
    enter_age();
    if(age>=18){
        cout<<"Eligibility: Qualified"<<endl;
        if(age==18){
            cout<<"Congratulatons! Now you are eligible for a Driving Licence."<<endl;
        }
        else{
            cout<<"You are eligibile for a Driving Licence."<<endl;
        }
    }
    else{
        cout<<"Eligibility: Not Qualified"<<endl;
        cout<<"still "<<18-age<<" years remainng"<<endl;
    }
}

int main()
{
    system("cls");
    information person1;
    // person1.enter_name(); // these both members are called in check_elg object;
    // person1.enter_age();
    person1.check_elg();

    return 0;
}