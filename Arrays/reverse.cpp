#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int end = n-1;
    int start = 0;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int evenArray[6] = {1,2,3,4,5,6};
    int oddArray[5]= {1,2,3,4,5};
    reverseArray(evenArray,6);
    reverseArray(oddArray,5);
    printArray(evenArray,6);
    printArray(oddArray,5);

}