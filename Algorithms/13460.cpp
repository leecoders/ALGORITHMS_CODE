//#include "bits/stdc++.h"
//
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//char board[11][11];
//int visited[11][11][11][11];
//int ans = INT_MAX;
//
//void dfs(int ry, int rx, int by, int bx, int cnt) {
////    cout << ry << ' ' << rx << ' ' << by << ' ' << bx << ' ' << cnt << '\n';
//    if(cnt > 10) return;
//    bool r_goal = false;
//    bool b_goal = false;
//
//    for(int i=0; i<4; ++i) {
//        int nry, nrx, nby, nbx;
//        // 동
//        if (i == 0) {
//            nry = ry;
//            nrx = rx;
//            nby = by;
//            nbx = bx;
//            if (ry == by) {
//                if (rx > bx) {
//                    while (board[ry][nrx + dx[i]] != '#') {
//                        nrx += dx[i];
//                        if (board[ry][nrx] == 'O') {
//                            nrx = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[by][nbx + dx[i]] != '#' && nbx + dx[i] != nrx) {
//                        nbx += dx[i];
//                        if (board[by][nbx] == 'O') {
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                } else {
//                    while (board[by][nbx + dx[i]] != '#') {
//                        nbx += dx[i];
//                        if (board[by][nbx] == 'O') {
//                            nbx = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[ry][nrx + dx[i]] != '#' && nrx + dx[i] != nbx) {
//                        nrx += dx[i];
//                        if (board[ry][nrx] == 'O') {
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                }
//            } else {
//                while (board[ry][nrx + dx[i]] != '#') {
//                    nrx += dx[i];
//                    if (board[ry][nrx] == 'O') {
//                        r_goal = true;
//                        break;
//                    }
//                }
//                while (board[by][nbx + dx[i]] != '#') {
//                    nbx += dx[i];
//                    if (board[by][nbx] == 'O') {
//                        b_goal = true;
//                        break;
//                    }
//                }
//            }
//        }
//        // 서
//        else if (i == 1) {
//            nry = ry;
//            nrx = rx;
//            nby = by;
//            nbx = bx;
//            if (ry == by) {
//                if (rx < bx) {
//                    while (board[ry][nrx + dx[i]] != '#') {
//                        nrx += dx[i];
//                        if (board[ry][nrx] == 'O') {
//                            nrx = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[by][nbx + dx[i]] != '#' && nbx + dx[i] != nrx) {
//                        nbx += dx[i];
//                        if (board[by][nbx] == 'O') {
//                            nbx = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                } else {
//                    while (board[by][nbx + dx[i]] != '#') {
//                        nbx += dx[i];
//                        if (board[by][nbx] == 'O') {
//                            nbx = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[ry][nrx + dx[i]] != '#' && nrx + dx[i] != nbx) {
//                        nrx += dx[i];
//                        if (board[ry][nrx] == 'O') {
//                            nrx = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                }
//            } else {
//                while (board[ry][nrx + dx[i]] != '#') {
//                    nrx += dx[i];
//                    if (board[ry][nrx] == 'O') {
//                        nrx = -1;
//                        r_goal = true;
//                        break;
//                    }
//                }
//                while (board[by][nbx + dx[i]] != '#') {
//                    nbx += dx[i];
//                    if (board[by][nbx] == 'O') {
//                        nbx = -1;
//                        b_goal = true;
//                        break;
//                    }
//                }
//            }
//        }
//        // 남
//        else if (i == 2) {
//            nry = ry;
//            nrx = rx;
//            nby = by;
//            nbx = bx;
//            if (rx == bx) {
//                if (ry > by) {
//                    while (board[nry + dy[i]][rx] != '#') {
//                        nry += dy[i];
//                        if (board[nry][rx] == 'O') {
//                            nry = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[nby + dy[i]][bx] != '#' && nby + dy[i] != nry) {
//                        nby += dy[i];
//                        if (board[nby][bx] == 'O') {
//                            nby = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                } else {
//                    while (board[nby + dy[i]][bx] != '#') {
//                        nby += dy[i];
//                        if (board[nby][bx] == 'O') {
//                            nby = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[nry + dy[i]][rx] != '#' && nry + dy[i] != nby) {
//                        nry += dy[i];
//                        if (board[nry][rx] == 'O') {
//                            nry = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                }
//            } else {
//                while (board[nry + dy[i]][rx] != '#') {
//                    nry += dy[i];
//                    if (board[nry][rx] == 'O') {
//                        r_goal = true;
//                        break;
//                    }
//                }
//                while (board[nby + dy[i]][bx] != '#') {
//                    nby += dy[i];
//                    if (board[nby + dy[i]][bx] == 'O') {
//                        b_goal = true;
//                        break;
//                    }
//                }
//            }
//        }
//        // 북
//        else if (i == 3) {
//            nry = ry;
//            nrx = rx;
//            nby = by;
//            nbx = bx;
//            if (rx == bx) {
//                if (ry < by) {
//                    while (board[nry + dy[i]][rx] != '#') {
//                        nry += dy[i];
//                        if (board[nry][rx] == 'O') {
//                            nry = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[nby + dy[i]][bx] != '#' && nby + dy[i] != nry) {
//                        nby += dy[i];
//                        if (board[nby][bx] == 'O') {
//                            nby = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                } else {
//                    while (board[nby + dy[i]][bx] != '#') {
//                        nby += dy[i];
//                        if (board[nby][bx] == 'O') {
//                            nby = -1;
//                            b_goal = true;
//                            break;
//                        }
//                    }
//                    while (board[nry + dy[i]][rx] != '#' && nry + dy[i] != nby) {
//                        nry += dy[i];
//                        if (board[nry][rx] == 'O') {
//                            nry = -1;
//                            r_goal = true;
//                            break;
//                        }
//                    }
//                }
//            } else {
//                while (board[nry + dy[i]][rx] != '#') {
//                    nry += dy[i];
//                    if (board[nry][rx] == 'O') {
//                        r_goal = true;
//                        break;
//                    }
//                }
//                while (board[nby + dy[i]][bx] != '#') {
//                    nby += dy[i];
//                    if (board[nby][bx] == 'O') {
//                        b_goal = true;
//                        break;
//                    }
//                }
//            }
//        }
//        if(r_goal || b_goal) {
//            if(r_goal && !b_goal) {
//                ans = min(ans, cnt);
//            }
//            r_goal = b_goal = false;
//            continue;
//        }
//        if(nry == ry && nrx == rx && nby == by && nbx == bx) continue;
//        dfs(nry, nrx, nby, nbx, cnt + 1);
////        if(!visited[nry][nrx][nby][nbx] || visited[nry][nrx][nby][nbx] > cnt) {
////            visited[nry][nrx][nby][nbx] = cnt;
////            dfs(nry, nrx, nby, nbx, cnt + 1);
////        }
//    }
//}
//
//int main() {
//    int ry, rx;
//    int by, bx;
//    int ty, tx;
//    memset(visited, 0, sizeof(visited));
//    int n, m;
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for (int j=1; j<=m; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 'R') {
//                ry = i;
//                rx = j;
//                board[i][j] = '.';
//            }
//            else if(board[i][j] == 'B') {
//                by = i;
//                bx = j;
//                board[i][j] = '.';
//            }
//        }
//    }
//    visited[ry][rx][by][bx] = 1;
//    dfs(ry, rx, by, bx, 1);
//    if(ans > 10) cout << -1;
//    else cout << ans;
//}

//#include<cstdio>
//int n, m;
//int rx, ry, bx, by;
//char a[11][11];
//int ans = 11;
//void go(int rx, int ry, int bx, int by, int mx, int my, int cnt){
//    if (cnt >= ans) return;
//    int rm = 0, bm = 0;
//    if (mx != my){
//        while (a[bx + mx][by + my] - '#'){
//            bx += mx;
//            by += my;
//            bm++;
//            if (!(a[bx][by] - 'O'))
//                return;
//        }
//        while (a[rx + mx][ry + my] - '#'){
//            rx += mx;
//            ry += my;
//            rm++;
//            if (!(a[rx][ry] - 'O')){
//                ans = ans < cnt ? ans : cnt;
//                return;
//            }
//        }
//    }
//    if (rx == bx && ry == by)
//        if (rm < bm)
//            bx -= mx, by -= my;
//        else
//            rx -= mx, ry -= my;
//    if (mx == 0){
//        go(rx, ry, bx, by, 1, 0, cnt + 1);
//        go(rx, ry, bx, by, -1, 0, cnt + 1);
//    }
//    if (my == 0){
//        go(rx, ry, bx, by, 0, 1, cnt + 1);
//        go(rx, ry, bx, by, 0, -1, cnt + 1);
//    }
//}
//int main(){
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//        scanf("%s", a[i]);
//    for (int i = 1; i < n - 1; i++){
//        for (int j = 1; j < m - 1; j++){
//            if (a[i][j] == 'R')
//                rx = i, ry = j;
//            if (a[i][j] == 'B')
//                bx = i, by = j;
//        }
//    }
//    go(rx, ry, bx, by, 0, 0, 0);
//    printf("%d", ans < 11 ? ans : -1);
//}