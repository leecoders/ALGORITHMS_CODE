//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m, r, c, l;
//int board[51][51];
//bool visited[51][51];
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//
//void c1(queue<pair<int, int>>& q, int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 0 || nx < 0 || ny > n-1 || nx > m-1) continue;
//        if(visited[ny][nx]) continue;
//        if(i == 0 && (board[ny][nx] == 2 || board[ny][nx] == 4 || board[ny][nx] == 5)) continue;
//        if(i == 1 && (board[ny][nx] == 2 || board[ny][nx] == 6 || board[ny][nx] == 7)) continue;
//        if(i == 2 && (board[ny][nx] == 3 || board[ny][nx] == 5 || board[ny][nx] == 6)) continue;
//        if(i == 3 && (board[ny][nx] == 3 || board[ny][nx] == 5 || board[ny][nx] == 6)) continue;
//        q.push(make_pair(ny, nx));
//    }
//}
//void c2(queue<pair<int, int>>& q, int y, int x) {
//
//}
//void c3(queue<pair<int, int>>& q, int y, int x) {
//
//}
//void c4(queue<pair<int, int>>& q, int y, int x) {
//
//}
//void c5(queue<pair<int, int>>& q, int y, int x) {
//
//}
//void c6(queue<pair<int, int>>& q, int y, int x) {
//
//}
//void c7(queue<pair<int, int>>& q, int y, int x) {
//
//}
//
//int main() {
//    int t;
//    cin >> t;
//    for(int tc = 1; tc <= t; ++tc) {
//        memset(visited, 0, sizeof(visited));
//        cin >> n >> m >> r >> c >> l;
//        for(int i=0; i<n; ++i) {
//            for(int j=0; j<m; ++j) {
//                cin >> board[i][j];
//            }
//        }
//        int cnt = 1;
//        queue<pair<int, int>> q;
//        visited[r][c] = 1;
//        q.push(make_pair(r, c));
//        while(!q.empty()) {
//            int len = q.size();
//            for(int i=0; i<len; ++i) {
//                int y = q.front().first;
//                int x = q.front().second;
//                int type = board[y][x];
//                q.pop();
//
//                switch(type) {
//                    case 1 :
//                        c1(q, y, x);
//                        break;
//                    case 2:
//                        c2(q, y, x);
//                        break;
//                    case 3 :
//                        c3(q, y, x);
//                        break;
//                    case 4:
//                        c4(q, y, x);
//                        break;
//                    case 5 :
//                        c5(q, y, x);
//                        break;
//                    case 6:
//                        c6(q, y, x);
//                        break;
//                    case 7 :
//                        c7(q, y, x);
//                        break;
//                }
//            }
//        }
//    }
//}