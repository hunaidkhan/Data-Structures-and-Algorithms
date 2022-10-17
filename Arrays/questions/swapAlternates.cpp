//swap out the alternate elements in the array
#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int length){
    cout << endl;
    for(int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int oddArray[5] = {1,2,3,4,5};
    int evenArray[6] = {1,2,3,4,5,6};

    swapAlternate(oddArray, 5);
    swapAlternate(evenArray, 6);

    printArray(oddArray, 5);
    printArray(evenArray, 6);
}