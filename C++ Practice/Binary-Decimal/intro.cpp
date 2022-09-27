#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=0;
    int ans = 0;
    while(n!=0){
        int lastBit = n&1; 
        n = n>>1;
        ans = (lastBit * pow(10,i)) + ans;
        i++;
    }
    cout << ans << endl;
    cout<< (5&(-6)) << endl;
}