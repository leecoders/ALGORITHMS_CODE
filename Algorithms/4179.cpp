//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//char board[1002][1002];
//queue<pair<int, int> > F, J;
//bool check = true;
//int n, m;
//
//void show() {
//    for(int i=0; i<=n+1; ++i) {
//        for(int j=0; j<=m+1; ++j) {
//            cout << board[i][j];
//        }
//        cout << '\n';
//    }
//    cout << '\n';
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
//            if(board[i][j] == 'J') {
//                J.push(make_pair(i, j));
//            }
//            if(board[i][j] == 'F') {
//                F.push(make_pair(i, j));
//            }
//        }
//    }
//    int day = -1;
//    while(check) {
//        day++;
//        check = false;
//        int len_j = J.size();
//        int len_f = F.size();
//
//        for(int l=0; l<len_f; ++l) {
//            int y = F.front().first;
//            int x = F.front().second;
//            F.pop();
//            for(int i=0; i<4; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                if(board[ny][nx] == '#' || board[ny][nx] == 'F') continue;
//                board[ny][nx] = 'F';
//                F.push(make_pair(ny, nx));
//            }
//        }
//        for(int l=0; l<len_j; ++l) {
//            int y = J.front().first;
//            int x = J.front().second;
//            if(y < 1 || x < 1 || y > n || x > m) {
//                cout << day;
//                return 0;
//            }
//            J.pop();
//            for(int i=0; i<4; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 0 || nx < 0 || ny > n+1 || nx > m+1) continue;
//                if(board[ny][nx] == '#' || board[ny][nx] == 'F' || board[ny][nx] == 'J') continue;
//                board[ny][nx] = 'J';
//                J.push(make_pair(ny, nx));
//                check = true;
//            }
//        }
//    }
//    cout << "IMPOSSIBLE";
//}