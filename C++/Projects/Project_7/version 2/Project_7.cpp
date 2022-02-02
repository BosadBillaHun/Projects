#include<iostream>
using namespace std;

class area
{
    private:
        float l, b, R, y, S;
    public:
        void input(void);
        void areaRectangle(void);
        void areaSquare(void);
        void comparison(void);
};
void area :: input(void){
    cout<<"Length = ";
    cin>>l;
    cout<<"Breath = ";
    cin>>b;
    cout<<"Side = ";
    cin>>y;
}
void area :: areaRectangle(void){
    R = l * b;
    cout<<"Area of Rectangle = "<<R<<endl;
}
void area :: areaSquare(void){
    S = y * y;
    cout<<"Area of Square = "<<S<<endl;
}
void area :: comparison(void){
    if(R>S){
        cout<<"Area of Rectangle is greater."<<endl;
    }
    else{
        cout<<"Area of Square is greater."<<endl;
    }
}

int main()
{
    area A;
    A.input();
    A.areaRectangle();
    A.areaSquare();
    A.comparison();

    return 0;
}