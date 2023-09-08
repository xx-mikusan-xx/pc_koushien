#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int memo[100010] = {0};

int fib2(int n) {
    int ans;

    if(n <= 1){
        return 1;
    }else{
        if(memo[n] == 0){
            memo[n] = fib2(n-1) + fib2(n-2);
        }
        return memo[n];
    }
}

int main(){
    int n = 30;
    cout << fib2(n) << endl;
}