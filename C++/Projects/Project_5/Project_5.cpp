//Checking eligibility for Driving Licence

#include<iostream>
using namespace std;

int main()
{
    //Entering Name
    string name;
    cout<<"Enter Your Name: ";
    cin>>name;

    //Entering Age
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    //Eligibility
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

    return 0;
}