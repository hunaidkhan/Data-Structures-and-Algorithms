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
        while(j<=n-i+1){ //first triangle
            cout << j;
            j++;
        }

        int k=1;
        while(k<=2*(i-1)){ //star triangle
            cout << "*";
            k++;
        }
        j--; //decrementing j as its value increased from the first loop to 6 in case of n=5
        while(j>=1){ //last triangle
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}