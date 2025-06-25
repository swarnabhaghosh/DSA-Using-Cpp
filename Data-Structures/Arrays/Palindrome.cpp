#include<iostream>
using namespace std;

// two pointers method
bool Reverse(int arr[], int size){
    int left=0; 
    int right=size-1;
    int mid=(right+left)/2;

    while(left<right){
        if(arr[left]==arr[right]){
            left++;
            right--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int nums[]={8, 97, 34, 34, 97, 8};
    int size=sizeof(nums)/sizeof(int);
    bool res = Reverse(nums, size);
    if(res)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;
    return 0;
}