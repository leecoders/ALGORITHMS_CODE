//#include <iostream>
//#include <queue>
//using namespace std;
//
//int dy1[] = {1, 1, -1, -1, 0, 0, 0, 0};
//int dx1[] = {0, 0, 0, 0, 1, 1, -1, -1};
//int dy2[] = {1, 1, -1, -1, 1, -1, 1, -1};
//int dx2[] = {1, -1, -1, 1, 1, 1, -1, -1};
//int board[10][9] = {0};
//
//int main() {
//    int r1, c1, r2, c2;
//    cin >> r1 >> c1 >> r2 >> c2;
//    board[r1][c1] = 1;
//    board[r2][c2] = -1;
//    queue<pair<int, int> > Q;
//    Q.push(make_pair(r1, c1));
//    while(!Q.empty()) {
//        int y = Q.front().first;
//        int x = Q.front().second;
//        Q.pop();
//        if(y==r2 && x==c2) break;
//        for(int i=0; i<8; ++i) {
//            int ny = y + dy1[i];
//            int nx = x + dx1[i];
//            if(ny < 0 || nx < 0 || ny > 9 || nx > 8) continue;
//            if(board[ny][nx] == -1) continue;
//            ny += dy2[i];
//            nx += dx2[i];
//            if(ny < 0 || nx < 0 || ny > 9 || nx > 8) continue;
//            if(board[ny][nx] == -1) continue;
//            ny += dy2[i];
//            nx += dx2[i];
//            if(ny < 0 || nx < 0 || ny > 9 || nx > 8) continue;
//            if(board[ny][nx] == 0 || board[ny][nx] == -1) {
//                Q.push(make_pair(ny, nx));
//                board[ny][nx] = board[y][x] + 1;
//            }
//        }
//    }
//    if(board[r2][c2] != -1) cout << board[r2][c2]-1;
//    else cout << -1;
//}