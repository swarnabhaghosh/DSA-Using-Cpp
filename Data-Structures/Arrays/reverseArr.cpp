#include<iostream>
using namespace std;

// two pointers method
void Reverse(int arr[], int size){
    int left=0; 
    int right=size-1;
    int mid=(right+left)/2;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
}

int main(){
    int nums[]={8, 97, 34, 29, 58};
    int size=sizeof(nums)/sizeof(int);
    Reverse(nums, size);
    return 0;
}