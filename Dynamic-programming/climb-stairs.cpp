#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n){
        vector<int> fib_n = {1,1};
        int i = 0;
        while (fib_n.size()<n){
            fib_n.push_back(fib_n[i]+fib_n[i+1]);
            i+=1;
        }
        return fib_n[n-1];
    }
    int climbStairs(int n) {
        return fib(n+1);
    }
};