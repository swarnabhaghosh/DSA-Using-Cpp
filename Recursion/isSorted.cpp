//check if an array is sorted

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>nums){
    bool isSorted = true;
    int idx = 0;
    while(idx < nums.size() - 1){
        if(nums[idx] > nums[idx + 1]){
            isSorted = false;
            break;
        }
        idx++;
    }
    return isSorted;
}

bool isSorted_rec(vector<int>nums, int n){
    if(n <= 1){
        return true;
    }

    return nums[n-1] >= nums[n-2] && isSorted_rec(nums, n-1);
}

int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    if(isSorted(nums))
        cout << "Sorted" << endl;
    else
        cout << "not Sorted" << endl;

    if(isSorted_rec(nums, nums.size()))
        cout << "Sorted" << endl;
    else
        cout << "not Sorted" << endl;
    return 0;
}