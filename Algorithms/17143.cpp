//#include "bits/stdc++.h"
//using namespace std;
//
//int h, w, n;
//int ans;
//int board[101][101];
//int dy[] = {-1, 1, 0, 0};
//int dx[] = {0, 0, 1, -1};
//
//void show() {
//    for(int i=1; i<=h; ++i) {
//        for(int j=1; j<=w; ++j) {
//            cout << board[i][j];
//        }
//        cout << '\n';
//    }
//    cout << '\n';
//}
//
//struct shark {
//    int y, x, s, d, z;
//    shark(int _y, int _x, int _s, int _d, int _z) {
//        y = _y;
//        x = _x;
//        s = _s;
//        d = _d;
//        z = _z;
//    }
//};
//
//vector<shark> v;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> h >> w >> n;
//    for(int i=0; i<n; ++i) {
//        int a,b,c,d,e;
//        cin >> a >> b >> c >> d >> e;
//        if(d==0 || d==2) c % (h * 2 - 2);
//        else c % (w * 2 - 2);
//        v.push_back(shark(a,b,c,d-1,e));
//        board[a][b] = i+1; // 0 이면 없는 것 1부터 시작
//    }
//    show();
//    for(int i=1; i<=w; ++i) {
//        for(int j=1; j<=h; ++j) {
//            if(board[j][i] != 0) {
//                ans += v[board[j][i]-1].z;
//                board[j][i] = 0;
//                break;
//            }
//        }
//        for(int j=0; j<n; ++j) {
//            int ty = v[j].y;
//            int tx = v[j].x;
//            if(board[ty][tx] == 0) continue;
//            board[ty][tx] = 0;
//            for(int k=0; k<v[j].s; ++k) {
//                ty += dy[v[j].d];
//                tx += dx[v[j].d];
//                if(ty == 1 || tx == 1 || ty == h || tx == w) {
//                    if(v[j].d == 0 || v[j].d == 2) v[j].d++;
//                    else v[j].d--;
//                }
//            }
//            if(board[ty][tx]==0 || v[board[ty][tx]-1].z < v[j].z) board[ty][tx] = j+1;
//        }
//        show();
//    }
//    cout << ans;
//}
//
//// 하.. 상어들이 동시에 이동하니까.. 같은 위치에 올려놓고 해야되네..