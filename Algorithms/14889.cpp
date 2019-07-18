//#include"bits/stdc++.h"
//using namespace std;
//
//int n;
//int s[21][21];
//int mn = INT_MAX;
//bool visited[21] = {0};
//vector<int> a, b;
//
//void dfs(int now, int cnt) {
//    if(cnt == n/2) {
//        int sum = 0;
//        int sum2 = 0;
//        a.clear(), b.clear();
//        for(int i=1; i<=n; ++i)
//            if(visited[i]) a.push_back(i);
//            else b.push_back(i);
//        for(int i=0; i<n/2; ++i) {
//            for(int j=i+1; j<n/2; ++j) {
//                sum += s[a[i]][a[j]] + s[a[j]][a[i]];
//                sum2 += s[b[i]][b[j]] + s[b[j]][b[i]];
//            }
//        }
//        mn = min(mn, abs(sum-sum2));
//        return;
//    }
//    for(int i=now+1; i<=n; ++i) {
//        visited[i] = 1;
//        dfs(i, cnt+1);
//        visited[i] = 0;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> s[i][j];
//        }
//    }
//    dfs(0, 0);
//    cout << mn;
//}