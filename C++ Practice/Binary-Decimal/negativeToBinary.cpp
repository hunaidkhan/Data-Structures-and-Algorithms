#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int positiveInput = -1*n; //ignoring the negative sign for negative decimal input

    int i = 0;
    int positiveBinary = 0;
    //calculating the binary representation for the positive-converted input
    while(positiveInput!=0){
        int lastBit = positiveInput&1;
        positiveInput = positiveInput >> 1;
        positiveBinary = (lastBit*pow(10,i)) + positiveBinary;
        i++;
    }
    cout << positiveBinary << endl;

    //Now we need to find binary for negativeInput - two's complement.
    i = 0;

    string oneComplement = "";
    while(positiveBinary!=0){
        int lastBit = positiveBinary%10;
        cout << lastBit;
        if(lastBit) lastBit = 0;
        else lastBit = 1;
        cout << lastBit << endl;
        oneComplement += to_string(lastBit);
        i++;
        positiveBinary /= 10;
    }
    //print reverse of one complement and then take two's complement. Incomplete
    cout << oneComplement << endl;

}