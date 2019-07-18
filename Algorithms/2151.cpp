//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <tuple>
//#include <algorithm>
//#include <math.h>
//#include <limits.h>
//using namespace std;
//
//int n;
//int dy[4] = {0, 0, 1, -1};
//int dx[4] = {1, -1, 0, 0};
//int ty, tx, ry, rx, y, x, ny, nx, dir, cnt;
//int visited[51][51][4] = {0};
//char board[51][51];
////int CNT[51][51] = {0};
//
//int main() {
//    queue<tuple<int, int, int, int> > q;
//    cin >> n;
//    bool first = false;
//    for(int i=1; i<=n; ++i) {
//        string input;
//        cin >> input;
//        for(int j=1; j<=n; ++j) {
////            CNT[i][j] = 987654321;
//            for(int k=0; k<4; ++k) {
//                visited[i][j][k] = INT_MAX;
//            }
//            board[i][j] = input[j-1];
//            if(board[i][j] == '#') {
//                if(!first) {
////                    visited[i][j] = 15;
//                    ry = i;
//                    rx = j;
//                    first = true;
//                }
//                else {
//                    ty = i;
//                    tx = j;
//                }
//            }
//        }
//    }
//    for(int i=0; i<4; ++i) {
//        ny = ry + dy[i];
//        nx = rx + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(board[ny][nx] == '*') continue;
////        visited[ny][nx] |= (1<<i); // 동1 서2 남4 북8
////        CNT[ny][nx] = 0;
//        visited[ny][nx][i] = 0;
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
//            if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//            if(board[ny][nx] == '*') continue;
//            if(board[y][x] == '!') {
//                int next_cnt = dir == i ? cnt : cnt + 1;
////                if((visited[ny][nx] & (1<<i)) && (CNT[ny][nx] < next_cnt)) continue;
////                visited[ny][nx] |= (1<<i); // 동1 서2 남4 북8
////                CNT[ny][nx] = min(CNT[ny][nx], next_cnt);
//                if(visited[ny][nx][i] < next_cnt) continue;
//                visited[ny][nx][i] = next_cnt;
//                q.push(make_tuple(ny, nx, i, next_cnt));
//            }
//            else {
//                if(dir != i) continue; // .일 때 다른 방향이면 패스
////                if((visited[ny][nx] & (1<<i)) && (CNT[ny][nx] < cnt)) continue;
////                visited[ny][nx] |= (1<<i); // 동1 서2 남4 북8
////                CNT[ny][nx] = min(CNT[ny][nx], cnt);
//                if(visited[ny][nx][i] < cnt) continue;
//                visited[ny][nx][i] = cnt;
//                q.push(make_tuple(ny, nx, i, cnt));
//            }
//        }
//    }
//    int ans = INT_MAX;
//    for(int k=0; k<4; ++k)
//        ans = min(ans, visited[ty][tx][k]);
//    cout << ans;
//}

