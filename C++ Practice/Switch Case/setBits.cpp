#include<iostream>
using namespace std;

//counts number of 1 bits in both the numbers

int bitsCounter(int n){
    int counter = 0;
    while(n!=0){
        if(n&1){
            counter++;
        }
        n = n >> 1;
    }
    return counter;
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << bitsCounter(a) + bitsCounter(b) << endl;
}