//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
//int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
//int kdy[] = {1, 1, -1, -1, 2, 2, -2, -2};
//int kdx[] = {2, -2, 2, -2, 1, -1, 1, -1};
//int n, m;
//vector<pair<int, int> > piece[3];
//int board[1001][1001];
//int ans;
//
//int main() {
//    cin >> n >> m;
//    for(int i=0; i<3; ++i) {
//        int len;
//        cin >> len;
//        for(int j=0; j<len; ++j) {
//            int y, x;
//            cin >> y >> x;
//            board[y][x] = 2;
//            piece[i].push_back(make_pair(y, x));
//        }
//    }
//    for(int i=0; i<piece[0].size(); ++i) {
//        int y = piece[0][i].first;
//        int x = piece[0][i].second;
//        for(int j=0; j<8; ++j) {
//            int ny = y + dy[j];
//            int nx = x + dx[j];
//            while(!(ny < 1 || nx < 1 || ny > n || nx > m) && (board[ny][nx] < 2)) {
//                board[ny][nx] = 1;
//                ny += dy[j];
//                nx += dx[j];
//            }
//        }
//    }
//    for(int i=0; i<piece[1].size(); ++i) {
//        int y = piece[1][i].first;
//        int x = piece[1][i].second;
//        for(int j=0; j<8; ++j) {
//            int ny = y + kdy[j];
//            int nx = x + kdx[j];
//            if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//            if(board[ny][nx] == 2) continue;
//            board[ny][nx] = 1;
//        }
//    }
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=m; ++j)
//            if(!board[i][j]) ans++;
//    cout << ans;
//}