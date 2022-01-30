#include<iostream>
using namespace std;

// Linear Search
int findValue(int series[], int size, int f){
    for(int i=0; i<size; i++){
        if(series[i]==f){
             return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int series[], int size, int f){
    int s=0, e=size;
    while(s<=e){
        int mid = (s+e)/2;
        if(series[mid]==f){
            return mid;
        }
        else if(series[mid]>f){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Size: ";
    cin>>size;
    int series[size];
    cout<<"Series = ";
    for(int i=0; i<size; i++){
        cin>>series[i];
    }

    int f;
    cout<<"Find: ";
    cin>>f;

    cout<<"Find value using Linear search = "<<findValue(series, size, f)<<endl;
    cout<<"Find value using Binary search = "<<binarySearch(series, size, f)<<endl;

    return 0;
}