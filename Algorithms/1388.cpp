//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m;
//char board[101][101];
//
//int main() {
//    int cnt = 0;
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(board[i][j] == '-') {
//                cnt++;
//                int x = j;
//                while(x <= m && board[i][x] == '-') {
//                    board[i][x] = '+';
//                    ++x;
//                }
//            }
//            else if(board[i][j] == '|') {
//                cnt++;
//                int y = i;
//                while(y <= n && board[y][j] == '|') {
//                    board[y][j] = '+';
//                    ++y;
//                }
//            }
//        }
//    }
//    cout << cnt;
//}