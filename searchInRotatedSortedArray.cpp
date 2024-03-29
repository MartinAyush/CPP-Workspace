#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size()-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target) return mid;
        // left is sorted
        if(nums[low] <= nums[mid]){
            if(target >= nums[low] and target <= nums[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{ // right is sorted
            if(target >= nums[mid] and target <= nums[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){ 
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(nums, target);

    return 0;
}