// Similar type of data
// contiguous data
// Linear Data structure

#include<iostream>
using namespace std;

int main(){
    // int marks[] = {99, 100, 18};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // dtype array_name[size];


    // int arr[10];
    // for(int i=0; i<5; i++){
    //     cout<<"Enter number at " << i << "th position:" << endl;
    //     cin>>arr[i];
    // }

    // for(int i=0; i<5; i++){
    //     cout<<"Number at " << i << "th position:" << arr[i] << endl;
    // }


    // Find MIN-MAX:
    
    // int marks[]={78, 56, 4, 90, 99, 12};
    // int size=sizeof(marks)/sizeof(marks[0]);
    
    // int min_num=INT_MAX;
    // int max_num=INT_MIN;

    // for(int i=0; i<size; i++){
    //     // if(marks[i]<min_num){
    //     //     min_num=marks[i];
    //     // }
    //     // if(marks[i]>max_num){
    //     //     max_num=marks[i];
    //     // }
    //     // or
    //     min_num=min(min_num, marks[i]);
    //     max_num=max(max_num, marks[i]);
    // }
    // cout<<"minimum number= "<<min_num<<endl;
    // cout<<"maximum number= "<<max_num<<endl;

    int arr[]={11, 22, 100, 9, 33, 44};
    int size=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT_MAX, index;
    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            index=i;
        }
    }
    cout<<"index of smallest number is: "<<index<<endl;

    return 0;
}