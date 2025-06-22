#include<iostream>
using namespace std;
bool found=false;
int BinarySearch(int arr[], int size, int target){
    int low=0, high=size-1; 
    while(low<=high){
        int mid=low+(high-low)/2;
        if(target==arr[mid]){
            found=true;
            return mid;
        }
        else if(target>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}

int main(){
    int nums[]={8, 29, 34, 58, 65, 97};
    int size=sizeof(nums)/sizeof(int);
    int target1=65; // 4
    int target2=58; // 3
    int target3=6500; // not found
    int res=BinarySearch(nums, size, target3);
    if(found){
        cout<<"Target is find at "<<res<<endl;
    }else{
        cout<<"Target not found. It would be at "<<res<<"th index"<<endl;
    }
    return 0;
}