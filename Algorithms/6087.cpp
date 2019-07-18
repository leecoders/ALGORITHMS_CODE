//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//int dy[4] = {0, 0, 1, -1}; // 동 - 서 - 남 - 북
//int dx[4] = {1, -1, 0, 0};
//int h, w;
//int y, x, ty, tx, ry, rx, ny, nx, dir, cnt;
//bool is_finded = false;
//int visited[101][101];
//char board[101][101];
//int ans;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(visited, -1, sizeof(visited));
//    cin >> w >> h;
//    queue<tuple<int, int, int, int>> q; // y, x, dir, cnt
//    for (int i = 1; i <= h; ++i) {
//        string input;
//        cin >> input;
//        for (int j = 1; j <= w; ++j) {
//            board[i][j] = input[j - 1];
//            if (board[i][j] == 'C') {
//                if (!is_finded) {
//                    is_finded = true;
//                    ry = i;
//                    rx = j;
//                    visited[i][j] = -1;
//                } else {
//                    ty = i;
//                    tx = j;
//                }
//            } else if (board[i][j] == '*') {
//                visited[i][j] = -1;
//            }
//        }
//    }
//    for(int i=0; i<4; ++i) {
//        ny = ry + dy[i];
//        nx = rx + dx[i];
//        if(ny < 1 || nx < 1 || ny > h || nx > w) continue;
//        if(board[ny][nx] == '*') continue;
//        visited[ny][nx] = 0;
//        q.push(make_tuple(ny, nx, i, 0));
//    }
//    while(!q.empty()) {
//        y = get<0>(q.front());
//        x = get<1>(q.front());
//        dir = get<2>(q.front());
//        cnt = get<3>(q.front());
//        q.pop();
//        for(int i=0; i<4; ++i) {
//            ny = y + dy[i];
//            nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > h || nx > w) continue;
//            if(board[ny][nx] == '*') continue;
//
//            int now_cnt = dir==i ? cnt : cnt + 1; // good point!
//            if(visited[ny][nx] != -1 && visited[ny][nx] < now_cnt) continue;
//
//            visited[ny][nx] = now_cnt;
//            q.push(make_tuple(ny, nx, i, now_cnt));
//        }
//    }
//    cout << visited[ty][tx];
//}