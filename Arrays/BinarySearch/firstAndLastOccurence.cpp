#include<iostream>
using namespace std;

int main()
{
    cout << "SFDSF" << endl;
    int length = 5;
    int arr[5] = {1,3,3,4,4};
    int key = 3;
    int start = 0;
    int end = length - 1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end){
        //go right
        if(arr[mid] < key){
            start = mid+1;
        }

        //go left{
        if(arr[mid] > key){
            end = mid-1;
        }
        if(arr[mid] == key){
           if(arr[mid-1]!=key){
                cout << mid << "THIS Is first occurence" << endl;
                start = mid +1;
                end = length-1;
           }
           if(arr[mid+1] != key){
            cout << mid << "THIS IS LAST OCCURENCE " << endl;
            end = mid-1;
            start = 0;
           }
        }
        mid = start + (end-start)/2;

        }
    }
