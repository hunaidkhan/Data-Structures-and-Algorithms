#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    cout << endl;

    while(i<=n){
        int j = 1;
        while(j<=n-i){ //print space
            cout << " ";
            j++;
        }
        // int k = 1;     - my solution
        // while(j<=n){ //print first triangle
        //     cout << k++;
        //     j++;
        // }

        // better solution for first triangle
        j = 1;
        while(j<=i){
            cout << j;
            j++;
        }
        j=1;
        while(j<=i-1){ //print second triangle 
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
}