//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, m;
//int board[501][501];
//bool visited[501][501];
//int ans = 0;
//int mx = 0;
//int cnt;
//
//void dfs(int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//        if(!visited[ny][nx] && board[ny][nx]) {
//            cnt++;
//            visited[ny][nx] = 1;
//            dfs(ny, nx);
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=m; ++j)
//            cin >> board[i][j];
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] && !visited[i][j]) {
//                ++ans;
//                cnt = 1; // 발견된 그림의 사이즈
//                visited[i][j] = 1;
//                dfs(i, j);
//                mx = max(mx, cnt);
//            }
//        }
//    }
//    cout << ans << '\n' << mx;
//}