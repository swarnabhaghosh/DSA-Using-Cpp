#include <iostream>
using namespace std;

void intersection(int nums1[], int nums2[], int size1, int size2)
{
    bool found=false;
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(nums1[i]==nums2[j]){
                cout<<nums1[i]<<" ";
                found=true;
            }
        }
    }
    if(!found)
        cout<<"not found"<<endl;
}

int main()
{
    int nums1[] = {1, 2, 3,4};
    int nums2[] = {3, 4, 8, 9};
    int size1 = sizeof(nums1) / sizeof(int);
    int size2 = sizeof(nums2) / sizeof(int);
    intersection(nums1, nums2, size1, size2);
    return 0;
}