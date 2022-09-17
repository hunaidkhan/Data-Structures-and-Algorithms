#include<iostream>
using namespace std;

int main()
{
    int i =0;
    int n;
    cin >> n;
    cout << endl;

    while(i<=n){
        int j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}