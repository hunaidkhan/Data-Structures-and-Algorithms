#include<iostream>
using namespace std;

// A.P. is = 3*n + 7
int ap(int n){
    return (3*n + 7);
}

int main()
{
    int n;
    cin >> n;
    cout << ap(n) << endl;

}