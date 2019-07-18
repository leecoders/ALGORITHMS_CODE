//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//int K;
//int n, m;
//int dy[] = {0, 0, 1, -1, 1, 2, -1, 2, 1, -2, -1, -2};
//int dx[] = {1, -1, 0, 0, 2, 1, 2, -1, -2, 1, -2, -1};
//int board[201][201];
//int visited[31][201][201];
//int ans = INF;
//
//struct N {
//    int k, y, x;
//    N(int _k, int _y, int _x) {
//        k = _k;
//        y = _y;
//        x = _x;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(visited, -1, sizeof(visited));
//    cin >> K >> m >> n;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    queue<N> q;
//    q.push(N(0, 1, 1));
//    visited[0][1][1] = 0;
//    while(!q.empty()) {
//        int k = q.front().k;
//        int y = q.front().y;
//        int x = q.front().x;
//        q.pop();
//        if(y == n && x == m) {
//            ans = min(ans, visited[k][y][x]);
//            break;
//        }
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//            if(board[ny][nx]) continue;
//            if(visited[k][ny][nx] == -1 || visited[k][ny][nx] > visited[k][y][x] + 1) {
//                visited[k][ny][nx] = visited[k][y][x] + 1;
//                q.push(N(k, ny, nx));
//            }
//        }
//        if(k < K) {
//            for(int i=4; i<12; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                if(board[ny][nx]) continue;
//                if(visited[k + 1][ny][nx] == -1 || visited[k + 1][ny][nx] > visited[k][y][x] + 1) {
//                    visited[k + 1][ny][nx] = visited[k][y][x] + 1;
//                    q.push(N(k + 1, ny, nx));
//                }
//            }
//        }
//    }
//    if(ans == INF) cout << -1;
//    else cout << ans;
//}