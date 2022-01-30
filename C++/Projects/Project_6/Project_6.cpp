//Admission Eligibility of a Student

#include<iostream>
using namespace std;

int main()
{
    bool elg_state=0, elg_age=0;

    cout<<endl;

    cout<<"    "<<"Gurukul College of Commerce & Management"<<endl;
    cout<<'\t'<<"    Admission Form"<<endl;
    cout<<"Enter the required information correctly."<<endl;

    //Name
    cout<<"Name:"<<endl;

    //Entering Name
    string first_name, middle_name, last_name;
    cout<<"First Name: ";
    cin>>first_name;
    cout<<"Middle Name: ";
    cin>>middle_name;
    cout<<"Last name: ";
    cin>>last_name;

    //Birth Date
    cout<<"Birth Date"<<endl;

    //Entering Birth Date
    int day, month, year;
    cout<<"Day: ";
    cin>>day;
    //check day is valid
    if(day>31){
        cout<<"Error"<<endl;
        exit(0);
    }

    cout<<"Month: ";
    cin>>month;
    //check month is valid
    if(month>12){
        cout<<"Error"<<endl;
        exit(0);
    }

    cout<<"Year: ";
    cin>>year;
    //Check year is valid
    if(year>2021){
        cout<<"Error"<<endl;
        exit(0);
    }

    //Checking valig age
    int age;
    age=2022-year;
    if(age<=17 || age>=30){
        elg_age=0;
    }
    else{
        elg_age=1;
    }

    //Gender
    string gender;
    cout<<"Gender (M/F): ";
    cin>>gender;

    //Checking Eligibity if the inputs of Gender is appropriate
    if(gender!="male" && gender!="m" && gender!="Male" && gender!="M"){
        if(gender!="female" && gender!="f" && gender!="female" && gender!="F"){
        cout<<"Enter a valid gender."<<endl;
        cout<<"Gender: ";
        cin>>gender;
        }
    }

    //State
    cout<<"State"<<endl;

    //Entering State
    string state;
    cout<<"State: ";
    cin>>state;
    if(state!="Karnataka" && state!="karnataka"){
        elg_state=0;
    }
    else{
        elg_state=1;
    }

    //City
    cout<<"City"<<endl;

    //Entering City
    string city;
    cout<<"City/District/Town: ";
    cin>>city;

    //Phone no. & Email
    cout<<"Personal Information"<<endl;

    //Entering Email
    string email;
    cout<<"Email: ";
    cin>>email;

    //Entering Ph no.
    int ph_no;
    cout<<"Phone No.: ";
    cin>>ph_no;
    //Checking ph no is valid
    for(int i=1000000000; ph_no<i;){
        if(ph_no<1000000000){
        cout<<"Enter a valid phone number."<<endl;
        cout<<"Enter Phone no: ";
        cin>>ph_no;
        continue;
        }
    }

    cout<<endl;

    //Checking Eligibility for Admission
    cout<<"Checking Eligibility..."<<endl;

    cout<<endl;

    if(elg_age==1 && elg_state==1){
        cout<<"Eligibile: Qualified"<<endl;
        cout<<"Admission Form has been Registered."<<endl;
        cout<<"Thank You for chooseing this institute."<<endl;
    }
    else{
        cout<<"You are not Eligibile for Admission."<<endl;
    }

    return 0;
}