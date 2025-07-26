#include<iostream>
#include<vector>
using namespace std;

//using Recursion -> O(n^2)
int fibo_rec(int n){
    if(n <= 1){
        return n;
    }

    return fibo_rec(n - 1) + fibo_rec(n - 2);
}

//using DP -> O(n)
int fibo_dp(int n){
    if(n <= 1){
        return n;
    }

    vector<int>dp(n+1);
    //base case:
    dp[0] = 0; //for 0th idx store 0 
    dp[1] = 1; //for 1st idx store 1

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}

int main(){
    int num = 4;
    cout << fibo_rec(num) << endl;
    cout << fibo_dp(num) << endl;
    return 0;
}