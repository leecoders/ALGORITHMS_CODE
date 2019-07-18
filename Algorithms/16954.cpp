//#include "bits/stdc++.h"
//using namespace std;
//
//char board[9][9];
//bool visited[50][9][9];
//int dy[] = {0, 0, 0, 1, -1, 1, 1, -1, -1};
//int dx[] = {0, 1, -1, 0, 0, 1, -1, 1, -1};
//
//void rain() {
//    for(int j=1; j<=8; ++j) {
//        for(int i=8; i>=2; --i) {
//            board[i][j] = board[i-1][j];
//        }
//        board[1][j] = '.';
//    }
//}
//
//int main() {
//    for(int i=1; i<=8; ++i)
//        for(int j=1; j<=8; ++j)
//            cin >> board[i][j];
//    queue<pair<int, int>> q;
//    q.push(make_pair(8, 1));
//    int sec = 0;
//    while(!q.empty()) {
//        sec++;
//        int len = q.size();
//        for (int l = 0; l < len; ++l) {
//            int y = q.front().first;
//            int x = q.front().second;
//            q.pop();
//            if(y == 1 && x == 8) {
//                cout << 1;
//                return 0;
//            }
//            if(board[y][x] == '#') continue;
//            for(int i=0; i<9; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > 8 || nx > 8) continue;
//                if(!visited[sec][ny][nx] && board[ny][nx] == '.') {
//                    visited[sec][ny][nx] = 1;
//                    q.push(make_pair(ny, nx));
//                }
//            }
//        }
//        rain();
//    }
//    cout << 0;
//}