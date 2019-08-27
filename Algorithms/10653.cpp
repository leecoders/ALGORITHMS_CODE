//#include "bits/stdc++.h"
//using namespace std;
//
//int n, k;
//vector<pair<int, int> > v;
//int dist[501][501];
//int ans = 1234567890;
//
//int taxi(int x1, int y1, int x2, int y2) {
//    return abs(x1-x2) + abs(y1-y2);
//}
//
//void dfs(int now, int sum, int cnt) {
//    if(sum > ans) return;
//    if(now == n-1) {
//        ans = min(ans, sum);
//        return;
//    }
//    if(k <= cnt) return;
//    for(int i = now + 1; i<n; ++i) {
//        dfs(i, sum + dist[now][i], cnt+1);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> k;
//    for(int i=0; i<n; ++i) {
//        int y, x;
//        cin >> y >> x;
//        v.push_back(make_pair(y, x));
//    }
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<n; ++j) {
//            dist[i][j] = taxi(v[i].first, v[i].second, v[j].first, v[j].second);
//        }
//    }
//    dfs(0, 0, 1);
//    cout << ans;
//}