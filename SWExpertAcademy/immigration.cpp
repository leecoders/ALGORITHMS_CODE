//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//vector<long long> t;
//
//long long sum(long long mid) {
//    long long ret = 0;
//    for(int j=0; j<n; ++j) {
//        ret += mid / t[j];
//        if(ret >= m) break;
//    }
//    return ret;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int testcase;
//    cin >> testcase;
//    for(int tc = 1; tc <= testcase; ++tc) {
//        t.clear();
//        cin >> n >> m;
//        for(int i=1; i<=n; ++i) {
//            int input;
//            cin >> input;
//            t.push_back(input);
//        }
//        sort(t.begin(), t.end());
//        long long lo = 1;
//        long long hi = t[0] * m;
//        long long ans = 0;
//        while(lo <= hi) {
//            long long mid = (lo + hi) / 2;
//            long long v = sum(mid);
//            if(v >= m) {
//                ans = mid;
//                hi = mid - 1;
//            }
//            else {
//                lo = mid + 1;
//            }
//        }
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}


