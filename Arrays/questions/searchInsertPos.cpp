#include<iostream>
using namespace std;

int search(){
    int nums[5] = {1,3,5,6,8};
    int target = 5;
    int length = sizeof(nums);
    if(nums[0] > target) {
        return 0;
    }
    if(nums[length-1] < target){
        return length;
    }
    for(int i=0;i<length; i++){
        if(nums[i] == target){
            return i;
        }
        if(nums[i] <= target && nums[i+1] > target){
            return i+1;
        }
    }
    return 0;
}

int main()
{
    search();
 
}