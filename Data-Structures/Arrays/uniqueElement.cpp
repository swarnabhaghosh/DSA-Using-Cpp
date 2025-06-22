#include <iostream>
using namespace std;

void PrintUnique(int nums[], int size)
{
    bool found=false;
    for(int i=0; i<size; i++)
    {
        bool is_unique=true;
        for(int j=0; j<size; j++)
        {
            if(j!=i && nums[i]==nums[j])
            {
                is_unique=false;
                break;
            }
        }
        if(is_unique){
            cout<<nums[i]<<" ";
            found=true;
        }
    }
    if(!found)
    cout<<"unique not found"<<endl;
}

int main()
{
    int nums[] = {1, 2, 3, 1, 2, 3, 4, 4};
    int size = sizeof(nums) / sizeof(int);
    PrintUnique(nums, size);
    return 0;
}