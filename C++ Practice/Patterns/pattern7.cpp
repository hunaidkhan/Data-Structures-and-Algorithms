#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cin >> n;
    cout << endl;

    while(i<=n){
        int j = 1;
        while(j<=i-1){
            cout << " ";
            j++;
        }
        while(j<=n){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}