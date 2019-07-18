//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {-1, 0, 1, 0};
//int dx[] = {0, 1, 0, -1};
//int n, m;
//int r, c, d;
//int board[51][51];
//bool visited[51][51];
//int cnt = 1;
//
//void turn_left() {
//    if(--d == -1) d = 3;
//}
//
//bool check_all() {
//    int ret = 0;
//    for(int i=0; i<4; ++i) {
//        int nr = r + dy[i];
//        int nc = c + dx[i];
//        if((nr < 1 || nc < 1 || nr > n || nc > m) || visited[nr][nc] || board[nr][nc]) ret++;
//    }
//    return ret == 4;
//}
//
//bool check_left() {
//    int dir = d-1;
//    if(dir == -1) dir = 3;
//    int nr = r + dy[dir];
//    int nc = c + dx[dir];
//    return !(nr < 1 || nc < 1 || nr > n || nc > m) && !visited[nr][nc] && !board[nr][nc];
//}
//
//bool check_back() {
//    int dir = d;
//    if(dir <= 1) dir += 2;
//    else dir -= 2;
//    int nr = r + dy[dir];
//    int nc = c + dx[dir];
//    if(nr < 1 || nc < 1 || nr > n || nc > m) return false;
//    if(board[nr][nc]) return false;
//    return true;
//}
//
//void go_front() {
//    r += dy[d];
//    c += dx[d];
//    visited[r][c] = 1;
//}
//
//void go_back() {
//    int dir = d;
//    if(dir <= 1) dir += 2;
//    else dir -= 2;
//    r += dy[dir];
//    c += dx[dir];
//}
//
//int main() {
//    cin >> n >> m;
//    cin >> r >> c >> d;
//    r++, c++;
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=m; ++j)
//            cin >> board[i][j];
//    visited[r][c] = 1;
//    while(1) {
//        if(check_all()) {
//            if(!check_back()) break;
//            go_back();
//            continue;
//        }
//        if(check_left()) {
//            turn_left();
//            go_front();
//            cnt++;
//        }
//        else {
//            turn_left();
//        }
//    }
//    cout << cnt << '\n';
//
//}