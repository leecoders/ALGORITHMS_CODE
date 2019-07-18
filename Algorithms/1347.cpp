//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 1, 0, -1};
//int dx[] = {1, 0, -1, 0};
//int n, dir = 1;
//int y=50, x=50;
//int min_y=50, min_x=50, max_y=50, max_x=50;
//char board[101][101];
//
//int main() {
//    cin >> n;
//    string s;
//    cin >> s;
//    board[y][x] = '.';
//    for(int i=0; i<s.size(); ++i) {
//        char c = s[i];
//        if(c == 'R') {
//            dir++;
//            if(dir == 4) dir = 0;
//        }
//        else if(c == 'L') {
//            dir--;
//            if(dir == -1) dir = 3;
//        }
//        else {
//            int ny = y + dy[dir];
//            int nx = x + dx[dir];
//            board[ny][nx] = '.';
//            min_y = min(ny, min_y);
//            min_x = min(nx, min_x);
//            max_y = max(ny, max_y);
//            max_x = max(nx, max_x);
//            y = ny;
//            x = nx;
//        }
//    }
//    for(int i=min_y; i<=max_y; ++i) {
//        for(int j=min_x; j<=max_x; ++j) {
//            if(board[i][j] == '.') {
//                cout << ".";
//            }
//            else {
//                cout << "#";
//            }
//        }
//        cout << '\n';
//    }
//}