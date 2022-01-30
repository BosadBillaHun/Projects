// To find whether the area of Rectangle is greater than Area of Square

#include<iostream>
using namespace std;

int main()
{
    //Area of Rectangle
    float l, b; // l = length, b = breath
    cout<<"\t Area of Rectangle"<<endl;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter breath: ";
    cin>>b;

    float R; // R = area of rectangle
    R = l * b;
    cout<<"Area of Rectangle = "<<R<<endl;

    //Area of Square
    cout<<"\t Area of Square"<<endl;
    float y, S; // y = side, S = area of square
    cout<<"Enter length of side: ";
    cin>>y;
    S = y * y;
    cout<<"Area of Square = "<<S<<endl;

    //Check whether Area of Rectangle is greater or Area of Square
    if(R>S){
        cout<<"Area of Rectangle is greater."<<endl;
    }
    else{
        cout<<"Area of Square is greater."<<endl;
    }

    return 0;
}