#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cin >> n;
    cout << endl;
    i=n;
    while(i>0){
        int j = 1;
        while(j<=i){
            cout << '*';
            j++;
        }
        i--;
        cout<<endl;
    }
}