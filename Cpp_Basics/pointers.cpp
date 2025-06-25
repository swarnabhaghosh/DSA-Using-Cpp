#include<iostream>
using namespace std;

// void changeA_ptr(int *ptr){ // pass by reference using pointers 
//     *ptr=20;
// }

// void changeA_alias(int &b){ // pass by reference using alias, b is alias of a
//     b=20;
// }

int main(){
    // int a = 10;
    // int* ptr=&a;
    // int** paptr=&ptr; // pointer to pointer

    // cout<<a<<endl; // value of a
    // cout<<&a<<endl; // address of a
    // cout<<ptr<<endl; // address stored in pointer
    // cout<<*ptr<<endl; // value stored in pointer
    // cout<<**paptr<<endl;
    // cout<<paptr<<endl; // address of the pointer stored in parent pointer
    // cout<<*paptr<<endl; // address of the variable stored in the pointer, which is also stored in a parent poiter

    // // * -> dereference operator
    // // value at address

    // cout<<*(&a)<<endl; // address of a is passed and it will return the value stored at that address
    // cout<<*ptr<<endl; // address of a, which is already stored in ptr, is passed and it will return the value stored at that address

    // int* ptrx=NULL; // NULL pointer, it a pointer which is not pointing towards any valid location, by default a pointer automatically stores a garbage value if it is not initialized, so used NULL pointer, can not be dereferenced


    // // pass by reference using pointers
    // int val=10;
    // changeA_ptr(&val); // address is passed

    // cout<<"changed value :"<<val<<endl;


    // pass by reference using references
    // int val=10;
    // changeA_alias(val); // address is passed

    // cout<<"changed value :"<<val<<endl;

    // // array pointers
    // int arr[]={1, 2, 3, 4, 5}; // the name of the array, arr is a special variable, it is of type "constant" pointer (can't be changed) and it points towards the 0th element of the array

    // cout << arr << endl; // address of the 0th element
    // cout << *arr << endl; // value stored in the 0th index


    int arr[]={10, 20, 30, 40};
    int *ptr=arr; // address of the first index

    cout<<*(ptr+1)<<endl; // 20
    cout<<*(ptr+3)<<endl; // 40
    ptr++; // address is incremented by 4 (incr by 1 = incr of 1 integer size in the memory address)
    cout<<*ptr<<endl; // 20
    return 0;
}