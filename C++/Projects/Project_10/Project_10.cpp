// Sum of Arrays

#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "------ Array of Sum ------" << endl;
    cout << endl;
    // Size of Array
    int n;
    cout << "Enter array size: ";
    cin >> n;
    // Values/parameters of array
    int array[n];
    cout << "Enter values: ";
    for (int v = 0; v < n; v++)
    {
        cin >> array[v];
    }
    // Sum of Arrays
    int array_cal = 0;
    for (int i = 0; i < n; i++)
    {
        array_cal = array_cal + array[i];
    }
    cout << "Sum of Arrays = " << array_cal << endl;

    return 0;
}