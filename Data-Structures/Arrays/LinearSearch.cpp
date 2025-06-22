#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int nums[]={8, 97, 65, 34, 29, 58};
    int size=sizeof(nums)/sizeof(int);
    int target1=65; // 2
    int target2=58; // 5
    int target3=6500; // not found
    int res=LinearSearch(nums, size, target3);
    if(res!=-1){
        cout<<"Target is find at "<<res<<endl;
    }else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}