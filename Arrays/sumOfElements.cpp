#include<iostream>
using namespace std;


void findSumofElements(int arr[], int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += arr[i];
    }
    cout << sum << endl;
}

int main()
{
    int arr[100];
    cout << "Enter number of elements" << endl;
    int n;
    cin >> n;

    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }
    findSumofElements(arr, n);

}