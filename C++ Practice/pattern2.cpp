#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin >> n;
    cout << endl;
    char start = 'A';
    
    while(i<=n){
        int j = i;
        while(j<=i+i-1){
            char ch = start + j - 1;
            cout << ch ;
            j++;
        }
        i++;
        cout << endl;
    }
}