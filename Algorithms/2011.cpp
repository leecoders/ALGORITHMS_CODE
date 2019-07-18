//#include "bits/stdc++.h"
//using namespace std;
//
//string s;
//int n;
//long long dp[5001]; // k부터 n-1 까지의 문자열 중에 나올 수 있는 경우의 수.
//
//long long f(int k) {
//    if(k == n) return 1;
//    if(k == n-1 && s[k] != '0') return 1;
//    if(s[k] == '0') return 0;
//
//    long long& ret = dp[k];
//    if(ret != -1) return ret;
//    ret = 0;
//
//    if(s[k] == '2') {
//        if(s[k + 1] <= '6') {
//            ret += f(k + 2);
//            if(s[k + 1] != '0') ret += f(k + 1);
//        }
//        else {
//            ret += f(k + 1);
//        }
//    }
//    else if(s[k] == '1') {
//        ret += f(k + 2);
//        if(s[k + 1] != '0') ret += f(k + 1);
//    }
//    else ret += f(k + 1);
//    ret %= 1000000;
//
//    return ret;
//}
//
//int main() {
//    cin >> s;
//    n = s.size();
//    memset(dp, -1, sizeof(dp));
//
//    cout << f(0) << '\n';
//}