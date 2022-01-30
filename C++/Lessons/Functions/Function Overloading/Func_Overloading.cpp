#include<iostream>
using namespace std;
/*
Function overloading is a process to make more than one function
with the same name but different parameters, numbers, or sequence.
*/
int sum(int a, int b){
    cout<<"2 Arguments"<<endl;
    return a + b;
}
int sum(int a, int b, int c){
    cout<<"3 Arguments"<<endl;
    return a + b + c;
}
// Volume of Cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}
// Volume of Cube
int volume(int a){
    return (a * a * a);
}
int volume(int l, int b, int h){
    return (l * b * h);
}

int main()
{
    cout<<"Sum of 3 & 5 = "<<sum(3, 5)<<endl;
    cout<<"Sum of 3, 6 & 5 = "<<sum(3, 6, 5)<<endl;

    cout<<endl;

    cout<<"Volume of Cylinder with r=3 & h=6 is "<<volume(3, 6)<<endl;
    cout<<"Volume of Cube with a=6 is "<<volume(6)<<endl;
    cout<<"Volume of Cuboid with l=3, b=8 & h=6 is "<<volume(3, 8, 6)<<endl;

    return 0;
}