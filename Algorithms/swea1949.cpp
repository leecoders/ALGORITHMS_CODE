//#include "bits/stdc++.h"
//using namespace std;
//
//int n, k;
//int board[9][9];
//bool visited[9][9];
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int max_hi;
//int ans;
//
//void dfs(int y, int x, int cnt, int height, bool used) {
//    ans = max(ans, cnt);
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(visited[ny][nx]) continue;
//        visited[ny][nx] = 1;
//        if(height > board[ny][nx]) {
//            dfs(ny, nx, cnt + 1, board[ny][nx], used);
//        }
//        else {
//            if(!used) {
//                int next = height - 1;
//                if(board[ny][nx] - next <= k) {
//                    dfs(ny, nx, cnt + 1, next, true);
//                }
//            }
//        }
//        visited[ny][nx] = 0;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tt;
//    cin >> tt;
//    for(int tc = 1; tc <= tt; ++tc) {
//        max_hi = 0;
//        ans = 0;
//        memset(visited, 0, sizeof(visited));
//        cin >> n >> k;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=n; ++j) {
//                cin >> board[i][j];
//                max_hi = max(max_hi, board[i][j]);
//            }
//        }
//        for(int i=1; i<=n; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                if(board[i][j] == max_hi) {
//                    visited[i][j] = 1;
//                    dfs(i, j, 1, board[i][j], false);
//                    visited[i][j] = 0;
//                }
//            }
//        }
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}