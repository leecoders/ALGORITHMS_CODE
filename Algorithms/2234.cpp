//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, -1, 0, 1};
//int dx[] = {-1, 0, 1, 0};
//int board[51][51];
//int color[51][51];
//int cnt = 0;
//int n, m;
//int ans1, ans2, ans3 = 0;
//int Size[2501] = {0};
//
//int solve12() {
//    int mx = 0;
//    queue<pair<int,int>> q;
//    bool check[n+1][m+1];
//    memset(check, 0, sizeof(check));
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            if(!check[i][j]) {
//                int width = 1;
//                check[i][j] = 1;
//                cnt++;
//                q.push(make_pair(i, j));
//                while(!q.empty()) {
//                    int y = q.front().first;
//                    int x = q.front().second;
//                    q.pop();
//                    if(!color[y][x]) {
//                        color[y][x] = cnt;
//                        Size[color[y][x]]++;
//                    }
//                    for(int k=0; k<4; ++k) { // 서 북 동
//                        int ny = y + dy[k];
//                        int nx = x + dx[k];
//                        if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                        if(check[ny][nx]) continue;
//                        if(!(board[y][x] & (1<<k))) {
//                            q.push(make_pair(ny, nx));
//                            check[ny][nx] = 1;
//                            width++;
//                        }
//                    }
//                }
//                mx = max(mx, width);
//            }
//        }
//    }
//    return mx;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    cin >> m >> n;
//    for(int i=1; i<=n; ++i)
//        for(int j=1; j<=m; ++j)
//            cin >> board[i][j];
//    ans2 = solve12();
//    ans1 = cnt;
//    cout << ans1 << '\n';
//    cout << ans2 << '\n';
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=m; ++j) {
//            for(int k=0; k<4; ++k) {
//                int ny = i + dy[k];
//                int nx = j + dx[k];
//                if(ny < 1 || nx < 1 || ny > n || nx > m) continue;
//                if(color[i][j] != color[ny][nx]) {
//                    ans3 = max(ans3, Size[color[i][j]] + Size[color[ny][nx]]);
//                }
//            }
//        }
//    }
//    cout << ans3;
//}