#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cin >> n;
    cout<< endl;
    while(i<=n){
        int j =1;
        while(j<=n-i) //space
        {
            cout << " ";
            j++;
        }

        while(j<=n) //stars
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}