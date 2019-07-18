//#include "bits/stdc++.h"
//using namespace std;
//
//int n, m, d;
//int board[17][17];
//int temp[17][17];
//vector<int> vow;
//vector<pair<int, int>> target;
//vector<pair<int, int>> next_target;
//int ans;
//int kills;
//
//void copy() {
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            board[i][j] = temp[i][j];
//        }
//    }
//}
//
//void rain() {
//    for(int i=n+1; i>=1; --i) {
//        for(int j=1; j<=m; ++j) {
//            board[i][j] = board[i-1][j];
//        }
//    }
//}
//
//int calc(int sy, int sx, int y, int x) {
//    return abs(sy - y) + abs(sx - x);
//}
//
//void kill() {
//    for(int i=0; i<next_target.size(); ++i) {
//        int y = next_target[i].first;
//        int x = next_target[i].second;
//        if(board[y][x]) {
//            board[y][x] = 0;
//            kills++;
//        }
//    }
//}
//
//void Find(int now) {
//    int sy = n + 1;
//    int sx = now;
//    int mn = 50;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            int dist = calc(sy, sx, i, j);
//            if(board[i][j] && dist <= d) {
//                mn = min(mn, dist);
//            }
//        }
//    }
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            int dist = calc(sy, sx, i, j);
//            if(board[i][j] && dist == mn) {
//                target.push_back(make_pair(j, i));
//            }
//        }
//    }
//    sort(target.begin(), target.end());
//    if(!target.size()) return;
//    int y = target[0].second;
//    int x = target[0].first;
//    next_target.push_back(make_pair(y, x));
//}
//
//void dfs(int now, int cnt) {
//    if(cnt == 3) {
//        kills = 0;
//        copy();
//        for(int i=0; i<=n; ++i) {
//            next_target.clear();
//            for (int j = 0; j < vow.size(); ++j) {
//                target.clear();
//                Find(vow[j]);
//            }
//            kill();
//            rain();
//            ans = max(ans, kills);
//        }
//        return;
//    }
//
//    for(int i = now + 1; i<=m; ++i) {
//        vow.push_back(i);
//        dfs(i, cnt + 1);
//        vow.pop_back();
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m >> d;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            cin >> temp[i][j];
//        }
//    }
//    dfs(0, 0);
//    cout << ans;
//}