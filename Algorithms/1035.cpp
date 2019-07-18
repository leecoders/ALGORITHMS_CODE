//#include"bits/stdc++.h"
//using namespace std;
//
//int dy[] = {0, 0, 1, -1};
//int dx[] = {1, -1, 0, 0};
//char mat[5][5];
//bool visited[5][5];
//vector<pair<int, int>> v;
//int len;
//int ans = INT_MAX;
//
//int calc(int a, int b, int c, int d) {
//    return abs(a - c) + abs(b - d);
//}
//
//void dfs(int y, int x) {
//    for(int i=0; i<4; ++i) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if(ny < 0 || nx < 0 || ny > 4 || nx > 4) continue;
//        if(mat[ny][nx] == '.' || visited[ny][nx]) continue;
//        visited[ny][nx] = 1;
//        dfs(ny, nx);
//    }
//}
//
//bool is_only() {
//    int cnt = 0;
//    memset(visited, 0, sizeof(visited));
//    for(int i=0; i<5; ++i) {
//        for(int j=0; j<5; ++j) {
//            if(mat[i][j] == '*' && !visited[i][j]) {
//                visited[i][j] = 1;
//                cnt++;
//                dfs(i, j);
//            }
//        }
//    }
//    if(cnt == 1) return true;
//    else return false;
//}
//
//void dfs2(int cnt, int d) {
//    if(d >= ans) return;
//    if(cnt == len) {
//        if(is_only()) {
//            ans = min(ans, d);
//        }
//        return;
//    }
//    for(int i=0; i<5; ++i) {
//        for(int j=0; j<5; ++j) {
//            if(mat[i][j] == '.') {
//                mat[i][j] = '*';
//                dfs2(cnt + 1, d + calc(v[cnt].first, v[cnt].second, i, j));
//                mat[i][j] = '.';
//            }
//        }
//    }
//}
//
//int main() {
//    bool first = true;
//    for(int i=0; i<5; ++i) {
//        for(int j=0; j<5; ++j) {
//            cin >> mat[i][j];
//            if(mat[i][j] == '*') {
//                v.push_back(make_pair(i, j));
//                mat[i][j] = '.';
//            }
//        }
//    }
//    len = v.size();
//    dfs2(0, 0);
//    cout << ans;
//}