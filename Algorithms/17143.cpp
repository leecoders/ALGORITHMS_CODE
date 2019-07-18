//#include "bits/stdc++.h"
//using namespace std;
//
//struct shark {
//    int y, x, dir, speed, bulk;
//    shark(int _y, int _x, int _speed, int _dir, int _bulk) {
//        y = _y;
//        x = _x;
//        speed = _speed;
//        dir = _dir;
//        bulk = _bulk;
//    }
//};
//int board[101][101];
//int n, m;
//int total;
//int ans;
//int dy[] = {-1, 1, 0, 0}; // 북, 남, 동, 서
//int dx[] = {0, 0, 1, -1};
//vector<shark> sv; // 0 ~ m-1 상어의 정보, 속도 -1이면 죽은 애
//int now;
//
//void show() {
//    cout << '\n';
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cout << board[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    memset(board, -1, sizeof(board)); // -1로 채운다.
//    cin >> n >> m >> total;
//    for(int i=0; i<total; ++i) {
//        int r, c, s, d, z;
//        cin >> r >> c >> s >> d >> z;
//        board[r][c] = i; // 해당 위치에 i번 째 상어가 있음.
//        d--;
//        if(d > 1) {
//            s = s % ((m - 1) * 2);
//        }
//        else {
//            s = s % ((n - 1) * 2);
//        }
//        shark shark(r, c, s, d, z);
//        sv.push_back(shark);
//    }
//    for(int l = 1; l <= m; ++l) {
//        // 한 칸 이동한 낚시왕과 같은 열의 가장 가까운 상어를 잡는다.
//        for(int i=1; i <= n; ++i) {
//            if(board[i][l] != -1) {
//                cout << board[i][l] << " is dead" << '\n';
//                ans += sv[board[i][l]].bulk;
//                sv[board[i][l]].speed = -1; // 속도가 -1이면 죽은 것.
//                board[i][l] = -1;
//                break;
//            }
//        }
//        // 상어가 이동한다.
//        for(int i=0; i < sv.size(); ++i) {
//            if(sv[i].speed != -1) {
//                int y = sv[i].y;
//                int x = sv[i].x;
//                int dir = sv[i].dir;
//                int speed = sv[i].speed;
//                int bulk = sv[i].bulk;
//                int ny = y;
//                int nx = x;
//                for(int j=0; j < speed; ++j) {
//                    if(ny + dy[dir] < 1 || nx + dx[dir] < 1 || ny + dy[dir] > n || nx + dx[dir] > m) {
//                        if(dir == 0 || dir == 2) dir++;
//                        else dir--;
//                    }
//                    ny += dy[dir];
//                    nx += dx[dir];
//                }
//                if(board[y][x] == 2) {
//                    cout << y << ' ' << x << '\n';
//                    cout << ny << ' ' << nx << '\n';
//                }
//                if(ny == y && nx == x) continue;
//                board[y][x] = -1; // 원래 위치에서 삭제한다.
//                if(board[ny][nx] == -1) {
//                    board[ny][nx] = i; // 그 자리에 덮어 씌운다.
//                    sv[i].y = ny;
//                    sv[i].x = nx;
//                    sv[i].dir = dir;
//                }
//                else if(sv[board[ny][nx]].bulk < bulk) { // 이동하려는 위치 비어있거나 이미 있는 애보다 크다면
//                    sv[board[ny][nx]].speed = -1; // 있던 애를 지우고
//                    board[ny][nx] = i; // 그 자리에 덮어 씌운다.
//                    sv[i].y = ny;
//                    sv[i].x = nx;
//                    sv[i].dir = dir;
//                }
//                else { // 이미 그 자리에 더 큰 애가 있다면
//                    sv[i].speed = -1; // 지금 애를 지운다.
//                }
//            }
//        }
//        cout << '\n' << l << '\n';
//        show();
//    }
//    cout << ans;
//}