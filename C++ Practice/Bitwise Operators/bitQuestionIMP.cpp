#include<iostream>
using namespace std;
// https://leetcode.com/problems/number-of-1-bits/
int main()
{
    uint32_t n;
    //input of n is not in binary. it is in decimal number system. So you could either convert
    //the number to binary or use bitwise & with 1 to check if the last bit in the number is 1 or 0 and then 
    // right shift the number as shown below
    cin >> n;
    int counter = 0;

    while(n!=0){
        if(n&1) counter++; // check if the last bit of the number is 1 
        n = n>>1; //right shift the number 
    }
    cout << counter << endl
    ;
}