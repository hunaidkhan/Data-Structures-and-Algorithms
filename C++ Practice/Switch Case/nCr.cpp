#include<iostream>
using namespace std;

int factorial(int n){
    int factorial = 1;
    for(int i = n; i>0; i--){
        factorial *= i;
    }
    return factorial;
}


int nCr(int n, int r){
    int result = (factorial(n)) / (factorial(r) * factorial(n-r));
    return result;
}

int main()
{
    int n, r;
    cout << "N" << endl;
    cin >> n;
    cout << "R" << endl;
    cin >> r;

    cout << nCr(n, r) << "Result" << endl;
     
}