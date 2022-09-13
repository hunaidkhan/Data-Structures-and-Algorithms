#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    cout << endl;
    int counter = 1;

    while(i<=n){
        int j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        while(j<=n){
            cout << counter++;
            j++;
        }
        i++;
        cout << endl;
    }
}