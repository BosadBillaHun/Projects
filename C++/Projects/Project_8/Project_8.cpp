/*To find whether Area of Circle is greater than
Circumference of Circle*/

#include<iostream>
using namespace std;

int main()
{
    float r, C, A;
    //r = radius
    //C = Circumference
    //A = Area

    //Area of Circle
    cout<<"Enter value of Radius: ";
    cin>>r;
    A = 22 * (r * r)/7;
    cout<<"Area of Circle: "<<A<<endl;

    cout<<endl;

    //Circumference of Circle
    C = (2 * 22 * r)/7;
    cout<<"Circumference of Circle: "<<C<<endl;

    cout<<endl;

    //Check what value is greater, A or C
    if(A>C){
        cout<<"Area of Circle is greater."<<endl;
    }
    else if(A==C){
        cout<<"Area & Circumference are equal."<<endl;
    }
    else{
        cout<<"Circumference of Circle is greater."<<endl;
    }

    return 0;
}