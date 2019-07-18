//#include"bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//char board[1501][1501];
//int check_water[1501][1501], check_swan[1501][1501];
//int ty, tx;
//queue<pair<int, int>> water, water2, swan, swan2;
//
////void show() {
////    for(int i=1; i<=n; ++i) {
////        for(int j=1; j<=m; ++j) {
////            cout << board[i][j];
////        }
////        cout << '\n';
////    }
////    cout << '\n';
////}
//
//bool go_swan() {
//    while(!swan.empty()) {
//        int y = swan.front().first;
//        int x = swan.front().second;
//        swan.pop();
//        if(y == ty && x == tx) return true;
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//            if(check_swan[ny][nx]) continue;
//            if(board[ny][nx] == '.') {
//                check_swan[ny][nx] = 1;
//                swan.push(make_pair(ny, nx));
//                swan2.push(make_pair(ny, nx));
//            }
//        }
//    }
//    swap(swan, swan2);
//    return false;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    bool first = true;
//    cin >> n >> m;
//
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 'L') {
//                if(first) {
//                    first = false;
//                    check_swan[i][j] = 1;
//                    swan.push(make_pair(i, j));
//                    swan2.push(make_pair(i, j));
//                }
//                else {
//                    ty = i, tx = j;
//                }
//                board[i][j] = '.';
//            }
//            if(board[i][j] == '.') {
//                check_water[i][j] = 1;
//                water.push(make_pair(i, j));
//            }
//        }
//    }
//
//    int day = 0;
//    while(1) {
//        if(go_swan()) break;
//        int len = water.size();
//        for(int l=0; l<len; ++l) {
//            int y = water.front().first;
//            int x = water.front().second;
//            water.pop();
//            for(int i=0; i<4; ++i) {
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                if(check_water[ny][nx]) continue;
//                if(board[ny][nx] == 'X') {
//                    check_water[ny][nx] = 1;
//                    board[ny][nx] = '.';
//                    water2.push(make_pair(ny, nx));
//                }
//            }
//        }
//        swap(water, water2);
//        day++;
//    }
//    cout << day << '\n';
//}