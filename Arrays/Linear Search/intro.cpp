#include<iostream>
using namespace std;

bool arraySearch(int arr[], int n, int key){
    for(int i = 0 ; i<n; i++){
        if(arr[i] == key) return 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {3, 5, 3, 6, -10, 4, 3, 1, 3, 5};
    int key;
    cout << "ENter the element you want to search" << endl;
    cin >> key;
    bool foundOrNot = arraySearch(arr, 10, key);
    if(foundOrNot) cout << key << " is present" << endl;
    else cout << key << " is not present" << endl;
}