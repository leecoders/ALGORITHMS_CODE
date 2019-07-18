//#include "bits/stdc++.h"
//using namespace std;
//
//const int INF = 1234567890;
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int board[51][51];
//bool visited[51][51];
//int total;
//int ans = INF;
//int n, m;
//vector<pair<int, int> > candi;
//vector<int> v;
//
//void show() {
//    cout << '\n';
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cout << visited[i][j] << ' ';
//        }
//        cout << '\n';
//    }
//}
//
//void dfs(int now, int cnt) {
//    if(cnt == m) {
//        memset(visited, 0, sizeof(visited));
//        queue<pair<int, int> > q;
//        int sum = 0;
//        for(int i=0; i < m; ++i) {
//            int y = candi[v[i]].first;
//            int x = candi[v[i]].second;
//            visited[y][x] = 1;
//            q.push(make_pair(y, x));
//        }
//        int t = 0;
//        while(!q.empty()) {
//            t++;
//            if(t >= ans) return;
//            int len = q.size();
//            for(int l=0; l<len; ++l) {
//                int y = q.front().first;
//                int x = q.front().second;
//                q.pop();
//                for(int i=0; i<4; ++i) {
//                    int ny = y + dy[i];
//                    int nx = x + dx[i];
//                    if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//                    if(visited[ny][nx]) continue;
//                    if(board[ny][nx] == 0) {
//                        sum++;
//                        visited[ny][nx] = 1;
//                        q.push(make_pair(ny, nx));
//                    }
//                    else if(board[ny][nx] == 2) {
//                        visited[ny][nx] = 1;
//                        q.push(make_pair(ny, nx));
//                    }
//                }
//            }
//            if(sum == total) {
//                ans = min(ans, t);
//                break;
//            }
//        }
//        return;
//    }
//    for(int i=now+1; i < candi.size(); ++i) {
//        v.push_back(i);
//        dfs(i, cnt + 1);
//        v.pop_back();
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=1; i<=n; ++i) {
//        for(int j=1; j<=n; ++j) {
//            cin >> board[i][j];
//            if(board[i][j] == 0) {
//                total++;
//            }
//            else if(board[i][j] == 2) {
//                candi.push_back(make_pair(i, j));
//            }
//        }
//    }
//    if(total == 0) {
//        cout << 0;
//        return 0;
//    }
//    else {
//        dfs(-1, 0);
//    }
//    if(ans == INF) {
//        cout << -1;
//        return 0;
//    }
//    cout << ans;
//}