#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int>result;
    int size=nums.size();
    int left=0; 
    int right=size-1;
    while(left<=right){
        int sum=nums[left]+nums[right];
        if((sum)==target){
            result.push_back(left);
            result.push_back(right);
            break;
        }else if(nums[left]+nums[right]>target){
            right--;
        }else{
            left++;
        }
    }
    return result;
}
int main(){
    vector<int> nums={2, 3, 7, 8};
    int target=10;
    vector<int>result=pairSum(nums, target);
    cout<<"the index are:"<<endl;
    for(int val:result){
        cout << val << " ";
    }
    return 0;
}