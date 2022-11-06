#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int middleIndex = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        //go right
        if(arr[middleIndex] < key){
            start = middleIndex +1;
        }
        //go left
        if(arr[middleIndex] > key){
            end = middleIndex -1;
        }
        if(arr[middleIndex] == key){
            ans = middleIndex;
            end = middleIndex -1; // finding first occurence
        }
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int middleIndex = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        //go right
        if(arr[middleIndex] < key){
            start = middleIndex +1;
        }
        //go left
        if(arr[middleIndex] > key){
            end = middleIndex -1;
        }
        if(arr[middleIndex] == key){
            ans = middleIndex;
            start = middleIndex + 1; // finding last occurence
        }
    }
    return ans;
}

int main()
{
    int arr[6] = {0,5,5,6,6,6};
    cout << firstOccurence(arr, 6, 6) << endl;
    cout << lastOccurrence(arr, 6, 6) << endl;

}