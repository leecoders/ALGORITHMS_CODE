//#include "bits/stdc++.h"
//using namespace std;
//
//long long dp[51];
//
//long long fib(int n) {
//    if(n < 2) return 1;
//    long long& ret = dp[n];
//    if(ret != 1) return ret;
//    return ret += fib(n-2) + fib(n-1);
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for(int i=1; i<=n; ++i)
//        dp[i] = 1;
//    cout << fib(n) % 1000000007 << '\n';
//}