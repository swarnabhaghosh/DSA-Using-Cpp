#include<iostream>
using namespace std;

void Bsort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int nums[]={8, 97, 65, 34, 29, 58};
    int size=sizeof(nums)/sizeof(int);
    Bsort(nums, size);
    for(int i=0; i<size; i++)
        cout<<nums[i]<<" ";
    return 0;
}