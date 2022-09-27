#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int decimalNumber = 0;
    int i=0;
    while(n!=0){
        int lastBit = n%10;
        if(lastBit) decimalNumber += pow(2,i);
        n/=10;
        i++;
    }
    cout << decimalNumber << endl;
    cout << INT_MAX << endl;
}