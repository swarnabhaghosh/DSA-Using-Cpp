#include<iostream>
#include <cmath>
using namespace std;

int length(int num){
    int length = 0;
    while(num > 0){
        length++;
        num = num / 10;
    }
    return length;
}
int powerSum(int num){
    int sum = 0;
    int n = length(num);
    while(num > 0){
        sum += pow((num % 10), n);
        num /= 10;
    }
    return sum;
}

bool isArmstrong(int num){
    int sum = powerSum(num);
    if(sum == num) return true;
    return false;
}

int main(){
    int num = 153;
    if(isArmstrong(num))
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is not an Armstrong number" << endl;
    return 0;
}
