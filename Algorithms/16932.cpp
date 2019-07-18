//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[1001][1001];
//bool visited[1001][1001];
//int Size[1001];
//int cnt;
//int mx;
//
//void show() {
//    cout << '\n';
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cout << board[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//}
//
//void dfs(int y, int x, int color) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//        if(visited[ny][nx] || !board[ny][nx]) continue;
//        board[ny][nx] = color;
//        cnt++;
//        visited[ny][nx] = 1;
//        dfs(ny, nx, color);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    int now = 0;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] && !visited[i][j]) {
//                cnt = 1;
//                now++;
//                visited[i][j] = 1;
//                board[i][j] = now;
//                dfs(i, j, now);
//                Size[now] = cnt;
//            }
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if(!board[i][j]) {
//                int now = 1;
//                set<int> myset;
//                for(int k=0; k<4; ++k) {
//                    int ny = i + dy[k];
//                    int nx = j + dx[k];
//                    if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                    if(board[ny][nx] && !myset.count(board[ny][nx])) {
//                        myset.insert(board[ny][nx]);
//                        now += Size[board[ny][nx]];
//                    }
//                }
//                mx = max(mx, now);
//            }
//        }
//    }
//    cout << mx;
//}