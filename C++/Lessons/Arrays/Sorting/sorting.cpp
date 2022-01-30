/*
Sorting in Arrays is a method to sort the series of any data type
in assending or decending order.
Mainly, 3 types of Sorting:
• Selection Sorting: Find the minimum element in an unsorted array and 
                     swap it with the element at the beginning.
• Bubble Sorting: 
• Insertion Sorting
*/

#include<iostream>
using namespace std;

int selection();

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;

    int array[size];
    cout<<"Enter Array Values: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[j]>array[i]){
                int temp = array[i];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}