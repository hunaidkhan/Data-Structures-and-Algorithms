#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int reversedArray[5];
    for(int i = 5; i>0; i--){
        reversedArray[5-i] = arr[i];
    
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout  << reversedArray[i] << endl;
    }
}