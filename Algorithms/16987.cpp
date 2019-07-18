//#include "bits/stdc++.h"
//using namespace std;
//
//int n;
//pair<int, int> egg[9];
//int ans = 0;
//
//void dfs(int now, int cnt) {
//    if(now > n) {
//        ans = max(ans, cnt);
//        return;
//    }
//    int s = egg[now].first;
//    int w = egg[now].second;
//    if(s <= 0) {
//        dfs(now + 1, cnt);
//    }
//    else {
//        bool check = true;
//        for (int i = 1; i <= n; ++i) {
//            if(i == now) continue;
//            if(egg[i].first > 0) {
//                check = false;
//                egg[i].first -= w;
//                egg[now].first -= egg[i].second;
//                if(egg[now].first <= 0) cnt++;
//                if(egg[i].first <= 0) dfs(now + 1, cnt + 1);
//                else dfs(now + 1, cnt);
//                if(egg[now].first <= 0) cnt--;
//                egg[now].first += egg[i].second;
//                egg[i].first += w;
//            }
//        }
//        if(check) dfs(now + 1, cnt);
//    }
//}
//
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        egg[i].first = a;
//        egg[i].second = b;
//    }
//    dfs(0, 0);
//    cout << ans;
//}