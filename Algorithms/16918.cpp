//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//using namespace std;
//
//double board[201][201];
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int r, c, n;
//
//void show() {
//    for(int i=1; i<=r; ++i) {
//        for(int j=1; j<=c; ++j) {
//            if(board[i][j] == -5.0) cout << '.';
//            else cout << 'O';
//        }
//        cout << '\n';
//    }
//}
//
//void bomb(int t) {
//    vector<pair<int, int>> v;
//    for(int i=1; i<=r; ++i) {
//        for(int j=1; j<=c; ++j) {
//            if(board[i][j] != -5.0 && board[i][j] <= (double)t-3.0) {
//                v.push_back(make_pair(i, j));
//            }
//        }
//    }
//    for(int i=0; i<v.size(); ++i) {
//        int y = v[i].first;
//        int x = v[i].second;
//        board[y][x] = -5.0;
//        for(int k=0; k<4; ++k) {
//            int ny = y + dy[k];
//            int nx = x + dx[k];
//            if(ny < 1 || nx < 1 || ny > r || nx > c) continue;
//            board[ny][nx] = -5.0;
//        }
//    }
//}
//
//void install(int t) {
//    for(int i=1; i<=r; ++i) {
//        for(int j=1; j<=c; ++j) {
//            if(board[i][j] == -5.0)
//                board[i][j] = (double)t+0.1;
//        }
//    }
//}
//
//int main() {
//    cin >> r >> c >> n;
//    for(int i=1; i<=r; ++i) {
//        for(int j=1; j<=c; ++j) {
//            char input;
//            cin >> input;
//            if(input == '.') {
//                board[i][j] = -5.0; // 빈 곳은 -5
//            }
//            else {
//                board[i][j] = 0.0; // 0초에 설치된 폭탄을 의미.
//            }
//        }
//    }
//    for(int t = 1; t <= n; ++t) {
//        bomb(t);
//        if(t == n) {
//            show();
//            break;
//        }
//        install(t);
//    }
//}