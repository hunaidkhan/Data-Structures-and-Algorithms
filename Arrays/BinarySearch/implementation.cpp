#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int middleIndex = start + (end-start)/2;
    while(true){
        if(arr[middleIndex] == key){
            return key;
        }
        //go right
        if(arr[middleIndex] < key){
            start = middleIndex + 1;

        }

        //go left
        if(arr[middleIndex] > key){
            end = middleIndex - 1;

        }
        middleIndex = (start+end)/2;   //update middle index
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {1,3,5,7,9};
    print(binarySearch(even, 6 ,12));
    print(binarySearch(odd, 5 ,7));
}