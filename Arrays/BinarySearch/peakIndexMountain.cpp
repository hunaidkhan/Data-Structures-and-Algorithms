#include<iostream>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<end){
            //go right
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
                ans = mid;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
int main()
{
    vector<int>& arr = {1,2,3,4,5};
    peakIndexInMountainArray(arr);

}