//#include"bits/stdc++.h"
//using namespace std;
//
//int n, m;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//char board[1001][1001];
//
//int end(int y, int x) {
//    return y == 1 || y == n || x == 1 || x == m;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int tt;
//    cin >> tt;
//    for(int tc=1; tc <= tt; ++tc) {
//        queue<pair<int, int>> f, p;
//        cin >> m >> n;
//        for(int i=1; i<=n; ++i) {
//            for(int j=1; j<=m; ++j) {
//                cin >> board[i][j];
//                if(board[i][j] == '@') p.push(make_pair(i, j));
//                if(board[i][j] == '*') f.push(make_pair(i, j));
//            }
//        }
//        int day = 0;
//        int ans = 0;
//        while(!p.empty()) {
//            day++;
//            int len_f = f.size();
//            int len_p = p.size();
//            for(int l=0; l<len_f; ++l) {
//                int y = f.front().first;
//                int x = f.front().second;
//                f.pop();
//                for(int i=0; i<4; ++i) {
//                    int ny = y + dy[i];
//                    int nx = x + dx[i];
//                    if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                    if(board[ny][nx] == '.' || board[ny][nx] == '@') {
//                        board[ny][nx] = '*';
//                        f.push(make_pair(ny, nx));
//                    }
//                }
//            }
//            for(int l=0; l<len_p; ++l) {
//                int y = p.front().first;
//                int x = p.front().second;
//                p.pop();
//                if(end(y, x)) {
//                    ans = day;
//                    break;
//                }
//                for(int i=0; i<4; ++i) {
//                    int ny = y + dy[i];
//                    int nx = x + dx[i];
//                    if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                    if(board[ny][nx] == '.') {
//                        board[ny][nx] = '@';
//                        p.push(make_pair(ny, nx));
//                    }
//                }
//            }
//            if(ans) break;
//        }
//        if(ans)
//            cout << ans << '\n';
//        else
//            cout << "IMPOSSIBLE" << '\n';
//    }
//}