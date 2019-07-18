//#include "bits/stdc++.h"
//using namespace std;
//
//struct T {
//    int y, x, keys;
//    T(int _y, int _x, int _keys) : y(_y), x(_x), keys(_keys) {}
//};
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int visited[200][50][50];
//char board[50][50];
//int n, m;
//int sy, sx;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<m; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == '0') {
//                sy = i, sx = j;
//            }
//        }
//    }
//    queue<T> q;
//    q.push(T(sy, sx, 0));
//    visited[0][sy][sx] = 1; // 마지막에 1 빼주자
//    while(!q.empty()) {
//        int y = q.front().y;
//        int x = q.front().x;
//        int keys = q.front().keys;
//        q.pop();
//        if(board[y][x] == '1') {
//            cout << visited[keys][y][x] - 1;
//            return 0;
//        }
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//            if(board[ny][nx] == '#') continue;
//            char next = board[ny][nx];
//            int next_keys = keys;
//            if('a' <= next && next <= 'f') {
//                if(!(keys & (1 << (next - 'a' + 1))))
//                    next_keys += (1 << (next - 'a' + 1));
//                if(visited[next_keys][ny][nx] == 0 || (visited[keys][y][x] + 1 < visited[next_keys][ny][nx])) {
//                    visited[next_keys][ny][nx] = visited[keys][y][x] + 1;
//                    q.push(T(ny, nx, next_keys));
//                }
//            }
//            else if('A' <= next && next <= 'F') {
//                if(keys & (1 << (next - 'A' + 1))) {
//                    if(visited[next_keys][ny][nx] == 0 || (visited[keys][y][x] + 1 < visited[next_keys][ny][nx])) {
//                        visited[next_keys][ny][nx] = visited[keys][y][x] + 1;
//                        q.push(T(ny, nx, next_keys));
//                    }
//                }
//            }
//            else {
//                if(visited[next_keys][ny][nx] == 0 || (visited[keys][y][x] + 1 < visited[next_keys][ny][nx])) {
//                    visited[next_keys][ny][nx] = visited[keys][y][x] + 1;
//                    q.push(T(ny, nx, next_keys));
//                }
//            }
//        }
//    }
//    cout << -1;
//}