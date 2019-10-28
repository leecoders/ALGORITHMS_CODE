//#include "bits/stdc++.h"
//using namespace std;
//
//struct node {
//    int r, c, dir;
//    node(int _r, int _c, int _dir) {
//        r = _r;
//        c = _c;
//        dir = _dir;
//    }
//};
//int dy[] = {0, 0, -1, 1};
//int dx[] = {1, -1, 0, 0};
//int n, k;
//int board_info[13][13];
//vector<int> board[13][13];
//vector<node> v;
//
//void show() {
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<n; ++j) {
//            for(int k=0; k<board[i][j].size(); ++k) {
//                cout << board[i][j][k]+1;
//            }
//            if(!board[i][j].size())
//                cout << 0;
//            cout << ' ';
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//int main() {
//    cin >> n >> k;
//    for(int i=0; i<n; ++i) {
//        for(int j=0; j<n; ++j) {
//            cin >> board_info[i][j];
//        }
//    }
//    for(int i=0; i<k; ++i) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        v.push_back(node(a-1,b-1,c-1));
//        board[a-1][b-1].push_back(i);
//    }
//    for(int turn=1; turn<=1000; ++turn) {
//        for(int i=0; i<k; ++i) {
//            if(board[v[i].r][v[i].c][0] != i) {
//                continue;
//            }
//            vector<int> vs = board[v[i].r][v[i].c];
//            int ny = v[i].r + dy[v[i].dir];
//            int nx = v[i].c + dx[v[i].dir];
//            if((ny < 0 || nx < 0 || ny >= n || nx >= n) || board_info[ny][nx] == 2) {
//                if(v[i].dir == 0 || v[i].dir == 2) v[i].dir++;
//                else v[i].dir--;
//                int nny = v[i].r + dy[v[i].dir];
//                int nnx = v[i].c + dx[v[i].dir];
//                if(!((nny < 0 || nnx < 0 || nny >= n || nnx >= n) || board_info[nny][nnx] == 2)) {
//                    if(board_info[nny][nnx] == 1) {
//                        reverse(vs.begin(), vs.end());
//                    }
//                    board[v[i].r][v[i].c].clear();
//                    for(int j=0; j<vs.size(); ++j) {
//                        v[vs[j]].r = nny;
//                        v[vs[j]].c = nnx;
//                        board[nny][nnx].push_back(vs[j]);
//                        if(board[nny][nnx].size() > 3) {
//                            cout << turn;
//                            return 0;
//                        }
//                    }
//                }
//            } else if(board_info[ny][nx] == 0) {
//                board[v[i].r][v[i].c].clear();
//                for(int j=0; j<vs.size(); ++j) {
//                    v[vs[j]].r = ny;
//                    v[vs[j]].c = nx;
//                    board[ny][nx].push_back(vs[j]);
//                    if(board[ny][nx].size() > 3) {
//                        cout << turn;
//                        return 0;
//                    }
//                }
//            } else if(board_info[ny][nx] == 1) {
//                board[v[i].r][v[i].c].clear();
//                reverse(vs.begin(), vs.end());
//                for(int j=0; j<vs.size(); ++j) {
//                    v[vs[j]].r = ny;
//                    v[vs[j]].c = nx;
//                    board[ny][nx].push_back(vs[j]);
//                    if(board[ny][nx].size() > 3) {
//                        cout << turn;
//                        return 0;
//                    }
//                }
//            }
//        }
//    }
//    cout << -1;
//}