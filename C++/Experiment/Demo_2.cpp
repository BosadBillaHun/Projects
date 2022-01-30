#include<iostream>
#include"emoji.h"
using namespace std;

int main()
{
    cout<<"This is an experiment file."<<endl;

    cout<<emojicpp::emojize("hemlo :moyai:");
    // cout << emojicpp::emojize("Emoji :smile: for c++ :+1:") << std::endl;

    return 0;
}