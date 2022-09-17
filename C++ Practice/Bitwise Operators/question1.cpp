#include<iostream>
using namespace std;


//Subtract product and sum of the digits of an integer
int main()
{
    int n;
    cin >> n;

    int product = 1;
    int sum = 0;

    while(n!=0){
        int lastDigit = n%10;
        product *= lastDigit;
        sum += lastDigit;
        n/=10;
        cout << "EDS" << endl;
    }
    cout << product - sum << endl;
}