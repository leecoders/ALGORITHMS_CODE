//#include"bits/stdc++.h"
//using namespace std;
//
//#define _upgrade ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n;
//int board[21][21];
//pair<int, int> lv;
//int sy, sx, ty, tx;
//int dist = 0;
//
//int shortest() {
//    int minD = INT_MAX; // 거리 최소값
//    int visited[n+1][n+1];
//    memset(visited, 0, sizeof(visited));
//    queue<pair<int, int>> q;
//    visited[sy][sx] = 1; // 마지막에 1 빼주자.
//    q.push(make_pair(sy, sx));
//    while(!q.empty()) {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//        if(board[y][x]!=0 && board[y][x] < lv.first) {
//            if(minD > visited[y][x]-1) {
//                minD = visited[y][x]-1;
//                ty = y;
//                tx = x;
//            }
//            else if(minD == visited[y][x]-1) {
//                if(y < ty || y == ty && x < tx) {
//                    ty = y;
//                    tx = x;
//                }
//            }
//            continue;
//        }
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//            if(visited[ny][nx] || board[ny][nx] > lv.first) continue;
//            visited[ny][nx] = visited[y][x] + 1;
//            q.push(make_pair(ny, nx));
//        }
//    }
//    if(minD == INT_MAX) return -1;
//    return minD;
//}
//
//int main() {
//    _upgrade;
//    lv.first = 2;
//    lv.second = 0;
//    cin >> n;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j];
//            if(board[i][j]==9)
//                sy=i, sx=j, board[i][j] = 0;
//        }
//    }
//    while(1) {
//        int d = shortest();
//        if(d == -1) break;
//        dist += d;
//        board[ty][tx] = 0;
//        sy = ty;
//        sx = tx;
//        lv.second++;
//        if(lv.first == lv.second) {
//            lv.first++;
//            lv.second = 0;
//        }
//    }
//    cout << dist;
//}