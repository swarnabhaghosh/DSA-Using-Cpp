#include<iostream>
using namespace std;

int GCD(int num1, int num2){
    int GCD;
    for(int i = 1; i <= min(num1, num2); i++){
        if(num1 % i == 0 && num2 % i == 0){
            GCD = i;
        }
    }
    return GCD;
}

int GCDEuclid(int a, int b){
    while(a > 0 && b > 0){
        if(a > b)
            a = a % b;
        else
            b = b % a;
    }

    if(a == 0 ) return b;
    return a;
}

int main(){
    int a = 6, b = 12;
    cout << GCDEuclid(a, b) << endl;
    return 0;
}
