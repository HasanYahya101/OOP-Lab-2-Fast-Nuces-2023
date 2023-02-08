#include<iostream>
using namespace std;

void copyArray(int* arr, int*& arr1, int size3) 
{
    arr1 = new int[size3];
    for (int i = 0; i < size3; i++) 
    {
        arr1[i] = arr[i];
    }
}

int reduceArray(int* arr, int*& arr1, int size2) 
{
    int reduced_size;
    cout << "Please enter the reduced size of array: ";
    cin >> reduced_size;
    copyArray(arr + size2 - reduced_size, arr1, reduced_size);
    return reduced_size;
}

int main() {
    int size;
    cout << "Please enter size: ";
    cin >> size;
    int* arr = new int[size];
    int* arr1;
    cout << "Please enter elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    int reduced_size = reduceArray(arr, arr1, size);
    cout << "Array after reduction is: ";
    for (int i = 0; i < reduced_size; i++) 
    {
        cout << arr1[i] << " ";
    }
    delete[] arr;
    delete[] arr1;
    return 0;
}
