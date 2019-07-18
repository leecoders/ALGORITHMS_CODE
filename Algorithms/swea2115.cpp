//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m, c;
//int board[101][101];
//vector<int> choice[2];
//int ans;
//int mx[2];
//
//void dfs2(int ch, int now, int sum, int total) {
//    mx[ch] = max(mx[ch], total);
//    for(int i = now + 1; i < m; ++i) {
//        if(sum + choice[ch][i] <= c)
//            dfs2(ch, i, sum + choice[ch][i], total + pow(choice[ch][i], 2));
//    }
//}
//
//void dfs(int now, int cnt) {
//    if(cnt == 2) {
//        mx[0] = mx[1] = 0;
//        dfs2(0, -1, 0, 0);
//        dfs2(1, -1, 0, 0);
//        ans = max(ans, mx[0] + mx[1]);
//        return;
//    }
//
//    for(int i = now + 1; i <= n*n; ++i) {
//        int y = (i - 1) / n + 1;
//        int x = (i - 1) % n + 1;
//        if(x + m - 1 > n) continue;
//        for(int j=0; j<m; ++j) {
//            choice[cnt].push_back(board[y][x+j]);
//        }
//        dfs(i + m - 1, cnt + 1); // i + m - 1 을 넣어야 다음에 now + 1 부터 탐색한다.
//        choice[cnt].clear();
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int TC;
//    cin >> TC;
//    for(int tc = 1; tc <= TC; ++tc) {
//        ans = 0;
//        cin >> n >> m >> c;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//            }
//        }
//        dfs(0, 0);
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}