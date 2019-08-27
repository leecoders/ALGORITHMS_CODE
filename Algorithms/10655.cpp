//#include "bits/stdc++.h"
//using namespace std;
//
//int n;
//vector<pair<int, int> > v;
//int pSum[100001];
//int pJump[100001];
//int ans = 1234567890;
//
//int taxi(int x1, int y1, int x2, int y2) {
//    return abs(x1-x2) + abs(y1-y2);
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for(int i=0; i<n; ++i) {
//        int y, x;
//        cin >> y >> x;
//        v.push_back(make_pair(y, x));
//    }
//    for(int i=1; i<n; ++i) {
//        pSum[i] = pSum[i-1] + taxi(v[i-1].first, v[i-1].second, v[i].first, v[i].second);
//    }
//    for(int i=0; i<n-2; ++i) {
//        pJump[i] = taxi(v[i].first, v[i].second, v[i+2].first, v[i+2].second);
//    }
//    for(int i=1; i<n-1; ++i) {
//        int now = pSum[i-1] + pJump[i-1] + (pSum[n-1] - pSum[i+1]);
//        ans = min(now, ans);
//    }
//    cout << ans;
//}