//#include "bits/stdc++.h"
//using namespace std;
//
//int dz[] = {0, 0, 0, 0, 1, -1};
//int dy[] = {0, 0, 1, -1, 0, 0};
//int dx[] = {1, -1, 0, 0, 0, 0};
//int l, n, m;
//char board[31][31][31];
//int visited[31][31][31];
//int sz, sy, sx, tz, ty, tx;
//
//struct N {
//    int z, y, x;
//    N(int _z, int _y, int _x) {
//        z = _z;
//        y = _y;
//        x = _x;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    while(1) {
//        bool ans = false;
//        memset(visited, -1, sizeof(visited));
//        cin >> l >> n >> m;
//        if(l==0 && n==0 && m==0) break;
//        for(int i=1; i<=l; ++i)
//            for(int j=1; j<=n; ++j)
//                for(int k=1; k<=m; ++k) {
//                    cin >> board[i][j][k];
//                    if(board[i][j][k] == 'S') {
//                        sz = i, sy = j, sx = k;
//                    }
//                    else if(board[i][j][k] == 'E') {
//                        tz = i, ty = j, tx = k;
//                    }
//                }
//        queue<N> q;
//        q.push(N(sz, sy, sx));
//        visited[sz][sy][sx] = 0;
//        while(!q.empty()) {
//            int z = q.front().z;
//            int y = q.front().y;
//            int x = q.front().x;
//            q.pop();
//            if(z == tz && y == ty && x == tx) {
//                cout << "Escaped in " << visited[z][y][x] << " minute(s)." << '\n';
//                ans = true;
//                break;
//            }
//            for(int i=0; i<6; ++i) {
//                int nz = z + dz[i];
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(nz < 1 || ny < 1 || nx < 1 || nz > l || ny > n || nx > m) continue;
//                if(board[nz][ny][nx] == '#') continue;
//                if(visited[nz][ny][nx] == -1 || visited[nz][ny][nx] > visited[z][y][x] + 1) {
//                    visited[nz][ny][nx] = visited[z][y][x] + 1;
//                    q.push(N(nz, ny, nx));
//                }
//            }
//        }
//        if(!ans) cout << "Trapped!" << '\n';
//    }
//}