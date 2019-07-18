// dfs
//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, m;
//vector<pair<int, int>> board[101][101];
//bool light[101][101];
//bool visited[101][101];
//int cnt = 1;
//
//void dfs(int y, int x) {
//    for(int i=0; i < board[y][x].size(); ++i) {
//        int b = board[y][x][i].first;
//        int a = board[y][x][i].second;
//        if(!light[b][a]) {
//            cnt++;
//            light[b][a] = 1;
//            if(visited[b][a]) {
//                dfs(b, a);
//            }
//        }
//    }
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//        if(!visited[ny][nx]) {
//            visited[ny][nx] = 1;
//            if(light[ny][nx]) {
//                dfs(ny, nx);
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=0; i<m; ++i) {
//        int x, y, a, b;
//        cin >> y >> x >> b >> a;
//        board[y][x].push_back(make_pair(b, a));
//    }
//    light[1][1] = 1;
//    visited[1][1] = 1;
//    dfs(1, 1);
//    cout << cnt;
//}

// bfs
//#include "bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//int n, m;
//vector<pair<int, int>> board[101][101];
//bool light[101][101];
//bool visited[101][101];
//int cnt = 1;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n >> m;
//    for(int i=0; i<m; ++i) {
//        int x, y, a, b;
//        cin >> y >> x >> b >> a;
//        board[y][x].push_back(make_pair(b, a));
//    }
//    queue<pair<int, int>> q;
//    light[1][1] = 1;
//    visited[1][1] = 1;
//    q.push(make_pair(1, 1));
//    while(!q.empty()) {
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//        for(int i=0; i<board[y][x].size(); ++i) {
//            int b = board[y][x][i].first;
//            int a = board[y][x][i].second;
//            if(!light[b][a]) {
//                cnt++;
//                light[b][a] = 1;
//                if(visited[b][a]) {
//                    q.push(make_pair(b, a));
//                }
//            }
//        }
//        for(int i=0; i<4; ++i) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if(ny < 1 || nx < 1 || ny > n || nx > n) continue;
//            if(!visited[ny][nx]) {
//                visited[ny][nx] = 1;
//                if(light[ny][nx]) {
//                    q.push(make_pair(ny, nx));
//                }
//            }
//        }
//    }
//    cout << cnt;
//}