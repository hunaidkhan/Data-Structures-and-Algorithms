#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of the array" << endl;
    cin >> size;
    int arr[size];
    cout << "enter elements of the array one by one" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }
    cout << endl << "Max is " << max << endl;
}