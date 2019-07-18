//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[351][351];
//int n, m, k;
//
//struct cell {
//    int y, x, state, end;
//    cell(int _y, int _x, int _state, int _end) {
//        y = _y;
//        x = _x;
//        state = _state;
//        end = _end; // 상태 변화 시간
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int TC;
//    cin >> TC;
//    for(int tc=1; tc<=TC; ++tc) {
//        memset(board, 0, sizeof(board));
//        cin >> n >> m >> k;
//        queue<cell> q[11];
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=m; ++j) {
//                int input;
//                cin >> input;
//                if(input) {
//                    board[i+150][j+150] = input;
//                    q[input].push(cell(i+150, j+150, 0, input));
//                }
//            }
//        }
//        int t=0;
//        while(1) {
//            t++;
//            for(int l = 10; l >= 1; --l) { // l은 생명력
//                int len = q[l].size();
//                for(int i=0; i<len; ++i) {
//                    int y = q[l].front().y;
//                    int x = q[l].front().x;
//                    int state = q[l].front().state;
//                    int end = q[l].front().end;
//                    q[l].pop();
//                    if(state) {
//                        if(t + l - 1 == end) { // 번식(활성 상태 이후 첫 1시간에 번식. but, life가 1이면 번식 후 바로 죽어야함->함정)
//                            if(l != 1) // 1이면 번식할 때도 된거지만 죽을 때도 됐잖아!!
//                                q[l].push(cell(y, x, 1, end)); // 자기 자리에 있던 거 그대로 넣고 (1이면 죽어야지!!!!)
//                            for(int j=0; j<4; ++j) {
//                                int ny = y + dy[j];
//                                int nx = x + dx[j];
//                                if(board[ny][nx]) continue; // 이미 있으면 X
//                                board[ny][nx] = l;
//                                q[l].push(cell(ny, nx, 0, t + l));
//                            }
//                        }
//                        else if(end == t) { // 활성 상태에서 죽을 때가 됐으면
//                            continue;
//                        }
//                        else { // 아무것도 아님
//                            q[l].push(cell(y, x, 1, end)); // 다시 넣어
//                        }
//                    }
//                    else {
//                        if(end == t) { // 활성으로 변화
//                            q[l].push(cell(y, x, 1, end + l));
//                        }
//                        else { // 아무것도 아님
//                            q[l].push(cell(y, x, 0, end));
//                        }
//                    }
//                }
//            }
//            if(t == k) break;
//        }
//        int ans = 0;
//        for(int i=1; i<=10; ++i) ans += q[i].size();
//        cout << "#" << tc << " " << ans << '\n';
//    }
//}